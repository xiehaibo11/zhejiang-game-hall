package com.kwad.components.ad.splashscreen;

import android.content.Context;
import android.content.DialogInterface;
import android.os.SystemClock;
import android.view.View;
import com.kwad.components.ad.splashscreen.c.j;
import com.kwad.components.ad.splashscreen.c.k;
import com.kwad.components.ad.splashscreen.c.l;
import com.kwad.components.ad.splashscreen.c.m;
import com.kwad.components.ad.splashscreen.c.n;
import com.kwad.components.ad.splashscreen.c.o;
import com.kwad.components.ad.splashscreen.c.p;
import com.kwad.components.ad.splashscreen.c.q;
import com.kwad.components.core.video.DetailVideoView;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.R;
import com.kwad.sdk.api.KsSplashScreenAd;
import com.kwad.sdk.api.KsVideoPlayConfig;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.view.AdBaseFrameLayout;
import com.kwad.sdk.internal.api.SceneImpl;
import com.kwad.sdk.mvp.Presenter;
import com.kwad.sdk.utils.bi;
import com.sigmob.sdk.base.mta.PointCategory;

public final class c extends com.kwad.components.core.l.c<h> implements DialogInterface.OnDismissListener, DialogInterface.OnShowListener {
    private KsSplashScreenAd.SplashScreenAdInteractionListener BR;
    private com.kwad.components.ad.splashscreen.f.d BS;
    private com.kwad.sdk.core.h.b bJ;
    private AdInfo mAdInfo;
    private SceneImpl mAdScene;
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private DetailVideoView mDetailVideoView;
    private boolean mPageDismissCalled;
    private AdBaseFrameLayout mRootContainer;
    private KsVideoPlayConfig mVideoPlayConfig;

    private c(Context context, AdTemplate adTemplate) {
        super(context);
        this.mAdTemplate = adTemplate;
        this.mAdScene = adTemplate.mAdScene;
        od();
    }

    private static Presenter D(AdTemplate adTemplate) {
        Presenter hVar;
        Presenter pVar;
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        Presenter presenter = new Presenter();
        presenter.a(new k());
        presenter.a(new com.kwad.components.ad.splashscreen.c.b());
        presenter.a(new com.kwad.components.ad.splashscreen.c.c());
        presenter.a(new o());
        if (com.kwad.sdk.core.response.b.a.aU(adInfoCg)) {
            presenter.a(new com.kwad.components.ad.splashscreen.c.d());
            hVar = new q();
        } else {
            hVar = new com.kwad.components.ad.splashscreen.c.h();
        }
        presenter.a(hVar);
        boolean zDn = com.kwad.sdk.core.response.b.b.dn(adInfoCg);
        boolean zDd = com.kwad.sdk.core.response.b.b.dd(adInfoCg);
        boolean zDh = com.kwad.sdk.core.response.b.b.dh(adInfoCg);
        boolean zDm = com.kwad.sdk.core.response.b.b.dm(adInfoCg);
        boolean zDj = com.kwad.sdk.core.response.b.b.dj(adInfoCg);
        if (!zDn) {
            if (zDj) {
                pVar = new n();
            } else if (zDd) {
                pVar = new m();
            } else if (zDh) {
                pVar = new l();
            } else if (zDm) {
                pVar = new p();
            }
            presenter.a(pVar);
        }
        if (com.kwad.sdk.core.response.b.a.aH(adInfoCg)) {
            presenter.a(new com.kwad.components.ad.splashscreen.c.f());
        }
        if (h.o(adInfoCg)) {
            presenter.a(new com.kwad.components.ad.splashscreen.c.a.f());
        }
        presenter.a(new j());
        presenter.a(new com.kwad.components.ad.splashscreen.c.a());
        presenter.a(new com.kwad.components.ad.splashscreen.c.g());
        return presenter;
    }

