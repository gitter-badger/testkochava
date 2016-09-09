//
//  AppDelegate.h
//  testkochava
//
//  Created by Christian Gregersen on 09/09/16.
//  Copyright © 2016 Planday A/S. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "TrackAndAd.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, KochavaTrackerClientDelegate>

@property (strong, nonatomic) UIWindow *window;


@end

