//
//  SCPPaymentMethodOptionsParameters.h
//  StripeTerminal
//
//  Created by Matthew Krager on 2/8/22.
//  Copyright © 2022 Stripe. All rights reserved.
//
//  Use of this SDK is subject to the Stripe Terminal Terms:
//  https://stripe.com/terminal/legal
//

#import <Foundation/Foundation.h>
#import <StripeTerminal/SCPCardPresentParameters.h>
#import <StripeTerminal/SCPJSONDecodable.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * The `PaymentMethodOptionsParameters` contains options for PaymentMethod creation.
 */
NS_SWIFT_NAME(PaymentMethodOptionsParameters)
@interface SCPPaymentMethodOptionsParameters : NSObject

/**
 Card-present-specific configuration for this PaymentMethod.
 @see https://stripe.com/docs/api/payment_intents/object#payment_intent_object-payment_method_options-card_present
*/
@property (nonatomic, strong) SCPCardPresentParameters *cardPresentParameters;

/**
 Initialize a PaymentMethodOptionsParameters
 @param cardPresentParameters  Payment-method-specific configuration for this PaymentIntent.
 */
- (instancetype)initWithCardPresentParameters:(SCPCardPresentParameters *)cardPresentParameters;

/**
 Use `initWithCardPresentParameters:(SCPCardPresentParameters)cardPresentParameters`
 */
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
