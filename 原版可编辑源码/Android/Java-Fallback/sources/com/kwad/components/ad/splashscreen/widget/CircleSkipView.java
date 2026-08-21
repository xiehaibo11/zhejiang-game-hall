package com.kwad.components.ad.splashscreen.widget;

public class CircleSkipView extends com.kwad.sdk.widget.KSFrameLayout implements com.kwad.components.ad.splashscreen.widget.a {
    private float ER;
    private float ES;
    private int ET;
    private android.animation.ValueAnimator EU;
    private boolean EV;
    private com.kwad.components.ad.splashscreen.widget.SkipView.a EW;
    private long EX;
    private float EY;
    private android.graphics.Paint mPaint;
    private android.graphics.RectF mRectF;
    private int padding;
    private int radius;
    private boolean sy;




    public CircleSkipView(android.content.Context r3) {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r3, r0, r1)
            return
    }

    public CircleSkipView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public CircleSkipView(android.content.Context r3, android.util.AttributeSet r4, int r5) {
            r2 = this;
            r2.<init>(r3, r4, r5)
            android.graphics.Paint r4 = new android.graphics.Paint
            r4.<init>()
            r2.mPaint = r4
            r4 = 1132920832(0x43870000, float:270.0)
            r2.ER = r4
            r4 = 1135869952(0x43b40000, float:360.0)
            r2.ES = r4
            r4 = 0
            r2.radius = r4
            r2.ET = r4
            r2.EV = r4
            r0 = 0
            r2.EX = r0
            r5 = 0
            r2.EY = r5
            r2.padding = r4
            r4 = 1
            r2.sy = r4
            r2.W(r3)
            return
    }

    private void W(android.content.Context r3) {
            r2 = this;
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r1 = -2
            r0.<init>(r1, r1)
            r1 = 17
            r0.gravity = r1
            r2.X(r3)
            android.widget.TextView r3 = Y(r3)
            r2.addView(r3, r0)
            com.kwad.components.ad.splashscreen.widget.CircleSkipView$1 r3 = new com.kwad.components.ad.splashscreen.widget.CircleSkipView$1
            r3.<init>(r2)
            r2.setOnClickListener(r3)
            return
    }

    private void X(android.content.Context r6) {
            r5 = this;
            r0 = 1073741824(0x40000000, float:2.0)
            int r0 = com.kwad.sdk.d.a.a.a(r6, r0)
            r5.ET = r0
            r0 = 1107296256(0x42000000, float:32.0)
            int r6 = com.kwad.sdk.d.a.a.a(r6, r0)
            int r0 = r5.ET
            int r6 = r6 - r0
            r5.radius = r6
            int r0 = r0 / 2
            r5.padding = r0
            android.graphics.RectF r6 = new android.graphics.RectF
            int r0 = r5.padding
            float r1 = (float) r0
            float r2 = (float) r0
            int r3 = r5.radius
            int r4 = r3 + r0
            float r4 = (float) r4
            int r3 = r3 + r0
            float r0 = (float) r3
            r6.<init>(r1, r2, r4, r0)
            r5.mRectF = r6
            return
    }

    private static android.widget.TextView Y(android.content.Context r2) {
            android.widget.TextView r0 = new android.widget.TextView
            r0.<init>(r2)
            int r1 = com.kwad.sdk.R.string.ksad_skip_text
            java.lang.String r2 = r2.getString(r1)
            r0.setText(r2)
            r2 = -1
            r0.setTextColor(r2)
            r2 = 1094713344(0x41400000, float:12.0)
            r0.setTextSize(r2)
            return r0
    }

    private void Y(int r2) {
            r1 = this;
            com.kwad.components.ad.splashscreen.widget.SkipView$a r0 = r1.EW
            if (r0 == 0) goto L7
            r0.Z(r2)
        L7:
            return
    }

    static float a(com.kwad.components.ad.splashscreen.widget.CircleSkipView r0, float r1) {
            r0.EY = r1
            return r1
    }

    static com.kwad.components.ad.splashscreen.widget.SkipView.a a(com.kwad.components.ad.splashscreen.widget.CircleSkipView r0) {
            com.kwad.components.ad.splashscreen.widget.SkipView$a r0 = r0.EW
            return r0
    }

    static void a(com.kwad.components.ad.splashscreen.widget.CircleSkipView r0, int r1) {
            r0.Y(r1)
            return
    }

    static boolean a(com.kwad.components.ad.splashscreen.widget.CircleSkipView r0, boolean r1) {
            r1 = 1
            r0.EV = r1
            return r1
    }

    static float b(com.kwad.components.ad.splashscreen.widget.CircleSkipView r0) {
            float r0 = r0.EY
            return r0
    }

    static float b(com.kwad.components.ad.splashscreen.widget.CircleSkipView r0, float r1) {
            r0.ER = r1
            return r1
    }

    static float c(com.kwad.components.ad.splashscreen.widget.CircleSkipView r0, float r1) {
            r0.ES = r1
            return r1
    }

    private void c(int r4, boolean r5) {
            r3 = this;
            r0 = 2
            float[] r0 = new float[r0]
            r0 = {x0030: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            android.animation.ValueAnimator r0 = android.animation.ValueAnimator.ofFloat(r0)
            r3.EU = r0
            long r1 = (long) r4
            r0.setDuration(r1)
            android.animation.ValueAnimator r0 = r3.EU
            android.view.animation.LinearInterpolator r1 = new android.view.animation.LinearInterpolator
            r1.<init>()
            r0.setInterpolator(r1)
            android.animation.ValueAnimator r0 = r3.EU
            com.kwad.components.ad.splashscreen.widget.CircleSkipView$2 r1 = new com.kwad.components.ad.splashscreen.widget.CircleSkipView$2
            r1.<init>(r3)
            r0.addListener(r1)
            android.animation.ValueAnimator r0 = r3.EU
            com.kwad.components.ad.splashscreen.widget.CircleSkipView$3 r1 = new com.kwad.components.ad.splashscreen.widget.CircleSkipView$3
            r1.<init>(r3, r4, r5)
            r0.addUpdateListener(r1)
            return
    }

    private void lC() {
            r3 = this;
            r0 = 1
            r3.EV = r0
            android.animation.ValueAnimator r0 = r3.EU
            if (r0 == 0) goto L11
            long r1 = r3.EX
            r0.setCurrentPlayTime(r1)
            android.animation.ValueAnimator r0 = r3.EU
            r0.start()
        L11:
            return
    }

    private void lD() {
            r2 = this;
            r0 = 0
            r2.EV = r0
            android.animation.ValueAnimator r0 = r2.EU
            if (r0 == 0) goto L12
            long r0 = r0.getCurrentPlayTime()
            r2.EX = r0
            android.animation.ValueAnimator r0 = r2.EU
            r0.cancel()
        L12:
            return
    }

    private void setAnimationPaint(android.graphics.Paint r2) {
            r1 = this;
            r2.reset()
            r0 = 1
            r2.setAntiAlias(r0)
            android.graphics.Paint$Style r0 = android.graphics.Paint.Style.STROKE
            r2.setStyle(r0)
            int r0 = r1.ET
            float r0 = (float) r0
            r2.setStrokeWidth(r0)
            r0 = -1
            r2.setColor(r0)
            return
    }

    private void setBgCirclePaint(android.graphics.Paint r2) {
            r1 = this;
            r2.reset()
            android.graphics.Paint$Style r0 = android.graphics.Paint.Style.FILL
            r2.setStyle(r0)
            java.lang.String r0 = "#4D000000"
            int r0 = android.graphics.Color.parseColor(r0)
            r2.setColor(r0)
            r0 = 1
            r2.setAntiAlias(r0)
            return
    }

    private void setOuterCirclePaint(android.graphics.Paint r2) {
            r1 = this;
            r2.reset()
            android.graphics.Paint$Style r0 = android.graphics.Paint.Style.STROKE
            r2.setStyle(r0)
            int r0 = r1.ET
            float r0 = (float) r0
            r2.setStrokeWidth(r0)
            java.lang.String r0 = "#33FFFFFF"
            int r0 = android.graphics.Color.parseColor(r0)
            r2.setColor(r0)
            r0 = 1
            r2.setAntiAlias(r0)
            return
    }

    @Override
    public final void a(com.kwad.components.ad.splashscreen.local.SplashSkipViewModel r2, com.kwad.sdk.core.response.model.AdInfo r3) {
            r1 = this;
            boolean r0 = com.kwad.sdk.core.response.b.a.ci(r3)
            r1.sy = r0
            boolean r3 = com.kwad.sdk.core.response.b.a.cj(r3)
            boolean r0 = r1.sy
            if (r0 == 0) goto L12
            r0 = 0
            r1.setVisibility(r0)
        L12:
            int r2 = r2.skipSecond
            int r2 = r2 * 1000
            r1.c(r2, r3)
            return
    }

    @Override
    public final int ac(int r3) {
            r2 = this;
            android.view.ViewGroup$LayoutParams r3 = r2.getLayoutParams()
            android.content.Context r0 = r2.getContext()
            r1 = 1108082688(0x420c0000, float:35.0)
            int r0 = com.kwad.sdk.d.a.a.a(r0, r1)
            r3.height = r0
            int r3 = r2.getWidth()
            return r3
    }

    @Override
    public final void bd() {
            r0 = this;
            r0.lD()
            return
    }

    @Override
    public void dispatchDraw(android.graphics.Canvas r8) {
            r7 = this;
            int r0 = r7.getWidth()
            int r1 = r7.getHeight()
            int r0 = java.lang.Math.min(r0, r1)
            float r0 = (float) r0
            r1 = 1073741824(0x40000000, float:2.0)
            float r0 = r0 / r1
            android.graphics.Paint r2 = r7.mPaint
            r7.setBgCirclePaint(r2)
            int r2 = r7.getWidth()
            float r2 = (float) r2
            float r2 = r2 / r1
            int r3 = r7.getHeight()
            float r3 = (float) r3
            float r3 = r3 / r1
            int r1 = r7.ET
            float r1 = (float) r1
            float r0 = r0 - r1
            android.graphics.Paint r1 = r7.mPaint
            r8.drawCircle(r2, r3, r0, r1)
            android.graphics.Paint r0 = r7.mPaint
            r7.setOuterCirclePaint(r0)
            android.graphics.RectF r2 = r7.mRectF
            android.graphics.Paint r6 = r7.mPaint
            r3 = 0
            r4 = 1135869952(0x43b40000, float:360.0)
            r5 = 0
            r1 = r8
            r1.drawArc(r2, r3, r4, r5, r6)
            boolean r0 = r7.EV
            if (r0 == 0) goto L52
            android.graphics.Paint r0 = r7.mPaint
            r7.setAnimationPaint(r0)
            android.graphics.RectF r2 = r7.mRectF
            float r3 = r7.ER
            float r0 = r7.ES
            float r4 = -r0
            r5 = 0
            android.graphics.Paint r6 = r7.mPaint
            r1 = r8
            r1.drawArc(r2, r3, r4, r5, r6)
        L52:
            super.dispatchDraw(r8)
            return
    }

    @Override
    public void setOnViewListener(com.kwad.components.ad.splashscreen.widget.SkipView.a r1) {
            r0 = this;
            r0.EW = r1
            return
    }

    @Override
    public final void w(com.kwad.sdk.core.response.model.AdInfo r1) {
            r0 = this;
            r0.lD()
            return
    }

    @Override
    public final void x(com.kwad.sdk.core.response.model.AdInfo r1) {
            r0 = this;
            r0.lC()
            return
    }
}
