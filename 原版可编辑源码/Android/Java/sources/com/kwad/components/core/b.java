package com.kwad.components.core;

import android.app.Activity;
import com.kwad.components.ad.b.d;
import com.kwad.components.ad.b.e;
import com.kwad.components.ad.b.g;
import com.kwad.components.ad.b.h;
import com.kwad.sdk.api.KsDrawAd;
import com.kwad.sdk.api.KsExitInstallListener;
import com.kwad.sdk.api.KsFeedAd;
import com.kwad.sdk.api.KsFullScreenVideoAd;
import com.kwad.sdk.api.KsInterstitialAd;
import com.kwad.sdk.api.KsLoadManager;
import com.kwad.sdk.api.KsNativeAd;
import com.kwad.sdk.api.KsRewardVideoAd;
import com.kwad.sdk.api.KsScene;
import com.kwad.sdk.api.KsSplashScreenAd;
import com.kwad.sdk.components.c;
import com.kwad.sdk.core.network.f;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwai.adclient.kscommerciallogger.model.BusinessType;
import java.util.List;

public final class b implements KsLoadManager {
    @Override
    public final String getBidRequestToken(KsScene ksScene) {
        com.kwad.components.ad.b.a aVar = (com.kwad.components.ad.b.a) c.f(com.kwad.components.ad.b.a.class);
        return aVar != null ? aVar.getBidRequestToken(ksScene) : "";
    }

    @Override
    public final String getBidRequestTokenV2(KsScene ksScene) {
        com.kwad.components.ad.b.a aVar = (com.kwad.components.ad.b.a) c.f(com.kwad.components.ad.b.a.class);
        return aVar != null ? aVar.getBidRequestTokenV2(ksScene) : "";
    }

