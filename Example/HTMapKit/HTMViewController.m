//
//  HTMViewController.m
//  HTMapKit
//
//  Created by 641540230@qq.com on 07/22/2021.
//  Copyright (c) 2021 641540230@qq.com. All rights reserved.
//

#import "HTMViewController.h"
#import "HTMapKit_Example-Swift.h"
@import  HTMapKit;

@interface HTMViewController ()

@end

@implementation HTMViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    TestClass *testC = [[TestClass alloc] init];
    [testC hello];
    
    HTMapView *mapv = [[HTMapView alloc] init];
    NSLog(@" oc-mapv:%@", mapv);
    
    Father *fa = [[Father alloc] init];
    [fa hello];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
