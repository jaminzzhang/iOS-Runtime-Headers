/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetContextConfiguration : SABaseClientBoundCommand {
}

@property int contextTimeoutSeconds;

+ (id)setContextConfiguration;
+ (id)setContextConfigurationWithDictionary:(id)arg1 context:(id)arg2;

- (int)contextTimeoutSeconds;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setContextTimeoutSeconds:(int)arg1;

@end