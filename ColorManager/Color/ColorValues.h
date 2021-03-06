//
//  ColorValues.h
//  CommunityApp
//
//  Created by tianxiuping on 15/6/3.
//  Copyright (c) 2015年 iss. All rights reserved.
//


#ifndef ColorValues_h
#define ColorValues_h
#import "ComColorManager.h"
#pragma mark - 颜色方法区
//RGB颜色方法
#define COLOR_RGB(r,g,b)    [UIColor colorWithRed:((r)/255.0) green:((g)/255.0) blue:((b)/255.0) alpha:1.0]
#define COLOR_RGBA(r,g,b,a) [UIColor colorWithRed:((r)/255.0) green:((g)/255.0) blue:((b)/255.0) alpha:(a)]

//  颜色（单利）
#define kComColorManager  [ComColorManager  defaultManager]

//辅助颜色
#define kTitleColor  [kComColorManager getColorWithHexString:@"#333333"]

// e.g. HEXCOLOR(0xCECECE);
#define HEXCOLOR(rgbValue)  [ComColorManager colorWithHex:rgbValue alpha:1.f]

// e.g. HEXCOLORA(0xCECECE, 0.8);
#define HEXCOLORA(rgbValue,a) [ComColorManager colorWithHex:rgbValue alpha:a]

#define  Color_BaseBgView HEXCOLOR(0xe5e5e);

#endif
