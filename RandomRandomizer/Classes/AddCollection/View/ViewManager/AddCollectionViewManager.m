//  AddCollectionViewManager.m
//  AddCollection

#import "AddCollectionViewManager.h"
#import "AddCollectionMainView.h"
#import "AddCollectionMainViewOwner.h"


@interface AddCollectionViewManager()


@end


@implementation AddCollectionViewManager {
    __weak AddCollectionViewController* viewController;
    AddCollectionMainView* mainView;
    UIView* view;
}

@synthesize viewModel;
@synthesize viewManagerDelegate;


#pragma mark - Init and Dealloc
- (instancetype) initWithViewController: (AddCollectionViewController *) vc {
    if (self = [super init]) {
        viewController = vc;
        AddCollectionMainViewOwner* viewOwner = [[AddCollectionMainViewOwner alloc] init];
        mainView = viewOwner.myView;
    }
    return self;
}

-(void) dealloc{
    
}

#pragma mark - setup
- (void) setupView: (UIView *) aView {
    view = aView;
    [view addSubview:mainView];
    mainView.frame = view.bounds;
    mainView.viewManager = self;
}


#pragma  mark - Logic Manager Delegate


@end
