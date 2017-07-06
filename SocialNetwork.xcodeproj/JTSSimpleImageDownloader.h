//
//  JTSSimpleImageDownloader.h
//  
//
//  Created by Jared Sinclair on 3/2/14.
//  Copyright (c) 2014 Nice Boy LLC. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
@import Foundation;

@interface JTSSimpleImageDownloader : NSObject

+ (NSURLSessionDataTask *)downloadImageForURL:(NSURL *)imageURL
                                 canonicalURL:(NSURL *)canonicalURL
                                   completion:(void(^)(UIImage *image))completion;

@end