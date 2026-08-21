package com.kwad.components.ad.interstitial.aggregate;

public class ViewPagerIndicator extends android.view.View {
    private float iA;
    private float iB;
    private float iC;
    private int iD;
    private android.graphics.Paint iE;
    private float iF;
    private boolean iG;
    private com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator.a iH;
    private android.animation.ValueAnimator iI;
    private int im;
    private int iu;
    private int iv;
    private int iw;
    private float ix;
    private float iy;
    private android.graphics.Paint iz;
    private final android.content.Context mContext;




    public interface a {
        void cs();
    }

    public ViewPagerIndicator(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public ViewPagerIndicator(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public ViewPagerIndicator(android.content.Context r2, android.util.AttributeSet r3, int r4) {
            r1 = this;
            r1.<init>(r2, r3, r4)
            r1.mContext = r2
            r0 = 0
            r1.setWillNotDraw(r0)
            r1.a(r2, r3, r4)
            r1.cw()
            return
    }

    static float a(com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator r0, float r1) {
            r0.iF = r1
            return r1
    }

    static int a(com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator r0, int r1) {
            r0.im = r1
            return r1
    }

    static com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator.a a(com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator r0) {
            com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator$a r0 = r0.iH
            return r0
    }

    private void a(android.content.Context r3, android.util.AttributeSet r4, int r5) {
            r2 = this;
            int[] r0 = com.kwad.sdk.R.styleable.ksad_ViewPagerIndicator
            r1 = 0
            android.content.res.TypedArray r3 = r3.obtainStyledAttributes(r4, r0, r5, r1)
            int r4 = com.kwad.sdk.R.styleable.ksad_ViewPagerIndicator_ksad_dot_distance
            android.content.Context r5 = r2.mContext
            r0 = 1084227584(0x40a00000, float:5.0)
            int r5 = com.kwad.sdk.d.a.a.a(r5, r0)
            float r5 = (float) r5
            float r4 = r3.getDimension(r4, r5)
            r2.iy = r4
            int r4 = com.kwad.sdk.R.styleable.ksad_ViewPagerIndicator_ksad_dot_height
            android.content.Context r5 = r2.mContext
            r0 = 1086324736(0x40c00000, float:6.0)
            int r5 = com.kwad.sdk.d.a.a.a(r5, r0)
            float r5 = (float) r5
            float r4 = r3.getDimension(r4, r5)
            r2.iA = r4
            int r4 = com.kwad.sdk.R.styleable.ksad_ViewPagerIndicator_ksad_dot_selected_width
            android.content.Context r5 = r2.mContext
            r1 = 1112014848(0x42480000, float:50.0)
            int r5 = com.kwad.sdk.d.a.a.a(r5, r1)
            float r5 = (float) r5
            float r4 = r3.getDimension(r4, r5)
            r2.iB = r4
            int r4 = com.kwad.sdk.R.styleable.ksad_ViewPagerIndicator_ksad_dot_unselected_width
            android.content.Context r5 = r2.mContext
            int r5 = com.kwad.sdk.d.a.a.a(r5, r0)
            float r5 = (float) r5
            float r4 = r3.getDimension(r4, r5)
            r2.iC = r4
            int r4 = com.kwad.sdk.R.styleable.ksad_ViewPagerIndicator_ksad_default_color
            android.content.res.Resources r5 = r2.getResources()
            int r0 = com.kwad.sdk.R.color.ksad_88_white
            int r5 = r5.getColor(r0)
            int r4 = r3.getColor(r4, r5)
            r2.iv = r4
            int r4 = com.kwad.sdk.R.styleable.ksad_ViewPagerIndicator_ksad_height_color
            android.content.res.Resources r5 = r2.getResources()
            int r0 = com.kwad.sdk.R.color.ksad_white
            int r5 = r5.getColor(r0)
            int r4 = r3.getColor(r4, r5)
            r2.iu = r4
            r3.recycle()
            return
    }

    private void a(android.graphics.Canvas r9) {
            r8 = this;
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r1 = 0
        L6:
            int r2 = r8.iw
            if (r1 >= r2) goto Lc5
            int r2 = r8.im
            if (r1 >= r2) goto L27
            float r2 = (float) r1
            float r3 = r8.iy
            float r4 = r8.iC
            float r3 = r3 + r4
            float r2 = r2 * r3
        L15:
            r0.left = r2
            float r2 = r0.left
            float r3 = r8.iC
            float r2 = r2 + r3
            r0.right = r2
        L1e:
            android.graphics.Paint r2 = r8.iz
            int r3 = r8.iv
            r2.setColor(r3)
            goto Lab
        L27:
            r3 = 1123942400(0x42fe0000, float:127.0)
            r4 = 1065353216(0x3f800000, float:1.0)
            if (r1 != r2) goto L5d
            float r2 = (float) r1
            float r5 = r8.iy
            float r6 = r8.iC
            float r5 = r5 + r6
            float r2 = r2 * r5
            r0.left = r2
            float r2 = r0.left
            float r5 = r8.iC
            float r2 = r2 + r5
            float r6 = r8.iB
            float r6 = r6 - r5
            float r5 = r8.ix
            float r5 = r4 - r5
            float r6 = r6 * r5
            float r2 = r2 + r6
            r0.right = r2
            boolean r2 = r8.iG
            if (r2 == 0) goto L1e
            android.graphics.Paint r2 = r8.iz
            int r5 = r8.iu
            r2.setColor(r5)
            android.graphics.Paint r2 = r8.iz
            float r5 = r8.ix
            float r4 = r4 - r5
            float r4 = r4 * r3
            float r4 = r4 + r3
            int r3 = (int) r4
        L59:
            r2.setAlpha(r3)
            goto Lab
        L5d:
            int r2 = r2 + 1
            if (r1 != r2) goto L9c
            int r2 = r1 + (-1)
            float r2 = (float) r2
            float r5 = r8.iy
            float r6 = r8.iC
            float r7 = r5 + r6
            float r2 = r2 * r7
            float r2 = r2 + r6
            float r7 = r8.iB
            float r7 = r7 - r6
            float r6 = r8.ix
            float r6 = r4 - r6
            float r7 = r7 * r6
            float r2 = r2 + r7
            float r2 = r2 + r5
            r0.left = r2
            float r2 = r0.left
            float r5 = r8.ix
            float r6 = r8.iB
            float r7 = r8.iC
            float r6 = r6 - r7
            float r5 = r5 * r6
            float r2 = r2 + r5
            float r2 = r2 + r7
            r0.right = r2
            boolean r2 = r8.iG
            if (r2 == 0) goto L1e
            android.graphics.Paint r2 = r8.iz
            int r5 = r8.iu
            r2.setColor(r5)
            android.graphics.Paint r2 = r8.iz
            r5 = 1132396544(0x437f0000, float:255.0)
            float r6 = r8.ix
            float r4 = r4 - r6
            float r4 = r4 * r3
            float r5 = r5 - r4
            int r3 = (int) r5
            goto L59
        L9c:
            int r2 = r1 + (-1)
            float r2 = (float) r2
            float r3 = r8.iy
            float r4 = r8.iC
            float r4 = r4 + r3
            float r2 = r2 * r4
            float r4 = r8.iB
            float r3 = r3 + r4
            float r2 = r2 + r3
            goto L15
        Lab:
            r2 = 0
            r0.top = r2
            float r2 = r0.top
            float r3 = r8.iA
            float r2 = r2 + r3
            r0.bottom = r2
            float r2 = r8.iA
            r3 = 1073741824(0x40000000, float:2.0)
            float r4 = r2 / r3
            float r2 = r2 / r3
            android.graphics.Paint r3 = r8.iz
            r9.drawRoundRect(r0, r4, r2, r3)
            int r1 = r1 + 1
            goto L6
        Lc5:
            return
    }

    static boolean a(com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator r0, boolean r1) {
            r1 = 1
            r0.iG = r1
            return r1
    }

    static float b(com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator r0, float r1) {
            r0.ix = r1
            return r1
    }

    private void b(android.graphics.Canvas r5) {
            r4 = this;
            boolean r0 = r4.iG
            if (r0 != 0) goto L1e
            int r0 = r4.im
            if (r0 != 0) goto L1e
            android.graphics.RectF r0 = new android.graphics.RectF
            float r1 = r4.iF
            float r2 = r4.iA
            r3 = 0
            r0.<init>(r3, r3, r1, r2)
            float r1 = r4.iA
            r2 = 1073741824(0x40000000, float:2.0)
            float r3 = r1 / r2
            float r1 = r1 / r2
            android.graphics.Paint r2 = r4.iE
            r5.drawRoundRect(r0, r3, r1, r2)
        L1e:
            return
    }

    private void cw() {
            r4 = this;
            android.graphics.Paint r0 = new android.graphics.Paint
            r1 = 1
            r0.<init>(r1)
            r4.iz = r0
            android.graphics.Paint$Style r2 = android.graphics.Paint.Style.FILL_AND_STROKE
            r0.setStyle(r2)
            android.graphics.Paint r0 = r4.iz
            r2 = 1065353216(0x3f800000, float:1.0)
            r0.setStrokeWidth(r2)
            android.graphics.Paint r0 = r4.iz
            int r3 = r4.iv
            r0.setColor(r3)
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>(r1)
            r4.iE = r0
            android.graphics.Paint$Style r1 = android.graphics.Paint.Style.FILL_AND_STROKE
            r0.setStyle(r1)
            android.graphics.Paint r0 = r4.iE
            r0.setStrokeWidth(r2)
            android.graphics.Paint r0 = r4.iE
            int r1 = r4.iu
            r0.setColor(r1)
            return
    }

    private void cx() {
            r3 = this;
            int r0 = r3.iD
            if (r0 > 0) goto La
            r0 = 8
            r3.setVisibility(r0)
            return
        La:
            r0 = 2
            float[] r0 = new float[r0]
            r1 = 0
            float r2 = r3.iC
            r0[r1] = r2
            r1 = 1
            float r2 = r3.iB
            r0[r1] = r2
            android.animation.ValueAnimator r0 = android.animation.ValueAnimator.ofFloat(r0)
            r3.iI = r0
            int r1 = r3.iD
            int r1 = r1 * 1000
            long r1 = (long) r1
            r0.setDuration(r1)
            android.animation.ValueAnimator r0 = r3.iI
            com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator$1 r1 = new com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator$1
            r1.<init>(r3)
            r0.addUpdateListener(r1)
            android.animation.ValueAnimator r0 = r3.iI
            com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator$2 r1 = new com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator$2
            r1.<init>(r3)
            r0.addListener(r1)
            android.animation.ValueAnimator r0 = r3.iI
            r0.start()
            return
    }

    public final void cy() {
            r1 = this;
            android.animation.ValueAnimator r0 = r1.iI
            if (r0 == 0) goto L7
            r0.pause()
        L7:
            return
    }

    public final void cz() {
            r1 = this;
            android.animation.ValueAnimator r0 = r1.iI
            if (r0 == 0) goto L7
            r0.resume()
        L7:
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r1) {
            r0 = this;
            super.onDraw(r1)
            r0.a(r1)
            r0.b(r1)
            return
    }

    @Override
    protected void onMeasure(int r6, int r7) {
            r5 = this;
            super.onMeasure(r6, r7)
            int r0 = android.view.View.MeasureSpec.getSize(r6)
            int r1 = android.view.View.MeasureSpec.getSize(r7)
            int r6 = android.view.View.MeasureSpec.getMode(r6)
            int r7 = android.view.View.MeasureSpec.getMode(r7)
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
            r3 = 1073741824(0x40000000, float:2.0)
            r4 = 0
            if (r7 != r3) goto L1b
            goto L22
        L1b:
            if (r7 != r2) goto L21
            float r7 = r5.iA
            int r1 = (int) r7
            goto L22
        L21:
            r1 = r4
        L22:
            if (r6 != r3) goto L25
            goto L3e
        L25:
            if (r6 != r2) goto L3d
            int r6 = r5.iw
            r7 = 1
            if (r6 <= r7) goto L39
            float r0 = r5.iB
            int r6 = r6 - r7
            float r6 = (float) r6
            float r7 = r5.iy
            float r2 = r5.iC
            float r7 = r7 + r2
            float r6 = r6 * r7
            float r0 = r0 + r6
            int r0 = (int) r0
            goto L3e
        L39:
            float r6 = r5.iB
            int r0 = (int) r6
            goto L3e
        L3d:
            r0 = r4
        L3e:
            r5.setMeasuredDimension(r0, r1)
            return
    }

    public void setFirstAdShowTime(int r1) {
            r0 = this;
            r0.iD = r1
            return
    }

    public void setPlayProgressListener(com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator.a r1) {
            r0 = this;
            r0.iH = r1
            return
    }

    public void setViewPager(android.support.v4.view.ViewPager r3) {
            r2 = this;
            android.support.v4.view.PagerAdapter r0 = r3.getAdapter()
            if (r0 != 0) goto L7
            return
        L7:
            int r0 = r0.getCount()
            r2.iw = r0
            r1 = 1
            if (r0 > r1) goto L11
            return
        L11:
            r0 = 0
            r2.iG = r0
            com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator$3 r0 = new com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator$3
            r0.<init>(r2)
            r3.addOnPageChangeListener(r0)
            r2.cx()
            return
    }
}
