//
//  GitHubService.h
//  Instasite
//
//  Created by Sam Wilskey on 9/21/15.
//  Copyright © 2015 Instasite. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GitHubService : NSObject

+ (void)exchangeCodeInURL:(NSURL *)url;
+ (void)serviceForRepoNameInput:(NSString *)repoNameInput descriptionInput:(NSString *)descriptionInput completionHandler:(void (^) (NSError *))completionHandler;
+ (void)pushFilesToGithub:(NSString *)repoName username:(NSString *)username templateName:(NSString *)templateName completionHandler:(void(^) (NSError *))completionHandler;
+ (void)getUsernameFromGithub:(void (^) (NSError *error, NSString *username))completionHandler;
@end
