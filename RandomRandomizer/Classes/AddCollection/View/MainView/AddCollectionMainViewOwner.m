//  AddCollectionMainViewOwner.m
//  AddCollection


#import "AddCollectionMainViewOwner.h"

@implementation AddCollectionMainViewOwner

- (instancetype) init {
    self = [super init];
    [[NSBundle mainBundle] loadNibNamed:@"AddCollectionMainView" owner:self options:nil];
    return self;
}

@end
