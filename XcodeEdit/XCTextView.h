/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTextView.h"

#import "NSAnimationDelegate-Protocol.h"
#import "NSLayoutManagerDelegate-Protocol.h"

@class DTMutableRangeArray, DTRangeArray, NSAnimation, NSColor, NSTimer, NSWindow, XCDiffComparatorView, XCTextAnnotation, XCTextAnnotationIndicatorAnimation, XCTextSelectionSymbolInfo;

@interface XCTextView : NSTextView <NSAnimationDelegate, NSLayoutManagerDelegate>
{
    double _pageGuideWidth;
    NSColor *_pageGuideOutOfBoundsColor;
    long long _pageNumber;
    double _highlightStartY;
    double _highlightHeight;
    NSColor *_highlightBaseColor;
    BOOL _observingHighlightColorChangedNotification;
    BOOL _isMouseInsideView;
    BOOL _isDoingBatchEdit;
    struct _NSRange _lastSelectedRangeDuringBatchEdit;
    BOOL _allowsCodeFolding;
    BOOL _showingCodeFocus;
    unsigned long long _oldFocusLocation;
    NSAnimation *_blockAnimation;
    struct CGPoint _lastMouseMovedLocation;
    unsigned long long _modifierFlagsAtLastSingleMouseDown;
    XCTextSelectionSymbolInfo *_selectionSymbolInfo;
    XCDiffComparatorView *_comparatorView;
    struct _NSRange _foldingHoverRange;
    NSTimer *_foldingHoverTimer;
    struct CGPoint _foldingHoverLocation;
    XCTextAnnotation *_draggedAnnotation;
    XCTextAnnotationIndicatorAnimation *_annotationIndicatorAnimation;
    unsigned long long _autoHighlightTokenOption;
    double _autoHighlightTokenDelay;
    NSTimer *_autoHighlightTokenTimer;
    DTMutableRangeArray *_autoHighlightTokenRanges;
    double _autoHighlightTokenMenuDelay;
    NSTimer *_autoHighlightTokenMenuTimer;
    struct _NSRange _autoHighlightTokenMenuRange;
    double _autoHighlightTokenMenuAnimationDuration;
    NSTimer *_autoHighlightTokenMenuAnimationTimer;
    double _autoHighlightTokenMenuAnimationStartTime;
    NSWindow *_autoHighlightTokenWindow;
    BOOL _isTokenizedEditingEnabled;
    DTMutableRangeArray *_tokenizedEditingTokenRanges;
    unsigned long long _tokenizedEditingEditedTokenIndex;
    unsigned long long _tokenizedEditingDeferedOffset;
    struct _NSRange _tokenizedEditingSelectionRange;
    NSColor *_tokenizedEditingTokenColors[4];
    DTRangeArray *_foundRanges;
    unsigned long long _currentFoundRange;
    NSColor *_foundRangesHighlightColor;
    BOOL _animatesCurrentScroll;
    BOOL _disableUpdatingInsertionPointCount;
}

