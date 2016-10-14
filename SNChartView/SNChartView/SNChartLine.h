//
//  WChartLine.h
//  WChartView
//
//  Created by wangsen on 15/12/13.
//  Copyright © 2015年 wangsen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIBezierPath+curved.h"

@interface SNChartLine : UIView

@property (nonatomic, strong) NSArray * xValues;
@property (nonatomic, strong) NSArray * yValues;

@property (nonatomic, assign) CGFloat yMax;

@property (nonatomic, assign) BOOL curve;//是否曲线
@property (nonatomic, assign) BOOL shadow;//是否有折线阴影

/**
 *  @author sen, 15-12-24 10:12:59
 *
 *  开始绘制图表
 */
- (void)startDrawLines;

@end
