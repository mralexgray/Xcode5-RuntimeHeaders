/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface XCRefactoringExtractType : NSObject
{
    NSString *_castString;
    NSString *_leftSideString;
    NSString *_rightSideString;
}

@property(readonly) NSString *castString; // @synthesize castString=_castString;
- (void)dealloc;
@property(readonly) NSString *rightSideString;
@property(readonly) NSString *leftSideString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)hasLeftAndRightSideStrings;
- (id)initWithCastString:(id)arg1 leftSideString:(id)arg2 rightSideString:(id)arg3;

@end

