//
//  APEHomePracticeSubjectsCollectionCellViewModel.h
//  FrameDemo
//
//  Created by yw on 16/1/14.
//  Copyright © 2016年 yw. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "APESubject.h"

@interface APEHomePracticeSubjectsCollectionCellViewModel : NSObject

@property (nonatomic, strong, nonnull) UIImage *image;
@property (nonatomic, strong, nonnull) UIImage *highlightedImage;
@property (nonatomic, strong, nonnull) NSString *title;
@property (nonatomic, strong, nonnull) UIColor *titleColor;
@property (nonatomic, strong, nonnull) UIColor *backgroundColor;

+ (nonnull APEHomePracticeSubjectsCollectionCellViewModel *)viewModelWithSubject:(nonnull APESubject *)subject;

+ (nonnull APEHomePracticeSubjectsCollectionCellViewModel *)viewModelForMore;

@end
