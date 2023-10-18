#!/usr/bin/env python3

import sys
from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker
from model_person import Person

if __name__ == "__main__":
    engine = create_engine('mysql+mysqldb://{}:{}@localhost/{}'
                           .format(sys.argv[1], sys.argv[2], sys.argv[3]), pool_pre_ping=True)

    Session = sessionmaker(bind=engine)
    session = Session()

    people = session.query(Person).order_by(Person.id).all()

    for person in people:
        print("{}: {}".format(person.id, person.name))

    session.close()
