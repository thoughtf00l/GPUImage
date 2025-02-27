#import <UIKit/UIKit.h>

//! Project version number for GPUImageFramework.
FOUNDATION_EXPORT double GPUImageFrameworkVersionNumber;

//! Project version string for GPUImageFramework.
FOUNDATION_EXPORT const unsigned char GPUImageFrameworkVersionString[];

#import <GPUImage/GLProgram.h>

// Base classes
#import <GPUImage/GPUImageContext.h>
#import <GPUImage/GPUImageOutput.h>
#import <GPUImage/GPUImageView.h>
#import <GPUImage/GPUImageVideoCamera.h>
#import <GPUImage/GPUImageStillCamera.h>
#import <GPUImage/GPUImageMovie.h>
#import <GPUImage/GPUImagePicture.h>
#import <GPUImage/GPUImageRawDataInput.h>
#import <GPUImage/GPUImageRawDataOutput.h>
#import <GPUImage/GPUImageMovieWriter.h>
#import <GPUImage/GPUImageFilterPipeline.h>
#import <GPUImage/GPUImageTextureOutput.h>
#import <GPUImage/GPUImageFilterGroup.h>
#import <GPUImage/GPUImageTextureInput.h>
#import <GPUImage/GPUImageUIElement.h>
#import <GPUImage/GPUImageBuffer.h>
#import <GPUImage/GPUImageFramebuffer.h>
#import <GPUImage/GPUImageFramebufferCache.h>

