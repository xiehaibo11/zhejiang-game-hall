package com.kwad.components.ad.feed;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import com.kwad.components.ad.feed.b.m;
import com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl;
import com.kwad.components.core.widget.b;
import com.kwad.components.model.FeedType;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.api.KsAdVideoPlayConfig;
import com.kwad.sdk.api.KsFeedAd;
import com.kwad.sdk.api.core.AbstractKsFeedAd;
import com.kwad.sdk.api.model.AdExposureFailedReason;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.report.j;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.m.l;
import com.kwad.sdk.service.ServiceProvider;
import com.kwai.adclient.kscommerciallogger.model.BusinessType;
import com.sigmob.sdk.base.mta.PointCategory;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public final class c extends AbstractKsFeedAd implements com.kwad.components.core.internal.api.a {
    private KsFeedAd.AdInteractionListener dG;
    private com.kwad.components.core.widget.b dH;
    private boolean dI;
    private final KsAdVideoPlayConfig dJ;
    private final AdInfo mAdInfo;
    private final AdTemplate mAdTemplate;
    private com.kwad.components.core.internal.api.c bP = new com.kwad.components.core.internal.api.c();
    private com.kwad.sdk.core.h.b bJ = new com.kwad.sdk.core.h.b() { // from class: com.kwad.components.ad.feed.c.1
        @Override // com.kwad.sdk.core.h.b
        public final void af() {
            c.this.bP.h(c.this);
        }

        @Override // com.kwad.sdk.core.h.b
        public final void ag() {
            c.this.bP.i(c.this);
        }
    };

    public interface a {
        void c(int i, String str);
    }

    public c(AdTemplate adTemplate, boolean z) {
        this.mAdTemplate = adTemplate;
        adTemplate.mInitVoiceStatus = 1;
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        this.dI = z;
        this.dJ = new KSAdVideoPlayConfigImpl();
        com.kwad.components.ad.h.b.fa().a(this);
    }

    private com.kwad.components.core.widget.b<?> E(Context context) {
        com.kwad.components.core.widget.b<?> bVarA;
        if (this.dI && com.kwad.sdk.core.response.b.b.bw(this.mAdTemplate)) {
            try {
                context = l.wrapContextIfNeed(context);
                m mVar = new m(context);
                mVar.setWidth(this.mAdTemplate.mAdScene.getWidth());
                mVar.setVideoPlayConfig(this.dJ);
                bVarA = mVar;
            } catch (Throwable th) {
                com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                bVarA = null;
            }
        } else {
            bVarA = b.a(context, FeedType.fromInt(this.mAdTemplate.type), com.kwad.sdk.core.response.b.a.aW(this.mAdInfo));
        }
        if (bVarA != null) {
            bVarA.setMargin(com.kwad.sdk.d.a.a.a(context, 16.0f));
            bVarA.setPageExitListener(this.bJ);
        }
        return bVarA;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(final com.kwad.components.core.widget.b bVar, final boolean z) {
        if (bVar == null) {
            return;
        }
        bVar.setInnerAdInteractionListener(new b.a() { // from class: com.kwad.components.ad.feed.c.3
            @Override // com.kwad.components.core.widget.b.a
            public final void onAdClicked() {
                if (c.this.dG != null) {
                    c.this.dG.onAdClicked();
                }
            }

            @Override // com.kwad.components.core.widget.b.a
            public final void onAdShow() {
                com.kwad.components.ad.feed.monitor.b.aW();
                KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_FEED, "adShowSuccess").report();
                if (c.this.dG != null) {
                    c.this.dG.onAdShow();
                }
                if (z) {
                    j jVar = new j();
                    z.a aVar = new z.a();
                    FeedType feedTypeFromInt = FeedType.fromInt(c.this.mAdTemplate.type);
                    if (feedTypeFromInt == FeedType.FEED_TYPE_TEXT_NEW) {
                        feedTypeFromInt = FeedType.FEED_TYPE_TEXT_BELOW;
                    }
                    aVar.templateId = String.valueOf(feedTypeFromInt.getType());
                    jVar.a(aVar);
                    jVar.t(c.this.dH.getHeight(), c.this.dH.getWidth());
                    com.kwad.components.core.t.b.qj().a(c.this.mAdTemplate, null, jVar);
                }
            }

            @Override // com.kwad.components.core.widget.b.a
            public final void onDislikeClicked() {
                if (c.this.dG != null) {
                    c.this.dG.onDislikeClicked();
                    try {
                        if (bVar.getParent() instanceof ViewGroup) {
                            ((ViewGroup) bVar.getParent()).removeView(bVar);
                        }
                    } catch (Exception e) {
                        com.kwad.sdk.core.e.c.printStackTrace(e);
                    }
                }
            }

            @Override // com.kwad.components.core.widget.b.a
            public final void onDownloadTipsDialogDismiss() {
                if (c.this.dG != null) {
                    try {
                        c.this.dG.onDownloadTipsDialogDismiss();
                    } catch (Throwable unused) {
                    }
                }
            }

            @Override // com.kwad.components.core.widget.b.a
            public final void onDownloadTipsDialogShow() {
                if (c.this.dG != null) {
                    try {
                        c.this.dG.onDownloadTipsDialogShow();
                    } catch (Throwable unused) {
                    }
                }
            }
        });
    }

    private void aQ() {
        if (this.mAdTemplate != null) {
            com.kwad.sdk.core.diskcache.b.a.Au().remove("feed_ad_cache_" + this.mAdTemplate.posId);
        }
    }

    private boolean isVideoSoundEnable() {
        KsAdVideoPlayConfig ksAdVideoPlayConfig = this.dJ;
        if (ksAdVideoPlayConfig instanceof KSAdVideoPlayConfigImpl) {
            KSAdVideoPlayConfigImpl kSAdVideoPlayConfigImpl = (KSAdVideoPlayConfigImpl) ksAdVideoPlayConfig;
            if (kSAdVideoPlayConfigImpl.getVideoSoundValue() != 0) {
                return kSAdVideoPlayConfigImpl.isVideoSoundEnable();
            }
        }
        return com.kwad.sdk.core.response.b.a.bH(this.mAdInfo);
    }

    public final void a(final a aVar) {
        com.kwad.sdk.i.a.e("feed", PointCategory.SHOW, "feed_preload_view");
        com.kwad.components.core.widget.b<?> bVarE = E(ServiceProvider.getContext());
        this.dH = bVarE;
        if (bVarE == null) {
            aVar.c(1, "");
        } else if (bVarE instanceof m) {
            m mVar = (m) bVarE;
            mVar.setPreloadListener(new m.a() { // from class: com.kwad.components.ad.feed.c.2
                @Override // com.kwad.components.ad.feed.b.m.a
                public final void c(int i, String str) {
                    c cVar = c.this;
                    cVar.a(cVar.dH, false);
                    aVar.c(i, str);
                }
            });
            mVar.b(this.mAdTemplate);
        } else {
            bVarE.b(this.mAdTemplate);
            com.kwad.components.core.widget.b bVar = this.dH;
            if (bVar instanceof com.kwad.components.ad.feed.b.c) {
                ((com.kwad.components.ad.feed.b.c) bVar).a(this.dJ);
            }
            a(this.dH, true);
            aVar.c(1, "");
        }
        com.kwad.sdk.i.a.f("feed", PointCategory.SHOW, "feed_preload_view");
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

    @Override // com.kwad.sdk.api.KsFeedAd
    public final int getECPM() {
        return com.kwad.sdk.core.response.b.a.aJ(this.mAdInfo);
    }

    @Override // com.kwad.sdk.api.core.AbstractKsFeedAd
    public final View getFeedView2(Context context) {
        if (context == null || !KsAdSDKImpl.get().hasInitFinish()) {
            return null;
        }
        try {
            Context contextWrapContextIfNeed = l.wrapContextIfNeed(context);
            com.kwad.sdk.i.a.ah("feed", PointCategory.SHOW);
            KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_FEED, "callShow").report();
            if (this.dH != null) {
                if (this.dH.getParent() instanceof ViewGroup) {
                    ((ViewGroup) this.dH.getParent()).removeView(this.dH);
                }
                com.kwad.sdk.i.a.ai("feed", PointCategory.SHOW);
                return this.dH;
            }
            aQ();
            com.kwad.components.core.widget.b<?> bVarE = E(contextWrapContextIfNeed);
            this.dH = bVarE;
            if (bVarE == null) {
                com.kwad.sdk.i.a.ai("feed", PointCategory.SHOW);
                return null;
            }
            bVarE.b(this.mAdTemplate);
            if (this.dH instanceof com.kwad.components.ad.feed.b.c) {
                ((com.kwad.components.ad.feed.b.c) this.dH).a(this.dJ);
            }
            if (this.dH instanceof m) {
                a(this.dH, false);
            } else {
                a(this.dH, true);
            }
            com.kwad.sdk.i.a.ai("feed", PointCategory.SHOW);
            return this.dH;
        } catch (Throwable th) {
            if (!KsAdSDKImpl.get().getIsExternal()) {
                throw th;
            }
            com.kwad.components.core.d.a.b(th);
            return null;
        }
    }

    @Override // com.kwad.sdk.api.KsFeedAd
    public final int getInteractionType() {
        return com.kwad.sdk.core.response.b.a.aI(this.mAdInfo);
    }

    @Override // com.kwad.sdk.api.KsFeedAd
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

    @Override // com.kwad.sdk.api.KsFeedAd
    public final void reportAdExposureFailed(int i, AdExposureFailedReason adExposureFailedReason) {
        com.kwad.sdk.core.report.a.a(this.mAdTemplate, i, adExposureFailedReason);
    }

    @Override // com.kwad.sdk.api.KsFeedAd
    public final void setAdInteractionListener(KsFeedAd.AdInteractionListener adInteractionListener) {
        this.dG = adInteractionListener;
    }

    @Override // com.kwad.sdk.api.KsFeedAd
    public final void setBidEcpm(int i) {
        setBidEcpm(i, -1L);
    }

    @Override // com.kwad.sdk.api.KsFeedAd
    public final void setBidEcpm(long j, long j2) {
        this.mAdTemplate.mBidEcpm = j;
        com.kwad.sdk.core.report.a.i(this.mAdTemplate, j2);
    }

    @Override // com.kwad.sdk.api.KsFeedAd
    public final void setVideoPlayConfig(KsAdVideoPlayConfig ksAdVideoPlayConfig) {
        AdTemplate adTemplate;
        int i;
        if (ksAdVideoPlayConfig instanceof KSAdVideoPlayConfigImpl) {
            KSAdVideoPlayConfigImpl kSAdVideoPlayConfigImpl = (KSAdVideoPlayConfigImpl) ksAdVideoPlayConfig;
            if (kSAdVideoPlayConfigImpl.getVideoSoundValue() != 0) {
                this.dJ.setVideoSoundEnable(kSAdVideoPlayConfigImpl.isVideoSoundEnable());
            }
            if (kSAdVideoPlayConfigImpl.getVideoAutoPlayType() != 0) {
                this.dJ.setVideoAutoPlayType(kSAdVideoPlayConfigImpl.getVideoAutoPlayType());
            }
            if (kSAdVideoPlayConfigImpl.getDataFlowAutoStartValue() != 0) {
                this.dJ.setDataFlowAutoStart(kSAdVideoPlayConfigImpl.isDataFlowAutoStart());
            } else {
                this.dJ.setDataFlowAutoStart(com.kwad.sdk.core.config.d.zA());
            }
            com.kwad.components.core.widget.b bVar = this.dH;
            if (bVar instanceof m) {
                ((m) bVar).setVideoPlayConfig(this.dJ);
            }
            com.kwad.components.core.widget.b bVar2 = this.dH;
            if (bVar2 instanceof com.kwad.components.ad.feed.b.c) {
                ((com.kwad.components.ad.feed.b.c) bVar2).setVideoPlayConfig(this.dJ);
            }
        }
        if (isVideoSoundEnable()) {
            adTemplate = this.mAdTemplate;
            i = 2;
        } else {
            adTemplate = this.mAdTemplate;
            i = 1;
        }
        adTemplate.mInitVoiceStatus = i;
    }

    @Override // com.kwad.sdk.api.KsFeedAd
    public final void setVideoSoundEnable(boolean z) {
        AdTemplate adTemplate;
        int i;
        this.dJ.setVideoSoundEnable(z);
        if (this.dJ.isVideoSoundEnable()) {
            adTemplate = this.mAdTemplate;
            i = 2;
        } else {
            adTemplate = this.mAdTemplate;
            i = 1;
        }
        adTemplate.mInitVoiceStatus = i;
    }
}
