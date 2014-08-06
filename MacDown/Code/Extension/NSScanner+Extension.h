//
//  NSScanner+Extension.h
//  MacDown
//
//  Created by Tzu-ping Chung  on 06/8.
//  Copyright (c) 2014 Tzu-ping Chung . All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSScanner (Extension)

- (BOOL)scanStringOfSize:(NSUInteger)size
              intoString:(NSString *__autoreleasing *)value;

@end
