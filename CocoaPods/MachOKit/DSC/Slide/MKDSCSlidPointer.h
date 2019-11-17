//----------------------------------------------------------------------------//
//|
//|             MachOKit - A Lightweight Mach-O Parsing Library
//! @file       MKDSCSlidPointer.h
//!
//! @author     D.V.
//! @copyright  Copyright (c) 2014-2015 D.V. All rights reserved.
//|
//| Permission is hereby granted, free of charge, to any person obtaining a
//| copy of this software and associated documentation files (the "Software"),
//| to deal in the Software without restriction, including without limitation
//| the rights to use, copy, modify, merge, publish, distribute, sublicense,
//| and/or sell copies of the Software, and to permit persons to whom the
//| Software is furnished to do so, subject to the following conditions:
//|
//| The above copyright notice and this permission notice shall be included
//| in all copies or substantial portions of the Software.
//|
//| THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//| OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
//| MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
//| IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
//| CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
//| TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
//| SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//----------------------------------------------------------------------------//

#include <libMachO/macho.h>
@import Foundation;

#import <MachOKit/MKOffsetNode.h>

@class MKDSCSlideInfoPage;

NS_ASSUME_NONNULL_BEGIN

//----------------------------------------------------------------------------//
@interface MKDSCSlidPointer : MKBackedNode {
@package
    MKDSCSlideInfoPage *_page;
    uint32_t _bitOffset;
}

- (nullable instancetype)initWithOffset:(uint32_t)bitOffset inEntryForPage:(MKDSCSlideInfoPage*)page error:(NSError**)error;

@property (nonatomic, readonly) MKDSCSlideInfoPage *page;

@property (nonatomic, readonly) mk_vm_offset_t pointerOffset;

// TODO - pointerVMAddress, mapping (always __DATA), image, ...

@end

NS_ASSUME_NONNULL_END
