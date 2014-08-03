//
//  AddTextItemView.m
//  RandomRandomizer
//
//  Created by Stytc on 3/8/14.
//  Copyright (c) 2014 nqmtuan. All rights reserved.
//

#import "AddTextItemView.h"

@interface AddTextItemView () <UITableViewDataSource, UITableViewDelegate>

@end

@implementation AddTextItemView

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void) awakeFromNib {
    [super awakeFromNib];
    self.tableView.dataSource = self;
    self.tableView.delegate = self;
}

- (IBAction)onAddItemButtonClicked:(id)sender {
}


#pragma mark - UITableViewDataSource
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 0;
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    return nil;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return 0;
}

@end
