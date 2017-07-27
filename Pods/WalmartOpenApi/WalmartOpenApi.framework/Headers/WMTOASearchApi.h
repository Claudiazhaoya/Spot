#import <Foundation/Foundation.h>
#import "WMTOASearchResponse.h"
#import "WMTOAApi.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */


@interface WMTOASearchApi: NSObject <WMTOAApi>

extern NSString* kWMTOASearchApiErrorDomain;
extern NSInteger kWMTOASearchApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Perform text search on the Walmart.com catalogue and get matching items available for sale online.
/// Return Item results which are paginated, with up to 25 items displayed per page (using the numItems parameter)
///
/// @param apiKey Your API access key.
/// @param query Search text - whitespace separated sequence of keywords to search for.
/// @param lsPublisherId Your Linkshare access key. (optional)
/// @param categoryId Category id of the category for search within a category. This should match the id field from Taxonomy API. (optional)
/// @param start Starting point of the results within the matching set of items - upto 10 items will be returned starting from this item. (optional) (default to 1)
/// @param sort Sorting criteria (optional) (default to relevance)
/// @param order Sort ordering criteria.This parameter is needed only for the sort types [price, title, customerRating]. (optional) (default to asc)
/// @param numItems Number of matching items to be returned, max value 25. (optional) (default to 10)
/// @param format Type of response required, allowed values [json, xml]. (optional) (default to json)
/// @param responseGroup Specifies the item fields returned in the response.Refer Item Response Groups for details of exact fields returned by each response group. (optional) (default to base)
/// @param facet Boolean flag to enable facets.Set this to on to enable facets. (optional) (default to off)
/// @param facetFilter Filter on the facet attribute values. This parameter can be set to &lt;facet-name&gt;:&lt;facet-value&gt; (without the angles). Here facet-name and facet-value can be any valid facet picked from the search API response when facets are on. (optional)
/// @param facetRange Range filter for facets which take range values, like price. (optional)
/// 
///  code:200 message:"successful operation",
///  code:400 message:"Invalid response group",
///  code:500 message:"Internal Server error"
///
/// @return WMTOASearchResponse*
-(NSNumber*) getSearchResponseWithApiKey: (NSString*) apiKey
    query: (NSString*) query
    lsPublisherId: (NSString*) lsPublisherId
    categoryId: (NSString*) categoryId
    start: (NSNumber*) start
    sort: (NSString*) sort
    order: (NSString*) order
    numItems: (NSNumber*) numItems
    format: (NSString*) format
    responseGroup: (NSString*) responseGroup
    facet: (NSString*) facet
    facetFilter: (NSString*) facetFilter
    facetRange: (NSString*) facetRange
    completionHandler: (void (^)(WMTOASearchResponse* output, NSError* error)) handler;



@end