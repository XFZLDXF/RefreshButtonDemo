//
//  EGOTableViewPullRefreshDemoViewController.h
//  EGOTableViewPullRefreshDemo
//
//  Created by Emre Berge Ergenekon on 9/19/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PullTableView.h"

@interface EGOTableViewPullRefreshDemoViewController : UIViewController <UITableViewDataSource, PullTableViewDelegate>{
    PullTableView *pullTableView;
}


@property (nonatomic, retain) IBOutlet PullTableView *pullTableView;
@end
