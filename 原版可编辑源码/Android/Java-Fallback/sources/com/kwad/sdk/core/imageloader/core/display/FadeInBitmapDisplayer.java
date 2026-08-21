package com.kwad.sdk.core.imageloader.core.display;

public class FadeInBitmapDisplayer implements com.kwad.sdk.core.imageloader.core.display.BitmapDisplayer {
    private final boolean animateFromDisk;
    private final boolean animateFromMemory;
    private final boolean animateFromNetwork;
    private final int durationMillis;

    public FadeInBitmapDisplayer(int r2) {
            r1 = this;
            r0 = 1
            r1.<init>(r2, r0, r0, r0)
            return
    }

    public FadeInBitmapDisplayer(int r1, boolean r2, boolean r3, boolean r4) {
            r0 = this;
            r0.<init>()
            r0.durationMillis = r1
            r0.animateFromNetwork = r2
            r0.animateFromDisk = r3
            r0.animateFromMemory = r4
            return
    }

    public static void animate(android.view.View r3, int r4) {
            if (r3 == 0) goto L19
            android.view.animation.AlphaAnimation r0 = new android.view.animation.AlphaAnimation
            r1 = 0
            r2 = 1065353216(0x3f800000, float:1.0)
            r0.<init>(r1, r2)
            long r1 = (long) r4
            r0.setDuration(r1)
            android.view.animation.DecelerateInterpolator r4 = new android.view.animation.DecelerateInterpolator
            r4.<init>()
            r0.setInterpolator(r4)
            r3.startAnimation(r0)
        L19:
            return
    }

    @Override
    public void display(com.kwad.sdk.core.imageloader.core.decode.DecodedResult r1, com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r2, com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r3) {
            r0 = this;
            android.graphics.Bitmap r1 = r1.mBitmap
            r2.setImageBitmap(r1)
            boolean r1 = r0.animateFromNetwork
            if (r1 == 0) goto Ld
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r1 = com.kwad.sdk.core.imageloader.core.assist.LoadedFrom.NETWORK
            if (r3 == r1) goto L1d
        Ld:
            boolean r1 = r0.animateFromDisk
            if (r1 == 0) goto L15
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r1 = com.kwad.sdk.core.imageloader.core.assist.LoadedFrom.DISC_CACHE
            if (r3 == r1) goto L1d
        L15:
            boolean r1 = r0.animateFromMemory
            if (r1 == 0) goto L26
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r1 = com.kwad.sdk.core.imageloader.core.assist.LoadedFrom.MEMORY_CACHE
            if (r3 != r1) goto L26
        L1d:
            android.view.View r1 = r2.getWrappedView()
            int r2 = r0.durationMillis
            animate(r1, r2)
        L26:
            return
    }
}
