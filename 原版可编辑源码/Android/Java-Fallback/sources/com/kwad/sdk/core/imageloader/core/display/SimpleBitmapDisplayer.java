package com.kwad.sdk.core.imageloader.core.display;

public final class SimpleBitmapDisplayer implements com.kwad.sdk.core.imageloader.core.display.BitmapDisplayer {
    public SimpleBitmapDisplayer() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void display(com.kwad.sdk.core.imageloader.core.decode.DecodedResult r1, com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r2, com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r3) {
            r0 = this;
            android.graphics.Bitmap r1 = r1.mBitmap
            r2.setImageBitmap(r1)
            return
    }
}
