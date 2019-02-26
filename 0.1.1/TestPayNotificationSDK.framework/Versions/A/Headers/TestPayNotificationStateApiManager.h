//
//  TestPayNotificationStateApiManager.h
//  PayNotificationSDK
//
//  Created by qiaoming on 2019/1/22.
//  Copyright © 2019年 qiaoming. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TestPayNotificationModel.h"
#import <AFNetworking/AFNetworking.h>
#import "TestPayNotificationHTTPResponse.h"

NS_ASSUME_NONNULL_BEGIN

//typedef void (^GMPayStateApiCompleteBlock) (GMNetHTTPResponse *response);
typedef void (^PayNotificationStateApiCompleteBlock) (TestPayNotificationHTTPResponse *response);

@interface TestPayNotificationStateApiManager : AFHTTPSessionManager
+ (TestPayNotificationStateApiManager *)sharedManager;
//支付成功新增后台 通知接口
-(void)checkiOSIAPPayOrderWithPayNotificationModel:(TestPayNotificationModel *)payNotificationModel  complete:(PayNotificationStateApiCompleteBlock)complete;
@end

NS_ASSUME_NONNULL_END
