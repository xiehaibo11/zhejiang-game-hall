package com.mbridge.msdk.video.dynview.i;

public class a {
    private static volatile com.mbridge.msdk.video.dynview.i.a a;

    static {
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private static android.graphics.Bitmap a(int r3) {
            r0 = 0
            android.graphics.Bitmap$Config r1 = android.graphics.Bitmap.Config.ARGB_4444     // Catch: java.lang.Exception -> L20
            r2 = 100
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r2, r2, r1)     // Catch: java.lang.Exception -> L20
            r1 = 1
            if (r3 != r1) goto L16
            java.lang.String r3 = "#FF0000"
            int r3 = android.graphics.Color.parseColor(r3)     // Catch: java.lang.Exception -> L20
            r0.eraseColor(r3)     // Catch: java.lang.Exception -> L20
            goto L28
        L16:
            java.lang.String r3 = "#FFFFFF"
            int r3 = android.graphics.Color.parseColor(r3)     // Catch: java.lang.Exception -> L20
            r0.eraseColor(r3)     // Catch: java.lang.Exception -> L20
            goto L28
        L20:
            r3 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L28
            r3.printStackTrace()
        L28:
            return r0
    }

    public static com.mbridge.msdk.video.dynview.i.a a() {
            com.mbridge.msdk.video.dynview.i.a r0 = com.mbridge.msdk.video.dynview.i.a.a
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.video.dynview.i.a> r0 = com.mbridge.msdk.video.dynview.i.a.class
            monitor-enter(r0)
            com.mbridge.msdk.video.dynview.i.a r1 = com.mbridge.msdk.video.dynview.i.a.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.video.dynview.i.a r1 = new com.mbridge.msdk.video.dynview.i.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.video.dynview.i.a.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.mbridge.msdk.video.dynview.i.a r0 = com.mbridge.msdk.video.dynview.i.a.a
            return r0
    }

    public final android.graphics.Bitmap a(android.graphics.Bitmap r5, int r6) {
            r4 = this;
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L47
            r1 = 17
            if (r0 < r1) goto L42
            int r6 = r5.getWidth()     // Catch: java.lang.Throwable -> L47
            int r0 = r5.getHeight()     // Catch: java.lang.Throwable -> L47
            android.graphics.Bitmap$Config r1 = android.graphics.Bitmap.Config.ARGB_4444     // Catch: java.lang.Throwable -> L47
            android.graphics.Bitmap r6 = android.graphics.Bitmap.createBitmap(r6, r0, r1)     // Catch: java.lang.Throwable -> L47
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L47
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L47
            android.renderscript.RenderScript r0 = android.renderscript.RenderScript.create(r0)     // Catch: java.lang.Throwable -> L47
            android.renderscript.Element r1 = android.renderscript.Element.U8_4(r0)     // Catch: java.lang.Throwable -> L47
            android.renderscript.ScriptIntrinsicBlur r1 = android.renderscript.ScriptIntrinsicBlur.create(r0, r1)     // Catch: java.lang.Throwable -> L47
            android.renderscript.Allocation r5 = android.renderscript.Allocation.createFromBitmap(r0, r5)     // Catch: java.lang.Throwable -> L47
            android.renderscript.Allocation r2 = android.renderscript.Allocation.createFromBitmap(r0, r6)     // Catch: java.lang.Throwable -> L47
            r3 = 1099956224(0x41900000, float:18.0)
            r1.setRadius(r3)     // Catch: java.lang.Throwable -> L47
            r1.setInput(r5)     // Catch: java.lang.Throwable -> L47
            r1.forEach(r2)     // Catch: java.lang.Throwable -> L47
            r2.copyTo(r6)     // Catch: java.lang.Throwable -> L47
            r0.destroy()     // Catch: java.lang.Throwable -> L47
            goto L46
        L42:
            android.graphics.Bitmap r6 = a(r6)     // Catch: java.lang.Throwable -> L47
        L46:
            return r6
        L47:
            r5 = 0
            return r5
    }
}
