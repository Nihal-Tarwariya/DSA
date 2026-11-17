select  
    Department,
    Employee,
    Salary from
(select  
    d.name as Department,
    e.name as Employee,
    Salary,
    Dense_Rank() over(Partition by d.name order by Salary Desc) as rnk
    from 
    Employee e
    join 
    Department d
    on e.departmentID = d.id
    ) as tb1 
    where rnk < 4