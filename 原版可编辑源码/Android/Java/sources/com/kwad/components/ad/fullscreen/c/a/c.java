package com.kwad.components.ad.fullscreen.c.a;

import android.view.View;
import android.widget.ImageView;
import com.kwad.components.core.webview.b.j;
import com.kwad.sdk.R;
import com.kwad.sdk.api.KsVideoPlayConfig;
import com.kwad.sdk.utils.h;

public final class c extends com.kwad.components.ad.reward.presenter.a implements View.OnClickListener {
    private ImageView gG;
    private h.a gH = new h.a() {
        @Override
        public final void onAudioBeOccupied() {
            if (c.this.gG == null || com.kwad.components.ad.reward.a.b.gF()) {
                return;
            }
            c.this.gG.post(new Runnable() {
                @Override
                public final void run() {
                    c.this.gG.setSelected(false);
                    c.this.qx.oV.setAudioEnabled(false, false);
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
            if (j.b("ksad-video-top-bar", c.this.qx.mAdTemplate).equals(str)) {
                c.this.bU();
            }
        }
    };

    private void bU() {
        ImageView imageView;
        boolean z = false;
        this.gG.setVisibility(0);
        KsVideoPlayConfig ksVideoPlayConfig = this.qx.mVideoPlayConfig;
        if (!this.qx.oU && com.kwad.components.core.t.a.al(getContext()).qh()) {
            imageView = this.gG;
        } else {
            if (ksVideoPlayConfig != null) {
                this.gG.setSelected(ksVideoPlayConfig.isVideoSoundEnable());
                this.qx.c(ksVideoPlayConfig.isVideoSoundEnable(), ksVideoPlayConfig.isVideoSoundEnable());
                this.qx.oV.a(this.gH);
            }
            imageView = this.gG;
            z = true;
        }
        imageView.setSelected(z);
        this.qx.c(z, z);
        this.qx.oV.a(this.gH);
    }

    @Override
    public final void ah() {
        super.ah();
        if (com.kwad.components.ad.reward.j.c(this.qx)) {
            com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
        } else {
            bU();
        }
    }

    @Override
    public final void onClick(View view) {
        if (view == this.gG) {
            this.qx.oV.setAudioEnabled(!this.gG.isSelected(), true);
            this.gG.setSelected(!r3.isSelected());
        }
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        ImageView imageView = (ImageView) findViewById(R.id.ksad_video_sound_switch);
        this.gG = imageView;
        imageView.setOnClickListener(this);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.components.core.webview.b.d.b.sf().b(this.gt);
        this.qx.oV.b(this.gH);
    }
}
