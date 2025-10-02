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