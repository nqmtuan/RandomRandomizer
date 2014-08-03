//
//  CollectionItem.h
//  RandomRandomizer
//
//  Created by Stytc on 3/8/14.
//  Copyright (c) 2014 nqmtuan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "Collection.h"


@interface CollectionItem : NSManagedObject

@property (nonatomic, retain) NSNumber * type;
@property (nonatomic, retain) NSString * text;
@property (nonatomic, retain) NSString * imagePath;
@property (nonatomic, retain) Collection *collection;

@end
