package com.kwad.components.ad.reward.presenter.platdetail.a;

import android.view.View;
import android.widget.ImageView;
import com.kwad.components.core.webview.b.j;
import com.kwad.sdk.R;
import com.kwad.sdk.api.KsVideoPlayConfig;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.h;

public final class d extends com.kwad.components.ad.reward.presenter.a implements View.OnClickListener {
    private ImageView gG;
    private h.a gH = new h.a() {
        @Override
        public final void onAudioBeOccupied() {
            if (d.this.gG == null || com.kwad.components.ad.reward.a.b.gF()) {
                return;
            }
            d.this.gG.post(new Runnable() {
                @Override
                public final void run() {
                    d.this.gG.setSelected(false);
                    d.this.qx.oV.setAudioEnabled(false, false);
                }
            });
        }

        @Override
        public final void onAudioBeReleased() {
        }
    };
    private com.kwad.components.core.webview.b.e.e gt = new com.kwad.components.core.webview.b.e.e() {
        @Override
        public final void q(String str) {
            if (j.b("ksad-video-top-bar", d.this.qx.mAdTemplate).equals(str)) {
                d.this.bU();
            }
        }
    };
    private AdTemplate mAdTemplate;
    private ImageView vq;

    private void bU() {
        AdTemplate adTemplate = this.qx.mAdTemplate;
        this.mAdTemplate = adTemplate;
        this.gG.setVisibility(com.kwad.components.ad.reward.j.t(adTemplate) ? 8 : 0);
        this.vq.setVisibility(com.kwad.components.ad.reward.j.t(this.mAdTemplate) ? 0 : 8);
        KsVideoPlayConfig ksVideoPlayConfig = this.qx.mVideoPlayConfig;
        boolean zIsVideoSoundEnable = true;
        if (!this.qx.oU && com.kwad.components.core.t.a.al(getContext()).qh()) {
            this.vq.setSelected(true);
            this.qx.c(false, false);
            zIsVideoSoundEnable = false;
        } else if (ksVideoPlayConfig != null) {
            zIsVideoSoundEnable = ksVideoPlayConfig.isVideoSoundEnable();
            this.vq.setSelected(ksVideoPlayConfig.isVideoSoundEnable());
            this.qx.c(ksVideoPlayConfig.isVideoSoundEnable(), ksVideoPlayConfig.isVideoSoundEnable());
        } else {
            this.vq.setSelected(true);
            this.qx.c(true, true);
        }
        this.gG.setSelected(zIsVideoSoundEnable);
        this.qx.oV.setAudioEnabled(zIsVideoSoundEnable, false);
        this.qx.oV.a(this.gH);
    }

    private void iv() {
        this.gG.setOnClickListener(this);
        this.vq.setOnClickListener(this);
    }

    @Override
    public final void ah() {
        super.ah();
        if (com.kwad.components.ad.reward.j.b(this.qx)) {
            com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
        } else if (!hx()) {
            bU();
        } else {
            this.gG.setVisibility(8);
            this.vq.setVisibility(8);
        }
    }

    @Override
    public final void onClick(View view) {
        if (view == this.gG) {
            this.qx.oV.setAudioEnabled(!this.gG.isSelected(), true);
            this.gG.setSelected(!r3.isSelected());
        } else if (view == this.vq) {
            this.qx.oV.setAudioEnabled(!this.vq.isSelected(), true);
            this.vq.setSelected(!r3.isSelected());
        }
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.gG = (ImageView) findViewById(R.id.ksad_video_sound_switch);
        this.vq = (ImageView) findViewById(R.id.ksad_reward_deep_task_sound_switch);
        iv();
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.components.core.webview.b.d.b.sf().b(this.gt);
        this.qx.oV.b(this.gH);
    }
}
