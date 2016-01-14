//
//  APEHomePracticeDataController.m
//  FrameDemo
//
//  Created by yw on 16/1/14.
//  Copyright © 2016年 yw. All rights reserved.
//

#import "APEHomePracticeDataController.h"
#import "APESubject.h"
#import "APESubjectDataController.h"

@interface APEHomePracticeDataController()

@property (nonatomic, strong, nonnull) APESubjectDataController *subjectDataController;


@end

@implementation APEHomePracticeDataController

- (void)requestSubjectDataWithCallback:(nonnull APECompletionCallback)callback {
    APEDataCallback dataCallback = ^(NSError *error, id data) {
        callback(error);
    };
    
    [self.subjectDataController requestAllSubjectsWithCallback:dataCallback];
    
//    [self.subjectDataController requestUserSubjectsWithCallback:dataCallback];
}

//- (nonnull NSArray<APESubject *> *)openSubjects {
//    return self.subjectDataController.openSubjectsWithCurrentPhase ?: @[];
//}

@end
