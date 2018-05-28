//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray, NSString;

@interface Production : PBGeneratedMessage
{
    unsigned int hasSkuCount:1;
    unsigned int hasCount:1;
    unsigned int hasRealPrice:1;
    unsigned int hasPriceType:1;
    unsigned int hasPid:1;
    unsigned int hasSafeUrl:1;
    unsigned int hasSkuId:1;
    unsigned int hasType:1;
    unsigned int hasName:1;
    unsigned int hasThumbUrl:1;
    unsigned int hasSubType:1;
    unsigned int hasScene:1;
    unsigned int hasPreferentialPrice:1;
    unsigned int hasDiscountCount:1;
    unsigned int skuCount;
    unsigned int count;
    unsigned int realPrice;
    unsigned int type;
    unsigned int subType;
    unsigned int scene;
    unsigned int discountCount;
    NSMutableArray *mutableSkusList;
    NSString *priceType;
    NSString *pid;
    NSString *safeUrl;
    NSString *skuId;
    NSString *name;
    NSString *thumbUrl;
    NSString *preferentialPrice;
    NSMutableArray *mutableDiscountsList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableDiscountsList; // @synthesize mutableDiscountsList;
@property(nonatomic, setter=SetDiscountCount:) unsigned int discountCount; // @synthesize discountCount;
@property(readonly, nonatomic) BOOL hasDiscountCount; // @synthesize hasDiscountCount;
@property(retain, nonatomic, setter=SetPreferentialPrice:) NSString *preferentialPrice; // @synthesize preferentialPrice;
@property(readonly, nonatomic) BOOL hasPreferentialPrice; // @synthesize hasPreferentialPrice;
@property(nonatomic, setter=SetScene:) unsigned int scene; // @synthesize scene;
@property(readonly, nonatomic) BOOL hasScene; // @synthesize hasScene;
@property(nonatomic, setter=SetSubType:) unsigned int subType; // @synthesize subType;
@property(readonly, nonatomic) BOOL hasSubType; // @synthesize hasSubType;
@property(retain, nonatomic, setter=SetThumbUrl:) NSString *thumbUrl; // @synthesize thumbUrl;
@property(readonly, nonatomic) BOOL hasThumbUrl; // @synthesize hasThumbUrl;
@property(retain, nonatomic, setter=SetName:) NSString *name; // @synthesize name;
@property(readonly, nonatomic) BOOL hasName; // @synthesize hasName;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
@property(retain, nonatomic, setter=SetSkuId:) NSString *skuId; // @synthesize skuId;
@property(readonly, nonatomic) BOOL hasSkuId; // @synthesize hasSkuId;
@property(retain, nonatomic, setter=SetSafeUrl:) NSString *safeUrl; // @synthesize safeUrl;
@property(readonly, nonatomic) BOOL hasSafeUrl; // @synthesize hasSafeUrl;
@property(retain, nonatomic, setter=SetPid:) NSString *pid; // @synthesize pid;
@property(readonly, nonatomic) BOOL hasPid; // @synthesize hasPid;
@property(retain, nonatomic, setter=SetPriceType:) NSString *priceType; // @synthesize priceType;
@property(readonly, nonatomic) BOOL hasPriceType; // @synthesize hasPriceType;
@property(nonatomic, setter=SetRealPrice:) unsigned int realPrice; // @synthesize realPrice;
@property(readonly, nonatomic) BOOL hasRealPrice; // @synthesize hasRealPrice;
@property(nonatomic, setter=SetCount:) unsigned int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
@property(retain, nonatomic) NSMutableArray *mutableSkusList; // @synthesize mutableSkusList;
@property(nonatomic, setter=SetSkuCount:) unsigned int skuCount; // @synthesize skuCount;
@property(readonly, nonatomic) BOOL hasSkuCount; // @synthesize hasSkuCount;
- (void).cxx_destruct;
- (void)addDiscounts:(id)arg1;
- (void)addDiscountsFromArray:(id)arg1;
- (void)addSkus:(id)arg1;
- (void)addSkusFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *discounts; // @dynamic discounts;
- (id)discountsList;
@property(retain, nonatomic) NSMutableArray *skus; // @dynamic skus;
- (id)skusList;
- (id)init;

@end
