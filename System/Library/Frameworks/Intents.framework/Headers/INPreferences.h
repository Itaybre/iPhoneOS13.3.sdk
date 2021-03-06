//
//  INPreferences.h
//  Intents
//
//  Copyright (c) 2016-2019 Apple Inc. All rights reserved.
//

#import <Intents/INSiriAuthorizationStatus.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(10.0), watchos(3.2)) API_UNAVAILABLE(macosx)
@interface INPreferences : NSObject

+ (INSiriAuthorizationStatus)siriAuthorizationStatus API_AVAILABLE(watchos(6.0));
+ (void)requestSiriAuthorization:(void (^)(INSiriAuthorizationStatus status))handler API_AVAILABLE(watchos(6.0));
+ (NSString *)siriLanguageCode;

@end

NS_ASSUME_NONNULL_END
