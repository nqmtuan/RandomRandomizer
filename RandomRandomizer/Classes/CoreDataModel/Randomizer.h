//
//  Randomizer.h
//  RandomRandomizer
//
//  Created by Stytc on 3/8/14.
//  Copyright (c) 2014 nqmtuan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "Collection.h"
#import "Behaviour.h"


@interface Randomizer : NSManagedObject

@property (nonatomic, retain) Collection *collection;
@property (nonatomic, retain) Behaviour *behaviour;

@end
