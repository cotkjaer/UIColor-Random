//
//  UIColor+Random.m
//  Silverback
//
//  Created by Christian Otkjær on 10/23/13.
//  Copyright (c) 2013 Silverback IT. All rights reserved.
//

#import "UIColor+Random.h"

@implementation UIColor (Random)

#define ARC4RANDOM_MAX 0x100000000

static inline CGFloat CGFloatRandomColorComponentBetween(CGFloat minValue, CGFloat maxValue)
{
    CGFloat realMinValue = MAX(0.f, MIN(minValue, maxValue));
    CGFloat realMaxValue = MIN(1.f, MAX(minValue, maxValue));
    
    return realMinValue + ((CGFloat)arc4random() / ARC4RANDOM_MAX) * (realMaxValue - realMinValue);
}

+ (UIColor*)randomSolidColor
{
    return [self randomColorWithMinRed:0 maxRed:1 minGreen:0 maxGreen:1 minBlue:0 maxBlue:1 minAlpha:1 maxAlpha:1];
}

+ (UIColor *)randomColor
{
    return [self randomColorWithMinRed:0 maxRed:1 minGreen:0 maxGreen:1 minBlue:0 maxBlue:1 minAlpha:0 maxAlpha:1];
}

+ (UIColor *)randomColorWithMinRed:(CGFloat)minRed
                            maxRed:(CGFloat)maxRed
                          minGreen:(CGFloat)minGreen
                          maxGreen:(CGFloat)maxGreen
                           minBlue:(CGFloat)minBlue
                           maxBlue:(CGFloat)maxBlue
                          minAlpha:(CGFloat)minAlpha
                          maxAlpha:(CGFloat)maxAlpha
{
    return [UIColor colorWithRed:CGFloatRandomColorComponentBetween(minRed, maxRed)
                           green:CGFloatRandomColorComponentBetween(minGreen, maxGreen)
                            blue:CGFloatRandomColorComponentBetween(minBlue, maxBlue)
                           alpha:CGFloatRandomColorComponentBetween(minAlpha, maxAlpha)];
}

+ (UIColor *)randomColorWithMinHue:(CGFloat)minHue
                            maxHue:(CGFloat)maxHue
                     minSaturation:(CGFloat)minSaturation
                     maxSaturation:(CGFloat)maxSaturation
                     minBrightness:(CGFloat)minBrightness
                     maxBrightness:(CGFloat)maxBrightness
                          minAlpha:(CGFloat)minAlpha
                          maxAlpha:(CGFloat)maxAlpha
{
    return [UIColor colorWithHue:CGFloatRandomColorComponentBetween(minHue, maxHue)
                      saturation:CGFloatRandomColorComponentBetween(minSaturation, maxSaturation)
                      brightness:CGFloatRandomColorComponentBetween(minBrightness, maxBrightness)
                           alpha:CGFloatRandomColorComponentBetween(minAlpha, maxAlpha)];
}
@end
