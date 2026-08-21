package com.kwad.components.ad.reward.presenter.platdetail.a;

public final class d extends com.kwad.components.ad.reward.presenter.a implements android.view.View.OnClickListener {
    private android.widget.ImageView gG;
    private com.kwad.sdk.utils.h.a gH;
    private com.kwad.components.core.webview.b.e.e gt;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private android.widget.ImageView vq;



    public d() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.reward.presenter.platdetail.a.d$1 r0 = new com.kwad.components.ad.reward.presenter.platdetail.a.d$1
            r0.<init>(r1)
            r1.gH = r0
            com.kwad.components.ad.reward.presenter.platdetail.a.d$2 r0 = new com.kwad.components.ad.reward.presenter.platdetail.a.d$2
            r0.<init>(r1)
            r1.gt = r0
            return
    }

    static android.widget.ImageView a(com.kwad.components.ad.reward.presenter.platdetail.a.d r0) {
            android.widget.ImageView r0 = r0.gG
            return r0
    }

    static com.kwad.components.ad.reward.j b(com.kwad.components.ad.reward.presenter.platdetail.a.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    private void bU() {
            r5 = this;
            com.kwad.components.ad.reward.j r0 = r5.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r5.mAdTemplate = r0
            android.widget.ImageView r1 = r5.gG
            boolean r0 = com.kwad.components.ad.reward.j.t(r0)
            r2 = 8
            r3 = 0
            if (r0 == 0) goto L13
            r0 = r2
            goto L14
        L13:
            r0 = r3
        L14:
            r1.setVisibility(r0)
            android.widget.ImageView r0 = r5.vq
            com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate
            boolean r1 = com.kwad.components.ad.reward.j.t(r1)
            if (r1 == 0) goto L22
            r2 = r3
        L22:
            r0.setVisibility(r2)
            com.kwad.components.ad.reward.j r0 = r5.qx
            com.kwad.sdk.api.KsVideoPlayConfig r0 = r0.mVideoPlayConfig
            com.kwad.components.ad.reward.j r1 = r5.qx
            boolean r1 = r1.oU
            r2 = 1
            if (r1 != 0) goto L4a
            android.content.Context r1 = r5.getContext()
            com.kwad.components.core.t.a r1 = com.kwad.components.core.t.a.al(r1)
            boolean r1 = r1.qh()
            if (r1 == 0) goto L4a
            android.widget.ImageView r0 = r5.vq
            r0.setSelected(r2)
            com.kwad.components.ad.reward.j r0 = r5.qx
            r0.c(r3, r3)
            r2 = r3
            goto L71
        L4a:
            if (r0 == 0) goto L67
            boolean r2 = r0.isVideoSoundEnable()
            android.widget.ImageView r1 = r5.vq
            boolean r4 = r0.isVideoSoundEnable()
            r1.setSelected(r4)
            com.kwad.components.ad.reward.j r1 = r5.qx
            boolean r4 = r0.isVideoSoundEnable()
            boolean r0 = r0.isVideoSoundEnable()
            r1.c(r4, r0)
            goto L71
        L67:
            android.widget.ImageView r0 = r5.vq
            r0.setSelected(r2)
            com.kwad.components.ad.reward.j r0 = r5.qx
            r0.c(r2, r2)
        L71:
            android.widget.ImageView r0 = r5.gG
            r0.setSelected(r2)
            com.kwad.components.ad.reward.j r0 = r5.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            r0.setAudioEnabled(r2, r3)
            com.kwad.components.ad.reward.j r0 = r5.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.sdk.utils.h$a r1 = r5.gH
            r0.a(r1)
            return
    }

    static com.kwad.components.ad.reward.j c(com.kwad.components.ad.reward.presenter.platdetail.a.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static void d(com.kwad.components.ad.reward.presenter.platdetail.a.d r0) {
            r0.bU()
            return
    }

    private void iv() {
            r1 = this;
            android.widget.ImageView r0 = r1.gG
            r0.setOnClickListener(r1)
            android.widget.ImageView r0 = r1.vq
            r0.setOnClickListener(r1)
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = com.kwad.components.ad.reward.j.b(r0)
            if (r0 == 0) goto L15
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.a(r1)
            return
        L15:
            boolean r0 = r2.hx()
            if (r0 == 0) goto L28
            android.widget.ImageView r0 = r2.gG
            r1 = 8
            r0.setVisibility(r1)
            android.widget.ImageView r0 = r2.vq
            r0.setVisibility(r1)
            return
        L28:
            r2.bU()
            return
    }

    @Override
    public final void onClick(android.view.View r3) {
            r2 = this;
            android.widget.ImageView r0 = r2.gG
            r1 = 1
            if (r3 != r0) goto L1e
            com.kwad.components.ad.reward.j r3 = r2.qx
            com.kwad.components.ad.reward.l.d r3 = r3.oV
            android.widget.ImageView r0 = r2.gG
            boolean r0 = r0.isSelected()
            r0 = r0 ^ r1
            r3.setAudioEnabled(r0, r1)
            android.widget.ImageView r3 = r2.gG
            boolean r0 = r3.isSelected()
            r0 = r0 ^ r1
            r3.setSelected(r0)
            return
        L1e:
            android.widget.ImageView r0 = r2.vq
            if (r3 != r0) goto L3a
            com.kwad.components.ad.reward.j r3 = r2.qx
            com.kwad.components.ad.reward.l.d r3 = r3.oV
            android.widget.ImageView r0 = r2.vq
            boolean r0 = r0.isSelected()
            r0 = r0 ^ r1
            r3.setAudioEnabled(r0, r1)
            android.widget.ImageView r3 = r2.vq
            boolean r0 = r3.isSelected()
            r0 = r0 ^ r1
            r3.setSelected(r0)
        L3a:
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
            int r0 = com.kwad.sdk.R.id.ksad_reward_deep_task_sound_switch
            android.view.View r0 = r1.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r1.vq = r0
            r1.iv()
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
