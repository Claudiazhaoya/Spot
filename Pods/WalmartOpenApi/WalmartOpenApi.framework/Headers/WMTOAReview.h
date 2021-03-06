#import <Foundation/Foundation.h>
#import "WMTOAObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "WMTOAOverallRating.h"
#import "WMTOAProductAttributes.h"


@protocol WMTOAReview
@end

@interface WMTOAReview : WMTOAObject


@property(nonatomic) NSString* name;

@property(nonatomic) WMTOAOverallRating* overallRating;

@property(nonatomic) NSArray<WMTOAProductAttributes>* productAttributes;

@property(nonatomic) NSString* reviewer;

@property(nonatomic) NSString* reviewText;

@property(nonatomic) NSString* submissionTime;

@property(nonatomic) NSString* title;

@property(nonatomic) NSString* upVotes;

@property(nonatomic) NSString* downVotes;

@end
