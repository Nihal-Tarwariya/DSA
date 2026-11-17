select 
    d.name as Department,
    e.name as Employee,
    Salary
from Employee e join
    Department d on
    e.departmentId = d.id
where (d.name,Salary) In
(select d.name,Max(Salary)as salary from employee e join Department d on e.departmentId = d.id group by d.name )