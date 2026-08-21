package com.mbridge.msdk.videocommon.view;

public class RoundImageView extends com.mbridge.msdk.widget.MBImageView {
    private int a;
    private int b;
    private android.graphics.Paint c;
    private int d;
    private android.graphics.Matrix e;
    private android.graphics.BitmapShader f;
    private int g;
    private android.graphics.RectF h;

    public RoundImageView(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            android.graphics.Matrix r3 = new android.graphics.Matrix
            r3.<init>()
            r2.e = r3
            android.graphics.Paint r3 = new android.graphics.Paint
            r3.<init>()
            r2.c = r3
            r0 = 1
            r3.setAntiAlias(r0)
            android.content.res.Resources r3 = r2.getResources()
            android.util.DisplayMetrics r3 = r3.getDisplayMetrics()
            r1 = 1084227584(0x40a00000, float:5.0)
            float r3 = android.util.TypedValue.applyDimension(r0, r1, r3)
            int r3 = (int) r3
            r2.b = r3
            r2.a = r0
            return
    }

    public RoundImageView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r1.<init>(r2, r3)
            android.graphics.Matrix r2 = new android.graphics.Matrix
            r2.<init>()
            r1.e = r2
            android.graphics.Paint r2 = new android.graphics.Paint
            r2.<init>()
            r1.c = r2
            r3 = 1
            r2.setAntiAlias(r3)
            android.content.res.Resources r2 = r1.getResources()
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()
            r0 = 1084227584(0x40a00000, float:5.0)
            float r2 = android.util.TypedValue.applyDimension(r3, r0, r2)
            int r2 = (int) r2
            r1.b = r2
            r1.a = r3
            return
    }

    public RoundImageView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            android.graphics.Matrix r1 = new android.graphics.Matrix
            r1.<init>()
            r0.e = r1
            android.graphics.Paint r1 = new android.graphics.Paint
            r1.<init>()
            r0.c = r1
            r2 = 1
            r1.setAntiAlias(r2)
            android.content.res.Resources r1 = r0.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            r3 = 1084227584(0x40a00000, float:5.0)
            float r1 = android.util.TypedValue.applyDimension(r2, r3, r1)
            int r1 = (int) r1
            r0.b = r1
            r0.a = r2
            return
    }

    private android.graphics.Bitmap a(android.graphics.drawable.Drawable r6) {
            r5 = this;
            boolean r0 = r6 instanceof android.graphics.drawable.BitmapDrawable     // Catch: java.lang.Throwable -> L26
            if (r0 == 0) goto Lb
            android.graphics.drawable.BitmapDrawable r6 = (android.graphics.drawable.BitmapDrawable) r6     // Catch: java.lang.Throwable -> L26
            android.graphics.Bitmap r6 = r6.getBitmap()     // Catch: java.lang.Throwable -> L26
            return r6
        Lb:
            int r0 = r6.getIntrinsicWidth()     // Catch: java.lang.Throwable -> L26
            int r1 = r6.getIntrinsicHeight()     // Catch: java.lang.Throwable -> L26
            android.graphics.Bitmap$Config r2 = android.graphics.Bitmap.Config.ARGB_4444     // Catch: java.lang.Throwable -> L26
            android.graphics.Bitmap r2 = android.graphics.Bitmap.createBitmap(r0, r1, r2)     // Catch: java.lang.Throwable -> L26
            android.graphics.Canvas r3 = new android.graphics.Canvas     // Catch: java.lang.Throwable -> L26
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L26
            r4 = 0
            r6.setBounds(r4, r4, r0, r1)     // Catch: java.lang.Throwable -> L26
            r6.draw(r3)     // Catch: java.lang.Throwable -> L26
            return r2
        L26:
            r6 = move-exception
            java.lang.String r6 = r6.getMessage()
            java.lang.String r0 = "View"
            com.mbridge.msdk.foundation.tools.z.d(r0, r6)
            r6 = 0
            return r6
    }

    @Override
    protected void onDraw(android.graphics.Canvas r7) {
            r6 = this;
            java.lang.String r0 = "RoundImageView"
            android.graphics.drawable.Drawable r1 = r6.getDrawable()     // Catch: java.lang.Throwable -> L9f
            if (r1 != 0) goto L9
            return
        L9:
            r1 = 1
            android.graphics.drawable.Drawable r2 = r6.getDrawable()     // Catch: java.lang.Throwable -> L76
            if (r2 != 0) goto L11
            goto L7e
        L11:
            android.graphics.Bitmap r2 = r6.a(r2)     // Catch: java.lang.Throwable -> L76
            if (r2 == 0) goto L7e
            boolean r3 = r2.isRecycled()     // Catch: java.lang.Throwable -> L76
            if (r3 != 0) goto L7e
            android.graphics.BitmapShader r3 = new android.graphics.BitmapShader     // Catch: java.lang.Throwable -> L76
            android.graphics.Shader$TileMode r4 = android.graphics.Shader.TileMode.CLAMP     // Catch: java.lang.Throwable -> L76
            android.graphics.Shader$TileMode r5 = android.graphics.Shader.TileMode.CLAMP     // Catch: java.lang.Throwable -> L76
            r3.<init>(r2, r4, r5)     // Catch: java.lang.Throwable -> L76
            r6.f = r3     // Catch: java.lang.Throwable -> L76
            int r3 = r6.a     // Catch: java.lang.Throwable -> L76
            r4 = 1065353216(0x3f800000, float:1.0)
            if (r3 != 0) goto L42
            int r3 = r2.getWidth()     // Catch: java.lang.Throwable -> L76
            int r2 = r2.getHeight()     // Catch: java.lang.Throwable -> L76
            int r2 = java.lang.Math.min(r3, r2)     // Catch: java.lang.Throwable -> L76
            int r3 = r6.g     // Catch: java.lang.Throwable -> L76
            float r3 = (float) r3     // Catch: java.lang.Throwable -> L76
            float r3 = r3 * r4
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L76
            float r4 = r3 / r2
            goto L62
        L42:
            int r3 = r6.a     // Catch: java.lang.Throwable -> L76
            if (r3 != r1) goto L62
            int r3 = r6.getWidth()     // Catch: java.lang.Throwable -> L76
            float r3 = (float) r3     // Catch: java.lang.Throwable -> L76
            float r3 = r3 * r4
            int r5 = r2.getWidth()     // Catch: java.lang.Throwable -> L76
            float r5 = (float) r5     // Catch: java.lang.Throwable -> L76
            float r3 = r3 / r5
            int r5 = r6.getHeight()     // Catch: java.lang.Throwable -> L76
            float r5 = (float) r5     // Catch: java.lang.Throwable -> L76
            float r5 = r5 * r4
            int r2 = r2.getHeight()     // Catch: java.lang.Throwable -> L76
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L76
            float r5 = r5 / r2
            float r4 = java.lang.Math.max(r3, r5)     // Catch: java.lang.Throwable -> L76
        L62:
            android.graphics.Matrix r2 = r6.e     // Catch: java.lang.Throwable -> L76
            r2.setScale(r4, r4)     // Catch: java.lang.Throwable -> L76
            android.graphics.BitmapShader r2 = r6.f     // Catch: java.lang.Throwable -> L76
            android.graphics.Matrix r3 = r6.e     // Catch: java.lang.Throwable -> L76
            r2.setLocalMatrix(r3)     // Catch: java.lang.Throwable -> L76
            android.graphics.Paint r2 = r6.c     // Catch: java.lang.Throwable -> L76
            android.graphics.BitmapShader r3 = r6.f     // Catch: java.lang.Throwable -> L76
            r2.setShader(r3)     // Catch: java.lang.Throwable -> L76
            goto L7e
        L76:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L9f
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)     // Catch: java.lang.Throwable -> L9f
        L7e:
            int r2 = r6.a     // Catch: java.lang.Throwable -> L9f
            if (r2 != r1) goto L90
            android.graphics.RectF r1 = r6.h     // Catch: java.lang.Throwable -> L9f
            int r2 = r6.b     // Catch: java.lang.Throwable -> L9f
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L9f
            int r3 = r6.b     // Catch: java.lang.Throwable -> L9f
            float r3 = (float) r3     // Catch: java.lang.Throwable -> L9f
            android.graphics.Paint r4 = r6.c     // Catch: java.lang.Throwable -> L9f
            r7.drawRoundRect(r1, r2, r3, r4)     // Catch: java.lang.Throwable -> L9f
            goto La7
        L90:
            int r1 = r6.d     // Catch: java.lang.Throwable -> L9f
            float r1 = (float) r1     // Catch: java.lang.Throwable -> L9f
            int r2 = r6.d     // Catch: java.lang.Throwable -> L9f
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L9f
            int r3 = r6.d     // Catch: java.lang.Throwable -> L9f
            float r3 = (float) r3     // Catch: java.lang.Throwable -> L9f
            android.graphics.Paint r4 = r6.c     // Catch: java.lang.Throwable -> L9f
            r7.drawCircle(r1, r2, r3, r4)     // Catch: java.lang.Throwable -> L9f
            goto La7
        L9f:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r7)
        La7:
            return
    }

    @Override
    protected void onMeasure(int r1, int r2) {
            r0 = this;
            super.onMeasure(r1, r2)
            int r1 = r0.a
            if (r1 != 0) goto L1c
            int r1 = r0.getMeasuredWidth()
            int r2 = r0.getMeasuredHeight()
            int r1 = java.lang.Math.min(r1, r2)
            r0.g = r1
            int r2 = r1 / 2
            r0.d = r2
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
            r1.a = r0
            java.lang.String r0 = "state_border_radius"
            int r2 = r2.getInt(r0)
            r1.b = r2
            goto L23
        L20:
            super.onRestoreInstanceState(r2)
        L23:
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
            int r1 = r3.a
            java.lang.String r2 = "state_type"
            r0.putInt(r2, r1)
            int r1 = r3.b
            java.lang.String r2 = "state_border_radius"
            r0.putInt(r2, r1)
            return r0
    }

    @Override
    protected void onSizeChanged(int r1, int r2, int r3, int r4) {
            r0 = this;
            super.onSizeChanged(r1, r2, r3, r4)
            int r1 = r0.a
            r2 = 1
            if (r1 != r2) goto L1a
            android.graphics.RectF r1 = new android.graphics.RectF
            int r2 = r0.getWidth()
            float r2 = (float) r2
            int r3 = r0.getHeight()
            float r3 = (float) r3
            r4 = 0
            r1.<init>(r4, r4, r2, r3)
            r0.h = r1
        L1a:
            return
    }

    public void setBorderRadius(int r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            float r2 = (float) r2
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r0, r2)
            int r0 = r1.b
            if (r0 == r2) goto L12
            r1.b = r2
            r1.invalidate()
        L12:
            return
    }

    public void setType(int r2) {
            r1 = this;
            int r0 = r1.a
            if (r0 == r2) goto L11
            r1.a = r2
            r0 = 1
            if (r2 == r0) goto Le
            if (r2 == 0) goto Le
            r2 = 0
            r1.a = r2
        Le:
            r1.requestLayout()
        L11:
            return
    }
}
