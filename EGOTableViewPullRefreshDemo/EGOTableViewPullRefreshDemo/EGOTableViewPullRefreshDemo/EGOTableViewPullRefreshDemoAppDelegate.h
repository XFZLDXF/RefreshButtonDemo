//
//  EGOTableViewPullRefreshDemoAppDelegate.h
//  EGOTableViewPullRefreshDemo
//
//  Created by Emre Berge Ergenekon on 9/19/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class EGOTableViewPullRefreshDemoViewController;

@interface EGOTableViewPullRefreshDemoAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet EGOTableViewPullRefreshDemoViewController *viewController;

@end
