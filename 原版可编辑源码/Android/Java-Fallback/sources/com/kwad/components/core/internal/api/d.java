package com.kwad.components.core.internal.api;

public class d implements com.kwad.sdk.api.KsImage {
    private int height;
    private java.lang.String imageUrl;
    private int width;

    public d(int r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.width = r1
            r0.height = r2
            r0.imageUrl = r3
            return
    }

    public static void register() {
            java.lang.Class<com.kwad.sdk.api.KsImage> r0 = com.kwad.sdk.api.KsImage.class
            java.lang.Class<com.kwad.components.core.internal.api.d> r1 = com.kwad.components.core.internal.api.d.class
            com.kwad.sdk.service.b.b(r0, r1)
            return
    }

    @Override
    public int getHeight() {
            r1 = this;
            int r0 = r1.height
            return r0
    }

    @Override
    public java.lang.String getImageUrl() {
            r1 = this;
            java.lang.String r0 = r1.imageUrl
            return r0
    }

    @Override
    public int getWidth() {
            r1 = this;
            int r0 = r1.width
            return r0
    }

    @Override
    public boolean isValid() {
            r1 = this;
            int r0 = r1.width
            if (r0 <= 0) goto L12
            int r0 = r1.height
            if (r0 <= 0) goto L12
            java.lang.String r0 = r1.imageUrl
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L12
            r0 = 1
            return r0
        L12:
            r0 = 0
            return r0
    }
}
