//
//  ACMagnifyingView.h
//  MagnifyingGlass
//
//  Created by Arnaud Coomans on 30/12/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ACMagnifyingGlass;

@interface ACMagnifyingView : UIView

@property (nonatomic, retain) ACMagnifyingGlass *magnifyingGlass;
@property (nonatomic, assign) CGFloat magnifyingGlassShowDelay;
- (void)updateMagnifyingGlassAtPoint:(CGPoint)point;
- (void)removeMagnifyingGlass;
- (void)addMagnifyingGlassAtPoint:(CGPoint)point;
@end
