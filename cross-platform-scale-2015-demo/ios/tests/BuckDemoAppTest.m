/*
 * Copyright 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <XCTest/XCTest.h>
#import <UIKit/UIKit.h>

#import "AppDelegate.h"

@interface BuckDemoAppTest : XCTestCase
@end

@implementation BuckDemoAppTest

- (void)testHello {
  AppDelegate *appDelegate =
    (AppDelegate *)[[UIApplication sharedApplication] delegate];
  XCTAssertEqualObjects(
    @"Hello from Buck!",
    [appDelegate helloString],
    @"Greeting should come from cross-platform code");
}

@end