// Filters
#import <GPUImage/GPUImageFilter.h>
#import <GPUImage/GPUImageTwoInputFilter.h>
#import <GPUImage/GPUImagePixellateFilter.h>
#import <GPUImage/GPUImagePixellatePositionFilter.h>
#import <GPUImage/GPUImageSepiaFilter.h>
#import <GPUImage/GPUImageColorInvertFilter.h>
#import <GPUImage/GPUImageSaturationFilter.h>
#import <GPUImage/GPUImageContrastFilter.h>
#import <GPUImage/GPUImageExposureFilter.h>
#import <GPUImage/GPUImageBrightnessFilter.h>
#import <GPUImage/GPUImageLevelsFilter.h>
#import <GPUImage/GPUImageSharpenFilter.h>
#import <GPUImage/GPUImageGammaFilter.h>
#import <GPUImage/GPUImageSobelEdgeDetectionFilter.h>
#import <GPUImage/GPUImageSketchFilter.h>
#import <GPUImage/GPUImageToonFilter.h>
#import <GPUImage/GPUImageSmoothToonFilter.h>
#import <GPUImage/GPUImageMultiplyBlendFilter.h>
#import <GPUImage/GPUImageDissolveBlendFilter.h>
#import <GPUImage/GPUImageKuwaharaFilter.h>
#import <GPUImage/GPUImageKuwaharaRadius3Filter.h>
#import <GPUImage/GPUImageVignetteFilter.h>
#import <GPUImage/GPUImageVibranceFilter.h>
#import <GPUImage/GPUImageGaussianBlurFilter.h>
#import <GPUImage/GPUImageGaussianBlurPositionFilter.h>
#import <GPUImage/GPUImageGaussianSelectiveBlurFilter.h>
#import <GPUImage/GPUImageOverlayBlendFilter.h>
#import <GPUImage/GPUImageDarkenBlendFilter.h>
#import <GPUImage/GPUImageLightenBlendFilter.h>
#import <GPUImage/GPUImageSwirlFilter.h>
#import <GPUImage/GPUImageSourceOverBlendFilter.h>
#import <GPUImage/GPUImageColorBurnBlendFilter.h>
#import <GPUImage/GPUImageColorDodgeBlendFilter.h>
#import <GPUImage/GPUImageScreenBlendFilter.h>
#import <GPUImage/GPUImageExclusionBlendFilter.h>
#import <GPUImage/GPUImageDifferenceBlendFilter.h>
#import <GPUImage/GPUImageSubtractBlendFilter.h>
#import <GPUImage/GPUImageHardLightBlendFilter.h>
#import <GPUImage/GPUImageSoftLightBlendFilter.h>
#import <GPUImage/GPUImageColorBlendFilter.h>
#import <GPUImage/GPUImageHueBlendFilter.h>
#import <GPUImage/GPUImageSaturationBlendFilter.h>
#import <GPUImage/GPUImageLuminosityBlendFilter.h>
#import <GPUImage/GPUImageCropFilter.h>
#import <GPUImage/GPUImageGrayscaleFilter.h>
#import <GPUImage/GPUImageTransformFilter.h>
#import <GPUImage/GPUImageChromaKeyBlendFilter.h>
#import <GPUImage/GPUImageHazeFilter.h>
#import <GPUImage/GPUImageLuminanceThresholdFilter.h>
#import <GPUImage/GPUImagePosterizeFilter.h>
#import <GPUImage/GPUImageBoxBlurFilter.h>
#import <GPUImage/GPUImageAdaptiveThresholdFilter.h>
#import <GPUImage/GPUImageUnsharpMaskFilter.h>
#import <GPUImage/GPUImageBulgeDistortionFilter.h>
#import <GPUImage/GPUImagePinchDistortionFilter.h>
#import <GPUImage/GPUImageCrosshatchFilter.h>
#import <GPUImage/GPUImageCGAColorspaceFilter.h>
#import <GPUImage/GPUImagePolarPixellateFilter.h>
#import <GPUImage/GPUImageStretchDistortionFilter.h>
#import <GPUImage/GPUImagePerlinNoiseFilter.h>
#import <GPUImage/GPUImageJFAVoronoiFilter.h>
#import <GPUImage/GPUImageVoronoiConsumerFilter.h>
#import <GPUImage/GPUImageMosaicFilter.h>
#import <GPUImage/GPUImageTiltShiftFilter.h>
#import <GPUImage/GPUImage3x3ConvolutionFilter.h>
#import <GPUImage/GPUImageEmbossFilter.h>
#import <GPUImage/GPUImageCannyEdgeDetectionFilter.h>
#import <GPUImage/GPUImageThresholdEdgeDetectionFilter.h>
#import <GPUImage/GPUImageMaskFilter.h>
#import <GPUImage/GPUImageHistogramFilter.h>
#import <GPUImage/GPUImageHistogramGenerator.h>
#import <GPUImage/GPUImagePrewittEdgeDetectionFilter.h>
#import <GPUImage/GPUImageXYDerivativeFilter.h>
#import <GPUImage/GPUImageHarrisCornerDetectionFilter.h>
#import <GPUImage/GPUImageAlphaBlendFilter.h>
#import <GPUImage/GPUImageNormalBlendFilter.h>
#import <GPUImage/GPUImageNonMaximumSuppressionFilter.h>
#import <GPUImage/GPUImageRGBFilter.h>
#import <GPUImage/GPUImageMedianFilter.h>
#import <GPUImage/GPUImageBilateralFilter.h>
#import <GPUImage/GPUImageCrosshairGenerator.h>
#import <GPUImage/GPUImageToneCurveFilter.h>
#import <GPUImage/GPUImageNobleCornerDetectionFilter.h>
#import <GPUImage/GPUImageShiTomasiFeatureDetectionFilter.h>
#import <GPUImage/GPUImageErosionFilter.h>
#import <GPUImage/GPUImageRGBErosionFilter.h>
#import <GPUImage/GPUImageDilationFilter.h>
#import <GPUImage/GPUImageRGBDilationFilter.h>
#import <GPUImage/GPUImageOpeningFilter.h>
#import <GPUImage/GPUImageRGBOpeningFilter.h>
#import <GPUImage/GPUImageClosingFilter.h>
#import <GPUImage/GPUImageRGBClosingFilter.h>
#import <GPUImage/GPUImageColorPackingFilter.h>
#import <GPUImage/GPUImageSphereRefractionFilter.h>
#import <GPUImage/GPUImageMonochromeFilter.h>
#import <GPUImage/GPUImageOpacityFilter.h>
#import <GPUImage/GPUImageHighlightShadowFilter.h>
#import <GPUImage/GPUImageFalseColorFilter.h>
#import <GPUImage/GPUImageHSBFilter.h>
#import <GPUImage/GPUImageHueFilter.h>
#import <GPUImage/GPUImageGlassSphereFilter.h>
#import <GPUImage/GPUImageLookupFilter.h>
#import <GPUImage/GPUImageAmatorkaFilter.h>
#import <GPUImage/GPUImageMissEtikateFilter.h>
#import <GPUImage/GPUImageSoftEleganceFilter.h>
#import <GPUImage/GPUImageAddBlendFilter.h>
#import <GPUImage/GPUImageDivideBlendFilter.h>
#import <GPUImage/GPUImagePolkaDotFilter.h>
#import <GPUImage/GPUImageLocalBinaryPatternFilter.h>
#import <GPUImage/GPUImageColorLocalBinaryPatternFilter.h>
#import <GPUImage/GPUImageLanczosResamplingFilter.h>
#import <GPUImage/GPUImageAverageColor.h>
#import <GPUImage/GPUImageSolidColorGenerator.h>
#import <GPUImage/GPUImageLuminosity.h>
#import <GPUImage/GPUImageAverageLuminanceThresholdFilter.h>
#import <GPUImage/GPUImageWhiteBalanceFilter.h>
#import <GPUImage/GPUImageChromaKeyFilter.h>
#import <GPUImage/GPUImageLowPassFilter.h>
#import <GPUImage/GPUImageHighPassFilter.h>
#import <GPUImage/GPUImageMotionDetector.h>
#import <GPUImage/GPUImageHalftoneFilter.h>
#import <GPUImage/GPUImageThresholdedNonMaximumSuppressionFilter.h>
#import <GPUImage/GPUImageHoughTransformLineDetector.h>
#import <GPUImage/GPUImageParallelCoordinateLineTransformFilter.h>
#import <GPUImage/GPUImageThresholdSketchFilter.h>
#import <GPUImage/GPUImageLineGenerator.h>
#import <GPUImage/GPUImageLinearBurnBlendFilter.h>
#import <GPUImage/GPUImageGaussianBlurPositionFilter.h>
#import <GPUImage/GPUImagePixellatePositionFilter.h>
#import <GPUImage/GPUImageTwoInputCrossTextureSamplingFilter.h>
#import <GPUImage/GPUImagePoissonBlendFilter.h>
#import <GPUImage/GPUImageMotionBlurFilter.h>
#import <GPUImage/GPUImageZoomBlurFilter.h>
#import <GPUImage/GPUImageLaplacianFilter.h>
#import <GPUImage/GPUImageiOSBlurFilter.h>
#import <GPUImage/GPUImageLuminanceRangeFilter.h>
#import <GPUImage/GPUImageDirectionalNonMaximumSuppressionFilter.h>
#import <GPUImage/GPUImageDirectionalSobelEdgeDetectionFilter.h>
#import <GPUImage/GPUImageSingleComponentGaussianBlurFilter.h>
#import <GPUImage/GPUImageThreeInputFilter.h>
#import <GPUImage/GPUImageFourInputFilter.h>
#import <GPUImage/GPUImageWeakPixelInclusionFilter.h>
#import <GPUImage/GPUImageFASTCornerDetectionFilter.h>
#import <GPUImage/GPUImageMovieComposition.h>
#import <GPUImage/GPUImageColourFASTFeatureDetector.h>
#import <GPUImage/GPUImageColourFASTSamplingOperation.h>
#import <GPUImage/GPUImageSolarizeFilter.h>
