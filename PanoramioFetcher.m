//
//  PanoramioFetcher.m
//  PhotoCity
//
//  Created by Ruthwick Pathireddy on 8/28/14.
//  Copyright (c) 2014 Darkking. All rights reserved.
//

#import "PanoramioFetcher.h"

@implementation PanoramioFetcher

// Returns URL for the top popular photos given a
// geographic range (max 100). Default photo size is medium
+ (NSURL *)URLForPopularPhotosFromMinLatitude:(float) minLatitude
                                 MinLongitude:(float) minLongitude
                                  MaxLatitude:(float) maxLatitude
                                 MaxLongitude:(float) maxLongitude
{
    return [self URLForPopularPhotosFromMinLatitude:minLatitude
                                       MinLongitude:minLongitude
                                        MaxLatitude:maxLatitude
                                       MaxLongitude:maxLongitude
                                        photoFormat:PanoramioPhotoFormatMedium];
}


// Returns URL for the top popular photos given a
// geographic range (max 100). Photo size is determined by format
+ (NSURL *)URLForPopularPhotosFromMinLatitude:(float) minLatitude
                                 MinLongitude:(float) minLongitude
                                  MaxLatitude:(float) maxLatitude
                                 MaxLongitude:(float) maxLongitude
                                  photoFormat:(NSString *)photoFormat
{
    NSString *urlQuery = [NSString stringWithFormat:@"http://www.panoramio.com/map/get_panoramas.php?set=public&from=0&to=100&minx=%f&miny=%f&maxx=%f&maxy=%f&size=%@&mapfilter=true", minLongitude, minLatitude, maxLongitude, maxLatitude, photoFormat];
    return [NSURL URLWithString:urlQuery];
}

// Returns a url for popular photos in a medium photo
// format size (max 100)
+ (NSURL *)URLforPopularPhotos
{
    return [self URLForPopularPhotosFromMinLatitude:-90
                                       MinLongitude:-180
                                        MaxLatitude:90
                                       MaxLongitude:180];
}

// Returns a url for popular photos in a specific photo
// format size (max 100)
+ (NSURL *)URLforPopularPhotos:(NSString *)photoFormat
{
    return [self URLForPopularPhotosFromMinLatitude:-90
                                       MinLongitude:-180
                                        MaxLatitude:90
                                       MaxLongitude:180
                                        photoFormat:photoFormat];
}


@end
