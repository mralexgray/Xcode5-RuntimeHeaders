/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "XCBreakpointAction.h"

#import "NSSoundDelegate-Protocol.h"

@class NSString;

@interface XCBreakpointSoundAction : XCBreakpointAction <NSSoundDelegate>
{
    NSString *_sound;
}

+ (id)archivableAttributes;
+ (id)displayName;
- (void)sound:(id)arg1 didFinishPlaying:(BOOL)arg2;
- (void)performInSession:(id)arg1 onBreakpoint:(id)arg2;
- (void)setSound:(id)arg1;
- (id)sound;
- (void)dealloc;
- (id)editorClassName;

@end
