#!/usr/bin/python3
import sys
from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker
from model_description import Description
from model_person import Person

if __name__ == "__main__":
    engine = create_engine('mysql+mysqldb://{}:{}@localhost/{}'.
                           format(sys.argv[1], sys.argv[2], sys.argv[3]), pool_pre_ping=True)

    Session = sessionmaker(bind=engine)
    session = Session()

    descriptions = session.query(Description, Person).join(Person).order_by(Description.id).all()

    for description, person in descriptions:
        print("{}: {}".format(person.name, description.word))

    session.close()
