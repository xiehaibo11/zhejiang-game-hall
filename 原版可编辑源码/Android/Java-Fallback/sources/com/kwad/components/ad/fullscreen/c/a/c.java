package com.kwad.components.ad.fullscreen.c.a;

public final class c extends com.kwad.components.ad.reward.presenter.a implements android.view.View.OnClickListener {
    private android.widget.ImageView gG;
    private com.kwad.sdk.utils.h.a gH;
    private com.kwad.components.core.webview.b.e.e gt;



    public c() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.fullscreen.c.a.c$1 r0 = new com.kwad.components.ad.fullscreen.c.a.c$1
            r0.<init>(r1)
            r1.gH = r0
            com.kwad.components.ad.fullscreen.c.a.c$2 r0 = new com.kwad.components.ad.fullscreen.c.a.c$2
            r0.<init>(r1)
            r1.gt = r0
            return
    }

    static android.widget.ImageView a(com.kwad.components.ad.fullscreen.c.a.c r0) {
            android.widget.ImageView r0 = r0.gG
            return r0
    }

    static com.kwad.components.ad.reward.j b(com.kwad.components.ad.fullscreen.c.a.c r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    private void bU() {
            r3 = this;
            android.widget.ImageView r0 = r3.gG
            r1 = 0
            r0.setVisibility(r1)
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.sdk.api.KsVideoPlayConfig r0 = r0.mVideoPlayConfig
            com.kwad.components.ad.reward.j r2 = r3.qx
            boolean r2 = r2.oU
            if (r2 != 0) goto L21
            android.content.Context r2 = r3.getContext()
            com.kwad.components.core.t.a r2 = com.kwad.components.core.t.a.al(r2)
            boolean r2 = r2.qh()
            if (r2 == 0) goto L21
            android.widget.ImageView r0 = r3.gG
            goto L3d
        L21:
            if (r0 == 0) goto L3a
            android.widget.ImageView r1 = r3.gG
            boolean r2 = r0.isVideoSoundEnable()
            r1.setSelected(r2)
            com.kwad.components.ad.reward.j r1 = r3.qx
            boolean r2 = r0.isVideoSoundEnable()
            boolean r0 = r0.isVideoSoundEnable()
            r1.c(r2, r0)
            goto L45
        L3a:
            android.widget.ImageView r0 = r3.gG
            r1 = 1
        L3d:
            r0.setSelected(r1)
            com.kwad.components.ad.reward.j r0 = r3.qx
            r0.c(r1, r1)
        L45:
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.sdk.utils.h$a r1 = r3.gH
            r0.a(r1)
            return
    }

    static com.kwad.components.ad.reward.j c(com.kwad.components.ad.fullscreen.c.a.c r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static void d(com.kwad.components.ad.fullscreen.c.a.c r0) {
            r0.bU()
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = com.kwad.components.ad.reward.j.c(r0)
            if (r0 == 0) goto L15
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.a(r1)
            return
        L15:
            r2.bU()
            return
    }

    @Override
    public final void onClick(android.view.View r3) {
            r2 = this;
            android.widget.ImageView r0 = r2.gG
            if (r3 != r0) goto L1d
            com.kwad.components.ad.reward.j r3 = r2.qx
            com.kwad.components.ad.reward.l.d r3 = r3.oV
            android.widget.ImageView r0 = r2.gG
            boolean r0 = r0.isSelected()
            r1 = 1
            r0 = r0 ^ r1
            r3.setAudioEnabled(r0, r1)
            android.widget.ImageView r3 = r2.gG
            boolean r0 = r3.isSelected()
            r0 = r0 ^ r1
            r3.setSelected(r0)
        L1d:
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_video_sound_switch
            android.view.View r0 = r1.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r1.gG = r0
            r0.setOnClickListener(r1)
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.b(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.sdk.utils.h$a r1 = r2.gH
            r0.b(r1)
            return
    }
}
