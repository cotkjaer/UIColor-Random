//
//  UIColor+Random.h
//  Silverback
//
//  Created by Christian Otkjær on 10/23/13.
//  Copyright (c) 2013 Silverback IT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Random)

/**
 @brief Creates and returns a color object using random opacity and RGB component values.
 @return The color object. The color information represented by this object is in the device RGB colorspace.
 */
+ (UIColor*)randomColor;

/**
 @brief Creates and returns a color object using full opacity (1.0) and random RGB component values.
 @return The color object. The color information represented by this object is in the device RGB colorspace.
 */
+ (UIColor*)randomSolidColor;

/**
 @brief Creates and returns a color object using random opacity and RGB component values withing the given values.
 
 All values should be between 0.0 and 1.0.
 
 Values below 0.0 are interpreted as 0.0, and values above 1.0 are interpreted as 1.0.
 
 @param minRed The minimum value for the red component
 @param maxRed The maximum value for the red component
 @param minGreen The minimum value for the green component
 @param maxGreen The maximum value for the green component
 @param minBlue The minimum value for the blue component
 @param maxBlue The maximum value for the blue component
 @param minAlpha The minimum value for the alpha component
 @param maxAlpha The maximum value for the alpha component
 
 @return The color object. The color information represented by this object is in the device RGB colorspace.
*/
+ (UIColor *)randomColorWithMinRed:(CGFloat)minRed
                            maxRed:(CGFloat)maxRed
                          minGreen:(CGFloat)minGreen
                          maxGreen:(CGFloat)maxGreen
                           minBlue:(CGFloat)minBlue
                           maxBlue:(CGFloat)maxBlue
                          minAlpha:(CGFloat)minAlpha
                          maxAlpha:(CGFloat)maxAlpha;

/**
 @brief Creates and returns a color object using random opacity and HSB component values withing the given values.
 
 All values should be between 0.0 and 1.0.
 
 Values below 0.0 are interpreted as 0.0, and values above 1.0 are interpreted as 1.0.
 
 @param minHue The minimum value for the hue component
 @param maxHue The maximum value for the hue component
 @param minSaturation The minimum value for the saturation component
 @param maxSaturation The maximum value for the saturation component
 @param minBrightness The minimum value for the brightness component
 @param maxBrightness The maximum value for the brightness component
 @param minAlpha The minimum value for the alpha component
 @param maxAlpha The maximum value for the alpha component
 
 @return The color object. The color information represented by this object is in the device RGB colorspace.
 */
+ (UIColor *)randomColorWithMinHue:(CGFloat)minHue
                            maxHue:(CGFloat)maxHue
                     minSaturation:(CGFloat)minSaturation
                     maxSaturation:(CGFloat)maxSaturation
                     minBrightness:(CGFloat)minBrightness
                     maxBrightness:(CGFloat)maxBrightness
                          minAlpha:(CGFloat)minAlpha
                          maxAlpha:(CGFloat)maxAlpha;



@end
