//
//  PSMMetalTabStyle.h
//  PSMTabBarControl
//
//  Created by John Pannell on 2/17/06.
//  Copyright 2006 Positive Spin Media. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "PSMTabStyle.h"

@interface PSMMetalTabStyle : NSObject <PSMTabStyle> {
    NSImage *_metalCloseButton;
    NSImage *_metalCloseButtonDown;
    NSImage *_metalCloseButtonOver;
    NSImage *_metalCloseModifiedButton;
    NSImage *_metalCloseModifiedButtonDown;
    NSImage *_metalCloseModifiedButtonOver;
    NSImage *_addTabButtonImage;
    NSImage *_addTabButtonPressedImage;
    NSImage *_addTabButtonRolloverImage;
}

- (void)drawInteriorWithTabCell:(PSMTabBarCell *)cell inView:(NSView*)controlView;

@end
