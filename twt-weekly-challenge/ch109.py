month_days=[31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

for i in range(int(input())):
    dates=input().split()
    date1_mm, date1_dd = [int(x) for x in dates[0].split('-')]
    date2_mm, date2_dd = [int(x) for x in dates[1].split('-')]
    num_months, num_days = 0, 0
    if(date2_dd < date1_dd):
        num_days=date2_dd-date1_dd+(sum(month_days[date1_mm:date2_mm])%max(month_days[date1_mm:date2_mm]))
        num_months=date2_mm-date1_mm-1
    else:
        num_days=date2_dd-date1_dd
        num_months=date2_mm-date1_mm
    print(num_months, num_days)
    
