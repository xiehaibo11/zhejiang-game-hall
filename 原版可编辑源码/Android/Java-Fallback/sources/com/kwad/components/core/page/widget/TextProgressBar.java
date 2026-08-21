package com.kwad.components.core.page.widget;

public class TextProgressBar extends android.widget.ProgressBar {
    private java.lang.String OM;
    private android.graphics.LinearGradient ON;
    private android.graphics.Matrix OO;
    private boolean OP;
    private boolean OQ;
    private boolean OR;
    private int OS;
    private int OT;
    private android.graphics.drawable.Drawable OU;
    private int OV;
    private android.graphics.Rect OW;
    private int[] OX;
    private int OY;
    private int OZ;
    private boolean Pa;
    private android.graphics.Paint mPaint;
    private android.graphics.RectF mRectF;

    public TextProgressBar(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public TextProgressBar(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            android.content.Context r1 = com.kwad.sdk.m.l.wrapContextIfNeed(r1)
            r0.<init>(r1, r2)
            r1 = 0
            r0.OQ = r1
            r1 = 1
            r0.OR = r1
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            r0.OW = r1
            r0.pu()
            return
    }

    private void pu() {
            r4 = this;
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>()
            r4.mPaint = r0
            r1 = 1
            r0.setAntiAlias(r1)
            android.graphics.Paint r0 = r4.mPaint
            r1 = -1
            r0.setColor(r1)
            android.graphics.Paint r0 = r4.mPaint
            android.content.Context r2 = r4.getContext()
            r3 = 1094713344(0x41400000, float:12.0)
            int r2 = com.kwad.sdk.d.a.a.a(r2, r3)
            float r2 = (float) r2
            r0.setTextSize(r2)
            android.content.Context r0 = r4.getContext()
            r2 = 1073741824(0x40000000, float:2.0)
            int r0 = com.kwad.sdk.d.a.a.a(r0, r2)
            r4.OV = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r4.mRectF = r0
            r4.OY = r1
            r0 = -117146(0xfffffffffffe3666, float:NaN)
            r4.OZ = r0
            return
    }

    private void setProgressText(int r2) {
            r1 = this;
            float r2 = (float) r2
            r0 = 1065353216(0x3f800000, float:1.0)
            float r2 = r2 * r0
            int r0 = r1.getMax()
            float r0 = (float) r0
            float r2 = r2 / r0
            r0 = 1120403456(0x42c80000, float:100.0)
            float r2 = r2 * r0
            int r2 = (int) r2
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.append(r2)
            java.lang.String r2 = "%"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.OM = r2
            return
    }

    public final void e(java.lang.String r1, int r2) {
            r0 = this;
            r0.OM = r1
            r1 = 1
            r0.OP = r1
            r0.setProgress(r2)
            r0.invalidate()
            return
    }

    @Override
    protected synchronized void onDraw(android.graphics.Canvas r17) {
            r16 = this;
            r1 = r16
            r0 = r17
            monitor-enter(r16)
            boolean r2 = r1.OQ     // Catch: java.lang.Throwable -> L199
            r3 = 0
            if (r2 == 0) goto L22
            r17.save()     // Catch: java.lang.Throwable -> L199
            r2 = 1119092736(0x42b40000, float:90.0)
            r0.rotate(r2)     // Catch: java.lang.Throwable -> L199
            int r2 = r16.getWidth()     // Catch: java.lang.Throwable -> L199
            int r2 = -r2
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L199
            r0.translate(r3, r2)     // Catch: java.lang.Throwable -> L199
            super.onDraw(r17)     // Catch: java.lang.Throwable -> L199
            r17.restore()     // Catch: java.lang.Throwable -> L199
            goto L25
        L22:
            super.onDraw(r17)     // Catch: java.lang.Throwable -> L199
        L25:
            java.lang.String r2 = r1.OM     // Catch: java.lang.Throwable -> L199
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L199
            if (r2 != 0) goto L3d
            android.graphics.Paint r2 = r1.mPaint     // Catch: java.lang.Throwable -> L199
            java.lang.String r4 = r1.OM     // Catch: java.lang.Throwable -> L199
            r5 = 0
            java.lang.String r6 = r1.OM     // Catch: java.lang.Throwable -> L199
            int r6 = r6.length()     // Catch: java.lang.Throwable -> L199
            android.graphics.Rect r7 = r1.OW     // Catch: java.lang.Throwable -> L199
            r2.getTextBounds(r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L199
        L3d:
            int r2 = r16.getHeight()     // Catch: java.lang.Throwable -> L199
            int r2 = r2 / 2
            android.graphics.Rect r4 = r1.OW     // Catch: java.lang.Throwable -> L199
            int r4 = r4.centerY()     // Catch: java.lang.Throwable -> L199
            int r2 = r2 - r4
            android.graphics.drawable.Drawable r4 = r1.OU     // Catch: java.lang.Throwable -> L199
            if (r4 == 0) goto L88
            android.graphics.drawable.Drawable r4 = r1.OU     // Catch: java.lang.Throwable -> L199
            int r4 = r4.getIntrinsicWidth()     // Catch: java.lang.Throwable -> L199
            android.graphics.drawable.Drawable r5 = r1.OU     // Catch: java.lang.Throwable -> L199
            int r5 = r5.getIntrinsicHeight()     // Catch: java.lang.Throwable -> L199
            int r6 = r16.getWidth()     // Catch: java.lang.Throwable -> L199
            android.graphics.Rect r7 = r1.OW     // Catch: java.lang.Throwable -> L199
            int r7 = r7.width()     // Catch: java.lang.Throwable -> L199
            int r6 = r6 - r7
            int r6 = r6 - r4
            int r7 = r1.OV     // Catch: java.lang.Throwable -> L199
            int r6 = r6 - r7
            int r6 = r6 / 2
            android.graphics.drawable.Drawable r7 = r1.OU     // Catch: java.lang.Throwable -> L199
            int r8 = r16.getHeight()     // Catch: java.lang.Throwable -> L199
            int r8 = r8 - r5
            int r8 = r8 / 2
            int r4 = r4 + r6
            int r9 = r16.getHeight()     // Catch: java.lang.Throwable -> L199
            int r9 = r9 + r5
            int r9 = r9 / 2
            r7.setBounds(r6, r8, r4, r9)     // Catch: java.lang.Throwable -> L199
            android.graphics.drawable.Drawable r5 = r1.OU     // Catch: java.lang.Throwable -> L199
            r5.draw(r0)     // Catch: java.lang.Throwable -> L199
            int r5 = r1.OV     // Catch: java.lang.Throwable -> L199
            int r4 = r4 + r5
            goto L95
        L88:
            int r4 = r16.getWidth()     // Catch: java.lang.Throwable -> L199
            int r4 = r4 / 2
            android.graphics.Rect r5 = r1.OW     // Catch: java.lang.Throwable -> L199
            int r5 = r5.centerX()     // Catch: java.lang.Throwable -> L199
            int r4 = r4 - r5
        L95:
            int[] r5 = r1.OX     // Catch: java.lang.Throwable -> L199
            if (r5 == 0) goto L10b
            int r5 = r16.getProgress()     // Catch: java.lang.Throwable -> L199
            float r5 = (float) r5     // Catch: java.lang.Throwable -> L199
            r6 = 1065353216(0x3f800000, float:1.0)
            float r5 = r5 * r6
            int r7 = r16.getMax()     // Catch: java.lang.Throwable -> L199
            float r7 = (float) r7     // Catch: java.lang.Throwable -> L199
            float r5 = r5 / r7
            int r7 = r16.getWidth()     // Catch: java.lang.Throwable -> L199
            float r7 = (float) r7     // Catch: java.lang.Throwable -> L199
            float r5 = r5 * r7
            float r15 = (float) r4     // Catch: java.lang.Throwable -> L199
            int r7 = (r5 > r15 ? 1 : (r5 == r15 ? 0 : -1))
            if (r7 < 0) goto Lfb
            android.graphics.LinearGradient r7 = r1.ON     // Catch: java.lang.Throwable -> L199
            if (r7 != 0) goto Ldc
            android.graphics.LinearGradient r14 = new android.graphics.LinearGradient     // Catch: java.lang.Throwable -> L199
            r9 = 0
            android.graphics.Rect r7 = r1.OW     // Catch: java.lang.Throwable -> L199
            int r7 = r7.width()     // Catch: java.lang.Throwable -> L199
            int r4 = r4 + r7
            float r10 = (float) r4     // Catch: java.lang.Throwable -> L199
            r11 = 0
            int[] r12 = r1.OX     // Catch: java.lang.Throwable -> L199
            r13 = 0
            android.graphics.Shader$TileMode r4 = android.graphics.Shader.TileMode.CLAMP     // Catch: java.lang.Throwable -> L199
            r7 = r14
            r8 = r15
            r3 = r14
            r14 = r4
            r7.<init>(r8, r9, r10, r11, r12, r13, r14)     // Catch: java.lang.Throwable -> L199
            r1.ON = r3     // Catch: java.lang.Throwable -> L199
            android.graphics.Matrix r3 = new android.graphics.Matrix     // Catch: java.lang.Throwable -> L199
            r3.<init>()     // Catch: java.lang.Throwable -> L199
            r1.OO = r3     // Catch: java.lang.Throwable -> L199
            android.graphics.LinearGradient r4 = r1.ON     // Catch: java.lang.Throwable -> L199
            r4.setLocalMatrix(r3)     // Catch: java.lang.Throwable -> L199
        Ldc:
            android.graphics.Paint r3 = r1.mPaint     // Catch: java.lang.Throwable -> L199
            android.graphics.LinearGradient r4 = r1.ON     // Catch: java.lang.Throwable -> L199
            r3.setShader(r4)     // Catch: java.lang.Throwable -> L199
            float r5 = r5 - r15
            float r5 = r5 * r6
            android.graphics.Rect r3 = r1.OW     // Catch: java.lang.Throwable -> L199
            int r3 = r3.width()     // Catch: java.lang.Throwable -> L199
            float r3 = (float) r3     // Catch: java.lang.Throwable -> L199
            float r5 = r5 / r3
            android.graphics.Matrix r3 = r1.OO     // Catch: java.lang.Throwable -> L199
            r4 = 0
            r3.setScale(r5, r6, r15, r4)     // Catch: java.lang.Throwable -> L199
            android.graphics.LinearGradient r3 = r1.ON     // Catch: java.lang.Throwable -> L199
            android.graphics.Matrix r4 = r1.OO     // Catch: java.lang.Throwable -> L199
            r3.setLocalMatrix(r4)     // Catch: java.lang.Throwable -> L199
            goto L101
        Lfb:
            android.graphics.Paint r3 = r1.mPaint     // Catch: java.lang.Throwable -> L199
            r4 = 0
            r3.setShader(r4)     // Catch: java.lang.Throwable -> L199
        L101:
            java.lang.String r3 = r1.OM     // Catch: java.lang.Throwable -> L199
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L199
            android.graphics.Paint r4 = r1.mPaint     // Catch: java.lang.Throwable -> L199
            r0.drawText(r3, r15, r2, r4)     // Catch: java.lang.Throwable -> L199
            monitor-exit(r16)
            return
        L10b:
            boolean r3 = r16.isIndeterminate()     // Catch: java.lang.Throwable -> L199
            if (r3 != 0) goto L12c
            boolean r3 = r1.Pa     // Catch: java.lang.Throwable -> L199
            if (r3 == 0) goto L116
            goto L12c
        L116:
            android.graphics.Paint r3 = r1.mPaint     // Catch: java.lang.Throwable -> L199
            int r5 = r1.OY     // Catch: java.lang.Throwable -> L199
            r3.setColor(r5)     // Catch: java.lang.Throwable -> L199
            java.lang.String r3 = r1.OM     // Catch: java.lang.Throwable -> L199
            if (r3 == 0) goto L12a
            java.lang.String r3 = r1.OM     // Catch: java.lang.Throwable -> L199
            float r4 = (float) r4     // Catch: java.lang.Throwable -> L199
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L199
            android.graphics.Paint r5 = r1.mPaint     // Catch: java.lang.Throwable -> L199
            r0.drawText(r3, r4, r2, r5)     // Catch: java.lang.Throwable -> L199
        L12a:
            monitor-exit(r16)
            return
        L12c:
            int r3 = r16.getWidth()     // Catch: java.lang.Throwable -> L199
            int r5 = r16.getProgress()     // Catch: java.lang.Throwable -> L199
            int r3 = r3 * r5
            float r3 = (float) r3     // Catch: java.lang.Throwable -> L199
            int r5 = r16.getMax()     // Catch: java.lang.Throwable -> L199
            float r5 = (float) r5     // Catch: java.lang.Throwable -> L199
            float r3 = r3 / r5
            int r5 = r17.save()     // Catch: java.lang.Throwable -> L199
            android.graphics.RectF r6 = r1.mRectF     // Catch: java.lang.Throwable -> L199
            int r7 = r16.getWidth()     // Catch: java.lang.Throwable -> L199
            float r7 = (float) r7     // Catch: java.lang.Throwable -> L199
            int r8 = r16.getHeight()     // Catch: java.lang.Throwable -> L199
            float r8 = (float) r8     // Catch: java.lang.Throwable -> L199
            r9 = 0
            r6.set(r3, r9, r7, r8)     // Catch: java.lang.Throwable -> L199
            android.graphics.RectF r6 = r1.mRectF     // Catch: java.lang.Throwable -> L199
            r0.clipRect(r6)     // Catch: java.lang.Throwable -> L199
            android.graphics.Paint r6 = r1.mPaint     // Catch: java.lang.Throwable -> L199
            int r7 = r1.OZ     // Catch: java.lang.Throwable -> L199
            r6.setColor(r7)     // Catch: java.lang.Throwable -> L199
            java.lang.String r6 = r1.OM     // Catch: java.lang.Throwable -> L199
            if (r6 == 0) goto L169
            java.lang.String r6 = r1.OM     // Catch: java.lang.Throwable -> L199
            float r7 = (float) r4     // Catch: java.lang.Throwable -> L199
            float r8 = (float) r2     // Catch: java.lang.Throwable -> L199
            android.graphics.Paint r9 = r1.mPaint     // Catch: java.lang.Throwable -> L199
            r0.drawText(r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L199
        L169:
            r0.restoreToCount(r5)     // Catch: java.lang.Throwable -> L199
            int r5 = r17.save()     // Catch: java.lang.Throwable -> L199
            android.graphics.RectF r6 = r1.mRectF     // Catch: java.lang.Throwable -> L199
            int r7 = r16.getHeight()     // Catch: java.lang.Throwable -> L199
            float r7 = (float) r7     // Catch: java.lang.Throwable -> L199
            r8 = 0
            r6.set(r8, r8, r3, r7)     // Catch: java.lang.Throwable -> L199
            android.graphics.RectF r3 = r1.mRectF     // Catch: java.lang.Throwable -> L199
            r0.clipRect(r3)     // Catch: java.lang.Throwable -> L199
            android.graphics.Paint r3 = r1.mPaint     // Catch: java.lang.Throwable -> L199
            int r6 = r1.OY     // Catch: java.lang.Throwable -> L199
            r3.setColor(r6)     // Catch: java.lang.Throwable -> L199
            java.lang.String r3 = r1.OM     // Catch: java.lang.Throwable -> L199
            if (r3 == 0) goto L194
            java.lang.String r3 = r1.OM     // Catch: java.lang.Throwable -> L199
            float r4 = (float) r4     // Catch: java.lang.Throwable -> L199
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L199
            android.graphics.Paint r6 = r1.mPaint     // Catch: java.lang.Throwable -> L199
            r0.drawText(r3, r4, r2, r6)     // Catch: java.lang.Throwable -> L199
        L194:
            r0.restoreToCount(r5)     // Catch: java.lang.Throwable -> L199
            monitor-exit(r16)
            return
        L199:
            r0 = move-exception
            monitor-exit(r16)
            throw r0
    }

    @Override
    protected synchronized void onMeasure(int r7, int r8) {
            r6 = this;
            monitor-enter(r6)
            android.view.ViewGroup$LayoutParams r0 = r6.getLayoutParams()     // Catch: java.lang.Throwable -> L64
            if (r0 == 0) goto L4b
            java.lang.String r1 = r6.OM     // Catch: java.lang.Throwable -> L64
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L64
            if (r1 != 0) goto L4b
            android.graphics.Rect r1 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L64
            r1.<init>()     // Catch: java.lang.Throwable -> L64
            android.graphics.Paint r2 = r6.mPaint     // Catch: java.lang.Throwable -> L64
            java.lang.String r3 = r6.OM     // Catch: java.lang.Throwable -> L64
            r4 = 0
            java.lang.String r5 = r6.OM     // Catch: java.lang.Throwable -> L64
            int r5 = r5.length()     // Catch: java.lang.Throwable -> L64
            r2.getTextBounds(r3, r4, r5, r1)     // Catch: java.lang.Throwable -> L64
            int r2 = r0.width     // Catch: java.lang.Throwable -> L64
            r3 = 1073741824(0x40000000, float:2.0)
            r4 = -2
            if (r2 != r4) goto L3b
            int r7 = r1.width()     // Catch: java.lang.Throwable -> L64
            int r2 = r6.OS     // Catch: java.lang.Throwable -> L64
            int r7 = r7 + r2
            int r2 = r6.OT     // Catch: java.lang.Throwable -> L64
            int r7 = r7 + r2
            r0.width = r7     // Catch: java.lang.Throwable -> L64
            int r7 = r0.width     // Catch: java.lang.Throwable -> L64
            int r7 = android.view.View.MeasureSpec.makeMeasureSpec(r7, r3)     // Catch: java.lang.Throwable -> L64
        L3b:
            int r2 = r0.height     // Catch: java.lang.Throwable -> L64
            if (r2 != r4) goto L4b
            int r8 = r1.height()     // Catch: java.lang.Throwable -> L64
            r0.height = r8     // Catch: java.lang.Throwable -> L64
            int r8 = r0.height     // Catch: java.lang.Throwable -> L64
            int r8 = android.view.View.MeasureSpec.makeMeasureSpec(r8, r3)     // Catch: java.lang.Throwable -> L64
        L4b:
            boolean r0 = r6.OQ     // Catch: java.lang.Throwable -> L64
            if (r0 == 0) goto L5f
            super.onMeasure(r8, r7)     // Catch: java.lang.Throwable -> L64
            int r7 = r6.getMeasuredHeight()     // Catch: java.lang.Throwable -> L64
            int r8 = r6.getMeasuredWidth()     // Catch: java.lang.Throwable -> L64
            r6.setMeasuredDimension(r7, r8)     // Catch: java.lang.Throwable -> L64
            monitor-exit(r6)
            return
        L5f:
            super.onMeasure(r7, r8)     // Catch: java.lang.Throwable -> L64
            monitor-exit(r6)
            return
        L64:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    @Override
    protected void onSizeChanged(int r2, int r3, int r4, int r5) {
            r1 = this;
            boolean r0 = r1.OQ
            if (r0 == 0) goto L8
            super.onSizeChanged(r3, r2, r4, r5)
            return
        L8:
            super.onSizeChanged(r2, r3, r4, r5)
            return
    }

    public void setDrawableLeft(android.graphics.drawable.Drawable r1) {
            r0 = this;
            r0.OU = r1
            return
    }

    public void setDrawablePadding(int r1) {
            r0 = this;
            r0.OV = r1
            return
    }

    public void setHasProgress(boolean r1) {
            r0 = this;
            r0.OR = r1
            return
    }

    @Override
    public void setPadding(int r1, int r2, int r3, int r4) {
            r0 = this;
            r0.OS = r1
            r0.OT = r3
            return
    }

    @Override
    public void setProgress(int r2) {
            r1 = this;
            boolean r0 = r1.OR
            if (r0 == 0) goto L8
            super.setProgress(r2)
            return
        L8:
            r2 = 0
            super.setProgress(r2)
            return
    }

    public void setTextColor(int r2) {
            r1 = this;
            r0 = 0
            r1.Pa = r0
            r1.OY = r2
            r1.postInvalidate()
            return
    }

    public final void setTextColor(int r2, int r3) {
            r1 = this;
            r0 = 1
            r1.Pa = r0
            r1.OY = r2
            r1.OZ = r3
            r1.postInvalidate()
            return
    }

    public void setTextDimen(float r2) {
            r1 = this;
            android.graphics.Paint r0 = r1.mPaint
            r0.setTextSize(r2)
            return
    }

    public void setTextDimenSp(int r4) {
            r3 = this;
            android.graphics.Paint r0 = r3.mPaint
            float r4 = (float) r4
            android.content.res.Resources r1 = r3.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            r2 = 2
            float r4 = android.util.TypedValue.applyDimension(r2, r4, r1)
            r0.setTextSize(r4)
            return
    }

    public void setVertical(boolean r1) {
            r0 = this;
            r0.OQ = r1
            return
    }
}
