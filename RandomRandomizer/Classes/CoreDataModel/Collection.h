//
//  Collection.h
//  RandomRandomizer
//
//  Created by Stytc on 3/8/14.
//  Copyright (c) 2014 nqmtuan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class CollectionItem, Randomizer;

@interface Collection : NSManagedObject

@property (nonatomic, retain) NSSet *items;
@property (nonatomic, retain) NSSet *randomizers;
@end

@interface Collection (CoreDataGeneratedAccessors)

- (void)addItemsObject:(CollectionItem *)value;
- (void)removeItemsObject:(CollectionItem *)value;
- (void)addItems:(NSSet *)values;
- (void)removeItems:(NSSet *)values;

- (void)addRandomizersObject:(Randomizer *)value;
- (void)removeRandomizersObject:(Randomizer *)value;
- (void)addRandomizers:(NSSet *)values;
- (void)removeRandomizers:(NSSet *)values;

@end
