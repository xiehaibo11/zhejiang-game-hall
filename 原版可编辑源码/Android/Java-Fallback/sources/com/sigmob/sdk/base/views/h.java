package com.sigmob.sdk.base.views;

public class h extends android.widget.ImageView {
    protected float a;
    protected boolean b;
    private android.graphics.BitmapShader c;
    private float d;
    private float e;
    private android.graphics.Paint f;
    private android.graphics.Matrix g;
    private android.graphics.RectF h;

    public h(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public h(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public h(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r2 = 1
            r0.b = r2
            android.graphics.Paint r3 = new android.graphics.Paint
            r3.<init>()
            r0.f = r3
            r3.setAntiAlias(r2)
            android.graphics.Matrix r3 = new android.graphics.Matrix
            r3.<init>()
            r0.g = r3
            android.content.res.Resources r1 = r1.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            r3 = 1092616192(0x41200000, float:10.0)
            float r1 = android.util.TypedValue.applyDimension(r2, r3, r1)
            r0.a = r1
            return
    }

    private android.graphics.BitmapShader a() {
            r4 = this;
            android.graphics.drawable.Drawable r0 = r4.getDrawable()
            android.graphics.drawable.BitmapDrawable r0 = (android.graphics.drawable.BitmapDrawable) r0
            if (r0 == 0) goto L34
            android.graphics.Bitmap r0 = r0.getBitmap()
            android.graphics.BitmapShader r1 = new android.graphics.BitmapShader
            android.graphics.Shader$TileMode r2 = android.graphics.Shader.TileMode.CLAMP
            android.graphics.Shader$TileMode r3 = android.graphics.Shader.TileMode.CLAMP
            r1.<init>(r0, r2, r3)
            float r2 = r4.d
            int r3 = r0.getWidth()
            float r3 = (float) r3
            float r2 = r2 / r3
            float r3 = r4.d
            int r0 = r0.getHeight()
            float r0 = (float) r0
            float r3 = r3 / r0
            float r0 = java.lang.Math.max(r2, r3)
            android.graphics.Matrix r2 = r4.g
            r2.setScale(r0, r0)
            android.graphics.Matrix r0 = r4.g
            r1.setLocalMatrix(r0)
            return r1
        L34:
            r0 = 0
            return r0
    }

    @Override
    protected void onDraw(android.graphics.Canvas r5) {
            r4 = this;
            android.graphics.BitmapShader r0 = r4.a()
            r4.c = r0
            if (r0 != 0) goto Lc
            super.onDraw(r5)
            goto L2d
        Lc:
            android.graphics.Paint r1 = r4.f
            r1.setShader(r0)
            boolean r0 = r4.b
            if (r0 == 0) goto L24
            float r0 = r4.d
            r1 = 1073741824(0x40000000, float:2.0)
            float r2 = r0 / r1
            float r3 = r0 / r1
            float r0 = r0 / r1
            android.graphics.Paint r1 = r4.f
            r5.drawCircle(r2, r3, r0, r1)
            goto L2d
        L24:
            android.graphics.RectF r0 = r4.h
            float r1 = r4.a
            android.graphics.Paint r2 = r4.f
            r5.drawRoundRect(r0, r1, r1, r2)
        L2d:
            return
    }

    @Override
    protected void onMeasure(int r1, int r2) {
            r0 = this;
            super.onMeasure(r1, r2)
            int r1 = r0.getMeasuredWidth()
            float r1 = (float) r1
            r0.d = r1
            int r1 = r0.getMeasuredHeight()
            float r1 = (float) r1
            r0.e = r1
            float r2 = r0.d
            float r1 = java.lang.Math.min(r2, r1)
            r0.d = r1
            return
    }

    @Override
    protected void onSizeChanged(int r1, int r2, int r3, int r4) {
            r0 = this;
            super.onSizeChanged(r1, r2, r3, r4)
            android.graphics.RectF r1 = new android.graphics.RectF
            int r2 = r0.getHeight()
            float r2 = (float) r2
            int r3 = r0.getHeight()
            float r3 = (float) r3
            r4 = 0
            r1.<init>(r4, r4, r2, r3)
            r0.h = r1
            return
    }

    public void setCircle(boolean r1) {
            r0 = this;
            r0.b = r1
            return
    }
}
