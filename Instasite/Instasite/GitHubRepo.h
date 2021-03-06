//
//  GitHubRepo.h
//  Instasite
//
//  Created by mike davis on 10/23/15.
//  Copyright © 2015 Instasite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TypeDefsEnums.h"

@interface GitHubRepo : NSObject

- (instancetype)initWithName:(NSString *)repoName userName:(NSString *)userName accessToken:(NSString *)accessToken;

- (void)createWithComment:(NSString *)comment completion:(void(^)(NSError *, GitHubRepoTest))finalCompletion;
- (void)retrieveExistenceWithCompletion:(void(^)(NSError *, GitHubRepoTest))finalCompletion;
- (void)retrievePagesStatusWithCompletion:(void(^)(NSError *, GitHubPagesStatus))finalCompletion;

@end
