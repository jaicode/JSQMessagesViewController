//
//  JSQCall.h
//  JSQMessages
//
//  Created by Dylan Bourgeois on 20/11/14.
//

#import <Foundation/Foundation.h>

#import "JSQMessageData.h"

typedef enum : NSUInteger {
    kCallNone,
    kCallOutgoing,
    kCallIncoming,
    kCallMissed,
    kCallFailed
} CallStatus;


@interface JSQCall : NSObject <JSQMessageData, NSCoding, NSCopying>

/*
 * Returns the string Id of the user who initiated the call
 */
@property (copy, nonatomic, readonly) NSString *senderId;


/*
 * Returns the display name for user who initiated the call
 */
@property (copy, nonatomic, readonly) NSString *senderDisplayName;

/*
 * Returns date of the call
 */
@property (copy, nonatomic, readonly) NSDate *date;

/*
 * Returns the duration of the call in seconds
 */
@property (nonatomic, readonly) long duration;

/*
 * Returns the call status 
 * @see CallStatus
 */
@property (nonatomic) CallStatus status;


#pragma mark - Initialization 

- (instancetype)initWithCallerId:(NSString *)callerId
               callerDisplayName:(NSString *)callerDisplayName
                            date:(NSDate *)date
                        duration:(long)durationInSeconds
                          status:(CallStatus)status;

-(NSString*)text;

@end