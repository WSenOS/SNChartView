//
//  SNChartConst.h
//  SNChartView
//
//  Created by wangsen on 2016/10/14.
//  Copyright © 2016年 wangsen. All rights reserved.
//

#ifndef SNChartConst_h
#define SNChartConst_h

/*
 * 表格
 */
#define kCirCleColor [UIColor colorWithRed:0.859f green:0.871f blue:0.882f alpha:1.00f]
#define kHVLineLineColor [UIColor colorWithRed:0.918f green:0.929f blue:0.949f alpha:1.00f]
#define kHVBarLineColor [UIColor lightGrayColor]
#define kBulldesFont [UIFont systemFontOfSize:10]

static const NSInteger kYEqualPaths = 5;//y轴为5等分
static const CGFloat kTopSpace = 50.f;//距离顶部y值

/*
 * bar
 */
#define kBarLineColor [UIColor colorWithRed:1.000f green:0.769f blue:0.000f alpha:1.00f]

static const CGFloat chartBarStartX = 80.f;//图表起始位置
static const CGFloat chartBarTheXAxisSpan = 50.f;//横向图表间隔
static const CGFloat chartBarTheYAxisSpan = 50.f;//纵向图表间隔
static const CGFloat kBarWidth = 30.f;//bar宽度

/*
 * line
 */
#define kLineColor [UIColor colorWithRed:1.000f green:0.769f blue:0.000f alpha:1.00f]

static const CGFloat chartLineStartX = 80.f;//图表起始位置
static const CGFloat chartLineTheXAxisSpan = 50.f;//横向图表间隔
static const CGFloat chartLineTheYAxisSpan = 50.f;//纵向图表间隔

#endif /* SNChartConst_h */
