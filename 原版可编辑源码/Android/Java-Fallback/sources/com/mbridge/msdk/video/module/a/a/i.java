package com.mbridge.msdk.video.module.a.a;

public final class i extends com.mbridge.msdk.video.module.a.a.d {
    private int a;

    public i(android.widget.ImageView r1, int r2) {
            r0 = this;
            r0.<init>(r1)
            r0.a = r2
            return
    }

    @Override
    public final void onSuccessLoad(android.graphics.Bitmap r2, java.lang.String r3) {
            r1 = this;
            if (r2 != 0) goto La
            java.lang.String r2 = "ImageLoaderListener"
            java.lang.String r3 = "bitmap=null"
            com.mbridge.msdk.foundation.tools.z.d(r2, r3)     // Catch: java.lang.Throwable -> L23
            return
        La:
            android.widget.ImageView r3 = r1.b     // Catch: java.lang.Throwable -> L23
            if (r3 == 0) goto L2b
            boolean r3 = r2.isRecycled()     // Catch: java.lang.Throwable -> L23
            if (r3 != 0) goto L2b
            r3 = 1
            int r0 = r1.a     // Catch: java.lang.Throwable -> L23
            android.graphics.Bitmap r2 = com.mbridge.msdk.foundation.tools.y.a(r2, r3, r0)     // Catch: java.lang.Throwable -> L23
            if (r2 == 0) goto L2b
            android.widget.ImageView r3 = r1.b     // Catch: java.lang.Throwable -> L23
            r3.setImageBitmap(r2)     // Catch: java.lang.Throwable -> L23
            goto L2b
        L23:
            r2 = move-exception
            boolean r3 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r3 == 0) goto L2b
            r2.printStackTrace()
        L2b:
            return
    }
}
