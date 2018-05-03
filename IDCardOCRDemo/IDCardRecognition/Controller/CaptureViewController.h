//
//  CaptureViewController.h
//  IDCardOCRDemo
//
//  Created by iOS Pan on 2018/5/3.
//  Copyright © 2018年 PanPan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IDCardModel.h"

typedef NS_ENUM(NSUInteger, DSScanType) {
    FrontOfIDCardScan,          //身份证正面扫描
    BackOfIDCardScan,           //身份证背面扫描
};

@interface CaptureViewController : UIViewController

/**
 扫描类型(例如身份证正面或者背面)
 */
@property (nonatomic, assign) DSScanType scanType;

/**
 扫描结果回调(包括model数据和image)
 */
@property (nonatomic, copy) void (^IDCardInfoBlock)(IDCardModel *result, UIImage *image);

@end
