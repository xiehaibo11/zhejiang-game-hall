package com.kwad.components.ad.reward.j.a;

public final class d extends com.kwad.components.core.webview.b.h implements com.kwad.components.ad.reward.j.r, com.kwad.components.core.webview.jshandler.n.b {
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private java.lang.ref.WeakReference<com.kwad.components.ad.reward.j> qq;
    private com.kwad.components.ad.reward.c.e xM;
    private com.kwad.components.ad.reward.j.m xN;
    private com.kwad.components.ad.reward.j.l xO;
    private com.kwad.components.ad.reward.j.n xP;
    private java.util.List<com.kwad.sdk.core.response.model.AdTemplate> xQ;
    private android.content.DialogInterface.OnDismissListener xR;

    public d(com.kwad.components.ad.reward.j r1, long r2, android.content.Context r4) {
            r0 = this;
            r0.<init>(r2, r4)
            r2 = 0
            r0.xQ = r2
            java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference
            r2.<init>(r1)
            r0.qq = r2
            return
    }

    public d(com.kwad.components.ad.reward.j r1, long r2, android.content.Context r4, android.content.DialogInterface.OnDismissListener r5) {
            r0 = this;
            r2 = -1
            r0.<init>(r2, r4)
            r2 = 0
            r0.xQ = r2
            r0.xR = r5
            java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference
            r2.<init>(r1)
            r0.qq = r2
            return
    }

    @Override
    public final void a(android.app.Activity r1, com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.components.core.webview.b.i r3) {
            r0 = this;
            super.a(r1, r2, r3)
            java.lang.ref.WeakReference<com.kwad.components.ad.reward.j> r1 = r0.qq
            if (r1 == 0) goto Le
            java.lang.Object r1 = r1.get()
            com.kwad.components.ad.reward.j r1 = (com.kwad.components.ad.reward.j) r1
            goto Lf
        Le:
            r1 = 0
        Lf:
            if (r1 == 0) goto L14
            r1.a(r0)
        L14:
            return
    }

    @Override
    public final void a(com.kwad.sdk.core.webview.b r9, com.kwad.components.core.e.d.c r10, com.kwad.sdk.components.l r11, android.view.ViewGroup r12) {
            r8 = this;
            super.a(r9, r10, r11, r12)
            r8.mApkDownloadHelper = r10
            com.kwad.components.ad.reward.j.q r12 = new com.kwad.components.ad.reward.j.q
            long r4 = r8.xI
            android.content.DialogInterface$OnDismissListener r7 = r8.xR
            r3 = 0
            r0 = r12
            r1 = r9
            r2 = r10
            r6 = r8
            r0.<init>(r1, r2, r3, r4, r6, r7)
            r11.c(r12)
            com.kwad.components.ad.reward.c.e r10 = new com.kwad.components.ad.reward.c.e
            r10.<init>()
            r8.xM = r10
            r11.c(r10)
            com.kwad.components.ad.reward.j.s r10 = new com.kwad.components.ad.reward.j.s
            android.content.Context r12 = r8.mContext
            java.lang.ref.WeakReference<com.kwad.components.ad.reward.j> r0 = r8.qq
            java.lang.Object r0 = r0.get()
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            r10.<init>(r12, r0)
            r11.c(r10)
            com.kwad.components.ad.reward.j.o r10 = new com.kwad.components.ad.reward.j.o
            java.lang.ref.WeakReference<com.kwad.components.ad.reward.j> r12 = r8.qq
            java.lang.Object r12 = r12.get()
            com.kwad.components.ad.reward.j r12 = (com.kwad.components.ad.reward.j) r12
            r10.<init>(r12)
            r11.c(r10)
            com.kwad.components.ad.reward.j.m r10 = new com.kwad.components.ad.reward.j.m
            r10.<init>()
            r8.xN = r10
            r11.c(r10)
            com.kwad.components.ad.reward.j.l r10 = new com.kwad.components.ad.reward.j.l
            r10.<init>()
            r8.xO = r10
            r11.c(r10)
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r10 = r8.xQ
            if (r10 == 0) goto L62
            com.kwad.components.ad.reward.j.l r12 = r8.xO
            r12.e(r10)
            r10 = 0
            r8.xQ = r10
        L62:
            com.kwad.components.core.webview.jshandler.n r10 = new com.kwad.components.core.webview.jshandler.n
            r10.<init>(r9)
            r10.a(r8)
            r11.c(r10)
            com.kwad.components.ad.reward.j.n r9 = new com.kwad.components.ad.reward.j.n
            r9.<init>()
            r8.xP = r9
            r11.c(r9)
            return
    }

