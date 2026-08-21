package com.kwad.components.core.page.b.a;

public final class d extends com.kwad.components.core.page.b.a.a {
    private android.view.View Nm;
    private android.widget.TextView Nn;
    private int No;
    private java.lang.Runnable Np;


    public d() {
            r1 = this;
            r1.<init>()
            com.kwad.components.core.page.b.a.d$1 r0 = new com.kwad.components.core.page.b.a.d$1
            r0.<init>(r1)
            r1.Np = r0
            return
    }

    static int a(com.kwad.components.core.page.b.a.d r0) {
            int r0 = r0.No
            return r0
    }

    static android.widget.TextView b(com.kwad.components.core.page.b.a.d r0) {
            android.widget.TextView r0 = r0.Nn
            return r0
    }

    static int c(com.kwad.components.core.page.b.a.d r2) {
            int r0 = r2.No
            int r1 = r0 + (-1)
            r2.No = r1
            return r0
    }

    static android.view.View d(com.kwad.components.core.page.b.a.d r0) {
            android.view.View r0 = r0.Nm
            return r0
    }

    private void oP() {
            r4 = this;
            android.view.View r0 = r4.Nm
            if (r0 == 0) goto L2a
            android.widget.TextView r0 = r4.Nn
            if (r0 != 0) goto L9
            goto L2a
        L9:
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            int r2 = r4.No
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3 = 0
            r1[r3] = r2
            java.lang.String r2 = "倒计时%d秒"
            java.lang.String r1 = java.lang.String.format(r2, r1)
            r0.setText(r1)
            android.view.View r0 = r4.Nm
            r0.setVisibility(r3)
            java.lang.Runnable r0 = r4.Np
            r1 = 1000(0x3e8, double:4.94E-321)
            com.kwad.sdk.utils.bj.runOnUiThreadDelay(r0, r1)
        L2a:
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.core.page.b.a.b r0 = r2.MW
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            int r0 = com.kwad.sdk.core.response.b.a.aE(r0)
            r2.No = r0
            com.kwad.components.core.r.a r0 = com.kwad.components.core.r.a.pS()
            int r1 = r2.No
            r0.aG(r1)
            r2.oP()
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_web_reward_task_layout
            android.view.View r0 = r1.findViewById(r0)
            r1.Nm = r0
            int r0 = com.kwad.sdk.R.id.ksad_web_reward_task_text
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.Nn = r0
            return
    }

    @Override
    public final void onUnbind() {
            r1 = this;
            super.onUnbind()
            java.lang.Runnable r0 = r1.Np
            com.kwad.sdk.utils.bj.b(r0)
            return
    }
}
