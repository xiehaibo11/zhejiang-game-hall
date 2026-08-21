package com.kwad.components.ad.f.b;

public final class j extends com.kwad.components.ad.f.a.a {
    private android.view.View ns;


    public j() {
            r0 = this;
            r0.<init>()
            return
    }

    static void a(com.kwad.components.ad.f.b.j r0) {
            r0.eS()
            return
    }

    private void eS() {
            r2 = this;
            android.view.View r0 = r2.ns
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L9
            return
        L9:
            android.view.View r0 = r2.ns
            r1 = 0
            r0.setVisibility(r1)
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            android.view.View r0 = r2.ns
            r1 = 8
            r0.setVisibility(r1)
            com.kwad.components.ad.f.b.j$1 r0 = new com.kwad.components.ad.f.b.j$1
            r0.<init>(r2)
            r2.mVideoPlayStateListener = r0
            com.kwad.components.ad.f.a.b r0 = r2.mV
            com.kwad.components.ad.f.c.a r0 = r0.mW
            com.kwad.components.core.video.k r1 = r2.mVideoPlayStateListener
            r0.a(r1)
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_video_error_container
            android.view.View r0 = r1.findViewById(r0)
            r1.ns = r0
            return
    }
}
