package com.tkay.expressad.foundation.h;

public final class n {
    public n() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.graphics.Bitmap a(android.graphics.Bitmap r6) {
            if (r6 == 0) goto L3b
            boolean r0 = r6.isRecycled()     // Catch: java.lang.Throwable -> L3b
            if (r0 != 0) goto L3b
            int r0 = r6.getWidth()     // Catch: java.lang.Throwable -> L3b
            android.graphics.Bitmap$Config r1 = android.graphics.Bitmap.Config.ARGB_4444     // Catch: java.lang.Throwable -> L3b
            android.graphics.Bitmap r1 = android.graphics.Bitmap.createBitmap(r0, r0, r1)     // Catch: java.lang.Throwable -> L3b
            android.graphics.Canvas r2 = new android.graphics.Canvas     // Catch: java.lang.Throwable -> L3b
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L3b
            android.graphics.Paint r3 = new android.graphics.Paint     // Catch: java.lang.Throwable -> L3b
            r3.<init>()     // Catch: java.lang.Throwable -> L3b
            r4 = 1
            r3.setAntiAlias(r4)     // Catch: java.lang.Throwable -> L3b
            int r4 = r0 / 2
            float r4 = (float) r4     // Catch: java.lang.Throwable -> L3b
            int r5 = r0 / 2
            float r5 = (float) r5     // Catch: java.lang.Throwable -> L3b
            int r0 = r0 / 2
            float r0 = (float) r0     // Catch: java.lang.Throwable -> L3b
            r2.drawCircle(r4, r5, r0, r3)     // Catch: java.lang.Throwable -> L3b
            android.graphics.PorterDuffXfermode r0 = new android.graphics.PorterDuffXfermode     // Catch: java.lang.Throwable -> L3b
            android.graphics.PorterDuff$Mode r4 = android.graphics.PorterDuff.Mode.SRC_IN     // Catch: java.lang.Throwable -> L3b
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L3b
            r3.setXfermode(r0)     // Catch: java.lang.Throwable -> L3b
            r0 = 0
            r2.drawBitmap(r6, r0, r0, r3)     // Catch: java.lang.Throwable -> L3b
            return r1
        L3b:
            r6 = 0
            return r6
    }

    public static android.graphics.Bitmap a(android.graphics.Bitmap r8, int r9) {
            if (r9 != 0) goto L3
            return r8
        L3:
            r0 = 0
            if (r8 == 0) goto L57
            boolean r1 = r8.isRecycled()
            if (r1 != 0) goto L57
            int r1 = r8.getWidth()     // Catch: java.lang.Throwable -> L57
            int r2 = r8.getHeight()     // Catch: java.lang.Throwable -> L57
            android.graphics.Bitmap$Config r3 = android.graphics.Bitmap.Config.ARGB_4444     // Catch: java.lang.Throwable -> L57
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r1, r2, r3)     // Catch: java.lang.Throwable -> L57
            android.graphics.Canvas r3 = new android.graphics.Canvas     // Catch: java.lang.Throwable -> L57
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L57
            android.graphics.Paint r4 = new android.graphics.Paint     // Catch: java.lang.Throwable -> L57
            r4.<init>()     // Catch: java.lang.Throwable -> L57
            android.graphics.Rect r5 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L57
            r6 = 0
            r5.<init>(r6, r6, r1, r2)     // Catch: java.lang.Throwable -> L57
            android.graphics.RectF r1 = new android.graphics.RectF     // Catch: java.lang.Throwable -> L57
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L57
            float r9 = (float) r9     // Catch: java.lang.Throwable -> L57
            r2 = 1
            r4.setAntiAlias(r2)     // Catch: java.lang.Throwable -> L57
            android.graphics.PorterDuffXfermode r2 = new android.graphics.PorterDuffXfermode     // Catch: java.lang.Throwable -> L57
            android.graphics.PorterDuff$Mode r7 = android.graphics.PorterDuff.Mode.SRC_OVER     // Catch: java.lang.Throwable -> L57
            r2.<init>(r7)     // Catch: java.lang.Throwable -> L57
            r4.setXfermode(r2)     // Catch: java.lang.Throwable -> L57
            r3.drawARGB(r6, r6, r6, r6)     // Catch: java.lang.Throwable -> L57
            r2 = -12434878(0xffffffffff424242, float:-2.5821426E38)
            r4.setColor(r2)     // Catch: java.lang.Throwable -> L57
            r3.drawRoundRect(r1, r9, r9, r4)     // Catch: java.lang.Throwable -> L57
            android.graphics.PorterDuffXfermode r9 = new android.graphics.PorterDuffXfermode     // Catch: java.lang.Throwable -> L57
            android.graphics.PorterDuff$Mode r1 = android.graphics.PorterDuff.Mode.SRC_IN     // Catch: java.lang.Throwable -> L57
            r9.<init>(r1)     // Catch: java.lang.Throwable -> L57
            r4.setXfermode(r9)     // Catch: java.lang.Throwable -> L57
            r3.drawBitmap(r8, r5, r5, r4)     // Catch: java.lang.Throwable -> L57
        L57:
            return r0
    }

    public static android.graphics.Bitmap b(android.graphics.Bitmap r6) {
            r0 = 0
            if (r6 == 0) goto L45
            boolean r1 = r6.isRecycled()     // Catch: java.lang.Throwable -> L45
            if (r1 != 0) goto L45
            int r1 = r6.getWidth()     // Catch: java.lang.Throwable -> L45
            int r2 = r6.getHeight()     // Catch: java.lang.Throwable -> L45
            android.graphics.Bitmap$Config r3 = android.graphics.Bitmap.Config.ARGB_4444     // Catch: java.lang.Throwable -> L45
            android.graphics.Bitmap r1 = android.graphics.Bitmap.createBitmap(r1, r2, r3)     // Catch: java.lang.Throwable -> L45
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L45
            android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> L45
            android.renderscript.RenderScript r2 = android.renderscript.RenderScript.create(r2)     // Catch: java.lang.Throwable -> L45
            android.renderscript.Element r3 = android.renderscript.Element.U8_4(r2)     // Catch: java.lang.Throwable -> L45
            android.renderscript.ScriptIntrinsicBlur r3 = android.renderscript.ScriptIntrinsicBlur.create(r2, r3)     // Catch: java.lang.Throwable -> L45
            android.renderscript.Allocation r6 = android.renderscript.Allocation.createFromBitmap(r2, r6)     // Catch: java.lang.Throwable -> L45
            android.renderscript.Allocation r4 = android.renderscript.Allocation.createFromBitmap(r2, r1)     // Catch: java.lang.Throwable -> L45
            r5 = 1103626240(0x41c80000, float:25.0)
            r3.setRadius(r5)     // Catch: java.lang.Throwable -> L45
            r3.setInput(r6)     // Catch: java.lang.Throwable -> L45
            r3.forEach(r4)     // Catch: java.lang.Throwable -> L45
            r4.copyTo(r1)     // Catch: java.lang.Throwable -> L45
            r2.destroy()     // Catch: java.lang.Throwable -> L45
            return r1
        L45:
            return r0
    }
}
