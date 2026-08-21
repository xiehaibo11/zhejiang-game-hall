package com.kwad.components.ad.draw.b;

public final class d extends com.kwad.components.ad.draw.a.a {
    private android.widget.TextView cp;
    private com.kwad.components.core.video.k mVideoPlayStateListener;


    public d() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.draw.b.d$1 r0 = new com.kwad.components.ad.draw.b.d$1
            r0.<init>(r1)
            r1.mVideoPlayStateListener = r0
            return
    }

    static android.widget.TextView a(com.kwad.components.ad.draw.b.d r0) {
            android.widget.TextView r0 = r0.cp
            return r0
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            android.content.Context r0 = r2.getContext()
            boolean r0 = com.kwad.sdk.utils.ag.isNetworkConnected(r0)
            if (r0 != 0) goto L11
            android.widget.TextView r0 = r2.cp
            r1 = 0
            goto L15
        L11:
            android.widget.TextView r0 = r2.cp
            r1 = 8
        L15:
            r0.setVisibility(r1)
            com.kwad.components.ad.draw.a.b r0 = r2.bE
            com.kwad.components.ad.draw.c.a r0 = r0.bF
            com.kwad.components.core.video.k r1 = r2.mVideoPlayStateListener
            r0.a(r1)
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_video_fail_tip
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.cp = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.draw.a.b r0 = r2.bE
            com.kwad.components.ad.draw.c.a r0 = r0.bF
            com.kwad.components.core.video.k r1 = r2.mVideoPlayStateListener
            r0.b(r1)
            return
    }
}
