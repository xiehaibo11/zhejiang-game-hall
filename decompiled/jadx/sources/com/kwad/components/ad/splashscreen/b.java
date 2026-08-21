package com.kwad.components.ad.splashscreen;

import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;
import android.text.TextUtils;
import com.kwad.components.ad.KsAdLoadManager;
import com.kwad.components.core.p.a.a;
import com.kwad.components.core.response.model.AdResultData;
import com.kwad.components.core.t.k;
import com.kwad.sdk.api.KsLoadManager;
import com.kwad.sdk.api.KsScene;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.internal.api.SceneImpl;
import com.kwad.sdk.utils.bj;
import com.kwai.adclient.kscommerciallogger.model.BusinessType;
import com.mbridge.msdk.interstitial.view.MBInterstitialActivity;

/* JADX INFO: loaded from: classes2.dex */
public final class b {
    private static final Handler mHandler = new Handler(Looper.getMainLooper());

    static class a {
        private volatile boolean BM;

        private a() {
            this.BM = false;
        }

        /* synthetic */ a(byte b) {
            this();
        }
    }

    /* JADX INFO: renamed from: com.kwad.components.ad.splashscreen.b$b, reason: collision with other inner class name */
    static class C0129b {
        private volatile boolean BN;

        private C0129b() {
            this.BN = false;
        }

        /* synthetic */ C0129b(byte b) {
            this();
        }

