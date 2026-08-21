package com.tkay.expressad.foundation.g.d;

public final class a {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private static int a(android.graphics.BitmapFactory.Options r9, int r10, int r11) {
            int r0 = r9.outWidth
            double r0 = (double) r0
            int r9 = r9.outHeight
            double r2 = (double) r9
            r9 = 1
            r4 = -1
            if (r11 != r4) goto Lc
            r5 = r9
            goto L19
        Lc:
            double r5 = r0 * r2
            double r7 = (double) r11
            double r5 = r5 / r7
            double r5 = java.lang.Math.sqrt(r5)
            double r5 = java.lang.Math.ceil(r5)
            int r5 = (int) r5
        L19:
            if (r10 != r4) goto L1e
            r0 = 128(0x80, float:1.8E-43)
            goto L2e
        L1e:
            double r6 = (double) r10
            double r0 = r0 / r6
            double r0 = java.lang.Math.floor(r0)
            double r2 = r2 / r6
            double r2 = java.lang.Math.floor(r2)
            double r0 = java.lang.Math.min(r0, r2)
            int r0 = (int) r0
        L2e:
            if (r0 >= r5) goto L31
            return r5
        L31:
            if (r11 != r4) goto L36
            if (r10 != r4) goto L36
            return r9
        L36:
            if (r10 != r4) goto L39
            return r5
        L39:
            return r0
    }

    private static android.graphics.Bitmap a(android.content.Context r0, int r1) {
            android.content.res.Resources r0 = r0.getResources()     // Catch: java.lang.OutOfMemoryError -> L9 java.lang.Exception -> Lc
            android.graphics.Bitmap r0 = android.graphics.BitmapFactory.decodeResource(r0, r1)     // Catch: java.lang.OutOfMemoryError -> L9 java.lang.Exception -> Lc
            goto Ld
        L9:
            java.lang.System.gc()
        Lc:
            r0 = 0
        Ld:
            if (r0 != 0) goto L16
            android.graphics.Bitmap$Config r0 = android.graphics.Bitmap.Config.ALPHA_8
            r1 = 1
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r1, r1, r0)
        L16:
            return r0
    }

    public static android.graphics.Bitmap a(java.lang.String r4) {
            boolean r0 = com.tkay.expressad.foundation.h.m.a(r4)
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
            com.tkay.expressad.foundation.g.d.b.a()
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

    private static android.graphics.drawable.Drawable a(android.content.res.Resources r1, android.graphics.Bitmap r2) {
            android.graphics.drawable.BitmapDrawable r0 = new android.graphics.drawable.BitmapDrawable
            r0.<init>(r1, r2)
            return r0
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
            boolean r1 = com.tkay.expressad.b.a
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
            boolean r2 = com.tkay.expressad.b.a     // Catch: java.lang.Throwable -> L40
            if (r2 == 0) goto L31
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L40
        L31:
            if (r1 == 0) goto L3f
            r1.close()     // Catch: java.lang.Exception -> L37
            goto L3f
        L37:
            r4 = move-exception
            boolean r1 = com.tkay.expressad.b.a
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
            boolean r1 = com.tkay.expressad.b.a
            if (r1 == 0) goto L50
            r0.printStackTrace()
        L50:
            throw r4
    }

    private static android.graphics.Bitmap b(android.graphics.Bitmap r11) {
            r0 = 0
            if (r11 != 0) goto L4
            return r0
        L4:
            int r1 = r11.getWidth()
            int r2 = r11.getHeight()
            if (r1 > r2) goto L15
            int r2 = r1 / 2
            float r2 = (float) r2
            float r3 = (float) r1
            r4 = 0
            r5 = r3
            goto L24
        L15:
            int r3 = r2 / 2
            float r3 = (float) r3
            int r4 = r1 - r2
            int r4 = r4 / 2
            float r4 = (float) r4
            float r1 = (float) r1
            float r1 = r1 - r4
            float r5 = (float) r2
            r10 = r3
            r3 = r1
            r1 = r2
            r2 = r10
        L24:
            android.graphics.Bitmap$Config r6 = android.graphics.Bitmap.Config.ARGB_8888     // Catch: java.lang.Throwable -> L65
            android.graphics.Bitmap r1 = android.graphics.Bitmap.createBitmap(r1, r1, r6)     // Catch: java.lang.Throwable -> L65
            android.graphics.Canvas r6 = new android.graphics.Canvas     // Catch: java.lang.Throwable -> L65
            r6.<init>(r1)     // Catch: java.lang.Throwable -> L65
            android.graphics.Paint r7 = new android.graphics.Paint     // Catch: java.lang.Throwable -> L65
            r7.<init>()     // Catch: java.lang.Throwable -> L65
            android.graphics.Rect r8 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L65
            int r4 = (int) r4     // Catch: java.lang.Throwable -> L65
            int r3 = (int) r3     // Catch: java.lang.Throwable -> L65
            int r5 = (int) r5     // Catch: java.lang.Throwable -> L65
            r9 = 0
            r8.<init>(r4, r9, r3, r5)     // Catch: java.lang.Throwable -> L65
            android.graphics.Rect r3 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L65
            r3.<init>(r9, r9, r5, r5)     // Catch: java.lang.Throwable -> L65
            android.graphics.RectF r4 = new android.graphics.RectF     // Catch: java.lang.Throwable -> L65
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L65
            r5 = 1
            r7.setAntiAlias(r5)     // Catch: java.lang.Throwable -> L65
            r6.drawARGB(r9, r9, r9, r9)     // Catch: java.lang.Throwable -> L65
            r5 = -12434878(0xffffffffff424242, float:-2.5821426E38)
            r7.setColor(r5)     // Catch: java.lang.Throwable -> L65
            r6.drawRoundRect(r4, r2, r2, r7)     // Catch: java.lang.Throwable -> L65
            android.graphics.PorterDuffXfermode r2 = new android.graphics.PorterDuffXfermode     // Catch: java.lang.Throwable -> L65
            android.graphics.PorterDuff$Mode r4 = android.graphics.PorterDuff.Mode.SRC_IN     // Catch: java.lang.Throwable -> L65
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L65
            r7.setXfermode(r2)     // Catch: java.lang.Throwable -> L65
            r6.drawBitmap(r11, r8, r3, r7)     // Catch: java.lang.Throwable -> L65
            return r1
        L65:
            return r0
    }
}
