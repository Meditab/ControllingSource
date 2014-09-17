//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Shikhar's iMac on 9/17/14.
//  Copyright (c) 2014 Meditab Softwares Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
