package com.kwad.components.ad.f;

public final class d extends com.kwad.sdk.api.core.AbstractKsNativeAd implements android.content.DialogInterface.OnDismissListener, android.content.DialogInterface.OnShowListener, com.kwad.components.core.internal.api.a {
    private com.kwad.components.core.internal.api.c bP;
    private android.os.Vibrator dP;
    private boolean mA;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private int mB;
    private int mC;
    private com.kwad.sdk.api.KsNativeAd.VideoPlayListener mD;
    private com.kwad.components.ad.f.d.a mE;
    private com.kwad.sdk.utils.bi mTimerHelper;
    private com.kwad.components.ad.f.b.c mr;
    private boolean mv;
    private com.kwad.sdk.api.KsNativeAd.AdInteractionListener mw;
    private com.kwad.components.ad.f.f mx;
    private com.kwad.components.ad.f.e my;
    private com.kwad.sdk.api.KsNativeAd.VideoPlayListener mz;










    public interface a {
        void eJ();

        boolean handleDownloadDialog(android.content.DialogInterface.OnClickListener r1);

        void l(android.view.View r1);

        void onDownloadTipsDialogDismiss();

        void onDownloadTipsDialogShow();
    }

    public d(com.kwad.sdk.core.response.model.AdTemplate r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.mA = r0
            com.kwad.components.core.internal.api.c r1 = new com.kwad.components.core.internal.api.c
            r1.<init>()
            r2.bP = r1
            r2.mB = r0
            r2.mC = r0
            com.kwad.components.ad.f.d$8 r0 = new com.kwad.components.ad.f.d$8
            r0.<init>(r2)
            r2.mD = r0
            com.kwad.components.ad.f.d$9 r0 = new com.kwad.components.ad.f.d$9
            r0.<init>(r2)
            r2.mE = r0
            r2.mAdTemplate = r3
            com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r3)
            r2.mAdInfo = r3
            boolean r3 = com.kwad.sdk.core.response.b.a.ax(r3)
            if (r3 == 0) goto L48
            com.kwad.components.core.e.d.c r3 = new com.kwad.components.core.e.d.c
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            r3.<init>(r0)
            r2.mApkDownloadHelper = r3
            r3.setOnShowListener(r2)
            com.kwad.components.core.e.d.c r3 = r2.mApkDownloadHelper
            r3.setOnDismissListener(r2)
            com.kwad.components.core.e.d.c r3 = r2.mApkDownloadHelper
            com.kwad.components.ad.f.d$1 r0 = new com.kwad.components.ad.f.d$1
            r0.<init>(r2)
            r3.a(r0)
        L48:
            com.kwad.sdk.core.response.model.AdInfo r3 = r2.mAdInfo
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.I(r3)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.core.imageloader.KSImageLoader.preloadImage(r3, r0)
            return
    }

    private android.os.Vibrator F(android.content.Context r2) {
            r1 = this;
            android.os.Vibrator r0 = r1.dP
            if (r0 != 0) goto Le
            java.lang.String r0 = "vibrator"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.os.Vibrator r2 = (android.os.Vibrator) r2
            r1.dP = r2
        Le:
            android.os.Vibrator r2 = r1.dP
            return r2
    }

    static android.os.Vibrator a(com.kwad.components.ad.f.d r0, android.content.Context r1) {
            android.os.Vibrator r0 = r0.F(r1)
            return r0
    }

    private android.view.View a(android.content.Context r4, com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl r5) {
            r3 = this;
            java.lang.Class<com.kwad.components.core.offline.api.a.a> r0 = com.kwad.components.core.offline.api.a.a.class
            com.kwad.sdk.components.a r0 = com.kwad.sdk.components.c.f(r0)
            com.kwad.components.core.offline.api.a.a r0 = (com.kwad.components.core.offline.api.a.a) r0
            if (r0 == 0) goto L34
            boolean r0 = r0.hasLiveCompoReady()
            if (r0 != 0) goto L11
            goto L34
        L11:
            com.kwad.components.ad.f.e r0 = r3.my
            if (r0 != 0) goto L31
            com.kwad.components.ad.f.e r0 = new com.kwad.components.ad.f.e
            r0.<init>(r4)
            r3.my = r0
            com.kwad.components.ad.f.d$a r1 = r3.mE
            r0.setInnerAdInteractionListener(r1)
            com.kwad.components.ad.f.e r0 = r3.my
            com.kwad.sdk.api.KsNativeAd$VideoPlayListener r1 = r3.mD
            r0.setVideoPlayListener(r1)
            com.kwad.components.ad.f.e r0 = r3.my
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.components.core.e.d.c r2 = r3.mApkDownloadHelper
            r0.a(r4, r1, r2, r5)
        L31:
            com.kwad.components.ad.f.e r4 = r3.my
            return r4
        L34:
            r4 = 0
            return r4
    }

    static com.kwad.components.ad.f.d.a a(com.kwad.components.ad.f.d r0) {
            com.kwad.components.ad.f.d$a r0 = r0.mE
            return r0
    }

    private void a(android.app.Activity r3, android.view.View r4, com.kwad.sdk.utils.ac.a r5, int r6, boolean r7, int r8) {
            r2 = this;
            if (r3 != 0) goto L6
            android.content.Context r3 = r4.getContext()
        L6:
            android.content.Context r3 = com.kwad.sdk.m.l.wrapContextIfNeed(r3)
            com.kwad.components.core.e.d.a$a r0 = new com.kwad.components.core.e.d.a$a
            r0.<init>(r3)
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            com.kwad.components.core.e.d.a$a r3 = r0.P(r3)
            com.kwad.components.core.e.d.c r0 = r2.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r3 = r3.b(r0)
            com.kwad.components.core.e.d.a$a r3 = r3.ap(r6)
            r6 = 1
            com.kwad.components.core.e.d.a$a r3 = r3.am(r6)
            com.kwad.components.ad.f.e r6 = r2.my
            if (r6 == 0) goto L35
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r6 = r6.eF
            if (r6 == 0) goto L35
            com.kwad.components.ad.f.e r6 = r2.my
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r6 = r6.eF
            long r0 = r6.getPlayDuration()
            goto L37
        L35:
            r0 = 0
        L37:
            com.kwad.components.core.e.d.a$a r3 = r3.s(r0)
            com.kwad.components.core.e.d.a$a r3 = r3.at(r7)
            com.kwad.components.ad.f.d$4 r6 = new com.kwad.components.ad.f.d$4
            r6.<init>(r2, r5, r8, r4)
            com.kwad.components.core.e.d.a$a r3 = r3.a(r6)
            com.kwad.components.core.e.d.a.a(r3)
            return
    }

    private void a(android.app.Activity r11, android.view.ViewGroup r12, int r13, android.view.View r14, boolean r15) {
            r10 = this;
            com.kwad.sdk.utils.ac$a r8 = new com.kwad.sdk.utils.ac$a
            r8.<init>()
            if (r14 != 0) goto L8
            return
        L8:
            com.kwad.components.ad.f.d$2 r9 = new com.kwad.components.ad.f.d$2
            r0 = r9
            r1 = r10
            r2 = r8
            r3 = r12
            r4 = r14
            r5 = r11
            r6 = r13
            r7 = r15
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            r14.setOnTouchListener(r9)
            com.kwad.components.ad.f.d$3 r12 = new com.kwad.components.ad.f.d$3
            r0 = r12
            r2 = r11
            r3 = r8
            r4 = r13
            r5 = r15
            r0.<init>(r1, r2, r3, r4, r5)
            r14.setOnClickListener(r12)
            return
    }

    private void a(android.app.Activity r8, android.view.ViewGroup r9, java.util.List<android.view.View> r10) {
            r7 = this;
            java.util.Iterator r10 = r10.iterator()
        L4:
            boolean r0 = r10.hasNext()
            if (r0 == 0) goto L1a
            java.lang.Object r0 = r10.next()
            r5 = r0
            android.view.View r5 = (android.view.View) r5
            r4 = 0
            r6 = 0
            r1 = r7
            r2 = r8
            r3 = r9
            r1.a(r2, r3, r4, r5, r6)
            goto L4
        L1a:
            return
    }

    private void a(android.app.Activity r9, android.view.ViewGroup r10, java.util.Map<android.view.View, java.lang.Integer> r11) {
            r8 = this;
            java.util.Set r0 = r11.keySet()
            java.util.Iterator r0 = r0.iterator()
        L8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2d
            java.lang.Object r1 = r0.next()
            r6 = r1
            android.view.View r6 = (android.view.View) r6
            java.lang.Object r1 = r11.get(r6)
            if (r1 == 0) goto L8
            java.lang.Object r1 = r11.get(r6)
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r5 = r1.intValue()
            r7 = 1
            r2 = r8
            r3 = r9
            r4 = r10
            r2.a(r3, r4, r5, r6, r7)
            goto L8
        L2d:
            return
    }

    private void a(android.view.ViewGroup r5) {
            r4 = this;
            boolean r0 = r4.mv
            r1 = 1
            if (r0 != 0) goto L14
            r4.mv = r1
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r0 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT
            com.kwai.adclient.kscommerciallogger.model.BusinessType r2 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_NATIVE
            java.lang.String r3 = "callShow"
            com.kwad.sdk.core.report.KSLoggerReporter$b r0 = r0.buildMethodCheck(r2, r3)
            r0.report()
        L14:
            boolean r0 = com.kwad.sdk.core.config.d.zJ()
            if (r0 != 0) goto L3e
            float r0 = com.kwad.sdk.core.config.d.zI()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L3e
            c(r5)
            com.kwad.components.core.widget.a r0 = new com.kwad.components.core.widget.a
            android.content.Context r1 = r5.getContext()
            r0.<init>(r1, r5)
            r5.addView(r0)
            com.kwad.components.ad.f.d$5 r1 = new com.kwad.components.ad.f.d$5
            r1.<init>(r4, r5)
            r0.setViewCallback(r1)
            r0.sl()
            return
        L3e:
            com.kwad.components.core.widget.c r0 = b(r5)
            if (r0 != 0) goto L50
            com.kwad.components.core.widget.c r0 = new com.kwad.components.core.widget.c
            android.content.Context r2 = r5.getContext()
            r0.<init>(r2, r5)
            r5.addView(r0)
        L50:
            com.kwad.components.ad.f.d$6 r2 = new com.kwad.components.ad.f.d$6
            r2.<init>(r4, r5)
            r0.setViewCallback(r2)
            r0.setNeedCheckingShow(r1)
            return
    }

    static void a(com.kwad.components.ad.f.d r0, android.app.Activity r1, android.view.View r2, com.kwad.sdk.utils.ac.a r3, int r4, boolean r5, int r6) {
            r0.a(r1, r2, r3, r4, r5, r6)
            return
    }

    static void a(com.kwad.components.ad.f.d r0, android.view.View r1) {
            r0.j(r1)
            return
    }

    static boolean a(com.kwad.components.ad.f.d r0, com.kwad.sdk.utils.ac.a r1) {
            boolean r0 = r0.b(r1)
            return r0
    }

    static boolean a(com.kwad.components.ad.f.d r0, boolean r1) {
            r0.mA = r1
            return r1
    }

    private android.view.View b(android.content.Context r3, com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl r4) {
            r2 = this;
            java.lang.String r0 = r2.getVideoUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L13
            java.lang.String r3 = "KsNativeAdControl"
            java.lang.String r4 = "videoUrl is empty"
            com.kwad.sdk.core.e.c.w(r3, r4)
            r3 = 0
            return r3
        L13:
            com.kwad.components.ad.f.f r0 = r2.mx
            if (r0 != 0) goto L33
            com.kwad.components.ad.f.f r0 = new com.kwad.components.ad.f.f
            r0.<init>(r3)
            r2.mx = r0
            com.kwad.components.ad.f.d$a r3 = r2.mE
            r0.setInnerAdInteractionListener(r3)
            com.kwad.components.ad.f.f r3 = r2.mx
            com.kwad.sdk.api.KsNativeAd$VideoPlayListener r0 = r2.mD
            r3.setVideoPlayListener(r0)
            com.kwad.components.ad.f.f r3 = r2.mx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.components.core.e.d.c r1 = r2.mApkDownloadHelper
            r3.a(r0, r1, r4)
        L33:
            com.kwad.components.ad.f.f r3 = r2.mx
            return r3
    }

    private static com.kwad.components.core.widget.c b(android.view.ViewGroup r3) {
            r0 = 0
        L1:
            int r1 = r3.getChildCount()
            if (r0 >= r1) goto L15
            android.view.View r1 = r3.getChildAt(r0)
            boolean r2 = r1 instanceof com.kwad.components.core.widget.c
            if (r2 == 0) goto L12
            com.kwad.components.core.widget.c r1 = (com.kwad.components.core.widget.c) r1
            return r1
        L12:
            int r0 = r0 + 1
            goto L1
        L15:
            r3 = 0
            return r3
    }

    static com.kwad.sdk.core.response.model.AdTemplate b(com.kwad.components.ad.f.d r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    private boolean b(com.kwad.sdk.utils.ac.a r6) {
            r5 = this;
            int r0 = r6.IJ()
            int r1 = r6.IL()
            int r0 = r0 - r1
            int r0 = java.lang.Math.abs(r0)
            r1 = 20
            r2 = 1
            r3 = 0
            if (r0 <= r1) goto L15
            r0 = r2
            goto L16
        L15:
            r0 = r3
        L16:
            int r4 = r6.IK()
            int r6 = r6.IM()
            int r4 = r4 - r6
            int r6 = java.lang.Math.abs(r4)
            if (r6 <= r1) goto L27
            r6 = r2
            goto L28
        L27:
            r6 = r3
        L28:
            if (r0 != 0) goto L2c
            if (r6 == 0) goto L35
        L2c:
            com.kwad.sdk.core.response.model.AdTemplate r6 = r5.mAdTemplate
            boolean r6 = com.kwad.sdk.core.response.b.c.bV(r6)
            if (r6 == 0) goto L35
            return r2
        L35:
            return r3
    }

    private static void c(android.view.ViewGroup r3) {
            r0 = 0
        L1:
            int r1 = r3.getChildCount()
            if (r0 >= r1) goto L15
            android.view.View r1 = r3.getChildAt(r0)
            boolean r2 = r1 instanceof com.kwad.components.core.widget.a
            if (r2 == 0) goto L12
            r3.removeView(r1)
        L12:
            int r0 = r0 + 1
            goto L1
        L15:
            return
    }

    static boolean c(com.kwad.components.ad.f.d r0) {
            boolean r0 = r0.mA
            return r0
    }

    static com.kwad.components.core.internal.api.c d(com.kwad.components.ad.f.d r0) {
            com.kwad.components.core.internal.api.c r0 = r0.bP
            return r0
    }

    static com.kwad.components.ad.f.b.c e(com.kwad.components.ad.f.d r0) {
            com.kwad.components.ad.f.b$c r0 = r0.mr
            return r0
    }

    private com.kwad.components.core.internal.api.d eF() {
            r4 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r0 = com.kwad.sdk.core.response.b.a.aN(r0)
            java.lang.String r1 = r0.coverUrl
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L1a
            com.kwad.components.core.internal.api.d r1 = new com.kwad.components.core.internal.api.d
            int r2 = r0.width
            int r3 = r0.height
            java.lang.String r0 = r0.coverUrl
            r1.<init>(r2, r3, r0)
            return r1
        L1a:
            r0 = 0
            return r0
    }

    private void eG() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.internal.api.SceneImpl r0 = r0.mAdScene     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.internal.api.NativeAdExtraDataImpl r0 = r0.nativeAdExtraData     // Catch: java.lang.Throwable -> L14
            int r0 = r0.showLiveStatus     // Catch: java.lang.Throwable -> L14
            r1.mB = r0     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.internal.api.SceneImpl r0 = r0.mAdScene     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.internal.api.NativeAdExtraDataImpl r0 = r0.nativeAdExtraData     // Catch: java.lang.Throwable -> L14
            int r0 = r0.showLiveStyle     // Catch: java.lang.Throwable -> L14
            r1.mC = r0     // Catch: java.lang.Throwable -> L14
        L14:
            return
    }

    static void f(com.kwad.components.ad.f.d r0) {
            r0.eG()
            return
    }

    static com.kwad.sdk.core.response.model.AdInfo g(com.kwad.components.ad.f.d r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static int h(com.kwad.components.ad.f.d r0) {
            int r0 = r0.mC
            return r0
    }

    static int i(com.kwad.components.ad.f.d r0) {
            int r0 = r0.mB
            return r0
    }

    static com.kwad.components.core.e.d.c j(com.kwad.components.ad.f.d r0) {
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            return r0
    }

    private void j(android.view.View r4) {
            r3 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r3.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.aa(r0)
            if (r0 != 0) goto L9
            return
        L9:
            com.kwad.sdk.core.response.model.AdInfo r0 = r3.mAdInfo
            int r0 = com.kwad.sdk.core.response.b.a.ab(r0)
            float r0 = (float) r0
            com.kwad.components.ad.f.d$7 r1 = new com.kwad.components.ad.f.d$7
            r1.<init>(r3, r4)
            r3.mr = r1
            com.kwad.components.ad.f.b r1 = com.kwad.components.ad.f.b.eD()
            com.kwad.components.ad.f.b$c r2 = r3.mr
            r1.a(r0, r4, r2)
            return
    }

    static com.kwad.sdk.api.KsNativeAd.VideoPlayListener k(com.kwad.components.ad.f.d r0) {
            com.kwad.sdk.api.KsNativeAd$VideoPlayListener r0 = r0.mz
            return r0
    }

    static com.kwad.sdk.api.KsNativeAd.AdInteractionListener l(com.kwad.components.ad.f.d r0) {
            com.kwad.sdk.api.KsNativeAd$AdInteractionListener r0 = r0.mw
            return r0
    }

    @Override
    public final void a(com.kwad.components.core.internal.api.b r2) {
            r1 = this;
            com.kwad.components.core.internal.api.c r0 = r1.bP
            r0.a(r2)
            return
    }

    @Override
    public final boolean ae() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public final void b(com.kwad.components.core.internal.api.b r2) {
            r1 = this;
            com.kwad.components.core.internal.api.c r0 = r1.bP
            r0.b(r2)
            return
    }

    @Override
    public final java.lang.String getActionDescription() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.aw(r0)
            return r0
    }

    @Override
    public final java.lang.String getAdDescription() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.an(r0)
            return r0
    }

    @Override
    public final java.lang.String getAdSource() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.av(r0)
            return r0
    }

    @Override
    public final java.lang.String getAdSourceLogoUrl(int r3) {
            r2 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            if (r0 != 0) goto L6
            r3 = 0
            return r3
        L6:
            r1 = 1
            if (r3 == r1) goto Le
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r3 = r0.adBaseInfo
            java.lang.String r3 = r3.adMarkIcon
            return r3
        Le:
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r3 = r0.adBaseInfo
            java.lang.String r3 = r3.adGrayMarkIcon
            return r3
    }

    @Override
    public final com.kwad.sdk.core.response.model.AdTemplate getAdTemplate() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            return r0
    }

    @Override
    public final java.lang.String getAppDownloadCountDes() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.ar(r0)
            return r0
    }

    @Override
    public final java.lang.String getAppIconUrl() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.bQ(r0)
            return r0
    }

    @Override
    public final java.lang.String getAppName() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.ao(r0)
            return r0
    }

    @Override
    public final java.lang.String getAppPackageName() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.aq(r0)
            return r0
    }

    @Override
    public final long getAppPackageSize() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            long r0 = com.kwad.sdk.core.response.b.a.bu(r0)
            return r0
    }

    @Override
    public final java.lang.String getAppPrivacyUrl() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.bs(r0)
            return r0
    }

    @Override
    public final float getAppScore() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            float r0 = com.kwad.sdk.core.response.b.a.as(r0)
            return r0
    }

    @Override
    public final java.lang.String getAppVersion() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.bt(r0)
            return r0
    }

    @Override
    public final java.lang.String getCorporationName() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.bp(r0)
            return r0
    }

    @Override
    public final int getECPM() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            int r0 = com.kwad.sdk.core.response.b.a.aJ(r0)
            return r0
    }

    @Override
    public final java.util.List<com.kwad.sdk.api.KsImage> getImageList() {
            r7 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r7.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            com.kwad.sdk.core.response.model.AdInfo r2 = r7.mAdInfo
            int r2 = com.kwad.sdk.core.response.b.a.aW(r2)
            r3 = 2
            if (r2 == r3) goto L17
            r4 = 3
            if (r2 != r4) goto L46
        L17:
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo r1 = r1.adMaterialInfo
            java.util.List<com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature> r1 = r1.materialFeatureList
            java.util.Iterator r1 = r1.iterator()
        L1f:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L46
            java.lang.Object r2 = r1.next()
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r2 = (com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo.MaterialFeature) r2
            int r4 = r2.featureType
            if (r4 != r3) goto L1f
            java.lang.String r4 = r2.materialUrl
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L1f
            com.kwad.components.core.internal.api.d r4 = new com.kwad.components.core.internal.api.d
            int r5 = r2.width
            int r6 = r2.height
            java.lang.String r2 = r2.materialUrl
            r4.<init>(r5, r6, r2)
            r0.add(r4)
            goto L1f
        L46:
            return r0
    }

    @Override
    public final int getInteractionType() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            int r0 = com.kwad.sdk.core.response.b.a.aI(r0)
            return r0
    }

    @Override
    public final int getMaterialType() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            int r0 = com.kwad.sdk.core.response.b.a.aW(r0)
            return r0
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.Object> getMediaExtraInfo() {
            r3 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            boolean r1 = com.kwad.sdk.core.config.d.zt()
            if (r1 == 0) goto L18
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            long r1 = r1.llsid
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "llsid"
            r0.put(r2, r1)
        L18:
            return r0
    }

    @Override
    public final java.lang.String getPermissionInfo() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.bq(r0)
            return r0
    }

    @Override
    public final java.lang.String getPermissionInfoUrl() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.br(r0)
            return r0
    }

    @Override
    public final java.lang.String getProductName() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.ap(r0)
            return r0
    }

    @Override
    public final android.graphics.Bitmap getSdkLogo() {
            r2 = this;
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            android.content.Context r0 = r0.getContext()
            if (r0 != 0) goto Lc
            r0 = 0
            return r0
        Lc:
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.drawable.ksad_sdk_logo
            android.graphics.Bitmap r0 = android.graphics.BitmapFactory.decodeResource(r0, r1)
            return r0
    }

    public final com.kwad.sdk.utils.bi getTimerHelper() {
            r1 = this;
            com.kwad.sdk.utils.bi r0 = r1.mTimerHelper
            if (r0 != 0) goto Lb
            com.kwad.sdk.utils.bi r0 = new com.kwad.sdk.utils.bi
            r0.<init>()
            r1.mTimerHelper = r0
        Lb:
            com.kwad.sdk.utils.bi r0 = r1.mTimerHelper
            return r0
    }

    @Override
    public final com.kwad.sdk.api.KsImage getVideoCoverImage() {
            r1 = this;
            com.kwad.components.core.internal.api.d r0 = r1.eF()
            return r0
    }

    @Override
    public final int getVideoDuration() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            int r0 = com.kwad.sdk.core.response.b.a.G(r0)
            return r0
    }

    @Override
    public final int getVideoHeight() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.cw(r0)
            if (r0 == 0) goto Lb
            r0 = 1280(0x500, float:1.794E-42)
            return r0
        Lb:
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r0 = com.kwad.sdk.core.response.b.a.aN(r0)
            int r0 = r0.videoHeight
            return r0
    }

    @Override
    public final java.lang.String getVideoUrl() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.F(r0)
            return r0
    }

    @Override
    public final android.view.View getVideoView2(android.content.Context r5, com.kwad.sdk.api.KsAdVideoPlayConfig r6) {
            r4 = this;
            java.lang.String r0 = "show"
            java.lang.String r1 = "native"
            r2 = 0
            if (r5 == 0) goto L84
            com.kwad.sdk.KsAdSDKImpl r3 = com.kwad.sdk.KsAdSDKImpl.get()
            boolean r3 = r3.hasInitFinish()
            if (r3 != 0) goto L13
            goto L84
        L13:
            android.content.Context r5 = com.kwad.sdk.m.l.wrapContextIfNeed(r5)     // Catch: java.lang.Throwable -> L3c
            com.kwad.sdk.i.a.ah(r1, r0)     // Catch: java.lang.Throwable -> L3c
            boolean r3 = r6 instanceof com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl     // Catch: java.lang.Throwable -> L3c
            if (r3 == 0) goto L21
            com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl r6 = (com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl) r6     // Catch: java.lang.Throwable -> L3c
            goto L26
        L21:
            com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl r6 = new com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl     // Catch: java.lang.Throwable -> L3c
            r6.<init>()     // Catch: java.lang.Throwable -> L3c
        L26:
            com.kwad.sdk.core.response.model.AdInfo r3 = r4.mAdInfo     // Catch: java.lang.Throwable -> L3c
            boolean r3 = com.kwad.sdk.core.response.b.a.cw(r3)     // Catch: java.lang.Throwable -> L3c
            if (r3 == 0) goto L33
            android.view.View r6 = r4.a(r5, r6)     // Catch: java.lang.Throwable -> L3c
            goto L37
        L33:
            android.view.View r6 = r4.b(r5, r6)     // Catch: java.lang.Throwable -> L3c
        L37:
            r2 = r6
            com.kwad.sdk.i.a.ai(r1, r0)     // Catch: java.lang.Throwable -> L3c
            goto L82
        L3c:
            r6 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r3 = "getVideoView fail--context:"
            r1.<init>(r3)
            java.lang.Class r3 = r5.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = "--classloader:"
            r1.append(r3)
            java.lang.ClassLoader r5 = r5.getClassLoader()
            java.lang.Class r5 = r5.getClass()
            java.lang.String r5 = r5.getName()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            com.kwad.sdk.KsAdSDKImpl r5 = com.kwad.sdk.KsAdSDKImpl.get()
            boolean r5 = r5.getIsExternal()
            if (r5 == 0) goto L83
            int r5 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r5 < r1) goto L7f
            r0.addSuppressed(r6)
        L7f:
            com.kwad.components.core.d.a.b(r0)
        L82:
            return r2
        L83:
            throw r6
        L84:
            return r2
    }

    @Override
    public final android.view.View getVideoView2(android.content.Context r2, boolean r3) {
            r1 = this;
            if (r2 == 0) goto L1f
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            boolean r0 = r0.hasInitFinish()
            if (r0 != 0) goto Ld
            goto L1f
        Ld:
            com.kwad.sdk.api.KsAdVideoPlayConfig$Builder r0 = new com.kwad.sdk.api.KsAdVideoPlayConfig$Builder
            r0.<init>()
            com.kwad.sdk.api.KsAdVideoPlayConfig$Builder r3 = r0.videoSoundEnable(r3)
            com.kwad.sdk.api.KsAdVideoPlayConfig r3 = r3.build()
            android.view.View r2 = r1.getVideoView2(r2, r3)
            return r2
        L1f:
            r2 = 0
            return r2
    }

    @Override
    public final int getVideoWidth() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.cw(r0)
            if (r0 == 0) goto Lb
            r0 = 720(0x2d0, float:1.009E-42)
            return r0
        Lb:
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r0 = com.kwad.sdk.core.response.b.a.aN(r0)
            int r0 = r0.videoWidth
            return r0
    }

    @Override
    public final void onDismiss(android.content.DialogInterface r1) {
            r0 = this;
            com.kwad.components.ad.f.d$a r1 = r0.mE
            r1.onDownloadTipsDialogDismiss()
            return
    }

    @Override
    public final void onShow(android.content.DialogInterface r1) {
            r0 = this;
            com.kwad.components.ad.f.d$a r1 = r0.mE
            if (r1 == 0) goto L7
            r1.onDownloadTipsDialogShow()
        L7:
            return
    }

    @Override
    public final void registerViewForInteraction(android.app.Activity r1, android.view.ViewGroup r2, java.util.List<android.view.View> r3, com.kwad.sdk.api.KsNativeAd.AdInteractionListener r4) {
            r0 = this;
            r0.mw = r4
            r0.a(r2)
            r0.a(r1, r2, r3)
            return
    }

    @Override
    public final void registerViewForInteraction(android.app.Activity r1, android.view.ViewGroup r2, java.util.Map<android.view.View, java.lang.Integer> r3, com.kwad.sdk.api.KsNativeAd.AdInteractionListener r4) {
            r0 = this;
            r0.mw = r4
            r0.a(r2)
            r0.a(r1, r2, r3)
            return
    }

    @Override
    public final void registerViewForInteraction(android.view.ViewGroup r2, java.util.List<android.view.View> r3, com.kwad.sdk.api.KsNativeAd.AdInteractionListener r4) {
            r1 = this;
            r0 = 0
            r1.registerViewForInteraction(r0, r2, r3, r4)
            return
    }

    @Override
    public final void reportAdExposureFailed(int r2, com.kwad.sdk.api.model.AdExposureFailedReason r3) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.core.report.a.a(r0, r2, r3)
            return
    }

    @Override
    public final void reportAdVideoPlayEnd() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.getAdTemplate()
            com.kwad.sdk.core.report.a.aA(r0)
            return
    }

    @Override
    public final void reportAdVideoPlayStart() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.getAdTemplate()
            com.kwad.sdk.core.report.a.j(r0)
            return
    }

    @Override
    public final void setBidEcpm(int r5) {
            r4 = this;
            long r0 = (long) r5
            r2 = -1
            r4.setBidEcpm(r0, r2)
            return
    }

    @Override
    public final void setBidEcpm(long r2, long r4) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            r0.mBidEcpm = r2
            com.kwad.sdk.core.response.model.AdTemplate r2 = r1.mAdTemplate
            com.kwad.sdk.core.report.a.i(r2, r4)
            return
    }

    @Override
    public final void setDownloadListener(com.kwad.sdk.api.KsAppDownloadListener r2) {
            r1 = this;
            com.kwad.components.core.e.d.c r0 = r1.mApkDownloadHelper
            if (r0 == 0) goto L9
            if (r2 == 0) goto L9
            r0.b(r2)
        L9:
            return
    }

    @Override
    public final void setVideoPlayListener(com.kwad.sdk.api.KsNativeAd.VideoPlayListener r1) {
            r0 = this;
            r0.mz = r1
            return
    }
}
