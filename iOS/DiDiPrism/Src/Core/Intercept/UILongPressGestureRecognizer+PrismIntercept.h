//
//  UILongPressGestureRecognizer+PrismIntercept.h
//  DiDiPrism
//
//  Created by hulk on 2021/6/23.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UILongPressGestureRecognizer (PrismIntercept)

+ (void)prism_swizzleMethodIMP;
@end

NS_ASSUME_NONNULL_END
