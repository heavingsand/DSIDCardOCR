//
//  UIImage+Extend.h
//  IDCardOCRDemo
//
//  Created by iOS Pan on 2018/5/3.
//  Copyright © 2018年 PanPan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface UIImage (Extend)

+ (UIImage *)imageFromSampleBuffer:(CMSampleBufferRef)sampleBuffer;
+ (UIImage *)getImageStream:(CVImageBufferRef)imageBuffer;
+ (UIImage *)getSubImage:(CGRect)rect inImage:(UIImage*)image;

-(UIImage *)originalImage;

@end
