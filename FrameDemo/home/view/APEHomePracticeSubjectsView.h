//
//  APEHomePracticeSubjectsView.h
//  FrameDemo
//
//  Created by yw on 16/1/14.
//  Copyright © 2016年 yw. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "APEHomePracticeSubjectsViewModel.h"
@class APEHomePracticeSubjectsView;
@protocol APEHomePracticeSubjectsViewDelegate <NSObject>

@optional
- (void)homePracticeSubjectsView:(nonnull APEHomePracticeSubjectsView *)subjectView
             didPressItemAtIndex:(NSInteger)index;

@end

@interface APEHomePracticeSubjectsView : UIView

@property (nonatomic, strong, nullable, readonly) APEHomePracticeSubjectsViewModel *viewModel;

@property(nonatomic,weak) id<APEHomePracticeSubjectsViewDelegate>delegate;

-(void)bindDataWithViewModel:(APEHomePracticeSubjectsViewModel*)viewModel;
@end
