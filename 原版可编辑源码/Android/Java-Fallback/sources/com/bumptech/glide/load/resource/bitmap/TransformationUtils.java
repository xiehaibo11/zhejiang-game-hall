package com.bumptech.glide.load.resource.bitmap;

public final class TransformationUtils {
    public static final int PAINT_FLAGS = 6;
    private static final java.lang.String TAG = "TransformationUtils";

    private TransformationUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.graphics.Bitmap centerCrop(android.graphics.Bitmap r6, android.graphics.Bitmap r7, int r8, int r9) {
            if (r7 != 0) goto L4
            r6 = 0
            return r6
        L4:
            int r0 = r7.getWidth()
            if (r0 != r8) goto L11
            int r0 = r7.getHeight()
            if (r0 != r9) goto L11
            return r7
        L11:
            android.graphics.Matrix r0 = new android.graphics.Matrix
            r0.<init>()
            int r1 = r7.getWidth()
            int r1 = r1 * r9
            int r2 = r7.getHeight()
            int r2 = r2 * r8
            r3 = 0
            r4 = 1056964608(0x3f000000, float:0.5)
            if (r1 <= r2) goto L3c
            float r1 = (float) r9
            int r2 = r7.getHeight()
            float r2 = (float) r2
            float r1 = r1 / r2
            float r2 = (float) r8
            int r5 = r7.getWidth()
            float r5 = (float) r5
            float r5 = r5 * r1
            float r2 = r2 - r5
            float r2 = r2 * r4
            r3 = r2
            r2 = 0
            goto L4e
        L3c:
            float r1 = (float) r8
            int r2 = r7.getWidth()
            float r2 = (float) r2
            float r1 = r1 / r2
            float r2 = (float) r9
            int r5 = r7.getHeight()
            float r5 = (float) r5
            float r5 = r5 * r1
            float r2 = r2 - r5
            float r2 = r2 * r4
        L4e:
            r0.setScale(r1, r1)
            float r3 = r3 + r4
            int r1 = (int) r3
            float r1 = (float) r1
            float r2 = r2 + r4
            int r2 = (int) r2
            float r2 = (float) r2
            r0.postTranslate(r1, r2)
            if (r6 == 0) goto L5d
            goto L65
        L5d:
            android.graphics.Bitmap$Config r6 = getSafeConfig(r7)
            android.graphics.Bitmap r6 = android.graphics.Bitmap.createBitmap(r8, r9, r6)
        L65:
            setAlpha(r7, r6)
            android.graphics.Canvas r8 = new android.graphics.Canvas
            r8.<init>(r6)
            android.graphics.Paint r9 = new android.graphics.Paint
            r1 = 6
            r9.<init>(r1)
            r8.drawBitmap(r7, r0, r9)
            return r6
    }

