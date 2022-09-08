#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KNATKoin_coreKoin, KNATCcConfigResponse, KNATOkioPath, KNATKotlinEnumCompanion, KNATKotlinEnum<E>, KNATBackgroundPlayerTypeCompanion, KNATBackgroundPlayerType, KNATKotlinArray<T>, KNATCcApiConfigCompanion, KNATCcTranslationLanguage, KNATCcAppConfigCompanion, KNATCcAppConfig, KNATCcApiConfig, KNATCcContentConfig, KNATCcLayoutConfig, KNATCcFeatureControl, KNATCcHint, KNATCcConfigCompanion, KNATCcConfig, KNATCcErrorConfig, KNATCcConfigResponseCompanion, KNATCcPageConfig, KNATCcContentConfigCompanion, KNATCcErrorConfigCompanion, KNATCcFeatureControlCompanion, KNATCcHintCompanion, KNATCcLayoutConfigCompanion, KNATCcPageConfigCompanion, KNATCcTranslationLanguageCompanion, KNATResponseCompanion, KNATResponse, KNATKoin_coreModule, KNATKtor_httpUrl, KNATKoin_coreScope, KNATKoin_coreParametersHolder, KNATKotlinLazyThreadSafetyMode, KNATKoin_coreLogger, KNATKoin_coreInstanceRegistry, KNATKoin_corePropertyRegistry, KNATKoin_coreScopeRegistry, KNATKotlinThrowable, KNATKotlinException, KNATKotlinRuntimeException, KNATKotlinIllegalStateException, KNATOkioPathCompanion, KNATOkioByteString, KNATKotlinx_serialization_coreSerializersModule, KNATKotlinx_serialization_coreSerialKind, KNATKotlinNothing, KNATKoin_coreInstanceFactory<T>, KNATKotlinPair<__covariant A, __covariant B>, KNATKoin_coreScopeDSL, KNATKoin_coreSingleInstanceFactory<T>, KNATKtor_httpUrlCompanion, KNATKtor_httpURLProtocol, KNATKoin_coreLockable, KNATKoin_coreParametersHolderCompanion, KNATKoin_coreLevel, KNATKoin_coreScopeRegistryCompanion, KNATOkioByteStringCompanion, KNATKotlinByteArray, KNATKoin_coreBeanDefinition<T>, KNATKoin_coreInstanceFactoryCompanion, KNATKoin_coreInstanceContext, KNATKtor_httpURLProtocolCompanion, KNATKotlinByteIterator, KNATKoin_coreKind, KNATKoin_coreCallbacks<T>;

