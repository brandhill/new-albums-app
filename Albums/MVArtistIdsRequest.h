//
//  MVArtistIdsRequest.h
//  Albums
//
//  Created by Michaël on 9/16/12.
//  Copyright (c) 2012 Michael Villar. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MVArtistIdsRequest;
@protocol MVContextSource;

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
@protocol MVArtistIdsRequestDelegate
- (void)artistIdsRequest:(MVArtistIdsRequest*)request
    didChangeProgression:(int)nbFetchedArtists;
- (void)artistIdsRequestDidFinish:(MVArtistIdsRequest*)request;
- (void)artistIdsRequestDidFail:(MVArtistIdsRequest*)request;
@end

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
@interface MVArtistIdsRequest : NSObject

@property (strong, readonly) NSSet *artistNames;
@property (strong, readonly) NSString *countryCode;
@property (weak, readwrite) NSObject <MVArtistIdsRequestDelegate> *delegate;

- (id)initWithArtistNames:(NSSet*)artistNames
              countryCode:(NSString*)countryCode
           operationQueue:(NSOperationQueue*)operationQueue
            contextSource:(NSObject<MVContextSource>*)contextSource;
- (void)fetch;

@end
