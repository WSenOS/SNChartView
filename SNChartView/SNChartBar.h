//
//  WChartBar.h
//  WChartView
//
//  Created by wangsen on 15/12/24.
//  Copyright © 2015年 wangsen. All rights reserved.
//

#import <UIKit/UIKit.h>

static const CGFloat chartBarStartX = 80.f;
static const CGFloat chartBarTheXAxisSpan = 50.f;
static const CGFloat chartBarTheYAxisSpan = 50.f;

@interface SNChartBar : UIView

@property (nonatomic, strong) NSArray * xValues;
@property (nonatomic, strong) NSArray * yValues;

@property (nonatomic, assign) CGFloat yMax;

/**
 *  @author sen, 15-12-24 10:12:59
 *
 *  开始绘制图表
 */
- (void)startDrawBars;

@end
