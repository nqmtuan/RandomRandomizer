//  AddCollectionViewManager.h
//  AddCollection

#import <Foundation/Foundation.h>
#import "AddCollectionVmToVcProtocol.h"
#import "AddCollectionViewController.h"
#import "AddCollectionViewModel.h"
#import "AddCollectionLogicManagerDelegate.h"
#import "AddCollectionViewManagerDelegate.h"


@interface AddCollectionViewManager : NSObject <AddCollectionVmToVcProtocol, AddCollectionLogicManagerDelegate>
@property (nonatomic, strong) AddCollectionViewModel* viewModel;
@property (nonatomic, assign) NSObject<AddCollectionViewManagerDelegate>* viewManagerDelegate;

- (instancetype) initWithViewController: (AddCollectionViewController *) vc;
@end
