//
//  ThunkAction.h
//  Pods-ReduxDemo
//
//  Created by bob on 2019/3/3.
//

#import <Foundation/Foundation.h>
#import "Action.h"
#import "Middleware.h"


NS_ASSUME_NONNULL_BEGIN

typedef void (^ThunkBody)(DispatchFunction dispatch, GetState getState);

@interface ThunkAction<__covariant StateType> : NSObject<Action>

@property (nonatomic, copy, readonly) ThunkBody body;

- (instancetype)initWithBody:(ThunkBody)body;

@end

NS_ASSUME_NONNULL_END
