/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSArray, NSSet, NSString;

@protocol IDETestable <NSObject>
@property(readonly) BOOL isSearchingForTests;
@property(readonly) NSSet *testFiles;
@property(readonly) NSString *name;
@property(readonly) NSArray *tests;
@property(readonly) id <IDETestableProvider> testableProvider;
- (BOOL)canHaveSubtestsForTestWithIdentifier:(id)arg1;
- (id)supertestForTestWithIdentifier:(id)arg1;
- (id)nameForTestWithIdentifier:(id)arg1;
- (id)testsInFile:(id)arg1;
- (id)testForIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)testForIdentifier:(id)arg1;
- (id)parentBuildableInWorkspace:(id)arg1;
- (id)testHostBuildableInWorkspace:(id)arg1;
- (id)primaryBuildable;
- (void)waitUntilTestSearchIsFinished;
- (void)searchForTestsInWorkspace:(id)arg1;
- (id)newTestRunner;
@end

