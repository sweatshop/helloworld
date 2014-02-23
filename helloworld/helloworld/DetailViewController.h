//
//  DetailViewController.h
//  helloworld
//
//  Created by djay on 12/7/13.
//  Copyright (c) 2013 djay. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
