#!/usr/bin/env python3
import MySQLdb
import sys

def select_names(username, password, database_name):
    db = MySQLdb.connect(host="localhost", port=3306, user=username, password=password, db=database_name)
    cursor = db.cursor()

    cursor.execute("SELECT * FROM people ORDER BY id")
    people = cursor.fetchall()

    for person in people:
        print(person)

    cursor.close()
    db.close()

if __name__ == "__main__":
    if len(sys.argv) != 4:
        print("Usage: {} <username> <password> <database name>")
        sys.exit(1)

    username, password, database = sys.argv[1], sys.argv[2], sys.argv[3]
    select_names(username, password, database)
# ./0-print_people.py root root orm_db