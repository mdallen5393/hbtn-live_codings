#!/usr/bin/env python3
import MySQLdb
import sys

def descriptions_by_users(username, password, database_name):
    db = MySQLdb.connect(host="localhost", port=3306, user=username, passwd=password, db=database_name)
    cursor = db.cursor()

    cursor.execute("""
        SELECT people.name, descriptions.word
        FROM descriptions
        INNER JOIN people ON descriptions.person_id = people.id
        ORDER BY people.name
    """)
    descriptions = cursor.fetchall()

    for description in descriptions:
        print(description)

    cursor.close()
    db.close()

if __name__ == "__main__":
    if len(sys.argv) != 4:
        print("Usage: {} <username> <password> <database_name>".format(sys.argv[0]))
        sys.exit(1)

    username, password, database_name = sys.argv[1], sys.argv[2], sys.argv[3]
    descriptions_by_users(username, password, database_name)
