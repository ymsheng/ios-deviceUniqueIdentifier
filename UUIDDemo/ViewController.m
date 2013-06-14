//
//  ViewController.m
//  UUIDDemo
//
//  Created by Yang on 13-6-14.
//  Copyright (c) 2013年 person. All rights reserved.
//

#import "ViewController.h"
#include "UIDevice+IdentifierAddition.h"

@interface ViewController ()

@end

@implementation ViewController
@synthesize label;

- (void)viewDidLoad
{
    [super viewDidLoad];
    NSString *udid = [[UIDevice currentDevice] mydeviceUniqueIdentifier];
    self.label.text = udid;
    
    
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
