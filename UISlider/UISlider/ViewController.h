//
//  ViewController.h
//  UISlider
//
//  Created by navzou on 10/6/13.
//  Copyright (c) 2013 navzou. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet UISlider *slider;
- (IBAction)show:(id)sender;
@end
