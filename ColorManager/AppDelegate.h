//
//  AppDelegate.h
//  ColorManager
//
//  Created by tianxiuping on 2017/11/7.
//  Copyright © 2017年 TXP. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

