package com.kwad.components.ad.f.b;

public final class a extends com.kwad.components.ad.f.a.a implements android.view.View.OnClickListener {
    private com.kwad.sdk.api.KsAdVideoPlayConfig dJ;
    private android.view.ViewGroup mZ;
    private android.widget.ImageView na;
    private android.widget.TextView nb;


    public a(com.kwad.sdk.api.KsAdVideoPlayConfig r1) {
            r0 = this;
            r0.<init>()
            r0.dJ = r1
            return
    }

    static void a(com.kwad.components.ad.f.b.a r0) {
            r0.eN()
            return
    }

    private boolean e(com.kwad.sdk.core.response.model.AdInfo r6) {
            r5 = this;
            android.content.Context r0 = r5.getContext()
            boolean r0 = com.kwad.sdk.utils.ag.isNetworkConnected(r0)
            r1 = 0
            if (r0 != 0) goto Lc
            return r1
        Lc:
            com.kwad.sdk.api.KsAdVideoPlayConfig r0 = r5.dJ
            boolean r2 = r0 instanceof com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl
            r3 = 1
            if (r2 == 0) goto L57
            com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl r0 = (com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl) r0
            int r2 = r0.getVideoAutoPlayType()
            if (r2 != r3) goto L1c
            return r3
        L1c:
            int r2 = r0.getVideoAutoPlayType()
            r4 = 2
            if (r2 != r4) goto L2c
            android.content.Context r6 = r5.getContext()
            boolean r6 = com.kwad.sdk.utils.ag.isWifiConnected(r6)
            return r6
        L2c:
            int r2 = r0.getVideoAutoPlayType()
            r4 = 3
            if (r2 != r4) goto L34
            return r1
        L34:
            int r2 = r0.getDataFlowAutoStartValue()
            if (r2 == 0) goto L57
            android.content.Context r6 = r5.getContext()
            boolean r6 = com.kwad.sdk.utils.ag.isWifiConnected(r6)
            if (r6 != 0) goto L56
            boolean r6 = r0.isDataFlowAutoStart()
            if (r6 == 0) goto L55
            android.content.Context r6 = r5.getContext()
            boolean r6 = com.kwad.sdk.utils.ag.isMobileConnected(r6)
            if (r6 == 0) goto L55
            goto L56
        L55:
            return r1
        L56:
            return r3
        L57:
            boolean r0 = com.kwad.sdk.core.response.b.a.bI(r6)
            if (r0 == 0) goto L5e
            return r3
        L5e:
            boolean r6 = com.kwad.sdk.core.response.b.a.bJ(r6)
            if (r6 == 0) goto L6f
            android.content.Context r6 = r5.getContext()
            boolean r6 = com.kwad.sdk.utils.ag.isWifiConnected(r6)
            if (r6 == 0) goto L6f
            return r3
        L6f:
            return r1
    }

    private void eN() {
            r2 = this;
            android.view.ViewGroup r0 = r2.mZ
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L9
            return
        L9:
            android.view.ViewGroup r0 = r2.mZ
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    @Override
    public final void ah() {
            r4 = this;
            super.ah()
            com.kwad.components.ad.f.a.b r0 = r4.mV
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r1 = r4.e(r0)
            if (r1 != 0) goto L33
            int r0 = com.kwad.sdk.core.response.b.a.G(r0)
            android.widget.TextView r1 = r4.nb
            int r0 = r0 * 1000
            long r2 = (long) r0
            java.lang.String r0 = com.kwad.sdk.utils.bh.V(r2)
            r1.setText(r0)
            android.widget.ImageView r0 = r4.na
            r0.setOnClickListener(r4)
            com.kwad.components.ad.f.a.b r0 = r4.mV
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.VideoPlayerStatus r0 = r0.mVideoPlayerStatus
            r1 = 2
            r0.mVideoPlayerBehavior = r1
            android.view.ViewGroup r0 = r4.mZ
            r1 = 0
            goto L37
        L33:
            android.view.ViewGroup r0 = r4.mZ
            r1 = 8
        L37:
            r0.setVisibility(r1)
            com.kwad.components.ad.f.b.a$1 r0 = new com.kwad.components.ad.f.b.a$1
            r0.<init>(r4)
            r4.mVideoPlayStateListener = r0
            com.kwad.components.ad.f.a.b r0 = r4.mV
            com.kwad.components.ad.f.c.a r0 = r0.mW
            com.kwad.components.core.video.k r1 = r4.mVideoPlayStateListener
            r0.a(r1)
            return
    }

    @Override
    public final void onClick(android.view.View r2) {
            r1 = this;
            android.widget.ImageView r0 = r1.na
            if (r2 != r0) goto Lb
            com.kwad.components.ad.f.a.b r2 = r1.mV
            com.kwad.components.ad.f.c.a r2 = r2.mW
            r2.eV()
        Lb:
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_data_flow_container
            android.view.View r0 = r1.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r1.mZ = r0
            int r0 = com.kwad.sdk.R.id.ksad_data_flow_play_btn
            android.view.View r0 = r1.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r1.na = r0
            int r0 = com.kwad.sdk.R.id.ksad_data_flow_play_tip
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.nb = r0
            return
    }
}
