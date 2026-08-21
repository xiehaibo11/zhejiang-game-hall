package com.meizu.cloud.pushsdk.c.h;

public class b {
    public static int a(int r4, int r5, int r6, int r7) {
            double r0 = (double) r4
            double r2 = (double) r6
            double r0 = r0 / r2
            double r4 = (double) r5
            double r6 = (double) r7
            double r4 = r4 / r6
            double r4 = java.lang.Math.min(r0, r4)
            r6 = 1065353216(0x3f800000, float:1.0)
        Lc:
            r7 = 1073741824(0x40000000, float:2.0)
            float r7 = r7 * r6
            double r0 = (double) r7
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 > 0) goto L16
            r6 = r7
            goto Lc
        L16:
            int r4 = (int) r6
            return r4
    }

    private static int a(int r4, int r5, int r6, int r7, android.widget.ImageView.ScaleType r8) {
            if (r4 != 0) goto L5
            if (r5 != 0) goto L5
            return r6
        L5:
            android.widget.ImageView$ScaleType r0 = android.widget.ImageView.ScaleType.FIT_XY
            if (r8 != r0) goto Ld
            if (r4 != 0) goto Lc
            return r6
        Lc:
            return r4
        Ld:
            if (r4 != 0) goto L16
            double r4 = (double) r5
            double r7 = (double) r7
            double r4 = r4 / r7
            double r6 = (double) r6
            double r6 = r6 * r4
            int r4 = (int) r6
            return r4
        L16:
            if (r5 != 0) goto L19
            return r4
        L19:
            double r0 = (double) r7
            double r6 = (double) r6
            double r0 = r0 / r6
            android.widget.ImageView$ScaleType r6 = android.widget.ImageView.ScaleType.CENTER_CROP
            if (r8 != r6) goto L2a
            double r6 = (double) r4
            double r6 = r6 * r0
            double r2 = (double) r5
            int r5 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r5 >= 0) goto L29
            double r2 = r2 / r0
            int r4 = (int) r2
        L29:
            return r4
        L2a:
            double r6 = (double) r4
            double r6 = r6 * r0
            double r2 = (double) r5
            int r5 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r5 <= 0) goto L33
            double r2 = r2 / r0
            int r4 = (int) r2
        L33:
            return r4
    }

    public static com.meizu.cloud.pushsdk.c.a.c<android.graphics.Bitmap> a(com.meizu.cloud.pushsdk.c.c.k r6, int r7, int r8, android.graphics.Bitmap.Config r9, android.widget.ImageView.ScaleType r10) {
            r0 = 0
            byte[] r1 = new byte[r0]
            com.meizu.cloud.pushsdk.c.c.l r2 = r6.b()     // Catch: java.io.IOException -> L14
            com.meizu.cloud.pushsdk.c.g.d r2 = r2.a()     // Catch: java.io.IOException -> L14
            com.meizu.cloud.pushsdk.c.g.d r2 = com.meizu.cloud.pushsdk.c.g.g.a(r2)     // Catch: java.io.IOException -> L14
            byte[] r1 = r2.i()     // Catch: java.io.IOException -> L14
            goto L18
        L14:
            r2 = move-exception
            r2.printStackTrace()
        L18:
            android.graphics.BitmapFactory$Options r2 = new android.graphics.BitmapFactory$Options
            r2.<init>()
            if (r7 != 0) goto L29
            if (r8 != 0) goto L29
            r2.inPreferredConfig = r9
            int r7 = r1.length
            android.graphics.Bitmap r7 = android.graphics.BitmapFactory.decodeByteArray(r1, r0, r7, r2)
            goto L58
        L29:
            r9 = 1
            r2.inJustDecodeBounds = r9
            int r3 = r1.length
            android.graphics.BitmapFactory.decodeByteArray(r1, r0, r3, r2)
            int r3 = r2.outWidth
            int r4 = r2.outHeight
            int r5 = a(r7, r8, r3, r4, r10)
            int r7 = a(r8, r7, r4, r3, r10)
            r2.inJustDecodeBounds = r0
            int r8 = a(r3, r4, r5, r7)
            r2.inSampleSize = r8
            int r8 = r1.length
            android.graphics.Bitmap r8 = android.graphics.BitmapFactory.decodeByteArray(r1, r0, r8, r2)
            boolean r10 = a(r8, r5, r7)
            if (r10 == 0) goto L57
            android.graphics.Bitmap r7 = android.graphics.Bitmap.createScaledBitmap(r8, r5, r7, r9)
            r8.recycle()
            goto L58
        L57:
            r7 = r8
        L58:
            if (r7 != 0) goto L68
            com.meizu.cloud.pushsdk.c.b.a r7 = new com.meizu.cloud.pushsdk.c.b.a
            r7.<init>(r6)
            com.meizu.cloud.pushsdk.c.b.a r6 = b(r7)
            com.meizu.cloud.pushsdk.c.a.c r6 = com.meizu.cloud.pushsdk.c.a.c.a(r6)
            return r6
        L68:
            com.meizu.cloud.pushsdk.c.a.c r6 = com.meizu.cloud.pushsdk.c.a.c.a(r7)
            return r6
    }

    public static com.meizu.cloud.pushsdk.c.b.a a(com.meizu.cloud.pushsdk.c.b.a r1) {
            java.lang.String r0 = "connectionError"
            r1.a(r0)
            r0 = 0
            r1.a(r0)
            java.lang.String r0 = r1.getMessage()
            r1.b(r0)
            return r1
    }

    public static com.meizu.cloud.pushsdk.c.b.a a(com.meizu.cloud.pushsdk.c.b.a r0, com.meizu.cloud.pushsdk.c.a.b r1, int r2) {
            com.meizu.cloud.pushsdk.c.b.a r0 = r1.a(r0)
            r0.a(r2)
            java.lang.String r1 = "responseFromServerError"
            r0.a(r1)
            return r0
    }

    public static com.meizu.cloud.pushsdk.c.b.a a(java.lang.Exception r3) {
            com.meizu.cloud.pushsdk.c.b.a r0 = new com.meizu.cloud.pushsdk.c.b.a
            r0.<init>(r3)
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 11
            if (r1 < r2) goto L12
            boolean r3 = r3 instanceof android.os.NetworkOnMainThreadException
            if (r3 == 0) goto L12
            java.lang.String r3 = "networkOnMainThreadError"
            goto L14
        L12:
            java.lang.String r3 = "connectionError"
        L14:
            r0.a(r3)
            r3 = 0
            r0.a(r3)
            return r0
    }

    public static java.lang.String a(java.lang.String r1) {
            java.net.FileNameMap r0 = java.net.URLConnection.getFileNameMap()
            java.lang.String r1 = r0.getContentTypeFor(r1)
            if (r1 != 0) goto Lc
            java.lang.String r1 = "application/octet-stream"
        Lc:
            return r1
    }

    public static void a(com.meizu.cloud.pushsdk.c.c.k r3, java.lang.String r4, java.lang.String r5) {
            r0 = 2048(0x800, float:2.87E-42)
            byte[] r0 = new byte[r0]
            r1 = 0
            com.meizu.cloud.pushsdk.c.c.l r3 = r3.b()     // Catch: java.lang.Throwable -> L4d
            java.io.InputStream r3 = r3.b()     // Catch: java.lang.Throwable -> L4d
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L49
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L49
            boolean r4 = r2.exists()     // Catch: java.lang.Throwable -> L49
            if (r4 != 0) goto L1b
            r2.mkdirs()     // Catch: java.lang.Throwable -> L49
        L1b:
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L49
            r4.<init>(r2, r5)     // Catch: java.lang.Throwable -> L49
            java.io.FileOutputStream r5 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L49
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L49
        L25:
            int r4 = r3.read(r0)     // Catch: java.lang.Throwable -> L47
            r1 = -1
            if (r4 == r1) goto L31
            r1 = 0
            r5.write(r0, r1, r4)     // Catch: java.lang.Throwable -> L47
            goto L25
        L31:
            r5.flush()     // Catch: java.lang.Throwable -> L47
            if (r3 == 0) goto L3e
            r3.close()     // Catch: java.io.IOException -> L3a
            goto L3e
        L3a:
            r3 = move-exception
            r3.printStackTrace()
        L3e:
            r5.close()     // Catch: java.io.IOException -> L42
            goto L46
        L42:
            r3 = move-exception
            r3.printStackTrace()
        L46:
            return
        L47:
            r4 = move-exception
            goto L4b
        L49:
            r4 = move-exception
            r5 = r1
        L4b:
            r1 = r3
            goto L4f
        L4d:
            r4 = move-exception
            r5 = r1
        L4f:
            if (r1 == 0) goto L59
            r1.close()     // Catch: java.io.IOException -> L55
            goto L59
        L55:
            r3 = move-exception
            r3.printStackTrace()
        L59:
            if (r5 == 0) goto L63
            r5.close()     // Catch: java.io.IOException -> L5f
            goto L63
        L5f:
            r3 = move-exception
            r3.printStackTrace()
        L63:
            throw r4
    }

    private static boolean a(android.graphics.Bitmap r2, int r3, int r4) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            int r1 = r2.getWidth()
            if (r1 > r3) goto L10
            int r2 = r2.getHeight()
            if (r2 <= r4) goto L11
        L10:
            r0 = 1
        L11:
            return r0
    }

    public static com.meizu.cloud.pushsdk.c.b.a b(com.meizu.cloud.pushsdk.c.b.a r1) {
            r0 = 0
            r1.a(r0)
            java.lang.String r0 = "parseError"
            r1.a(r0)
            java.lang.String r0 = r1.getMessage()
            r1.b(r0)
            return r1
    }
}
