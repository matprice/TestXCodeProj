//
//  GitHubTestAppDelegate.h
//  GitHubTest
//
//  Created by Matthew Price on 17/10/2011.
//  Copyright 2011 None. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GitHubTestViewController;

@interface GitHubTestAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet GitHubTestViewController *viewController;

@end
