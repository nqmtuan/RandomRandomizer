//
//  AddTextItemView.h
//  RandomRandomizer
//
//  Created by Stytc on 3/8/14.
//  Copyright (c) 2014 nqmtuan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddTextItemView : UIView
@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) IBOutlet UITextField *addItemTextField;
@property (strong, nonatomic) IBOutlet UIButton *addItemButton;
- (IBAction)onAddItemButtonClicked:(id)sender;

@end
