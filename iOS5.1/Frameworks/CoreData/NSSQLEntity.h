/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSStoreMapping.h>

@class NSArray, NSEntityDescription, NSKnownKeysMappingStrategy, NSMutableArray, NSMutableDictionary, NSSQLEntityKey, NSSQLModel, NSSQLOptLockKey, NSSQLPrimaryKey, NSSQLStatement, NSSQLStoreMappingGenerator, NSString;

@interface NSSQLEntity : NSStoreMapping
{
    NSSQLModel *_model;
    NSEntityDescription *_entityDescription;
    NSString *_tableName;
    NSMutableDictionary *_properties;
    NSArray *_propertyAllCache;
    NSArray *_propertiesAllToManysCache;
    NSArray *_propertyManyToManyCache;
    NSMutableArray *_columnsToFetch;
    NSMutableArray *_ekColumns;
    NSMutableArray *_fkColumns;
    NSMutableArray *_fokColumns;
    NSMutableArray *_attrColumns;
    NSMutableArray *_virtualFKs;
    NSSQLPrimaryKey *_primaryKey;
    NSSQLEntityKey *_entityKey;
    NSSQLOptLockKey *_optLockKey;
    NSMutableArray *_subentities;
    NSSQLEntity *_superentity;
    NSSQLEntity *_rootEntity;
    NSSQLStoreMappingGenerator *_mappingGenerator;
    unsigned int _entityID;
    unsigned int _subentityMaxID;
    struct _NSRange _toOneRange;
    long long _maxPK;
    NSSQLStatement *_insertStatementCache;
    NSSQLStatement *_deletionStatementCache;
    NSSQLStatement *_faultingStatementCache;
    NSMutableDictionary *_toManyRelationshipStatementCache;
    void *_fetch_entity_plan;
    NSKnownKeysMappingStrategy *_propertyMapping;
    void *_odiousHashHackStorage;
    unsigned int _pkCount;
    struct __sqlentityFlags {
        unsigned int _hasAttributesWithExternalDataReferences:1;
        unsigned int _reserved:31;
    } _sqlentityFlags;
}

- (id)initWithModel:(id)arg1 entityDescription:(id)arg2;
- (id)_propertySearchMapping;
- (void)finalize;
- (void)dealloc;
- (id)name;
- (id)tableName;
- (id)properties;
- (id)toManyRelationships;
- (id)manyToManyRelationships;
- (id)propertiesByName;
- (id)subentityKey;
- (id)entityDescription;
- (unsigned int)fetchIndexForKey:(id)arg1;
- (id)columnsToFetch;
- (id)columnsToCreate;
- (id)foreignKeyColumns;
- (id)virtualForeignKeyColumns;
- (id)foreignEntityKeyColumns;
- (id)foreignOrderKeyColumns;
- (id)attributeColumns;
- (id)primaryKey;
- (id)optLockKey;
- (id)subentities;
- (BOOL)hasSubentities;
- (BOOL)hasInheritance;
- (void)setSubentities:(id)arg1;
- (BOOL)isRootEntity;
- (id)superentity;
- (void)_addSubentity:(id)arg1;
- (void)setSuperentity:(id)arg1;
- (unsigned int)entityID;
- (unsigned int)subentityMaxID;
- (BOOL)isKindOfSQLEntity:(id)arg1;
- (id)propertyNamed:(id)arg1;
- (id)attributeNamed:(id)arg1;
- (id)relationshipNamed:(id)arg1;
- (id)_sqlPropertyWithRenamingIdentifier:(id)arg1;
- (void)_addRootColumnToFetch:(id)arg1;
- (void)_addColumnToFetch:(id)arg1;
- (void)_addForeignOrderKeyForToOne:(id)arg1 entity:(id)arg2;
- (id)_addVirtualToOneForToMany:(id)arg1 withInheritedProperty:(id)arg2;
- (void)_generateInverseRelationshipsAndMore;
- (void)_generateProperties;
- (unsigned int)_generateIDWithSuperEntity:(id)arg1 nextID:(unsigned int)arg2;
- (void)_doPostModelGenerationCleanup;
- (void *)_odiousHashHack;
- (BOOL)hasAttributesWithExternalDataReferences;
- (id)model;
- (id)rootEntity;
- (unsigned int)_pkCount;
- (void)_resetPKCount;
- (void)_setMaxPK:(long long)arg1;
- (long long)nextPrimaryKey64;
- (void)addInsertedObject:(id)arg1 toArray:(id)arg2;
- (id)description;
- (void)clearCachedStatements;
- (id)insertStatement;
- (void)cacheInsertStatement:(id)arg1;
- (id)deletionStatement;
- (void)cacheDeletionStatement:(id)arg1;
- (id)faultingStatement;
- (void)cacheFaultingStatement:(id)arg1;
- (id)preparedFaultingCachesForRelationship:(id)arg1;
- (void)cacheFaultingStatement:(id)arg1 andFetchRequest:(id)arg2 forRelationship:(id)arg3;
- (struct _NSRange)_toOneRange;
- (id)mappingGenerator;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (BOOL)addPropertiesForReadOnlyFetch:(id)arg1 keys:(id)arg2 context:(id)arg3;
- (id)propertyMapping;

@end

