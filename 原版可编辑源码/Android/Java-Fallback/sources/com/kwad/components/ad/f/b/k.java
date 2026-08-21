package com.kwad.components.ad.f.b;

public final class k extends com.kwad.components.ad.f.a.a {
    private android.widget.ProgressBar nu;


    public k() {
            r0 = this;
            r0.<init>()
            return
    }

    private void G(int r2) {
            r1 = this;
            android.widget.ProgressBar r0 = r1.nu
            r0.setProgress(r2)
            android.widget.ProgressBar r2 = r1.nu
            int r2 = r2.getVisibility()
            if (r2 != 0) goto Le
            return
        Le:
            android.widget.ProgressBar r2 = r1.nu
            r0 = 0
            r2.setVisibility(r0)
            return
    }

    static void a(com.kwad.components.ad.f.b.k r0) {
            r0.eT()
            return
    }

    static void a(com.kwad.components.ad.f.b.k r0, int r1) {
            r0.G(r1)
            return
    }

    private void eT() {
            r2 = this;
            android.widget.ProgressBar r0 = r2.nu
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L9
            return
        L9:
            android.widget.ProgressBar r0 = r2.nu
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            android.widget.ProgressBar r0 = r2.nu
            r1 = 0
            r0.setProgress(r1)
            android.widget.ProgressBar r0 = r2.nu
            r1 = 8
            r0.setVisibility(r1)
            com.kwad.components.ad.f.b.k$1 r0 = new com.kwad.components.ad.f.b.k$1
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
            int r0 = com.kwad.sdk.R.id.ksad_video_progress
            android.view.View r0 = r1.findViewById(r0)
            android.widget.ProgressBar r0 = (android.widget.ProgressBar) r0
            r1.nu = r0
            return
    }
}
