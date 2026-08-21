package com.kwad.sdk.widget;

public final class g {
    private final com.kwad.sdk.widget.i aMk;
    private float aMl;
    private boolean aMm;
    private boolean aMn;
    private boolean aMo;
    private android.view.ViewTreeObserver.OnScrollChangedListener aMp;
    private final com.kwad.sdk.utils.bl axk;
    private final android.view.View mView;
    private final int mn;


    public g(android.view.View r2, com.kwad.sdk.widget.i r3) {
            r1 = this;
            r1.<init>()
            r0 = 1036831949(0x3dcccccd, float:0.1)
            r1.aMl = r0
            r0 = 1
            r1.aMo = r0
            r1.mView = r2
            r1.aMk = r3
            com.kwad.sdk.utils.bl r3 = new com.kwad.sdk.utils.bl
            r3.<init>(r2)
            r1.axk = r3
            android.content.Context r2 = r2.getContext()
            int r2 = com.kwad.sdk.utils.k.getScreenHeight(r2)
            r1.mn = r2
            return
    }

    private void DV() {
            r2 = this;
            android.view.ViewTreeObserver$OnScrollChangedListener r0 = r2.aMp
            if (r0 != 0) goto L18
            com.kwad.sdk.widget.g$1 r0 = new com.kwad.sdk.widget.g$1
            r0.<init>(r2)
            r2.aMp = r0
            android.view.View r0 = r2.mView
            android.view.ViewTreeObserver r0 = r0.getViewTreeObserver()
            if (r0 == 0) goto L18
            android.view.ViewTreeObserver$OnScrollChangedListener r1 = r2.aMp
            r0.addOnScrollChangedListener(r1)
        L18:
            return
    }

    private void DW() {
            r2 = this;
            android.view.ViewTreeObserver$OnScrollChangedListener r0 = r2.aMp
            if (r0 != 0) goto L5
            return
        L5:
            android.view.View r0 = r2.mView     // Catch: java.lang.Exception -> L16
            android.view.ViewTreeObserver r0 = r0.getViewTreeObserver()     // Catch: java.lang.Exception -> L16
            if (r0 == 0) goto L12
            android.view.ViewTreeObserver$OnScrollChangedListener r1 = r2.aMp     // Catch: java.lang.Exception -> L16
            r0.removeOnScrollChangedListener(r1)     // Catch: java.lang.Exception -> L16
        L12:
            r0 = 0
            r2.aMp = r0     // Catch: java.lang.Exception -> L16
            return
        L16:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r0)
            return
    }

    private void KG() {
            r1 = this;
            boolean r0 = r1.KH()
            if (r0 == 0) goto La
            r1.am()
            return
        La:
            r1.DW()
            r1.DV()
            return
    }

    private boolean KH() {
            r5 = this;
            com.kwad.sdk.utils.bl r0 = r5.axk
            boolean r0 = r0.Ke()
            r1 = 0
            if (r0 == 0) goto L52
            com.kwad.sdk.utils.bl r0 = r5.axk
            android.graphics.Rect r0 = r0.aKq
            int r0 = r0.height()
            android.view.View r2 = r5.mView
            int r2 = r2.getHeight()
            int r0 = r0 - r2
            int r0 = java.lang.Math.abs(r0)
            float r0 = (float) r0
            android.view.View r2 = r5.mView
            int r2 = r2.getHeight()
            float r2 = (float) r2
            r3 = 1065353216(0x3f800000, float:1.0)
            float r4 = r5.aMl
            float r3 = r3 - r4
            float r2 = r2 * r3
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto L52
            android.view.View r0 = r5.mView
            int r0 = r0.getHeight()
            if (r0 <= 0) goto L52
            android.view.View r0 = r5.mView
            int r0 = r0.getWidth()
            if (r0 <= 0) goto L52
            com.kwad.sdk.utils.bl r0 = r5.axk
            android.graphics.Rect r0 = r0.aKq
            int r0 = r0.bottom
            if (r0 <= 0) goto L52
            com.kwad.sdk.utils.bl r0 = r5.axk
            android.graphics.Rect r0 = r0.aKq
            int r0 = r0.top
            int r2 = r5.mn
            if (r0 >= r2) goto L52
            r0 = 1
            return r0
        L52:
            return r1
    }

    static boolean a(com.kwad.sdk.widget.g r0) {
            boolean r0 = r0.KH()
            return r0
    }

    private void am() {
            r2 = this;
            r2.DW()
            com.kwad.sdk.widget.i r0 = r2.aMk
            if (r0 == 0) goto Lc
            android.view.View r1 = r2.mView
            r0.z(r1)
        Lc:
            return
    }

    static void b(com.kwad.sdk.widget.g r0) {
            r0.am()
            return
    }

    private void nX() {
            r1 = this;
            boolean r0 = r1.aMo
            if (r0 == 0) goto L7
            r1.KG()
        L7:
            return
    }

    public final void KF() {
            r1 = this;
            boolean r0 = r1.aMn
            if (r0 == 0) goto L7
            r1.nX()
        L7:
            return
    }

    public final void b(int r2, int r3, int r4, int r5) {
            r1 = this;
            r0 = 0
            r1.aMn = r0
            boolean r0 = r1.aMm
            if (r0 != 0) goto L12
            r4 = r4 | r5
            if (r4 != 0) goto L12
            r2 = r2 | r3
            if (r2 == 0) goto L12
            r2 = 1
            r1.aMn = r2
            r1.aMm = r2
        L12:
            return
    }

    public final void bR(boolean r1) {
            r0 = this;
            r0.aMo = r1
            return
    }

    public final float getVisiblePercent() {
            r1 = this;
            float r0 = r1.aMl
            return r0
    }

    public final void onAttachedToWindow() {
            r0 = this;
            r0.DV()
            return
    }

    public final void onDetachedFromWindow() {
            r1 = this;
            r1.DW()
            r0 = 0
            r1.aMm = r0
            return
    }

    public final void setVisiblePercent(float r1) {
            r0 = this;
            r0.aMl = r1
            return
    }
}
