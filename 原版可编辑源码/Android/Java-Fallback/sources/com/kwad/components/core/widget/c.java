package com.kwad.components.core.widget;

public final class c extends android.view.View implements com.kwad.sdk.utils.bn.a {
    private android.view.View SM;
    private final java.util.concurrent.atomic.AtomicBoolean SN;
    private boolean XL;
    private boolean XM;
    private com.kwad.components.core.widget.c.a Yi;
    private boolean Yj;
    private final int Yk;
    private final com.kwad.sdk.utils.bn gx;

    public interface a {
        void eI();
    }

    public c(android.content.Context r2, android.view.View r3) {
            r1 = this;
            r1.<init>(r2)
            com.kwad.sdk.utils.bn r2 = new com.kwad.sdk.utils.bn
            r2.<init>(r1)
            r1.gx = r2
            java.util.concurrent.atomic.AtomicBoolean r2 = new java.util.concurrent.atomic.AtomicBoolean
            r0 = 1
            r2.<init>(r0)
            r1.SN = r2
            float r2 = com.kwad.sdk.core.config.d.zH()
            r0 = 1120403456(0x42c80000, float:100.0)
            float r2 = r2 * r0
            int r2 = (int) r2
            r1.Yk = r2
            r1.SM = r3
            android.view.ViewGroup$LayoutParams r2 = new android.view.ViewGroup$LayoutParams
            r3 = 0
            r2.<init>(r3, r3)
            r1.setLayoutParams(r2)
            return
    }

    private void sj() {
            r2 = this;
            boolean r0 = r2.XM
            if (r0 == 0) goto Ld
            com.kwad.sdk.utils.bn r0 = r2.gx
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            r0 = 0
            r2.XM = r0
        Ld:
            return
    }

    private void sk() {
            r2 = this;
            boolean r0 = r2.Yj
            if (r0 == 0) goto L10
            boolean r0 = r2.XM
            if (r0 != 0) goto L10
            r0 = 1
            r2.XM = r0
            com.kwad.sdk.utils.bn r1 = r2.gx
            r1.sendEmptyMessage(r0)
        L10:
            return
    }

    private void sn() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.SN
            r1 = 0
            r0.getAndSet(r1)
            return
    }

    private void so() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.SN
            r1 = 1
            r0.getAndSet(r1)
            return
    }

    @Override
    public final void a(android.os.Message r9) {
            r8 = this;
            int r0 = r9.what
            r1 = 500(0x1f4, double:2.47E-321)
            r3 = 1000(0x3e8, float:1.401E-42)
            r4 = 0
            r5 = 2
            r6 = 1
            if (r0 == r6) goto L31
            if (r0 == r5) goto Le
            goto L60
        Le:
            android.view.View r0 = r8.SM
            int r7 = r8.Yk
            boolean r0 = com.kwad.sdk.utils.bm.a(r0, r7, r4)
            if (r0 != 0) goto L20
            boolean r9 = r8.XL
            if (r9 != 0) goto L60
            r8.setNeedCheckingShow(r6)
            return
        L20:
            int r9 = r9.arg1
            if (r9 != r3) goto L2b
            com.kwad.components.core.widget.c$a r9 = r8.Yi
            if (r9 == 0) goto L2b
            r9.eI()
        L2b:
            com.kwad.sdk.utils.bn r9 = r8.gx
            r9.sendEmptyMessageDelayed(r5, r1)
            goto L60
        L31:
            java.lang.String r9 = "EmptyView"
            java.lang.String r0 = "handleMsg MSG_CHECKING"
            com.kwad.sdk.core.e.c.d(r9, r0)
            boolean r9 = r8.XM
            if (r9 == 0) goto L60
            android.view.View r9 = r8.SM
            int r0 = r8.Yk
            boolean r9 = com.kwad.sdk.utils.bm.a(r9, r0, r4)
            if (r9 == 0) goto L5b
            r8.sj()
            com.kwad.sdk.utils.bn r9 = r8.gx
            android.os.Message r9 = r9.obtainMessage()
            r9.what = r5
            r9.arg1 = r3
            com.kwad.sdk.utils.bn r0 = r8.gx
            r1 = 1000(0x3e8, double:4.94E-321)
            r0.sendMessageDelayed(r9, r1)
            return
        L5b:
            com.kwad.sdk.utils.bn r9 = r8.gx
            r9.sendEmptyMessageDelayed(r6, r1)
        L60:
            return
    }

    @Override
    protected final void onAttachedToWindow() {
            r2 = this;
            super.onAttachedToWindow()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onAttachedToWindow:"
            r0.<init>(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "EmptyView"
            com.kwad.sdk.core.e.c.d(r1, r0)
            r2.sk()
            r0 = 0
            r2.XL = r0
            r2.sn()
            return
    }

    @Override
    protected final void onDetachedFromWindow() {
            r2 = this;
            super.onDetachedFromWindow()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onDetachedFromWindow"
            r0.<init>(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "EmptyView"
            com.kwad.sdk.core.e.c.d(r1, r0)
            r2.sj()
            r0 = 1
            r2.XL = r0
            r2.so()
            return
    }

    @Override
    public final void onFinishTemporaryDetach() {
            r2 = this;
            super.onFinishTemporaryDetach()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onFinishTemporaryDetach:"
            r0.<init>(r1)
            android.view.View r1 = r2.SM
            android.view.ViewParent r1 = r1.getParent()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "EmptyView"
            com.kwad.sdk.core.e.c.d(r1, r0)
            r2.sn()
            return
    }

    @Override
    public final void onStartTemporaryDetach() {
            r2 = this;
            super.onStartTemporaryDetach()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onStartTemporaryDetach:"
            r0.<init>(r1)
            android.view.View r1 = r2.SM
            android.view.ViewParent r1 = r1.getParent()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "EmptyView"
            com.kwad.sdk.core.e.c.d(r1, r0)
            r2.so()
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
            java.lang.String r0 = "EmptyView"
            com.kwad.sdk.core.e.c.d(r0, r3)
            return
    }

    @Override
    protected final void onWindowVisibilityChanged(int r3) {
            r2 = this;
            super.onWindowVisibilityChanged(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onWindowVisibilityChanged visibility:"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "EmptyView"
            com.kwad.sdk.core.e.c.d(r0, r3)
            return
    }

    public final void setNeedCheckingShow(boolean r2) {
            r1 = this;
            r1.Yj = r2
            if (r2 != 0) goto Lc
            boolean r0 = r1.XM
            if (r0 == 0) goto Lc
            r1.sj()
            return
        Lc:
            if (r2 == 0) goto L15
            boolean r2 = r1.XM
            if (r2 != 0) goto L15
            r1.sk()
        L15:
            return
    }

    public final void setViewCallback(com.kwad.components.core.widget.c.a r1) {
            r0 = this;
            r0.Yi = r1
            return
    }
}
