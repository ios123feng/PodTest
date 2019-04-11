//
//  WorkDAL.h
//  iFoxEKnown
//
//  Created by F7684336 on 2015/5/4.
//  Copyright (c) 2015年 idsbg.it. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FXCommonClass.h"
#import "WorkReponseModel.h"

@interface WorkDAL : NSObject

@property(nonatomic,assign)EmpInfoDetail empWorkInfo;

-(id)init:(EmpInfoDetail)empInfoDetail;
-(WorkReponseModel *)parseWorkLifeList:(id)result;


@end
