//
//  MasterViewController.h
//  ControllingSource
//
//  Created by Shikhar's iMac on 9/17/14.
//  Copyright (c) 2014 Meditab Softwares Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
