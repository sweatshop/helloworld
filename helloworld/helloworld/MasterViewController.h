//
//  MasterViewController.h
//  helloworld
//
//  Created by djay on 12/7/13.
//  Copyright (c) 2013 djay. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
