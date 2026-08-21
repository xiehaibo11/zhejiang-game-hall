package com.kwad.components.ad.h;

public final class d extends com.kwad.sdk.widget.KSFrameLayout implements com.kwad.components.core.webview.b.i, com.kwad.sdk.core.h.c {
    public static java.lang.String oc = "PUSH_VIEW_TAG";
    private final com.kwad.components.core.widget.a.b bG;
    private com.kwad.components.core.webview.jshandler.am cG;
    private com.kwad.components.core.webview.b.h lp;
    private com.kwad.sdk.core.response.model.AdTemplate od;
    private com.kwad.components.ad.b.a.b oe;
    private boolean of;
    private android.view.ViewGroup og;
    private boolean oh;



    static {
            return
    }

    public d(android.content.Context r3, com.kwad.sdk.core.response.model.AdTemplate r4) {
            r2 = this;
            r2.<init>(r3)
            r3 = 0
            r2.of = r3
            java.lang.String r3 = com.kwad.components.ad.h.d.oc
            r2.setTag(r3)
            r2.od = r4
            com.kwad.components.core.widget.a.b r3 = new com.kwad.components.core.widget.a.b
            r4 = 100
            r3.<init>(r2, r4)
            r2.bG = r3
            com.kwad.components.ad.h.d$1 r3 = new com.kwad.components.ad.h.d$1
            android.content.Context r4 = r2.getContext()
            r0 = -1
            r3.<init>(r2, r0, r4)
            r2.lp = r3
            com.kwad.sdk.core.response.model.AdTemplate r4 = r2.od
            r0 = 0
            r3.a(r0, r4, r2)
            return
    }

    static void a(com.kwad.components.ad.h.d r0) {
            r0.fi()
            return
    }

    private void destroy() {
            r2 = this;
            com.kwad.components.core.webview.b.h r0 = r2.lp
            r0.jv()
            android.view.ViewGroup r0 = r2.og
            if (r0 == 0) goto Lc
            r0.removeView(r2)
        Lc:
            android.view.ViewParent r0 = r2.getParent()
            boolean r1 = r0 instanceof android.view.ViewGroup
            if (r1 == 0) goto L19
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r0.removeView(r2)
        L19:
            return
    }

    private void fi() {
            r1 = this;
            boolean r0 = r1.oh
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r1.oh = r0
            r1.fl()
            r1.destroy()
            return
    }

    private void fj() {
            r1 = this;
            com.kwad.components.ad.b.a.b r0 = r1.oe
            if (r0 == 0) goto L7
            r0.T()
        L7:
            com.kwad.components.core.webview.jshandler.am r0 = r1.cG
            if (r0 == 0) goto L13
            r0.rz()
            com.kwad.components.core.webview.jshandler.am r0 = r1.cG
            r0.rA()
        L13:
            return
    }

    private void fl() {
            r1 = this;
            com.kwad.components.ad.b.a.b r0 = r1.oe
            if (r0 == 0) goto L7
            r0.U()
        L7:
            com.kwad.components.core.webview.jshandler.am r0 = r1.cG
            if (r0 == 0) goto L13
            r0.rB()
            com.kwad.components.core.webview.jshandler.am r0 = r1.cG
            r0.rC()
        L13:
            return
    }

