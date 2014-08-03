//  AddCollectionLogicManager.h
//  AddCollection

#import <Foundation/Foundation.h>
#import "AddCollectionLogicManagerDelegate.h"
#import "AddCollectionViewManagerDelegate.h"
#import "AddCollectionViewModel.h"
#import "AddCollectionLmToVcProtocol.h"


@interface AddCollectionLogicManager : NSObject<AddCollectionViewManagerDelegate, AddCollectionLmToVcProtocol>
@property (nonatomic, weak) NSObject <AddCollectionLogicManagerDelegate>* logicManagerDelegate;
@end
