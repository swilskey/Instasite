//
//  TemplateInput.h
//  Instasite
//
//  Created by mike davis on 9/22/15.
//  Copyright © 2015 Instasite. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TemplateInput : NSObject

@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *subtitle;
@property (strong, nonatomic) NSString *summary;
@property (strong, nonatomic) NSString *copyright;
@property (strong, nonatomic) NSArray *features;

- (instancetype)initWithFeatures:(NSUInteger)count;
- (NSString *)description;

@end