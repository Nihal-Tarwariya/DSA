# Write your MySQL query statement below
select Distinct num as ConsecutiveNums 
    from(select num,
    lag(num,1,NULL) over (order by id) as pre_num,
    lead(num,1,NULL) over (order by id) as next_num
        from Logs) as tb1  
    where pre_num = num AND num = next_num