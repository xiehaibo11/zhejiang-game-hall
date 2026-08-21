package com.mbridge.msdk.foundation.same.c;

public final class a {
    public static android.graphics.Bitmap a(java.lang.String r4) {
            boolean r0 = com.mbridge.msdk.foundation.tools.x.a(r4)
            r1 = 0
            if (r0 == 0) goto L40
            android.graphics.BitmapFactory$Options r0 = new android.graphics.BitmapFactory$Options
            r0.<init>()
            r2 = 1
            r0.inJustDecodeBounds = r2     // Catch: java.lang.Exception -> L20 java.lang.OutOfMemoryError -> L25
            android.graphics.BitmapFactory.decodeFile(r4, r0)     // Catch: java.lang.Exception -> L20 java.lang.OutOfMemoryError -> L25
            r3 = 0
            r0.inJustDecodeBounds = r3     // Catch: java.lang.Exception -> L20 java.lang.OutOfMemoryError -> L25
            r0.inPurgeable = r2     // Catch: java.lang.Exception -> L20 java.lang.OutOfMemoryError -> L25
            r0.inInputShareable = r2     // Catch: java.lang.Exception -> L20 java.lang.OutOfMemoryError -> L25
            r0.inDither = r2     // Catch: java.lang.Exception -> L20 java.lang.OutOfMemoryError -> L25
            android.graphics.Bitmap r1 = android.graphics.BitmapFactory.decodeFile(r4, r0)     // Catch: java.lang.Exception -> L20 java.lang.OutOfMemoryError -> L25
            goto L40
        L20:
            r4 = move-exception
            r4.printStackTrace()
            goto L40
        L25:
            r2 = move-exception
            r2.printStackTrace()
            java.lang.System.gc()
            com.mbridge.msdk.foundation.same.c.b.b()
            android.graphics.Bitmap$Config r2 = android.graphics.Bitmap.Config.RGB_565     // Catch: java.lang.OutOfMemoryError -> L3c
            r0.inPreferredConfig = r2     // Catch: java.lang.OutOfMemoryError -> L3c
            android.graphics.Bitmap r1 = android.graphics.BitmapFactory.decodeFile(r4, r0)     // Catch: java.lang.OutOfMemoryError -> L3c
            android.graphics.Bitmap$Config r4 = android.graphics.Bitmap.Config.ARGB_8888     // Catch: java.lang.OutOfMemoryError -> L3c
            r0.inPreferredConfig = r4     // Catch: java.lang.OutOfMemoryError -> L3c
            goto L40
        L3c:
            r4 = move-exception
            r4.printStackTrace()
        L40:
            return r1
    }

    public static java.io.InputStream a(android.graphics.Bitmap r4) {
            r0 = 0
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L28
            r1.<init>()     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L28
            android.graphics.Bitmap$CompressFormat r2 = android.graphics.Bitmap.CompressFormat.JPEG     // Catch: java.lang.Exception -> L24 java.lang.Throwable -> L40
            r3 = 100
            r4.compress(r2, r3, r1)     // Catch: java.lang.Exception -> L24 java.lang.Throwable -> L40
            java.io.ByteArrayInputStream r4 = new java.io.ByteArrayInputStream     // Catch: java.lang.Exception -> L24 java.lang.Throwable -> L40
            byte[] r2 = r1.toByteArray()     // Catch: java.lang.Exception -> L24 java.lang.Throwable -> L40
            r4.<init>(r2)     // Catch: java.lang.Exception -> L24 java.lang.Throwable -> L40
            r1.close()     // Catch: java.lang.Exception -> L1a
            goto L22
        L1a:
            r0 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L22
            r0.printStackTrace()
        L22:
            r0 = r4
            goto L3f
        L24:
            r4 = move-exception
            goto L2a
        L26:
            r4 = move-exception
            goto L42
        L28:
            r4 = move-exception
            r1 = r0
        L2a:
            boolean r2 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Throwable -> L40
            if (r2 == 0) goto L31
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L40
        L31:
            if (r1 == 0) goto L3f
            r1.close()     // Catch: java.lang.Exception -> L37
            goto L3f
        L37:
            r4 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L3f
            r4.printStackTrace()
        L3f:
            return r0
        L40:
            r4 = move-exception
            r0 = r1
        L42:
            if (r0 == 0) goto L50
            r0.close()     // Catch: java.lang.Exception -> L48
            goto L50
        L48:
            r0 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L50
            r0.printStackTrace()
        L50:
            throw r4
    }
}
