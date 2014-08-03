//  AddCollectionViewControllerViewController.m
//  AddCollectionViewController

#import "AddCollectionViewController.h"
#import "AddCollectionViewManager.h"
#import "AddCollectionVmToVcProtocol.h"
#import "AddCollectionLmToVcProtocol.h"
#import "AddCollectionLogicManager.h"
#import "AddCollectionViewManagerDelegate.h"
#import "AddCollectionLogicManagerDelegate.h"

@interface AddCollectionViewController ()
@property (nonatomic, strong) NSObject <AddCollectionVmToVcProtocol, AddCollectionLogicManagerDelegate> * viewManager;
@property (nonatomic, strong) NSObject <AddCollectionLmToVcProtocol, AddCollectionViewManagerDelegate> * logicManager;
@end


@implementation AddCollectionViewController
@synthesize viewManager;
@synthesize logicManager;


#pragma mark - Init and Dealloc

- (instancetype)init{
    self = [super init];
    if (self) {
        [self setUp];
    }
    return self;
}

- (instancetype) initWithCoder:(NSCoder *)aDecoder {
    self = [super initWithCoder: aDecoder];
    [self setUp];
    return self;
}

- (void) setUp {
    self.edgesForExtendedLayout = UIRectEdgeNone;
    self.viewManager = [[AddCollectionViewManager alloc] initWithViewController:self];
    self.logicManager = [[AddCollectionLogicManager alloc]init];
    [self.logicManager setLogicManagerDelegate: self.viewManager];
    [self.viewManager setViewManagerDelegate: self.logicManager];
}

-(void) dealloc{
    self.viewManager = nil;;
    self.logicManager = nil;
}


#pragma mark - ViewController life cycle

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self.viewManager setupView: self.view];
}




@end
