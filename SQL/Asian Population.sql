SELECT SUM(CT.POPULATION)
FROM CITY CT
JOIN COUNTRY CN ON CN.CODE = CT.COUNTRYCODE
WHERE CN.CONTINENT = 'ASIA'
