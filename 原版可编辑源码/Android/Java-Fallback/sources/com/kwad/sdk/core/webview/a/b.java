package com.kwad.sdk.core.webview.a;

public final class b extends android.webkit.WebChromeClient {
    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final android.graphics.Bitmap getDefaultVideoPoster() {
            r2 = this;
            android.graphics.Bitmap r0 = super.getDefaultVideoPoster()
            if (r0 != 0) goto L11
            android.graphics.Bitmap$Config r0 = android.graphics.Bitmap.Config.RGB_565
            r1 = 1
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r1, r1, r0)
            r1 = 0
            r0.eraseColor(r1)
        L11:
            return r0
    }
}
