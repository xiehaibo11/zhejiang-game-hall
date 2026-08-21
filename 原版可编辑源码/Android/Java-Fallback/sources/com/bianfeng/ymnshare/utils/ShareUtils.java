package com.bianfeng.ymnshare.utils;

public class ShareUtils {
    private static final int KB = 1024;
    private static com.bianfeng.ymnshare.utils.ShareUtils utils;

    private ShareUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] bmpToByteArray(android.graphics.Bitmap r3, int r4) {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            int r4 = r4 * 1024
            android.graphics.Bitmap$CompressFormat r1 = android.graphics.Bitmap.CompressFormat.PNG     // Catch: java.lang.Exception -> L24
            r2 = 100
            r3.compress(r1, r2, r0)     // Catch: java.lang.Exception -> L24
        Le:
            byte[] r1 = r0.toByteArray()     // Catch: java.lang.Exception -> L24
            int r1 = r1.length     // Catch: java.lang.Exception -> L24
            if (r1 <= r4) goto L28
            r1 = 10
            if (r2 == r1) goto L28
            r0.reset()     // Catch: java.lang.Exception -> L24
            android.graphics.Bitmap$CompressFormat r1 = android.graphics.Bitmap.CompressFormat.JPEG     // Catch: java.lang.Exception -> L24
            r3.compress(r1, r2, r0)     // Catch: java.lang.Exception -> L24
            int r2 = r2 + (-10)
            goto Le
        L24:
            r3 = move-exception
            r3.printStackTrace()
        L28:
            byte[] r3 = r0.toByteArray()
            return r3
    }

    public static com.bianfeng.ymnshare.utils.ShareUtils getInstance() {
            com.bianfeng.ymnshare.utils.ShareUtils r0 = com.bianfeng.ymnshare.utils.ShareUtils.utils
            if (r0 != 0) goto Lb
            com.bianfeng.ymnshare.utils.ShareUtils r0 = new com.bianfeng.ymnshare.utils.ShareUtils
            r0.<init>()
            com.bianfeng.ymnshare.utils.ShareUtils.utils = r0
        Lb:
            com.bianfeng.ymnshare.utils.ShareUtils r0 = com.bianfeng.ymnshare.utils.ShareUtils.utils
            return r0
    }

    public static boolean isAPPInstalled(android.content.Context r4, java.lang.String r5) {
            r0 = 1
            android.content.pm.PackageManager r4 = r4.getPackageManager()     // Catch: java.lang.Exception -> L26
            r1 = 0
            java.util.List r4 = r4.getInstalledPackages(r1)     // Catch: java.lang.Exception -> L26
            if (r4 == 0) goto L25
            r2 = 0
        Ld:
            int r3 = r4.size()     // Catch: java.lang.Exception -> L26
            if (r2 >= r3) goto L25
            java.lang.Object r3 = r4.get(r2)     // Catch: java.lang.Exception -> L26
            android.content.pm.PackageInfo r3 = (android.content.pm.PackageInfo) r3     // Catch: java.lang.Exception -> L26
            java.lang.String r3 = r3.packageName     // Catch: java.lang.Exception -> L26
            boolean r3 = r3.equals(r5)     // Catch: java.lang.Exception -> L26
            if (r3 == 0) goto L22
            return r0
        L22:
            int r2 = r2 + 1
            goto Ld
        L25:
            return r1
        L26:
            return r0
    }

    public byte[] bmpToByteArray(android.graphics.Bitmap r8, boolean r9) {
            r7 = this;
            r0 = 0
            if (r8 != 0) goto L6
            byte[] r8 = new byte[r0]
            return r8
        L6:
            int r1 = r8.getHeight()
            int r2 = r8.getWidth()
            if (r1 <= r2) goto L19
            int r1 = r8.getWidth()
            int r2 = r8.getWidth()
            goto L21
        L19:
            int r1 = r8.getHeight()
            int r2 = r8.getHeight()
        L21:
            android.graphics.Bitmap$Config r3 = android.graphics.Bitmap.Config.RGB_565
            android.graphics.Bitmap r3 = android.graphics.Bitmap.createBitmap(r1, r2, r3)
            android.graphics.Canvas r4 = new android.graphics.Canvas
            r4.<init>(r3)
        L2c:
            android.graphics.Rect r5 = new android.graphics.Rect
            r5.<init>(r0, r0, r1, r2)
            android.graphics.Rect r6 = new android.graphics.Rect
            r6.<init>(r0, r0, r1, r2)
            r1 = 0
            r4.drawBitmap(r8, r5, r6, r1)
            if (r9 == 0) goto L3f
            r8.recycle()
        L3f:
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream
            r1.<init>()
            android.graphics.Bitmap$CompressFormat r2 = android.graphics.Bitmap.CompressFormat.JPEG
            r5 = 100
            r3.compress(r2, r5, r1)
            r3.recycle()
            byte[] r2 = r1.toByteArray()
            r1.close()     // Catch: java.lang.Exception -> L56
            return r2
        L56:
            int r1 = r8.getHeight()
            int r2 = r8.getHeight()
            goto L2c
    }

    public java.lang.String buildTransaction(java.lang.String r4) {
            r3 = this;
            if (r4 != 0) goto Lb
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r4 = java.lang.String.valueOf(r0)
            goto L1e
        Lb:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            long r1 = java.lang.System.currentTimeMillis()
            r0.append(r1)
            java.lang.String r4 = r0.toString()
        L1e:
            return r4
    }

    public void compressBitmapToFile(java.lang.String r6, int r7, int r8) {
            r5 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L42
            if (r0 == 0) goto L7
            return
        L7:
            android.graphics.Bitmap r0 = android.graphics.BitmapFactory.decodeFile(r6)     // Catch: java.lang.Exception -> L42
            if (r0 != 0) goto Le
            return
        Le:
            android.graphics.Bitmap$Config r1 = android.graphics.Bitmap.Config.ARGB_8888     // Catch: java.lang.Exception -> L42
            android.graphics.Bitmap r1 = android.graphics.Bitmap.createBitmap(r7, r8, r1)     // Catch: java.lang.Exception -> L42
            android.graphics.Canvas r2 = new android.graphics.Canvas     // Catch: java.lang.Exception -> L42
            r2.<init>(r1)     // Catch: java.lang.Exception -> L42
            android.graphics.Rect r3 = new android.graphics.Rect     // Catch: java.lang.Exception -> L42
            r4 = 0
            r3.<init>(r4, r4, r7, r8)     // Catch: java.lang.Exception -> L42
            r7 = 0
            r2.drawBitmap(r0, r7, r3, r7)     // Catch: java.lang.Exception -> L42
            java.io.ByteArrayOutputStream r7 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Exception -> L42
            r7.<init>()     // Catch: java.lang.Exception -> L42
            android.graphics.Bitmap$CompressFormat r8 = android.graphics.Bitmap.CompressFormat.JPEG     // Catch: java.lang.Exception -> L42
            r0 = 70
            r1.compress(r8, r0, r7)     // Catch: java.lang.Exception -> L42
            java.io.FileOutputStream r8 = new java.io.FileOutputStream     // Catch: java.lang.Exception -> L42
            r8.<init>(r6)     // Catch: java.lang.Exception -> L42
            byte[] r6 = r7.toByteArray()     // Catch: java.lang.Exception -> L42
            r8.write(r6)     // Catch: java.lang.Exception -> L42
            r8.flush()     // Catch: java.lang.Exception -> L42
            r8.close()     // Catch: java.lang.Exception -> L42
            goto L46
        L42:
            r6 = move-exception
            r6.printStackTrace()
        L46:
            return
    }

    public void compressBitmapToFile(java.lang.String r10, java.lang.Double r11) {
            r9 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Exception -> L7a
            if (r0 == 0) goto L7
            return
        L7:
            android.graphics.Bitmap r0 = android.graphics.BitmapFactory.decodeFile(r10)     // Catch: java.lang.Exception -> L7a
            if (r0 != 0) goto Le
            return
        Le:
            int r1 = r0.getWidth()     // Catch: java.lang.Exception -> L7a
            double r1 = (double) r1     // Catch: java.lang.Exception -> L7a
            double r3 = r11.doubleValue()     // Catch: java.lang.Exception -> L7a
            double r1 = r1 * r3
            int r1 = (int) r1     // Catch: java.lang.Exception -> L7a
            int r2 = r0.getHeight()     // Catch: java.lang.Exception -> L7a
            double r2 = (double) r2     // Catch: java.lang.Exception -> L7a
            double r4 = r11.doubleValue()     // Catch: java.lang.Exception -> L7a
            double r2 = r2 * r4
            int r2 = (int) r2     // Catch: java.lang.Exception -> L7a
            android.graphics.Bitmap$Config r3 = android.graphics.Bitmap.Config.ARGB_8888     // Catch: java.lang.Exception -> L7a
            android.graphics.Bitmap r1 = android.graphics.Bitmap.createBitmap(r1, r2, r3)     // Catch: java.lang.Exception -> L7a
            android.graphics.Canvas r2 = new android.graphics.Canvas     // Catch: java.lang.Exception -> L7a
            r2.<init>(r1)     // Catch: java.lang.Exception -> L7a
            android.graphics.Rect r3 = new android.graphics.Rect     // Catch: java.lang.Exception -> L7a
            int r4 = r0.getWidth()     // Catch: java.lang.Exception -> L7a
            double r4 = (double) r4     // Catch: java.lang.Exception -> L7a
            double r6 = r11.doubleValue()     // Catch: java.lang.Exception -> L7a
            double r4 = r4 * r6
            int r4 = (int) r4     // Catch: java.lang.Exception -> L7a
            int r5 = r0.getHeight()     // Catch: java.lang.Exception -> L7a
            double r5 = (double) r5     // Catch: java.lang.Exception -> L7a
            double r7 = r11.doubleValue()     // Catch: java.lang.Exception -> L7a
            double r5 = r5 * r7
            int r5 = (int) r5     // Catch: java.lang.Exception -> L7a
            r6 = 0
            r3.<init>(r6, r6, r4, r5)     // Catch: java.lang.Exception -> L7a
            r4 = 0
            r2.drawBitmap(r0, r4, r3, r4)     // Catch: java.lang.Exception -> L7a
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Exception -> L7a
            r0.<init>()     // Catch: java.lang.Exception -> L7a
            android.graphics.Bitmap$CompressFormat r2 = android.graphics.Bitmap.CompressFormat.JPEG     // Catch: java.lang.Exception -> L7a
            double r3 = r11.doubleValue()     // Catch: java.lang.Exception -> L7a
            r5 = 4636737291354636288(0x4059000000000000, double:100.0)
            double r3 = r3 * r5
            double r5 = r5 - r3
            int r11 = (int) r5     // Catch: java.lang.Exception -> L7a
            r1.compress(r2, r11, r0)     // Catch: java.lang.Exception -> L7a
            java.io.FileOutputStream r11 = new java.io.FileOutputStream     // Catch: java.lang.Exception -> L7a
            r11.<init>(r10)     // Catch: java.lang.Exception -> L7a
            byte[] r10 = r0.toByteArray()     // Catch: java.lang.Exception -> L7a
            r11.write(r10)     // Catch: java.lang.Exception -> L7a
            r11.flush()     // Catch: java.lang.Exception -> L7a
            r11.close()     // Catch: java.lang.Exception -> L7a
            goto L7e
        L7a:
            r10 = move-exception
            r10.printStackTrace()
        L7e:
            return
    }
}
