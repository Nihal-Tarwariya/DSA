CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      # Write your MySQL query statement below.
        case 
            when (select count(distinct salary) from employee)< n then Null
            else 
                ( select salary from 
                (select salary,
                    dense_rank() 
                    over(order by salary desc)
                    as rnk
                    from employee) 
                    as tb1
                    where rnk = N limit 1 
                )
        end
  );
END