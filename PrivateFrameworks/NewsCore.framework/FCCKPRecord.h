/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPRecord : PBCodable <NSCopying> {
    NSMutableArray * _conflictLoserEtags;
    FCCKPIdentifier * _createdBy;
    NSString * _etag;
    NSMutableArray * _fields;
    FCCKPIdentifier * _modifiedBy;
    NSString * _modifiedByDevice;
    FCCKPRecordIdentifier * _recordIdentifier;
    FCCKPDateStatistics * _timeStatistics;
    FCCKPRecordType * _type;
}

@property (nonatomic, retain) NSMutableArray *conflictLoserEtags;
@property (nonatomic, retain) FCCKPIdentifier *createdBy;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, retain) NSMutableArray *fields;
@property (nonatomic, readonly) BOOL hasCreatedBy;
@property (nonatomic, readonly) BOOL hasEtag;
@property (nonatomic, readonly) BOOL hasModifiedBy;
@property (nonatomic, readonly) BOOL hasModifiedByDevice;
@property (nonatomic, readonly) BOOL hasRecordIdentifier;
@property (nonatomic, readonly) BOOL hasTimeStatistics;
@property (nonatomic, readonly) BOOL hasType;
@property (nonatomic, retain) FCCKPIdentifier *modifiedBy;
@property (nonatomic, retain) NSString *modifiedByDevice;
@property (nonatomic, retain) FCCKPRecordIdentifier *recordIdentifier;
@property (nonatomic, retain) FCCKPDateStatistics *timeStatistics;
@property (nonatomic, retain) FCCKPRecordType *type;

- (void)addConflictLoserEtags:(id)arg1;
- (void)addFields:(id)arg1;
- (void)clearConflictLoserEtags;
- (void)clearFields;
- (id)conflictLoserEtags;
- (id)conflictLoserEtagsAtIndex:(unsigned int)arg1;
- (unsigned int)conflictLoserEtagsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdBy;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (id)fields;
- (id)fieldsAtIndex:(unsigned int)arg1;
- (unsigned int)fieldsCount;
- (BOOL)hasCreatedBy;
- (BOOL)hasEtag;
- (BOOL)hasModifiedBy;
- (BOOL)hasModifiedByDevice;
- (BOOL)hasRecordIdentifier;
- (BOOL)hasTimeStatistics;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modifiedBy;
- (id)modifiedByDevice;
- (BOOL)readFrom:(id)arg1;
- (id)recordIdentifier;
- (void)setConflictLoserEtags:(id)arg1;
- (void)setCreatedBy:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setFields:(id)arg1;
- (void)setModifiedBy:(id)arg1;
- (void)setModifiedByDevice:(id)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)setTimeStatistics:(id)arg1;
- (void)setType:(id)arg1;
- (id)timeStatistics;
- (id)type;
- (void)writeTo:(id)arg1;

@end