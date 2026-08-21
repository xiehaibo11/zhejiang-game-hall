package com.vivo.push.util;

public final class c {
    public static android.graphics.Bitmap a(android.graphics.Bitmap r7, int r8, int r9) {
            int r3 = r7.getWidth()
            int r4 = r7.getHeight()
            float r8 = (float) r8
            float r0 = (float) r3
            float r8 = r8 / r0
            float r9 = (float) r9
            float r0 = (float) r4
            float r9 = r9 / r0
            android.graphics.Matrix r5 = new android.graphics.Matrix     // Catch: java.lang.Exception -> L1e
            r5.<init>()     // Catch: java.lang.Exception -> L1e
            r5.postScale(r8, r9)     // Catch: java.lang.Exception -> L1e
            r1 = 0
            r2 = 0
            r6 = 1
            r0 = r7
            android.graphics.Bitmap r7 = android.graphics.Bitmap.createBitmap(r0, r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L1e
        L1e:
            return r7
    }
}