    @Override
    public final void ac(boolean r2) {
            r1 = this;
            com.kwad.components.ad.reward.j.n r0 = r1.xP
            if (r0 == 0) goto L7
            r0.ab(r2)
        L7:
            return
    }

    @Override
    public final com.kwad.components.core.webview.jshandler.ab c(com.kwad.sdk.core.webview.b r8) {
            r7 = this;
            java.lang.ref.WeakReference<com.kwad.components.ad.reward.j> r0 = r7.qq
            if (r0 == 0) goto Lb
            java.lang.Object r0 = r0.get()
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            goto Lc
        Lb:
            r0 = 0
        Lc:
            r2 = r0
            com.kwad.components.ad.reward.j.p r0 = new com.kwad.components.ad.reward.j.p
            java.lang.String r3 = r7.getTkTemplateId()
            long r4 = r7.xI
            r1 = r0
            r6 = r8
            r1.<init>(r2, r3, r4, r6)
            return r0
    }

    public final void f(java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r1) {
            r0 = this;
            r0.xQ = r1
            return
    }

    public final com.kwad.components.ad.reward.page.BackPressHandleResult gA() {
            r1 = this;
            com.kwad.components.ad.reward.j.m r0 = r1.xN
            if (r0 != 0) goto L7
            com.kwad.components.ad.reward.page.BackPressHandleResult r0 = com.kwad.components.ad.reward.page.BackPressHandleResult.NOT_HANDLED
            return r0
        L7:
            r0.jm()
            com.kwad.components.ad.reward.page.BackPressHandleResult r0 = com.kwad.components.ad.reward.page.BackPressHandleResult.HANDLED
            return r0
    }

    public final com.kwad.components.ad.reward.c.e jt() {
            r1 = this;
            com.kwad.components.ad.reward.c.e r0 = r1.xM
            return r0
    }

    public final com.kwad.components.ad.reward.j.l ju() {
            r1 = this;
            com.kwad.components.ad.reward.j.l r0 = r1.xO
            return r0
    }

    @Override
    public final void jv() {
            r1 = this;
            super.jv()
            java.lang.ref.WeakReference<com.kwad.components.ad.reward.j> r0 = r1.qq
            if (r0 == 0) goto Le
            java.lang.Object r0 = r0.get()
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            goto Lf
        Le:
            r0 = 0
        Lf:
            if (r0 == 0) goto L14
            r0.b(r1)
        L14:
            return
    }

    @Override
    public final void y(com.kwad.sdk.core.response.model.AdTemplate r3) {
            r2 = this;
            com.kwad.components.core.i.c r0 = new com.kwad.components.core.i.c
            int r1 = com.kwad.components.core.i.e.AGGREGATION
            r0.<init>(r3, r1)
            java.lang.ref.WeakReference<com.kwad.components.ad.reward.j> r3 = r2.qq
            if (r3 == 0) goto L12
            java.lang.Object r3 = r3.get()
            com.kwad.components.ad.reward.j r3 = (com.kwad.components.ad.reward.j) r3
            goto L13
        L12:
            r3 = 0
        L13:
            if (r3 == 0) goto L18
            r3.b(r0)
        L18:
            return
    }
}
