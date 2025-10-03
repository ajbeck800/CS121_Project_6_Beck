# CS121_Project_6_Beck
## (lab) Heap of students part 1

```mermaid
classDiagram
    class Student{
      # string studentString
      # string firstName
      # string lastName
      # Date* birthDate
      # Date* gradDate
      # Address* address
      # int creditHours
      + Student()
      + ~Student()
      + void init(studentString)
      + void printStudent()
      + string getLastFirst()
      + string getFirstName()
      + string getLastName()
      + int getCreditHours()
    }
    class Address{
      # string street
      # string city
      # string state
      # string zip
      + Address()
      + void init(street, city, state, zip)
      + void printAddress()
    }
    class Date{
      # string dateString
      # int month
      # int day
      # int year
      + Date()
      + void init(dateString)
      + void printDate()
    }

Student o-- Address
Student o-- Date
```

### class student()
```
in header:
  initialize strings studentString, firstName, lastName

  initialize integer creditHours
in constructor:
  go through each student
  initialize that student with firstName, lastName, birthDate, gradDate, address, and creditHours
  put firstName, lastName, birthDate, gradDate, address, and creditHours into studentString in the format fn,ln,a,bd,gd,ch
```

#### void init(studentString)
```

```

#### void printStudent()
```

```

#### string getFirstName()
```

```

#### string getLastName()
```

```

#### int getCreditHours()
```

```

### class address()
```
in header:
  initialize strings street, city, state, zip
in constructor:
  go through each student
  initialize that student with street, city, state, and zip
```

#### void init(street, city, state, zip)
```
string address = street, city, state, zip 
```

#### void printAddress()
```
for each student:
  print address
```

### class date()
```
in header:
  initialize string dateString
  initialize integers month, day, year
in constructor:
  go through each student
  initialize that student with month, day, and year
  put month, day, and year into dateString in the format mm/dd/yyyy
```

#### void init(dateString)
```

```

#### void printDate()
```
for each student:
  print dateString
```