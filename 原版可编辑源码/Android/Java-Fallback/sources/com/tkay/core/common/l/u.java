package com.tkay.core.common.l;

public final class u {
    private static boolean a;



    static {
            return
    }

    public u() {
            r0 = this;
            r0.<init>()
            return
    }

    private static android.graphics.Path a(int r4, int r5, int r6) {
            android.graphics.Path r0 = new android.graphics.Path
            r0.<init>()
            float r1 = (float) r4
            r2 = 0
            r0.moveTo(r1, r2)
            int r3 = r5 - r4
            float r3 = (float) r3
            r0.lineTo(r3, r2)
            float r5 = (float) r5
            r0.quadTo(r5, r2, r5, r1)
            int r4 = r6 - r4
            float r4 = (float) r4
            r0.lineTo(r5, r4)
            float r6 = (float) r6
            r0.quadTo(r5, r6, r3, r6)
            r0.lineTo(r1, r6)
            r0.quadTo(r2, r6, r2, r4)
            r0.lineTo(r2, r1)
            r0.quadTo(r2, r2, r1, r2)
            r0.close()
            return r0
    }

    public static void a(android.graphics.Canvas r7, int r8, int r9, int r10) {
            android.graphics.Paint r0 = new android.graphics.Paint     // Catch: java.lang.Throwable -> L53
            r1 = 1
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L53
            r1 = -1
            r0.setColor(r1)     // Catch: java.lang.Throwable -> L53
            android.graphics.Bitmap$Config r1 = android.graphics.Bitmap.Config.ARGB_8888     // Catch: java.lang.Throwable -> L53
            android.graphics.Bitmap r1 = android.graphics.Bitmap.createBitmap(r8, r9, r1)     // Catch: java.lang.Throwable -> L53
            android.graphics.Canvas r2 = new android.graphics.Canvas     // Catch: java.lang.Throwable -> L53
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L53
            android.graphics.Path r3 = new android.graphics.Path     // Catch: java.lang.Throwable -> L53
            r3.<init>()     // Catch: java.lang.Throwable -> L53
            float r4 = (float) r10     // Catch: java.lang.Throwable -> L53
            r5 = 0
            r3.moveTo(r4, r5)     // Catch: java.lang.Throwable -> L53
            int r6 = r8 - r10
            float r6 = (float) r6     // Catch: java.lang.Throwable -> L53
            r3.lineTo(r6, r5)     // Catch: java.lang.Throwable -> L53
            float r8 = (float) r8     // Catch: java.lang.Throwable -> L53
            r3.quadTo(r8, r5, r8, r4)     // Catch: java.lang.Throwable -> L53
            int r10 = r9 - r10
            float r10 = (float) r10     // Catch: java.lang.Throwable -> L53
            r3.lineTo(r8, r10)     // Catch: java.lang.Throwable -> L53
            float r9 = (float) r9     // Catch: java.lang.Throwable -> L53
            r3.quadTo(r8, r9, r6, r9)     // Catch: java.lang.Throwable -> L53
            r3.lineTo(r4, r9)     // Catch: java.lang.Throwable -> L53
            r3.quadTo(r5, r9, r5, r10)     // Catch: java.lang.Throwable -> L53
            r3.lineTo(r5, r4)     // Catch: java.lang.Throwable -> L53
            r3.quadTo(r5, r5, r4, r5)     // Catch: java.lang.Throwable -> L53
            r3.close()     // Catch: java.lang.Throwable -> L53
            r2.drawPath(r3, r0)     // Catch: java.lang.Throwable -> L53
            android.graphics.PorterDuffXfermode r8 = new android.graphics.PorterDuffXfermode     // Catch: java.lang.Throwable -> L53
            android.graphics.PorterDuff$Mode r9 = android.graphics.PorterDuff.Mode.DST_IN     // Catch: java.lang.Throwable -> L53
            r8.<init>(r9)     // Catch: java.lang.Throwable -> L53
            r0.setXfermode(r8)     // Catch: java.lang.Throwable -> L53
            r7.drawBitmap(r1, r5, r5, r0)     // Catch: java.lang.Throwable -> L53
            return
        L53:
            r7 = move-exception
            r7.printStackTrace()
            return
    }

