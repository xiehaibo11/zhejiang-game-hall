package com.kwad.sdk.core.imageloader.core.decode;

public class BaseImageDecoder implements com.kwad.sdk.core.imageloader.core.decode.ImageDecoder {
    protected static final java.lang.String ERROR_CANT_DECODE_IMAGE = "Image can't be decoded [%s]";
    protected static final java.lang.String ERROR_NO_IMAGE_STREAM = "No stream for image [%s]";
    protected static final java.lang.String LOG_FLIP_IMAGE = "Flip image horizontally [%s]";
    protected static final java.lang.String LOG_ROTATE_IMAGE = "Rotate image on %1$d° [%2$s]";
    protected static final java.lang.String LOG_SCALE_IMAGE = "Scale subsampled image (%1$s) to %2$s (scale = %3$.5f) [%4$s]";
    protected static final java.lang.String LOG_SUBSAMPLE_IMAGE = "Subsample original image (%1$s) to %2$s (scale = %3$d) [%4$s]";
    protected final boolean loggingEnabled;

    protected static class ExifInfo {
        public final boolean flipHorizontal;
        public final int rotation;

        protected ExifInfo() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.rotation = r0
                r1.flipHorizontal = r0
                return
        }

        protected ExifInfo(int r1, boolean r2) {
                r0 = this;
                r0.<init>()
                r0.rotation = r1
                r0.flipHorizontal = r2
                return
        }
    }

    protected static class ImageFileInfo {
        public final com.kwad.sdk.core.imageloader.core.decode.BaseImageDecoder.ExifInfo exif;
        public final com.kwad.sdk.core.imageloader.core.assist.ImageSize imageSize;

        protected ImageFileInfo(com.kwad.sdk.core.imageloader.core.assist.ImageSize r1, com.kwad.sdk.core.imageloader.core.decode.BaseImageDecoder.ExifInfo r2) {
                r0 = this;
                r0.<init>()
                r0.imageSize = r1
                r0.exif = r2
                return
        }
    }

    public BaseImageDecoder(boolean r1) {
            r0 = this;
            r0.<init>()
            r0.loggingEnabled = r1
            return
    }

    private boolean canDefineExifParams(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = "image/jpeg"
            boolean r3 = r0.equalsIgnoreCase(r3)
            if (r3 == 0) goto L12
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r2 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.ofUri(r2)
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r3 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.FILE
            if (r2 != r3) goto L12
            r2 = 1
            return r2
        L12:
            r2 = 0
            return r2
    }

    protected android.graphics.Bitmap considerExactScaleAndOrientatiton(android.graphics.Bitmap r11, com.kwad.sdk.core.imageloader.core.decode.ImageDecodingInfo r12, int r13, boolean r14) {
            r10 = this;
            android.graphics.Matrix r5 = new android.graphics.Matrix
            r5.<init>()
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r0 = r12.getImageScaleType()
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r1 = com.kwad.sdk.core.imageloader.core.assist.ImageScaleType.EXACTLY
            r2 = 2
            r3 = 1065353216(0x3f800000, float:1.0)
            r4 = 1
            r6 = 0
            if (r0 == r1) goto L16
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r1 = com.kwad.sdk.core.imageloader.core.assist.ImageScaleType.EXACTLY_STRETCHED
            if (r0 != r1) goto L60
        L16:
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r1 = new com.kwad.sdk.core.imageloader.core.assist.ImageSize
            int r7 = r11.getWidth()
            int r8 = r11.getHeight()
            r1.<init>(r7, r8, r13)
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r7 = r12.getTargetSize()
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r8 = r12.getViewScaleType()
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r9 = com.kwad.sdk.core.imageloader.core.assist.ImageScaleType.EXACTLY_STRETCHED
            if (r0 != r9) goto L31
            r0 = r4
            goto L32
        L31:
            r0 = r6
        L32:
            float r0 = com.kwad.sdk.core.imageloader.utils.ImageSizeUtils.computeImageScale(r1, r7, r8, r0)
            int r7 = java.lang.Float.compare(r0, r3)
            if (r7 == 0) goto L60
            r5.setScale(r0, r0)
            boolean r7 = r10.loggingEnabled
            if (r7 == 0) goto L60
            r7 = 4
            java.lang.Object[] r7 = new java.lang.Object[r7]
            r7[r6] = r1
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r1 = r1.scale(r0)
            r7[r4] = r1
            java.lang.Float r0 = java.lang.Float.valueOf(r0)
            r7[r2] = r0
            r0 = 3
            java.lang.String r1 = r12.getImageKey()
            r7[r0] = r1
            java.lang.String r0 = "Scale subsampled image (%1$s) to %2$s (scale = %3$.5f) [%4$s]"
            com.kwad.sdk.core.imageloader.utils.L.d(r0, r7)
        L60:
            if (r14 == 0) goto L78
            r14 = -1082130432(0xffffffffbf800000, float:-1.0)
            r5.postScale(r14, r3)
            boolean r14 = r10.loggingEnabled
            if (r14 == 0) goto L78
            java.lang.Object[] r14 = new java.lang.Object[r4]
            java.lang.String r0 = r12.getImageKey()
            r14[r6] = r0
            java.lang.String r0 = "Flip image horizontally [%s]"
            com.kwad.sdk.core.imageloader.utils.L.d(r0, r14)
        L78:
            if (r13 == 0) goto L95
            float r14 = (float) r13
            r5.postRotate(r14)
            boolean r14 = r10.loggingEnabled
            if (r14 == 0) goto L95
            java.lang.Object[] r14 = new java.lang.Object[r2]
            java.lang.Integer r13 = java.lang.Integer.valueOf(r13)
            r14[r6] = r13
            java.lang.String r12 = r12.getImageKey()
            r14[r4] = r12
            java.lang.String r12 = "Rotate image on %1$d° [%2$s]"
            com.kwad.sdk.core.imageloader.utils.L.d(r12, r14)
        L95:
            r1 = 0
            r2 = 0
            int r3 = r11.getWidth()
            int r4 = r11.getHeight()
            r6 = 1
            r0 = r11
            android.graphics.Bitmap r12 = android.graphics.Bitmap.createBitmap(r0, r1, r2, r3, r4, r5, r6)
            if (r12 == r11) goto Laa
            r11.recycle()
        Laa:
            return r12
    }

    @Override
    public com.kwad.sdk.core.imageloader.core.decode.DecodedResult decode(com.kwad.sdk.core.imageloader.core.decode.ImageDecodingInfo r8) {
            r7 = this;
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r0 = new com.kwad.sdk.core.imageloader.core.decode.DecodedResult
            r0.<init>()
            java.io.InputStream r1 = r7.getImageStream(r8)
            r2 = 0
            r3 = 0
            r4 = 1
            if (r1 != 0) goto L1c
            java.lang.Object[] r0 = new java.lang.Object[r4]
            java.lang.String r8 = r8.getImageKey()
            r0[r3] = r8
            java.lang.String r8 = "No stream for image [%s]"
            com.kwad.sdk.core.imageloader.utils.L.e(r8, r0)
            return r2
        L1c:
            com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r5 = r8.getLoadListener()     // Catch: java.lang.Throwable -> L72
            if (r5 == 0) goto L34
            com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r5 = r8.getLoadListener()     // Catch: java.lang.Throwable -> L72
            java.lang.String r6 = r8.getImageUri()     // Catch: java.lang.Throwable -> L72
            boolean r5 = r5.onDecode(r6, r1, r0)     // Catch: java.lang.Throwable -> L72
            if (r5 == 0) goto L34
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return r0
        L34:
            com.kwad.sdk.core.imageloader.core.decode.BaseImageDecoder$ImageFileInfo r5 = r7.defineImageSizeAndRotation(r1, r8)     // Catch: java.lang.Throwable -> L72
            java.io.InputStream r1 = r7.resetStream(r1, r8)     // Catch: java.lang.Throwable -> L72
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r6 = r5.imageSize     // Catch: java.lang.Throwable -> L72
            android.graphics.BitmapFactory$Options r6 = r7.prepareDecodingOptions(r6, r8)     // Catch: java.lang.Throwable -> L72
            android.graphics.Bitmap r2 = android.graphics.BitmapFactory.decodeStream(r1, r2, r6)     // Catch: java.lang.Throwable -> L72
            r0.mBitmap = r2     // Catch: java.lang.Throwable -> L72
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            android.graphics.Bitmap r1 = r0.mBitmap
            if (r1 != 0) goto L61
            com.kwad.sdk.glide.framesequence.FrameSequence r1 = r0.mFrameSequence
            if (r1 != 0) goto L61
            java.lang.Object[] r1 = new java.lang.Object[r4]
            java.lang.String r8 = r8.getImageKey()
            r1[r3] = r8
            java.lang.String r8 = "Image can't be decoded [%s]"
            com.kwad.sdk.core.imageloader.utils.L.e(r8, r1)
            goto L71
        L61:
            android.graphics.Bitmap r1 = r0.mBitmap
            com.kwad.sdk.core.imageloader.core.decode.BaseImageDecoder$ExifInfo r2 = r5.exif
            int r2 = r2.rotation
            com.kwad.sdk.core.imageloader.core.decode.BaseImageDecoder$ExifInfo r3 = r5.exif
            boolean r3 = r3.flipHorizontal
            android.graphics.Bitmap r8 = r7.considerExactScaleAndOrientatiton(r1, r8, r2, r3)
            r0.mBitmap = r8
        L71:
            return r0
        L72:
            r8 = move-exception
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            throw r8
    }

    protected com.kwad.sdk.core.imageloader.core.decode.BaseImageDecoder.ExifInfo defineExifOrientation(java.lang.String r6) {
            r5 = this;
            r0 = 0
            r1 = 1
            android.media.ExifInterface r2 = new android.media.ExifInterface     // Catch: java.io.IOException -> L29
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r3 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.FILE     // Catch: java.io.IOException -> L29
            java.lang.String r3 = r3.crop(r6)     // Catch: java.io.IOException -> L29
            r2.<init>(r3)     // Catch: java.io.IOException -> L29
            java.lang.String r3 = "Orientation"
            int r6 = r2.getAttributeInt(r3, r1)     // Catch: java.io.IOException -> L29
            switch(r6) {
                case 1: goto L26;
                case 2: goto L27;
                case 3: goto L20;
                case 4: goto L1f;
                case 5: goto L1b;
                case 6: goto L18;
                case 7: goto L17;
                case 8: goto L1c;
                default: goto L16;
            }
        L16:
            goto L32
        L17:
            r0 = r1
        L18:
            r6 = 90
            goto L22
        L1b:
            r0 = r1
        L1c:
            r6 = 270(0x10e, float:3.78E-43)
            goto L22
        L1f:
            r0 = r1
        L20:
            r6 = 180(0xb4, float:2.52E-43)
        L22:
            r4 = r0
            r0 = r6
            r6 = r4
            goto L33
        L26:
            r1 = r0
        L27:
            r6 = r1
            goto L33
        L29:
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r1[r0] = r6
            java.lang.String r6 = "Can't read EXIF tags from file [%s]"
            com.kwad.sdk.core.imageloader.utils.L.w(r6, r1)
        L32:
            r6 = r0
        L33:
            com.kwad.sdk.core.imageloader.core.decode.BaseImageDecoder$ExifInfo r1 = new com.kwad.sdk.core.imageloader.core.decode.BaseImageDecoder$ExifInfo
            r1.<init>(r0, r6)
            return r1
    }

    protected com.kwad.sdk.core.imageloader.core.decode.BaseImageDecoder.ImageFileInfo defineImageSizeAndRotation(java.io.InputStream r5, com.kwad.sdk.core.imageloader.core.decode.ImageDecodingInfo r6) {
            r4 = this;
            android.graphics.BitmapFactory$Options r0 = new android.graphics.BitmapFactory$Options
            r0.<init>()
            r1 = 1
            r0.inJustDecodeBounds = r1
            r1 = 0
            android.graphics.BitmapFactory.decodeStream(r5, r1, r0)
            java.lang.String r5 = r6.getImageUri()
            boolean r6 = r6.shouldConsiderExifParams()
            if (r6 == 0) goto L23
            java.lang.String r6 = r0.outMimeType
            boolean r6 = r4.canDefineExifParams(r5, r6)
            if (r6 == 0) goto L23
            com.kwad.sdk.core.imageloader.core.decode.BaseImageDecoder$ExifInfo r5 = r4.defineExifOrientation(r5)
            goto L28
        L23:
            com.kwad.sdk.core.imageloader.core.decode.BaseImageDecoder$ExifInfo r5 = new com.kwad.sdk.core.imageloader.core.decode.BaseImageDecoder$ExifInfo
            r5.<init>()
        L28:
            com.kwad.sdk.core.imageloader.core.decode.BaseImageDecoder$ImageFileInfo r6 = new com.kwad.sdk.core.imageloader.core.decode.BaseImageDecoder$ImageFileInfo
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r1 = new com.kwad.sdk.core.imageloader.core.assist.ImageSize
            int r2 = r0.outWidth
            int r0 = r0.outHeight
            int r3 = r5.rotation
            r1.<init>(r2, r0, r3)
            r6.<init>(r1, r5)
            return r6
    }

    public java.io.InputStream getImageStream(com.kwad.sdk.core.imageloader.core.decode.ImageDecodingInfo r3) {
            r2 = this;
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader r0 = r3.getDownloader()
            java.lang.String r1 = r3.getImageUri()
            java.lang.Object r3 = r3.getExtraForDownloader()
            java.io.InputStream r3 = r0.getStream(r1, r3)
            return r3
    }

    protected android.graphics.BitmapFactory.Options prepareDecodingOptions(com.kwad.sdk.core.imageloader.core.assist.ImageSize r6, com.kwad.sdk.core.imageloader.core.decode.ImageDecodingInfo r7) {
            r5 = this;
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r0 = r7.getImageScaleType()
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r1 = com.kwad.sdk.core.imageloader.core.assist.ImageScaleType.NONE
            r2 = 0
            r3 = 1
            if (r0 != r1) goto Lc
            r0 = r3
            goto L28
        Lc:
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r1 = com.kwad.sdk.core.imageloader.core.assist.ImageScaleType.NONE_SAFE
            if (r0 != r1) goto L15
            int r0 = com.kwad.sdk.core.imageloader.utils.ImageSizeUtils.computeMinImageSampleSize(r6)
            goto L28
        L15:
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r1 = r7.getTargetSize()
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r4 = com.kwad.sdk.core.imageloader.core.assist.ImageScaleType.IN_SAMPLE_POWER_OF_2
            if (r0 != r4) goto L1f
            r0 = r3
            goto L20
        L1f:
            r0 = r2
        L20:
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r4 = r7.getViewScaleType()
            int r0 = com.kwad.sdk.core.imageloader.utils.ImageSizeUtils.computeImageSampleSize(r6, r1, r4, r0)
        L28:
            if (r0 <= r3) goto L4c
            boolean r1 = r5.loggingEnabled
            if (r1 == 0) goto L4c
            r1 = 4
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r1[r2] = r6
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r6 = r6.scaleDown(r0)
            r1[r3] = r6
            r6 = 2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r0)
            r1[r6] = r2
            r6 = 3
            java.lang.String r2 = r7.getImageKey()
            r1[r6] = r2
            java.lang.String r6 = "Subsample original image (%1$s) to %2$s (scale = %3$d) [%4$s]"
            com.kwad.sdk.core.imageloader.utils.L.d(r6, r1)
        L4c:
            android.graphics.BitmapFactory$Options r6 = r7.getDecodingOptions()
            r6.inSampleSize = r0
            return r6
    }

    protected java.io.InputStream resetStream(java.io.InputStream r2, com.kwad.sdk.core.imageloader.core.decode.ImageDecodingInfo r3) {
            r1 = this;
            boolean r0 = r2.markSupported()
            if (r0 == 0) goto La
            r2.reset()     // Catch: java.io.IOException -> La
            return r2
        La:
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            java.io.InputStream r2 = r1.getImageStream(r3)
            return r2
    }
}