    public static c a(Context context, AdTemplate adTemplate, boolean z, com.kwad.sdk.core.h.b bVar, KsSplashScreenAd.SplashScreenAdInteractionListener splashScreenAdInteractionListener) throws Throwable {
        c cVar = null;
        try {
            com.kwad.sdk.i.a.ah(com.tkay.expressad.foundation.g.a.f.f, PointCategory.SHOW);
            adTemplate.showStartTime = SystemClock.elapsedRealtime();
            com.kwad.components.ad.splashscreen.monitor.a.kN();
            com.kwad.components.ad.splashscreen.monitor.a.F(adTemplate);
            com.kwad.components.ad.splashscreen.monitor.a.kN();
            com.kwad.components.ad.splashscreen.monitor.a.c(adTemplate, KsAdSDKImpl.get().getSDKInitTime(), z);
            c cVar2 = new c(com.kwad.sdk.m.l.wrapContextIfNeed(context), adTemplate);
            try {
                cVar2.setPageExitListener(bVar);
                cVar2.setSplashScreenAdListener(splashScreenAdInteractionListener);
                com.kwad.sdk.i.a.ai(com.tkay.expressad.foundation.g.a.f.f, PointCategory.SHOW);
                return cVar2;
            } catch (Throwable th) {
                th = th;
                cVar = cVar2;
                com.kwad.components.ad.splashscreen.monitor.a.kN();
                com.kwad.components.ad.splashscreen.monitor.a.a(adTemplate, th.toString(), z);
                if (!KsAdSDKImpl.get().getIsExternal()) {
                    throw th;
                }
                com.kwad.components.core.d.a.b(th);
                return cVar;
            }
        } catch (Throwable th2) {
            th = th2;
        }
    }

    private com.kwad.sdk.core.h.c a(final h hVar) {
        return new com.kwad.sdk.core.h.c() {
            @Override
            public final void aK() {
                if (hVar.mTimerHelper != null) {
                    hVar.mTimerHelper.Kb();
                }
            }

            @Override
            public final void aL() {
                if (hVar.mTimerHelper != null) {
                    hVar.mTimerHelper.Kc();
                }
            }
        };
    }

    private int getSplashLayoutId() {
        return com.kwad.sdk.core.config.d.a(com.kwad.components.ad.splashscreen.b.a.Cz) ? R.layout.ksad_splash_screen_layout : this.mAdInfo.adSplashInfo.skipButtonPosition == 0 ? R.layout.ksad_splash_screen_skip_button_top_right : R.layout.ksad_splash_screen_skip_button_top_left;
    }

    @Override
    private h kw() {
        com.kwad.components.ad.splashscreen.f.d dVar = new com.kwad.components.ad.splashscreen.f.d(this.lJ, com.kwad.sdk.core.response.b.a.cl(this.mAdInfo));
        this.BS = dVar;
        dVar.a(this.bJ);
        this.BS.sy();
        if (this.mVideoPlayConfig == null) {
            this.mVideoPlayConfig = new KsVideoPlayConfig.Builder().videoSoundEnable(this.mAdInfo.adSplashInfo.mute != 1).build();
        }
        h hVar = new h();
        hVar.setSplashScreenAdListener(this.BR);
        hVar.mRootContainer = this.mRootContainer;
        hVar.mAdTemplate = this.mAdTemplate;
        hVar.mAdScene = this.mAdScene;
        hVar.mVideoPlayConfig = this.mVideoPlayConfig;
        hVar.Ce = this.BS;
        hVar.mApkDownloadHelper = this.mApkDownloadHelper;
        hVar.mTimerHelper = new bi();
        if (com.kwad.sdk.core.response.b.a.aU(this.mAdInfo)) {
            com.kwad.components.ad.splashscreen.e.a aVar = new com.kwad.components.ad.splashscreen.e.a(this.mAdTemplate, this.mDetailVideoView, this.mVideoPlayConfig);
            hVar.Cd = aVar;
            hVar.Ce.a(aVar);
        }
        hVar.Ce.a(a(hVar));
        return hVar;
    }

