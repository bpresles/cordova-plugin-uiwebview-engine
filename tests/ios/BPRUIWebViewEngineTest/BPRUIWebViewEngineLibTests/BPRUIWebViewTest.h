/*
 Licensed to the Apache Software Foundation (ASF) under one
 or more contributor license agreements.  See the NOTICE file
 distributed with this work for additional information
 regarding copyright ownership.  The ASF licenses this file
 to you under the Apache License, Version 2.0 (the
 "License"); you may not use this file except in compliance
 with the License.  You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing,
 software distributed under the License is distributed on an
 "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 KIND, either express or implied.  See the License for the
 specific language governing permissions and limitations
 under the License.
 */

#import <XCTest/XCTest.h>
#import <UIKit/UIKit.h>
#import <Cordova/CDVViewController.h>
#import "BPRUIWebViewEngine.h"

@interface BPRUIWebViewTest : XCTestCase

@property (nonatomic, strong) BPRUIWebViewEngine* plugin;
@property (nonatomic, strong) CDVViewController* viewController;

@property (nonatomic, strong) UIWebView* webView;

- (CDVViewController*)viewController;
- (UIWebView*)webView;

// Returns the already registered plugin object for the given class.
- (id)pluginInstance:(NSString*)pluginName;
// Destroys the existing webview and creates a new one.
- (void)reloadWebView;
// Runs the run loop until the given block returns true, or until a timeout
// occurs.
- (void)waitForConditionName:(NSString*)conditionName block:(BOOL (^)())block;
// Convenience function for stringByEvaluatingJavaScriptFromString.
- (NSString*)evalJs:(NSString*)code;
@end
