package com.kwad.components.core.page.b.a;

public final class c extends com.kwad.components.core.page.b.a.a {
    private android.widget.LinearLayout Nd;
    private android.widget.TextView Ne;
    private android.widget.TextView Nf;
    private android.widget.TextView Ng;
    private android.widget.TextView Nh;
    private int Ni;
    private boolean Nj;
    private java.lang.Runnable Nk;
    private boolean counterPaused;
    private final com.kwad.sdk.core.c.c xj;



    public c() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.counterPaused = r0
            r1.Nj = r0
            com.kwad.components.core.page.b.a.c$1 r0 = new com.kwad.components.core.page.b.a.c$1
            r0.<init>(r1)
            r1.Nk = r0
            com.kwad.components.core.page.b.a.c$2 r0 = new com.kwad.components.core.page.b.a.c$2
            r0.<init>(r1)
            r1.xj = r0
            return
    }

    static boolean a(com.kwad.components.core.page.b.a.c r0) {
            boolean r0 = r0.counterPaused
            return r0
    }

    static boolean a(com.kwad.components.core.page.b.a.c r0, boolean r1) {
            r0.counterPaused = r1
            return r1
    }

    static int b(com.kwad.components.core.page.b.a.c r0) {
            int r0 = r0.Ni
            return r0
    }

    static android.widget.TextView c(com.kwad.components.core.page.b.a.c r0) {
            android.widget.TextView r0 = r0.Ne
            return r0
    }

    static android.widget.TextView d(com.kwad.components.core.page.b.a.c r0) {
            android.widget.TextView r0 = r0.Nf
            return r0
    }

    static android.widget.TextView e(com.kwad.components.core.page.b.a.c r0) {
            android.widget.TextView r0 = r0.Ng
            return r0
    }

    static android.widget.TextView f(com.kwad.components.core.page.b.a.c r0) {
            android.widget.TextView r0 = r0.Nh
            return r0
    }

    static boolean g(com.kwad.components.core.page.b.a.c r0) {
            boolean r0 = r0.Nj
            return r0
    }

    static void h(com.kwad.components.core.page.b.a.c r0) {
            r0.oM()
            return
    }

    static int i(com.kwad.components.core.page.b.a.c r2) {
            int r0 = r2.Ni
            int r1 = r0 + (-1)
            r2.Ni = r1
            return r0
    }

    private void oL() {
            r3 = this;
            android.widget.LinearLayout r0 = r3.Nd
            r1 = 0
            r0.setVisibility(r1)
            com.kwad.components.core.page.b.a.b r0 = r3.MW
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            boolean r0 = r0.mRewardVerifyCalled
            if (r0 == 0) goto L27
            android.widget.TextView r0 = r3.Ne
            java.lang.String r1 = "任务已完成"
            r0.setText(r1)
            android.widget.TextView r0 = r3.Nf
            r1 = 8
            r0.setVisibility(r1)
            android.widget.TextView r0 = r3.Ng
            r0.setVisibility(r1)
            android.widget.TextView r0 = r3.Nh
            r0.setVisibility(r1)
            return
        L27:
            r3.oM()
            java.lang.Runnable r0 = r3.Nk
            r1 = 1000(0x3e8, double:4.94E-321)
            com.kwad.sdk.utils.bj.runOnUiThreadDelay(r0, r1)
            return
    }

    private void oM() {
            r2 = this;
            android.widget.TextView r0 = r2.Nf
            java.lang.String r1 = r2.oN()
            r0.setText(r1)
            android.widget.TextView r0 = r2.Nh
            java.lang.String r1 = r2.oO()
            r0.setText(r1)
            return
    }

    private java.lang.String oN() {
            r3 = this;
            int r0 = r3.Ni
            int r0 = r0 / 60
            r1 = 10
            if (r0 < r1) goto L15
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
        Ld:
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
        L15:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "0"
            r1.<init>(r2)
            goto Ld
    }

    private java.lang.String oO() {
            r3 = this;
            int r0 = r3.Ni
            int r0 = r0 % 60
            r1 = 10
            if (r0 < r1) goto L15
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
        Ld:
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
        L15:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "0"
            r1.<init>(r2)
            goto Ld
    }

    @Override
    public final void ah() {
            r1 = this;
            super.ah()
            com.kwad.sdk.core.c.b.AU()
            com.kwad.sdk.core.c.c r0 = r1.xj
            com.kwad.sdk.core.c.b.a(r0)
            int r0 = com.kwad.sdk.core.config.d.zC()
            r1.Ni = r0
            r1.oL()
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_reward_land_page_open_tip
            android.view.View r0 = r1.findViewById(r0)
            android.widget.LinearLayout r0 = (android.widget.LinearLayout) r0
            r1.Nd = r0
            int r0 = com.kwad.sdk.R.id.ksad_reward_land_page_open_desc
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.Ne = r0
            int r0 = com.kwad.sdk.R.id.ksad_reward_land_page_open_minute
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.Nf = r0
            int r0 = com.kwad.sdk.R.id.ksad_reward_land_page_open_colon
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.Ng = r0
            int r0 = com.kwad.sdk.R.id.ksad_reward_land_page_open_second
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.Nh = r0
            return
    }

    @Override
    public final void onUnbind() {
            r1 = this;
            super.onUnbind()
            com.kwad.sdk.core.c.b.AU()
            com.kwad.sdk.core.c.c r0 = r1.xj
            com.kwad.sdk.core.c.b.b(r0)
            java.lang.Runnable r0 = r1.Nk
            com.kwad.sdk.utils.bj.b(r0)
            return
    }
}
