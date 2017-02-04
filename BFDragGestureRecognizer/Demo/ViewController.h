//
//  ViewController.h
//  BFDragGestureRecognizer
//
//  Created by Balázs Faludi on 21.10.14.
//  Copyright (c) 2014 Balazs Faludi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SPUserResizableView.h"

@interface ViewController : UIViewController <UIScrollViewDelegate, UIBarPositioningDelegate,UIGestureRecognizerDelegate, SPUserResizableViewDelegate>
{
    SPUserResizableView *currentlyEditingView;
    SPUserResizableView *lastEditedView;
}

@end

