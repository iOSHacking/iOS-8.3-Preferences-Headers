/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIWebViewDelegate.h"

@class NSString, UIWebView;

__attribute__((visibility("hidden")))
@interface AdSupportAboutController : XXUnknownSuperclass <UIWebViewDelegate> {
	UIWebView* _webView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIWebView* webView;
-(void)viewWillDisappear;
-(void)viewWillAppear:(BOOL)view;
-(id)localizedStringFromDictionary:(id)dictionary;
-(void)webView:(id)view didFailLoadWithError:(id)error;
-(void)showErrorAlert;
-(void)dealloc;
-(id)init;
@end
