/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBFileSystemManager : NSObject {
    NSString * _currentSnapshotName;
    NSString * _currentSnapshotPath;
    NSString * _fileSystemType;
    BOOL  _supportsLocalSnapshots;
}

@property (nonatomic, readonly) NSString *currentSnapshotName;
@property (nonatomic, readonly) NSString *currentSnapshotPath;
@property (nonatomic, retain) NSString *fileSystemType;
@property (nonatomic, readonly) BOOL supportsLocalSnapshots;

+ (unsigned long long)availableCacheSize;
+ (unsigned long long)fileSystemCapacity;
+ (id)sharedManager;

- (void).cxx_destruct;
- (BOOL)_isFileSystemAPFS;
- (id)_snapshotName:(id)arg1;
- (id)currentSnapshotName;
- (id)currentSnapshotPath;
- (id)description;
- (id)fileSystemType;
- (id)init;
- (BOOL)mountSnapshot:(id)arg1 withError:(id*)arg2;
- (BOOL)removeSnapshot:(id)arg1 withError:(id*)arg2;
- (void)setFileSystemType:(id)arg1;
- (BOOL)snapshotFilesystem:(id)arg1 withError:(id*)arg2;
- (BOOL)supportsLocalSnapshots;
- (BOOL)unmountCurrentSnapshotAndRemove:(BOOL)arg1 withError:(id*)arg2;

@end