+ (void)setTextEditorInsertionPointColor:(id)arg1;
+ (id)textEditorInsertionPointColor;
+ (void)setTextEditorSelectionBackgroundColor:(id)arg1;
+ (id)textEditorSelectionBackgroundColor;
+ (void)setTextEditorBackgroundColor:(id)arg1;
+ (id)textEditorBackgroundColor;
+ (void)setBackgroundStyle:(int)arg1;
+ (int)backgroundStyle;
+ (id)blockHighlightColor;
+ (void)initialize;
- (void)setFoundRangesHighlightColor:(id)arg1;
- (void)drawFoundRangesInRange:(struct _NSRange)arg1;
- (unsigned long long)currentFoundRange;
- (void)setCurrentFoundRange:(unsigned long long)arg1;
- (void)setFoundRanges:(id)arg1;
- (id)sidebarView;
- (void)setNeedsDisplayInSidebar:(BOOL)arg1;
- (void)unfoldAllComments:(id)arg1;
- (void)foldAllComments:(id)arg1;
- (void)unfoldAllMethods:(id)arg1;
- (void)foldAllMethods:(id)arg1;
- (void)unfoldRecursive:(id)arg1;
- (void)unfold:(id)arg1;
- (void)unfoldAll:(id)arg1;
- (void)foldSelection:(id)arg1;
- (void)foldRecursive:(id)arg1;
- (void)fold:(id)arg1;
- (BOOL)readSelectionFromPasteboard:(id)arg1 type:(id)arg2;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;
- (BOOL)writeRTFSelectionToPasteboard:(id)arg1;
- (id)writablePasteboardTypes;
- (void)PBX_balanceParens:(id)arg1;
- (void)PBX_nestLeft:(id)arg1;
- (void)PBX_nestRight:(id)arg1;
- (void)PBX_doUserIndentByNumberOfLevels:(long long)arg1;
- (void)showMatchingBraceAtLocation:(id)arg1;
- (void)PBX_textViewDidChangeSelection:(id)arg1;
- (void)PBX_toggleShowsInvisibleCharacters:(id)arg1;
- (void)PBX_toggleShowsControlCharacters:(id)arg1;
- (id)layoutManager:(id)arg1 shouldUseTemporaryAttributes:(id)arg2 forDrawingToScreen:(BOOL)arg3 atCharacterIndex:(unsigned long long)arg4 effectiveRange:(struct _NSRange *)arg5;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)selectPreviousToken:(id)arg1;
- (void)selectNextToken:(id)arg1;
- (void)toggleTokenizedEditing:(id)arg1;
- (id)tokenizedEditingSelectedTokenBackgroundColor;
- (void)setTokenizedEditingSelectedTokenBackgroundColor:(id)arg1;
- (id)tokenizedEditingSelectedTokenBorderColor;
- (void)setTokenizedEditingSelectedTokenBorderColor:(id)arg1;
- (id)tokenizedEditingTokenBackgroundColor;
- (void)setTokenizedEditingTokenBackgroundColor:(id)arg1;
- (id)tokenizedEditingTokenBorderColor;
- (void)setTokenizedEditingTokenBorderColor:(id)arg1;
- (id)tokenizedEditingTokenPathsForCharacterRange:(struct _NSRange)arg1;
- (id)tokenPathsForCharacterRange:(struct _NSRange)arg1 displayOnly:(BOOL)arg2;
- (void)textStorage:(id)arg1 didEditRange:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (void)textStorage:(id)arg1 willEditRange:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (struct _NSRange)tokenizedEditingSelectionRange;
- (void)setTokenizedEditingSelectionRange:(struct _NSRange)arg1;
- (id)tokenizedEditingTokenRanges;
- (BOOL)isTokenizedEditingEnabled;
- (void)setTokenizedEditingEnabled:(BOOL)arg1;
- (void)updateTokenizedEditingRanges;
- (id)tokenizableItemsForRealRange:(struct _NSRange)arg1;
- (void)scheduleAutoHighlightTokenTimerIfNeeded;
- (void)_autoHighlightTokenWithTimer:(id)arg1;
- (void)scheduleAutoHighlightTokenMenuTimerIfNeeded;
- (void)_showAutoHighlightTokenMenuWithTimer:(id)arg1;
- (id)_autoHighlightTokenWindowWithTokenRect:(struct CGRect)arg1;
- (void)scheduleAutoHighlightTokenMenuAnimationTimerIfNeeded;
- (struct CGRect)_hitTestRectForAutoHighlightTokenWindow:(id)arg1;
- (struct CGRect)_autoHighlightTokenRectAtPoint:(struct CGPoint)arg1;
- (struct _NSRange)_autoHighlightTokenMenuRangeAtPoint:(struct CGPoint)arg1;
- (void)_animateAutoHighlightTokenMenuWithTimer:(id)arg1;
- (void)_popUpTokenMenu:(id)arg1;
- (BOOL)_isAutoHighlightTokenMenuOverridden;
- (id)autoHighlightTokenMenu;
- (void)clearAutoHighlightTokenMenu;
- (void)clearDisplayForAutoHighlightTokens;
- (void)_displayAutoHighlightTokens;
- (double)autoHighlightTokenMenuDelay;
- (void)setAutoHighlightTokenMenuDelay:(double)arg1;
- (double)autoHighlightTokenDelay;
- (void)setAutoHighlightTokenDelay:(double)arg1;
- (unsigned long long)autoHighlightTokenOption;
- (void)setAutoHighlightTokenOption:(unsigned long long)arg1;
- (id)completionColor;
- (id)commonCharactersColor;
- (struct _NSRange)completionIndicatorRange;
- (struct _NSRange)liveInlineCommonCharactersRange;
- (BOOL)isInlineCompleting;
- (void)setFoldsFromString:(id)arg1;
- (id)foldString;
- (long long)_currentLineNumber;
- (struct _NSRange)rangeOfCenterLine;
- (struct _NSRange)visibleRange;
- (void)doingBatchEdit:(BOOL)arg1;
- (id)annotationForSubview:(id)arg1;
- (id)annotationBeingDragged;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (unsigned long long)modifierFlagsAtLastSingleMouseDown;
- (id)hitTest:(struct CGPoint)arg1;
- (void)scrollWheel:(id)arg1;
- (void)_toolTipTimer;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)_mouseInside:(id)arg1;
- (void)removeFromSuperview;
- (void)viewDidMoveToWindow;
- (void)animation:(id)arg1 didReachProgressMark:(float)arg2;
- (void)animationDidEnd:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (BOOL)animationShouldStart:(id)arg1;
- (void)stopBlockHighlighting;
- (void)startBlockHighlighting;
- (void)focusLocationMayHaveChanged:(id)arg1;
- (void)toggleCodeFocus:(id)arg1;
- (void)_drawViewBackgroundInRect:(struct CGRect)arg1;
- (void)_drawTokensInRect:(struct CGRect)arg1;
- (void)drawTextAnnotationInRect:(struct CGRect)arg1;
- (long long)_drawRoundedBackgroundForItem:(id)arg1 dynamicItem:(id)arg2;
- (id)_roundedRect:(struct CGRect)arg1 withRadius:(double)arg2;
- (unsigned long long)_drawBlockBackground:(struct CGRect)arg1 atLocation:(unsigned long long)arg2 forItem:(id)arg3 dynamicItem:(id)arg4;
- (double)_grayLevelForDepth:(long long)arg1;
- (id)alternateColor;
- (void)setFoldingHoverRange:(struct _NSRange)arg1;
- (struct _NSRange)foldingHoverRange;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(BOOL)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawRect:(struct CGRect)arg1 clip:(BOOL)arg2;
- (void)_drawOverlayRect:(struct CGRect)arg1;
- (id)visibleAnnotations;
- (BOOL)shouldDrawAnnotation:(id)arg1;
- (unsigned long long)_charLocationForMousePoint:(struct CGPoint)arg1;
- (void)setShowsFoldingSidebar:(BOOL)arg1;
- (BOOL)showsFoldingSidebar;
- (void)showAnnotationIndicatorForAnnotation:(id)arg1;
- (id)annotationsForLineNumberRange:(struct _NSRange)arg1;
- (void)getParagraphRect:(struct CGRect *)arg1 firstLineRect:(struct CGRect *)arg2 forLineNumber:(unsigned long long)arg3;
- (struct _NSRange)lineNumberRangeForBoundingRect:(struct CGRect)arg1;
- (unsigned long long)lineNumberForPoint:(struct CGPoint)arg1;
- (void)breakUndoCoalescing;
- (void)scrollRangeToVisible:(struct _NSRange)arg1 animate:(BOOL)arg2;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (BOOL)allowsCodeFolding;
- (void)setAllowsCodeFolding:(BOOL)arg1;
- (void)setTextStorage:(id)arg1;
- (void)setTextStorage:(id)arg1 keepOldLayout:(BOOL)arg2;
- (id)textStorage;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (id)init;
- (void)_commonInit;
- (id)backgroundColor;
- (void)doCommandBySelector:(SEL)arg1;
- (struct CGRect)_accessibilityBoundsOfChild:(id)arg1;
- (id)accessibilityStyleRangeForIndexAttributeForParameter:(id)arg1;
- (id)accessibilityAttributedStringForRangeAttributeForParameter:(id)arg1;
- (id)accessibilityRTFForRangeAttributeForParameter:(id)arg1;
- (id)accessibilityBoundsForRangeAttributeForParameter:(id)arg1;
- (id)accessibilityRangeForIndexAttributeForParameter:(id)arg1;
- (id)accessibilityStringForRangeAttributeForParameter:(id)arg1;
- (id)accessibilitySharedTextUIElementsAttribute;
- (void)accessibilitySetVisibleCharacterRangeAttribute:(id)arg1;
- (id)accessibilityNumberOfCharactersAttribute;
- (void)accessibilitySetSelectedTextRangesAttribute:(id)arg1;
- (id)accessibilitySelectedTextRangesAttribute;
- (void)accessibilitySetSelectedTextRangeAttribute:(id)arg1;
- (void)accessibilitySetValueAttribute:(id)arg1;
- (id)accessibilityValueAttribute;
- (id)accessibilityTextLinkAtIndex:(unsigned long long)arg1;
- (id)accessibilityTextLinks;
- (id)accessibilityAttachmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)accessibilityIndexForAttachment:(id)arg1;
- (id)accessibilityAttachments;
- (struct _NSRange)accessibilitySharedCharacterRange;
- (id)accessibilitySharedTextViews;
- (struct _NSRange)accessibilityStyleRangeForCharacterIndex:(unsigned long long)arg1;
- (id)accessibilityAXAttributedStringForCharacterRange:(struct _NSRange)arg1 parent:(id)arg2;
- (id)accessibilityRTFForCharacterRange:(struct _NSRange)arg1;
- (struct CGRect)accessibilityBoundsForCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityCharacterRangeForPosition:(struct CGPoint)arg1;
- (struct _NSRange)accessibilityCharacterRangeForLineNumber:(unsigned long long)arg1;
- (unsigned long long)accessibilityLineNumberForCharacterIndex:(unsigned long long)arg1;
- (unsigned long long)accessibilityInsertionPointLineNumber;
- (void)accessibilitySetVisibleCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityVisibleCharacterRange;
- (void)accessibilitySetSelectedRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilitySelectedRange;
- (void)accessibilitySetSelectedText:(id)arg1;
- (id)accessibilitySelectedText;
- (void)setTypingAttributes:(id)arg1;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)_scrollRangeToVisible:(struct _NSRange)arg1 forceCenter:(BOOL)arg2;
- (void)_centeredScrollRectToVisible:(struct CGRect)arg1 forceCenter:(BOOL)arg2;
- (void)_adjustedCenteredScrollRectToVisible:(struct CGRect)arg1 forceCenter:(BOOL)arg2;
- (void)_setFrameSize:(struct CGSize)arg1 forceScroll:(BOOL)arg2;
- (BOOL)_ensureLayoutCompleteForVisibleRectWithExtension:(BOOL)arg1;
- (void)_ensureLayoutCompleteToEndOfCharacterRange:(struct _NSRange)arg1;
- (void)_sizeDownIfPossible;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (BOOL)performDragOperation:(id)arg1;
- (void)_fixDragAndDropCharRangesForChangeInRanges:(id)arg1 replacementStrings:(id)arg2;
- (void)_userReplaceRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)didChangeText;
- (BOOL)shouldChangeTextInRanges:(id)arg1 replacementStrings:(id)arg2;
- (void)showFindIndicatorForRange:(struct _NSRange)arg1;
- (void)_showFindIndicator;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (BOOL)scrollRectToVisible:(struct CGRect)arg1;
- (void)scrollPoint:(struct CGPoint)arg1;
- (void)drawInsertionPointInRect:(struct CGRect)arg1 color:(id)arg2 turnedOn:(BOOL)arg3;
- (void)updateInsertionPointStateAndRestartTimer:(BOOL)arg1;
- (void)setSelectedRanges:(id)arg1 affinity:(unsigned long long)arg2 stillSelecting:(BOOL)arg3;
- (id)selectedRanges;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (struct _NSRange)selectedRange;
- (void)selectAll:(id)arg1;
- (void)becomeMainWindow;
- (void)resignKeyWindow;
- (void)becomeKeyWindow;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)_invalidateDisplayForViewStatusChange;
- (void)resetCursorRects;
- (void)_invalidateAllRevealovers;
- (void)indentSelectionIfIndentable:(id)arg1;
- (void)indentSelection:(id)arg1;

@end
