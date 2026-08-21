package com.tencent.connect.share;

public class a {



    public static final int a(android.graphics.BitmapFactory.Options r0, int r1, int r2) {
            int r0 = b(r0, r1, r2)
            r1 = 8
            if (r0 > r1) goto Le
            r1 = 1
        L9:
            if (r1 >= r0) goto L13
            int r1 = r1 << 1
            goto L9
        Le:
            int r0 = r0 + 7
            int r0 = r0 / r1
            int r1 = r0 * 8
        L13:
            return r1
    }

    private static android.graphics.Bitmap a(android.graphics.Bitmap r7, int r8) {
            android.graphics.Matrix r5 = new android.graphics.Matrix
            r5.<init>()
            int r0 = r7.getWidth()
            int r1 = r7.getHeight()
            if (r0 <= r1) goto L10
            goto L11
        L10:
            r0 = r1
        L11:
            float r8 = (float) r8
            float r0 = (float) r0
            float r8 = r8 / r0
            r5.postScale(r8, r8)
            r1 = 0
            r2 = 0
            int r3 = r7.getWidth()
            int r4 = r7.getHeight()
            r6 = 1
            r0 = r7
            android.graphics.Bitmap r7 = android.graphics.Bitmap.createBitmap(r0, r1, r2, r3, r4, r5, r6)
            return r7
    }

    public static final android.graphics.Bitmap a(java.lang.String r7, int r8) {
            java.lang.String r0 = "openSDK_LOG.AsynScaleCompressImage"
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            r2 = 0
            if (r1 == 0) goto La
            return r2
        La:
            android.graphics.BitmapFactory$Options r1 = new android.graphics.BitmapFactory$Options
            r1.<init>()
            r3 = 1
            r1.inJustDecodeBounds = r3
            android.graphics.BitmapFactory.decodeFile(r7, r1)     // Catch: java.lang.OutOfMemoryError -> L16
            goto L1c
        L16:
            r3 = move-exception
            java.lang.String r4 = "scaleBitmap exception1:"
            com.tencent.open.log.SLog.e(r0, r4, r3)
        L1c:
            int r3 = r1.outWidth
            int r4 = r1.outHeight
            boolean r5 = r1.mCancel
            if (r5 != 0) goto L6d
            int r5 = r1.outWidth
            r6 = -1
            if (r5 == r6) goto L6d
            int r5 = r1.outHeight
            if (r5 != r6) goto L2e
            goto L6d
        L2e:
            if (r3 <= r4) goto L31
            goto L32
        L31:
            r3 = r4
        L32:
            android.graphics.Bitmap$Config r4 = android.graphics.Bitmap.Config.RGB_565
            r1.inPreferredConfig = r4
            if (r3 <= r8) goto L40
            int r3 = r8 * r8
            int r3 = a(r1, r6, r3)
            r1.inSampleSize = r3
        L40:
            r3 = 0
            r1.inJustDecodeBounds = r3
            android.graphics.Bitmap r7 = android.graphics.BitmapFactory.decodeFile(r7, r1)     // Catch: java.lang.OutOfMemoryError -> L48 java.lang.Exception -> L4f
            goto L56
        L48:
            r7 = move-exception
            java.lang.String r3 = "scaleBitmap OutOfMemoryError:"
            com.tencent.open.log.SLog.e(r0, r3, r7)
            goto L55
        L4f:
            r7 = move-exception
            java.lang.String r3 = "scaleBitmap exception2:"
            com.tencent.open.log.SLog.e(r0, r3, r7)
        L55:
            r7 = r2
        L56:
            if (r7 != 0) goto L5e
            java.lang.String r7 = "scaleBitmap return null"
            com.tencent.open.log.SLog.e(r0, r7)
            return r2
        L5e:
            int r0 = r1.outWidth
            int r1 = r1.outHeight
            if (r0 <= r1) goto L65
            goto L66
        L65:
            r0 = r1
        L66:
            if (r0 <= r8) goto L6c
            android.graphics.Bitmap r7 = a(r7, r8)
        L6c:
            return r7
        L6d:
            return r2
    }

