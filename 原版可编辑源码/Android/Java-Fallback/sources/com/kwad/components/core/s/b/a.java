package com.kwad.components.core.s.b;

public final class a extends com.kwad.sdk.mvp.Presenter implements com.kwad.components.core.webview.b.i {
    private android.widget.FrameLayout QW;
    private com.kwad.components.core.webview.jshandler.am QX;
    protected boolean QY;
    protected com.kwad.components.core.s.a.b QZ;
    private com.kwad.components.core.l.a.a Ra;
    private com.kwad.components.core.webview.b.h lp;



    public a() {
            r1 = this;
            r1.<init>()
            com.kwad.components.core.s.b.a$1 r0 = new com.kwad.components.core.s.b.a$1
            r0.<init>(r1)
            r1.Ra = r0
            return
    }

    static void a(com.kwad.components.core.s.b.a r0) {
            r0.qe()
            return
    }

    static void b(com.kwad.components.core.s.b.a r0) {
            r0.qf()
            return
    }

    static void c(com.kwad.components.core.s.b.a r0) {
            r0.qg()
            return
    }

    private void qd() {
            r2 = this;
            com.kwad.components.core.webview.jshandler.am r0 = r2.QX
            if (r0 != 0) goto L5
            return
        L5:
            boolean r1 = r2.QY
            if (r1 != 0) goto L15
            r0.rz()
            com.kwad.components.core.webview.jshandler.am r0 = r2.QX
            r0.rA()
            r0 = 1
            r2.QY = r0
            return
        L15:
            r0.rD()
            return
    }

    private void qe() {
            r0 = this;
            r0.qd()
            return
    }

    private void qf() {
            r2 = this;
            com.kwad.components.core.webview.jshandler.am r0 = r2.QX
            if (r0 == 0) goto Lc
            boolean r1 = r2.QY
            if (r1 != 0) goto L9
            goto Lc
        L9:
            r0.rE()
        Lc:
            return
    }

    private void qg() {
            r2 = this;
            com.kwad.components.core.webview.jshandler.am r0 = r2.QX
            if (r0 == 0) goto L11
            boolean r1 = r2.QY
            if (r1 != 0) goto L9
            goto L11
        L9:
            r0.rB()
            com.kwad.components.core.webview.jshandler.am r0 = r2.QX
            r0.rC()
        L11:
            return
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
            r0.QX = r1
            return
    }

    @Override
    public final void a(com.kwad.sdk.components.l r1, com.kwad.sdk.core.webview.b r2) {
            r0 = this;
            return
    }

    @Override
    public final void a(com.kwad.sdk.core.webview.d.b.a r1) {
            r0 = this;
            return
    }

    @Override
    public final void ah() {
            r3 = this;
            super.ah()
            java.lang.Object r0 = r3.Gk()
            com.kwad.components.core.s.a.b r0 = (com.kwad.components.core.s.a.b) r0
            r3.QZ = r0
            int r0 = com.kwad.sdk.R.id.ksad_js_container
            android.view.View r0 = r3.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r3.QW = r0
            com.kwad.components.core.webview.b.h r0 = new com.kwad.components.core.webview.b.h
            android.content.Context r1 = r3.getContext()
            r2 = 1000(0x3e8, float:1.401E-42)
            r0.<init>(r1, r2)
            r3.lp = r0
            com.kwad.components.core.s.a.b r1 = r3.QZ
            com.kwad.components.offline.api.tk.model.StyleTemplate r1 = r1.QO
            r0.a(r1)
            com.kwad.components.core.s.a.b r0 = r3.QZ
            com.kwad.sdk.components.h r0 = r0.QR
            if (r0 == 0) goto L4b
            com.kwad.components.core.s.a.b r0 = r3.QZ
            com.kwad.sdk.components.h r0 = r0.QR
            com.kwad.components.core.webview.b.h r1 = r3.lp
            r0.a(r1)
            com.kwad.components.core.webview.b.h r0 = r3.lp
            com.kwad.components.core.s.b.a$2 r1 = new com.kwad.components.core.s.b.a$2
            r1.<init>(r3)
            r0.a(r1)
            com.kwad.components.core.webview.b.h r0 = r3.lp
            java.lang.Boolean r1 = java.lang.Boolean.TRUE
            java.lang.String r2 = "hasTKBridge"
            r0.a(r2, r1)
        L4b:
            com.kwad.components.core.webview.b.h r0 = r3.lp
            android.app.Activity r1 = r3.getActivity()
            com.kwad.components.core.s.a.b r2 = r3.QZ
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            r0.a(r1, r2, r3)
            com.kwad.components.core.s.a.b r0 = r3.QZ
            java.util.List<com.kwad.components.core.l.a.a> r0 = r0.Lg
            com.kwad.components.core.l.a.a r1 = r3.Ra
            r0.add(r1)
            return
    }

    @Override
    public final void b(com.kwad.components.core.webview.b.b.m r1) {
            r0 = this;
            return
    }

    @Override
    public final void b(com.kwad.components.core.webview.jshandler.t.a r4) {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            float r0 = com.kwad.sdk.d.a.a.aH(r0)
            android.content.Context r1 = r3.getContext()
            int r1 = com.kwad.sdk.utils.be.getScreenWidth(r1)
            float r1 = (float) r1
            float r1 = r1 / r0
            r2 = 1056964608(0x3f000000, float:0.5)
            float r1 = r1 + r2
            int r1 = (int) r1
            r4.width = r1
            android.content.Context r1 = r3.getContext()
            int r1 = com.kwad.sdk.utils.be.getScreenHeight(r1)
            float r1 = (float) r1
            float r1 = r1 / r0
            float r1 = r1 + r2
            int r0 = (int) r1
            r4.height = r0
            return
    }

    @Override
    public final void b(com.kwad.sdk.commercial.model.WebCloseStatus r1) {
            r0 = this;
            android.app.Activity r1 = r0.getActivity()
            r1.finish()
            return
    }

    @Override
    public final void cc() {
            r0 = this;
            return
    }

    @Override
    public final void eh() {
            r0 = this;
            r0.qd()
            return
    }

    @Override
    public final void em() {
            r0 = this;
            return
    }

    @Override
    public final android.widget.FrameLayout getTKContainer() {
            r1 = this;
            android.widget.FrameLayout r0 = r1.QW
            return r0
    }

    @Override
    public final java.lang.String getTkTemplateId() {
            r1 = this;
            com.kwad.components.core.s.a.b r0 = r1.QZ
            com.kwad.components.offline.api.tk.model.StyleTemplate r0 = r0.QO
            java.lang.String r0 = r0.templateId
            return r0
    }

    @Override
    public final com.kwad.sdk.widget.e getTouchCoordsView() {
            r1 = this;
            com.kwad.components.core.s.a.b r0 = r1.QZ
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.mRootContainer
            return r0
    }

    @Override
    public final void onCreate() {
            r0 = this;
            super.onCreate()
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            r2.qg()
            com.kwad.components.core.webview.b.h r0 = r2.lp
            r0.jv()
            com.kwad.components.core.s.a.b r0 = r2.QZ
            java.util.List<com.kwad.components.core.l.a.a> r0 = r0.Lg
            com.kwad.components.core.l.a.a r1 = r2.Ra
            r0.remove(r1)
            return
    }
}
