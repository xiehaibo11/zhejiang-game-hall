package com.bianfeng.ymnsdk.sysfunc.screenshot;

public class WaterMarkHelp {
    public WaterMarkHelp() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.graphics.Bitmap addWatermarkToBitmap(java.lang.String r6, java.lang.String r7) {
            android.graphics.Bitmap r6 = android.graphics.BitmapFactory.decodeFile(r6)
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 == 0) goto Lb
            return r6
        Lb:
            android.graphics.Bitmap$Config r0 = r6.getConfig()
            r1 = 1
            android.graphics.Bitmap r0 = r6.copy(r0, r1)
            android.graphics.Canvas r2 = new android.graphics.Canvas
            r2.<init>(r0)
            android.graphics.Paint r3 = new android.graphics.Paint
            r3.<init>()
            r4 = -1
            r3.setColor(r4)
            r4 = 1103626240(0x41c80000, float:25.0)
            r3.setTextSize(r4)
            r3.setAntiAlias(r1)
            android.graphics.Paint$Style r1 = android.graphics.Paint.Style.STROKE
            r3.setStyle(r1)
            r1 = 1065353216(0x3f800000, float:1.0)
            r3.setStrokeWidth(r1)
            r1 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r3.setColor(r1)
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            r4 = 0
            int r5 = r7.length()
            r3.getTextBounds(r7, r4, r5, r1)
            int r4 = r6.getWidth()
            int r4 = r4 * 8
            int r4 = r4 / 100
            int r6 = r6.getHeight()
            r5 = 85
            int r6 = r6 * 85
            int r6 = r6 / 100
            r3.setAlpha(r5)
            float r4 = (float) r4
            float r5 = (float) r6
            r2.drawText(r7, r4, r5, r3)
            int r7 = r1.height()
            int r6 = r6 + r7
            int r6 = r6 + 10
            java.text.SimpleDateFormat r7 = new java.text.SimpleDateFormat
            java.util.Locale r1 = java.util.Locale.getDefault()
            java.lang.String r5 = "yyyy-MM-dd HH:mm"
            r7.<init>(r5, r1)
            java.util.Date r1 = new java.util.Date
            r1.<init>()
            java.lang.String r7 = r7.format(r1)
            float r6 = (float) r6
            r2.drawText(r7, r4, r6, r3)
            return r0
    }

    public static java.lang.String saveImageWithWatermark(java.lang.String r3, java.lang.String r4) {
            android.graphics.Bitmap r4 = addWatermarkToBitmap(r3, r4)     // Catch: java.lang.Exception -> L17
            java.io.FileOutputStream r0 = new java.io.FileOutputStream     // Catch: java.lang.Exception -> L17
            r0.<init>(r3)     // Catch: java.lang.Exception -> L17
            android.graphics.Bitmap$CompressFormat r1 = android.graphics.Bitmap.CompressFormat.JPEG     // Catch: java.lang.Exception -> L17
            r2 = 100
            r4.compress(r1, r2, r0)     // Catch: java.lang.Exception -> L17
            r0.flush()     // Catch: java.lang.Exception -> L17
            r0.close()     // Catch: java.lang.Exception -> L17
            return r3
        L17:
            r4 = move-exception
            r4.printStackTrace()
            return r3
    }
}
