#!/usr/bin/env python3
import MySQLdb
import sys

def select_states(username, password, database_name):
    # Establish a MySQL database connection
    db = MySQLdb.connect(host="localhost", port=3306, user=username, passwd=password, db=database_name)
    cursor = db.cursor()

    # Execute the SQL query to retrieve and display the statesS
    cursor.execute("SELECT * FROM people ORDER BY id")
    people = cursor.fetchall()

    for person in people:
        print(person)

    cursor.close()
    db.close()

if __name__ == "__main__":
    if len(sys.argv) != 4:
        print("Usage: {} <username> <password> <database_name>".format(sys.argv[0]))
        sys.exit(1)

    username, password, database_name = sys.argv[1], sys.argv[2], sys.argv[3]
    select_states(username, password, database_name)
