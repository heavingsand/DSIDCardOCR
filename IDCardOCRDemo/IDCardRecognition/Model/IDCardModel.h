//
//  IDCardModel.h
//  IDCardOCRDemo
//
//  Created by iOS Pan on 2018/5/3.
//  Copyright © 2018年 PanPan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IDCardModel : NSObject

@property (nonatomic,assign) int type; //1:正面  2:反面
@property (nonatomic,copy) NSString *IDNumber; //身份证号
@property (nonatomic,copy) NSString *name; //姓名
@property (nonatomic,copy) NSString *gender; //性别
@property (nonatomic,copy) NSString *nation; //民族
@property (nonatomic,copy) NSString *address; //地址
@property (nonatomic,copy) NSString *authority; //签发机关
@property (nonatomic,copy) NSString *validity; //有效期

@end
