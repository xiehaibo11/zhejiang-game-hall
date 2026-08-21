package com.kwad.components.ad.reward;

@com.kwad.sdk.api.core.KsAdSdkDynamicImpl(com.kwad.sdk.api.proxy.app.KsRewardVideoActivity.class)
public class KSRewardVideoActivityProxy extends com.kwad.components.core.l.b<com.kwad.components.ad.reward.j> implements com.kwad.components.ad.reward.j.b, com.kwad.components.ad.reward.o.a, com.kwad.components.core.t.c.b, com.kwad.components.offline.api.core.adlive.listener.OnAdLiveResumeInterceptor {
    public static final java.lang.String KEY_REWARD_TYPE = "key_template_reward_type";
    public static final java.lang.String KEY_TEMPLATE = "key_template_json";
    public static final java.lang.String KEY_VIDEO_PLAY_CONFIG = "key_video_play_config";
    private static final java.lang.String TAG = "RewardVideo";
    private java.lang.String listenerKey;
    private com.kwad.components.ad.reward.e.b mAdOpenInteractionListener;
    private com.kwad.components.ad.reward.e.d mAdRewardStepListener;
    private com.kwad.components.core.video.DetailVideoView mDetailVideoView;
    private boolean mIsBackEnable;
    private boolean mIsFinishVideoLookStep;
    private com.kwad.components.ad.reward.model.c mModel;
    private boolean mPageDismissCalled;
    private long mPageEnterTime;
    private com.kwad.components.ad.reward.e.f mPlayEndPageListener;
    private android.widget.FrameLayout mPlayLayout;
    private long mPlayTime;
    private com.kwad.components.ad.reward.o mRewardPresenter;
    private final com.kwad.components.ad.reward.e.j mRewardVerifyListener;
    private com.kwad.sdk.core.view.AdBaseFrameLayout mRootContainer;
    private com.kwad.sdk.utils.bi mTimerHelper;
    private com.kwad.components.core.video.l mVideoPlayStateListener;









    public static class a {
        private static final java.util.HashMap<java.lang.String, com.kwad.components.ad.reward.KSRewardVideoActivityProxy.a> oF = null;
        private com.kwad.sdk.api.KsRewardVideoAd.RewardAdInteractionListener mInteractionListener;
        private com.kwad.sdk.api.KsRewardVideoAd.RewardAdInteractionListener oG;
        private com.kwad.components.core.i.d oH;

        static {
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                com.kwad.components.ad.reward.KSRewardVideoActivityProxy.a.oF = r0
                return
        }

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public static com.kwad.sdk.api.KsRewardVideoAd.RewardAdInteractionListener A(java.lang.String r0) {
                com.kwad.components.ad.reward.KSRewardVideoActivityProxy$a r0 = z(r0)
                if (r0 == 0) goto L9
                com.kwad.sdk.api.KsRewardVideoAd$RewardAdInteractionListener r0 = r0.oG
                return r0
            L9:
                r0 = 0
                return r0
        }

        private static void B(java.lang.String r1) {
                com.kwad.components.ad.reward.KSRewardVideoActivityProxy$a r1 = z(r1)
                if (r1 == 0) goto La
                com.kwad.sdk.api.KsRewardVideoAd$RewardAdInteractionListener r0 = r1.mInteractionListener
                r1.oG = r0
            La:
                return
        }

        public static com.kwad.components.core.i.d C(java.lang.String r0) {
                com.kwad.components.ad.reward.KSRewardVideoActivityProxy$a r0 = z(r0)
                if (r0 == 0) goto L9
                com.kwad.components.core.i.d r0 = r0.oH
                return r0
            L9:
                r0 = 0
                return r0
        }

        private static void D(java.lang.String r2) {
                com.kwad.components.ad.reward.KSRewardVideoActivityProxy$a r0 = z(r2)
                if (r0 == 0) goto Lf
                r0.destroy()
                java.util.HashMap<java.lang.String, com.kwad.components.ad.reward.KSRewardVideoActivityProxy$a> r0 = com.kwad.components.ad.reward.KSRewardVideoActivityProxy.a.oF
                r1 = 0
                r0.put(r2, r1)
            Lf:
                return
        }

        static void E(java.lang.String r0) {
                B(r0)
                return
        }

        static void F(java.lang.String r0) {
                D(r0)
                return
        }

        public static void a(java.lang.String r1, com.kwad.sdk.api.KsRewardVideoAd.RewardAdInteractionListener r2, com.kwad.components.core.i.d r3) {
                com.kwad.components.ad.reward.KSRewardVideoActivityProxy$a r0 = new com.kwad.components.ad.reward.KSRewardVideoActivityProxy$a
                r0.<init>()
                r0.mInteractionListener = r2
                r0.oH = r3
                r0.oG = r2
                java.util.HashMap<java.lang.String, com.kwad.components.ad.reward.KSRewardVideoActivityProxy$a> r2 = com.kwad.components.ad.reward.KSRewardVideoActivityProxy.a.oF
                r2.put(r1, r0)
                return
        }

        private void destroy() {
                r2 = this;
                r0 = 0
                r2.mInteractionListener = r0
                r2.oG = r0
                com.kwad.components.core.i.d r1 = r2.oH
                if (r1 == 0) goto Le
                r1.destroy()
                r2.oH = r0
            Le:
                return
        }

