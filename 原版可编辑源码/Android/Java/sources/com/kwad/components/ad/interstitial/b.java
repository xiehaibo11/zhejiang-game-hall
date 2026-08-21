package com.kwad.components.ad.interstitial;

import android.app.Activity;
import android.os.SystemClock;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.api.KsInterstitialAd;
import com.kwad.sdk.api.KsScene;
import com.kwad.sdk.api.KsVideoPlayConfig;
import com.kwad.sdk.api.model.AdExposureFailedReason;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwai.adclient.kscommerciallogger.model.BusinessType;
import com.sigmob.sdk.base.mta.PointCategory;
import com.tkay.expressad.foundation.g.a.f;
import java.util.HashMap;
import java.util.Map;

public final class b implements com.kwad.components.core.internal.api.a, KsInterstitialAd {
    private com.kwad.components.core.internal.api.c bP = new com.kwad.components.core.internal.api.c();
    private KsScene hq;
    private c hr;
    private d hs;
    private final AdTemplate mAdTemplate;

    public b(KsScene ksScene, AdTemplate adTemplate) {
        this.hq = ksScene;
        this.mAdTemplate = adTemplate;
        com.kwad.components.ad.h.b.fa().a(this);
    }

    @Override
    public final void a(com.kwad.components.core.internal.api.b bVar) {
        this.bP.a(bVar);
    }

    @Override
    public final boolean ae() {
        return true;
    }

    @Override
    public final void b(com.kwad.components.core.internal.api.b bVar) {
        this.bP.b(bVar);
    }

    @Override
    public final AdTemplate getAdTemplate() {
        return this.mAdTemplate;
    }

    @Override
    public final int getECPM() {
        return com.kwad.sdk.core.response.b.a.aJ(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate));
    }

    @Override
    public final int getInteractionType() {
        return com.kwad.sdk.core.response.b.a.aI(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate));
    }

    @Override
    public final int getMaterialType() {
        return com.kwad.sdk.core.response.b.a.aW(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate));
    }

    @Override
    public final Map<String, Object> getMediaExtraInfo() {
        HashMap map = new HashMap();
        if (com.kwad.sdk.core.config.d.zt()) {
            map.put("llsid", Long.valueOf(this.mAdTemplate.llsid));
        }
        return map;
    }

    @Override
    public final boolean isVideo() {
        return com.kwad.sdk.core.response.b.a.aU(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate));
    }

    @Override
    public final void reportAdExposureFailed(int i, AdExposureFailedReason adExposureFailedReason) {
        com.kwad.sdk.core.report.a.a(this.mAdTemplate, i, adExposureFailedReason);
    }

    @Override
    public final void setAdInteractionListener(KsInterstitialAd.AdInteractionListener adInteractionListener) {
        if (this.hr == null) {
            this.hr = new c() {
                @Override
                public final void onAdShow() {
                    super.onAdShow();
                    b.this.bP.h(b.this);
                }

                @Override
                public final void onPageDismiss() {
                    super.onPageDismiss();
                    b.this.bP.i(b.this);
                }
            };
        }
        this.hr.a(adInteractionListener);
        d dVar = this.hs;
        if (dVar != null) {
            dVar.setAdInteractionListener(this.hr);
        }
    }

    @Override
    public final void setBidEcpm(int i) {
        setBidEcpm(i, -1L);
    }

    @Override
    public final void setBidEcpm(long j, long j2) {
        this.mAdTemplate.mBidEcpm = j;
        com.kwad.sdk.core.report.a.i(this.mAdTemplate, j);
    }

    @Override
    public final void showInterstitialAd(Activity activity, KsVideoPlayConfig ksVideoPlayConfig) {
        if (activity == null || activity.isFinishing()) {
            com.kwad.sdk.core.e.c.e("StayAdHelper", "showInterstitialAd activity must not be null");
            return;
        }
        if (!KsAdSDKImpl.get().hasInitFinish()) {
            com.kwad.sdk.core.e.c.e("StayAdHelper", "showInterstitialAd please init sdk first");
        }
        if (ksVideoPlayConfig == null) {
            ksVideoPlayConfig = new KsVideoPlayConfig.Builder().build();
        }
        com.kwad.sdk.i.a.ah(f.d, PointCategory.SHOW);
        KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_INTERSTITIAL, "callShow").report();
        com.kwad.components.ad.interstitial.monitor.b.cL();
        com.kwad.components.ad.interstitial.monitor.b.h(this.hq.getPosId());
        this.mAdTemplate.adShowStartTimeStamp = SystemClock.elapsedRealtime();
        if (ksVideoPlayConfig.isVideoSoundEnable()) {
            this.mAdTemplate.mInitVoiceStatus = 2;
        } else {
            this.mAdTemplate.mInitVoiceStatus = 1;
        }
        com.kwad.sdk.a.a.c.yb().bc(true);
        if (this.hs == null) {
            d dVar = new d(activity, this.mAdTemplate, ksVideoPlayConfig, this.hr);
            this.hs = dVar;
            dVar.show();
            com.kwad.components.ad.interstitial.b.b.J(activity);
        }
    }
}
