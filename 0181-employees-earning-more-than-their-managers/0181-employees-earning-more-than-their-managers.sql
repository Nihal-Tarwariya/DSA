# Write your MySQL query statement below
with EM as (select 
        e.name AS employee_name,
        e.salary AS employee_salary,
        m.salary AS manager_salary
    from employee e
    join employee m
    on e.managerId = m.id
)

select employee_name as Employee
    from EM where
    employee_salary > manager_salary