    public static android.graphics.Bitmap fitCenter(android.graphics.Bitmap r6, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r7, int r8, int r9) {
            int r0 = r6.getWidth()
            r1 = 2
            java.lang.String r2 = "TransformationUtils"
            if (r0 != r8) goto L1b
            int r0 = r6.getHeight()
            if (r0 != r9) goto L1b
            boolean r7 = android.util.Log.isLoggable(r2, r1)
            if (r7 == 0) goto L1a
            java.lang.String r7 = "requested target size matches input, returning input"
            android.util.Log.v(r2, r7)
        L1a:
            return r6
        L1b:
            float r0 = (float) r8
            int r3 = r6.getWidth()
            float r3 = (float) r3
            float r0 = r0 / r3
            float r3 = (float) r9
            int r4 = r6.getHeight()
            float r4 = (float) r4
            float r3 = r3 / r4
            float r0 = java.lang.Math.min(r0, r3)
            int r3 = r6.getWidth()
            float r3 = (float) r3
            float r3 = r3 * r0
            int r3 = (int) r3
            int r4 = r6.getHeight()
            float r4 = (float) r4
            float r4 = r4 * r0
            int r4 = (int) r4
            int r5 = r6.getWidth()
            if (r5 != r3) goto L55
            int r5 = r6.getHeight()
            if (r5 != r4) goto L55
            boolean r7 = android.util.Log.isLoggable(r2, r1)
            if (r7 == 0) goto L54
            java.lang.String r7 = "adjusted target size matches input, returning input"
            android.util.Log.v(r2, r7)
        L54:
            return r6
        L55:
            android.graphics.Bitmap$Config r5 = getSafeConfig(r6)
            android.graphics.Bitmap r7 = r7.get(r3, r4, r5)
            if (r7 != 0) goto L63
            android.graphics.Bitmap r7 = android.graphics.Bitmap.createBitmap(r3, r4, r5)
        L63:
            setAlpha(r6, r7)
            boolean r1 = android.util.Log.isLoggable(r2, r1)
            if (r1 == 0) goto Le0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "request: "
            r1.append(r3)
            r1.append(r8)
            java.lang.String r8 = "x"
            r1.append(r8)
            r1.append(r9)
            java.lang.String r9 = r1.toString()
            android.util.Log.v(r2, r9)
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r1 = "toFit:   "
            r9.append(r1)
            int r1 = r6.getWidth()
            r9.append(r1)
            r9.append(r8)
            int r1 = r6.getHeight()
            r9.append(r1)
            java.lang.String r9 = r9.toString()
            android.util.Log.v(r2, r9)
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r1 = "toReuse: "
            r9.append(r1)
            int r1 = r7.getWidth()
            r9.append(r1)
            r9.append(r8)
            int r8 = r7.getHeight()
            r9.append(r8)
            java.lang.String r8 = r9.toString()
            android.util.Log.v(r2, r8)
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "minPct:   "
            r8.append(r9)
            r8.append(r0)
            java.lang.String r8 = r8.toString()
            android.util.Log.v(r2, r8)
        Le0:
            android.graphics.Canvas r8 = new android.graphics.Canvas
            r8.<init>(r7)
            android.graphics.Matrix r9 = new android.graphics.Matrix
            r9.<init>()
            r9.setScale(r0, r0)
            android.graphics.Paint r0 = new android.graphics.Paint
            r1 = 6
            r0.<init>(r1)
            r8.drawBitmap(r6, r9, r0)
            return r7
    }

    public static int getExifOrientationDegrees(int r0) {
            switch(r0) {
                case 3: goto Lb;
                case 4: goto Lb;
                case 5: goto L8;
                case 6: goto L8;
                case 7: goto L5;
                case 8: goto L5;
                default: goto L3;
            }
        L3:
            r0 = 0
            goto Ld
        L5:
            r0 = 270(0x10e, float:3.78E-43)
            goto Ld
        L8:
            r0 = 90
            goto Ld
        Lb:
            r0 = 180(0xb4, float:2.52E-43)
        Ld:
            return r0
    }

    @java.lang.Deprecated
    public static int getOrientation(java.lang.String r5) {
            r0 = 0
            android.media.ExifInterface r1 = new android.media.ExifInterface     // Catch: java.lang.Exception -> L11
            r1.<init>(r5)     // Catch: java.lang.Exception -> L11
            java.lang.String r2 = "Orientation"
            int r1 = r1.getAttributeInt(r2, r0)     // Catch: java.lang.Exception -> L11
            int r5 = getExifOrientationDegrees(r1)     // Catch: java.lang.Exception -> L11
            return r5
        L11:
            r1 = move-exception
            r2 = 6
            java.lang.String r3 = "TransformationUtils"
            boolean r2 = android.util.Log.isLoggable(r3, r2)
            if (r2 == 0) goto L2f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "Unable to get orientation for image with path="
            r2.append(r4)
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            android.util.Log.e(r3, r5, r1)
        L2f:
            return r0
    }

    private static android.graphics.Bitmap.Config getSafeConfig(android.graphics.Bitmap r1) {
            android.graphics.Bitmap$Config r0 = r1.getConfig()
            if (r0 == 0) goto Lb
            android.graphics.Bitmap$Config r1 = r1.getConfig()
            goto Ld
        Lb:
            android.graphics.Bitmap$Config r1 = android.graphics.Bitmap.Config.ARGB_8888
        Ld:
            return r1
    }

