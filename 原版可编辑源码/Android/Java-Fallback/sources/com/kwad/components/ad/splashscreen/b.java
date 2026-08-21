package com.kwad.components.ad.splashscreen;

public final class b {
    private static final android.os.Handler mHandler = null;





    static class a {
        private volatile boolean BM;

        private a() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.BM = r0
                return
        }

        a(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        static boolean a(com.kwad.components.ad.splashscreen.b.a r0) {
                boolean r0 = r0.BM
                return r0
        }

        static boolean a(com.kwad.components.ad.splashscreen.b.a r0, boolean r1) {
                r0.BM = r1
                return r1
        }
    }

    static class b {
        private volatile boolean BN;

        private b() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.BN = r0
                return
        }

        b(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        static boolean a(com.kwad.components.ad.splashscreen.b.b r0) {
                boolean r0 = r0.BN
                return r0
        }

        static boolean a(com.kwad.components.ad.splashscreen.b.b r0, boolean r1) {
                r1 = 1
                r0.BN = r1
                return r1
        }
    }

    static {
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.kwad.components.ad.splashscreen.b.mHandler = r0
            return
    }

    private static void a(com.kwad.components.core.p.a.b r5) {
            com.kwad.sdk.internal.api.SceneImpl r0 = r5.PN
            java.lang.String r1 = r0.getBidResponse()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L5a
            java.lang.String r1 = r0.getBidResponseV2()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L17
            goto L5a
        L17:
            com.kwad.components.core.o.a r1 = com.kwad.components.core.o.a.pA()
            r1.pD()
            long r1 = android.os.SystemClock.elapsedRealtime()
            com.kwad.components.ad.splashscreen.monitor.a.kN()
            long r3 = r0.posId
            com.kwad.components.ad.splashscreen.monitor.a.n(r3)
            r3 = 4
            r0.setAdStyle(r3)
            r3 = 5
            r0.setAdNum(r3)
            java.lang.String r3 = "KsAdSplashScreenLoadManager"
            java.lang.String r4 = "loadSplashScreenCache "
            com.kwad.sdk.core.e.c.d(r3, r4)
            com.kwad.components.ad.KsAdLoadManager.M()
            com.kwad.components.core.p.a.a$a r3 = new com.kwad.components.core.p.a.a$a
            r3.<init>()
            com.kwad.components.core.p.a.a$a r5 = r3.e(r5)
            r3 = 0
            com.kwad.components.core.p.a.a$a r5 = r5.aF(r3)
            com.kwad.components.ad.splashscreen.b$4 r3 = new com.kwad.components.ad.splashscreen.b$4
            r3.<init>(r0, r1)
            com.kwad.components.core.p.a.a$a r5 = r5.a(r3)
            com.kwad.components.core.p.a.a r5 = r5.pI()
            com.kwad.components.ad.KsAdLoadManager.a(r5)
        L5a:
            return
    }

    static void b(com.kwad.components.core.p.a.b r0) {
            a(r0)
            return
    }

    static android.os.Handler ks() {
            android.os.Handler r0 = com.kwad.components.ad.splashscreen.b.mHandler
            return r0
    }

    public static void loadSplashScreenAd(com.kwad.sdk.api.KsScene r14, com.kwad.sdk.api.KsLoadManager.SplashScreenAdListener r15) {
            long r0 = android.os.SystemClock.elapsedRealtime()
            com.kwad.sdk.internal.api.SceneImpl r6 = com.kwad.sdk.internal.api.SceneImpl.covert(r14)
            com.kwad.components.ad.splashscreen.monitor.a.kN()
            long r2 = r6.getPosId()
            com.kwad.components.ad.splashscreen.monitor.a.m(r2)
            com.kwad.components.core.t.k r14 = com.kwad.components.core.t.k.qo()
            java.lang.String r2 = "loadSplashScreenAd"
            boolean r14 = r14.a(r6, r2)
            r2 = 4
            r6.setAdStyle(r2)
            r2 = 1
            r6.setAdNum(r2)
            java.lang.String r3 = "KsAdSplashScreenLoadManager"
            java.lang.String r4 = "loadSplashScreenAd "
            com.kwad.sdk.core.e.c.d(r3, r4)
            com.kwad.components.ad.splashscreen.b$a r5 = new com.kwad.components.ad.splashscreen.b$a
            r3 = 0
            r5.<init>(r3)
            com.kwad.components.ad.splashscreen.b.a.a(r5, r3)
            long r8 = android.os.SystemClock.elapsedRealtime()
            com.kwad.components.core.p.a.b r4 = new com.kwad.components.core.p.a.b
            r4.<init>(r6)
            com.kwad.components.ad.splashscreen.b$b r7 = new com.kwad.components.ad.splashscreen.b$b
            r7.<init>(r3)
            com.kwad.components.core.o.a r3 = com.kwad.components.core.o.a.pA()
            r3.pC()
            android.os.Handler r3 = com.kwad.components.ad.splashscreen.b.mHandler
            com.kwad.components.ad.splashscreen.b$1 r10 = new com.kwad.components.ad.splashscreen.b$1
            r10.<init>(r4)
            r11 = 15000(0x3a98, double:7.411E-320)
            r3.postDelayed(r10, r11)
            com.kwad.components.ad.splashscreen.b$2 r10 = new com.kwad.components.ad.splashscreen.b$2
            r10.<init>(r7, r15, r6)
            com.kwad.sdk.core.config.item.k r3 = com.kwad.components.ad.splashscreen.b.a.Cv
            int r3 = com.kwad.sdk.core.config.d.a(r3)
            if (r3 >= 0) goto L64
            r3 = 5000(0x1388, float:7.006E-42)
        L64:
            android.os.Handler r11 = com.kwad.components.ad.splashscreen.b.mHandler
            long r12 = (long) r3
            r11.postDelayed(r10, r12)
            long r11 = android.os.SystemClock.elapsedRealtime()
            long r0 = r11 - r0
            com.kwad.components.ad.splashscreen.monitor.a.kN()
            long r11 = r6.getPosId()
            com.kwad.components.ad.splashscreen.monitor.a.d(r11, r0)
            com.kwad.components.ad.KsAdLoadManager.M()
            com.kwad.components.core.p.a.a$a r3 = new com.kwad.components.core.p.a.a$a
            r3.<init>()
            com.kwad.components.core.p.a.a$a r3 = r3.e(r4)
            com.kwad.components.core.p.a.a$a r2 = r3.aE(r2)
            com.kwad.components.core.p.a.a$a r14 = r2.aF(r14)
            com.kwad.components.ad.splashscreen.b$3 r12 = new com.kwad.components.ad.splashscreen.b$3
            r2 = r12
            r3 = r7
            r4 = r10
            r7 = r15
            r10 = r0
            r2.<init>(r3, r4, r5, r6, r7, r8, r10)
            com.kwad.components.core.p.a.a$a r14 = r14.a(r12)
            com.kwad.components.core.p.a.a r14 = r14.pI()
            com.kwad.components.ad.KsAdLoadManager.a(r14)
            return
    }
}
