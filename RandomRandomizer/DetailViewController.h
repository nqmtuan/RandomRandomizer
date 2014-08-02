//
//  DetailViewController.h
//  RandomRandomizer
//
//  Created by Stytc on 2/8/14.
//  Copyright (c) 2014 nqmtuan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
