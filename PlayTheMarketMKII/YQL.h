//
//  YQL.h
//  PlayTheMarketMKII
//
//  Created by Brandon Fink on 11/2/14.
//  Big Thank You to our friends at Yahoo! for providing the very cool YQL tools
//  Copyright (c) 2014 Brandon Fink. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YQL : NSObject

- (NSDictionary *)query:(NSString *)statement;

@end

