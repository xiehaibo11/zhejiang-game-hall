package com.kwad.components.ad.reward.presenter;

import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import com.kwad.components.core.video.DetailVideoView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.utils.ai;

public final class u extends a {
    private ImageView tA;
    private DetailVideoView tx;
    private ViewGroup ty;
    private FrameLayout tz;
    private ViewGroup.LayoutParams tB = null;
    private com.kwad.components.core.video.l mVideoPlayStateListener = new com.kwad.components.core.video.l() {
        @Override
        public final void onMediaPlayStart() {
            super.onMediaPlayStart();
            u.this.tx.postDelayed(new Runnable() {
                @Override
                public final void run() {
                    u.this.tx.setVisibility(0);
                }
            }, 200L);
        }
    };

    private void N(int i) {
        this.tz.addView(com.kwad.sdk.m.l.a(getContext(), i, this.tz, false), -1, -1);
    }

    private void hS() {
    }

    private void hT() {
        int i;
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.qx.mAdTemplate);
        getContext();
        boolean z = !ai.IN();
        boolean zBv = com.kwad.sdk.core.response.b.a.bv(adInfoCg);
        boolean z2 = com.kwad.sdk.core.response.b.a.co(adInfoCg) && com.kwad.components.ad.reward.a.b.gP();
        boolean z3 = com.kwad.components.ad.reward.j.r(this.qx.mAdTemplate) || com.kwad.components.ad.reward.j.s(this.qx.mAdTemplate) || zBv || z2;
        if (!z || !z3) {
            this.ty.setVisibility(8);
            return;
        }
        this.ty.setVisibility(z2 ? 4 : 0);
        if (zBv) {
            this.tA.setVisibility(8);
            i = R.layout.ksad_playable_end_info;
        } else {
            i = R.layout.ksad_activity_apk_info_landscape;
        }
        N(i);
        if (!com.kwad.sdk.core.response.b.a.aR(adInfoCg)) {
            this.tx.updateTextureViewGravity(17);
        } else {
            this.tx.updateTextureViewGravity(21);
        }
    }

    @Override
    public final void ah() {
        super.ah();
        hS();
        ViewGroup.LayoutParams layoutParams = this.tx.getLayoutParams();
        if (layoutParams != null) {
            this.tB = new ViewGroup.LayoutParams(layoutParams);
        }
        this.qx.oV.a(this.mVideoPlayStateListener);
        hT();
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.tx = (DetailVideoView) findViewById(R.id.ksad_video_player);
        this.ty = (ViewGroup) findViewById(R.id.ksad_play_right_area);
        this.tA = (ImageView) findViewById(R.id.ksad_play_right_area_bg_img);
        this.tz = (FrameLayout) findViewById(R.id.ksad_play_right_area_container);
    }

    @Override
    public final void onUnbind() {
        DetailVideoView detailVideoView;
        super.onUnbind();
        this.qx.oV.b(this.mVideoPlayStateListener);
        if (this.tB == null || (detailVideoView = this.tx) == null) {
            return;
        }
        ViewGroup.LayoutParams layoutParams = detailVideoView.getLayoutParams();
        if (layoutParams != null) {
            layoutParams.width = this.tB.width;
            layoutParams.height = this.tB.height;
            this.tx.setLayoutParams(layoutParams);
        }
        DetailVideoView detailVideoView2 = this.tx;
        if (detailVideoView2 != null) {
            detailVideoView2.setVisibility(4);
        }
        this.tB = null;
    }
}
