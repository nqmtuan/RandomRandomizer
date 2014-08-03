//  AddCollectionLmToVcProtocol.h
//  AddCollection

#import <Foundation/Foundation.h>
#import "AddCollectionLogicManagerDelegate.h"

@protocol AddCollectionLmToVcProtocol <NSObject>
- (void) setLogicManagerDelegate: (NSObject <AddCollectionLogicManagerDelegate> *) delegate;
@end
