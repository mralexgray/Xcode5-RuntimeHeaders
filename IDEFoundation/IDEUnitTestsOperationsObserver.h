/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"
#import "_IDEUnitTestParserMediatorDelegate-Protocol.h"

@class DVTStackBacktrace, IDEExecutionEnvironment, NSMutableArray, NSMutableSet;

@interface IDEUnitTestsOperationsObserver : NSObject <_IDEUnitTestParserMediatorDelegate, DVTInvalidation>
{
    NSMutableSet *_mediators;
    NSMutableSet *_unitTestsObservers;
    NSMutableArray *_errors;
    BOOL _didHandleTestOperationsCompletion;
    id _finishBlock;
    IDEExecutionEnvironment *_executionEnvironment;
}

+ (void)initialize;
@property BOOL didHandleTestOperationsCompletion; // @synthesize didHandleTestOperationsCompletion=_didHandleTestOperationsCompletion;
@property(retain) IDEExecutionEnvironment *executionEnvironment; // @synthesize executionEnvironment=_executionEnvironment;
@property(copy) id finishBlock; // @synthesize finishBlock=_finishBlock;
- (void).cxx_destruct;
- (void)handleTestOperationsCompletionIfAppropriate;
- (void)willFinishWithError:(id)arg1 didCancel:(BOOL)arg2 sessionState:(id)arg3;
- (void)testDidOutput:(id)arg1 sessionState:(id)arg2;
- (void)testCaseDidProducePerformanceOutput:(id)arg1 rawOutput:(id)arg2 sessionState:(id)arg3;
- (void)testCaseDidFailForTestClass:(id)arg1 method:(id)arg2 withMessage:(id)arg3 file:(id)arg4 line:(long long)arg5 rawOutput:(id)arg6 sessionState:(id)arg7;
- (void)testCaseDidFinishForTestClass:(id)arg1 method:(id)arg2 withStatus:(id)arg3 duration:(double)arg4 rawOutput:(id)arg5 sessionState:(id)arg6;
- (void)testCaseDidStartForTestClass:(id)arg1 method:(id)arg2 rawOutput:(id)arg3 sessionState:(id)arg4;
- (void)testSuiteDidFinish:(long long)arg1 withFailures:(long long)arg2 unexpected:(long long)arg3 testDuration:(double)arg4 totalDuration:(double)arg5 rawOutput:(id)arg6 sessionState:(id)arg7;
- (void)testSuite:(id)arg1 willFinishAt:(id)arg2 rawOutput:(id)arg3 sessionState:(id)arg4;
- (void)testSuite:(id)arg1 didStartAt:(id)arg2 rawOutput:(id)arg3 sessionState:(id)arg4;
- (void)launchSessionStarted:(id)arg1;
- (void)removeAllUnitTestsObservers;
- (void)addUnitTestsObserver:(id)arg1;
- (void)registerRunOperation:(id)arg1;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

