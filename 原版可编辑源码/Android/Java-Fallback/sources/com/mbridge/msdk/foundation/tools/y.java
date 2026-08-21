package com.mbridge.msdk.foundation.tools;

public final class y {
    public static android.graphics.Bitmap a(android.graphics.Bitmap r6) {
            r0 = 0
            if (r6 == 0) goto L45
            boolean r1 = r6.isRecycled()     // Catch: java.lang.Throwable -> L45
            if (r1 != 0) goto L45
            int r1 = r6.getWidth()     // Catch: java.lang.Throwable -> L45
            int r2 = r6.getHeight()     // Catch: java.lang.Throwable -> L45
            android.graphics.Bitmap$Config r3 = android.graphics.Bitmap.Config.ARGB_4444     // Catch: java.lang.Throwable -> L45
            android.graphics.Bitmap r1 = android.graphics.Bitmap.createBitmap(r1, r2, r3)     // Catch: java.lang.Throwable -> L45
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L45
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L45
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

    public static android.graphics.Bitmap a(android.graphics.Bitmap r12, int r13, int r14) {
            if (r14 != 0) goto L3
            return r12
        L3:
            r0 = 0
            if (r12 == 0) goto L66
            boolean r1 = r12.isRecycled()
            if (r1 != 0) goto L66
            int r1 = r12.getWidth()     // Catch: java.lang.Throwable -> L66
            int r2 = r12.getHeight()     // Catch: java.lang.Throwable -> L66
            android.graphics.Bitmap$Config r3 = android.graphics.Bitmap.Config.ARGB_4444     // Catch: java.lang.Throwable -> L66
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r1, r2, r3)     // Catch: java.lang.Throwable -> L66
            android.graphics.Canvas r9 = new android.graphics.Canvas     // Catch: java.lang.Throwable -> L66
            r9.<init>(r0)     // Catch: java.lang.Throwable -> L66
            android.graphics.Paint r10 = new android.graphics.Paint     // Catch: java.lang.Throwable -> L66
            r10.<init>()     // Catch: java.lang.Throwable -> L66
            android.graphics.Rect r11 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L66
            r3 = 0
            r11.<init>(r3, r3, r1, r2)     // Catch: java.lang.Throwable -> L66
            android.graphics.RectF r4 = new android.graphics.RectF     // Catch: java.lang.Throwable -> L66
            r4.<init>(r11)     // Catch: java.lang.Throwable -> L66
            float r5 = (float) r14     // Catch: java.lang.Throwable -> L66
            r6 = 1
            r10.setAntiAlias(r6)     // Catch: java.lang.Throwable -> L66
            android.graphics.PorterDuffXfermode r6 = new android.graphics.PorterDuffXfermode     // Catch: java.lang.Throwable -> L66
            android.graphics.PorterDuff$Mode r7 = android.graphics.PorterDuff.Mode.SRC_OVER     // Catch: java.lang.Throwable -> L66
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L66
            r10.setXfermode(r6)     // Catch: java.lang.Throwable -> L66
            r9.drawARGB(r3, r3, r3, r3)     // Catch: java.lang.Throwable -> L66
            r3 = -12434878(0xffffffffff424242, float:-2.5821426E38)
            r10.setColor(r3)     // Catch: java.lang.Throwable -> L66
            r9.drawRoundRect(r4, r5, r5, r10)     // Catch: java.lang.Throwable -> L66
            r3 = 2
            if (r13 == r3) goto L4e
            goto L59
        L4e:
            r4 = 0
            int r13 = r2 - r14
            float r5 = (float) r13     // Catch: java.lang.Throwable -> L66
            float r6 = (float) r1     // Catch: java.lang.Throwable -> L66
            float r7 = (float) r2     // Catch: java.lang.Throwable -> L66
            r3 = r9
            r8 = r10
            r3.drawRect(r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L66
        L59:
            android.graphics.PorterDuffXfermode r13 = new android.graphics.PorterDuffXfermode     // Catch: java.lang.Throwable -> L66
            android.graphics.PorterDuff$Mode r14 = android.graphics.PorterDuff.Mode.SRC_IN     // Catch: java.lang.Throwable -> L66
            r13.<init>(r14)     // Catch: java.lang.Throwable -> L66
            r10.setXfermode(r13)     // Catch: java.lang.Throwable -> L66
            r9.drawBitmap(r12, r11, r11, r10)     // Catch: java.lang.Throwable -> L66
        L66:
            return r0
    }
}
