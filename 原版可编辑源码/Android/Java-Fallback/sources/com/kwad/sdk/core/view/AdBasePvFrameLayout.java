package com.kwad.sdk.core.view;

public class AdBasePvFrameLayout extends com.kwad.sdk.core.view.AdBaseFrameLayout {
    private long axe;
    private float axf;
    private boolean axg;
    private boolean axh;
    private android.view.ViewTreeObserver.OnScrollChangedListener axi;
    private android.view.ViewTreeObserver axj;
    private com.kwad.sdk.utils.bl axk;
    private com.kwad.sdk.widget.j ct;
    private int mn;


    public AdBasePvFrameLayout(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            r0 = 500(0x1f4, double:2.47E-321)
            r2.axe = r0
            r3 = 1036831949(0x3dcccccd, float:0.1)
            r2.axf = r3
            r3 = 1
            r2.axh = r3
            r2.init()
            return
    }

    public AdBasePvFrameLayout(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 500(0x1f4, double:2.47E-321)
            r0.axe = r1
            r1 = 1036831949(0x3dcccccd, float:0.1)
            r0.axf = r1
            r1 = 1
            r0.axh = r1
            r0.init()
            return
    }

    public AdBasePvFrameLayout(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 500(0x1f4, double:2.47E-321)
            r0.axe = r1
            r1 = 1036831949(0x3dcccccd, float:0.1)
            r0.axf = r1
            r1 = 1
            r0.axh = r1
            r0.init()
            return
    }

    private void DS() {
            r1 = this;
            boolean r0 = r1.DU()
            if (r0 == 0) goto La
            r1.DT()
            return
        La:
            r1.DV()
            return
    }

    private boolean DU() {
            r4 = this;
            com.kwad.sdk.utils.bl r0 = r4.axk
            boolean r0 = r0.Ke()
            if (r0 == 0) goto L49
            com.kwad.sdk.utils.bl r0 = r4.axk
            android.graphics.Rect r0 = r0.aKq
            int r0 = r0.height()
            int r1 = r4.getHeight()
            int r0 = r0 - r1
            int r0 = java.lang.Math.abs(r0)
            float r0 = (float) r0
            int r1 = r4.getHeight()
            float r1 = (float) r1
            r2 = 1065353216(0x3f800000, float:1.0)
            float r3 = r4.axf
            float r2 = r2 - r3
            float r1 = r1 * r2
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 > 0) goto L49
            int r0 = r4.getHeight()
            if (r0 <= 0) goto L49
            int r0 = r4.getWidth()
            if (r0 <= 0) goto L49
            com.kwad.sdk.utils.bl r0 = r4.axk
            android.graphics.Rect r0 = r0.aKq
            int r0 = r0.bottom
            if (r0 <= 0) goto L49
            com.kwad.sdk.utils.bl r0 = r4.axk
            android.graphics.Rect r0 = r0.aKq
            int r0 = r0.top
            int r1 = r4.mn
            if (r0 >= r1) goto L49
            r0 = 1
            return r0
        L49:
            r0 = 0
            return r0
    }

    private void DV() {
            r2 = this;
            android.view.ViewTreeObserver$OnScrollChangedListener r0 = r2.axi
            if (r0 != 0) goto L18
            com.kwad.sdk.core.view.AdBasePvFrameLayout$1 r0 = new com.kwad.sdk.core.view.AdBasePvFrameLayout$1
            r0.<init>(r2)
            r2.axi = r0
            android.view.ViewTreeObserver r0 = r2.getViewTreeObserver()
            r2.axj = r0
            if (r0 == 0) goto L18
            android.view.ViewTreeObserver$OnScrollChangedListener r1 = r2.axi
            r0.addOnScrollChangedListener(r1)
        L18:
            return
    }

    private void DW() {
            r2 = this;
            android.view.ViewTreeObserver$OnScrollChangedListener r0 = r2.axi     // Catch: java.lang.Exception -> L1b
            if (r0 == 0) goto L17
            android.view.ViewTreeObserver r0 = r2.axj     // Catch: java.lang.Exception -> L1b
            if (r0 == 0) goto L17
            android.view.ViewTreeObserver r0 = r2.axj     // Catch: java.lang.Exception -> L1b
            boolean r0 = r0.isAlive()     // Catch: java.lang.Exception -> L1b
            if (r0 == 0) goto L17
            android.view.ViewTreeObserver r0 = r2.axj     // Catch: java.lang.Exception -> L1b
            android.view.ViewTreeObserver$OnScrollChangedListener r1 = r2.axi     // Catch: java.lang.Exception -> L1b
            r0.removeOnScrollChangedListener(r1)     // Catch: java.lang.Exception -> L1b
        L17:
            r0 = 0
            r2.axi = r0     // Catch: java.lang.Exception -> L1b
            return
        L1b:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r0)
            return
    }

    static boolean a(com.kwad.sdk.core.view.AdBasePvFrameLayout r0) {
            boolean r0 = r0.DU()
            return r0
    }

    private void init() {
            r1 = this;
            com.kwad.sdk.utils.bl r0 = new com.kwad.sdk.utils.bl
            r0.<init>(r1)
            r1.axk = r0
            android.content.Context r0 = r1.getContext()
            int r0 = com.kwad.sdk.utils.k.getScreenHeight(r0)
            r1.mn = r0
            r0 = 1
            r1.axh = r0
            return
    }

    private void nX() {
            r1 = this;
            boolean r0 = r1.axh
            if (r0 == 0) goto L7
            r1.DS()
        L7:
            return
    }

    protected final void DT() {
            r1 = this;
            r1.DW()
            com.kwad.sdk.widget.j r0 = r1.ct
            if (r0 == 0) goto La
            r0.am()
        La:
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r0 = this;
            super.onAttachedToWindow()
            r0.DV()
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            r1.DW()
            r0 = 0
            r1.axg = r0
            return
    }

    @Override
    protected void onSizeChanged(int r3, int r4, int r5, int r6) {
            r2 = this;
            boolean r0 = r2.axg
            r1 = 1
            if (r0 != 0) goto L10
            r0 = r5 | r6
            if (r0 != 0) goto L10
            r0 = r3 | r4
            if (r0 == 0) goto L10
            r2.axg = r1
            goto L11
        L10:
            r1 = 0
        L11:
            super.onSizeChanged(r3, r4, r5, r6)
            if (r1 == 0) goto L19
            r2.nX()
        L19:
            return
    }

    public void setCheckDefaultImpressionLogThreshold(float r1) {
            r0 = this;
            r0.axf = r1
            return
    }

    public void setVisibleListener(com.kwad.sdk.widget.j r1) {
            r0 = this;
            r0.ct = r1
            return
    }
}
