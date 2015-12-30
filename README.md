#SNChartView
实现简单的图表线性图，柱状图

![image](https://github.com/WSeniOS/SNChartView/blob/master/SNChartView/images/bar.png)            ![image](https://github.com/WSeniOS/SNChartView/blob/master/SNChartView/images/line.png)

#使用方式
#线性图

    SNChart * chart = [[SNChart alloc] initWithFrame:CGRectMake(0, 100, self.view.frame.size.width,self.view.frame.size.height - 100) withDataSource:self andChatStyle:SNChartStyleLine];
    chart.curve = YES;//曲线 折线开关
    [chart showInView:self.view];
        - (NSArray *)chatConfigXValue:(SNChart *)chart {
    return @[@"12-1",@"12-2",@"12-3",@"12-4",@"12-5",@"12-6",@"12-7",@"12-8",@"12-9",@"12-10"];
    }
    - (NSArray *)chatConfigYValue:(SNChart *)chart {
    //return @[@"0.1",@"0.5",@"0.70",@"0.30",@"0.50",@"0.014",@"0",@"0.14"];
    return @[@"100",@"50",@"70",@"30",@"50",@"14",@"5",@"14",@"5",@"14"];
    }

#柱状图

    SNChart * chart = [[SNChart alloc] initWithFrame:CGRectMake(0, 100, self.view.frame.size.width, self.view.frame.size.height - 100) withDataSource:self andChatStyle:SNChartStyleBar];
    [chart showInView:self.view];
    - (NSArray *)chatConfigXValue:(SNChart *)chart {
    return @[@"12-1",@"12-2",@"12-3",@"12-4",@"12-5",@"12-6",@"12-7",@"12-8",@"12-9",@"12-10"];
    }
    - (NSArray *)chatConfigYValue:(SNChart *)chart {
    //return @[@"0.1",@"0.5",@"0.70",@"0.30",@"0.50",@"0.014",@"0",@"0.14"];
    return @[@"100",@"50",@"70",@"30",@"50",@"14",@"5",@"14",@"5",@"14"];
    }




