package com.kwad.components.ad.reward.widget;

public class KSCouponLabelTextView extends android.widget.TextView implements com.kwad.components.core.widget.d {
    private final android.graphics.RectF AA;
    private final android.graphics.Path AB;
    private android.graphics.Path AC;
    private android.graphics.Path AE;
    private boolean AF;
    private final android.graphics.Rect Aq;
    private final android.graphics.RectF Ar;
    private final android.graphics.RectF Au;
    private float Aw;
    private float Ax;
    private float Ay;
    private final android.graphics.RectF Az;
    private final android.graphics.Paint mPaint;
    private int strokeColor;

    public KSCouponLabelTextView(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>()
            r2.mPaint = r0
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r2.Aq = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r2.Ar = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r2.Az = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r2.AA = r0
            android.graphics.Path r0 = new android.graphics.Path
            r0.<init>()
            r2.AB = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r2.Au = r0
            r0 = 1
            r2.AF = r0
            r0 = 0
            r1 = 0
            r2.a(r3, r0, r1)
            return
    }

    public KSCouponLabelTextView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r1.<init>(r2, r3)
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>()
            r1.mPaint = r0
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r1.Aq = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r1.Ar = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r1.Az = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r1.AA = r0
            android.graphics.Path r0 = new android.graphics.Path
            r0.<init>()
            r1.AB = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r1.Au = r0
            r0 = 1
            r1.AF = r0
            r0 = 0
            r1.a(r2, r3, r0)
            return
    }

    public KSCouponLabelTextView(android.content.Context r2, android.util.AttributeSet r3, int r4) {
            r1 = this;
            r1.<init>(r2, r3, r4)
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>()
            r1.mPaint = r0
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r1.Aq = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r1.Ar = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r1.Az = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r1.AA = r0
            android.graphics.Path r0 = new android.graphics.Path
            r0.<init>()
            r1.AB = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r1.Au = r0
            r0 = 1
            r1.AF = r0
            r1.a(r2, r3, r4)
            return
    }

    private void a(android.content.Context r3, android.util.AttributeSet r4, int r5) {
            r2 = this;
            int[] r0 = com.kwad.sdk.R.styleable.ksad_KSCouponLabelTextView
            r1 = 0
            android.content.res.TypedArray r4 = r3.obtainStyledAttributes(r4, r0, r5, r1)
            android.content.res.Resources r3 = r3.getResources()
            int r5 = com.kwad.sdk.R.color.ksad_reward_main_color
            int r3 = r3.getColor(r5)
            int r5 = com.kwad.sdk.R.styleable.ksad_KSCouponLabelTextView_ksad_labelRadius
            r0 = 1090519040(0x41000000, float:8.0)
            float r5 = r4.getDimension(r5, r0)
            r2.Aw = r5
            int r5 = com.kwad.sdk.R.styleable.ksad_KSCouponLabelTextView_ksad_strokeSize
            r0 = 1073741824(0x40000000, float:2.0)
            float r5 = r4.getDimension(r5, r0)
            r2.Ax = r5
            int r5 = com.kwad.sdk.R.styleable.ksad_KSCouponLabelTextView_ksad_strokeColor
            int r3 = r4.getColor(r5, r3)
            r2.strokeColor = r3
            int r3 = com.kwad.sdk.R.styleable.ksad_KSCouponLabelTextView_ksad_sideRadius
            r5 = 1098907648(0x41800000, float:16.0)
            float r3 = r4.getDimension(r3, r5)
            r2.Ay = r3
            r4.recycle()
            r2.ki()
            return
    }

    private void a(android.graphics.Path r3, android.graphics.Path r4, android.graphics.Path r5, android.graphics.RectF r6, android.graphics.RectF r7, android.graphics.RectF r8) {
            r2 = this;
            r3.reset()
            float r0 = r2.Aw
            android.graphics.Path$Direction r1 = android.graphics.Path.Direction.CW
            r3.addRoundRect(r6, r0, r0, r1)
            r6 = 1119092736(0x42b40000, float:90.0)
            r0 = -1020002304(0xffffffffc3340000, float:-180.0)
            r4.addArc(r7, r6, r0)
            r4 = 1127481344(0x43340000, float:180.0)
            r5.addArc(r8, r6, r4)
            android.graphics.Path r4 = r2.AC
            android.graphics.Path$Op r5 = android.graphics.Path.Op.DIFFERENCE
            r3.op(r4, r5)
            android.graphics.Path r4 = r2.AE
            android.graphics.Path$Op r5 = android.graphics.Path.Op.DIFFERENCE
            r3.op(r4, r5)
            return
    }

    private void a(android.graphics.RectF r4, android.graphics.RectF r5) {
            r3 = this;
            r5.set(r4)
            float r0 = r5.left
            float r1 = r3.Ay
            float r0 = r0 - r1
            r5.left = r0
            float r0 = r5.left
            float r1 = r3.Ay
            r2 = 1073741824(0x40000000, float:2.0)
            float r1 = r1 * r2
            float r0 = r0 + r1
            r5.right = r0
            float r4 = r4.height()
            float r0 = r3.Ay
            float r0 = r0 * r2
            float r4 = r4 - r0
            float r4 = r4 / r2
            float r0 = r5.top
            float r0 = r0 + r4
            r5.top = r0
            float r4 = r5.top
            float r0 = r3.Ay
            float r0 = r0 * r2
            float r4 = r4 + r0
            r5.bottom = r4
            return
    }

    private void b(android.graphics.Path r6, android.graphics.RectF r7, android.graphics.RectF r8, android.graphics.RectF r9) {
            r5 = this;
            r6.reset()
            float r0 = r7.left
            float r1 = r7.top
            float r2 = r5.Aw
            float r1 = r1 + r2
            r6.moveTo(r0, r1)
            android.graphics.RectF r0 = r5.Au
            r0.set(r7)
            android.graphics.RectF r0 = r5.Au
            float r1 = r0.top
            float r2 = r5.Aw
            r3 = 1073741824(0x40000000, float:2.0)
            float r2 = r2 * r3
            float r1 = r1 + r2
            r0.bottom = r1
            android.graphics.RectF r0 = r5.Au
            float r1 = r0.left
            float r2 = r5.Aw
            float r2 = r2 * r3
            float r1 = r1 + r2
            r0.right = r1
            android.graphics.RectF r0 = r5.Au
            r1 = 1119092736(0x42b40000, float:90.0)
            r2 = 1127481344(0x43340000, float:180.0)
            r6.arcTo(r0, r2, r1)
            float r0 = r7.width()
            float r2 = r5.Aw
            float r0 = r0 - r2
            float r2 = r7.top
            r6.lineTo(r0, r2)
            android.graphics.RectF r0 = r5.Au
            r0.set(r7)
            android.graphics.RectF r0 = r5.Au
            float r2 = r0.right
            float r4 = r5.Aw
            float r4 = r4 * r3
            float r2 = r2 - r4
            r0.left = r2
            android.graphics.RectF r0 = r5.Au
            float r2 = r0.top
            float r4 = r5.Aw
            float r4 = r4 * r3
            float r2 = r2 + r4
            r0.bottom = r2
            android.graphics.RectF r0 = r5.Au
            r2 = 1132920832(0x43870000, float:270.0)
            r6.arcTo(r0, r2, r1)
            float r0 = r7.right
            float r4 = r9.top
            r6.lineTo(r0, r4)
            r0 = -1020002304(0xffffffffc3340000, float:-180.0)
            r6.arcTo(r9, r2, r0)
            float r9 = r7.right
            float r2 = r7.bottom
            float r4 = r5.Aw
            float r2 = r2 - r4
            r6.lineTo(r9, r2)
            android.graphics.RectF r9 = r5.Au
            r9.set(r7)
            android.graphics.RectF r9 = r5.Au
            float r2 = r9.right
            float r4 = r5.Aw
            float r4 = r4 * r3
            float r2 = r2 - r4
            r9.left = r2
            android.graphics.RectF r9 = r5.Au
            float r2 = r9.bottom
            float r4 = r5.Aw
            float r4 = r4 * r3
            float r2 = r2 - r4
            r9.top = r2
            android.graphics.RectF r9 = r5.Au
            r2 = 0
            r6.arcTo(r9, r2, r1)
            float r9 = r7.left
            float r2 = r5.Aw
            float r9 = r9 + r2
            float r2 = r7.bottom
            r6.lineTo(r9, r2)
            android.graphics.RectF r9 = r5.Au
            r9.set(r7)
            android.graphics.RectF r9 = r5.Au
            float r2 = r9.left
            float r4 = r5.Aw
            float r4 = r4 * r3
            float r2 = r2 + r4
            r9.right = r2
            android.graphics.RectF r9 = r5.Au
            float r2 = r9.bottom
            float r4 = r5.Aw
            float r4 = r4 * r3
            float r2 = r2 - r4
            r9.top = r2
            android.graphics.RectF r9 = r5.Au
            r6.arcTo(r9, r1, r1)
            float r7 = r7.left
            float r9 = r8.bottom
            r6.lineTo(r7, r9)
            r6.arcTo(r8, r1, r0)
            r6.close()
            return
    }

    private void b(android.graphics.RectF r4, android.graphics.RectF r5) {
            r3 = this;
            r5.set(r4)
            float r0 = r5.right
            float r1 = r3.Ay
            float r0 = r0 + r1
            r5.right = r0
            float r0 = r5.right
            float r1 = r3.Ay
            r2 = 1073741824(0x40000000, float:2.0)
            float r1 = r1 * r2
            float r0 = r0 - r1
            r5.left = r0
            float r4 = r4.height()
            float r0 = r3.Ay
            float r0 = r0 * r2
            float r4 = r4 - r0
            float r4 = r4 / r2
            float r0 = r5.top
            float r0 = r0 + r4
            r5.top = r0
            float r4 = r5.top
            float r0 = r3.Ay
            float r0 = r0 * r2
            float r4 = r4 + r0
            r5.bottom = r4
            return
    }

    private void ki() {
            r2 = this;
            android.graphics.Paint r0 = r2.mPaint
            int r1 = r2.strokeColor
            r0.setColor(r1)
            android.graphics.Paint r0 = r2.mPaint
            float r1 = r2.Ax
            r0.setStrokeWidth(r1)
            android.graphics.Paint r0 = r2.mPaint
            android.graphics.Paint$Style r1 = android.graphics.Paint.Style.STROKE
            r0.setStyle(r1)
            android.graphics.Paint r0 = r2.mPaint
            r1 = 1
            r0.setAntiAlias(r1)
            return
    }

    @Override
    public final void a(com.kwad.components.core.widget.e r2) {
            r1 = this;
            android.content.res.Resources r2 = r1.getResources()
            int r0 = com.kwad.sdk.R.color.ksad_reward_main_color
            int r2 = r2.getColor(r0)
            r1.strokeColor = r2
            r1.setTextColor(r2)
            r1.ki()
            r1.invalidate()
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r9) {
            r8 = this;
            super.onDraw(r9)
            android.graphics.Rect r0 = r8.Aq
            r0.setEmpty()
            android.graphics.Rect r0 = r8.Aq
            r8.getDrawingRect(r0)
            float r0 = r8.Ax
            r1 = 1073741824(0x40000000, float:2.0)
            float r0 = r0 / r1
            android.graphics.RectF r1 = r8.Ar
            android.graphics.Rect r2 = r8.Aq
            r1.set(r2)
            android.graphics.RectF r1 = r8.Ar
            float r2 = r1.left
            float r2 = r2 + r0
            r1.left = r2
            android.graphics.RectF r1 = r8.Ar
            float r2 = r1.top
            float r2 = r2 + r0
            r1.top = r2
            android.graphics.RectF r1 = r8.Ar
            float r2 = r1.right
            float r2 = r2 - r0
            r1.right = r2
            android.graphics.RectF r1 = r8.Ar
            float r2 = r1.bottom
            float r2 = r2 - r0
            r1.bottom = r2
            android.graphics.RectF r0 = r8.Ar
            android.graphics.RectF r1 = r8.Az
            r8.a(r0, r1)
            android.graphics.RectF r0 = r8.Ar
            android.graphics.RectF r1 = r8.AA
            r8.b(r0, r1)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L7f
            android.graphics.Path r0 = r8.AC
            if (r0 != 0) goto L55
            android.graphics.Path r0 = new android.graphics.Path
            r0.<init>()
            r8.AC = r0
            goto L58
        L55:
            r0.reset()
        L58:
            android.graphics.Path r0 = r8.AE
            if (r0 != 0) goto L64
            android.graphics.Path r0 = new android.graphics.Path
            r0.<init>()
            r8.AE = r0
            goto L67
        L64:
            r0.reset()
        L67:
            android.graphics.Path r2 = r8.AB
            android.graphics.Path r3 = r8.AC
            android.graphics.Path r4 = r8.AE
            android.graphics.RectF r5 = r8.Ar
            android.graphics.RectF r6 = r8.Az
            android.graphics.RectF r7 = r8.AA
            r1 = r8
            r1.a(r2, r3, r4, r5, r6, r7)
        L77:
            android.graphics.Path r0 = r8.AB
            android.graphics.Paint r1 = r8.mPaint
            r9.drawPath(r0, r1)
            return
        L7f:
            android.graphics.Path r0 = r8.AB
            android.graphics.RectF r1 = r8.Ar
            android.graphics.RectF r2 = r8.Az
            android.graphics.RectF r3 = r8.AA
            r8.b(r0, r1, r2, r3)
            goto L77
    }

    @Override
    protected void onMeasure(int r3, int r4) {
            r2 = this;
            super.onMeasure(r3, r4)
            boolean r3 = r2.AF
            if (r3 == 0) goto L35
            int r3 = r2.getMeasuredWidth()
            android.text.TextPaint r4 = r2.getPaint()
            java.lang.CharSequence r0 = r2.getText()
            java.lang.String r0 = r0.toString()
            float r4 = r4.measureText(r0)
            int r0 = r2.getPaddingLeft()
            int r1 = r2.getPaddingRight()
            int r0 = r0 + r1
            float r0 = (float) r0
            float r0 = r0 + r4
            float r3 = (float) r3
            int r3 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r3 > 0) goto L2d
            r3 = 1
            goto L2e
        L2d:
            r3 = 0
        L2e:
            if (r3 != 0) goto L35
            r3 = 8
            r2.setVisibility(r3)
        L35:
            return
    }
}
