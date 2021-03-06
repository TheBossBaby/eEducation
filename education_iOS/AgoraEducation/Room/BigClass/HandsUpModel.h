//
//  HandsUpModel.h
//  AgoraEducation
//
//  Created by SRS on 2020/8/3.
//  Copyright © 2020 yangmoumou. All rights reserved.
//

#import <Foundation/Foundation.h>

#define CMD_SIGNAL_LINK_STATE 1

typedef NS_ENUM(NSInteger, SignalLinkState) {
    SignalLinkStateIdle             = 0,
    SignalLinkStateApply            = 1,
    SignalLinkStateTeaReject        = 2,
    SignalLinkStateStuCancel        = 3, // Cancel Apply
    SignalLinkStateTeaAccept        = 4, // linked
    SignalLinkStateTeaClose         = 5, // teacher close link
    SignalLinkStateStuClose         = 6, // student close link
};

NS_ASSUME_NONNULL_BEGIN

@interface HandsUpDataModel : NSObject
@property (nonatomic, strong) NSString *userUuid;
@property (nonatomic, strong) NSString *userName;
@property (nonatomic, assign) SignalLinkState type;
@end

@interface HandsUpModel : NSObject
@property (nonatomic, assign) NSInteger cmd;
@property (nonatomic, strong) HandsUpDataModel *data;
@end

NS_ASSUME_NONNULL_END
