//
//  RectManager.h
//  IDCardOCRDemo
//
//  Created by iOS Pan on 2018/5/3.
//  Copyright © 2018年 PanPan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RectManager : UIView

@property (nonatomic, assign)CGRect subRect;

+ (CGRect)getEffectImageRect:(CGSize)size;
+ (CGRect)getGuideFrame:(CGRect)rect;
+ (int)docode:(unsigned char *)pbBuf len:(int)tLen;
+ (CGRect)getCorpCardRect:(int)width  height:(int)height guideRect:(CGRect)guideRect charCount:(int) charCount;
+ (char *)getNumbers;

@end
