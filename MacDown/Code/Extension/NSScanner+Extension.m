//
//  NSScanner+Extension.m
//  MacDown
//
//  Created by Tzu-ping Chung  on 06/8.
//  Copyright (c) 2014 Tzu-ping Chung . All rights reserved.
//

#import "NSScanner+Extension.h"

@implementation NSScanner (Extension)

- (BOOL)scanStringOfSize:(NSUInteger)size
              intoString:(NSString *__autoreleasing *)value
{
    NSUInteger location = self.scanLocation;
    if (self.string.length < location + size)
    {
        *value = nil;
        return NO;
    }
    *value = [self.string substringWithRange:NSMakeRange(location, size)];
    self.scanLocation = location + size;
    return YES;
}

@end
