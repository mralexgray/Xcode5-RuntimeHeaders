/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSImage, NSString, NSViewController;

@interface XCOrganizerNodeInfo : NSObject
{
}

+ (id)alloc;
- (long long)compare:(id)arg1;
@property(readonly) NSViewController *viewController;
@property(readonly) NSImage *statusImage;
@property(readonly) NSImage *iconImage;
@property(readonly) NSString *name;
- (void)invalidate;

@end

