//
//  JSQCallCollectionViewCell.h
//  JSQMessages
//
//  Created by Dylan Bourgeois on 20/11/14.
//

#import <UIKit/UIKit.h>

#import "JSQMessagesLabel.h"

#define kCallCellHeight 30.0f
#define kCallCellWidth 200.0f

@interface JSQCallCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic, readonly) JSQMessagesLabel *cellLabel;

#pragma mark - Class methods

+ (UINib *)nib;

+ (NSString *)cellReuseIdentifier;


@end
