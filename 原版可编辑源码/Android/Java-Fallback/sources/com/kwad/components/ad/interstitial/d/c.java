package com.kwad.components.ad.interstitial.d;

public final class c extends com.kwad.sdk.mvp.a {
    public com.kwad.sdk.api.KsAdVideoPlayConfig dJ;
    public com.kwad.sdk.core.video.videoview.a ex;
    public com.kwad.components.core.webview.b.e.e gt;
    public com.kwad.components.ad.interstitial.d hG;
    public com.kwad.components.ad.interstitial.e.b hx;
    public com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener hz;
    public com.kwad.components.ad.interstitial.f.f jg;
    private java.util.List<com.kwad.components.ad.interstitial.d.c.e> jh;
    public boolean ji;
    public boolean jj;
    public boolean jk;
    public com.kwad.components.ad.interstitial.d.c.a jl;
    public java.util.List<com.kwad.components.ad.interstitial.d.c.a> jm;
    public java.util.List<com.kwad.components.ad.interstitial.d.h> jn;
    public com.kwad.sdk.widget.KSFrameLayout jo;
    public com.kwad.components.ad.interstitial.d.c.d jp;
    public java.util.List<com.kwad.components.ad.interstitial.d.c.c> jq;
    public java.util.List<com.kwad.components.core.video.a.c> jr;
    public volatile boolean js;
    public boolean jt;
    public int ju;
    public com.kwad.components.core.e.d.c mApkDownloadHelper;
    private android.os.Handler mHandler;




    final class 4 implements com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener {
        final android.view.View eX;
        final com.kwad.components.ad.interstitial.d.c jw;
        final android.content.Context jz;


        4(com.kwad.components.ad.interstitial.d.c r1, android.content.Context r2, android.view.View r3) {
                r0 = this;
                r0.jw = r1
                r0.jz = r2
                r0.eX = r3
                r0.<init>()
                return
        }

        @Override
        public final boolean onDecode(java.lang.String r1, java.io.InputStream r2, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r3) {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public final void onLoadingCancelled(java.lang.String r1, android.view.View r2) {
                r0 = this;
                return
        }

        @Override
        public final void onLoadingComplete(java.lang.String r1, android.view.View r2, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r3) {
                r0 = this;
                com.kwad.components.ad.interstitial.d.c$4$1 r1 = new com.kwad.components.ad.interstitial.d.c$4$1
                r1.<init>(r0, r3)
                com.kwad.sdk.utils.g.execute(r1)
                return
        }

        @Override
        public final void onLoadingFailed(java.lang.String r1, android.view.View r2, com.kwad.sdk.core.imageloader.core.assist.FailReason r3) {
                r0 = this;
                return
        }

        @Override
        public final void onLoadingStarted(java.lang.String r1, android.view.View r2) {
                r0 = this;
                return
        }
    }

    public interface a {
        void ck();
    }

    public static class b {
        private final android.content.Context context;
        private int jE;
        private boolean jF;
        private int jG;
        private boolean jH;
        private com.kwad.sdk.utils.ac.a jI;
        public double jJ;
        public boolean jK;

        public b(android.content.Context r1) {
                r0 = this;
                r0.<init>()
                r0.context = r1
                return
        }

        static int c(com.kwad.components.ad.interstitial.d.c.b r0) {
                int r0 = r0.jG
                return r0
        }

        static boolean d(com.kwad.components.ad.interstitial.d.c.b r0) {
                boolean r0 = r0.jH
                return r0
        }

        public final com.kwad.components.ad.interstitial.d.c.b a(com.kwad.sdk.utils.ac.a r1) {
                r0 = this;
                r0.jI = r1
                return r0
        }

        public final com.kwad.components.ad.interstitial.d.c.b c(double r1) {
                r0 = this;
                r0.jJ = r1
                return r0
        }

        public final int cV() {
                r1 = this;
                int r0 = r1.jE
                return r0
        }

        public final boolean cW() {
                r1 = this;
                boolean r0 = r1.jF
                return r0
        }

        public final boolean cX() {
                r1 = this;
                boolean r0 = r1.jH
                return r0
        }

        public final int cY() {
                r1 = this;
                int r0 = r1.jG
                return r0
        }

        public final double cZ() {
                r2 = this;
                double r0 = r2.jJ
                return r0
        }

        public final android.content.Context getContext() {
                r1 = this;
                android.content.Context r0 = r1.context
                return r0
        }

        public final com.kwad.sdk.utils.ac.a getTouchCoords() {
                r1 = this;
                com.kwad.sdk.utils.ac$a r0 = r1.jI
                return r0
        }

