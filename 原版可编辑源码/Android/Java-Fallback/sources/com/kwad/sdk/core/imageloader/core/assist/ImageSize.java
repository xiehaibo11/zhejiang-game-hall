package com.kwad.sdk.core.imageloader.core.assist;

public class ImageSize {
    private static final java.lang.String SEPARATOR = "x";
    private static final int TO_STRING_MAX_LENGHT = 9;
    private final int height;
    private final int width;

    public ImageSize(int r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.width = r1
            r0.height = r2
            return
    }

    public ImageSize(int r1, int r2, int r3) {
            r0 = this;
            r0.<init>()
            int r3 = r3 % 180
            if (r3 != 0) goto Lc
            r0.width = r1
            r0.height = r2
            return
        Lc:
            r0.width = r2
            r0.height = r1
            return
    }

    public int getHeight() {
            r1 = this;
            int r0 = r1.height
            return r0
    }

    public int getWidth() {
            r1 = this;
            int r0 = r1.width
            return r0
    }

    public com.kwad.sdk.core.imageloader.core.assist.ImageSize scale(float r4) {
            r3 = this;
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r0 = new com.kwad.sdk.core.imageloader.core.assist.ImageSize
            int r1 = r3.width
            float r1 = (float) r1
            float r1 = r1 * r4
            int r1 = (int) r1
            int r2 = r3.height
            float r2 = (float) r2
            float r2 = r2 * r4
            int r4 = (int) r2
            r0.<init>(r1, r4)
            return r0
    }

    public com.kwad.sdk.core.imageloader.core.assist.ImageSize scaleDown(int r4) {
            r3 = this;
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r0 = new com.kwad.sdk.core.imageloader.core.assist.ImageSize
            int r1 = r3.width
            int r1 = r1 / r4
            int r2 = r3.height
            int r2 = r2 / r4
            r0.<init>(r1, r2)
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r1 = 9
            r0.<init>(r1)
            int r1 = r2.width
            r0.append(r1)
            java.lang.String r1 = "x"
            r0.append(r1)
            int r1 = r2.height
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
