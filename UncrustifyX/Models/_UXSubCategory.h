// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to UXSubcategory.h instead.

#import <CoreData/CoreData.h>
#import "UXAbstractCategory.h"

extern const struct UXSubcategoryAttributes {
} UXSubcategoryAttributes;

extern const struct UXSubcategoryRelationships {
	__unsafe_unretained NSString *options;
	__unsafe_unretained NSString *parentCategories;
} UXSubcategoryRelationships;

extern const struct UXSubcategoryFetchedProperties {
} UXSubcategoryFetchedProperties;

@class UXOption;
@class UXCategory;


@interface UXSubcategoryID : NSManagedObjectID {}
@end

@interface _UXSubcategory : UXAbstractCategory {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (UXSubcategoryID*)objectID;





@property (nonatomic, strong) NSSet *options;

- (NSMutableSet*)optionsSet;




@property (nonatomic, strong) NSSet *parentCategories;

- (NSMutableSet*)parentCategoriesSet;





@end

@interface _UXSubcategory (CoreDataGeneratedAccessors)

- (void)addOptions:(NSSet*)value_;
- (void)removeOptions:(NSSet*)value_;
- (void)addOptionsObject:(UXOption*)value_;
- (void)removeOptionsObject:(UXOption*)value_;

- (void)addParentCategories:(NSSet*)value_;
- (void)removeParentCategories:(NSSet*)value_;
- (void)addParentCategoriesObject:(UXCategory*)value_;
- (void)removeParentCategoriesObject:(UXCategory*)value_;

@end

@interface _UXSubcategory (CoreDataGeneratedPrimitiveAccessors)



- (NSMutableSet*)primitiveOptions;
- (void)setPrimitiveOptions:(NSMutableSet*)value;



- (NSMutableSet*)primitiveParentCategories;
- (void)setPrimitiveParentCategories:(NSMutableSet*)value;


@end