        static /* synthetic */ boolean a(C0129b c0129b, boolean z) {
            c0129b.BN = true;
            return true;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void a(com.kwad.components.core.p.a.b bVar) {
        final SceneImpl sceneImpl = bVar.PN;
        if (TextUtils.isEmpty(sceneImpl.getBidResponse()) && TextUtils.isEmpty(sceneImpl.getBidResponseV2())) {
            com.kwad.components.core.o.a.pA().pD();
            final long jElapsedRealtime = SystemClock.elapsedRealtime();
            com.kwad.components.ad.splashscreen.monitor.a.kN();
            com.kwad.components.ad.splashscreen.monitor.a.n(sceneImpl.posId);
            sceneImpl.setAdStyle(4);
            sceneImpl.setAdNum(5);
            com.kwad.sdk.core.e.c.d("KsAdSplashScreenLoadManager", "loadSplashScreenCache ");
            KsAdLoadManager.M();
            KsAdLoadManager.a(new a.C0159a().e(bVar).aF(false).a(new com.kwad.components.core.p.c() { // from class: com.kwad.components.ad.splashscreen.b.4
                @Override // com.kwad.components.core.p.c, com.kwad.components.core.p.i
                public final void a(AdResultData adResultData) {
                    if (adResultData.getAdTemplateList().size() > 0) {
                        com.kwad.sdk.core.e.c.d("KsAdSplashScreenLoadManager", "loadSplashScreenCache onSuccess:" + adResultData.getAdTemplateList().size() + " saved " + SplashPreloadManager.kB().b(adResultData, false));
                        com.kwad.components.ad.splashscreen.monitor.a.kN();
                        com.kwad.components.ad.splashscreen.monitor.a.a(adResultData.getAdTemplateList(), SystemClock.elapsedRealtime() - jElapsedRealtime, sceneImpl.getPosId());
                        com.kwad.components.core.o.a.pA().aB(adResultData.getAdTemplateList().size());
                    }
                }

                @Override // com.kwad.components.core.p.c, com.kwad.components.core.p.i
                public final void onError(int i, String str) {
                    com.kwad.components.ad.splashscreen.monitor.a.kN();
                    com.kwad.components.ad.splashscreen.monitor.a.b(i, str, sceneImpl.getPosId());
                    com.kwad.sdk.core.e.c.d("KsAdSplashScreenLoadManager", "loadSplashScreenCache onError:" + String.format("code:%s__msg:%s", Integer.valueOf(i), str));
                }
            }).pI());
        }
    }

    public static void loadSplashScreenAd(KsScene ksScene, final KsLoadManager.SplashScreenAdListener splashScreenAdListener) {
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        final SceneImpl sceneImplCovert = SceneImpl.covert(ksScene);
        com.kwad.components.ad.splashscreen.monitor.a.kN();
        com.kwad.components.ad.splashscreen.monitor.a.m(sceneImplCovert.getPosId());
        boolean zA = k.qo().a(sceneImplCovert, "loadSplashScreenAd");
        sceneImplCovert.setAdStyle(4);
        sceneImplCovert.setAdNum(1);
        com.kwad.sdk.core.e.c.d("KsAdSplashScreenLoadManager", "loadSplashScreenAd ");
        byte b = 0;
        final a aVar = new a(b);
        aVar.BM = false;
        final long jElapsedRealtime2 = SystemClock.elapsedRealtime();
        final com.kwad.components.core.p.a.b bVar = new com.kwad.components.core.p.a.b(sceneImplCovert);
        final C0129b c0129b = new C0129b(b);
        com.kwad.components.core.o.a.pA().pC();
        mHandler.postDelayed(new Runnable() { // from class: com.kwad.components.ad.splashscreen.b.1
            @Override // java.lang.Runnable
            public final void run() {
                b.a(bVar);
            }
        }, MBInterstitialActivity.WEB_LOAD_TIME);
        final Runnable runnable = new Runnable() { // from class: com.kwad.components.ad.splashscreen.b.2
            @Override // java.lang.Runnable
            public final void run() {
                C0129b.a(c0129b, true);
                com.kwad.sdk.core.e.c.d("KsAdSplashScreenLoadManager", "loadSplashAd mTimeOutRunnable timeOut");
                splashScreenAdListener.onError(com.kwad.sdk.core.network.f.aoW.errorCode, com.kwad.sdk.core.network.f.aoW.msg);
                com.kwad.components.ad.splashscreen.monitor.a.kN();
                com.kwad.components.ad.splashscreen.monitor.a.a("", false, com.kwad.sdk.core.network.f.aoW.errorCode, com.kwad.sdk.core.network.f.aoW.msg, sceneImplCovert.getPosId());
                com.kwad.components.core.o.a.pA().aA(4);
            }
        };
        int iA = com.kwad.sdk.core.config.d.a(com.kwad.components.ad.splashscreen.b.a.Cv);
        if (iA < 0) {
            iA = 5000;
        }
        mHandler.postDelayed(runnable, iA);
        final long jElapsedRealtime3 = SystemClock.elapsedRealtime() - jElapsedRealtime;
        com.kwad.components.ad.splashscreen.monitor.a.kN();
        com.kwad.components.ad.splashscreen.monitor.a.d(sceneImplCovert.getPosId(), jElapsedRealtime3);
        KsAdLoadManager.M();
        KsAdLoadManager.a(new a.C0159a().e(bVar).aE(true).aF(zA).a(new com.kwad.components.core.p.c() { // from class: com.kwad.components.ad.splashscreen.b.3
            @Override // com.kwad.components.core.p.c, com.kwad.components.core.p.b
            public final void a(final int i, final String str, boolean z) {
                if (c0129b.BN) {
                    com.kwad.sdk.core.e.c.d("KsAdSplashScreenLoadManager", "loadSplashAd onError isTimeOut return " + String.format("code:%s__msg:%s", Integer.valueOf(i), str));
                } else {
                    b.mHandler.removeCallbacks(runnable);
                    if (!aVar.BM) {
                        com.kwad.components.ad.splashscreen.monitor.a.kN();
                        com.kwad.components.ad.splashscreen.monitor.a.a("", z, i, str, sceneImplCovert.getPosId());
                    }
                    bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.splashscreen.b.3.1
                        @Override // java.lang.Runnable
                        public final void run() {
                            com.kwad.sdk.core.e.c.d("KsAdSplashScreenLoadManager", "loadSplashAd onError:" + String.format("code:%s__msg:%s", Integer.valueOf(i), str));
                            splashScreenAdListener.onError(i, str);
                            if (i == com.kwad.sdk.core.network.f.aoX.errorCode) {
                                com.kwad.components.core.o.a.pA().aA(0);
                            } else {
                                com.kwad.components.core.o.a.pA().aA(3);
                            }
                        }
                    });
                }
            }

            @Override // com.kwad.components.core.p.c, com.kwad.components.core.p.b
            public final void a(final AdResultData adResultData, boolean z) {
                bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.splashscreen.b.3.2
                    @Override // java.lang.Runnable
                    public final void run() {
                        try {
                            splashScreenAdListener.onRequestResult(adResultData.getAdTemplateList().size());
                        } catch (Throwable th) {
                            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                        }
                    }
                });
                if (adResultData.getAdTemplateList().size() <= 0) {
                    if (c0129b.BN) {
                        com.kwad.sdk.core.e.c.d("KsAdSplashScreenLoadManager", "loadSplashAd isTimeOut return ");
                        return;
                    }
                    b.mHandler.removeCallbacks(runnable);
                    com.kwad.components.ad.splashscreen.monitor.a.kN();
                    com.kwad.components.ad.splashscreen.monitor.a.a("", z, com.kwad.sdk.core.network.f.aoU.errorCode, TextUtils.isEmpty(adResultData.testErrorMsg) ? com.kwad.sdk.core.network.f.aoU.msg : adResultData.testErrorMsg, sceneImplCovert.getPosId());
                    aVar.BM = true;
                    a(com.kwad.sdk.core.network.f.aoU.errorCode, TextUtils.isEmpty(adResultData.testErrorMsg) ? com.kwad.sdk.core.network.f.aoU.msg : adResultData.testErrorMsg, z);
                    com.kwad.components.core.o.a.pA().aA(3);
                    return;
                }
                AdTemplate adTemplate = adResultData.getAdTemplateList().get(0);
                adTemplate.loadDataTime = SystemClock.elapsedRealtime() - jElapsedRealtime2;
                adTemplate.notNetworkRequest = z;
                com.kwad.components.ad.splashscreen.monitor.a.kN();
                com.kwad.components.ad.splashscreen.monitor.a.c(adTemplate, jElapsedRealtime3);
                KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_SPLASH, "dataReady").report();
                long jElapsedRealtime4 = SystemClock.elapsedRealtime();
                final KsSplashScreenAdControl ksSplashScreenAdControl = new KsSplashScreenAdControl(sceneImplCovert, adResultData);
                boolean zC = SplashPreloadManager.kB().c(adResultData);
                com.kwad.sdk.core.e.c.d("KsAdSplashScreenLoadManager", "loadSplashAd onSuccess " + zC);
                if (!zC) {
                    SplashPreloadManager.kB();
                    if (!SplashPreloadManager.d(adResultData)) {
                        if (c0129b.BN) {
                            com.kwad.sdk.core.e.c.d("KsAdSplashScreenLoadManager", "loadSplashAd isTimeOut return ");
                            return;
                        }
                        b.mHandler.removeCallbacks(runnable);
                        com.kwad.components.ad.splashscreen.monitor.a.kN();
                        com.kwad.components.ad.splashscreen.monitor.a.b(adTemplate, 5, jElapsedRealtime4, jElapsedRealtime3);
                        aVar.BM = true;
                        a(com.kwad.sdk.core.network.f.aoV.errorCode, "请求成功，但缓存未命中", z);
                        com.kwad.sdk.core.e.c.d("KsAdSplashScreenLoadManager", "loadSplashAd no cache returned");
                        com.kwad.components.core.o.a.pA().aA(3);
                        return;
                    }
                    com.kwad.sdk.core.e.c.d("KsAdSplashScreenLoadManager", "loadSplashAd image returned");
                    int iB = SplashPreloadManager.kB().b(adResultData, true);
                    if (!c0129b.BN) {
                        b.mHandler.removeCallbacks(runnable);
                        if (iB > 0) {
                            bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.splashscreen.b.3.4
                                @Override // java.lang.Runnable
                                public final void run() {
                                    try {
                                        KsAdLoadManager.M().a(ksSplashScreenAdControl);
                                        splashScreenAdListener.onSplashScreenAdLoad(ksSplashScreenAdControl);
                                    } catch (Throwable th) {
                                        com.kwad.sdk.core.e.c.printStackTrace(th);
                                    }
                                }
                            });
                            com.kwad.components.ad.splashscreen.monitor.a.kN();
                            com.kwad.components.ad.splashscreen.monitor.a.a(adTemplate, 3, jElapsedRealtime4, jElapsedRealtime3);
                            com.kwad.components.core.o.a.pA().aA(2);
                            return;
                        }
                        com.kwad.components.ad.splashscreen.monitor.a.kN();
                        com.kwad.components.ad.splashscreen.monitor.a.b(adTemplate, 4, jElapsedRealtime4, jElapsedRealtime3);
                        aVar.BM = true;
                        a(com.kwad.sdk.core.network.f.aoX.errorCode, com.kwad.sdk.core.network.f.aoX.msg, z);
                        return;
                    }
                } else if (!c0129b.BN) {
                    b.mHandler.removeCallbacks(runnable);
                    bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.splashscreen.b.3.3
                        @Override // java.lang.Runnable
                        public final void run() {
                            try {
                                KsAdLoadManager.M().a(ksSplashScreenAdControl);
                                splashScreenAdListener.onSplashScreenAdLoad(ksSplashScreenAdControl);
                            } catch (Throwable th) {
                                com.kwad.sdk.core.e.c.printStackTrace(th);
                            }
                        }
                    });
                    com.kwad.components.ad.splashscreen.monitor.a.kN();
                    com.kwad.components.ad.splashscreen.monitor.a.a(adTemplate, 2, jElapsedRealtime4, jElapsedRealtime3);
                    com.kwad.sdk.core.e.c.d("KsAdSplashScreenLoadManager", "loadSplashAd cache returned");
                    com.kwad.components.core.o.a.pA().aA(1);
                    return;
                }
                com.kwad.components.ad.splashscreen.monitor.a.kN();
                com.kwad.components.ad.splashscreen.monitor.a.b(adTemplate, 7, jElapsedRealtime4, jElapsedRealtime3);
                com.kwad.sdk.core.e.c.d("KsAdSplashScreenLoadManager", "loadSplashAd isTimeOut return ");
            }
        }).pI());
    }
}
