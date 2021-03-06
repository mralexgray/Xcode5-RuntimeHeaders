/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol DVTPromise <NSObject>
- (void)trackFuture:(id)arg1;
- (void)trackFuture:(id)arg1 progress:(float)arg2 cancel:(BOOL)arg3 result:(BOOL)arg4 error:(BOOL)arg5;
- (void)setProgress:(long long)arg1;
- (void)failWithError:(id)arg1;
- (void)succeedWithResult:(id)arg1;
- (void)cancel;
- (id)future;
@end

