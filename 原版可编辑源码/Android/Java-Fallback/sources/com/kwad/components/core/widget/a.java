package com.kwad.components.core.widget;

public final class a extends com.kwad.sdk.widget.KSFrameLayout implements com.kwad.sdk.utils.bn.a {
    private final android.view.View SM;
    private com.kwad.components.core.widget.a.a XK;
    private boolean XL;
    private boolean XM;
    private int XN;
    private boolean XO;
    private long XP;
    private boolean XQ;
    private final float XR;
    private final int XS;
    private final com.kwad.sdk.utils.bn gx;

    public interface a {
        void aa();

        void ab();

        void eH();

        void k(android.view.View r1);
    }

    public a(android.content.Context r1, android.view.View r2) {
            r0 = this;
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.bn r1 = new com.kwad.sdk.utils.bn
            r1.<init>(r0)
            r0.gx = r1
            r1 = 5
            r0.XN = r1
            r0.SM = r2
            android.view.ViewGroup$LayoutParams r1 = new android.view.ViewGroup$LayoutParams
            r2 = 1
            r1.<init>(r2, r2)
            r0.setLayoutParams(r1)
            float r1 = com.kwad.sdk.core.config.d.zH()
            r0.XR = r1
            r0.setVisiblePercent(r1)
            float r1 = com.kwad.sdk.core.config.d.zI()
            r2 = 0
            int r2 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
            if (r2 >= 0) goto L2c
            r1 = 1065353216(0x3f800000, float:1.0)
        L2c:
            r2 = 1148846080(0x447a0000, float:1000.0)
            float r1 = r1 * r2
            int r1 = (int) r1
            r0.XS = r1
            return
    }

    private void si() {
            r4 = this;
            int r0 = r4.XS
            if (r0 != 0) goto Le
            com.kwad.components.core.widget.a$a r0 = r4.XK
            if (r0 == 0) goto Le
            android.view.View r1 = r4.SM
            r0.k(r1)
            return
        Le:
            com.kwad.sdk.utils.bn r0 = r4.gx
            android.os.Message r0 = r0.obtainMessage()
            r1 = 2
            r0.what = r1
            com.kwad.sdk.utils.bn r1 = r4.gx
            int r2 = r4.XS
            long r2 = (long) r2
            r1.sendMessageDelayed(r0, r2)
            return
    }

    private void sj() {
            r2 = this;
            com.kwad.sdk.utils.bn r0 = r2.gx
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            r0 = 0
            r2.XM = r0
            return
    }

    private void sk() {
            r2 = this;
            boolean r0 = r2.XM
            if (r0 != 0) goto Lc
            r0 = 1
            r2.XM = r0
            com.kwad.sdk.utils.bn r1 = r2.gx
            r1.sendEmptyMessage(r0)
        Lc:
            return
    }

