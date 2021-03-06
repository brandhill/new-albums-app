//
//  MVStatusBarView.h
//  Albums
//
//  Created by Michaël Villar on 2/25/13.
//  Copyright (c) 2013 Michael Villar. All rights reserved.
//

#import <UIKit/UIKit.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
@interface MVStatusBarOverlay : UIWindow

@property (strong, readwrite, nonatomic) NSString *text;

- (void)setOverlayHidden:(BOOL)hidden
                animated:(BOOL)animated;

@end
