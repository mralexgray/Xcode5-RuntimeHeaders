/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DTStackedBarGraph.h"

@interface IDEEnergyAnnotatedBarGraph : DTStackedBarGraph
{
}

- (id)translateValue:(id)arg1 keypath:(id)arg2;
- (id)paddingString;
- (unsigned long long)longestGuidanceStringLength;
- (id)labelAttributes;
- (struct CGRect)calculateXAxisBoundsWithinBounds:(struct CGRect)arg1;
- (BOOL)canDrawBeyondContentRect;
- (id)guidanceTitles;
- (void)addHorizontalLinesToBezierPath:(id)arg1 inStacks:(id)arg2 withHeight:(double)arg3;
- (void)drawStacks:(id)arg1 rect:(struct CGRect)arg2;

@end
