SELECT DISTINCT CITY
FROM STATION
WHERE CITY NOT REGEXP 'A$|E$|I$|O$|U$'
