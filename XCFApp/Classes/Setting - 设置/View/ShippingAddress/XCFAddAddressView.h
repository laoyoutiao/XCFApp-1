//
//  XCFAddAddressView.h
//  XCFApp
//
//  Created by callmejoejoe on 16/4/21.
//  Copyright © 2016年 Joey. All rights reserved.
//

#import <UIKit/UIKit.h>
@class XCFAddressInfo;

@interface XCFAddAddressView : UIView
@property (nonatomic, copy) void (^addAddressBlock)();
@end