    @Override
    public final void a(android.os.Message r10) {
            r9 = this;
            boolean r0 = r9.XL
            if (r0 == 0) goto L5
            return
        L5:
            int r10 = r10.what
            r0 = 1120403456(0x42c80000, float:100.0)
            r1 = 0
            r2 = 1
            if (r10 == r2) goto L30
            r3 = 2
            if (r10 == r3) goto L11
            goto L2f
        L11:
            android.view.View r10 = r9.SM
            float r3 = r9.XR
            float r3 = r3 * r0
            int r0 = (int) r3
            boolean r10 = com.kwad.sdk.utils.bm.a(r10, r0, r1)
            if (r10 == 0) goto L27
            com.kwad.components.core.widget.a$a r10 = r9.XK
            if (r10 == 0) goto L2f
            android.view.View r0 = r9.SM
            r10.k(r0)
            return
        L27:
            r10 = 5
            r9.XN = r10
            com.kwad.sdk.utils.bn r10 = r9.gx
            r10.sendEmptyMessage(r2)
        L2f:
            return
        L30:
            java.lang.String r10 = "AdExposureView"
            java.lang.String r3 = "handleMsg MSG_CHECKING"
            com.kwad.sdk.core.e.c.d(r10, r3)
            android.view.View r10 = r9.SM
            float r3 = r9.XR
            float r3 = r3 * r0
            int r0 = (int) r3
            boolean r10 = com.kwad.sdk.utils.bm.a(r10, r0, r1)
            r3 = 100
            r5 = 500(0x1f4, double:2.47E-321)
            if (r10 == 0) goto L75
            r9.sj()
            boolean r10 = r9.XO
            if (r10 == 0) goto L58
            com.kwad.components.core.widget.a$a r10 = r9.XK
            if (r10 == 0) goto L63
            android.view.View r0 = r9.SM
            r10.k(r0)
            goto L63
        L58:
            r9.XO = r2
            long r7 = java.lang.System.currentTimeMillis()
            r9.XP = r7
            r9.si()
        L63:
            r9.XQ = r1
            com.kwad.sdk.utils.bn r10 = r9.gx
            int r0 = r9.XN
            int r1 = r0 + (-1)
            r9.XN = r1
            if (r0 <= 0) goto L70
            goto L71
        L70:
            r3 = r5
        L71:
            r10.sendEmptyMessageDelayed(r2, r3)
            return
        L75:
            com.kwad.components.core.widget.a$a r10 = r9.XK
            if (r10 == 0) goto L80
            boolean r0 = r9.XQ
            if (r0 != 0) goto L80
            r10.eH()
        L80:
            r9.XQ = r2
            com.kwad.sdk.utils.bn r10 = r9.gx
            int r0 = r9.XN
            int r1 = r0 + (-1)
            r9.XN = r1
            if (r0 <= 0) goto L8d
            goto L8e
        L8d:
            r3 = r5
        L8e:
            r10.sendEmptyMessageDelayed(r2, r3)
            return
    }

    @Override
    public final void aa() {
            r1 = this;
            super.aa()
            r0 = 5
            r1.XN = r0
            r0 = 0
            r1.XL = r0
            r1.XO = r0
            r1.sk()
            com.kwad.components.core.widget.a$a r0 = r1.XK
            if (r0 == 0) goto L15
            r0.aa()
        L15:
            return
    }

    @Override
    public final void ab() {
            r2 = this;
            super.ab()
            r2.sj()
            r0 = 0
            r2.XN = r0
            r0 = 0
            r2.XP = r0
            r0 = 1
            r2.XL = r0
            com.kwad.components.core.widget.a$a r0 = r2.XK
            if (r0 == 0) goto L17
            r0.ab()
        L17:
            return
    }

    @Override
    public final void onWindowFocusChanged(boolean r3) {
            r2 = this;
            super.onWindowFocusChanged(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onWindowFocusChanged hasWindowFocus:"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "AdExposureView"
            com.kwad.sdk.core.e.c.d(r0, r3)
            return
    }

    public final void setViewCallback(com.kwad.components.core.widget.a.a r1) {
            r0 = this;
            r0.XK = r1
            return
    }

    public final void sl() {
            r0 = this;
            r0.sk()
            return
    }

    @Override
    public final void z(android.view.View r5) {
            r4 = this;
            super.z(r5)
            int r0 = r4.XS
            if (r0 != 0) goto Lf
            com.kwad.components.core.widget.a$a r0 = r4.XK
            if (r0 == 0) goto Lf
            r0.k(r5)
            return
        Lf:
            boolean r0 = r4.XO
            if (r0 != 0) goto L23
            r5 = 1
            r4.XO = r5
            long r0 = java.lang.System.currentTimeMillis()
            r4.XP = r0
            r4.sj()
            r4.si()
            return
        L23:
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r4.XP
            long r0 = r0 - r2
            int r2 = r4.XS
            long r2 = (long) r2
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L3b
            com.kwad.components.core.widget.a$a r0 = r4.XK
            if (r0 == 0) goto L3b
            r0.k(r5)
            r4.sj()
        L3b:
            return
    }
}
