/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIGroupTableViewCellDrawnBackground.h"

@class UIBezierPath;

__attribute__((visibility("hidden")))
@interface UIGroupTableViewCellDrawnBackground : UIView {
@private
	int _sectionLocation;
	int _selectionStyle;
	UIBezierPath* _fillPath;
	UIBezierPath* _strokePath;
}
@property(assign, nonatomic) int selectionStyle;
@property(assign, nonatomic) int sectionLocation;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)_invalidatePaths;
-(void)setFrame:(CGRect)frame;
-(void)setSectionLocation:(int)location animated:(BOOL)animated;
-(void)_createBezierPathWithCornerRadius:(float)cornerRadius bottomRadius:(float)radius animating:(BOOL)animating;
-(void)drawRect:(CGRect)rect;
-(void)layoutSubviews;
@end

@interface UIGroupTableViewCellDrawnBackground (Internal)
-(id)_roundRectBezierPathForRect:(CGRect)rect cornerRadius:(float)radius;
@end

