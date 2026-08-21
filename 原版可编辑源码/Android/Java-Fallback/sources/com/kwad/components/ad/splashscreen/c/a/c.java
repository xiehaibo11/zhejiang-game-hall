package com.kwad.components.ad.splashscreen.c.a;

public final class c extends com.kwad.components.ad.splashscreen.c.e implements android.view.View.OnClickListener, com.kwad.sdk.widget.c {
    private com.kwad.components.ad.splashscreen.widget.CloseCountDownView Ej;
    private android.view.ViewGroup Ek;
    private android.view.ViewGroup El;
    private android.widget.ImageView Em;
    private android.widget.TextView En;
    private android.widget.TextView Eo;
    private com.kwad.components.ad.splashscreen.widget.CloseCountDownView.a Ep;


    public c() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.splashscreen.c.a.c$1 r0 = new com.kwad.components.ad.splashscreen.c.a.c$1
            r0.<init>(r1)
            r1.Ep = r0
            return
    }

    static com.kwad.components.ad.splashscreen.h a(com.kwad.components.ad.splashscreen.c.a.c r0) {
            com.kwad.components.ad.splashscreen.h r0 = r0.CM
            return r0
    }

    static com.kwad.components.ad.splashscreen.h b(com.kwad.components.ad.splashscreen.c.a.c r0) {
            com.kwad.components.ad.splashscreen.h r0 = r0.CM
            return r0
    }

    static com.kwad.components.ad.splashscreen.h c(com.kwad.components.ad.splashscreen.c.a.c r0) {
            com.kwad.components.ad.splashscreen.h r0 = r0.CM
            return r0
    }

    static com.kwad.components.ad.splashscreen.h d(com.kwad.components.ad.splashscreen.c.a.c r0) {
            com.kwad.components.ad.splashscreen.h r0 = r0.CM
            return r0
    }

    static com.kwad.components.ad.splashscreen.h e(com.kwad.components.ad.splashscreen.c.a.c r0) {
            com.kwad.components.ad.splashscreen.h r0 = r0.CM
            return r0
    }

    static com.kwad.components.ad.splashscreen.h f(com.kwad.components.ad.splashscreen.c.a.c r0) {
            com.kwad.components.ad.splashscreen.h r0 = r0.CM
            return r0
    }

    static com.kwad.components.ad.splashscreen.h g(com.kwad.components.ad.splashscreen.c.a.c r0) {
            com.kwad.components.ad.splashscreen.h r0 = r0.CM
            return r0
    }

    static com.kwad.components.ad.splashscreen.h h(com.kwad.components.ad.splashscreen.c.a.c r0) {
            com.kwad.components.ad.splashscreen.h r0 = r0.CM
            return r0
    }

    private void s(android.view.View r5) {
            r4 = this;
            android.view.ViewGroup r0 = r4.Ek
            r1 = 2
            if (r5 != r0) goto L11
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            android.content.Context r5 = r5.getContext()
            r2 = 104(0x68, float:1.46E-43)
            r0.c(r1, r5, r2, r1)
            return
        L11:
            android.view.ViewGroup r0 = r4.El
            if (r5 != r0) goto L22
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            android.content.Context r5 = r5.getContext()
            r2 = 26
            r3 = 1
            r0.c(r1, r5, r2, r3)
            return
        L22:
            android.widget.ImageView r0 = r4.Em
            if (r5 != r0) goto L32
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            android.content.Context r5 = r5.getContext()
            r2 = 15
            r0.c(r1, r5, r2, r1)
            return
        L32:
            android.widget.TextView r0 = r4.En
            if (r5 != r0) goto L42
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            android.content.Context r5 = r5.getContext()
            r2 = 16
            r0.c(r1, r5, r2, r1)
            return
        L42:
            android.widget.TextView r0 = r4.Eo
            if (r5 != r0) goto L51
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            android.content.Context r5 = r5.getContext()
            r2 = 17
            r0.c(r1, r5, r2, r1)
        L51:
            return
    }

    @Override
    public final void a(android.view.View r1) {
            r0 = this;
            r0.s(r1)
            return
    }

    @Override
    public final void ah() {
            r3 = this;
            super.ah()
            com.kwad.components.ad.splashscreen.widget.CloseCountDownView r0 = r3.Ej
            com.kwad.components.ad.splashscreen.widget.CloseCountDownView$a r1 = r3.Ep
            r0.setOnViewClickListener(r1)
            android.view.ViewGroup r0 = r3.El
            r0.setOnClickListener(r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.view.ViewGroup r1 = r3.El
            android.content.Context r1 = r1.getContext()
            android.view.ViewGroup r2 = r3.El
            r0.<init>(r1, r2, r3)
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.b.cL(r0)
            if (r0 == 0) goto L72
            android.view.ViewGroup r0 = r3.Ek
            r0.setOnClickListener(r3)
            android.widget.ImageView r0 = r3.Em
            r0.setOnClickListener(r3)
            android.widget.TextView r0 = r3.En
            r0.setOnClickListener(r3)
            android.widget.TextView r0 = r3.Eo
            r0.setOnClickListener(r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.view.ViewGroup r1 = r3.El
            android.content.Context r1 = r1.getContext()
            android.view.ViewGroup r2 = r3.Ek
            r0.<init>(r1, r2, r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.view.ViewGroup r1 = r3.El
            android.content.Context r1 = r1.getContext()
            android.widget.ImageView r2 = r3.Em
            r0.<init>(r1, r2, r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.view.ViewGroup r1 = r3.El
            android.content.Context r1 = r1.getContext()
            android.widget.TextView r2 = r3.En
            r0.<init>(r1, r2, r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.view.ViewGroup r1 = r3.El
            android.content.Context r1 = r1.getContext()
            android.widget.TextView r2 = r3.Eo
            r0.<init>(r1, r2, r3)
        L72:
            return
    }

    @Override
    public final void b(android.view.View r1) {
            r0 = this;
            return
    }

    @Override
    public final void onClick(android.view.View r1) {
            r0 = this;
            r0.s(r1)
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_ad_endcard_close_root
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.components.ad.splashscreen.widget.CloseCountDownView r0 = (com.kwad.components.ad.splashscreen.widget.CloseCountDownView) r0
            r1.Ej = r0
            int r0 = com.kwad.sdk.R.id.ksad_splash_end_card_giftbox_view
            android.view.View r0 = r1.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r1.Ek = r0
            int r0 = com.kwad.sdk.R.id.ksad_splash_endcard_actionbar
            android.view.View r0 = r1.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r1.El = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_endcard_icon
            android.view.View r0 = r1.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r1.Em = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_endcard_appname
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.En = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_endcard_appdesc
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.Eo = r0
            return
    }
}
