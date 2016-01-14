//
//  APEHomePracticeDataController.h
//  FrameDemo
//
//  Created by yw on 16/1/14.
//  Copyright © 2016年 yw. All rights reserved.
//

#import "APEBaseDataController.h"

typedef void(^APECompletionCallback)(__kindof id request);


@interface APEHomePracticeDataController : APEBaseDataController

@property (nonatomic, copy) APECompletionCallback successCompletionBlock;

// 1
@property (nonatomic, strong, nonnull, readonly) NSArray *openSubjects;
// 2
- (void)requestSubjectDataWithCallback:(nonnull APECompletionCallback)callback;
@end
