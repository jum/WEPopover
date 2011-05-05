//
//  WEPopoverTableViewController.h
//  WEPopover
//
//  Created by Werner Altewischer on 1/4/11.
//  Copyright 2011 Werner IT Consultancy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WEPopoverController.h"

@interface WEPopoverTableViewController : UITableViewController<WEPopoverControllerDelegate> {
	WEPopoverController *popoverController;
	NSInteger currentPopoverCellIndex;
}

@property (nonatomic, retain) WEPopoverController *popoverController;

@end
