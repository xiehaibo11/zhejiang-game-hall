package com.kwad.components.ad.f.b;

public final class h extends com.kwad.components.ad.f.a.a implements android.view.View.OnClickListener {
    private android.view.ViewGroup no;
    private android.widget.TextView np;



    public h() {
            r0 = this;
            r0.<init>()
            return
    }

    static void a(com.kwad.components.ad.f.b.h r0) {
            r0.eP()
            return
    }

    static com.kwad.components.ad.f.a.b b(com.kwad.components.ad.f.b.h r0) {
            com.kwad.components.ad.f.a.b r0 = r0.mV
            return r0
    }

    static com.kwad.components.ad.f.a.b c(com.kwad.components.ad.f.b.h r0) {
            com.kwad.components.ad.f.a.b r0 = r0.mV
            return r0
    }

    private void eP() {
            r2 = this;
            android.widget.TextView r0 = r2.np
            com.kwad.components.ad.f.a.b r1 = r2.mV
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.aw(r1)
            r0.setText(r1)
            android.view.ViewGroup r0 = r2.no
            r0.setOnClickListener(r2)
            android.view.ViewGroup r0 = r2.no
            r1 = 0
            r0.setVisibility(r1)
            return
    }

    private void eR() {
            r2 = this;
            com.kwad.components.core.e.d.a$a r0 = new com.kwad.components.core.e.d.a$a
            android.view.ViewGroup r1 = r2.no
            android.content.Context r1 = r1.getContext()
            r0.<init>(r1)
            com.kwad.components.ad.f.a.b r1 = r2.mV
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.components.core.e.d.a$a r0 = r0.P(r1)
            r1 = 2
            com.kwad.components.core.e.d.a$a r0 = r0.ao(r1)
            com.kwad.components.ad.f.b.h$2 r1 = new com.kwad.components.ad.f.b.h$2
            r1.<init>(r2)
            com.kwad.components.core.e.d.a$a r0 = r0.a(r1)
            com.kwad.components.core.e.d.a.a(r0)
            return
    }

    private void notifyAdClick() {
            r2 = this;
            com.kwad.components.ad.f.a.b r0 = r2.mV
            com.kwad.components.ad.f.d$a r0 = r0.mE
            android.view.ViewGroup r1 = r2.no
            r0.l(r1)
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.f.b.h$1 r0 = new com.kwad.components.ad.f.b.h$1
            r0.<init>(r2)
            r2.mVideoPlayStateListener = r0
            com.kwad.components.ad.f.a.b r0 = r2.mV
            com.kwad.components.ad.f.c.a r0 = r0.mW
            com.kwad.components.core.video.k r1 = r2.mVideoPlayStateListener
            r0.a(r1)
            android.view.ViewGroup r0 = r2.no
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    @Override
    public final void onClick(android.view.View r1) {
            r0 = this;
            r0.eR()
            r0.notifyAdClick()
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_video_complete_h5_container
            android.view.View r0 = r1.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r1.no = r0
            int r0 = com.kwad.sdk.R.id.ksad_h5_open
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.np = r0
            return
    }
}
