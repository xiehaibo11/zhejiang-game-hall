package com.kwad.components.ad.interstitial;

import android.app.Activity;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import com.kwad.components.core.e.a.h;
import com.kwad.components.core.widget.f;
import com.kwad.components.core.widget.g;
import com.kwad.sdk.api.KsAdVideoPlayConfig;
import com.kwad.sdk.api.KsInterstitialAd;
import com.kwad.sdk.api.KsVideoPlayConfig;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.ai;
import com.kwad.sdk.utils.bi;
import com.kwai.adclient.kscommerciallogger.model.BusinessType;
import com.sigmob.sdk.base.mta.PointCategory;

public final class d extends com.kwad.components.core.n.d {
    private final g hA;
    private com.kwad.components.ad.interstitial.f.a hv;
    private boolean hw;
    private com.kwad.components.ad.interstitial.e.b hx;
    private final KsAdVideoPlayConfig hy;
    private KsInterstitialAd.AdInteractionListener hz;
    private final AdTemplate mAdTemplate;
    private bi mTimerHelper;

    public d(Activity activity, AdTemplate adTemplate, KsVideoPlayConfig ksVideoPlayConfig, KsInterstitialAd.AdInteractionListener adInteractionListener) {
        super(activity);
        this.hA = new g() {
            @Override
            public final void j(boolean z) {
                if (d.this.hw) {
                    Activity activity2 = d.this.mActivity;
                    com.kwad.sdk.core.c.b.AU();
                    if (activity2 == com.kwad.sdk.core.c.b.getCurrentActivity()) {
                        com.kwad.sdk.core.report.a.j(d.this.mAdTemplate, z ? 2 : 1);
                        d.this.ci();
                    }
                }
            }
        };
        this.hz = adInteractionListener;
        this.hy = new KsAdVideoPlayConfig.Builder().videoSoundEnable(ksVideoPlayConfig != null && ksVideoPlayConfig.isVideoSoundEnable()).dataFlowAutoStart(com.kwad.components.ad.interstitial.a.b.cA()).build();
        this.mAdTemplate = adTemplate;
    }

    private boolean cg() {
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate);
        return com.kwad.sdk.core.response.b.a.cc(adInfoCg) && !ch() && com.kwad.components.ad.interstitial.b.a.cI() < com.kwad.sdk.core.response.b.a.cf(adInfoCg);
    }

    private boolean ch() {
        return com.kwad.sdk.core.response.b.b.aR(this.mAdTemplate) && com.kwad.components.ad.interstitial.c.a.cK() < com.kwad.sdk.core.config.d.a(com.kwad.sdk.core.config.c.ali);
    }

    private void ci() {
        int iBZ = com.kwad.sdk.core.response.b.a.bZ(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate));
        this.hv = cg() ? new com.kwad.components.ad.interstitial.aggregate.b(this.mContext) : (TextUtils.isEmpty(com.kwad.sdk.core.response.b.b.bm(this.mAdTemplate)) || !ai.IN()) ? new com.kwad.components.ad.interstitial.f.c(this.mContext) : iBZ == 2 ? new com.kwad.components.ad.interstitial.f.e(this.mContext) : iBZ == 1 ? new com.kwad.components.ad.interstitial.f.d(this.mContext) : new com.kwad.components.ad.interstitial.f.c(this.mContext);
        this.hv.a(this.mAdTemplate, this, this.hy, this.hz);
        this.zv.removeAllViews();
        this.zv.addView(this.hv);
        cj();
    }

    private void cj() {
        com.kwad.components.ad.interstitial.e.b bVar = new com.kwad.components.ad.interstitial.e.b(this.hv, 100);
        this.hx = bVar;
        bVar.a(new com.kwad.sdk.core.h.c() {
            @Override
            public final void aK() {
                d.this.getTimerHelper().Kb();
            }

            @Override
            public final void aL() {
                d.this.getTimerHelper().Kc();
            }
        });
        this.hx.sy();
    }

    @Override
    public final ViewGroup cf() {
        f fVar = new f(this.mContext);
        fVar.setOrientationChangeListener(this.hA);
        return fVar;
    }

    @Override
    public final void dismiss() {
        super.dismiss();
        com.kwad.sdk.a.a.c.yb().ye();
        KsInterstitialAd.AdInteractionListener adInteractionListener = this.hz;
        if (adInteractionListener != null) {
            adInteractionListener.onPageDismiss();
        }
        h.mU();
    }

    @Override
    public final void g(View view) {
        h.a(getWindow());
        ci();
        com.kwad.sdk.i.a.ai(com.tkay.expressad.foundation.g.a.f.d, PointCategory.SHOW);
        KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_INTERSTITIAL, "adShowSuccess").report();
    }

    @Override
    public final int getLayoutId() {
        return 0;
    }

    public final bi getTimerHelper() {
        if (this.mTimerHelper == null) {
            this.mTimerHelper = new bi();
        }
        return this.mTimerHelper;
    }

    @Override
    public final void onBackPressed() {
        if (com.kwad.components.ad.interstitial.a.b.cE()) {
            super.onBackPressed();
        }
    }

    @Override
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        com.kwad.components.ad.interstitial.e.b bVar = this.hx;
        if (bVar != null) {
            bVar.release();
        }
    }

    @Override
    public final void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        this.hw = z;
        com.kwad.components.ad.interstitial.f.a aVar = this.hv;
        if (aVar != null) {
            if (z) {
                aVar.cn();
            } else {
                aVar.co();
            }
        }
    }

    public final void setAdInteractionListener(KsInterstitialAd.AdInteractionListener adInteractionListener) {
        this.hz = adInteractionListener;
        com.kwad.components.ad.interstitial.f.a aVar = this.hv;
        if (aVar != null) {
            aVar.setAdInteractionListener(adInteractionListener);
        }
    }
}
