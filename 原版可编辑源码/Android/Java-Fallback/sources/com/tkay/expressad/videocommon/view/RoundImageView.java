package com.tkay.expressad.videocommon.view;

public class RoundImageView extends com.tkay.expressad.widget.TYImageView {
    private static final java.lang.String a = "RoundImageView";
    private static final int c = 0;
    private static final int d = 1;
    private static final int e = 5;
    private static final java.lang.String m = "state_instance";
    private static final java.lang.String n = "state_type";
    private static final java.lang.String o = "state_border_radius";
    private int b;
    private int f;
    private android.graphics.Paint g;
    private int h;
    private android.graphics.Matrix i;
    private android.graphics.BitmapShader j;
    private int k;
    private android.graphics.RectF l;

    public RoundImageView(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            android.graphics.Matrix r3 = new android.graphics.Matrix
            r3.<init>()
            r2.i = r3
            android.graphics.Paint r3 = new android.graphics.Paint
            r3.<init>()
            r2.g = r3
            r0 = 1
            r3.setAntiAlias(r0)
            android.content.res.Resources r3 = r2.getResources()
            android.util.DisplayMetrics r3 = r3.getDisplayMetrics()
            r1 = 1084227584(0x40a00000, float:5.0)
            float r3 = android.util.TypedValue.applyDimension(r0, r1, r3)
            int r3 = (int) r3
            r2.f = r3
            r2.b = r0
            return
    }

