/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol UISplitViewControllerDelegate
@optional
-(BOOL)splitViewController:(id)controller shouldHideViewController:(id)controller2 inOrientation:(int)orientation;
-(void)splitViewController:(id)controller popoverController:(id)controller2 willPresentViewController:(id)controller3;
-(void)splitViewController:(id)controller willShowViewController:(id)controller2 invalidatingBarButtonItem:(id)item;
-(void)splitViewController:(id)controller willHideViewController:(id)controller2 withBarButtonItem:(id)barButtonItem forPopoverController:(id)popoverController;
-(int)splitViewControllerPreferredInterfaceOrientationForPresentation:(id)presentation;
-(unsigned)splitViewControllerSupportedInterfaceOrientations:(id)orientations;
-(id)splitViewController:(id)controller separateSecondaryViewControllerFromPrimaryViewController:(id)primaryViewController;
-(BOOL)splitViewController:(id)controller collapseSecondaryViewController:(id)controller2 ontoPrimaryViewController:(id)controller3;
-(id)primaryViewControllerForExpandingSplitViewController:(id)expandingSplitViewController;
-(id)primaryViewControllerForCollapsingSplitViewController:(id)collapsingSplitViewController;
-(BOOL)splitViewController:(id)controller showDetailViewController:(id)controller2 sender:(id)sender;
-(BOOL)splitViewController:(id)controller showViewController:(id)controller2 sender:(id)sender;
-(int)targetDisplayModeForActionInSplitViewController:(id)splitViewController;
-(void)splitViewController:(id)controller willChangeToDisplayMode:(int)displayMode;
@end
