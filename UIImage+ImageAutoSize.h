//
//  UIImage+ImageAutoSize.h 
//
//  Created by xheng on 20/12/17.
//  Copyright © 2017年 xheng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ImageAutoSize)

- (UIImage *)imageByScalingToSize:(CGSize)targetSize; //按照指定大小做等比例缩放
+ (UIImage *)imageByScalingForImage:(UIImage *)sourceImage targetWidth:(CGFloat)defineWidth; //按照指定宽度等比例缩放
- (UIImage *)imageByScalingToScreenSize;//按照屏幕大小等比例缩放

@end