    @Override
    public final void loadConfigFeedAd(KsScene ksScene, final KsLoadManager.FeedAdListener feedAdListener) {
        com.kwad.sdk.i.a.ah("feed", "request");
        KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_FEED, "loadRequest").ct(ksScene.getAdNum()).report();
        com.kwad.components.ad.b.c cVar = (com.kwad.components.ad.b.c) c.f(com.kwad.components.ad.b.c.class);
        if (cVar != null) {
            cVar.loadConfigFeedAd(ksScene, new KsLoadManager.FeedAdListener() {
                @Override
                public final void onError(int i, String str) {
                    feedAdListener.onError(i, str);
                }

                @Override
                public final void onFeedAdLoad(List<KsFeedAd> list) {
                    feedAdListener.onFeedAdLoad(list);
                }
            });
            com.kwad.sdk.i.a.ai("feed", "request");
        } else if (com.kwad.components.ad.e.a.ml.booleanValue()) {
            f fVar = f.aoR;
            feedAdListener.onError(fVar.errorCode, fVar.msg);
        }
    }

    @Override
    public final void loadDrawAd(KsScene ksScene, final KsLoadManager.DrawAdListener drawAdListener) {
        com.kwad.sdk.i.a.ah("draw", "request");
        com.kwad.components.ad.b.b bVar = (com.kwad.components.ad.b.b) c.f(com.kwad.components.ad.b.b.class);
        if (bVar != null) {
            bVar.loadDrawAd(ksScene, new KsLoadManager.DrawAdListener() {
                @Override
                public final void onDrawAdLoad(List<KsDrawAd> list) {
                    drawAdListener.onDrawAdLoad(list);
                }

                @Override
                public final void onError(int i, String str) {
                    drawAdListener.onError(i, str);
                }
            });
            com.kwad.sdk.i.a.ai("draw", "request");
        } else if (com.kwad.components.ad.e.a.ml.booleanValue()) {
            f fVar = f.aoR;
            drawAdListener.onError(fVar.errorCode, fVar.msg);
        }
    }

    @Override
    public final void loadFeedAd(KsScene ksScene, final KsLoadManager.FeedAdListener feedAdListener) {
        com.kwad.sdk.i.a.ah("feed", "request");
        KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_FEED, "loadRequest").ct(ksScene.getAdNum()).report();
        com.kwad.components.ad.b.c cVar = (com.kwad.components.ad.b.c) c.f(com.kwad.components.ad.b.c.class);
        if (cVar != null) {
            cVar.loadFeedAd(ksScene, new KsLoadManager.FeedAdListener() {
                @Override
                public final void onError(int i, String str) {
                    feedAdListener.onError(i, str);
                }

                @Override
                public final void onFeedAdLoad(List<KsFeedAd> list) {
                    feedAdListener.onFeedAdLoad(list);
                }
            });
            com.kwad.sdk.i.a.ai("feed", "request");
        } else if (com.kwad.components.ad.e.a.ml.booleanValue()) {
            f fVar = f.aoR;
            feedAdListener.onError(fVar.errorCode, fVar.msg);
        }
    }

    @Override
    public final void loadFullScreenVideoAd(KsScene ksScene, final KsLoadManager.FullScreenVideoAdListener fullScreenVideoAdListener) {
        com.kwad.sdk.i.a.ah("fullscreen", "request");
        KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_FULLSCREEN, "loadRequest").report();
        d dVar = (d) c.f(d.class);
        if (dVar != null) {
            dVar.loadFullScreenVideoAd(ksScene, new KsLoadManager.FullScreenVideoAdListener() {
                @Override
                public final void onError(int i, String str) {
                    fullScreenVideoAdListener.onError(i, str);
                }

                @Override
                public final void onFullScreenVideoAdLoad(List<KsFullScreenVideoAd> list) {
                    fullScreenVideoAdListener.onFullScreenVideoAdLoad(list);
                }

                @Override
                public final void onFullScreenVideoResult(List<KsFullScreenVideoAd> list) {
                    fullScreenVideoAdListener.onFullScreenVideoResult(list);
                }
            });
            com.kwad.sdk.i.a.ai("fullscreen", "request");
        } else if (com.kwad.components.ad.e.a.ml.booleanValue()) {
            f fVar = f.aoR;
            fullScreenVideoAdListener.onError(fVar.errorCode, fVar.msg);
        }
    }

    @Override
    public final void loadInterstitialAd(KsScene ksScene, final KsLoadManager.InterstitialAdListener interstitialAdListener) {
        com.kwad.sdk.i.a.ah(com.tkay.expressad.foundation.g.a.f.d, "request");
        KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_INTERSTITIAL, "loadRequest").report();
        e eVar = (e) c.f(e.class);
        if (eVar != null) {
            eVar.loadInterstitialAd(ksScene, new KsLoadManager.InterstitialAdListener() {
                @Override
                public final void onError(int i, String str) {
                    interstitialAdListener.onError(i, str);
                }

                @Override
                public final void onInterstitialAdLoad(List<KsInterstitialAd> list) {
                    interstitialAdListener.onInterstitialAdLoad(list);
                }

                @Override
                public final void onRequestResult(int i) {
                    interstitialAdListener.onRequestResult(i);
                }
            });
            com.kwad.sdk.i.a.ai(com.tkay.expressad.foundation.g.a.f.d, "request");
        } else if (com.kwad.components.ad.e.a.ml.booleanValue()) {
            f fVar = f.aoR;
            interstitialAdListener.onError(fVar.errorCode, fVar.msg);
        }
    }

    @Override
    public final void loadNativeAd(KsScene ksScene, final KsLoadManager.NativeAdListener nativeAdListener) {
        com.kwad.sdk.i.a.ah(com.tkay.expressad.foundation.g.a.f.a, "request");
        KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_NATIVE, "loadRequest").ct(ksScene.getAdNum()).report();
        com.kwad.components.ad.b.f fVar = (com.kwad.components.ad.b.f) c.f(com.kwad.components.ad.b.f.class);
        if (fVar != null) {
            fVar.loadNativeAd(ksScene, new KsLoadManager.NativeAdListener() {
                @Override
                public final void onError(int i, String str) {
                    nativeAdListener.onError(i, str);
                }

                @Override
                public final void onNativeAdLoad(List<KsNativeAd> list) {
                    nativeAdListener.onNativeAdLoad(list);
                }
            });
            com.kwad.sdk.i.a.ai(com.tkay.expressad.foundation.g.a.f.a, "request");
        } else if (com.kwad.components.ad.e.a.ml.booleanValue()) {
            f fVar2 = f.aoR;
            nativeAdListener.onError(fVar2.errorCode, fVar2.msg);
        }
    }

    @Override
    public final void loadNativeAd(String str, KsLoadManager.NativeAdListener nativeAdListener) {
        KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_NATIVE, "loadRequest").be(true).report();
        com.kwad.components.ad.b.f fVar = (com.kwad.components.ad.b.f) c.f(com.kwad.components.ad.b.f.class);
        if (fVar != null) {
            fVar.loadNativeAd(str, nativeAdListener);
        } else if (com.kwad.components.ad.e.a.ml.booleanValue()) {
            f fVar2 = f.aoR;
            nativeAdListener.onError(fVar2.errorCode, fVar2.msg);
        }
    }

    @Override
    public final void loadRewardVideoAd(KsScene ksScene, final KsLoadManager.RewardVideoAdListener rewardVideoAdListener) {
        com.kwad.sdk.i.a.ah("reward", "request");
        KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_REWARD, "loadRequest").report();
        g gVar = (g) c.f(g.class);
        if (gVar != null) {
            gVar.loadRewardVideoAd(ksScene, new KsLoadManager.RewardVideoAdListener() {
                @Override
                public final void onError(int i, String str) {
                    rewardVideoAdListener.onError(i, str);
                }

                @Override
                public final void onRewardVideoAdLoad(List<KsRewardVideoAd> list) {
                    rewardVideoAdListener.onRewardVideoAdLoad(list);
                }

                @Override
                public final void onRewardVideoResult(List<KsRewardVideoAd> list) {
                    rewardVideoAdListener.onRewardVideoResult(list);
                }
            });
        } else if (com.kwad.components.ad.e.a.ml.booleanValue()) {
            f fVar = f.aoR;
            rewardVideoAdListener.onError(fVar.errorCode, fVar.msg);
        }
        com.kwad.sdk.i.a.ai("reward", "request");
    }

    @Override
    public final void loadSplashScreenAd(KsScene ksScene, final KsLoadManager.SplashScreenAdListener splashScreenAdListener) {
        com.kwad.sdk.i.a.ah(com.tkay.expressad.foundation.g.a.f.f, "request");
        KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_SPLASH, "loadRequest").report();
        h hVar = (h) c.f(h.class);
        if (hVar != null) {
            hVar.loadSplashScreenAd(ksScene, new KsLoadManager.SplashScreenAdListener() {
                @Override
                public final void onError(int i, String str) {
                    splashScreenAdListener.onError(i, str);
                }

                @Override
                public final void onRequestResult(int i) {
                    splashScreenAdListener.onRequestResult(i);
                }

                @Override
                public final void onSplashScreenAdLoad(KsSplashScreenAd ksSplashScreenAd) {
                    splashScreenAdListener.onSplashScreenAdLoad(ksSplashScreenAd);
                }
            });
            com.kwad.sdk.i.a.ai(com.tkay.expressad.foundation.g.a.f.f, "request");
        } else if (com.kwad.components.ad.e.a.ml.booleanValue()) {
            f fVar = f.aoR;
            splashScreenAdListener.onError(fVar.errorCode, fVar.msg);
        }
    }

    @Override
    public final boolean showInstallDialog(Activity activity, KsExitInstallListener ksExitInstallListener) {
        com.kwad.components.ad.b.a aVar = (com.kwad.components.ad.b.a) c.f(com.kwad.components.ad.b.a.class);
        if (aVar != null) {
            return aVar.showInstallDialog(activity, ksExitInstallListener);
        }
        return false;
    }
}