    public static void a(android.graphics.Canvas r7, int r8, int r9, android.graphics.RectF r10) {
            android.graphics.Paint r6 = new android.graphics.Paint     // Catch: java.lang.Throwable -> L32
            r0 = 1
            r6.<init>(r0)     // Catch: java.lang.Throwable -> L32
            r0 = -1
            r6.setColor(r0)     // Catch: java.lang.Throwable -> L32
            android.graphics.Paint$Style r0 = android.graphics.Paint.Style.FILL     // Catch: java.lang.Throwable -> L32
            r6.setStyle(r0)     // Catch: java.lang.Throwable -> L32
            android.graphics.Bitmap$Config r0 = android.graphics.Bitmap.Config.ARGB_8888     // Catch: java.lang.Throwable -> L32
            android.graphics.Bitmap r8 = android.graphics.Bitmap.createBitmap(r8, r9, r0)     // Catch: java.lang.Throwable -> L32
            android.graphics.Canvas r0 = new android.graphics.Canvas     // Catch: java.lang.Throwable -> L32
            r0.<init>(r8)     // Catch: java.lang.Throwable -> L32
            r2 = 0
            r3 = 1127481344(0x43340000, float:180.0)
            r4 = 1
            r1 = r10
            r5 = r6
            r0.drawArc(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L32
            android.graphics.PorterDuffXfermode r9 = new android.graphics.PorterDuffXfermode     // Catch: java.lang.Throwable -> L32
            android.graphics.PorterDuff$Mode r10 = android.graphics.PorterDuff.Mode.DST_IN     // Catch: java.lang.Throwable -> L32
            r9.<init>(r10)     // Catch: java.lang.Throwable -> L32
            r6.setXfermode(r9)     // Catch: java.lang.Throwable -> L32
            r9 = 0
            r7.drawBitmap(r8, r9, r9, r6)     // Catch: java.lang.Throwable -> L32
            return
        L32:
            r7 = move-exception
            r7.printStackTrace()
            return
    }

    public static void a(android.view.View r2) {
            if (r2 == 0) goto Lf
            android.view.ViewParent r0 = r2.getParent()
            boolean r1 = r0 instanceof android.view.ViewGroup
            if (r1 == 0) goto Lf
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r0.removeView(r2)
        Lf:
            return
    }

    public static void a(android.view.View r2, float r3) {
            android.view.ViewParent r0 = r2.getParent()
            android.view.View r0 = (android.view.View) r0
            com.tkay.core.common.l.u$2 r1 = new com.tkay.core.common.l.u$2
            r1.<init>(r2, r3, r0)
            r0.post(r1)
            return
    }

    private static void a(android.view.View r2, int r3) {
            android.view.ViewParent r0 = r2.getParent()
            android.view.View r0 = (android.view.View) r0
            com.tkay.core.common.l.u$1 r1 = new com.tkay.core.common.l.u$1
            r1.<init>(r2, r3, r0)
            r0.post(r1)
            return
    }

    public static void a(boolean r0) {
            com.tkay.core.common.l.u.a = r0
            return
    }

    public static boolean a(android.view.View r4, com.tkay.core.common.l.a.f.b r5) {
            r0 = 0
            if (r4 == 0) goto L27
            android.view.ViewParent r1 = r4.getParent()
            if (r1 == 0) goto L27
            if (r5 == 0) goto L27
            android.view.ViewParent r1 = r4.getParent()
            boolean r2 = r1 instanceof android.view.View
            if (r2 == 0) goto L27
            android.view.View r1 = (android.view.View) r1
            r2 = 100
            java.lang.Integer r3 = java.lang.Integer.valueOf(r0)
            boolean r4 = r5.a(r1, r4, r2, r3)
            if (r4 == 0) goto L27
            boolean r4 = com.tkay.core.common.l.u.a
            if (r4 != 0) goto L27
            r4 = 1
            return r4
        L27:
            return r0
    }

    public static int[] a(int r3, int r4, float r5) {
            float r0 = (float) r3
            float r1 = (float) r4
            float r2 = r0 / r1
            int r2 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r2 <= 0) goto L10
            float r0 = r0 / r5
            double r4 = (double) r0
            double r4 = java.lang.Math.ceil(r4)
            int r4 = (int) r4
            goto L17
        L10:
            float r1 = r1 * r5
            double r0 = (double) r1
            double r0 = java.lang.Math.ceil(r0)
            int r3 = (int) r0
        L17:
            r5 = 2
            int[] r5 = new int[r5]
            r0 = 0
            r5[r0] = r3
            r3 = 1
            r5[r3] = r4
            return r5
    }

    public static boolean b(android.view.View r4) {
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            boolean r1 = r4.getLocalVisibleRect(r0)
            r2 = 0
            if (r1 != 0) goto Ld
            return r2
        Ld:
            int r1 = r0.top
            if (r1 < 0) goto L2d
            int r1 = r0.bottom
            int r3 = r4.getHeight()
            if (r1 > r3) goto L2d
            int r0 = r0.height()
            float r0 = (float) r0
            int r4 = r4.getHeight()
            float r4 = (float) r4
            r1 = 1050253722(0x3e99999a, float:0.3)
            float r4 = r4 * r1
            int r4 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r4 <= 0) goto L2d
            r4 = 1
            return r4
        L2d:
            return r2
    }
}
