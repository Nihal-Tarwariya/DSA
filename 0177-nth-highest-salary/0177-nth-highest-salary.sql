CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      # Write your MySQL query statement below.
        CASE 
            when (Select count(Distinct Salary) from Employee)<N then NULL
            else (
                    select salary from
                    (select salary,
                        row_Number() over(
                            order by salary desc
                        ) as row_num 
                    from (
                        select distinct salary from employee
                    )as unq_sal 
                    )as rnk where row_num = N
            )
        END
  );
END