//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CGVirtualDisplayMode : NSObject
{
    unsigned int _width;
    unsigned int _height;
    double _refreshRate;
}

@property(readonly, nonatomic) double refreshRate; // @synthesize refreshRate=_refreshRate;
@property(readonly, nonatomic) unsigned int height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned int width; // @synthesize width=_width;
- (id)initWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 refreshRate:(double)arg3;

@end

