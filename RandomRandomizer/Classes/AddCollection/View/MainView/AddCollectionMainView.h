//  AddCollectionMainView.h
//  AddCollection

#import <UIKit/UIKit.h>
#import "AddCollectionViewModel.h"


@class AddCollectionViewManager;


@interface AddCollectionMainView : UIView




@property (strong, nonatomic) AddCollectionViewModel* viewModel;
@property (weak, nonatomic) AddCollectionViewManager* viewManager;


@end
