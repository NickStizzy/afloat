//
//  AfloatPrefPane.h
//  AfloatAgent
//
//  Created by ∞ on 14/11/06.
//  Copyright 2006 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <PreferencePanes/PreferencePanes.h>

#define AfloatPrefPane NetInfinite_LabsAfloatPrefPane

@interface AfloatPrefPane : NSPreferencePane {
}

- (NSDictionary*) currentInfoForAfloatAgent;

- (BOOL) afloatEnabled;
- (void) setAfloatEnabled:(BOOL) isOn;

@end