    static void initializeMatrixForRotation(int r5, android.graphics.Matrix r6) {
            r0 = -1028390912(0xffffffffc2b40000, float:-90.0)
            r1 = 1119092736(0x42b40000, float:90.0)
            r2 = 1127481344(0x43340000, float:180.0)
            r3 = 1065353216(0x3f800000, float:1.0)
            r4 = -1082130432(0xffffffffbf800000, float:-1.0)
            switch(r5) {
                case 2: goto L2f;
                case 3: goto L2b;
                case 4: goto L24;
                case 5: goto L1d;
                case 6: goto L19;
                case 7: goto L12;
                case 8: goto Le;
                default: goto Ld;
            }
        Ld:
            goto L32
        Le:
            r6.setRotate(r0)
            goto L32
        L12:
            r6.setRotate(r0)
            r6.postScale(r4, r3)
            goto L32
        L19:
            r6.setRotate(r1)
            goto L32
        L1d:
            r6.setRotate(r1)
            r6.postScale(r4, r3)
            goto L32
        L24:
            r6.setRotate(r2)
            r6.postScale(r4, r3)
            goto L32
        L2b:
            r6.setRotate(r2)
            goto L32
        L2f:
            r6.setScale(r4, r3)
        L32:
            return
    }

    @java.lang.Deprecated
    public static android.graphics.Bitmap orientImage(java.lang.String r0, android.graphics.Bitmap r1) {
            int r0 = getOrientation(r0)
            android.graphics.Bitmap r0 = rotateImage(r1, r0)
            return r0
    }

    public static android.graphics.Bitmap rotateImage(android.graphics.Bitmap r7, int r8) {
            if (r8 == 0) goto L2b
            android.graphics.Matrix r5 = new android.graphics.Matrix     // Catch: java.lang.Exception -> L1c
            r5.<init>()     // Catch: java.lang.Exception -> L1c
            float r8 = (float) r8     // Catch: java.lang.Exception -> L1c
            r5.setRotate(r8)     // Catch: java.lang.Exception -> L1c
            r1 = 0
            r2 = 0
            int r3 = r7.getWidth()     // Catch: java.lang.Exception -> L1c
            int r4 = r7.getHeight()     // Catch: java.lang.Exception -> L1c
            r6 = 1
            r0 = r7
            android.graphics.Bitmap r7 = android.graphics.Bitmap.createBitmap(r0, r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L1c
            goto L2b
        L1c:
            r8 = move-exception
            r0 = 6
            java.lang.String r1 = "TransformationUtils"
            boolean r0 = android.util.Log.isLoggable(r1, r0)
            if (r0 == 0) goto L2b
            java.lang.String r0 = "Exception when trying to orient image"
            android.util.Log.e(r1, r0, r8)
        L2b:
            return r7
    }

    public static android.graphics.Bitmap rotateImageExif(android.graphics.Bitmap r4, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r5, int r6) {
            android.graphics.Matrix r0 = new android.graphics.Matrix
            r0.<init>()
            initializeMatrixForRotation(r6, r0)
            boolean r6 = r0.isIdentity()
            if (r6 == 0) goto Lf
            return r4
        Lf:
            android.graphics.RectF r6 = new android.graphics.RectF
            int r1 = r4.getWidth()
            float r1 = (float) r1
            int r2 = r4.getHeight()
            float r2 = (float) r2
            r3 = 0
            r6.<init>(r3, r3, r1, r2)
            r0.mapRect(r6)
            float r1 = r6.width()
            int r1 = java.lang.Math.round(r1)
            float r2 = r6.height()
            int r2 = java.lang.Math.round(r2)
            android.graphics.Bitmap$Config r3 = getSafeConfig(r4)
            android.graphics.Bitmap r5 = r5.get(r1, r2, r3)
            if (r5 != 0) goto L40
            android.graphics.Bitmap r5 = android.graphics.Bitmap.createBitmap(r1, r2, r3)
        L40:
            float r1 = r6.left
            float r1 = -r1
            float r6 = r6.top
            float r6 = -r6
            r0.postTranslate(r1, r6)
            android.graphics.Canvas r6 = new android.graphics.Canvas
            r6.<init>(r5)
            android.graphics.Paint r1 = new android.graphics.Paint
            r2 = 6
            r1.<init>(r2)
            r6.drawBitmap(r4, r0, r1)
            return r5
    }

    public static void setAlpha(android.graphics.Bitmap r2, android.graphics.Bitmap r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 12
            if (r0 < r1) goto Lf
            if (r3 == 0) goto Lf
            boolean r2 = r2.hasAlpha()
            r3.setHasAlpha(r2)
        Lf:
            return
    }
}
