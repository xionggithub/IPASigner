//----------------------------------------------------------------------------//
//|
//|             MachOKit - A Lightweight Mach-O Parsing Library
//! @file       MKExportsInfo.h
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

#import <MachOKit/MKLinkEditNode.h>

@class MKExportTrieNode;
@class MKExport;

NS_ASSUME_NONNULL_BEGIN

//----------------------------------------------------------------------------//
@interface MKExportsInfo : MKLinkEditNode {
@package
	NSArray<__kindof MKExportTrieNode*> *_nodes;
    NSArray<__kindof MKExport*> *_exports;
}

//! Initializes the receiver with the provided Mach-O.
- (nullable instancetype)initWithImage:(MKMachOImage*)image error:(NSError**)error;

//! An array of nodes comprising the exports trie.
@property (nonatomic, readonly) NSArray<__kindof MKExportTrieNode*> *nodes;

//! An array of exports derived from the exports trie.
@property (nonatomic, readonly) NSArray<__kindof MKExport*> *exports;

@end

NS_ASSUME_NONNULL_END
