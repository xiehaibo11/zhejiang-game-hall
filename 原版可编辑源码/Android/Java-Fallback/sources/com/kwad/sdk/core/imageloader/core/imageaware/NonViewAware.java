package com.kwad.sdk.core.imageloader.core.imageaware;

public class NonViewAware implements com.kwad.sdk.core.imageloader.core.imageaware.ImageAware {
    protected final com.kwad.sdk.core.imageloader.core.assist.ImageSize imageSize;
    protected final java.lang.String imageUri;
    protected final com.kwad.sdk.core.imageloader.core.assist.ViewScaleType scaleType;

    public NonViewAware(com.kwad.sdk.core.imageloader.core.assist.ImageSize r2, com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r2, r3)
            return
    }

    public NonViewAware(java.lang.String r1, com.kwad.sdk.core.imageloader.core.assist.ImageSize r2, com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r3) {
            r0 = this;
            r0.<init>()
            if (r2 == 0) goto L16
            if (r3 == 0) goto Le
            r0.imageUri = r1
            r0.imageSize = r2
            r0.scaleType = r3
            return
        Le:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "scaleType must not be null"
            r1.<init>(r2)
            throw r1
        L16:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "imageSize must not be null"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public int getHeight() {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r0 = r1.imageSize
            int r0 = r0.getHeight()
            return r0
    }

    @Override
    public int getId() {
            r1 = this;
            java.lang.String r0 = r1.imageUri
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Ld
            int r0 = super.hashCode()
            return r0
        Ld:
            java.lang.String r0 = r1.imageUri
            int r0 = r0.hashCode()
            return r0
    }

    @Override
    public com.kwad.sdk.core.imageloader.core.assist.ViewScaleType getScaleType() {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r0 = r1.scaleType
            return r0
    }

    @Override
    public int getWidth() {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r0 = r1.imageSize
            int r0 = r0.getWidth()
            return r0
    }

    @Override
    public android.view.View getWrappedView() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public boolean isCollected() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public boolean setImageBitmap(android.graphics.Bitmap r1) {
            r0 = this;
            r1 = 1
            return r1
    }

    @Override
    public boolean setImageDrawable(android.graphics.drawable.Drawable r1) {
            r0 = this;
            r1 = 1
            return r1
    }
}
