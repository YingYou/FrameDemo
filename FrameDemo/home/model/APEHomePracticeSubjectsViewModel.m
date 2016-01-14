//
//  APEHomePracticeSubjectsViewModel.m
//  FrameDemo
//
//  Created by yw on 16/1/14.
//  Copyright © 2016年 yw. All rights reserved.
//

#import "APEHomePracticeSubjectsViewModel.h"

@implementation APEHomePracticeSubjectsViewModel

-(id)init{

   self = [super init];
    if (self) {
        
    }
    return self;
}

+ (nonnull APEHomePracticeSubjectsViewModel *)viewModelWithSubjects:(nonnull NSArray<APESubject *> *)subjects;{

//    APEHomePracticeSubjectsViewModel *model = [[APEHomePracticeSubjectsViewModel alloc]init];
    
    return [self init];
}

@end
