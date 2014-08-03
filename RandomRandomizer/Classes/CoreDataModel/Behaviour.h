//
//  Behaviour.h
//  RandomRandomizer
//
//  Created by Stytc on 3/8/14.
//  Copyright (c) 2014 nqmtuan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Randomizer;

@interface Behaviour : NSManagedObject

@property (nonatomic, retain) NSNumber * nSelection;
@property (nonatomic, retain) NSNumber * allowRepeat;
@property (nonatomic, retain) Randomizer *randomizer;

@end