        public final com.kwad.components.ad.interstitial.d.c.b k(boolean r1) {
                r0 = this;
                r0.jF = r1
                return r0
        }

        public final com.kwad.components.ad.interstitial.d.c.b l(boolean r1) {
                r0 = this;
                r1 = 1
                r0.jH = r1
                return r0
        }

        public final com.kwad.components.ad.interstitial.d.c.b m(boolean r1) {
                r0 = this;
                r1 = 1
                r0.jK = r1
                return r0
        }

        public final com.kwad.components.ad.interstitial.d.c.b y(int r1) {
                r0 = this;
                r0.jE = r1
                return r0
        }

        public final com.kwad.components.ad.interstitial.d.c.b z(int r1) {
                r0 = this;
                r0.jG = r1
                return r0
        }
    }

    public interface c {
        void da();
    }

    public interface d {
        void db();
    }

    interface e {
        void onError();
    }

    public c() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r2.jm = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r2.jn = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.mHandler = r0
            r0 = 0
            r2.js = r0
            r0 = -1
            r2.ju = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r2.jr = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r2.jh = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.jq = r0
            return
    }

    private static int a(long r4, com.kwad.sdk.core.response.model.AdTemplate r6) {
            r0 = -1
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            r1 = -1
            if (r0 != 0) goto L8
            return r1
        L8:
            com.kwad.sdk.core.response.model.AdInfo r6 = com.kwad.sdk.core.response.b.d.cg(r6)
            long r2 = com.kwad.sdk.core.response.b.a.H(r6)
            float r6 = (float) r2
            r0 = 1148846080(0x447a0000, float:1000.0)
            float r6 = r6 / r0
            r0 = 0
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 == 0) goto L22
            float r4 = (float) r4
            float r4 = r4 / r6
            r5 = 1120403456(0x42c80000, float:100.0)
            float r4 = r4 * r5
            int r1 = java.lang.Math.round(r4)
        L22:
            return r1
    }

    private static long a(com.kwad.sdk.core.video.videoview.a r2) {
            if (r2 != 0) goto L5
            r0 = -1
            return r0
        L5:
            long r0 = r2.getCurrentPosition()
            return r0
    }

    private void a(int r2, int r3, android.content.Context r4) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r4 = r1.mAdTemplate
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            com.kwad.sdk.core.report.j r2 = r0.ck(r2)
            com.kwad.sdk.core.report.j r2 = r2.cg(r3)
            boolean r3 = com.kwad.sdk.utils.ai.IN()
            r0 = 1
            if (r3 == 0) goto L18
            r3 = 2
            goto L19
        L18:
            r3 = r0
        L19:
            com.kwad.sdk.core.report.j r2 = r2.cr(r3)
            com.kwad.sdk.core.report.z$b r2 = r2.Ca()
            r3 = 0
            com.kwad.sdk.core.report.a.a(r4, r2, r3)
            boolean r2 = r1.jk
            if (r2 != 0) goto L30
            com.kwad.sdk.api.KsInterstitialAd$AdInteractionListener r2 = r1.hz
            if (r2 == 0) goto L30
            r2.onAdClicked()
        L30:
            r1.ji = r0
            boolean r2 = r1.jk
            if (r2 != 0) goto L39
            r1.ck()
        L39:
            return
    }

    static void a(com.kwad.components.ad.interstitial.d.c r0, int r1, int r2, android.content.Context r3) {
            r0.a(r1, r2, r3)
            return
    }

    public static boolean a(android.content.Context r0, com.kwad.sdk.core.response.model.AdInfo r1) {
            boolean r0 = com.kwad.sdk.core.response.b.a.aO(r1)
            if (r0 == 0) goto Le
            boolean r0 = com.kwad.sdk.utils.ai.IN()
            if (r0 != 0) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }

    private static int b(com.kwad.sdk.core.video.videoview.a r7) {
            r0 = -1
            if (r7 != 0) goto L4
            return r0
        L4:
            long r1 = r7.getDuration()
            long r3 = r7.getCurrentPosition()
            r5 = 0
            int r7 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r7 == 0) goto L1c
            float r7 = (float) r3
            float r0 = (float) r1
            float r7 = r7 / r0
            r0 = 1120403456(0x42c80000, float:100.0)
            float r7 = r7 * r0
            int r0 = java.lang.Math.round(r7)
        L1c:
            return r0
    }

    public final boolean M(android.content.Context r3) {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            if (r0 == 0) goto L12
            if (r3 != 0) goto L7
            goto L12
        L7:
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r3)
            boolean r3 = com.kwad.sdk.core.response.b.a.bv(r3)
            return r3
        L12:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "isPlayable illegal params: "
            r0.<init>(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            r0.append(r1)
            java.lang.String r1 = ", context: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "InterstitialCallerContext"
            com.kwad.sdk.core.e.c.w(r0, r3)
            r3 = 0
            return r3
    }

    public final void a(android.content.Context r2, int r3, int r4, int r5) {
            r1 = this;
            com.kwad.components.core.e.d.a$a r4 = new com.kwad.components.core.e.d.a$a
            r4.<init>(r2)
            com.kwad.sdk.core.response.model.AdTemplate r5 = r1.mAdTemplate
            com.kwad.components.core.e.d.a$a r4 = r4.P(r5)
            com.kwad.components.core.e.d.c r5 = r1.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r4 = r4.b(r5)
            r5 = 0
            com.kwad.components.core.e.d.a$a r4 = r4.am(r5)
            r5 = 2
            com.kwad.components.core.e.d.a$a r4 = r4.ao(r5)
            r5 = 6
            com.kwad.components.core.e.d.a$a r4 = r4.am(r5)
            com.kwad.components.core.e.d.a$a r4 = r4.an(r3)
            com.kwad.components.ad.interstitial.d.c$3 r5 = new com.kwad.components.ad.interstitial.d.c$3
            r0 = 9
            r5.<init>(r1, r0, r3, r2)
            com.kwad.components.core.e.d.a$a r2 = r4.a(r5)
            com.kwad.components.core.e.d.a.a(r2)
            return
    }

    public final void a(android.content.Context r3, com.kwad.sdk.core.response.model.AdInfo r4, com.kwad.sdk.core.response.model.AdTemplate r5, android.view.View r6) {
            r2 = this;
            if (r6 != 0) goto L3
            return
        L3:
            com.kwad.sdk.core.response.model.b r4 = com.kwad.sdk.core.response.b.a.bi(r4)
            java.lang.String r4 = r4.getUrl()
            boolean r0 = com.kwad.sdk.utils.bc.isNullString(r4)
            if (r0 == 0) goto L12
            return
        L12:
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0 = com.kwad.sdk.core.imageloader.KSImageLoader.IMGOPTION_NORMAL
            com.kwad.components.ad.interstitial.d.c$4 r1 = new com.kwad.components.ad.interstitial.d.c$4
            r1.<init>(r2, r3, r6)
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r4, r5, r0, r1)
            return
    }

    public final void a(com.kwad.components.ad.interstitial.d.c.a r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.List<com.kwad.components.ad.interstitial.d.c$a> r0 = r1.jm
            r0.add(r2)
            return
    }

    public final void a(com.kwad.components.ad.interstitial.d.c.b r6) {
            r5 = this;
            int r0 = r6.cV()
            r1 = 0
            r2 = 1
            if (r0 != r2) goto La
            r0 = r2
            goto Lb
        La:
            r0 = r1
        Lb:
            boolean r3 = com.kwad.components.ad.interstitial.a.b.cD()
            if (r3 != 0) goto L1d
            if (r0 != 0) goto L1d
            boolean r3 = r6.cX()
            if (r3 != 0) goto L1d
            boolean r3 = r6.jK
            if (r3 == 0) goto L75
        L1d:
            com.kwad.components.core.e.d.a$a r3 = new com.kwad.components.core.e.d.a$a
            android.content.Context r4 = r6.getContext()
            r3.<init>(r4)
            com.kwad.sdk.core.response.model.AdTemplate r4 = r5.mAdTemplate
            com.kwad.components.core.e.d.a$a r3 = r3.P(r4)
            com.kwad.components.core.e.d.c r4 = r5.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r3 = r3.b(r4)
            com.kwad.components.core.e.d.a$a r0 = r3.am(r0)
            com.kwad.components.core.e.d.a$a r0 = r0.am(r2)
            int r2 = com.kwad.components.ad.interstitial.d.c.b.c(r6)
            com.kwad.components.core.e.d.a$a r0 = r0.an(r2)
            int r2 = r6.cV()
            com.kwad.components.core.e.d.a$a r0 = r0.ao(r2)
            com.kwad.components.ad.interstitial.d.c$1 r2 = new com.kwad.components.ad.interstitial.d.c$1
            r2.<init>(r5, r6)
            com.kwad.components.core.e.d.a$a r6 = r0.a(r2)
            int r6 = com.kwad.components.core.e.d.a.a(r6)
            if (r6 != 0) goto L75
            com.kwad.components.ad.interstitial.d r6 = r5.hG
            if (r6 == 0) goto L75
            boolean r6 = com.kwad.components.ad.interstitial.a.b.cG()
            if (r6 == 0) goto L75
            r6 = -1
            com.kwad.sdk.core.video.videoview.a r0 = r5.ex
            r5.a(r1, r6, r0)
            android.os.Handler r6 = r5.mHandler
            com.kwad.components.ad.interstitial.d.c$2 r0 = new com.kwad.components.ad.interstitial.d.c$2
            r0.<init>(r5)
            r1 = 500(0x1f4, double:2.47E-321)
            r6.postDelayed(r0, r1)
        L75:
            return
    }

    public final void a(com.kwad.components.ad.interstitial.d.c.e r2) {
            r1 = this;
            java.util.List<com.kwad.components.ad.interstitial.d.c$e> r0 = r1.jh
            r0.add(r2)
            return
    }

    public final void a(com.kwad.components.ad.interstitial.d.h r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.List<com.kwad.components.ad.interstitial.d.h> r0 = r1.jn
            r0.add(r2)
            return
    }

    public final void a(com.kwad.components.core.video.a.c r2) {
            r1 = this;
            java.util.List<com.kwad.components.core.video.a$c> r0 = r1.jr
            boolean r0 = r0.contains(r2)
            if (r0 != 0) goto Ld
            java.util.List<com.kwad.components.core.video.a$c> r0 = r1.jr
            r0.add(r2)
        Ld:
            return
    }

    public final void a(boolean r11, int r12, com.kwad.sdk.core.video.videoview.a r13) {
            r10 = this;
            if (r13 == 0) goto Lb
            long r0 = a(r13)
            int r12 = b(r13)
            goto L12
        Lb:
            long r0 = (long) r12
            com.kwad.sdk.core.response.model.AdTemplate r12 = r10.mAdTemplate
            int r12 = a(r0, r12)
        L12:
            r6 = r12
            r4 = r0
            if (r11 == 0) goto L19
            r11 = 14
            goto L1a
        L19:
            r11 = 1
        L1a:
            r3 = r11
            com.kwad.sdk.core.response.model.AdTemplate r2 = r10.mAdTemplate
            com.kwad.components.ad.interstitial.d r11 = r10.hG
            com.kwad.sdk.utils.bi r11 = r11.getTimerHelper()
            long r7 = r11.getTime()
            r9 = 0
            com.kwad.sdk.core.report.a.a(r2, r3, r4, r6, r7, r9)
            return
    }

    public final void b(android.content.Context r2, com.kwad.sdk.core.response.model.AdTemplate r3) {
            r1 = this;
            boolean r0 = r1.js
            if (r0 == 0) goto L5
            return
        L5:
            com.kwad.components.core.page.a.launch(r2, r3)
            r2 = 1
            r1.js = r2
            return
    }

    public final void b(com.kwad.components.ad.interstitial.d.c.a r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.List<com.kwad.components.ad.interstitial.d.c$a> r0 = r1.jm
            r0.remove(r2)
            return
    }

    public final void b(com.kwad.components.ad.interstitial.d.c.b r7) {
            r6 = this;
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            com.kwad.sdk.utils.ac$a r1 = r7.getTouchCoords()
            r0.c(r1)
            boolean r1 = r7.cW()
            if (r1 != 0) goto L1d
            boolean r1 = com.kwad.components.ad.interstitial.d.c.b.d(r7)
            if (r1 != 0) goto L1d
            r1 = 153(0x99, float:2.14E-43)
            r7.z(r1)
        L1d:
            com.kwad.sdk.core.report.j r1 = new com.kwad.sdk.core.report.j
            r1.<init>()
            int r2 = r7.cY()
            com.kwad.sdk.core.report.j r1 = r1.cg(r2)
            com.kwad.sdk.utils.ac$a r2 = r7.getTouchCoords()
            com.kwad.sdk.core.report.j r1 = r1.c(r2)
            boolean r2 = com.kwad.sdk.utils.ai.IN()
            r3 = 1
            if (r2 == 0) goto L3b
            r2 = 2
            goto L3c
        L3b:
            r2 = r3
        L3c:
            com.kwad.sdk.core.report.j r1 = r1.cr(r2)
            double r4 = r7.cZ()
            com.kwad.sdk.core.report.j r7 = r1.i(r4)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r6.mAdTemplate
            r2 = 0
            com.kwad.sdk.core.report.a.a(r1, r7, r2)
            com.kwad.sdk.core.video.videoview.a r7 = r6.ex
            if (r7 == 0) goto L62
            long r1 = a(r7)
            com.kwad.sdk.core.video.videoview.a r7 = r6.ex
            int r7 = b(r7)
            r0.af(r1)
            r0.cl(r7)
        L62:
            boolean r7 = r6.jk
            if (r7 != 0) goto L6d
            com.kwad.sdk.api.KsInterstitialAd$AdInteractionListener r7 = r6.hz
            if (r7 == 0) goto L6d
            r7.onAdClicked()
        L6d:
            r6.ji = r3
            boolean r7 = r6.jk
            if (r7 != 0) goto L76
            r6.ck()
        L76:
            return
    }

    public final void b(com.kwad.components.ad.interstitial.d.h r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.List<com.kwad.components.ad.interstitial.d.h> r0 = r1.jn
            r0.remove(r2)
            return
    }

    public final void b(com.kwad.components.core.video.a.c r2) {
            r1 = this;
            java.util.List<com.kwad.components.core.video.a$c> r0 = r1.jr
            r0.remove(r2)
            return
    }

    public final void cP() {
            r2 = this;
            java.util.List<com.kwad.components.ad.interstitial.d.c$e> r0 = r2.jh
            if (r0 == 0) goto L22
            int r0 = r0.size()
            if (r0 <= 0) goto L22
            java.util.List<com.kwad.components.ad.interstitial.d.c$e> r0 = r2.jh
            java.util.Iterator r0 = r0.iterator()
        L10:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L22
            java.lang.Object r1 = r0.next()
            com.kwad.components.ad.interstitial.d.c$e r1 = (com.kwad.components.ad.interstitial.d.c.e) r1
            if (r1 == 0) goto L10
            r1.onError()
            goto L10
        L22:
            return
    }

    public final void cQ() {
            r1 = this;
            com.kwad.components.ad.interstitial.d.c$d r0 = r1.jp
            if (r0 == 0) goto L7
            r0.db()
        L7:
            return
    }

    public final void cR() {
            r2 = this;
            java.util.List<com.kwad.components.ad.interstitial.d.c$c> r0 = r2.jq
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            com.kwad.components.ad.interstitial.d.c$c r1 = (com.kwad.components.ad.interstitial.d.c.c) r1
            r1.da()
            goto L6
        L16:
            return
    }

    public final void cS() {
            r2 = this;
            java.util.List<com.kwad.components.ad.interstitial.d.h> r0 = r2.jn
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            com.kwad.components.ad.interstitial.d.h r1 = (com.kwad.components.ad.interstitial.d.h) r1
            r1.du()
            goto L6
        L16:
            return
    }

    public final void cT() {
            r2 = this;
            java.util.List<com.kwad.components.ad.interstitial.d.h> r0 = r2.jn
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            com.kwad.components.ad.interstitial.d.h r1 = (com.kwad.components.ad.interstitial.d.h) r1
            r1.dv()
            goto L6
        L16:
            return
    }

    public final boolean cU() {
            r3 = this;
            com.kwad.components.ad.interstitial.f.f r0 = r3.jg
            if (r0 == 0) goto Ld
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto Lb
            goto Ld
        Lb:
            r0 = 0
            goto Le
        Ld:
            r0 = 1
        Le:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "isH5Interstitial :"
            r1.<init>(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "InterstitialCallerContext"
            com.kwad.sdk.core.e.c.d(r2, r1)
            return r0
    }

    public final void ck() {
            r2 = this;
            java.util.List<com.kwad.components.ad.interstitial.d.c$a> r0 = r2.jm
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            com.kwad.components.ad.interstitial.d.c$a r1 = (com.kwad.components.ad.interstitial.d.c.a) r1
            r1.ck()
            goto L6
        L16:
            com.kwad.components.ad.interstitial.d.c$a r0 = r2.jl
            if (r0 == 0) goto L1d
            r0.ck()
        L1d:
            return
    }

    @Override
    public final void release() {
            r2 = this;
            android.os.Handler r0 = r2.mHandler
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            java.util.List<com.kwad.components.core.video.a$c> r0 = r2.jr
            r0.clear()
            java.util.List<com.kwad.components.ad.interstitial.d.c$e> r0 = r2.jh
            r0.clear()
            java.util.List<com.kwad.components.ad.interstitial.d.c$c> r0 = r2.jq
            r0.clear()
            java.util.List<com.kwad.components.ad.interstitial.d.h> r0 = r2.jn
            r0.clear()
            com.kwad.components.ad.interstitial.e.b r0 = r2.hx
            if (r0 == 0) goto L21
            r0.sz()
        L21:
            return
    }
}
