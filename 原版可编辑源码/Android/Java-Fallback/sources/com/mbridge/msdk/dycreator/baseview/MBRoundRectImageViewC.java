package com.mbridge.msdk.dycreator.baseview;

public class MBRoundRectImageViewC extends com.mbridge.msdk.dycreator.baseview.MBImageView {
    private android.graphics.Paint a;

    public MBRoundRectImageViewC(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            android.graphics.Paint r1 = new android.graphics.Paint
            r1.<init>()
            r0.a = r1
            return
    }

    private android.graphics.Bitmap a(android.graphics.Bitmap r10) {
            r9 = this;
            if (r10 == 0) goto L42
            boolean r0 = r10.isRecycled()
            if (r0 == 0) goto L9
            goto L42
        L9:
            int r0 = r9.getWidth()     // Catch: java.lang.Exception -> L38
            int r1 = r9.getHeight()     // Catch: java.lang.Exception -> L38
            float r0 = (float) r0     // Catch: java.lang.Exception -> L38
            int r2 = r10.getWidth()     // Catch: java.lang.Exception -> L38
            float r2 = (float) r2     // Catch: java.lang.Exception -> L38
            float r0 = r0 / r2
            float r1 = (float) r1     // Catch: java.lang.Exception -> L38
            int r2 = r10.getHeight()     // Catch: java.lang.Exception -> L38
            float r2 = (float) r2     // Catch: java.lang.Exception -> L38
            float r1 = r1 / r2
            android.graphics.Matrix r7 = new android.graphics.Matrix     // Catch: java.lang.Exception -> L38
            r7.<init>()     // Catch: java.lang.Exception -> L38
            r7.postScale(r0, r1)     // Catch: java.lang.Exception -> L38
            r3 = 0
            r4 = 0
            int r5 = r10.getWidth()     // Catch: java.lang.Exception -> L38
            int r6 = r10.getHeight()     // Catch: java.lang.Exception -> L38
            r8 = 1
            r2 = r10
            android.graphics.Bitmap r10 = android.graphics.Bitmap.createBitmap(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L38
            return r10
        L38:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBRoundRectImageViewC"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L42:
            return r10
    }

    private android.graphics.Bitmap a(android.graphics.Bitmap r8, int r9) {
            r7 = this;
            if (r8 == 0) goto L50
            boolean r0 = r8.isRecycled()
            if (r0 == 0) goto L9
            goto L50
        L9:
            android.graphics.BitmapShader r0 = new android.graphics.BitmapShader     // Catch: java.lang.Exception -> L46
            android.graphics.Shader$TileMode r1 = android.graphics.Shader.TileMode.CLAMP     // Catch: java.lang.Exception -> L46
            android.graphics.Shader$TileMode r2 = android.graphics.Shader.TileMode.CLAMP     // Catch: java.lang.Exception -> L46
            r0.<init>(r8, r1, r2)     // Catch: java.lang.Exception -> L46
            int r1 = r8.getWidth()     // Catch: java.lang.Exception -> L46
            int r2 = r8.getHeight()     // Catch: java.lang.Exception -> L46
            android.graphics.Bitmap$Config r3 = android.graphics.Bitmap.Config.ARGB_4444     // Catch: java.lang.Exception -> L46
            android.graphics.Bitmap r1 = android.graphics.Bitmap.createBitmap(r1, r2, r3)     // Catch: java.lang.Exception -> L46
            android.graphics.Canvas r2 = new android.graphics.Canvas     // Catch: java.lang.Exception -> L46
            r2.<init>(r1)     // Catch: java.lang.Exception -> L46
            android.graphics.Paint r3 = new android.graphics.Paint     // Catch: java.lang.Exception -> L46
            r3.<init>()     // Catch: java.lang.Exception -> L46
            r4 = 1
            r3.setAntiAlias(r4)     // Catch: java.lang.Exception -> L46
            r3.setShader(r0)     // Catch: java.lang.Exception -> L46
            android.graphics.RectF r0 = new android.graphics.RectF     // Catch: java.lang.Exception -> L46
            int r4 = r8.getWidth()     // Catch: java.lang.Exception -> L46
            float r4 = (float) r4     // Catch: java.lang.Exception -> L46
            int r5 = r8.getHeight()     // Catch: java.lang.Exception -> L46
            float r5 = (float) r5     // Catch: java.lang.Exception -> L46
            r6 = 0
            r0.<init>(r6, r6, r4, r5)     // Catch: java.lang.Exception -> L46
            float r9 = (float) r9     // Catch: java.lang.Exception -> L46
            r2.drawRoundRect(r0, r9, r9, r3)     // Catch: java.lang.Exception -> L46
            return r1
        L46:
            r9 = move-exception
            java.lang.String r9 = r9.getMessage()
            java.lang.String r0 = "MBRoundRectImageViewC"
            com.mbridge.msdk.foundation.tools.z.d(r0, r9)
        L50:
            return r8
    }

    @Override
    protected void onDraw(android.graphics.Canvas r6) {
            r5 = this;
            android.graphics.drawable.Drawable r0 = r5.getDrawable()     // Catch: java.lang.Exception -> L4d
            if (r0 != 0) goto La
            super.onDraw(r6)     // Catch: java.lang.Exception -> L4d
            return
        La:
            android.graphics.drawable.BitmapDrawable r0 = (android.graphics.drawable.BitmapDrawable) r0     // Catch: java.lang.Exception -> L4d
            android.graphics.Bitmap r0 = r0.getBitmap()     // Catch: java.lang.Exception -> L4d
            android.graphics.Bitmap r0 = r5.a(r0)     // Catch: java.lang.Exception -> L4d
            if (r0 == 0) goto L49
            boolean r1 = r0.isRecycled()     // Catch: java.lang.Exception -> L4d
            if (r1 == 0) goto L1d
            goto L49
        L1d:
            r1 = 30
            android.graphics.Bitmap r0 = r5.a(r0, r1)     // Catch: java.lang.Exception -> L4d
            if (r0 == 0) goto L45
            boolean r1 = r0.isRecycled()     // Catch: java.lang.Exception -> L4d
            if (r1 == 0) goto L2c
            goto L45
        L2c:
            android.graphics.Rect r1 = new android.graphics.Rect     // Catch: java.lang.Exception -> L4d
            int r2 = r0.getWidth()     // Catch: java.lang.Exception -> L4d
            int r3 = r0.getHeight()     // Catch: java.lang.Exception -> L4d
            r4 = 0
            r1.<init>(r4, r4, r2, r3)     // Catch: java.lang.Exception -> L4d
            android.graphics.Paint r2 = r5.a     // Catch: java.lang.Exception -> L4d
            r2.reset()     // Catch: java.lang.Exception -> L4d
            android.graphics.Paint r2 = r5.a     // Catch: java.lang.Exception -> L4d
            r6.drawBitmap(r0, r1, r1, r2)     // Catch: java.lang.Exception -> L4d
            goto L57
        L45:
            super.onDraw(r6)     // Catch: java.lang.Exception -> L4d
            return
        L49:
            super.onDraw(r6)     // Catch: java.lang.Exception -> L4d
            return
        L4d:
            r6 = move-exception
            java.lang.String r6 = r6.getMessage()
            java.lang.String r0 = "MBRoundRectImageViewC"
            com.mbridge.msdk.foundation.tools.z.d(r0, r6)
        L57:
            return
    }
}
