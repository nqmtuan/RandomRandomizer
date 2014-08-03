//
//  AddTextItemViewOwner.m
//  RandomRandomizer
//
//  Created by Stytc on 3/8/14.
//  Copyright (c) 2014 nqmtuan. All rights reserved.
//

#import "AddTextItemViewOwner.h"

@implementation AddTextItemViewOwner
- (instancetype) init {
    self = [super init];
    [[NSBundle mainBundle] loadNibNamed:@"AddTextItemView" owner:self options:nil];
    return self;
}

@end
