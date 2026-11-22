# Write your MySQL query statement below
With cte as
(   select id,
            recordDate as currDate,
            temperature as curTemp,
            Lag(recordDate) over (order by recordDate) as prev_date,
            Lag(temperature) over (order by recordDate) as prev_temp
    from Weather
)
   
    select id from cte 
    where DateDIFF(currDate,prev_date) = 1 and
          curTemp>prev_temp