        private static com.kwad.components.ad.reward.KSRewardVideoActivityProxy.a z(java.lang.String r1) {
                java.util.HashMap<java.lang.String, com.kwad.components.ad.reward.KSRewardVideoActivityProxy$a> r0 = com.kwad.components.ad.reward.KSRewardVideoActivityProxy.a.oF
                java.lang.Object r1 = r0.get(r1)
                com.kwad.components.ad.reward.KSRewardVideoActivityProxy$a r1 = (com.kwad.components.ad.reward.KSRewardVideoActivityProxy.a) r1
                return r1
        }
    }

    public KSRewardVideoActivityProxy() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mIsFinishVideoLookStep = r0
            com.kwad.components.ad.reward.KSRewardVideoActivityProxy$1 r0 = new com.kwad.components.ad.reward.KSRewardVideoActivityProxy$1
            r0.<init>(r1)
            r1.mRewardVerifyListener = r0
            com.kwad.components.ad.reward.KSRewardVideoActivityProxy$2 r0 = new com.kwad.components.ad.reward.KSRewardVideoActivityProxy$2
            r0.<init>(r1)
            r1.mAdOpenInteractionListener = r0
            com.kwad.components.ad.reward.KSRewardVideoActivityProxy$3 r0 = new com.kwad.components.ad.reward.KSRewardVideoActivityProxy$3
            r0.<init>(r1)
            r1.mPlayEndPageListener = r0
            com.kwad.components.ad.reward.KSRewardVideoActivityProxy$4 r0 = new com.kwad.components.ad.reward.KSRewardVideoActivityProxy$4
            r0.<init>(r1)
            r1.mAdRewardStepListener = r0
            com.kwad.components.ad.reward.KSRewardVideoActivityProxy$5 r0 = new com.kwad.components.ad.reward.KSRewardVideoActivityProxy$5
            r0.<init>(r1)
            r1.mVideoPlayStateListener = r0
            return
    }

    static com.kwad.components.ad.reward.model.c access$100(com.kwad.components.ad.reward.KSRewardVideoActivityProxy r0) {
            com.kwad.components.ad.reward.model.c r0 = r0.mModel
            return r0
    }

    static com.kwad.components.core.l.a access$1000(com.kwad.components.ad.reward.KSRewardVideoActivityProxy r0) {
            T extends com.kwad.components.core.l.a r0 = r0.mCallerContext
            return r0
    }

    static com.kwad.components.core.l.a access$1100(com.kwad.components.ad.reward.KSRewardVideoActivityProxy r0) {
            T extends com.kwad.components.core.l.a r0 = r0.mCallerContext
            return r0
    }

    static void access$1200(com.kwad.components.ad.reward.KSRewardVideoActivityProxy r0, boolean r1) {
            r0.notifyPageDismiss(r1)
            return
    }

    static boolean access$1302(com.kwad.components.ad.reward.KSRewardVideoActivityProxy r0, boolean r1) {
            r0.mIsBackEnable = r1
            return r1
    }

    static long access$1402(com.kwad.components.ad.reward.KSRewardVideoActivityProxy r0, long r1) {
            r0.mPlayTime = r1
            return r1
    }

    static com.kwad.components.core.l.a access$200(com.kwad.components.ad.reward.KSRewardVideoActivityProxy r0) {
            T extends com.kwad.components.core.l.a r0 = r0.mCallerContext
            return r0
    }

    static com.kwad.components.core.l.a access$300(com.kwad.components.ad.reward.KSRewardVideoActivityProxy r0) {
            T extends com.kwad.components.core.l.a r0 = r0.mCallerContext
            return r0
    }

    static void access$400(com.kwad.components.ad.reward.KSRewardVideoActivityProxy r0) {
            r0.markOpenNsCompleted()
            return
    }

    static void access$500(com.kwad.components.ad.reward.KSRewardVideoActivityProxy r0) {
            r0.notifyRewardVerify()
            return
    }

    static void access$600(com.kwad.components.ad.reward.KSRewardVideoActivityProxy r0) {
            r0.notifyRewardVerifyStepByStep()
            return
    }

    static java.lang.String access$700(com.kwad.components.ad.reward.KSRewardVideoActivityProxy r0) {
            java.lang.String r0 = r0.getUniqueId()
            return r0
    }

    static com.kwad.components.core.l.a access$800(com.kwad.components.ad.reward.KSRewardVideoActivityProxy r0) {
            T extends com.kwad.components.core.l.a r0 = r0.mCallerContext
            return r0
    }

    static com.kwad.components.core.l.a access$900(com.kwad.components.ad.reward.KSRewardVideoActivityProxy r0) {
            T extends com.kwad.components.core.l.a r0 = r0.mCallerContext
            return r0
    }

    private void createPlayModuleProxy(com.kwad.components.ad.reward.j r4) {
            r3 = this;
            com.kwad.components.ad.reward.model.c r0 = r3.mModel
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.bB()
            boolean r0 = com.kwad.sdk.core.response.b.a.aV(r0)
            if (r0 == 0) goto L1e
            com.kwad.components.ad.reward.l.a r0 = new com.kwad.components.ad.reward.l.a
            com.kwad.components.ad.reward.model.c r1 = r3.mModel
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.getAdTemplate()
            r0.<init>(r1)
            com.kwad.components.ad.reward.l.d r1 = new com.kwad.components.ad.reward.l.d
            r2 = 3
            r1.<init>(r2, r0)
            goto L2b
        L1e:
            com.kwad.components.ad.reward.l.c r0 = new com.kwad.components.ad.reward.l.c
            com.kwad.components.core.video.DetailVideoView r1 = r3.mDetailVideoView
            r0.<init>(r4, r1)
            com.kwad.components.ad.reward.l.d r1 = new com.kwad.components.ad.reward.l.d
            r2 = 1
            r1.<init>(r2, r0)
        L2b:
            r4.a(r0)
            com.kwad.components.core.video.l r0 = r3.mVideoPlayStateListener
            r1.a(r0)
            r4.oV = r1
            return
    }

    private com.kwad.sdk.utils.bi getTimerHelper() {
            r1 = this;
            com.kwad.sdk.utils.bi r0 = r1.mTimerHelper
            if (r0 != 0) goto Le
            com.kwad.sdk.utils.bi r0 = new com.kwad.sdk.utils.bi
            r0.<init>()
            r1.mTimerHelper = r0
            r0.startTiming()
        Le:
            com.kwad.sdk.utils.bi r0 = r1.mTimerHelper
            return r0
    }

    private java.lang.String getUniqueId() {
            r1 = this;
            java.lang.String r0 = r1.listenerKey
            return r0
    }

    private void handleNotifyVerify(boolean r4) {
            r3 = this;
            T extends com.kwad.components.core.l.a r0 = r3.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            r1 = 1
            r0.G(r1)
            com.kwad.components.ad.reward.model.c r0 = r3.mModel
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()
            r0.mRewardVerifyCalled = r1
            if (r4 != 0) goto L1a
            T extends com.kwad.components.core.l.a r4 = r3.mCallerContext
            com.kwad.components.ad.reward.j r4 = (com.kwad.components.ad.reward.j) r4
            int r4 = r4.pr
            if (r4 != 0) goto L27
        L1a:
            com.kwad.components.ad.reward.h r4 = com.kwad.components.ad.reward.h.fG()
            com.kwad.components.ad.reward.model.c r0 = r3.mModel
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()
            r4.p(r0)
        L27:
            com.kwad.components.ad.reward.model.c r4 = r3.mModel
            com.kwad.sdk.core.response.model.AdTemplate r4 = r4.getAdTemplate()
            com.kwad.sdk.core.report.a.aG(r4)
            T extends com.kwad.components.core.l.a r4 = r3.mCallerContext
            com.kwad.components.ad.reward.j r4 = (com.kwad.components.ad.reward.j) r4
            com.kwad.sdk.core.response.model.AdTemplate r4 = r4.mAdTemplate
            boolean r4 = r4.converted
            if (r4 != 0) goto L47
            com.kwad.components.ad.reward.c.a r4 = com.kwad.components.ad.reward.c.a.gW()
            com.kwad.components.ad.reward.c.b r4 = r4.gX()
            int r0 = com.kwad.components.ad.reward.c.b.ru
            r4.L(r0)
        L47:
            java.lang.String r4 = r3.getUniqueId()
            com.kwad.sdk.api.KsRewardVideoAd$RewardAdInteractionListener r4 = com.kwad.components.ad.reward.KSRewardVideoActivityProxy.a.A(r4)
            if (r4 == 0) goto L64
            com.kwad.components.ad.reward.KSRewardVideoActivityProxy$8 r0 = new com.kwad.components.ad.reward.KSRewardVideoActivityProxy$8
            r0.<init>(r3, r4)
            com.kwad.sdk.utils.bj.runOnUiThread(r0)
            com.kwad.components.ad.reward.model.c r4 = r3.mModel
            com.kwad.sdk.core.response.model.AdTemplate r4 = r4.getAdTemplate()
            r0 = 0
            r2 = -1
            com.kwad.components.ad.reward.monitor.a.a(r4, r0, r2, r1)
        L64:
            com.kwad.components.ad.reward.model.c r4 = r3.mModel
            com.kwad.sdk.core.response.model.AdInfo r4 = r4.bB()
            boolean r4 = com.kwad.sdk.core.response.b.a.cB(r4)
            if (r4 == 0) goto L97
            T extends com.kwad.components.core.l.a r4 = r3.mCallerContext
            com.kwad.components.ad.reward.j r4 = (com.kwad.components.ad.reward.j) r4
            com.kwad.sdk.core.response.model.AdTemplate r4 = r4.mAdTemplate
            boolean r4 = r4.converted
            if (r4 != 0) goto L97
            T extends com.kwad.components.core.l.a r4 = r3.mCallerContext
            com.kwad.components.ad.reward.j r4 = (com.kwad.components.ad.reward.j) r4
            boolean r4 = r4.pk
            if (r4 != 0) goto L97
            T extends com.kwad.components.core.l.a r4 = r3.mCallerContext
            com.kwad.components.ad.reward.j r4 = (com.kwad.components.ad.reward.j) r4
            boolean r4 = r4.ga()
            if (r4 != 0) goto L97
            android.app.Activity r4 = r3.getActivity()
            T extends com.kwad.components.core.l.a r0 = r3.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            com.kwad.components.ad.reward.j.a(r4, r0)
        L97:
            return
    }

    private boolean isLaunchTaskCompleted() {
            r1 = this;
            T extends com.kwad.components.core.l.a r0 = r1.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            com.kwad.components.ad.reward.k.b.a r0 = r0.pA
            if (r0 == 0) goto L16
            T extends com.kwad.components.core.l.a r0 = r1.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            com.kwad.components.ad.reward.k.b.a r0 = r0.pA
            boolean r0 = r0.isCompleted()
            if (r0 == 0) goto L16
            r0 = 1
            return r0
        L16:
            r0 = 0
            return r0
    }

    public static void launch(android.app.Activity r3, com.kwad.sdk.core.response.model.AdTemplate r4, com.kwad.sdk.api.KsVideoPlayConfig r5, com.kwad.sdk.api.KsRewardVideoAd.RewardAdInteractionListener r6, com.kwad.components.core.i.d r7, int r8) {
            com.kwad.sdk.utils.l.cA(r4)
            boolean r0 = r5.isShowLandscape()
            if (r0 == 0) goto L16
            java.lang.Class<com.kwad.sdk.api.proxy.app.KSRewardLandScapeVideoActivity> r0 = com.kwad.sdk.api.proxy.app.KSRewardLandScapeVideoActivity.class
            java.lang.Class<com.kwad.components.ad.reward.KSRewardLandScapeVideoActivityProxy> r1 = com.kwad.components.ad.reward.KSRewardLandScapeVideoActivityProxy.class
            com.kwad.sdk.service.b.a(r0, r1)
            android.content.Intent r1 = new android.content.Intent
            r1.<init>(r3, r0)
            goto L22
        L16:
            java.lang.Class<com.kwad.sdk.api.proxy.app.KsRewardVideoActivity> r0 = com.kwad.sdk.api.proxy.app.KsRewardVideoActivity.class
            java.lang.Class<com.kwad.components.ad.reward.KSRewardVideoActivityProxy> r1 = com.kwad.components.ad.reward.KSRewardVideoActivityProxy.class
            com.kwad.sdk.service.b.a(r0, r1)
            android.content.Intent r1 = new android.content.Intent
            r1.<init>(r3, r0)
        L22:
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r1.setFlags(r0)
            org.json.JSONObject r0 = r4.toJson()
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "key_template_json"
            r1.putExtra(r2, r0)
            java.lang.String r0 = "key_video_play_config"
            r1.putExtra(r0, r5)
            java.lang.String r5 = "key_template_reward_type"
            r1.putExtra(r5, r8)
            java.lang.String r4 = r4.getUniqueId()
            com.kwad.components.ad.reward.KSRewardVideoActivityProxy.a.a(r4, r6, r7)
            com.kwad.components.ad.reward.KSRewardVideoActivityProxy.a.E(r4)
            r3.startActivity(r1)
            com.kwad.sdk.a.a.c r3 = com.kwad.sdk.a.a.c.yb()
            r4 = 1
            r3.bc(r4)
            return
    }

    private void markOpenNsCompleted() {
            r1 = this;
            T extends com.kwad.components.core.l.a r0 = r1.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            com.kwad.components.ad.reward.k.a.a r0 = r0.pB
            if (r0 == 0) goto L11
            T extends com.kwad.components.core.l.a r0 = r1.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            com.kwad.components.ad.reward.k.a.a r0 = r0.pB
            r0.markOpenNsCompleted()
        L11:
            return
    }

    private boolean needHandledOnResume() {
            r1 = this;
            T extends com.kwad.components.core.l.a r0 = r1.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            boolean r0 = r0.gb()
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    private void notifyPageDismiss(boolean r5) {
            r4 = this;
            boolean r0 = r4.mPageDismissCalled
            if (r0 == 0) goto L5
            return
        L5:
            T extends com.kwad.components.core.l.a r0 = r4.mCallerContext
            if (r0 != 0) goto La
            return
        La:
            com.kwad.components.ad.reward.model.c r0 = r4.mModel
            if (r0 != 0) goto Lf
            return
        Lf:
            r1 = 1
            r4.mPageDismissCalled = r1
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()
            long r2 = r4.mPlayTime
            float r2 = (float) r2
            r3 = 1148846080(0x447a0000, float:1000.0)
            float r2 = r2 / r3
            double r2 = (double) r2
            double r2 = java.lang.Math.ceil(r2)
            int r2 = (int) r2
            com.kwad.sdk.core.report.a.n(r0, r2)
            if (r5 == 0) goto L3f
            com.kwad.components.ad.reward.model.c r5 = r4.mModel
            com.kwad.sdk.core.response.model.AdTemplate r5 = r5.getAdTemplate()
            com.kwad.sdk.utils.bi r0 = r4.getTimerHelper()
            long r2 = r0.getTime()
            T extends com.kwad.components.core.l.a r0 = r4.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            org.json.JSONObject r0 = r0.mReportExtData
            com.kwad.sdk.core.report.a.a(r5, r1, r2, r0)
            goto L57
        L3f:
            com.kwad.components.ad.reward.model.c r5 = r4.mModel
            com.kwad.sdk.core.response.model.AdTemplate r5 = r5.getAdTemplate()
            r0 = 6
            com.kwad.sdk.utils.bi r1 = r4.getTimerHelper()
            long r1 = r1.getTime()
            com.kwad.components.ad.reward.model.c r3 = r4.mModel
            org.json.JSONObject r3 = r3.hv()
            com.kwad.sdk.core.report.a.a(r5, r0, r1, r3)
        L57:
            java.lang.String r5 = r4.getUniqueId()
            com.kwad.sdk.api.KsRewardVideoAd$RewardAdInteractionListener r5 = com.kwad.components.ad.reward.KSRewardVideoActivityProxy.a.A(r5)
            if (r5 == 0) goto L64
            r5.onPageDismiss()
        L64:
            return
    }

    private void notifyRewardStep(int r3, int r4) {
            r2 = this;
            com.kwad.components.ad.reward.model.c r0 = r2.mModel
            if (r0 != 0) goto L5
            return
        L5:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()
            boolean r0 = com.kwad.sdk.core.response.b.d.cr(r0)
            if (r0 == 0) goto L10
            return
        L10:
            T extends com.kwad.components.core.l.a r0 = r2.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            java.util.List<java.lang.Integer> r0 = r0.pq
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L21
            return
        L21:
            T extends com.kwad.components.core.l.a r0 = r2.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            java.util.List<java.lang.Integer> r0 = r0.pq
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            r0.add(r1)
            T extends com.kwad.components.core.l.a r0 = r2.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            com.kwad.components.ad.reward.model.c r1 = r2.mModel
            com.kwad.components.ad.reward.p.a(r3, r4, r0, r1)
            java.lang.String r0 = r2.getUniqueId()
            com.kwad.sdk.api.KsRewardVideoAd$RewardAdInteractionListener r0 = com.kwad.components.ad.reward.KSRewardVideoActivityProxy.a.A(r0)
            if (r0 != 0) goto L42
            return
        L42:
            com.kwad.components.ad.reward.KSRewardVideoActivityProxy$7 r0 = new com.kwad.components.ad.reward.KSRewardVideoActivityProxy$7     // Catch: java.lang.Throwable -> L55
            r0.<init>(r2, r3, r4)     // Catch: java.lang.Throwable -> L55
            com.kwad.sdk.utils.bj.runOnUiThread(r0)     // Catch: java.lang.Throwable -> L55
            com.kwad.components.ad.reward.model.c r0 = r2.mModel     // Catch: java.lang.Throwable -> L55
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()     // Catch: java.lang.Throwable -> L55
            r1 = 0
            com.kwad.components.ad.reward.monitor.a.a(r0, r3, r4, r1)     // Catch: java.lang.Throwable -> L55
            return
        L55:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
            return
    }

    private void notifyRewardVerify() {
            r3 = this;
            com.kwad.components.ad.reward.model.c r0 = r3.mModel
            if (r0 != 0) goto L5
            return
        L5:
            T extends com.kwad.components.core.l.a r0 = r3.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            boolean r0 = r0.mCheckExposureResult
            if (r0 != 0) goto Le
            return
        Le:
            com.kwad.components.ad.reward.model.c r0 = r3.mModel
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()
            boolean r0 = com.kwad.sdk.core.response.b.d.cr(r0)
            if (r0 == 0) goto L1b
            return
        L1b:
            T extends com.kwad.components.core.l.a r0 = r3.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            boolean r0 = r0.gc()
            if (r0 == 0) goto L26
            return
        L26:
            com.kwad.components.ad.reward.model.c r0 = r3.mModel
            boolean r0 = r0.hr()
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L4b
            T extends com.kwad.components.core.l.a r0 = r3.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            com.kwad.components.ad.reward.k.b.a r0 = r0.pA
            if (r0 == 0) goto L45
            T extends com.kwad.components.core.l.a r0 = r3.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            com.kwad.components.ad.reward.k.b.a r0 = r0.pA
            boolean r0 = r0.isCompleted()
            if (r0 == 0) goto L45
            r1 = r2
        L45:
            if (r1 == 0) goto L4a
            r3.handleNotifyVerify(r2)
        L4a:
            return
        L4b:
            com.kwad.components.ad.reward.model.c r0 = r3.mModel
            boolean r0 = r0.hs()
            if (r0 == 0) goto L6e
            T extends com.kwad.components.core.l.a r0 = r3.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            com.kwad.components.ad.reward.k.a.a r0 = r0.pB
            if (r0 == 0) goto L68
            T extends com.kwad.components.core.l.a r0 = r3.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            com.kwad.components.ad.reward.k.a.a r0 = r0.pB
            boolean r0 = r0.isCompleted()
            if (r0 == 0) goto L68
            r1 = r2
        L68:
            if (r1 == 0) goto L6d
            r3.handleNotifyVerify(r2)
        L6d:
            return
        L6e:
            r3.handleNotifyVerify(r1)
            return
    }

    private void notifyRewardVerifyStepByStep() {
            r3 = this;
            com.kwad.components.ad.reward.model.c r0 = r3.mModel
            boolean r0 = r0.hr()
            r1 = 0
            if (r0 == 0) goto L17
            r0 = 2
            r3.notifyRewardStep(r0, r1)
            boolean r1 = r3.isLaunchTaskCompleted()
            if (r1 == 0) goto L49
            r3.notifyRewardStep(r0, r0)
            return
        L17:
            com.kwad.components.ad.reward.model.c r0 = r3.mModel
            boolean r0 = r0.hs()
            r2 = 1
            if (r0 == 0) goto L40
            T extends com.kwad.components.core.l.a r0 = r3.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            com.kwad.components.ad.reward.k.a.a r0 = r0.pB
            if (r0 == 0) goto L36
            T extends com.kwad.components.core.l.a r0 = r3.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            com.kwad.components.ad.reward.k.a.a r0 = r0.pB
            boolean r0 = r0.isCompleted()
            if (r0 == 0) goto L36
            r0 = r2
            goto L37
        L36:
            r0 = r1
        L37:
            r3.notifyRewardStep(r2, r1)
            if (r0 == 0) goto L3f
            r3.notifyRewardStep(r2, r2)
        L3f:
            return
        L40:
            boolean r0 = r3.mIsFinishVideoLookStep
            if (r0 != 0) goto L49
            r3.mIsFinishVideoLookStep = r2
            r3.notifyRewardStep(r1, r1)
        L49:
            return
    }

    public static void register() {
            java.lang.Class<com.kwad.sdk.api.proxy.app.KsRewardVideoActivity> r0 = com.kwad.sdk.api.proxy.app.KsRewardVideoActivity.class
            java.lang.Class<com.kwad.components.ad.reward.KSRewardVideoActivityProxy> r1 = com.kwad.components.ad.reward.KSRewardVideoActivityProxy.class
            com.kwad.sdk.service.b.a(r0, r1)
            return
    }

    @Override
    public boolean checkIntentData(android.content.Intent r2) {
            r1 = this;
            com.kwad.components.ad.reward.model.c r2 = com.kwad.components.ad.reward.model.c.a(r2)
            r1.mModel = r2
            if (r2 != 0) goto L11
            java.lang.String r2 = "reward"
            java.lang.String r0 = "show"
            com.kwad.sdk.i.a.ai(r2, r0)
            r2 = 0
            return r2
        L11:
            r2 = 1
            return r2
    }

    @Override
    public void finish() {
            r1 = this;
            super.finish()
            r0 = 0
            r1.notifyPageDismiss(r0)
            return
    }

    @Override
    public int getLayoutId() {
            r1 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_activity_reward_video
            return r0
    }

    @Override
    public java.lang.String getPageName() {
            r1 = this;
            java.lang.String r0 = "KSRewardLandScapeVideoActivityProxy"
            return r0
    }

    @Override
    public boolean handledAdLiveOnResume() {
            r1 = this;
            boolean r0 = r1.needHandledOnResume()
            return r0
    }

    @Override
    public void initData() {
            r4 = this;
            com.kwad.components.ad.reward.model.c r0 = r4.mModel
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()
            java.lang.String r0 = r0.getUniqueId()
            r4.listenerKey = r0
            long r0 = android.os.SystemClock.elapsedRealtime()
            r4.mPageEnterTime = r0
            com.kwad.components.ad.reward.model.c r0 = r4.mModel
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()
            long r1 = r4.mPageEnterTime
            r3 = 1
            com.kwad.components.ad.reward.monitor.a.a(r3, r0, r1)
            com.kwad.components.ad.reward.monitor.a.I(r3)
            com.kwad.components.core.t.c r0 = com.kwad.components.core.t.c.qk()
            r0.a(r4)
            com.kwad.components.ad.reward.c r0 = com.kwad.components.ad.reward.c.ft()
            com.kwad.components.ad.reward.e.j r1 = r4.mRewardVerifyListener
            r0.a(r1)
            return
    }

    @Override
    public void initView() {
            r3 = this;
            int r0 = com.kwad.sdk.R.id.ksad_root_container
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = (com.kwad.sdk.core.view.AdBaseFrameLayout) r0
            r3.mRootContainer = r0
            int r1 = com.kwad.sdk.R.id.ksad_video_player
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.core.video.DetailVideoView r0 = (com.kwad.components.core.video.DetailVideoView) r0
            r3.mDetailVideoView = r0
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r3.mRootContainer
            int r1 = com.kwad.sdk.R.id.ksad_reward_play_layout
            android.view.View r0 = r0.findViewById(r1)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r3.mPlayLayout = r0
            boolean r0 = com.kwad.sdk.utils.ai.IN()
            r1 = 1
            r0 = r0 ^ r1
            com.kwad.components.ad.reward.model.c r2 = r3.mModel
            boolean r2 = r2.hr()
            if (r2 != 0) goto L36
            com.kwad.components.ad.reward.model.c r2 = r3.mModel
            boolean r2 = r2.hs()
            if (r2 == 0) goto L3d
        L36:
            if (r0 == 0) goto L3d
            com.kwad.components.core.video.DetailVideoView r0 = r3.mDetailVideoView
            r0.setForce(r1)
        L3d:
            com.kwad.components.core.video.DetailVideoView r0 = r3.mDetailVideoView
            int r2 = com.kwad.sdk.core.config.d.zX()
            r0.f(r1, r2)
            java.lang.String r0 = "reward"
            java.lang.String r1 = "show"
            com.kwad.sdk.i.a.ai(r0, r1)
            return
    }

    @Override
    public boolean interceptPlayCardResume() {
            r1 = this;
            boolean r0 = r1.needHandledOnResume()
            return r0
    }

    @Override
    public boolean needAdaptionScreen() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public void onBackPressed() {
            r2 = this;
            com.kwad.components.ad.reward.o r0 = r2.mRewardPresenter
            com.kwad.components.ad.reward.page.BackPressHandleResult r0 = r0.gA()
            com.kwad.components.ad.reward.page.BackPressHandleResult r1 = com.kwad.components.ad.reward.page.BackPressHandleResult.HANDLED
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto Lf
            return
        Lf:
            com.kwad.components.ad.reward.page.BackPressHandleResult r1 = com.kwad.components.ad.reward.page.BackPressHandleResult.HANDLED_CLOSE
            boolean r0 = r0.equals(r1)
            r1 = 0
            if (r0 == 0) goto L1f
            super.onBackPressed()
            r2.notifyPageDismiss(r1)
            return
        L1f:
            boolean r0 = r2.mIsBackEnable
            if (r0 == 0) goto L29
            r2.notifyPageDismiss(r1)
            super.onBackPressed()
        L29:
            return
    }

    @Override
    public void onCreate(android.os.Bundle r3) {
            r2 = this;
            super.onCreate(r3)
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r3 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT
            com.kwai.adclient.kscommerciallogger.model.BusinessType r0 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_REWARD
            java.lang.String r1 = "adShowSuccess"
            com.kwad.sdk.core.report.KSLoggerReporter$b r3 = r3.buildMethodCheck(r0, r1)
            r3.report()
            return
    }

    @Override
    protected com.kwad.components.ad.reward.j onCreateCallerContext() {
            r6 = this;
            com.kwad.components.ad.reward.model.c r0 = r6.mModel
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()
            com.kwad.components.ad.reward.model.c r1 = r6.mModel
            com.kwad.sdk.core.response.model.AdInfo r1 = r1.bB()
            com.kwad.components.ad.reward.j r2 = new com.kwad.components.ad.reward.j
            r2.<init>(r6)
            long r3 = r6.mPageEnterTime
            r2.mPageEnterTime = r3
            com.kwad.components.ad.reward.model.c r3 = r6.mModel
            int r3 = r3.hu()
            r4 = 1
            r5 = 2
            if (r3 != r5) goto L21
            r3 = r4
            goto L22
        L21:
            r3 = 0
        L22:
            r2.oU = r3
            com.kwad.components.ad.reward.e.b r3 = r6.mAdOpenInteractionListener
            r2.mAdOpenInteractionListener = r3
            com.kwad.components.ad.reward.e.d r3 = r6.mAdRewardStepListener
            r2.mAdRewardStepListener = r3
            com.kwad.components.ad.reward.model.c r3 = r6.mModel
            int r3 = r3.getScreenOrientation()
            r2.mScreenOrientation = r3
            com.kwad.components.ad.reward.model.c r3 = r6.mModel
            com.kwad.sdk.api.KsVideoPlayConfig r3 = r3.ht()
            r2.mVideoPlayConfig = r3
            com.kwad.components.ad.reward.model.c r3 = r6.mModel
            org.json.JSONObject r3 = r3.hv()
            r2.mReportExtData = r3
            com.kwad.sdk.core.view.AdBaseFrameLayout r3 = r6.mRootContainer
            r2.mRootContainer = r3
            r2.mAdTemplate = r0
            boolean r3 = com.kwad.sdk.core.response.b.b.dB(r1)
            if (r3 == 0) goto L53
            com.kwad.components.ad.reward.LoadStrategy r3 = com.kwad.components.ad.reward.LoadStrategy.FULL_TK
            goto L55
        L53:
            com.kwad.components.ad.reward.LoadStrategy r3 = com.kwad.components.ad.reward.LoadStrategy.MULTI
        L55:
            r2.pM = r3
            r6.createPlayModuleProxy(r2)
            r2.a(r6)
            boolean r3 = com.kwad.sdk.core.response.b.a.ax(r1)
            if (r3 == 0) goto L70
            com.kwad.components.core.e.d.c r3 = new com.kwad.components.core.e.d.c
            com.kwad.components.ad.reward.model.c r5 = r6.mModel
            org.json.JSONObject r5 = r5.hv()
            r3.<init>(r0, r5)
            r2.mApkDownloadHelper = r3
        L70:
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r3 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl
            android.content.Context r5 = r6.mContext
            r3.<init>(r2, r5, r0)
            r2.oY = r3
            com.kwad.components.ad.reward.e.f r3 = r6.mPlayEndPageListener
            r2.b(r3)
            boolean r0 = com.kwad.sdk.core.response.b.b.bk(r0)
            if (r0 == 0) goto L9c
            com.kwad.components.ad.reward.l r0 = new com.kwad.components.ad.reward.l
            com.kwad.components.ad.reward.model.c r3 = r6.mModel
            org.json.JSONObject r3 = r3.hv()
            r5 = 0
            r0.<init>(r2, r3, r5)
            r2.oZ = r0
            com.kwad.components.ad.reward.l r0 = r2.oZ
            com.kwad.components.ad.reward.KSRewardVideoActivityProxy$6 r3 = new com.kwad.components.ad.reward.KSRewardVideoActivityProxy$6
            r3.<init>(r6, r2)
            r0.a(r3)
        L9c:
            boolean r0 = com.kwad.sdk.core.response.b.a.ak(r1)
            if (r0 == 0) goto Lad
            com.kwad.components.ad.k.a r0 = new com.kwad.components.ad.k.a
            r0.<init>()
            com.kwad.components.ad.k.a r0 = r0.ah(r4)
            r2.pa = r0
        Lad:
            r2.pj = r4
            boolean r0 = com.kwad.sdk.core.response.b.a.bv(r1)
            if (r0 == 0) goto Lc4
            com.kwad.components.core.playable.a r0 = new com.kwad.components.core.playable.a
            int r1 = com.kwad.sdk.R.id.ksad_playable_webview
            android.view.View r1 = r6.findViewById(r1)
            com.kwad.sdk.core.webview.KsAdWebView r1 = (com.kwad.sdk.core.webview.KsAdWebView) r1
            r0.<init>(r1)
            r2.oX = r0
        Lc4:
            r0 = 0
            r2.pE = r0
            com.kwad.components.ad.reward.model.c r0 = r6.mModel
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.bB()
            if (r0 == 0) goto Lf3
            com.kwad.components.ad.reward.model.c r0 = r6.mModel
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.bB()
            boolean r0 = com.kwad.sdk.core.response.b.a.bv(r0)
            if (r0 == 0) goto Le7
            com.kwad.components.ad.reward.model.c r0 = r6.mModel
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.bB()
            long r0 = com.kwad.sdk.core.response.b.a.aj(r0)
            goto Lf1
        Le7:
            com.kwad.components.ad.reward.model.c r0 = r6.mModel
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.bB()
            long r0 = com.kwad.sdk.core.response.b.a.ae(r0)
        Lf1:
            r2.pE = r0
        Lf3:
            com.kwad.sdk.utils.bi r0 = r6.getTimerHelper()
            r2.mTimerHelper = r0
            return r2
    }

    @Override
    public com.kwad.components.core.l.a onCreateCallerContext() {
            r1 = this;
            com.kwad.components.ad.reward.j r0 = r1.onCreateCallerContext()
            return r0
    }

    @Override
    public com.kwad.sdk.mvp.Presenter onCreatePresenter() {
            r4 = this;
            com.kwad.components.ad.reward.model.c r0 = r4.mModel
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            com.kwad.components.ad.reward.o r1 = new com.kwad.components.ad.reward.o
            com.kwad.sdk.core.view.AdBaseFrameLayout r2 = r4.mRootContainer
            T extends com.kwad.components.core.l.a r3 = r4.mCallerContext
            com.kwad.components.ad.reward.j r3 = (com.kwad.components.ad.reward.j) r3
            r1.<init>(r4, r2, r0, r3)
            r4.mRewardPresenter = r1
            r1.a(r4)
            com.kwad.components.ad.reward.o r0 = r4.mRewardPresenter
            return r0
    }

    @Override
    public void onDestroy() {
            r2 = this;
            com.kwad.components.ad.reward.c r0 = com.kwad.components.ad.reward.c.ft()
            com.kwad.components.ad.reward.e.j r1 = r2.mRewardVerifyListener
            r0.b(r1)
            super.onDestroy()
            r0 = 0
            r2.notifyPageDismiss(r0)
            T extends com.kwad.components.core.l.a r0 = r2.mCallerContext
            if (r0 == 0) goto L3f
            T extends com.kwad.components.core.l.a r0 = r2.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.mVideoPlayStateListener
            r0.b(r1)
            T extends com.kwad.components.core.l.a r0 = r2.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            boolean r0 = r0.jR()
            if (r0 == 0) goto L38
            T extends com.kwad.components.core.l.a r0 = r2.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.ad.reward.f.a r0 = r0.jS()
            r0.removeInterceptor(r2)
        L38:
            java.lang.String r0 = r2.getUniqueId()
            com.kwad.components.ad.reward.KSRewardVideoActivityProxy.a.F(r0)
        L3f:
            com.kwad.components.ad.reward.model.c r0 = r2.mModel
            if (r0 == 0) goto L5e
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.bB()
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.F(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L5e
            android.content.Context r1 = r2.mContext
            android.content.Context r1 = r1.getApplicationContext()
            com.kwad.sdk.core.videocache.f r1 = com.kwad.sdk.core.videocache.c.a.bj(r1)
            r1.dQ(r0)
        L5e:
            com.kwad.components.core.t.c r0 = com.kwad.components.core.t.c.qk()
            r0.b(r2)
            r0 = 0
            r2.listenerKey = r0
            return
    }

    @Override
    public void onPageClose() {
            r0 = this;
            r0.finish()
            return
    }

    @Override
    public void onPause() {
            r3 = this;
            super.onPause()
            T extends com.kwad.components.core.l.a r0 = r3.mCallerContext
            if (r0 == 0) goto Lf
            T extends com.kwad.components.core.l.a r0 = r3.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            r1 = -1
            r0.mPageEnterTime = r1
        Lf:
            return
    }

    @Override
    public void onPreCreate(android.os.Bundle r2) {
            r1 = this;
            super.onPreCreate(r2)
            android.content.Intent r2 = r1.getIntent()     // Catch: java.lang.Throwable -> Lc
            java.lang.String r0 = "key_template"
            r2.removeExtra(r0)     // Catch: java.lang.Throwable -> Lc
        Lc:
            return
    }

    @Override
    public void onPreDestroy() {
            r1 = this;
            super.onPreDestroy()
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            r0.sg()
            return
    }

    @Override
    public void onResume() {
            r2 = this;
            super.onResume()
            com.kwad.components.ad.reward.model.c r0 = r2.mModel
            if (r0 == 0) goto L11
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()
            com.kwad.sdk.core.d.a.AW()
            com.kwad.sdk.core.d.a.ar(r0)
        L11:
            com.kwad.components.ad.reward.c.a r0 = com.kwad.components.ad.reward.c.a.gW()
            android.content.Context r1 = r2.mContext
            r0.O(r1)
            return
    }

    @Override
    public void onUnbind() {
            r2 = this;
            r0 = 0
            r2.mIsBackEnable = r0
            T extends com.kwad.components.core.l.a r1 = r2.mCallerContext
            com.kwad.components.ad.reward.j r1 = (com.kwad.components.ad.reward.j) r1
            r1.G(r0)
            T extends com.kwad.components.core.l.a r1 = r2.mCallerContext
            com.kwad.components.ad.reward.j r1 = (com.kwad.components.ad.reward.j) r1
            r1.po = r0
            return
    }
}