    public static boolean m(AdInfo adInfo) {
        return adInfo.adSplashInfo != null && adInfo.adSplashInfo.fullScreenClickSwitch == 1;
    }

    private void notifyPageDismiss() {
        com.kwad.sdk.a.a.c.yb().ye();
        if (this.mPageDismissCalled) {
            return;
        }
        this.mPageDismissCalled = true;
    }

    @Override
    public final void aa() {
        super.aa();
        if (((h) this.Li).Cd != null) {
            ((h) this.Li).Cd.lB();
        }
    }

    @Override
    public final void ab() {
        super.ab();
        com.kwad.components.core.e.d.c cVar = this.mApkDownloadHelper;
        if (cVar != null) {
            cVar.setOnDismissListener(null);
            this.mApkDownloadHelper.setOnShowListener(null);
        }
        this.BS.sz();
        notifyPageDismiss();
    }

    @Override
    public final int getLayoutId() {
        return getSplashLayoutId();
    }

    @Override
    public final void initData() {
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate);
        KsVideoPlayConfig ksVideoPlayConfigBuild = new KsVideoPlayConfig.Builder().videoSoundEnable(this.mAdInfo.adSplashInfo.mute != 1).build();
        this.mVideoPlayConfig = ksVideoPlayConfigBuild;
        this.mAdTemplate.mInitVoiceStatus = ksVideoPlayConfigBuild.isVideoSoundEnable() ? 2 : 1;
        com.kwad.components.core.e.d.c cVar = new com.kwad.components.core.e.d.c(this.mAdTemplate);
        this.mApkDownloadHelper = cVar;
        cVar.setOnDismissListener(this);
        this.mApkDownloadHelper.setOnShowListener(this);
    }

    @Override
    public final boolean kt() {
        return true;
    }

    @Override
    public final void kv() {
        this.mRootContainer = (AdBaseFrameLayout) this.lJ.findViewById(R.id.ksad_splash_root_container);
        DetailVideoView detailVideoView = (DetailVideoView) this.lJ.findViewById(R.id.ksad_splash_video_player);
        this.mDetailVideoView = detailVideoView;
        detailVideoView.setAd(true);
        this.mDetailVideoView.setVisibility(8);
        this.mRootContainer.findViewById(R.id.splash_play_card_view).setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (com.kwad.sdk.d.a.a.yD() || !c.m(c.this.mAdInfo) || c.this.Li == null) {
                    return;
                }
                ((h) c.this.Li).c(1, view.getContext(), 53, 2);
            }
        });
    }

    @Override
    public final Presenter onCreatePresenter() {
        getContext();
        return D(this.mAdTemplate);
    }

    @Override
    public final void onDismiss(DialogInterface dialogInterface) {
        boolean zNb = dialogInterface instanceof com.kwad.components.core.e.c.b ? ((com.kwad.components.core.e.c.b) dialogInterface).nb() : false;
        try {
            if (this.BR != null) {
                if (zNb) {
                    this.BR.onDownloadTipsDialogDismiss();
                } else {
                    this.BR.onDownloadTipsDialogCancel();
                }
            }
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
        }
    }

    @Override
    public final void onShow(DialogInterface dialogInterface) {
        try {
            if (this.BR != null) {
                this.BR.onDownloadTipsDialogShow();
            }
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
        }
    }

    @Override
    protected final void onVisibilityChanged(View view, int i) {
        super.onVisibilityChanged(view, i);
    }

    public final void setPageExitListener(com.kwad.sdk.core.h.b bVar) {
        this.bJ = bVar;
    }

    public final void setSplashScreenAdListener(KsSplashScreenAd.SplashScreenAdInteractionListener splashScreenAdInteractionListener) {
        this.BR = splashScreenAdInteractionListener;
        if (this.Li != 0) {
            ((h) this.Li).setSplashScreenAdListener(splashScreenAdInteractionListener);
        }
    }
}
