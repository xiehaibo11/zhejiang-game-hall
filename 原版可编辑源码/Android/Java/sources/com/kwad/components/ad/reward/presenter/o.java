package com.kwad.components.ad.reward.presenter;

import com.kwad.components.core.page.DownloadLandPageActivity;
import com.kwad.components.core.playable.PlayableSource;
import com.kwad.components.core.webview.jshandler.ah;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.webview.KsAdWebView;

public final class o extends a {
    private com.kwad.components.core.playable.a oX;
    private PlayableSource sF;
    private final com.kwad.components.ad.reward.e.h sG = new com.kwad.components.ad.reward.e.i() {
        @Override
        public final void a(PlayableSource playableSource, com.kwad.components.ad.reward.e.l lVar) {
            o.this.sF = playableSource;
            if (o.this.oX != null && o.this.oX.px()) {
                o.this.oX.e(playableSource);
                if (o.this.qx != null) {
                    o.this.qx.d(playableSource);
                    o.this.qx.D(true);
                    if (o.this.qx.oV.jR()) {
                        o.this.qx.oV.jS().pause();
                    }
                }
                com.kwad.components.ad.reward.b.fp().b(playableSource);
                return;
            }
            if (o.this.oX != null) {
                o.this.oX.hH();
            }
            if (lVar != null) {
                lVar.hc();
                com.kwad.sdk.core.e.c.d("RewardPlayablePresenter", "onEnterPlayable outer handled");
            } else if (com.kwad.sdk.core.response.b.a.ax(com.kwad.sdk.core.response.b.d.cg(o.this.qx.mAdTemplate))) {
                DownloadLandPageActivity.launch(o.this.getActivity(), o.this.qx.mAdTemplate, true);
            }
        }

        @Override
        public final void bS() {
            o.this.oX.hH();
            if (o.this.qx != null) {
                o.this.qx.d((PlayableSource) null);
                if (o.this.qx.oV.jR()) {
                    o.this.qx.oV.jS().resume();
                }
            }
        }
    };

    @Override
    public final void ah() {
        super.ah();
        com.kwad.components.core.playable.a aVar = this.qx.oX;
        this.oX = aVar;
        aVar.a(this.qx.mAdTemplate, this.qx.mRootContainer, this.qx.mApkDownloadHelper);
        com.kwad.components.ad.reward.monitor.a.a(this.qx.pj, "playable");
        com.kwad.components.ad.reward.monitor.a.a(this.qx.pj, "playable", com.kwad.sdk.core.response.b.a.bB(com.kwad.sdk.core.response.b.d.cg(this.qx.mAdTemplate)));
        this.oX.pw();
        this.oX.a(new ah.b() {
            @Override
            public final void a(ah.a aVar2) {
                if (aVar2.isSuccess()) {
                    return;
                }
                AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(o.this.qx.mAdTemplate);
                long loadTime = o.this.qx.oX.getLoadTime();
                if (loadTime == -1) {
                    return;
                }
                com.kwad.components.ad.reward.monitor.a.a(o.this.qx.pj, "playable", com.kwad.sdk.core.response.b.a.bB(adInfoCg), System.currentTimeMillis() - loadTime, 3);
            }
        });
        this.oX.a(new KsAdWebView.d() {
            @Override
            public final void onPageFinished() {
                AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(o.this.qx.mAdTemplate);
                long loadTime = o.this.qx.oX.getLoadTime();
                if (loadTime == -1) {
                    return;
                }
                com.kwad.components.ad.reward.monitor.a.a(o.this.qx.pj, "playable", com.kwad.sdk.core.response.b.a.bB(adInfoCg), System.currentTimeMillis() - loadTime);
            }

            @Override
            public final void onPageStart() {
            }

            @Override
            public final void onReceivedHttpError(int i, String str, String str2) {
                com.kwad.components.ad.reward.monitor.a.a(o.this.qx.pj, "playable", com.kwad.sdk.core.response.b.a.bB(com.kwad.sdk.core.response.b.d.cg(o.this.qx.mAdTemplate)), System.currentTimeMillis() - o.this.qx.oX.getLoadTime(), 2);
            }
        });
        com.kwad.components.ad.reward.b.fp().a(this.sG);
    }

    public final void e(PlayableSource playableSource) {
        com.kwad.components.core.playable.a aVar = this.oX;
        if (aVar != null) {
            if (playableSource != null) {
                aVar.e(playableSource);
            } else {
                aVar.e(this.sF);
            }
        }
    }

    public final void hH() {
        com.kwad.components.core.playable.a aVar = this.oX;
        if (aVar != null) {
            aVar.hH();
        }
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        ((KsAdWebView) findViewById(R.id.ksad_playable_webview)).setVisibility(4);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        this.oX.pv();
        this.oX.hH();
        com.kwad.components.ad.reward.b.fp().b(this.sG);
    }
}
