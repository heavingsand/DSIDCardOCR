//
//  UIAlertController+Extend.h
//  IDCardOCRDemo
//
//  Created by iOS Pan on 2018/5/3.
//  Copyright © 2018年 PanPan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIAlertController (Extend)

// 创建AlertController
+(instancetype)alertControllerWithTitle:(NSString *)title message:(NSString *)message okAction:(UIAlertAction *)okAction cancelAction:(UIAlertAction *)cancelAction;

// 创建ActionSheetController
+(instancetype)actionSheetControllerWithTitle:(NSString *)title message:(NSString *)message okAction:(UIAlertAction *)okAction cancelAction:(UIAlertAction *)cancelAction;

@end
