package com.kwad.components.core.webview.b.c;

public class c extends com.kwad.components.core.webview.b.c.a {
    private android.widget.FrameLayout QW;
    private com.kwad.components.core.webview.b.c.d VP;
    private com.kwad.components.core.webview.b.a.p Xq;
    private com.kwad.components.core.webview.jshandler.am Xr;
    private com.kwad.components.core.webview.b.e.d Xs;
    private java.lang.String xD;




    public c() {
            r1 = this;
            r1.<init>()
            com.kwad.components.core.webview.b.c.c$2 r0 = new com.kwad.components.core.webview.b.c.c$2
            r0.<init>(r1)
            r1.Xs = r0
            return
    }

    static com.kwad.components.core.webview.jshandler.am a(com.kwad.components.core.webview.b.c.c r0) {
            com.kwad.components.core.webview.jshandler.am r0 = r0.Xr
            return r0
    }

    static com.kwad.components.core.webview.b.c.d b(com.kwad.components.core.webview.b.c.c r0) {
            com.kwad.components.core.webview.b.c.d r0 = r0.VP
            return r0
    }

    static void c(com.kwad.components.core.webview.b.c.c r0) {
            r0.rY()
            return
    }

    private void rY() {
            r3 = this;
            com.kwad.components.core.webview.b.c.b r0 = r3.Xl
            com.kwad.components.core.webview.b.c.d$a r0 = r0.Xp
            if (r0 == 0) goto Ld
            com.kwad.components.core.webview.b.c.b r0 = r3.Xl
            com.kwad.components.core.webview.b.c.d$a r0 = r0.Xp
            r0.gi()
        Ld:
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            java.lang.String r1 = r3.getTkTemplateId()
            r0.aS(r1)
            com.kwad.components.core.webview.b.c.b r0 = r3.Xl
            com.kwad.sdk.components.g r0 = r0.Xn
            if (r0 == 0) goto L28
            com.kwad.components.core.webview.b.c.b r0 = r3.Xl
            com.kwad.sdk.components.g r0 = r0.Xn
            r1 = 0
            java.lang.String r2 = "render failed"
            r0.callbackPageStatus(r1, r2)
        L28:
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.b.a.p r5) {
            r4 = this;
            r4.Xq = r5
            com.kwad.components.core.webview.b.c.b r5 = r4.Xl
            long r0 = r5.xI
            com.kwad.components.core.webview.b.a.p r5 = r4.Xq
            if (r5 == 0) goto L24
            r2 = 0
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 <= 0) goto L24
            com.kwad.components.core.webview.b.b.y r5 = new com.kwad.components.core.webview.b.b.y
            r5.<init>()
            float r0 = (float) r0
            r1 = 1148846080(0x447a0000, float:1000.0)
            float r0 = r0 / r1
            r1 = 1056964608(0x3f000000, float:0.5)
            float r0 = r0 + r1
            int r0 = (int) r0
            r5.nM = r0
            com.kwad.components.core.webview.b.a.p r0 = r4.Xq
            r0.a(r5)
        L24:
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.b.b.t r2) {
            r1 = this;
            super.a(r2)
            com.kwad.components.core.webview.b.c.d r2 = r1.VP
            if (r2 == 0) goto La
            r2.dismiss()
        La:
            com.kwad.components.core.webview.b.c.b r2 = r1.Xl
            com.kwad.components.core.webview.b.e.c r2 = r2.QM
            if (r2 == 0) goto L18
            com.kwad.components.core.webview.b.c.b r2 = r1.Xl
            com.kwad.components.core.webview.b.e.c r2 = r2.QM
            r0 = 1
            r2.H(r0)
        L18:
            return
    }

    @Override
    protected final void a(com.kwad.components.core.webview.b.c.b r1) {
            r0 = this;
            super.a(r1)
            com.kwad.components.core.webview.b.c.b r1 = r0.Xl
            java.lang.String r1 = r1.xD
            r0.xD = r1
            com.kwad.components.core.webview.b.c.b r1 = r0.Xl
            com.kwad.components.core.webview.b.c.d r1 = r1.VP
            r0.VP = r1
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.jshandler.am r1) {
            r0 = this;
            r0.Xr = r1
            return
    }

    @Override
    public final void ah() {
            r3 = this;
            super.ah()
            com.kwad.components.core.webview.b.c.d r0 = r3.VP
            if (r0 == 0) goto Lc
            com.kwad.components.core.webview.b.e.d r1 = r3.Xs
            r0.a(r1)
        Lc:
            com.kwad.components.core.webview.b.c.b r0 = r3.Xl
            com.kwad.sdk.components.g r0 = r0.Xn
            if (r0 == 0) goto L2e
            com.kwad.components.core.webview.b.h r0 = r3.lp
            com.kwad.components.core.webview.b.c.c$1 r1 = new com.kwad.components.core.webview.b.c.c$1
            r1.<init>(r3)
            r0.a(r1)
            com.kwad.components.core.webview.b.c.b r0 = r3.Xl
            com.kwad.sdk.components.g r0 = r0.Xn
            com.kwad.components.core.webview.b.h r1 = r3.lp
            r0.a(r1)
            com.kwad.components.core.webview.b.h r0 = r3.lp
            java.lang.Boolean r1 = java.lang.Boolean.TRUE
            java.lang.String r2 = "hasTKBridge"
            r0.a(r2, r1)
        L2e:
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
    public void b(com.kwad.sdk.commercial.model.WebCloseStatus r1) {
            r0 = this;
            super.b(r1)
            com.kwad.components.core.webview.b.c.b r1 = r0.Xl
            com.kwad.sdk.components.g r1 = r1.Xn
            if (r1 == 0) goto L10
            com.kwad.components.core.webview.b.c.b r1 = r0.Xl
            com.kwad.sdk.components.g r1 = r1.Xn
            r1.callbackDialogDismiss()
        L10:
            return
    }

    public void cc() {
            r2 = this;
            com.kwad.components.core.webview.b.c.d r0 = r2.VP
            if (r0 == 0) goto L1e
            boolean r0 = r0.isShowing()
            if (r0 == 0) goto L15
            com.kwad.components.core.webview.b.c.d r0 = r2.VP
            com.kwad.components.core.webview.b.c.c$3 r1 = new com.kwad.components.core.webview.b.c.c$3
            r1.<init>(r2)
            r0.d(r1)
            goto L18
        L15:
            r2.rY()
        L18:
            com.kwad.components.core.webview.b.c.d r0 = r2.VP
            r0.dismiss()
            return
        L1e:
            r2.rY()
            return
    }

    @Override
    public final void eh() {
            r3 = this;
            com.kwad.components.core.webview.b.c.b r0 = r3.Xl
            com.kwad.sdk.components.g r0 = r0.Xn
            if (r0 == 0) goto Lf
            com.kwad.components.core.webview.b.c.b r0 = r3.Xl
            com.kwad.sdk.components.g r0 = r0.Xn
            r1 = 1
            r2 = 0
            r0.callbackPageStatus(r1, r2)
        Lf:
            return
    }

    @Override
    public final void em() {
            r2 = this;
            super.em()
            com.kwad.components.core.webview.b.c.b r0 = r2.Xl
            boolean r0 = r0.Xo
            if (r0 == 0) goto L18
            com.kwad.components.core.webview.b.c.b r0 = r2.Xl
            com.kwad.components.core.webview.b.e.c r0 = r0.QM
            if (r0 == 0) goto L2c
            com.kwad.components.core.webview.b.c.b r0 = r2.Xl
            com.kwad.components.core.webview.b.e.c r0 = r0.QM
            r1 = 1
            r0.H(r1)
            return
        L18:
            com.kwad.components.core.webview.b.c.d r0 = r2.VP
            if (r0 == 0) goto L1f
            r0.dismiss()
        L1f:
            com.kwad.components.core.webview.b.c.b r0 = r2.Xl
            com.kwad.components.core.webview.b.e.c r0 = r0.QM
            if (r0 == 0) goto L2c
            com.kwad.components.core.webview.b.c.b r0 = r2.Xl
            com.kwad.components.core.webview.b.e.c r0 = r0.QM
            r0.gp()
        L2c:
            return
    }

    @Override
    public android.widget.FrameLayout getTKContainer() {
            r1 = this;
            android.widget.FrameLayout r0 = r1.QW
            return r0
    }

    @Override
    public java.lang.String getTkTemplateId() {
            r2 = this;
            com.kwad.components.core.webview.b.c.b r0 = r2.Xl
            com.kwad.components.offline.api.tk.model.StyleTemplate r0 = r0.QO
            if (r0 == 0) goto Ld
            com.kwad.components.core.webview.b.c.b r0 = r2.Xl
            com.kwad.components.offline.api.tk.model.StyleTemplate r0 = r0.QO
            java.lang.String r0 = r0.templateId
            return r0
        Ld:
            java.lang.String r0 = r2.xD
            com.kwad.components.core.webview.b.c.b r1 = r2.Xl
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            java.lang.String r0 = com.kwad.components.core.webview.b.j.b(r0, r1)
            return r0
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_tk_dialog_container
            android.view.View r0 = r1.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r1.QW = r0
            return
    }
}
