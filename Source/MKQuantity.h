//
//  MKQuantity.h
//  MKUnits
//
//  Copyright (c) 2013 Michal Konturek
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

#import <Foundation/Foundation.h>

@class MKUnit;

@interface MKQuantity : NSObject

+ (instancetype)createWithAmount:(NSNumber *)amount
                        withUnit:(MKUnit *)unit;

@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic, strong) MKUnit *unit;

- (id)initWithAmount:(NSNumber *)amount withUnit:(MKUnit *)unit;

- (instancetype)add:(MKQuantity *)other;
- (instancetype)subtract:(MKQuantity *)other;
- (instancetype)multiplyBy:(MKQuantity *)other;
- (instancetype)divideBy:(MKQuantity *)other;
- (instancetype)negate;

- (instancetype)convertTo:(MKUnit *)unit;

- (NSNumber *)amountInBaseUnit;

- (BOOL)isTheSame:(MKQuantity *)other;
- (BOOL)isGreaterThan:(MKQuantity *)other;
- (BOOL)isLessThan:(MKQuantity *)other;

- (NSComparisonResult)compare:(MKQuantity *)other;

@end