@protocol KNATKoin_coreKoinComponent, KNATKotlinx_serialization_coreEncoder, KNATKotlinx_serialization_coreSerialDescriptor, KNATKotlinx_serialization_coreSerializationStrategy, KNATKotlinx_serialization_coreDecoder, KNATKotlinx_serialization_coreDeserializationStrategy, KNATKotlinx_serialization_coreKSerializer, KNATKotlinComparable, KNATKoin_coreKoinScopeComponent, KNATKoin_coreQualifier, KNATKotlinKClass, KNATKotlinLazy, KNATKotlinx_serialization_coreCompositeEncoder, KNATKotlinAnnotation, KNATKotlinx_serialization_coreCompositeDecoder, KNATKotlinIterator, KNATKtor_httpParameters, KNATKoin_coreScopeCallback, KNATKotlinKDeclarationContainer, KNATKotlinKAnnotatedElement, KNATKotlinKClassifier, KNATKotlinx_serialization_coreSerializersModuleCollector, KNATKotlinMapEntry, KNATKtor_utilsStringValues;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface KNATBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KNATBase (KNATBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface KNATMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KNATMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKNATKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface KNATNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface KNATByte : KNATNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface KNATUByte : KNATNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface KNATShort : KNATNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface KNATUShort : KNATNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface KNATInt : KNATNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface KNATUInt : KNATNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface KNATLong : KNATNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface KNATULong : KNATNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface KNATFloat : KNATNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface KNATDouble : KNATNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface KNATBoolean : KNATNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol KNATKoin_coreKoinComponent
@required
- (KNATKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GreetingHelper")))
@interface KNATGreetingHelper : KNATBase <KNATKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface KNATPlatform : KNATBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigProxy")))
@interface KNATConfigProxy : KNATBase <KNATKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadConfigWithCompletionHandler:(void (^)(KNATCcConfigResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loadConfig(completionHandler:)")));
- (KNATCcConfigResponse *)loadFromFileString:(NSString *)string __attribute__((swift_name("loadFromFile(string:)")));
- (void)saveConfigString:(NSString *)string __attribute__((swift_name("saveConfig(string:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigRepository")))
@interface KNATConfigRepository : KNATBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadConfigWithCompletionHandler:(void (^)(KNATCcConfigResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loadConfig(completionHandler:)")));
- (void)readLinesPath:(KNATOkioPath *)path __attribute__((swift_name("readLines(path:)")));

/**
 @note This method converts instances of IOException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)writeEnvPath:(KNATOkioPath *)path error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("writeEnv(path:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KNATKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<KNATKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KNATKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KNATKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<KNATKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<KNATKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KNATKotlinx_serialization_coreKSerializer <KNATKotlinx_serialization_coreSerializationStrategy, KNATKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorAsStringSerializer")))
@interface KNATColorAsStringSerializer : KNATBase <KNATKotlinx_serialization_coreKSerializer>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KNATInt *)deserializeDecoder:(id<KNATKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<KNATKotlinx_serialization_coreEncoder>)encoder value:(KNATInt * _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KNATKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol KNATKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface KNATKotlinEnum<E> : KNATBase <KNATKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KNATKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BackgroundPlayerType")))
@interface KNATBackgroundPlayerType : KNATKotlinEnum<KNATBackgroundPlayerType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KNATBackgroundPlayerTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KNATBackgroundPlayerType *fullPlayer __attribute__((swift_name("fullPlayer")));
@property (class, readonly) KNATBackgroundPlayerType *miniPlayer __attribute__((swift_name("miniPlayer")));
@property (class, readonly) KNATBackgroundPlayerType *none __attribute__((swift_name("none")));
+ (KNATKotlinArray<KNATBackgroundPlayerType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BackgroundPlayerType.Companion")))
@interface KNATBackgroundPlayerTypeCompanion : KNATBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KNATBackgroundPlayerTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<KNATKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CcApiConfig")))
@interface KNATCcApiConfig : KNATBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KNATCcApiConfigCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t defaultPageSize __attribute__((swift_name("defaultPageSize")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CcApiConfig.Companion")))
@interface KNATCcApiConfigCompanion : KNATBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KNATCcApiConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<KNATKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CcAppConfig")))
@interface KNATCcAppConfig : KNATBase
- (instancetype)initWithCcTranslationLanguages:(NSDictionary<NSString *, KNATCcTranslationLanguage *> *)ccTranslationLanguages __attribute__((swift_name("init(ccTranslationLanguages:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KNATCcAppConfigCompanion *companion __attribute__((swift_name("companion")));
- (NSDictionary<NSString *, KNATCcTranslationLanguage *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATCcAppConfig *)doCopyCcTranslationLanguages:(NSDictionary<NSString *, KNATCcTranslationLanguage *> *)ccTranslationLanguages __attribute__((swift_name("doCopy(ccTranslationLanguages:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, KNATCcTranslationLanguage *> *ccTranslationLanguages __attribute__((swift_name("ccTranslationLanguages")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CcAppConfig.Companion")))
@interface KNATCcAppConfigCompanion : KNATBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KNATCcAppConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<KNATKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CcConfig")))
@interface KNATCcConfig : KNATBase
- (instancetype)initWithApiConfig:(KNATCcApiConfig * _Nullable)apiConfig appConfig:(KNATCcAppConfig * _Nullable)appConfig contentConfig:(KNATCcContentConfig * _Nullable)contentConfig ccLayoutConfig:(KNATCcLayoutConfig * _Nullable)ccLayoutConfig featureControl:(KNATCcFeatureControl * _Nullable)featureControl hints:(KNATKotlinArray<KNATCcHint *> * _Nullable)hints internetCheckHints:(KNATKotlinArray<KNATCcHint *> * _Nullable)internetCheckHints __attribute__((swift_name("init(apiConfig:appConfig:contentConfig:ccLayoutConfig:featureControl:hints:internetCheckHints:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KNATCcConfigCompanion *companion __attribute__((swift_name("companion")));
- (KNATCcApiConfig * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATCcAppConfig * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATCcContentConfig * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATCcLayoutConfig * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATCcFeatureControl * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATKotlinArray<KNATCcHint *> * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATKotlinArray<KNATCcHint *> * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATCcConfig *)doCopyApiConfig:(KNATCcApiConfig * _Nullable)apiConfig appConfig:(KNATCcAppConfig * _Nullable)appConfig contentConfig:(KNATCcContentConfig * _Nullable)contentConfig ccLayoutConfig:(KNATCcLayoutConfig * _Nullable)ccLayoutConfig featureControl:(KNATCcFeatureControl * _Nullable)featureControl hints:(KNATKotlinArray<KNATCcHint *> * _Nullable)hints internetCheckHints:(KNATKotlinArray<KNATCcHint *> * _Nullable)internetCheckHints __attribute__((swift_name("doCopy(apiConfig:appConfig:contentConfig:ccLayoutConfig:featureControl:hints:internetCheckHints:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KNATCcApiConfig * _Nullable apiConfig __attribute__((swift_name("apiConfig")));
@property (readonly) KNATCcAppConfig * _Nullable appConfig __attribute__((swift_name("appConfig")));
@property (readonly) KNATCcLayoutConfig * _Nullable ccLayoutConfig __attribute__((swift_name("ccLayoutConfig")));
@property (readonly) KNATCcContentConfig * _Nullable contentConfig __attribute__((swift_name("contentConfig")));
@property (readonly) KNATCcFeatureControl * _Nullable featureControl __attribute__((swift_name("featureControl")));
@property (readonly) KNATKotlinArray<KNATCcHint *> * _Nullable hints __attribute__((swift_name("hints")));
@property (readonly) KNATKotlinArray<KNATCcHint *> * _Nullable internetCheckHints __attribute__((swift_name("internetCheckHints")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CcConfig.Companion")))
@interface KNATCcConfigCompanion : KNATBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KNATCcConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<KNATKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CcConfigResponse")))
@interface KNATCcConfigResponse : KNATBase
- (instancetype)initWithIsSuccess:(BOOL)isSuccess error:(KNATCcErrorConfig * _Nullable)error config:(KNATCcConfig *)config serverTime:(double)serverTime transactionId:(NSString * _Nullable)transactionId __attribute__((swift_name("init(isSuccess:error:config:serverTime:transactionId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KNATCcConfigResponseCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATCcErrorConfig * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATCcConfig *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (double)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATCcConfigResponse *)doCopyIsSuccess:(BOOL)isSuccess error:(KNATCcErrorConfig * _Nullable)error config:(KNATCcConfig *)config serverTime:(double)serverTime transactionId:(NSString * _Nullable)transactionId __attribute__((swift_name("doCopy(isSuccess:error:config:serverTime:transactionId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KNATCcConfig *config __attribute__((swift_name("config")));
@property (readonly) KNATCcErrorConfig * _Nullable error __attribute__((swift_name("error")));
@property (readonly) BOOL isSuccess __attribute__((swift_name("isSuccess")));
@property (readonly) double serverTime __attribute__((swift_name("serverTime")));
@property (readonly) NSString * _Nullable transactionId __attribute__((swift_name("transactionId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CcConfigResponse.Companion")))
@interface KNATCcConfigResponseCompanion : KNATBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KNATCcConfigResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KNATKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CcContentConfig")))
@interface KNATCcContentConfig : KNATBase
- (instancetype)initWithPageConfigs:(KNATKotlinArray<KNATCcPageConfig *> *)pageConfigs __attribute__((swift_name("init(pageConfigs:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KNATCcContentConfigCompanion *companion __attribute__((swift_name("companion")));
- (KNATKotlinArray<KNATCcPageConfig *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATCcContentConfig *)doCopyPageConfigs:(KNATKotlinArray<KNATCcPageConfig *> *)pageConfigs __attribute__((swift_name("doCopy(pageConfigs:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KNATKotlinArray<KNATCcPageConfig *> *pageConfigs __attribute__((swift_name("pageConfigs")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CcContentConfig.Companion")))
@interface KNATCcContentConfigCompanion : KNATBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KNATCcContentConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<KNATKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CcErrorConfig")))
@interface KNATCcErrorConfig : KNATBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KNATCcErrorConfigCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CcErrorConfig.Companion")))
@interface KNATCcErrorConfigCompanion : KNATBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KNATCcErrorConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<KNATKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CcFeatureControl")))
@interface KNATCcFeatureControl : KNATBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KNATCcFeatureControlCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CcFeatureControl.Companion")))
@interface KNATCcFeatureControlCompanion : KNATBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KNATCcFeatureControlCompanion *shared __attribute__((swift_name("shared")));
- (id<KNATKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CcHint")))
@interface KNATCcHint : KNATBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KNATCcHintCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CcHint.Companion")))
@interface KNATCcHintCompanion : KNATBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KNATCcHintCompanion *shared __attribute__((swift_name("shared")));
- (id<KNATKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CcLayoutConfig")))
@interface KNATCcLayoutConfig : KNATBase
- (instancetype)initWithWelcomeLogo:(NSString * _Nullable)welcomeLogo backgroundImage:(NSString * _Nullable)backgroundImage spinnerIcon:(NSString * _Nullable)spinnerIcon backgroundPlayerType:(KNATBackgroundPlayerType * _Nullable)backgroundPlayerType primaryColor:(KNATInt * _Nullable)primaryColor __attribute__((swift_name("init(welcomeLogo:backgroundImage:spinnerIcon:backgroundPlayerType:primaryColor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KNATCcLayoutConfigCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATBackgroundPlayerType * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATInt * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATCcLayoutConfig *)doCopyWelcomeLogo:(NSString * _Nullable)welcomeLogo backgroundImage:(NSString * _Nullable)backgroundImage spinnerIcon:(NSString * _Nullable)spinnerIcon backgroundPlayerType:(KNATBackgroundPlayerType * _Nullable)backgroundPlayerType primaryColor:(KNATInt * _Nullable)primaryColor __attribute__((swift_name("doCopy(welcomeLogo:backgroundImage:spinnerIcon:backgroundPlayerType:primaryColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable backgroundImage __attribute__((swift_name("backgroundImage")));
@property (readonly) KNATBackgroundPlayerType * _Nullable backgroundPlayerType __attribute__((swift_name("backgroundPlayerType")));
@property (readonly) KNATInt * _Nullable primaryColor __attribute__((swift_name("primaryColor")));
@property (readonly) NSString * _Nullable spinnerIcon __attribute__((swift_name("spinnerIcon")));
@property (readonly) NSString * _Nullable welcomeLogo __attribute__((swift_name("welcomeLogo")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CcLayoutConfig.Companion")))
@interface KNATCcLayoutConfigCompanion : KNATBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KNATCcLayoutConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<KNATKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CcPageConfig")))
@interface KNATCcPageConfig : KNATBase
- (instancetype)initWithId:(NSString * _Nullable)id title:(NSString * _Nullable)title __attribute__((swift_name("init(id:title:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KNATCcPageConfigCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATCcPageConfig *)doCopyId:(NSString * _Nullable)id title:(NSString * _Nullable)title __attribute__((swift_name("doCopy(id:title:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CcPageConfig.Companion")))
@interface KNATCcPageConfigCompanion : KNATBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KNATCcPageConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<KNATKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CcTranslationLanguage")))
@interface KNATCcTranslationLanguage : KNATBase
- (instancetype)initWithUrl:(NSString * _Nullable)url image:(NSString * _Nullable)image isDefault:(KNATBoolean * _Nullable)isDefault __attribute__((swift_name("init(url:image:isDefault:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KNATCcTranslationLanguageCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATBoolean * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATCcTranslationLanguage *)doCopyUrl:(NSString * _Nullable)url image:(NSString * _Nullable)image isDefault:(KNATBoolean * _Nullable)isDefault __attribute__((swift_name("doCopy(url:image:isDefault:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable image __attribute__((swift_name("image")));
@property (readonly) KNATBoolean * _Nullable isDefault __attribute__((swift_name("isDefault")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CcTranslationLanguage.Companion")))
@interface KNATCcTranslationLanguageCompanion : KNATBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KNATCcTranslationLanguageCompanion *shared __attribute__((swift_name("shared")));
- (id<KNATKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApplicationApi")))
@interface KNATApplicationApi : KNATBase <KNATKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)realNetworkCallCallback:(void (^)(NSString *))callback __attribute__((swift_name("realNetworkCall(callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface KNATGreeting : KNATBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Response")))
@interface KNATResponse : KNATBase
- (instancetype)initWithStatus:(NSString *)status __attribute__((swift_name("init(status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KNATResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATResponse *)doCopyStatus:(NSString *)status __attribute__((swift_name("doCopy(status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Response.Companion")))
@interface KNATResponseCompanion : KNATBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KNATResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KNATKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinDiKt")))
@interface KNATKoinDiKt : KNATBase
@property (class, readonly) KNATKoin_coreModule *commonModule __attribute__((swift_name("commonModule")));
@property (class, readonly) KNATKoin_coreModule *platformModule __attribute__((swift_name("platformModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HelperKt")))
@interface KNATHelperKt : KNATBase
+ (void)doInitKoin __attribute__((swift_name("doInitKoin()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApplicationApiKt")))
@interface KNATApplicationApiKt : KNATBase
@property (class, readonly) KNATKtor_httpUrl *address __attribute__((swift_name("address")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface KNATKoin_coreKoin : KNATBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (KNATKoin_coreScope *)createScopeT:(id<KNATKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (KNATKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (KNATKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (KNATKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<KNATKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<KNATKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<KNATKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id _Nullable)getClazz:(id<KNATKotlinKClass>)clazz qualifier:(id<KNATKoin_coreQualifier> _Nullable)qualifier parameters:(KNATKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<KNATKoin_coreQualifier> _Nullable)qualifier parameters:(KNATKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (KNATKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (KNATKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<KNATKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullClazz:(id<KNATKotlinKClass>)clazz qualifier:(id<KNATKoin_coreQualifier> _Nullable)qualifier parameters:(KNATKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<KNATKoin_coreQualifier> _Nullable)qualifier parameters:(KNATKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (KNATKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (KNATKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<KNATKotlinLazy>)injectQualifier:(id<KNATKoin_coreQualifier> _Nullable)qualifier mode:(KNATKotlinLazyThreadSafetyMode *)mode parameters:(KNATKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<KNATKotlinLazy>)injectOrNullQualifier:(id<KNATKoin_coreQualifier> _Nullable)qualifier mode:(KNATKotlinLazyThreadSafetyMode *)mode parameters:(KNATKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<KNATKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("loadModules(modules:allowOverride:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(KNATKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<KNATKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) KNATKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) KNATKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) KNATKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) KNATKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface KNATKotlinThrowable : KNATBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KNATKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KNATKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (KNATKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KNATKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface KNATKotlinException : KNATKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KNATKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KNATKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface KNATKotlinRuntimeException : KNATKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KNATKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KNATKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KNATKotlinIllegalStateException : KNATKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KNATKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KNATKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface KNATKotlinCancellationException : KNATKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KNATKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KNATKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("OkioIOException")))
@interface KNATOkioIOException : KNATKotlinException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KNATKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCause:(KNATKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioPath")))
@interface KNATOkioPath : KNATBase <KNATKotlinComparable>
@property (class, readonly, getter=companion) KNATOkioPathCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(KNATOkioPath *)other __attribute__((swift_name("compareTo(other:)")));
- (KNATOkioPath *)divChild:(NSString *)child __attribute__((swift_name("div(child:)")));
- (KNATOkioPath *)divChild_:(KNATOkioByteString *)child __attribute__((swift_name("div(child_:)")));
- (KNATOkioPath *)divChild__:(KNATOkioPath *)child __attribute__((swift_name("div(child__:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (KNATOkioPath *)normalized __attribute__((swift_name("normalized()")));
- (KNATOkioPath *)relativeToOther:(KNATOkioPath *)other __attribute__((swift_name("relativeTo(other:)")));
- (KNATOkioPath *)resolveChild:(NSString *)child normalize:(BOOL)normalize __attribute__((swift_name("resolve(child:normalize:)")));
- (KNATOkioPath *)resolveChild:(KNATOkioByteString *)child normalize_:(BOOL)normalize __attribute__((swift_name("resolve(child:normalize_:)")));
- (KNATOkioPath *)resolveChild:(KNATOkioPath *)child normalize__:(BOOL)normalize __attribute__((swift_name("resolve(child:normalize__:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isAbsolute __attribute__((swift_name("isAbsolute")));
@property (readonly) BOOL isRelative __attribute__((swift_name("isRelative")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) KNATOkioByteString *nameBytes __attribute__((swift_name("nameBytes")));
@property (readonly) KNATOkioPath * _Nullable parent __attribute__((swift_name("parent")));
@property (readonly) KNATOkioPath * _Nullable root __attribute__((swift_name("root")));
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) NSArray<KNATOkioByteString *> *segmentsBytes __attribute__((swift_name("segmentsBytes")));
@property (readonly) id _Nullable volumeLetter __attribute__((swift_name("volumeLetter")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KNATKotlinx_serialization_coreEncoder
@required
- (id<KNATKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<KNATKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<KNATKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<KNATKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<KNATKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) KNATKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KNATKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<KNATKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<KNATKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<KNATKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) KNATKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KNATKotlinx_serialization_coreDecoder
@required
- (id<KNATKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<KNATKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (KNATKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KNATKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<KNATKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) KNATKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface KNATKotlinEnumCompanion : KNATBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KNATKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KNATKotlinArray<T> : KNATBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KNATInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KNATKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface KNATKoin_coreModule : KNATBase
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (KNATKotlinPair<KNATKoin_coreModule *, KNATKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<KNATKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(KNATKoin_coreScope *, KNATKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(KNATKotlinArray<KNATKoin_coreModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(NSArray<KNATKoin_coreModule *> *)module __attribute__((swift_name("includes(module_:)")));
- (NSArray<KNATKoin_coreModule *> *)plusModules:(NSArray<KNATKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<KNATKoin_coreModule *> *)plusModule:(KNATKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)scopeQualifier:(id<KNATKoin_coreQualifier>)qualifier scopeSet:(void (^)(KNATKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (void)scopeScopeSet:(void (^)(KNATKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (KNATKotlinPair<KNATKoin_coreModule *, KNATKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<KNATKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(KNATKoin_coreScope *, KNATKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) KNATMutableSet<KNATKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface KNATKtor_httpUrl : KNATBase
@property (class, readonly, getter=companion) KNATKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<KNATKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) KNATKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Koin_coreLockable")))
@interface KNATKoin_coreLockable : KNATBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface KNATKoin_coreScope : KNATKoin_coreLockable
- (instancetype)initWithScopeQualifier:(id<KNATKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(KNATKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (id<KNATKoin_coreQualifier>)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATKoin_coreScope *)doCopyScopeQualifier:(id<KNATKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(KNATKoin_coreKoin *)_koin __attribute__((swift_name("doCopy(scopeQualifier:id:isRoot:_koin:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<KNATKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<KNATKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getClazz:(id<KNATKotlinKClass>)clazz qualifier:(id<KNATKoin_coreQualifier> _Nullable)qualifier parameters:(KNATKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<KNATKoin_coreQualifier> _Nullable)qualifier parameters:(KNATKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<KNATKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (KNATKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullClazz:(id<KNATKotlinKClass>)clazz qualifier:(id<KNATKoin_coreQualifier> _Nullable)qualifier parameters:(KNATKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<KNATKoin_coreQualifier> _Nullable)qualifier parameters:(KNATKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (KNATKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()"))) __attribute__((deprecated("No need to use getSource(). You can an use get() directly.")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<KNATKotlinLazy>)injectQualifier:(id<KNATKoin_coreQualifier> _Nullable)qualifier mode:(KNATKotlinLazyThreadSafetyMode *)mode parameters:(KNATKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<KNATKotlinLazy>)injectOrNullQualifier:(id<KNATKoin_coreQualifier> _Nullable)qualifier mode:(KNATKotlinLazyThreadSafetyMode *)mode parameters:(KNATKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(KNATKotlinArray<KNATKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)refreshScopeInstanceClazz:(id<KNATKotlinKClass>)clazz qualifier:(id<KNATKoin_coreQualifier> _Nullable)qualifier instance:(id)instance __attribute__((swift_name("refreshScopeInstance(clazz:qualifier:instance:)")));
- (void)registerCallbackCallback:(id<KNATKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(KNATKotlinArray<KNATKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) NSMutableArray<KNATKoin_coreParametersHolder *> *_parameterStack __attribute__((swift_name("_parameterStack")));
@property id _Nullable _source __attribute__((swift_name("_source")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) KNATKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<KNATKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end;

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol KNATKoin_coreKoinScopeComponent <KNATKoin_coreKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()")));
@property (readonly) KNATKoin_coreScope *scope __attribute__((swift_name("scope")));
@end;

__attribute__((swift_name("Koin_coreQualifier")))
@protocol KNATKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KNATKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KNATKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol KNATKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol KNATKotlinKClass <KNATKotlinKDeclarationContainer, KNATKotlinKAnnotatedElement, KNATKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface KNATKoin_coreParametersHolder : KNATBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values __attribute__((swift_name("init(_values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KNATKoin_coreParametersHolderCompanion *companion __attribute__((swift_name("companion")));
- (KNATKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<KNATKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<KNATKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (KNATKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end;

__attribute__((swift_name("KotlinLazy")))
@protocol KNATKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface KNATKotlinLazyThreadSafetyMode : KNATKotlinEnum<KNATKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KNATKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) KNATKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) KNATKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (KNATKotlinArray<KNATKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Koin_coreLogger")))
@interface KNATKoin_coreLogger : KNATBase
- (instancetype)initWithLevel:(KNATKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(KNATKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(KNATKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLevel:(KNATKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("log(level:msg:)")));
@property KNATKoin_coreLevel *level __attribute__((swift_name("level")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface KNATKoin_coreInstanceRegistry : KNATBase
- (instancetype)initWith_koin:(KNATKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(KNATKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) KNATKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, KNATKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface KNATKoin_corePropertyRegistry : KNATBase
- (instancetype)initWith_koin:(KNATKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface KNATKoin_coreScopeRegistry : KNATBase
- (instancetype)initWith_koin:(KNATKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KNATKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSSet<KNATKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) KNATKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<KNATKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioPath.Companion")))
@interface KNATOkioPathCompanion : KNATBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KNATOkioPathCompanion *shared __attribute__((swift_name("shared")));
- (KNATOkioPath *)toPath:(NSString *)receiver normalize:(BOOL)normalize __attribute__((swift_name("toPath(_:normalize:)")));
@property (readonly) NSString *DIRECTORY_SEPARATOR __attribute__((swift_name("DIRECTORY_SEPARATOR")));
@end;

__attribute__((swift_name("OkioByteString")))
@interface KNATOkioByteString : KNATBase <KNATKotlinComparable>
@property (class, readonly, getter=companion) KNATOkioByteStringCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)base64 __attribute__((swift_name("base64()")));
- (NSString *)base64Url __attribute__((swift_name("base64Url()")));
- (int32_t)compareToOther:(KNATOkioByteString *)other __attribute__((swift_name("compareTo(other:)")));
- (void)doCopyIntoOffset:(int32_t)offset target:(KNATKotlinByteArray *)target targetOffset:(int32_t)targetOffset byteCount:(int32_t)byteCount __attribute__((swift_name("doCopyInto(offset:target:targetOffset:byteCount:)")));
- (BOOL)endsWithSuffix:(KNATKotlinByteArray *)suffix __attribute__((swift_name("endsWith(suffix:)")));
- (BOOL)endsWithSuffix_:(KNATOkioByteString *)suffix __attribute__((swift_name("endsWith(suffix_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)hex __attribute__((swift_name("hex()")));
- (KNATOkioByteString *)hmacSha1Key:(KNATOkioByteString *)key __attribute__((swift_name("hmacSha1(key:)")));
- (KNATOkioByteString *)hmacSha256Key:(KNATOkioByteString *)key __attribute__((swift_name("hmacSha256(key:)")));
- (KNATOkioByteString *)hmacSha512Key:(KNATOkioByteString *)key __attribute__((swift_name("hmacSha512(key:)")));
- (int32_t)indexOfOther:(KNATKotlinByteArray *)other fromIndex:(int32_t)fromIndex __attribute__((swift_name("indexOf(other:fromIndex:)")));
- (int32_t)indexOfOther:(KNATOkioByteString *)other fromIndex_:(int32_t)fromIndex __attribute__((swift_name("indexOf(other:fromIndex_:)")));
- (int32_t)lastIndexOfOther:(KNATKotlinByteArray *)other fromIndex:(int32_t)fromIndex __attribute__((swift_name("lastIndexOf(other:fromIndex:)")));
- (int32_t)lastIndexOfOther:(KNATOkioByteString *)other fromIndex_:(int32_t)fromIndex __attribute__((swift_name("lastIndexOf(other:fromIndex_:)")));
- (KNATOkioByteString *)md5 __attribute__((swift_name("md5()")));
- (BOOL)rangeEqualsOffset:(int32_t)offset other:(KNATKotlinByteArray *)other otherOffset:(int32_t)otherOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:other:otherOffset:byteCount:)")));
- (BOOL)rangeEqualsOffset:(int32_t)offset other:(KNATOkioByteString *)other otherOffset:(int32_t)otherOffset byteCount_:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:other:otherOffset:byteCount_:)")));
- (KNATOkioByteString *)sha1 __attribute__((swift_name("sha1()")));
- (KNATOkioByteString *)sha256 __attribute__((swift_name("sha256()")));
- (KNATOkioByteString *)sha512 __attribute__((swift_name("sha512()")));
- (BOOL)startsWithPrefix:(KNATKotlinByteArray *)prefix __attribute__((swift_name("startsWith(prefix:)")));
- (BOOL)startsWithPrefix_:(KNATOkioByteString *)prefix __attribute__((swift_name("startsWith(prefix_:)")));
- (KNATOkioByteString *)substringBeginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("substring(beginIndex:endIndex:)")));
- (KNATOkioByteString *)toAsciiLowercase __attribute__((swift_name("toAsciiLowercase()")));
- (KNATOkioByteString *)toAsciiUppercase __attribute__((swift_name("toAsciiUppercase()")));
- (KNATKotlinByteArray *)toByteArray __attribute__((swift_name("toByteArray()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)utf8 __attribute__((swift_name("utf8()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KNATKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<KNATKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KNATKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KNATKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) KNATKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KNATKotlinx_serialization_coreSerializersModule : KNATBase
- (void)dumpToCollector:(id<KNATKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<KNATKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KNATKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KNATKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<KNATKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KNATKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<KNATKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KNATKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol KNATKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KNATKotlinx_serialization_coreSerialKind : KNATBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KNATKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<KNATKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KNATKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KNATKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<KNATKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) KNATKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KNATKotlinNothing : KNATBase
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol KNATKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface KNATKoin_coreInstanceFactory<T> : KNATKoin_coreLockable
- (instancetype)initWithBeanDefinition:(KNATKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KNATKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(KNATKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(KNATKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(KNATKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(KNATKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) KNATKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface KNATKotlinPair<__covariant A, __covariant B> : KNATBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (B _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface KNATKoin_coreScopeDSL : KNATBase
- (instancetype)initWithScopeQualifier:(id<KNATKoin_coreQualifier>)scopeQualifier module:(KNATKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (KNATKotlinPair<KNATKoin_coreModule *, KNATKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<KNATKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(KNATKoin_coreScope *, KNATKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (KNATKotlinPair<KNATKoin_coreModule *, KNATKoin_coreInstanceFactory<id> *> *)scopedQualifier:(id<KNATKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(KNATKoin_coreScope *, KNATKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
- (KNATKotlinPair<KNATKoin_coreModule *, KNATKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<KNATKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(KNATKoin_coreScope *, KNATKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:definition:)"))) __attribute__((unavailable("Can't use Single in a scope. Use Scoped instead")));
@property (readonly) KNATKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<KNATKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface KNATKoin_coreSingleInstanceFactory<T> : KNATKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(KNATKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(KNATKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(KNATKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(KNATKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(KNATKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface KNATKtor_httpUrlCompanion : KNATBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KNATKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol KNATKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<KNATKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol KNATKtor_httpParameters <KNATKtor_utilsStringValues>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface KNATKtor_httpURLProtocol : KNATBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KNATKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol KNATKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(KNATKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreParametersHolder.Companion")))
@interface KNATKoin_coreParametersHolderCompanion : KNATBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KNATKoin_coreParametersHolderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_PARAMS __attribute__((swift_name("MAX_PARAMS")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface KNATKoin_coreLevel : KNATKotlinEnum<KNATKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KNATKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) KNATKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) KNATKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) KNATKoin_coreLevel *none __attribute__((swift_name("none")));
+ (KNATKotlinArray<KNATKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface KNATKoin_coreScopeRegistryCompanion : KNATBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KNATKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioByteString.Companion")))
@interface KNATOkioByteStringCompanion : KNATBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KNATOkioByteStringCompanion *shared __attribute__((swift_name("shared")));
- (KNATOkioByteString *)ofData:(KNATKotlinByteArray *)data __attribute__((swift_name("of(data:)")));
- (KNATOkioByteString * _Nullable)decodeBase64:(NSString *)receiver __attribute__((swift_name("decodeBase64(_:)")));
- (KNATOkioByteString *)decodeHex:(NSString *)receiver __attribute__((swift_name("decodeHex(_:)")));
- (KNATOkioByteString *)encodeUtf8:(NSString *)receiver __attribute__((swift_name("encodeUtf8(_:)")));
- (KNATOkioByteString *)toByteString:(KNATKotlinByteArray *)receiver offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("toByteString(_:offset:byteCount:)")));
@property (readonly) KNATOkioByteString *EMPTY __attribute__((swift_name("EMPTY")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface KNATKotlinByteArray : KNATBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KNATByte *(^)(KNATInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KNATKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KNATKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<KNATKotlinKClass>)kClass provider:(id<KNATKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KNATKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<KNATKotlinKClass>)kClass serializer:(id<KNATKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<KNATKotlinKClass>)baseClass actualClass:(id<KNATKotlinKClass>)actualClass actualSerializer:(id<KNATKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<KNATKotlinKClass>)baseClass defaultDeserializerProvider:(id<KNATKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<KNATKotlinKClass>)baseClass defaultDeserializerProvider:(id<KNATKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<KNATKotlinKClass>)baseClass defaultSerializerProvider:(id<KNATKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface KNATKoin_coreBeanDefinition<T> : KNATBase
- (instancetype)initWithScopeQualifier:(id<KNATKoin_coreQualifier>)scopeQualifier primaryType:(id<KNATKotlinKClass>)primaryType qualifier:(id<KNATKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(KNATKoin_coreScope *, KNATKoin_coreParametersHolder *))definition kind:(KNATKoin_coreKind *)kind secondaryTypes:(NSArray<id<KNATKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (id<KNATKoin_coreQualifier>)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<KNATKotlinKClass>)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<KNATKoin_coreQualifier> _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (T _Nullable (^)(KNATKoin_coreScope *, KNATKoin_coreParametersHolder *))component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATKoin_coreKind *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<id<KNATKotlinKClass>> *)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATKoin_coreBeanDefinition<T> *)doCopyScopeQualifier:(id<KNATKoin_coreQualifier>)scopeQualifier primaryType:(id<KNATKotlinKClass>)primaryType qualifier:(id<KNATKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(KNATKoin_coreScope *, KNATKoin_coreParametersHolder *))definition kind:(KNATKoin_coreKind *)kind secondaryTypes:(NSArray<id<KNATKotlinKClass>> *)secondaryTypes __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<KNATKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<KNATKotlinKClass>)clazz qualifier:(id<KNATKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<KNATKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KNATKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(KNATKoin_coreScope *, KNATKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) KNATKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<KNATKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<KNATKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<KNATKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<KNATKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface KNATKoin_coreInstanceFactoryCompanion : KNATBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KNATKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceContext")))
@interface KNATKoin_coreInstanceContext : KNATBase
- (instancetype)initWithKoin:(KNATKoin_coreKoin *)koin scope:(KNATKoin_coreScope *)scope parameters:(KNATKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(koin:scope:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) KNATKoin_coreKoin *koin __attribute__((swift_name("koin")));
@property (readonly) KNATKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) KNATKoin_coreScope *scope __attribute__((swift_name("scope")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol KNATKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface KNATKtor_httpURLProtocolCompanion : KNATBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KNATKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (KNATKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) KNATKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) KNATKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) KNATKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) KNATKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) KNATKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, KNATKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface KNATKotlinByteIterator : KNATBase <KNATKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KNATByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface KNATKoin_coreKind : KNATKotlinEnum<KNATKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KNATKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) KNATKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) KNATKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (KNATKotlinArray<KNATKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface KNATKoin_coreCallbacks<T> : KNATBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (void (^ _Nullable)(T _Nullable))component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (KNATKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
