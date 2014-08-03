//  AddCollectionVmToVcProtocol.h
//  AddCollection

#import <Foundation/Foundation.h>
#import "AddCollectionDomainObject.h"
#import "AddCollectionViewManagerDelegate.h"


@protocol AddCollectionVmToVcProtocol <NSObject>
- (void) setupView: (UIView *) view;
- (void) setViewManagerDelegate: (NSObject <AddCollectionViewManagerDelegate> *) delegate;
@end
