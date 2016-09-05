//
//  MDWampConstants.h
//  MDWamp
//
//  Created by Niko Usai on 08/07/14.
//  Copyright (c) 2014 mogui.it. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSMutableArray+MDStack.h"
#import "NSString+MDString.h"

// Serialization Classes
FOUNDATION_EXPORT NSString *const kMDWampSerializationMsgpack;
FOUNDATION_EXPORT NSString *const kMDWampSerializationJSON;

// NSError domain
FOUNDATION_EXPORT NSString *const kMDWampErrorDomain;

// OPTIONS
FOUNDATION_EXPORT NSString *const MDWampOption_exclude_me;
FOUNDATION_EXPORT NSString *const MDWampOption_disclose_me;
FOUNDATION_EXPORT NSString *const MDWampOption_acknowledge;
FOUNDATION_EXPORT NSString *const MDWampOption_receive_progress;
FOUNDATION_EXPORT NSString *const MDWampOption_progress;
FOUNDATION_EXPORT NSString *const MDWampOption_exclude;
FOUNDATION_EXPORT NSString *const MDWampOption_eligible;
FOUNDATION_EXPORT NSString *const MDWampOption_match;
