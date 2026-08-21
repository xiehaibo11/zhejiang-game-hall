package com.tkay.expressad.video.dynview.i;

import android.graphics.Bitmap;
import android.graphics.Color;

/* JADX INFO: loaded from: classes3.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile b f7234a;

    public static b a() {
        if (f7234a == null) {
            synchronized (b.class) {
                if (f7234a == null) {
                    f7234a = new b();
                }
            }
        }
        return f7234a;
    }

    /* JADX WARN: Removed duplicated region for block: B:57:0x006b A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:59:0x0070 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:63:0x0075 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:67:0x007a A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static android.graphics.Bitmap a(android.graphics.Bitmap r5, int r6) {
        /*
            r0 = 0
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L65
            r2 = 17
            if (r1 < r2) goto L49
            int r6 = r5.getWidth()     // Catch: java.lang.Throwable -> L65
            int r1 = r5.getHeight()     // Catch: java.lang.Throwable -> L65
            android.graphics.Bitmap$Config r2 = android.graphics.Bitmap.Config.ARGB_4444     // Catch: java.lang.Throwable -> L65
            android.graphics.Bitmap r6 = android.graphics.Bitmap.createBitmap(r6, r1, r2)     // Catch: java.lang.Throwable -> L65
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L65
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L65
            android.renderscript.RenderScript r1 = android.renderscript.RenderScript.create(r1)     // Catch: java.lang.Throwable -> L65
            android.renderscript.Element r2 = android.renderscript.Element.U8_4(r1)     // Catch: java.lang.Throwable -> L46
            android.renderscript.ScriptIntrinsicBlur r2 = android.renderscript.ScriptIntrinsicBlur.create(r1, r2)     // Catch: java.lang.Throwable -> L46
            android.renderscript.Allocation r5 = android.renderscript.Allocation.createFromBitmap(r1, r5)     // Catch: java.lang.Throwable -> L43
            android.renderscript.Allocation r3 = android.renderscript.Allocation.createFromBitmap(r1, r6)     // Catch: java.lang.Throwable -> L41
            r4 = 1099956224(0x41900000, float:18.0)
            r2.setRadius(r4)     // Catch: java.lang.Throwable -> L69
            r2.setInput(r5)     // Catch: java.lang.Throwable -> L69
            r2.forEach(r3)     // Catch: java.lang.Throwable -> L69
            r3.copyTo(r6)     // Catch: java.lang.Throwable -> L69
            r0 = r1
            goto L50
        L41:
            r3 = r0
            goto L69
        L43:
            r5 = r0
            r3 = r5
            goto L69
        L46:
            r5 = r0
            r2 = r5
            goto L68
        L49:
            android.graphics.Bitmap r6 = a(r6)     // Catch: java.lang.Throwable -> L65
            r5 = r0
            r2 = r5
            r3 = r2
        L50:
            if (r0 == 0) goto L55
            r0.destroy()     // Catch: java.lang.Throwable -> L55
        L55:
            if (r2 == 0) goto L5a
            r2.destroy()     // Catch: java.lang.Throwable -> L5a
        L5a:
            if (r5 == 0) goto L5f
            r5.destroy()     // Catch: java.lang.Throwable -> L5f
        L5f:
            if (r3 == 0) goto L64
            r3.destroy()     // Catch: java.lang.Throwable -> L64
        L64:
            return r6
        L65:
            r5 = r0
            r1 = r5
            r2 = r1
        L68:
            r3 = r2
        L69:
            if (r1 == 0) goto L6e
            r1.destroy()     // Catch: java.lang.Throwable -> L6e
        L6e:
            if (r2 == 0) goto L73
            r2.destroy()     // Catch: java.lang.Throwable -> L73
        L73:
            if (r5 == 0) goto L78
            r5.destroy()     // Catch: java.lang.Throwable -> L78
        L78:
            if (r3 == 0) goto L7d
            r3.destroy()     // Catch: java.lang.Throwable -> L7d
        L7d:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.video.dynview.i.b.a(android.graphics.Bitmap, int):android.graphics.Bitmap");
    }

    private static Bitmap a(int i) {
        Bitmap bitmapCreateBitmap = null;
        try {
            bitmapCreateBitmap = Bitmap.createBitmap(100, 100, Bitmap.Config.ARGB_4444);
            if (i == 1) {
                bitmapCreateBitmap.eraseColor(Color.parseColor("#FF0000"));
            } else {
                bitmapCreateBitmap.eraseColor(Color.parseColor("#FFFFFF"));
            }
        } catch (Exception e) {
            if (com.tkay.expressad.b.f6449a) {
                e.printStackTrace();
            }
        }
        return bitmapCreateBitmap;
    }
}
