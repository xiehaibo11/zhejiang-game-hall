package com.kwad.components.ad.f.b;

import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl;
import com.kwad.components.core.video.l;
import com.kwad.sdk.R;
import com.kwad.sdk.api.KsAdVideoPlayConfig;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.utils.ag;
import com.kwad.sdk.utils.bh;

public final class a extends com.kwad.components.ad.f.a.a implements View.OnClickListener {
    private KsAdVideoPlayConfig dJ;
    private ViewGroup mZ;
    private ImageView na;
    private TextView nb;

    public a(KsAdVideoPlayConfig ksAdVideoPlayConfig) {
        this.dJ = ksAdVideoPlayConfig;
    }

    private boolean e(AdInfo adInfo) {
        if (!ag.isNetworkConnected(getContext())) {
            return false;
        }
        KsAdVideoPlayConfig ksAdVideoPlayConfig = this.dJ;
        if (ksAdVideoPlayConfig instanceof KSAdVideoPlayConfigImpl) {
            KSAdVideoPlayConfigImpl kSAdVideoPlayConfigImpl = (KSAdVideoPlayConfigImpl) ksAdVideoPlayConfig;
            if (kSAdVideoPlayConfigImpl.getVideoAutoPlayType() == 1) {
                return true;
            }
            if (kSAdVideoPlayConfigImpl.getVideoAutoPlayType() == 2) {
                return ag.isWifiConnected(getContext());
            }
            if (kSAdVideoPlayConfigImpl.getVideoAutoPlayType() == 3) {
                return false;
            }
            if (kSAdVideoPlayConfigImpl.getDataFlowAutoStartValue() != 0) {
                return ag.isWifiConnected(getContext()) || (kSAdVideoPlayConfigImpl.isDataFlowAutoStart() && ag.isMobileConnected(getContext()));
            }
        }
        if (com.kwad.sdk.core.response.b.a.bI(adInfo)) {
            return true;
        }
        return com.kwad.sdk.core.response.b.a.bJ(adInfo) && ag.isWifiConnected(getContext());
    }

    private void eN() {
        if (this.mZ.getVisibility() != 0) {
            return;
        }
        this.mZ.setVisibility(8);
    }

    @Override
    public final void ah() {
        ViewGroup viewGroup;
        int i;
        super.ah();
        if (e(com.kwad.sdk.core.response.b.d.cg(this.mV.mAdTemplate))) {
            viewGroup = this.mZ;
            i = 8;
        } else {
            this.nb.setText(bh.V(com.kwad.sdk.core.response.b.a.G(r0) * 1000));
            this.na.setOnClickListener(this);
            this.mV.mAdTemplate.mVideoPlayerStatus.mVideoPlayerBehavior = 2;
            viewGroup = this.mZ;
            i = 0;
        }
        viewGroup.setVisibility(i);
        this.mVideoPlayStateListener = new l() {
            @Override
            public final void onMediaPlayStart() {
                super.onMediaPlayStart();
                a.this.eN();
            }

            @Override
            public final void onMediaPlaying() {
                super.onMediaPlaying();
                a.this.eN();
            }
        };
        this.mV.mW.b(this.mVideoPlayStateListener);
    }

    @Override
    public final void onClick(View view) {
        if (view == this.na) {
            this.mV.mW.eV();
        }
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.mZ = (ViewGroup) findViewById(R.id.ksad_data_flow_container);
        this.na = (ImageView) findViewById(R.id.ksad_data_flow_play_btn);
        this.nb = (TextView) findViewById(R.id.ksad_data_flow_play_tip);
    }
}
