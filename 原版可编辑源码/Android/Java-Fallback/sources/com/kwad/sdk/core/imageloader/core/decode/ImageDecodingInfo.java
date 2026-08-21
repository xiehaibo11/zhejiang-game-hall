package com.kwad.sdk.core.imageloader.core.decode;

public class ImageDecodingInfo {
    private final boolean considerExifParams;
    private final android.graphics.BitmapFactory.Options decodingOptions;
    private final com.kwad.sdk.core.imageloader.core.download.ImageDownloader downloader;
    private final java.lang.Object extraForDownloader;
    private final java.lang.String imageKey;
    private final com.kwad.sdk.core.imageloader.core.assist.ImageScaleType imageScaleType;
    private final java.lang.String imageUri;
    private final com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener listener;
    private final java.lang.String originalImageUri;
    private final com.kwad.sdk.core.imageloader.core.assist.ImageSize targetSize;
    private final com.kwad.sdk.core.imageloader.core.assist.ViewScaleType viewScaleType;

    public ImageDecodingInfo(java.lang.String r1, java.lang.String r2, java.lang.String r3, com.kwad.sdk.core.imageloader.core.assist.ImageSize r4, com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r5, com.kwad.sdk.core.imageloader.core.download.ImageDownloader r6, com.kwad.sdk.core.imageloader.core.DisplayImageOptions r7, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r8) {
            r0 = this;
            r0.<init>()
            r0.imageKey = r1
            r0.imageUri = r2
            r0.originalImageUri = r3
            r0.targetSize = r4
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r1 = r7.getImageScaleType()
            r0.imageScaleType = r1
            r0.viewScaleType = r5
            r0.downloader = r6
            java.lang.Object r1 = r7.getExtraForDownloader()
            r0.extraForDownloader = r1
            boolean r1 = r7.isConsiderExifParams()
            r0.considerExifParams = r1
            android.graphics.BitmapFactory$Options r1 = new android.graphics.BitmapFactory$Options
            r1.<init>()
            r0.decodingOptions = r1
            r0.listener = r8
            android.graphics.BitmapFactory$Options r1 = r7.getDecodingOptions()
            android.graphics.BitmapFactory$Options r2 = r0.decodingOptions
            r0.copyOptions(r1, r2)
            return
    }

    private void copyOptions(android.graphics.BitmapFactory.Options r3, android.graphics.BitmapFactory.Options r4) {
            r2 = this;
            int r0 = r3.inDensity
            r4.inDensity = r0
            boolean r0 = r3.inDither
            r4.inDither = r0
            boolean r0 = r3.inInputShareable
            r4.inInputShareable = r0
            boolean r0 = r3.inJustDecodeBounds
            r4.inJustDecodeBounds = r0
            android.graphics.Bitmap$Config r0 = r3.inPreferredConfig
            r4.inPreferredConfig = r0
            boolean r0 = r3.inPurgeable
            r4.inPurgeable = r0
            int r0 = r3.inSampleSize
            r4.inSampleSize = r0
            boolean r0 = r3.inScaled
            r4.inScaled = r0
            int r0 = r3.inScreenDensity
            r4.inScreenDensity = r0
            int r0 = r3.inTargetDensity
            r4.inTargetDensity = r0
            byte[] r0 = r3.inTempStorage
            r4.inTempStorage = r0
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 10
            if (r0 < r1) goto L35
            r2.copyOptions10(r3, r4)
        L35:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 11
            if (r0 < r1) goto L3e
            r2.copyOptions11(r3, r4)
        L3e:
            return
    }

    private void copyOptions10(android.graphics.BitmapFactory.Options r1, android.graphics.BitmapFactory.Options r2) {
            r0 = this;
            boolean r1 = r1.inPreferQualityOverSpeed
            r2.inPreferQualityOverSpeed = r1
            return
    }

    private void copyOptions11(android.graphics.BitmapFactory.Options r2, android.graphics.BitmapFactory.Options r3) {
            r1 = this;
            android.graphics.Bitmap r0 = r2.inBitmap
            r3.inBitmap = r0
            boolean r2 = r2.inMutable
            r3.inMutable = r2
            return
    }

    public android.graphics.BitmapFactory.Options getDecodingOptions() {
            r1 = this;
            android.graphics.BitmapFactory$Options r0 = r1.decodingOptions
            return r0
    }

    public com.kwad.sdk.core.imageloader.core.download.ImageDownloader getDownloader() {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader r0 = r1.downloader
            return r0
    }

    public java.lang.Object getExtraForDownloader() {
            r1 = this;
            java.lang.Object r0 = r1.extraForDownloader
            return r0
    }

    public java.lang.String getImageKey() {
            r1 = this;
            java.lang.String r0 = r1.imageKey
            return r0
    }

    public com.kwad.sdk.core.imageloader.core.assist.ImageScaleType getImageScaleType() {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r0 = r1.imageScaleType
            return r0
    }

    public java.lang.String getImageUri() {
            r1 = this;
            java.lang.String r0 = r1.imageUri
            return r0
    }

    public com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener getLoadListener() {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r0 = r1.listener
            return r0
    }

    public java.lang.String getOriginalImageUri() {
            r1 = this;
            java.lang.String r0 = r1.originalImageUri
            return r0
    }

    public com.kwad.sdk.core.imageloader.core.assist.ImageSize getTargetSize() {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r0 = r1.targetSize
            return r0
    }

    public com.kwad.sdk.core.imageloader.core.assist.ViewScaleType getViewScaleType() {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r0 = r1.viewScaleType
            return r0
    }

    public boolean shouldConsiderExifParams() {
            r1 = this;
            boolean r0 = r1.considerExifParams
            return r0
    }
}
