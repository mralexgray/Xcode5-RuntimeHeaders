/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSProcessInfo.h"

@interface NSProcessInfo (PBXFoundationExtra)
- (id)shortGroupName;
- (id)shortUserName;
- (void)disableSuddenTerminationForClient:(id)arg1;
- (void)enableSuddenTerminationForClient:(id)arg1;
- (void)_setSuddenTerminationDisablingCount:(long long)arg1 forClient:(id)arg2;
- (long long)_suddenTerminationDisablingCountForClient:(id)arg1;
@end

