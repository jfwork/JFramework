//
// Created by Denis Jajčević on 09.11.2013..
// Copyright (c) 2013 Denis Jajčević. All rights reserved.
//


#import <Foundation/Foundation.h>

@class JFObjectMeta;

@protocol JFSerializableProtocol <NSObject>

-(NSDictionary*) toDictionary;
+(NSArray*) toDictionaryArray:(NSArray*) array;
-(NSData*) toJson;
+(NSData*) toJsonArray:(NSArray*) array;
-(NSString*) toJsonString;
+(NSString*) toJsonArrayString:(NSArray*) array;

+(instancetype) fromDictionary:(NSDictionary*) dictionary;
+(NSArray*) fromDictionaryArray:(NSArray*) dictionaryArray;
+(instancetype) fromJson:(NSData*) data;
+(NSArray*) fromJsonArray:(NSData*) data;
+(instancetype) fromJsonString:(NSString*) string;
+(NSArray*) fromJsonArrayString:(NSString*) string;

-(void) afterPropertiesSet;

@end