    protected static final java.lang.String a(android.graphics.Bitmap r2, java.lang.String r3, java.lang.String r4) {
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
            boolean r1 = r0.exists()
            if (r1 != 0) goto Le
            r0.mkdirs()
        Le:
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            java.io.File r4 = new java.io.File
            r4.<init>(r3)
            boolean r0 = r4.exists()
            if (r0 == 0) goto L28
            r4.delete()
        L28:
            if (r2 == 0) goto L49
            java.io.FileOutputStream r0 = new java.io.FileOutputStream     // Catch: java.io.IOException -> L40 java.io.FileNotFoundException -> L45
            r0.<init>(r4)     // Catch: java.io.IOException -> L40 java.io.FileNotFoundException -> L45
            android.graphics.Bitmap$CompressFormat r4 = android.graphics.Bitmap.CompressFormat.JPEG     // Catch: java.io.IOException -> L40 java.io.FileNotFoundException -> L45
            r1 = 80
            r2.compress(r4, r1, r0)     // Catch: java.io.IOException -> L40 java.io.FileNotFoundException -> L45
            r0.flush()     // Catch: java.io.IOException -> L40 java.io.FileNotFoundException -> L45
            r0.close()     // Catch: java.io.IOException -> L40 java.io.FileNotFoundException -> L45
            r2.recycle()     // Catch: java.io.IOException -> L40 java.io.FileNotFoundException -> L45
            return r3
        L40:
            r2 = move-exception
            r2.printStackTrace()
            goto L49
        L45:
            r2 = move-exception
            r2.printStackTrace()
        L49:
            r2 = 0
            return r2
    }

    public static final void a(android.content.Context r2, java.lang.String r3, com.tencent.open.utils.d r4) {
            java.lang.String r0 = "openSDK_LOG.AsynScaleCompressImage"
            java.lang.String r1 = "scaleCompressImage()"
            com.tencent.open.log.SLog.i(r0, r1)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L13
            r2 = 1
            r4.a(r2, r1)
            return
        L13:
            boolean r0 = com.tencent.open.utils.m.a()
            if (r0 != 0) goto L1e
            r2 = 2
            r4.a(r2, r1)
            return
        L1e:
            com.tencent.connect.share.a$1 r0 = new com.tencent.connect.share.a$1
            android.os.Looper r1 = r2.getMainLooper()
            r0.<init>(r1, r4)
            java.lang.Thread r4 = new java.lang.Thread
            com.tencent.connect.share.a$2 r1 = new com.tencent.connect.share.a$2
            r1.<init>(r3, r0, r2)
            r4.<init>(r1)
            r4.start()
            return
    }

    static boolean a(java.lang.String r0, int r1, int r2) {
            boolean r0 = b(r0, r1, r2)
            return r0
    }

    private static int b(android.graphics.BitmapFactory.Options r9, int r10, int r11) {
            int r0 = r9.outWidth
            double r0 = (double) r0
            int r9 = r9.outHeight
            double r2 = (double) r9
            r9 = 1
            r4 = -1
            if (r11 != r4) goto Lc
            r5 = 1
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

    private static final boolean b(java.lang.String r7, int r8, int r9) {
            java.lang.String r0 = "openSDK_LOG.AsynScaleCompressImage"
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            r2 = 0
            if (r1 == 0) goto La
            return r2
        La:
            android.graphics.BitmapFactory$Options r1 = new android.graphics.BitmapFactory$Options
            r1.<init>()
            r3 = 1
            r1.inJustDecodeBounds = r3
            android.graphics.BitmapFactory.decodeFile(r7, r1)     // Catch: java.lang.OutOfMemoryError -> L16
            goto L1c
        L16:
            r7 = move-exception
            java.lang.String r4 = "isBitMapNeedToCompress exception:"
            com.tencent.open.log.SLog.e(r0, r4, r7)
        L1c:
            int r7 = r1.outWidth
            int r4 = r1.outHeight
            boolean r5 = r1.mCancel
            if (r5 != 0) goto L5e
            int r5 = r1.outWidth
            r6 = -1
            if (r5 == r6) goto L5e
            int r5 = r1.outHeight
            if (r5 != r6) goto L2e
            goto L5e
        L2e:
            if (r7 <= r4) goto L32
            r5 = r7
            goto L33
        L32:
            r5 = r4
        L33:
            if (r7 >= r4) goto L36
            goto L37
        L36:
            r7 = r4
        L37:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r6 = "longSide="
            r4.append(r6)
            r4.append(r5)
            java.lang.String r6 = "shortSide="
            r4.append(r6)
            r4.append(r7)
            java.lang.String r4 = r4.toString()
            com.tencent.open.log.SLog.d(r0, r4)
            android.graphics.Bitmap$Config r0 = android.graphics.Bitmap.Config.RGB_565
            r1.inPreferredConfig = r0
            if (r5 > r9) goto L5d
            if (r7 <= r8) goto L5c
            goto L5d
        L5c:
            return r2
        L5d:
            return r3
        L5e:
            return r2
    }
}
