/*
	File:  VTUtilities.h
 
	Framework:  VideoToolbox
 
	Copyright © 2013-2014 Apple Inc. All rights reserved.
 
*/

#ifndef VTUTILITIES_H
#define VTUTILITIES_H

#include <VideoToolbox/VTBase.h>
#include <CoreVideo/CoreVideo.h>
#include <CoreGraphics/CoreGraphics.h>

#if defined(__cplusplus)
extern "C"
{
#endif
    
#pragma pack(push, 4)

/*!
	@function VTCreateCGImageFromCVPixelBuffer
	@abstract Creates a CGImage using the provided CVPixelBuffer
	@param	pixelBuffer
		The pixelBuffer to be used as the image data source for the CGImage.
	@param	options
		no options currently.  pass NULL.
	@param	imageOut
		pointer to an address to receive the newly created CGImage.
	@discussion
		This routine creates a CGImage representation of the image data contained in
		the provided CVPixelBuffer.
		The source CVPixelBuffer may be retained for the lifetime of the CGImage.  Changes
		to the CVPixelBuffer after making this call (other than releasing it) will have 
		undefined results.
		Not all CVPixelBuffer pixel formats will support conversion into a CGImage compatible
		pixel format.
*/
VT_EXPORT OSStatus 
VTCreateCGImageFromCVPixelBuffer(
	CM_NONNULL CVPixelBufferRef			pixelBuffer,
	CM_NULLABLE CFDictionaryRef			options,
	CM_RETURNS_RETAINED_PARAMETER CM_NULLABLE CGImageRef * CM_NONNULL imageOut ) API_AVAILABLE(macosx(10.11), ios(9.0), tvos(10.2));


#pragma pack(pop)

#if defined(__cplusplus)
}
#endif

#endif // VTUTILITIES_H
