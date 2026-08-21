package com.kwad.sdk.widget;

public class DividerView extends android.view.View {
    public static int ORIENTATION_HORIZONTAL = 0;
    public static int ORIENTATION_VERTICAL = 1;
    private int aLF;
    private android.graphics.Paint mPaint;
    private int orientation;

    static {
            return
    }

    public DividerView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public DividerView(android.content.Context r6, android.util.AttributeSet r7) {
            r5 = this;
            r5.<init>(r6, r7)
            android.content.res.Resources$Theme r6 = r6.getTheme()
            int[] r0 = com.kwad.sdk.R.styleable.ksad_DividerView
            r1 = 0
            android.content.res.TypedArray r6 = r6.obtainStyledAttributes(r7, r0, r1, r1)
            int r7 = com.kwad.sdk.R.styleable.ksad_DividerView_ksad_dashGap     // Catch: java.lang.Throwable -> L6d
            r0 = 5
            int r7 = r6.getDimensionPixelSize(r7, r0)     // Catch: java.lang.Throwable -> L6d
            int r2 = com.kwad.sdk.R.styleable.ksad_DividerView_ksad_dashLength     // Catch: java.lang.Throwable -> L6d
            int r0 = r6.getDimensionPixelSize(r2, r0)     // Catch: java.lang.Throwable -> L6d
            int r2 = com.kwad.sdk.R.styleable.ksad_DividerView_ksad_dashThickness     // Catch: java.lang.Throwable -> L6d
            r3 = 3
            int r2 = r6.getDimensionPixelSize(r2, r3)     // Catch: java.lang.Throwable -> L6d
            int r3 = com.kwad.sdk.R.styleable.ksad_DividerView_ksad_color     // Catch: java.lang.Throwable -> L6d
            r4 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            int r3 = r6.getColor(r3, r4)     // Catch: java.lang.Throwable -> L6d
            r5.aLF = r3     // Catch: java.lang.Throwable -> L6d
            int r3 = com.kwad.sdk.R.styleable.ksad_DividerView_ksad_orientation     // Catch: java.lang.Throwable -> L6d
            int r4 = com.kwad.sdk.widget.DividerView.ORIENTATION_HORIZONTAL     // Catch: java.lang.Throwable -> L6d
            int r3 = r6.getInt(r3, r4)     // Catch: java.lang.Throwable -> L6d
            r5.orientation = r3     // Catch: java.lang.Throwable -> L6d
            r6.recycle()
            android.graphics.Paint r6 = new android.graphics.Paint
            r6.<init>()
            r5.mPaint = r6
            r3 = 1
            r6.setAntiAlias(r3)
            android.graphics.Paint r6 = r5.mPaint
            int r4 = r5.aLF
            r6.setColor(r4)
            android.graphics.Paint r6 = r5.mPaint
            android.graphics.Paint$Style r4 = android.graphics.Paint.Style.STROKE
            r6.setStyle(r4)
            android.graphics.Paint r6 = r5.mPaint
            float r2 = (float) r2
            r6.setStrokeWidth(r2)
            android.graphics.Paint r6 = r5.mPaint
            android.graphics.DashPathEffect r2 = new android.graphics.DashPathEffect
            r4 = 2
            float[] r4 = new float[r4]
            float r0 = (float) r0
            r4[r1] = r0
            float r7 = (float) r7
            r4[r3] = r7
            r7 = 0
            r2.<init>(r4, r7)
            r6.setPathEffect(r2)
            return
        L6d:
            r7 = move-exception
            r6.recycle()
            throw r7
    }

    @Override
    protected void onDraw(android.graphics.Canvas r10) {
            r9 = this;
            int r0 = r9.orientation
            int r1 = com.kwad.sdk.widget.DividerView.ORIENTATION_HORIZONTAL
            r2 = 1056964608(0x3f000000, float:0.5)
            if (r0 != r1) goto L1d
            int r0 = r9.getHeight()
            float r0 = (float) r0
            float r7 = r0 * r2
            r4 = 0
            int r0 = r9.getWidth()
            float r6 = (float) r0
            android.graphics.Paint r8 = r9.mPaint
            r3 = r10
            r5 = r7
        L19:
            r3.drawLine(r4, r5, r6, r7, r8)
            return
        L1d:
            int r0 = r9.getWidth()
            float r0 = (float) r0
            float r6 = r0 * r2
            r5 = 0
            int r0 = r9.getHeight()
            float r7 = (float) r0
            android.graphics.Paint r8 = r9.mPaint
            r3 = r10
            r4 = r6
            goto L19
    }

    public void setDividerColor(int r2) {
            r1 = this;
            r1.aLF = r2
            android.graphics.Paint r0 = r1.mPaint
            r0.setColor(r2)
            r1.postInvalidate()
            return
    }
}
