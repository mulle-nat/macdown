//
//  MPDocumentSplitView.h
//  MacDown
//
//  Created by Tzu-ping Chung on 13/12.
//  Copyright (c) 2014 Tzu-ping Chung . All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MPDocumentSplitView : NSSplitView
{
   NSColor   *_dividerColor;
}

@property (assign, nonatomic) CGFloat dividerLocation;
@property (copy, nonatomic) NSColor *dividerColor;

- (void)setDividerColor:(NSColor *)color;

- (void)swapViews;

@end
