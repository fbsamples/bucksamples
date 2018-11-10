//
// Copyright 2004-present Facebook. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <Foundation/Foundation.h>

@class XCTool;

@interface TestUtil : NSObject

+ (NSDictionary *)runWithFakeStreams:(XCTool *)tool;

@end

/**
 Returns YES if XCTest.framework is available.
 */
BOOL HasXCTestFramework();

/**
 Returns YES if an array contains a contiguous sub-array.
 */
BOOL ArrayContainsSubsequence(NSArray *anArray, NSArray *subArray);

/**
 Scans through an array of event dictionaries and returns the value of `fieldName`
 for all events of type `eventName`.
 */
NSArray *SelectEventFields(NSArray *events, NSString *eventName, NSString *fieldName);

/**
 Print notice that test is not relevant.
 */
void PrintTestNotRelevantNotice();
