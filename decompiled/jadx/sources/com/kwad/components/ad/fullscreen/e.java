package com.kwad.components.ad.fullscreen;

import android.app.Activity;
import com.kwad.components.core.video.j;
import com.kwad.sdk.api.KsFullScreenVideoAd;
import com.kwad.sdk.api.KsVideoPlayConfig;
import com.kwad.sdk.api.model.AdExposureFailedReason;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwai.adclient.kscommerciallogger.model.BusinessType;
import com.sigmob.sdk.base.mta.PointCategory;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public final class e implements com.kwad.components.core.internal.api.a, KsFullScreenVideoAd {
    private com.kwad.components.core.internal.api.c bP = new com.kwad.components.core.internal.api.c();
    private c fV;
    private AdInfo mAdInfo;
    private AdTemplate mAdTemplate;

    public e(AdTemplate adTemplate) {
        this.mAdTemplate = adTemplate;
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        com.kwad.components.ad.h.b.fa().a(this);
    }

    @Override // com.kwad.components.core.internal.api.a
    public final void a(com.kwad.components.core.internal.api.b bVar) {
        this.bP.a(bVar);
    }

    @Override // com.kwad.components.core.internal.api.a
    public final boolean ae() {
        return true;
    }

    @Override // com.kwad.components.core.internal.api.a
    public final void b(com.kwad.components.core.internal.api.b bVar) {
        this.bP.b(bVar);
    }

    @Override // com.kwad.components.core.internal.api.a
    public final AdTemplate getAdTemplate() {
        return this.mAdTemplate;
    }

    @Override // com.kwad.sdk.api.KsFullScreenVideoAd
    public final int getECPM() {
        return com.kwad.sdk.core.response.b.a.aJ(this.mAdInfo);
    }

    @Override // com.kwad.sdk.api.KsFullScreenVideoAd
    public final int getInteractionType() {
        return com.kwad.sdk.core.response.b.a.aI(this.mAdInfo);
    }

    @Override // com.kwad.sdk.api.KsFullScreenVideoAd
    public final int getMaterialType() {
        return com.kwad.sdk.core.response.b.a.aW(this.mAdInfo);
    }

    @Override // com.kwad.sdk.api.BaseKSAd
    public final Map<String, Object> getMediaExtraInfo() {
        HashMap map = new HashMap();
        if (com.kwad.sdk.core.config.d.zt()) {
            map.put("llsid", Long.valueOf(this.mAdTemplate.llsid));
        }
        return map;
    }

    @Override // com.kwad.sdk.api.KsFullScreenVideoAd
    public final boolean isAdEnable() {
        if (com.kwad.sdk.core.config.d.zz() >= 0) {
            return true;
        }
        return j.k(this.mAdTemplate);
    }

    @Override // com.kwad.sdk.api.KsFullScreenVideoAd
    public final void reportAdExposureFailed(int i, AdExposureFailedReason adExposureFailedReason) {
        com.kwad.sdk.core.report.a.a(this.mAdTemplate, i, adExposureFailedReason);
    }

    @Override // com.kwad.sdk.api.KsFullScreenVideoAd
    public final void setBidEcpm(int i) {
        setBidEcpm(i, -1L);
    }

    @Override // com.kwad.sdk.api.KsFullScreenVideoAd
    public final void setBidEcpm(long j, long j2) {
        com.kwad.sdk.core.report.a.i(this.mAdTemplate, j2);
    }

    @Override // com.kwad.sdk.api.KsFullScreenVideoAd
    public final void setFullScreenVideoAdInteractionListener(KsFullScreenVideoAd.FullScreenVideoAdInteractionListener fullScreenVideoAdInteractionListener) {
        if (this.fV == null) {
            this.fV = new c() { // from class: com.kwad.components.ad.fullscreen.e.1
                @Override // com.kwad.components.ad.fullscreen.c, com.kwad.sdk.api.KsFullScreenVideoAd.FullScreenVideoAdInteractionListener
                public final void onPageDismiss() {
                    super.onPageDismiss();
                    e.this.bP.i(e.this);
                }

                @Override // com.kwad.components.ad.fullscreen.c, com.kwad.sdk.api.KsFullScreenVideoAd.FullScreenVideoAdInteractionListener
                public final void onVideoPlayStart() {
                    super.onVideoPlayStart();
                    e.this.bP.h(e.this);
                }
            };
        }
        this.fV.a(fullScreenVideoAdInteractionListener);
    }

    @Override // com.kwad.sdk.api.KsFullScreenVideoAd
    public final void showFullScreenVideoAd(Activity activity, KsVideoPlayConfig ksVideoPlayConfig) {
        if (activity == null || activity.isFinishing()) {
            com.kwad.sdk.core.e.c.e("KsFullScreenVideoAdControl", "showFullScreenVideoAd error, activity is null or finished");
            return;
        }
        com.kwad.sdk.i.a.ah("fullscreen", PointCategory.SHOW);
        com.kwad.components.ad.reward.monitor.a.a(false, this.mAdTemplate);
        KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_FULLSCREEN, "callShow").report();
        if (!isAdEnable()) {
            com.kwad.sdk.core.e.c.i("KsFullScreenVideoAdControl", "isAdEnable is false");
            com.kwad.sdk.i.a.ai("fullscreen", PointCategory.SHOW);
        } else {
            if (ksVideoPlayConfig == null) {
                ksVideoPlayConfig = new KsVideoPlayConfig.Builder().build();
            }
            KsFullScreenVideoActivityProxy.launch(activity, this.mAdTemplate, ksVideoPlayConfig, this.fV);
        }
    }
}
