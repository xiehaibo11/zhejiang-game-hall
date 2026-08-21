package com.sigmob.sdk.base.blurkit;

public class a {
    private static final float a = 1.0f;
    private static com.sigmob.sdk.base.blurkit.a b;
    private static android.renderscript.RenderScript c;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private android.graphics.Bitmap a(android.view.View r4) {
            r3 = this;
            int r0 = r4.getWidth()
            int r1 = r4.getHeight()
            android.graphics.Bitmap$Config r2 = android.graphics.Bitmap.Config.ARGB_8888
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r0, r1, r2)
            android.graphics.Canvas r1 = new android.graphics.Canvas
            r1.<init>(r0)
            r4.draw(r1)
            return r0
    }

    private android.graphics.Bitmap a(android.view.View r4, float r5) {
            r3 = this;
            int r0 = r4.getWidth()
            float r0 = (float) r0
            float r0 = r0 * r5
            int r0 = (int) r0
            int r1 = r4.getHeight()
            float r1 = (float) r1
            float r1 = r1 * r5
            int r1 = (int) r1
            android.graphics.Bitmap$Config r2 = android.graphics.Bitmap.Config.ARGB_8888
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r0, r1, r2)
            android.graphics.Canvas r1 = new android.graphics.Canvas
            r1.<init>(r0)
            android.graphics.Matrix r2 = new android.graphics.Matrix
            r2.<init>()
            r2.preScale(r5, r5)
            r1.setMatrix(r2)
            r4.draw(r1)
            return r0
    }

    public static com.sigmob.sdk.base.blurkit.a a() {
            com.sigmob.sdk.base.blurkit.a r0 = com.sigmob.sdk.base.blurkit.a.b
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "BlurKit not initialized!"
            r0.<init>(r1)
            throw r0
    }

    public static void a(android.content.Context r1) {
            com.sigmob.sdk.base.blurkit.a r0 = com.sigmob.sdk.base.blurkit.a.b
            if (r0 == 0) goto L5
            return
        L5:
            com.sigmob.sdk.base.blurkit.a r0 = new com.sigmob.sdk.base.blurkit.a
            r0.<init>()
            com.sigmob.sdk.base.blurkit.a.b = r0
            android.content.Context r1 = r1.getApplicationContext()
            android.renderscript.RenderScript r1 = android.renderscript.RenderScript.create(r1)
            com.sigmob.sdk.base.blurkit.a.c = r1
            return
    }

    public android.graphics.Bitmap a(android.graphics.Bitmap r5, int r6) {
            r4 = this;
            android.renderscript.RenderScript r0 = com.sigmob.sdk.base.blurkit.a.c
            android.renderscript.Allocation r0 = android.renderscript.Allocation.createFromBitmap(r0, r5)
            android.renderscript.RenderScript r1 = com.sigmob.sdk.base.blurkit.a.c
            android.renderscript.Type r2 = r0.getType()
            android.renderscript.Allocation r1 = android.renderscript.Allocation.createTyped(r1, r2)
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 17
            if (r2 < r3) goto L2a
            android.renderscript.RenderScript r2 = com.sigmob.sdk.base.blurkit.a.c
            android.renderscript.Element r3 = android.renderscript.Element.U8_4(r2)
            android.renderscript.ScriptIntrinsicBlur r2 = android.renderscript.ScriptIntrinsicBlur.create(r2, r3)
            float r6 = (float) r6
            r2.setRadius(r6)
            r2.setInput(r0)
            r2.forEach(r1)
        L2a:
            r1.copyTo(r5)
            return r5
    }

    public android.graphics.Bitmap a(android.view.View r1, int r2) {
            r0 = this;
            android.graphics.Bitmap r1 = r0.a(r1)
            android.graphics.Bitmap r1 = r0.a(r1, r2)
            return r1
    }

    public android.graphics.Bitmap a(android.view.View r1, int r2, float r3) {
            r0 = this;
            android.graphics.Bitmap r1 = r0.a(r1, r3)
            android.graphics.Bitmap r1 = r0.a(r1, r2)
            return r1
    }
}
