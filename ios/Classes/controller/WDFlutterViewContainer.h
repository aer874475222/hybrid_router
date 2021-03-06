// MIT License
// -----------

// Copyright (c) 2019 WeiDian Group
// Permission is hereby granted, free of charge, to any person
// obtaining a copy of this software and associated documentation
// files (the "Software"), to deal in the Software without
// restriction, including without limitation the rights to use,
// copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following
// conditions:

// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
// OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
// HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
// WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
// OTHER DEALINGS IN THE SOFTWARE.
//
// Created by lm on 2018/11/15.
// Copyright (c) 2018 lm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Flutter/Flutter.h>
#import "WDFlutterEngine.h"

#define WD_FLUTTER_ENGINE WDFlutterEngine.sharedInstance

@class WDFlutterRouteOptions;

@interface WDFlutterViewContainer : FlutterViewController

@property(nonatomic,strong) WDFlutterRouteOptions *options;
@property(nonatomic,assign) NSUInteger flutterPageCount;

- (void)surfaceUpdated:(BOOL)appeared;

@end

@interface WDFlutterRouteOptions : NSObject

@property(nonatomic, copy) NSString *pageName;
@property(nonatomic, copy) NSString *nativePageId;
@property(nonatomic, strong) id args;
@property(nonatomic, strong) FlutterResult resultBlock;
@property(nonatomic, assign) BOOL isTab;
@property(nonatomic, assign) BOOL modal;
@property(nonatomic, assign) BOOL animated;

//记录container 置顶的routeId
@property(nonatomic, copy) NSString *topRouteId;

- (NSDictionary *)toDictionary;

@end
