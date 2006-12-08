//
//  AfloatHub.h
//  AfloatAgent

/*
 *  This file is part of Afloat and is © Emanuele Vulcano, 2006.
 *  <afloat@infinite-labs.net>
 *  
 *  Afloat's source code is licensed under a BSD license.
 *  Please see the included LICENSE file for details.
 */


#import <Cocoa/Cocoa.h>
#import "AfloatImplementation.h"

@interface AfloatHub : NSObject {
	NSMutableDictionary* windowData;
	NSObject* focusedWindow; // prevents IB from picking it up as an outlet
	BOOL animating;
	
	IBOutlet NSMenu* menuWithModelItems;
	IBOutlet NSPanel* adjustEffectsPanel;
}

+ (id) sharedHub;

- (NSMutableDictionary*) infoForWindow:(id /* AfloatWindow */) wnd;
- (void) clearInfoForWindow:(id) wnd;

- (void) willRemoveWindow:(id) wnd;

- (id) focusedWindow;
- (void) setFocusedWindow:(id) wnd;

- (IBAction) showAdjustEffectsPanel:(id) sender;
- (NSMenu*) afloatMenu;

- (IBAction) toggleKeepAfloat:(id) sender;
- (float) mediumAlphaValue;
- (float) adequateOverlayAlphaValue;

- (float) normalizedAlphaValueForValue:(float) val;

- (IBAction) makeOpaque:(id) sender;
- (IBAction) makeMediumTransparency:(id) sender;
- (IBAction) lessTransparent:(id) sender;
- (IBAction) moreTransparent:(id) sender;
- (IBAction) resetAllOverlays:(id) sender;

@end
