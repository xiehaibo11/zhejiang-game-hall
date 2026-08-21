package com.kwad.components.ad.splashscreen.widget;

public class KsSplashSlidePathView extends android.widget.ImageView {
    private android.graphics.Path Gf;
    private android.graphics.Paint Gg;
    private float Gh;
    private float Gi;
    private float Gj;
    private float Gk;
    private int Gl;
    private com.kwad.components.ad.splashscreen.widget.KsSplashSlidePathView.a Gm;
    private android.view.GestureDetector Gn;


    public interface a {
        void a(float r1, float r2, float r3, float r4);

        void lp();
    }

    public KsSplashSlidePathView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.String r1 = "#66ffffff"
            int r1 = android.graphics.Color.parseColor(r1)
            r0.Gl = r1
            r0.init()
            return
    }

    public KsSplashSlidePathView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.lang.String r1 = "#66ffffff"
            int r1 = android.graphics.Color.parseColor(r1)
            r0.Gl = r1
            r0.init()
            return
    }

    static com.kwad.components.ad.splashscreen.widget.KsSplashSlidePathView.a a(com.kwad.components.ad.splashscreen.widget.KsSplashSlidePathView r0) {
            com.kwad.components.ad.splashscreen.widget.KsSplashSlidePathView$a r0 = r0.Gm
            return r0
    }

    private void b(android.view.MotionEvent r5) {
            r4 = this;
            android.view.GestureDetector r0 = r4.Gn
            boolean r0 = r0.onTouchEvent(r5)
            if (r0 == 0) goto L9
            return
        L9:
            int r0 = r5.getActionMasked()
            if (r0 == 0) goto L41
            r1 = 1
            if (r0 == r1) goto L25
            r1 = 2
            if (r0 == r1) goto L16
            goto L64
        L16:
            float r0 = r5.getX()
            float r5 = r5.getY()
            r4.c(r0, r5)
            r4.invalidate()
            return
        L25:
            android.graphics.Path r0 = r4.Gf
            r0.reset()
            r4.invalidate()
            com.kwad.components.ad.splashscreen.widget.KsSplashSlidePathView$a r0 = r4.Gm
            if (r0 == 0) goto L64
            float r1 = r4.Gh
            float r2 = r4.Gi
            float r3 = r5.getX()
            float r5 = r5.getY()
            r0.a(r1, r2, r3, r5)
            goto L64
        L41:
            android.graphics.Path r0 = r4.Gf
            r0.reset()
            float r0 = r5.getX()
            r4.Gh = r0
            float r5 = r5.getY()
            r4.Gi = r5
            float r0 = r4.Gh
            r4.Gj = r0
            r4.Gk = r5
            android.graphics.Path r1 = r4.Gf
            r1.moveTo(r0, r5)
            r4.invalidate()
            com.kwad.components.ad.splashscreen.widget.KsSplashSlidePathView$a r5 = r4.Gm
            if (r5 == 0) goto L64
        L64:
            return
    }

    private void c(float r7, float r8) {
            r6 = this;
            float r0 = r6.Gj
            float r0 = r7 - r0
            float r0 = java.lang.Math.abs(r0)
            float r1 = r6.Gk
            float r1 = r8 - r1
            float r1 = java.lang.Math.abs(r1)
            r2 = 1077936128(0x40400000, float:3.0)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L1a
            int r0 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
            if (r0 < 0) goto L2f
        L1a:
            android.graphics.Path r0 = r6.Gf
            float r1 = r6.Gj
            float r2 = r6.Gk
            float r3 = r7 + r1
            r4 = 1073741824(0x40000000, float:2.0)
            float r3 = r3 / r4
            float r5 = r8 + r2
            float r5 = r5 / r4
            r0.quadTo(r1, r2, r3, r5)
            r6.Gj = r7
            r6.Gk = r8
        L2f:
            return
    }

    private void init() {
            r3 = this;
            android.graphics.Path r0 = new android.graphics.Path
            r0.<init>()
            r3.Gf = r0
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>()
            r3.Gg = r0
            android.graphics.Paint$Cap r1 = android.graphics.Paint.Cap.ROUND
            r0.setStrokeCap(r1)
            android.graphics.Paint r0 = r3.Gg
            android.content.Context r1 = r3.getContext()
            r2 = 1097859072(0x41700000, float:15.0)
            int r1 = com.kwad.sdk.d.a.a.a(r1, r2)
            float r1 = (float) r1
            r0.setStrokeWidth(r1)
            android.graphics.Paint r0 = r3.Gg
            android.graphics.Paint$Style r1 = android.graphics.Paint.Style.STROKE
            r0.setStyle(r1)
            android.graphics.Paint r0 = r3.Gg
            int r1 = r3.Gl
            r0.setColor(r1)
            android.graphics.Paint r0 = r3.Gg
            r1 = 1
            r0.setDither(r1)
            android.view.GestureDetector r0 = new android.view.GestureDetector
            com.kwad.components.ad.splashscreen.widget.KsSplashSlidePathView$1 r1 = new com.kwad.components.ad.splashscreen.widget.KsSplashSlidePathView$1
            r1.<init>(r3)
            r0.<init>(r1)
            r3.Gn = r0
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r3) {
            r2 = this;
            super.onDraw(r3)
            android.graphics.Path r0 = r2.Gf
            android.graphics.Paint r1 = r2.Gg
            r3.drawPath(r0, r1)
            return
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r1) {
            r0 = this;
            r0.b(r1)
            r1 = 1
            return r1
    }

    public void setOnSlideTouchListener(com.kwad.components.ad.splashscreen.widget.KsSplashSlidePathView.a r1) {
            r0 = this;
            r0.Gm = r1
            return
    }
}
