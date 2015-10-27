//
//  CommitTreeJsonResponse.h
//  Instasite
//
//  Created by mike davis on 10/20/15.
//  Copyright © 2015 Instasite. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CommitTreeJsonResponse : NSObject

@property (strong, nonatomic) NSString *sha;

- (instancetype)initFromJson:(NSDictionary *)jsonDict;

@end
