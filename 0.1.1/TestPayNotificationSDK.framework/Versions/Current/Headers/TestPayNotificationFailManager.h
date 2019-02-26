//
//  TestPayNotificationFailManager.h
//  FMDB
//
//  Created by qiaoming on 2018/12/27.
//

#import <Foundation/Foundation.h>
#import "TestPayNotificationModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface TestPayNotificationFailManager : NSObject

//通知服务器的内容先缓存到本地 再上传
+(void)saveToCacheWithProductId:(NSString *)product_id;
+(TestPayNotificationModel*)unSerializedStatisticBeanFromFile:(NSString*)serializedBeanPath;
+(void)delSerializedBean:(TestPayNotificationModel*)bean;
+(NSArray <TestPayNotificationModel *>*)getSerializedStatisticBeanLst;
//再次上传失败的通知记录
+(void)retryUploadPaynotificationRecordFormLocal;
@end

NS_ASSUME_NONNULL_END
