package com.kwad.sdk.core.imageloader;

public enum ImageLoaderProxy extends java.lang.Enum<com.kwad.sdk.core.imageloader.ImageLoaderProxy> implements com.kwad.sdk.core.imageloader.IImageLoader {
    private static final com.kwad.sdk.core.imageloader.ImageLoaderProxy[] $VALUES = null;
    public static final com.kwad.sdk.core.imageloader.ImageLoaderProxy INSTANCE = null;
    private final com.kwad.sdk.core.imageloader.IImageLoader mDelegate;

    static {
            com.kwad.sdk.core.imageloader.ImageLoaderProxy r0 = new com.kwad.sdk.core.imageloader.ImageLoaderProxy
            r1 = 0
            java.lang.String r2 = "INSTANCE"
            r0.<init>(r2, r1)
            com.kwad.sdk.core.imageloader.ImageLoaderProxy.INSTANCE = r0
            r2 = 1
            com.kwad.sdk.core.imageloader.ImageLoaderProxy[] r2 = new com.kwad.sdk.core.imageloader.ImageLoaderProxy[r2]
            r2[r1] = r0
            com.kwad.sdk.core.imageloader.ImageLoaderProxy.$VALUES = r2
            return
    }

    ImageLoaderProxy(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            com.kwad.sdk.core.imageloader.IImageLoader r1 = com.kwad.sdk.core.imageloader.ImageLoadFactory.create()
            r0.mDelegate = r1
            return
    }

    public static com.kwad.sdk.core.imageloader.ImageLoaderProxy valueOf(java.lang.String r1) {
            java.lang.Class<com.kwad.sdk.core.imageloader.ImageLoaderProxy> r0 = com.kwad.sdk.core.imageloader.ImageLoaderProxy.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.kwad.sdk.core.imageloader.ImageLoaderProxy r1 = (com.kwad.sdk.core.imageloader.ImageLoaderProxy) r1
            return r1
    }

    public static com.kwad.sdk.core.imageloader.ImageLoaderProxy[] values() {
            com.kwad.sdk.core.imageloader.ImageLoaderProxy[] r0 = com.kwad.sdk.core.imageloader.ImageLoaderProxy.$VALUES
            java.lang.Object r0 = r0.clone()
            com.kwad.sdk.core.imageloader.ImageLoaderProxy[] r0 = (com.kwad.sdk.core.imageloader.ImageLoaderProxy[]) r0
            return r0
    }

    @Override
    public final void clearMemory(android.content.Context r2) {
            r1 = this;
            com.kwad.sdk.core.imageloader.IImageLoader r0 = r1.mDelegate
            r0.clearMemory(r2)
            return
    }

    @Override
    public final void load(android.content.Context r7, android.widget.ImageView r8, java.lang.Object r9, int r10, int r11) {
            r6 = this;
            com.kwad.sdk.core.imageloader.IImageLoader r0 = r6.mDelegate
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r0.load(r1, r2, r3, r4, r5)
            return
    }

    @Override
    public final void load(android.content.Context r7, java.lang.String r8, android.widget.ImageView r9, com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r10, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r11) {
            r6 = this;
            com.kwad.sdk.core.imageloader.IImageLoader r0 = r6.mDelegate
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r0.load(r1, r2, r3, r4, r5)
            return
    }

    @Override
    public final void load(android.content.Context r2, java.lang.String r3, com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r4, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r5) {
            r1 = this;
            com.kwad.sdk.core.imageloader.IImageLoader r0 = r1.mDelegate
            r0.load(r2, r3, r4, r5)
            return
    }

    @Override
    public final void load(android.widget.ImageView r2, java.lang.Object r3) {
            r1 = this;
            com.kwad.sdk.core.imageloader.IImageLoader r0 = r1.mDelegate
            r0.load(r2, r3)
            return
    }

    @Override
    public final void load(android.widget.ImageView r2, java.lang.Object r3, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r4) {
            r1 = this;
            com.kwad.sdk.core.imageloader.IImageLoader r0 = r1.mDelegate
            r0.load(r2, r3, r4)
            return
    }

    @Override
    public final void load(android.widget.ImageView r2, java.lang.Object r3, com.kwad.sdk.core.response.model.AdTemplate r4) {
            r1 = this;
            com.kwad.sdk.core.imageloader.IImageLoader r0 = r1.mDelegate
            r0.load(r2, r3, r4)
            return
    }

    @Override
    public final void load(com.kwad.sdk.api.core.fragment.KsFragment r7, android.content.Context r8, java.lang.String r9, com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r10, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r11) {
            r6 = this;
            com.kwad.sdk.core.imageloader.IImageLoader r0 = r6.mDelegate
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r0.load(r1, r2, r3, r4, r5)
            return
    }

    @Override
    public final void load(com.kwad.sdk.api.core.fragment.KsFragment r7, java.lang.String r8, android.widget.ImageView r9, android.graphics.drawable.Drawable r10, android.graphics.drawable.Drawable r11) {
            r6 = this;
            com.kwad.sdk.core.imageloader.IImageLoader r0 = r6.mDelegate
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r0.load(r1, r2, r3, r4, r5)
            return
    }

    @Override
    public final void load(com.kwad.sdk.api.core.fragment.KsFragment r8, java.lang.String r9, android.widget.ImageView r10, android.graphics.drawable.Drawable r11, android.graphics.drawable.Drawable r12, float r13) {
            r7 = this;
            com.kwad.sdk.core.imageloader.IImageLoader r0 = r7.mDelegate
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r0.load(r1, r2, r3, r4, r5, r6)
            return
    }

    @Override
    public final void pause() {
            r1 = this;
            com.kwad.sdk.core.imageloader.IImageLoader r0 = r1.mDelegate
            r0.pause()
            return
    }

    @Override
    public final void resume() {
            r1 = this;
            com.kwad.sdk.core.imageloader.IImageLoader r0 = r1.mDelegate
            r0.resume()
            return
    }
}
