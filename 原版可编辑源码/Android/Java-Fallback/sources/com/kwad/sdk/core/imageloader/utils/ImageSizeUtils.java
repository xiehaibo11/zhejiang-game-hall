package com.kwad.sdk.core.imageloader.utils;

public final class ImageSizeUtils {
    private static final int DEFAULT_MAX_BITMAP_DIMENSION = 2048;
    private static com.kwad.sdk.core.imageloader.core.assist.ImageSize maxBitmapSize;

    static class 1 {
        static final int[] $SwitchMap$com$kwad$sdk$core$imageloader$core$assist$ViewScaleType = null;

        static {
                com.kwad.sdk.core.imageloader.core.assist.ViewScaleType[] r0 = com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.kwad.sdk.core.imageloader.utils.ImageSizeUtils.1.$SwitchMap$com$kwad$sdk$core$imageloader$core$assist$ViewScaleType = r0
                com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r1 = com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.FIT_INSIDE     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.kwad.sdk.core.imageloader.utils.ImageSizeUtils.1.$SwitchMap$com$kwad$sdk$core$imageloader$core$assist$ViewScaleType     // Catch: java.lang.NoSuchFieldError -> L1d
                com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r1 = com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.CROP     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                return
        }
    }

    static {
            r0 = 1
            int[] r0 = new int[r0]
            r1 = 0
            r2 = 3379(0xd33, float:4.735E-42)
            android.opengl.GLES10.glGetIntegerv(r2, r0, r1)
            r0 = r0[r1]
            r1 = 2048(0x800, float:2.87E-42)
            int r0 = java.lang.Math.max(r0, r1)
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r1 = new com.kwad.sdk.core.imageloader.core.assist.ImageSize
            r1.<init>(r0, r0)
            com.kwad.sdk.core.imageloader.utils.ImageSizeUtils.maxBitmapSize = r1
            return
    }

    private ImageSizeUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int computeImageSampleSize(com.kwad.sdk.core.imageloader.core.assist.ImageSize r6, com.kwad.sdk.core.imageloader.core.assist.ImageSize r7, com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r8, boolean r9) {
            int r0 = r6.getWidth()
            int r6 = r6.getHeight()
            int r1 = r7.getWidth()
            int r7 = r7.getHeight()
            int[] r2 = com.kwad.sdk.core.imageloader.utils.ImageSizeUtils.1.$SwitchMap$com$kwad$sdk$core$imageloader$core$assist$ViewScaleType
            int r8 = r8.ordinal()
            r8 = r2[r8]
            r2 = 1
            if (r8 == r2) goto L3b
            r3 = 2
            if (r8 == r3) goto L20
            r4 = r2
            goto L55
        L20:
            if (r9 == 0) goto L32
            int r8 = r0 / 2
            int r3 = r6 / 2
            r4 = r2
        L27:
            int r5 = r8 / r4
            if (r5 <= r1) goto L55
            int r5 = r3 / r4
            if (r5 <= r7) goto L55
            int r4 = r4 * 2
            goto L27
        L32:
            int r8 = r0 / r1
            int r7 = r6 / r7
            int r4 = java.lang.Math.min(r8, r7)
            goto L55
        L3b:
            if (r9 == 0) goto L4d
            int r8 = r0 / 2
            int r3 = r6 / 2
            r4 = r2
        L42:
            int r5 = r8 / r4
            if (r5 > r1) goto L4a
            int r5 = r3 / r4
            if (r5 <= r7) goto L55
        L4a:
            int r4 = r4 * 2
            goto L42
        L4d:
            int r8 = r0 / r1
            int r7 = r6 / r7
            int r4 = java.lang.Math.max(r8, r7)
        L55:
            if (r4 > 0) goto L58
            goto L59
        L58:
            r2 = r4
        L59:
            int r6 = considerMaxTextureSize(r0, r6, r2, r9)
            return r6
    }

    public static float computeImageScale(com.kwad.sdk.core.imageloader.core.assist.ImageSize r7, com.kwad.sdk.core.imageloader.core.assist.ImageSize r8, com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r9, boolean r10) {
            int r0 = r7.getWidth()
            int r7 = r7.getHeight()
            int r1 = r8.getWidth()
            int r8 = r8.getHeight()
            float r2 = (float) r0
            float r3 = (float) r1
            float r3 = r2 / r3
            float r4 = (float) r7
            float r5 = (float) r8
            float r5 = r4 / r5
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r6 = com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.FIT_INSIDE
            if (r9 != r6) goto L20
            int r6 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r6 >= 0) goto L28
        L20:
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r6 = com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.CROP
            if (r9 != r6) goto L2b
            int r9 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r9 >= 0) goto L2b
        L28:
            float r4 = r4 / r3
            int r8 = (int) r4
            goto L2e
        L2b:
            float r9 = r2 / r5
            int r1 = (int) r9
        L2e:
            r9 = 1065353216(0x3f800000, float:1.0)
            if (r10 != 0) goto L36
            if (r1 >= r0) goto L36
            if (r8 < r7) goto L3c
        L36:
            if (r10 == 0) goto L3f
            if (r1 == r0) goto L3f
            if (r8 == r7) goto L3f
        L3c:
            float r7 = (float) r1
            float r9 = r7 / r2
        L3f:
            return r9
    }

    public static int computeMinImageSampleSize(com.kwad.sdk.core.imageloader.core.assist.ImageSize r3) {
            int r0 = r3.getWidth()
            int r3 = r3.getHeight()
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r1 = com.kwad.sdk.core.imageloader.utils.ImageSizeUtils.maxBitmapSize
            int r1 = r1.getWidth()
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r2 = com.kwad.sdk.core.imageloader.utils.ImageSizeUtils.maxBitmapSize
            int r2 = r2.getHeight()
            float r0 = (float) r0
            float r1 = (float) r1
            float r0 = r0 / r1
            double r0 = (double) r0
            double r0 = java.lang.Math.ceil(r0)
            int r0 = (int) r0
            float r3 = (float) r3
            float r1 = (float) r2
            float r3 = r3 / r1
            double r1 = (double) r3
            double r1 = java.lang.Math.ceil(r1)
            int r3 = (int) r1
            int r3 = java.lang.Math.max(r0, r3)
            return r3
    }

    private static int considerMaxTextureSize(int r3, int r4, int r5, boolean r6) {
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r0 = com.kwad.sdk.core.imageloader.utils.ImageSizeUtils.maxBitmapSize
            int r0 = r0.getWidth()
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r1 = com.kwad.sdk.core.imageloader.utils.ImageSizeUtils.maxBitmapSize
            int r1 = r1.getHeight()
        Lc:
            int r2 = r3 / r5
            if (r2 > r0) goto L16
            int r2 = r4 / r5
            if (r2 <= r1) goto L15
            goto L16
        L15:
            return r5
        L16:
            if (r6 == 0) goto L1b
            int r5 = r5 * 2
            goto Lc
        L1b:
            int r5 = r5 + 1
            goto Lc
    }

    public static com.kwad.sdk.core.imageloader.core.assist.ImageSize defineTargetSizeForView(com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r1, com.kwad.sdk.core.imageloader.core.assist.ImageSize r2) {
            int r0 = r1.getWidth()
            if (r0 > 0) goto La
            int r0 = r2.getWidth()
        La:
            int r1 = r1.getHeight()
            if (r1 > 0) goto L14
            int r1 = r2.getHeight()
        L14:
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r2 = new com.kwad.sdk.core.imageloader.core.assist.ImageSize
            r2.<init>(r0, r1)
            return r2
    }
}
