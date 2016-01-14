//
//  APEHomePracticeSubjectsViewModel.h
//  FrameDemo
//
//  Created by yw on 16/1/14.
//  Copyright © 2016年 yw. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "APEHomePracticeSubjectsCollectionCellViewModel.h"
#import <UIKit/UIKit.h>
#import "APESubject.h"

@interface APEHomePracticeSubjectsViewModel : NSObject

@property (nonatomic, strong, nonnull) NSArray<APEHomePracticeSubjectsCollectionCellViewModel *>
*cellViewModels;

@property (nonatomic, strong, nonnull) UIColor *backgroundColor;

+ (nonnull APEHomePracticeSubjectsViewModel *)viewModelWithSubjects:(nonnull NSArray<APESubject *>*)subjects;

@end
