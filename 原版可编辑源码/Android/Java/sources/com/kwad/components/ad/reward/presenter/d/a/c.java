package com.kwad.components.ad.reward.presenter.d.a;

import android.widget.FrameLayout;
import com.kwad.components.ad.k.b;
import com.kwad.components.ad.reward.e.j;
import com.kwad.components.ad.reward.l;
import com.kwad.components.core.video.DetailVideoView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdTemplate;

public final class c extends com.kwad.components.ad.reward.presenter.a implements b.a {
    private com.kwad.components.ad.k.b bY;
    private FrameLayout cQ;
    private DetailVideoView mDetailVideoView;
    private int td = Integer.MIN_VALUE;
    private final j mRewardVerifyListener = new j() {
        @Override
        public final void onRewardVerify() {
            if (c.this.bY == null || !com.kwad.components.ad.reward.j.t(c.this.qx.mAdTemplate)) {
                return;
            }
            c.this.bY.ai(true);
        }
    };
    private com.kwad.sdk.core.webview.d.a.a cH = new com.kwad.sdk.core.webview.d.a.a() {
        @Override
        public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
            c.this.qx.mAdOpenInteractionListener.bE();
        }
    };

    @Override
    public final void ah() {
        super.ah();
        AdTemplate adTemplate = this.qx.mAdTemplate;
        l lVar = this.qx.oZ;
        this.bY = lVar;
        if (lVar == null) {
            return;
        }
        com.kwad.components.ad.reward.c.ft().a(this.mRewardVerifyListener);
        this.bY.a(this.cH);
        this.bY.a(this.cQ, this.qx.mRootContainer, adTemplate, this.qx.mApkDownloadHelper, this.qx.mScreenOrientation);
        this.bY.a((b.b) null);
        com.kwad.components.ad.k.b bVar = this.bY;
        if (bVar != null) {
            bVar.a(this);
        }
    }

    @Override
    public final void iG() {
        hw();
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.cQ = (FrameLayout) findViewById(R.id.ksad_web_card_container);
        this.mDetailVideoView = (DetailVideoView) findViewById(R.id.ksad_video_player);
    }

    @Override
    public final void onUnbind() {
        int i;
        super.onUnbind();
        com.kwad.components.ad.k.b bVar = this.bY;
        if (bVar != null) {
            bVar.lV();
            this.bY.lI();
        }
        com.kwad.components.ad.reward.c.ft().b(this.mRewardVerifyListener);
        DetailVideoView detailVideoView = this.mDetailVideoView;
        if (detailVideoView == null || (i = this.td) == Integer.MIN_VALUE) {
            return;
        }
        com.kwad.sdk.d.a.a.n(detailVideoView, i);
    }
}
