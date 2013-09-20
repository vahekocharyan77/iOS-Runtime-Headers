/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSCache, NSDictionary, NSMutableDictionary, NSString, VKObjectPool, VKPShieldVariant;

@interface VKShieldArtwork : NSObject <VKObjectPoolObject> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGPoint { 
        float x; 
        float y; 
    } _center;
    float _extraScale;
    struct CGImage { } *_image;
    NSCache *_imageCache;
    struct __CTFont { } *_nonDigitFont;
    VKObjectPool *_pool;
    NSString *_poolKey;
    } _rectInAtlas;
    float _scale;
    struct CGColor { } *_shadowColor;
    NSDictionary *_stringAttributes;
    NSMutableDictionary *_textSpecificArtworks;
    VKPShieldVariant *_variantData;
}

- (id).cxx_construct;
- (void)dealloc;
- (id)imageWithShieldText:(id)arg1;
- (id)initWithPackedVariant:(id)arg1 imageAtlas:(id)arg2 quadSize:(struct CGSize { float x1; float x2; })arg3 scale:(float)arg4 extraScale:(float)arg5;
- (struct CGImage { }*)newImageWithShieldText:(id)arg1 centerPoint:(struct CGPoint { float x1; float x2; }*)arg2;
- (void)setPool:(id)arg1 withKey:(id)arg2;
- (void)setTextSpecificArtwork:(id)arg1 forStrings:(id)arg2;

@end