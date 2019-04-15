//
//  AppDelegate.h
//  ACRuntimeSourceCode
//
//  Created by AlexCorleone on 2019/4/4.
//  Copyright © 2019 AlexCorleone. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

