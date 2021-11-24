
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Wed, 24 Nov 2021 19:44:35 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorBlack,
ColorWhite,
ColorGray1,
ColorGray2,
ColorGray3,
ColorGray4,
ColorGray5,
ColorRed,
ColorOrange,
ColorYellow,
ColorBlue1,
ColorBlue2,
ColorBlue3,
ColorGreenDark,
ColorGreenMid,
ColorGreenLight,
ColorBlue4,
ColorBorderButtonPrimary,
ColorBorderSelectFocus,
ColorBorderInputNormal,
ColorBackgroundButtonPrimary,
ColorBackgroundInputInvalid,
ColorBackgroundInputDefault
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