    public RoundImageView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r1.<init>(r2, r3)
            android.graphics.Matrix r2 = new android.graphics.Matrix
            r2.<init>()
            r1.i = r2
            android.graphics.Paint r2 = new android.graphics.Paint
            r2.<init>()
            r1.g = r2
            r3 = 1
            r2.setAntiAlias(r3)
            android.content.res.Resources r2 = r1.getResources()
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()
            r0 = 1084227584(0x40a00000, float:5.0)
            float r2 = android.util.TypedValue.applyDimension(r3, r0, r2)
            int r2 = (int) r2
            r1.f = r2
            r1.b = r3
            return
    }

    public RoundImageView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            android.graphics.Matrix r1 = new android.graphics.Matrix
            r1.<init>()
            r0.i = r1
            android.graphics.Paint r1 = new android.graphics.Paint
            r1.<init>()
            r0.g = r1
            r2 = 1
            r1.setAntiAlias(r2)
            android.content.res.Resources r1 = r0.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            r3 = 1084227584(0x40a00000, float:5.0)
            float r1 = android.util.TypedValue.applyDimension(r2, r3, r1)
            int r1 = (int) r1
            r0.f = r1
            r0.b = r2
            return
    }

    private static android.graphics.Bitmap a(android.graphics.drawable.Drawable r5) {
            boolean r0 = r5 instanceof android.graphics.drawable.BitmapDrawable     // Catch: java.lang.Throwable -> L26
            if (r0 == 0) goto Lb
            android.graphics.drawable.BitmapDrawable r5 = (android.graphics.drawable.BitmapDrawable) r5     // Catch: java.lang.Throwable -> L26
            android.graphics.Bitmap r5 = r5.getBitmap()     // Catch: java.lang.Throwable -> L26
            return r5
        Lb:
            int r0 = r5.getIntrinsicWidth()     // Catch: java.lang.Throwable -> L26
            int r1 = r5.getIntrinsicHeight()     // Catch: java.lang.Throwable -> L26
            android.graphics.Bitmap$Config r2 = android.graphics.Bitmap.Config.ARGB_4444     // Catch: java.lang.Throwable -> L26
            android.graphics.Bitmap r2 = android.graphics.Bitmap.createBitmap(r0, r1, r2)     // Catch: java.lang.Throwable -> L26
            android.graphics.Canvas r3 = new android.graphics.Canvas     // Catch: java.lang.Throwable -> L26
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L26
            r4 = 0
            r5.setBounds(r4, r4, r0, r1)     // Catch: java.lang.Throwable -> L26
            r5.draw(r3)     // Catch: java.lang.Throwable -> L26
            return r2
        L26:
            r5 = move-exception
            r5.getMessage()
            r5 = 0
            return r5
    }

    private void a() {
            r4 = this;
            android.graphics.drawable.Drawable r0 = r4.getDrawable()     // Catch: java.lang.Throwable -> L6b
            if (r0 != 0) goto L7
            return
        L7:
            android.graphics.Bitmap r0 = a(r0)     // Catch: java.lang.Throwable -> L6b
            if (r0 == 0) goto L6a
            boolean r1 = r0.isRecycled()     // Catch: java.lang.Throwable -> L6b
            if (r1 != 0) goto L6a
            android.graphics.BitmapShader r1 = new android.graphics.BitmapShader     // Catch: java.lang.Throwable -> L6b
            android.graphics.Shader$TileMode r2 = android.graphics.Shader.TileMode.CLAMP     // Catch: java.lang.Throwable -> L6b
            r1.<init>(r0, r2, r2)     // Catch: java.lang.Throwable -> L6b
            r4.j = r1     // Catch: java.lang.Throwable -> L6b
            int r1 = r4.b     // Catch: java.lang.Throwable -> L6b
            r2 = 1065353216(0x3f800000, float:1.0)
            if (r1 != 0) goto L36
            int r1 = r0.getWidth()     // Catch: java.lang.Throwable -> L6b
            int r0 = r0.getHeight()     // Catch: java.lang.Throwable -> L6b
            int r0 = java.lang.Math.min(r1, r0)     // Catch: java.lang.Throwable -> L6b
            int r1 = r4.k     // Catch: java.lang.Throwable -> L6b
            float r1 = (float) r1     // Catch: java.lang.Throwable -> L6b
            float r1 = r1 * r2
            float r0 = (float) r0     // Catch: java.lang.Throwable -> L6b
            float r2 = r1 / r0
            goto L57
        L36:
            int r1 = r4.b     // Catch: java.lang.Throwable -> L6b
            r3 = 1
            if (r1 != r3) goto L57
            int r1 = r4.getWidth()     // Catch: java.lang.Throwable -> L6b
            float r1 = (float) r1     // Catch: java.lang.Throwable -> L6b
            float r1 = r1 * r2
            int r3 = r0.getWidth()     // Catch: java.lang.Throwable -> L6b
            float r3 = (float) r3     // Catch: java.lang.Throwable -> L6b
            float r1 = r1 / r3
            int r3 = r4.getHeight()     // Catch: java.lang.Throwable -> L6b
            float r3 = (float) r3     // Catch: java.lang.Throwable -> L6b
            float r3 = r3 * r2
            int r0 = r0.getHeight()     // Catch: java.lang.Throwable -> L6b
            float r0 = (float) r0     // Catch: java.lang.Throwable -> L6b
            float r3 = r3 / r0
            float r2 = java.lang.Math.max(r1, r3)     // Catch: java.lang.Throwable -> L6b
        L57:
            android.graphics.Matrix r0 = r4.i     // Catch: java.lang.Throwable -> L6b
            r0.setScale(r2, r2)     // Catch: java.lang.Throwable -> L6b
            android.graphics.BitmapShader r0 = r4.j     // Catch: java.lang.Throwable -> L6b
            android.graphics.Matrix r1 = r4.i     // Catch: java.lang.Throwable -> L6b
            r0.setLocalMatrix(r1)     // Catch: java.lang.Throwable -> L6b
            android.graphics.Paint r0 = r4.g     // Catch: java.lang.Throwable -> L6b
            android.graphics.BitmapShader r1 = r4.j     // Catch: java.lang.Throwable -> L6b
            r0.setShader(r1)     // Catch: java.lang.Throwable -> L6b
        L6a:
            return
        L6b:
            r0 = move-exception
            r0.getMessage()
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r6) {
            r5 = this;
            android.graphics.drawable.Drawable r0 = r5.getDrawable()     // Catch: java.lang.Throwable -> L97
            if (r0 != 0) goto L7
            return
        L7:
            r0 = 1
            android.graphics.drawable.Drawable r1 = r5.getDrawable()     // Catch: java.lang.Throwable -> L72
            if (r1 != 0) goto Lf
            goto L76
        Lf:
            android.graphics.Bitmap r1 = a(r1)     // Catch: java.lang.Throwable -> L72
            if (r1 == 0) goto L76
            boolean r2 = r1.isRecycled()     // Catch: java.lang.Throwable -> L72
            if (r2 != 0) goto L76
            android.graphics.BitmapShader r2 = new android.graphics.BitmapShader     // Catch: java.lang.Throwable -> L72
            android.graphics.Shader$TileMode r3 = android.graphics.Shader.TileMode.CLAMP     // Catch: java.lang.Throwable -> L72
            r2.<init>(r1, r3, r3)     // Catch: java.lang.Throwable -> L72
            r5.j = r2     // Catch: java.lang.Throwable -> L72
            int r2 = r5.b     // Catch: java.lang.Throwable -> L72
            r3 = 1065353216(0x3f800000, float:1.0)
            if (r2 != 0) goto L3e
            int r2 = r1.getWidth()     // Catch: java.lang.Throwable -> L72
            int r1 = r1.getHeight()     // Catch: java.lang.Throwable -> L72
            int r1 = java.lang.Math.min(r2, r1)     // Catch: java.lang.Throwable -> L72
            int r2 = r5.k     // Catch: java.lang.Throwable -> L72
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L72
            float r2 = r2 * r3
            float r1 = (float) r1     // Catch: java.lang.Throwable -> L72
            float r3 = r2 / r1
            goto L5e
        L3e:
            int r2 = r5.b     // Catch: java.lang.Throwable -> L72
            if (r2 != r0) goto L5e
            int r2 = r5.getWidth()     // Catch: java.lang.Throwable -> L72
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L72
            float r2 = r2 * r3
            int r4 = r1.getWidth()     // Catch: java.lang.Throwable -> L72
            float r4 = (float) r4     // Catch: java.lang.Throwable -> L72
            float r2 = r2 / r4
            int r4 = r5.getHeight()     // Catch: java.lang.Throwable -> L72
            float r4 = (float) r4     // Catch: java.lang.Throwable -> L72
            float r4 = r4 * r3
            int r1 = r1.getHeight()     // Catch: java.lang.Throwable -> L72
            float r1 = (float) r1     // Catch: java.lang.Throwable -> L72
            float r4 = r4 / r1
            float r3 = java.lang.Math.max(r2, r4)     // Catch: java.lang.Throwable -> L72
        L5e:
            android.graphics.Matrix r1 = r5.i     // Catch: java.lang.Throwable -> L72
            r1.setScale(r3, r3)     // Catch: java.lang.Throwable -> L72
            android.graphics.BitmapShader r1 = r5.j     // Catch: java.lang.Throwable -> L72
            android.graphics.Matrix r2 = r5.i     // Catch: java.lang.Throwable -> L72
            r1.setLocalMatrix(r2)     // Catch: java.lang.Throwable -> L72
            android.graphics.Paint r1 = r5.g     // Catch: java.lang.Throwable -> L72
            android.graphics.BitmapShader r2 = r5.j     // Catch: java.lang.Throwable -> L72
            r1.setShader(r2)     // Catch: java.lang.Throwable -> L72
            goto L76
        L72:
            r1 = move-exception
            r1.getMessage()     // Catch: java.lang.Throwable -> L97
        L76:
            int r1 = r5.b     // Catch: java.lang.Throwable -> L97
            if (r1 != r0) goto L88
            android.graphics.RectF r0 = r5.l     // Catch: java.lang.Throwable -> L97
            int r1 = r5.f     // Catch: java.lang.Throwable -> L97
            float r1 = (float) r1     // Catch: java.lang.Throwable -> L97
            int r2 = r5.f     // Catch: java.lang.Throwable -> L97
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L97
            android.graphics.Paint r3 = r5.g     // Catch: java.lang.Throwable -> L97
            r6.drawRoundRect(r0, r1, r2, r3)     // Catch: java.lang.Throwable -> L97
            return
        L88:
            int r0 = r5.h     // Catch: java.lang.Throwable -> L97
            float r0 = (float) r0     // Catch: java.lang.Throwable -> L97
            int r1 = r5.h     // Catch: java.lang.Throwable -> L97
            float r1 = (float) r1     // Catch: java.lang.Throwable -> L97
            int r2 = r5.h     // Catch: java.lang.Throwable -> L97
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L97
            android.graphics.Paint r3 = r5.g     // Catch: java.lang.Throwable -> L97
            r6.drawCircle(r0, r1, r2, r3)     // Catch: java.lang.Throwable -> L97
            return
        L97:
            r6 = move-exception
            r6.getMessage()
            return
    }

    @Override
    protected void onMeasure(int r1, int r2) {
            r0 = this;
            super.onMeasure(r1, r2)
            int r1 = r0.b
            if (r1 != 0) goto L1c
            int r1 = r0.getMeasuredWidth()
            int r2 = r0.getMeasuredHeight()
            int r1 = java.lang.Math.min(r1, r2)
            r0.k = r1
            int r2 = r1 / 2
            r0.h = r2
            r0.setMeasuredDimension(r1, r1)
        L1c:
            return
    }

    @Override
    protected void onRestoreInstanceState(android.os.Parcelable r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.os.Bundle
            if (r0 == 0) goto L20
            android.os.Bundle r2 = (android.os.Bundle) r2
            java.lang.String r0 = "state_instance"
            android.os.Parcelable r0 = r2.getParcelable(r0)
            super.onRestoreInstanceState(r0)
            java.lang.String r0 = "state_type"
            int r0 = r2.getInt(r0)
            r1.b = r0
            java.lang.String r0 = "state_border_radius"
            int r2 = r2.getInt(r0)
            r1.f = r2
            return
        L20:
            super.onRestoreInstanceState(r2)
            return
    }

    @Override
    protected android.os.Parcelable onSaveInstanceState() {
            r3 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            android.os.Parcelable r1 = super.onSaveInstanceState()
            java.lang.String r2 = "state_instance"
            r0.putParcelable(r2, r1)
            int r1 = r3.b
            java.lang.String r2 = "state_type"
            r0.putInt(r2, r1)
            int r1 = r3.f
            java.lang.String r2 = "state_border_radius"
            r0.putInt(r2, r1)
            return r0
    }

    @Override
    protected void onSizeChanged(int r1, int r2, int r3, int r4) {
            r0 = this;
            super.onSizeChanged(r1, r2, r3, r4)
            int r1 = r0.b
            r2 = 1
            if (r1 != r2) goto L1a
            android.graphics.RectF r1 = new android.graphics.RectF
            int r2 = r0.getWidth()
            float r2 = (float) r2
            int r3 = r0.getHeight()
            float r3 = (float) r3
            r4 = 0
            r1.<init>(r4, r4, r2, r3)
            r0.l = r1
        L1a:
            return
    }

    public void setBorderRadius(int r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            float r2 = (float) r2
            int r2 = com.tkay.expressad.foundation.h.t.b(r0, r2)
            int r0 = r1.f
            if (r0 == r2) goto L12
            r1.f = r2
            r1.invalidate()
        L12:
            return
    }

    public void setType(int r2) {
            r1 = this;
            int r0 = r1.b
            if (r0 == r2) goto L11
            r1.b = r2
            r0 = 1
            if (r2 == r0) goto Le
            if (r2 == 0) goto Le
            r2 = 0
            r1.b = r2
        Le:
            r1.requestLayout()
        L11:
            return
    }
}