    private boolean fm() {
            r4 = this;
            r0 = 0
            com.kwad.sdk.core.c.b.AU()     // Catch: java.lang.Throwable -> L41
            android.app.Activity r1 = com.kwad.sdk.core.c.b.getCurrentActivity()     // Catch: java.lang.Throwable -> L41
            if (r1 == 0) goto L40
            boolean r2 = r1.isFinishing()     // Catch: java.lang.Throwable -> L41
            if (r2 == 0) goto L11
            goto L40
        L11:
            android.view.Window r2 = r1.getWindow()     // Catch: java.lang.Throwable -> L41
            android.view.View r2 = r2.getDecorView()     // Catch: java.lang.Throwable -> L41
            r3 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r2 = r2.findViewById(r3)     // Catch: java.lang.Throwable -> L41
            boolean r3 = r2 instanceof android.view.ViewGroup     // Catch: java.lang.Throwable -> L41
            if (r3 != 0) goto L25
            return r0
        L25:
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2     // Catch: java.lang.Throwable -> L41
            r4.og = r2     // Catch: java.lang.Throwable -> L41
            android.view.ViewGroup$LayoutParams r2 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Throwable -> L41
            r3 = -1
            r2.<init>(r3, r3)     // Catch: java.lang.Throwable -> L41
            android.view.ViewGroup r3 = r4.og     // Catch: java.lang.Throwable -> L41
            r3.addView(r4, r2)     // Catch: java.lang.Throwable -> L41
            com.kwad.sdk.core.c.b.AU()     // Catch: java.lang.Throwable -> L41
            com.kwad.components.ad.h.d$2 r2 = new com.kwad.components.ad.h.d$2     // Catch: java.lang.Throwable -> L41
            r2.<init>(r4, r1)     // Catch: java.lang.Throwable -> L41
            com.kwad.sdk.core.c.b.a(r2)     // Catch: java.lang.Throwable -> L41
            r0 = 1
        L40:
            return r0
        L41:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r1)
            return r0
    }

    @Override
    public final void a(com.kwad.components.core.webview.b.a.o r1) {
            r0 = this;
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.b.a.p r1) {
            r0 = this;
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.b.b.t r1) {
            r0 = this;
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.jshandler.am r1) {
            r0 = this;
            r0.cG = r1
            return
    }

    @Override
    public final void a(com.kwad.sdk.components.l r1, com.kwad.sdk.core.webview.b r2) {
            r0 = this;
            return
    }

    @Override
    public final void a(com.kwad.sdk.core.webview.d.b.a r2) {
            r1 = this;
            java.lang.String r2 = "PushAdView"
            java.lang.String r0 = "onAdClicked"
            com.kwad.sdk.core.e.c.d(r2, r0)
            return
    }

    @Override
    public final void aK() {
            r2 = this;
            java.lang.String r0 = "PushAdView"
            java.lang.String r1 = "onPageVisible: "
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.core.webview.jshandler.am r0 = r2.cG
            if (r0 == 0) goto Le
            r0.rD()
        Le:
            return
    }

    @Override
    public final void aL() {
            r2 = this;
            java.lang.String r0 = "PushAdView"
            java.lang.String r1 = "onPageInvisible: "
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.core.webview.jshandler.am r0 = r2.cG
            if (r0 == 0) goto Le
            r0.rE()
        Le:
            return
    }

    @Override
    public final void aa() {
            r1 = this;
            super.aa()
            com.kwad.components.core.widget.a.b r0 = r1.bG
            r0.a(r1)
            com.kwad.components.core.widget.a.b r0 = r1.bG
            r0.sy()
            return
    }

    @Override
    public final void ab() {
            r1 = this;
            super.ab()
            com.kwad.components.core.widget.a.b r0 = r1.bG
            r0.release()
            return
    }

    @Override
    public final void b(com.kwad.components.core.webview.b.b.m r1) {
            r0 = this;
            return
    }

    @Override
    public final void b(com.kwad.components.core.webview.jshandler.t.a r5) {
            r4 = this;
            android.content.Context r0 = r4.getContext()
            float r0 = com.kwad.sdk.d.a.a.aH(r0)
            android.content.Context r1 = r4.getContext()
            int r1 = com.kwad.sdk.d.a.a.getScreenHeight(r1)
            float r1 = (float) r1
            android.content.Context r2 = r4.getContext()
            int r2 = com.kwad.sdk.d.a.a.getScreenWidth(r2)
            float r2 = (float) r2
            float r2 = r2 / r0
            r3 = 1056964608(0x3f000000, float:0.5)
            float r2 = r2 + r3
            int r2 = (int) r2
            r5.width = r2
            float r1 = r1 / r0
            float r1 = r1 + r3
            int r0 = (int) r1
            r5.height = r0
            return
    }

    @Override
    public final void b(com.kwad.sdk.commercial.model.WebCloseStatus r1) {
            r0 = this;
            r0.fi()
            return
    }

    public final boolean c(com.kwad.components.ad.b.a.b r1) {
            r0 = this;
            r0.oe = r1
            boolean r1 = r0.of
            if (r1 == 0) goto L11
            boolean r1 = r0.fm()
            if (r1 == 0) goto L11
            r0.fj()
            r1 = 1
            return r1
        L11:
            r1 = 0
            return r1
    }

    @Override
    public final void cc() {
            r2 = this;
            java.lang.String r0 = "PushAdView"
            java.lang.String r1 = "onTkLoadFailed"
            com.kwad.sdk.core.e.c.d(r0, r1)
            r0 = 0
            r2.of = r0
            return
    }

    @Override
    public final void eh() {
            r2 = this;
            java.lang.String r0 = "PushAdView"
            java.lang.String r1 = "onTkLoadSuccess"
            com.kwad.sdk.core.e.c.d(r0, r1)
            r0 = 1
            r2.of = r0
            return
    }

    @Override
    public final void em() {
            r0 = this;
            return
    }

    public final boolean fk() {
            r1 = this;
            boolean r0 = r1.of
            return r0
    }

    @Override
    public final android.widget.FrameLayout getTKContainer() {
            r0 = this;
            return r0
    }

    @Override
    public final java.lang.String getTkTemplateId() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.od
            java.lang.String r1 = "ksad-push-card"
            java.lang.String r0 = com.kwad.components.core.webview.b.j.b(r1, r0)
            return r0
    }

    @Override
    public final com.kwad.sdk.widget.e getTouchCoordsView() {
            r0 = this;
            return r0
    }
}
