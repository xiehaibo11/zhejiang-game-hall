package com.mbridge.msdk.video.module;

public class MBridgeVideoView extends com.mbridge.msdk.video.module.MBridgeBaseView implements com.mbridge.msdk.video.js.i {
    public static final java.lang.String TAG = "MBridgeVideoView";
    private static boolean al;
    private static int n;
    private static int o;
    private static int p;
    private static int q;
    private static int r;
    private boolean A;
    private com.mbridge.msdk.dycreator.baseview.cusview.MBridgeSegmentsProgressBar B;
    private com.mbridge.msdk.video.dynview.e.a C;
    private int D;
    private android.widget.FrameLayout E;
    private com.mbridge.msdk.video.module.MBridgeClickCTAView F;
    private com.mbridge.msdk.video.js.factory.b G;
    private int H;
    private android.widget.RelativeLayout I;
    private boolean J;
    private com.mbridge.msdk.video.module.a.a K;
    private boolean L;
    private boolean M;
    private boolean N;
    private java.lang.String O;
    private int P;
    private int Q;
    private int R;
    private com.mbridge.msdk.widget.dialog.MBAlertDialog S;
    private com.mbridge.msdk.widget.dialog.a T;
    private java.lang.String U;
    private double V;
    private double W;
    private boolean aA;
    private android.view.animation.AlphaAnimation aB;
    private com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView aC;
    private int aD;
    private int aE;
    private int aF;
    private int aG;
    private com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters aH;
    private com.mbridge.msdk.dycreator.baseview.rewardpopview.MBAcquireRewardPopView aI;
    private com.mbridge.msdk.video.module.MBridgeVideoView.b aJ;
    private boolean aK;
    private java.lang.Runnable aL;
    private java.lang.Runnable aM;
    private boolean aa;
    private boolean ab;
    private boolean ac;
    private boolean ad;
    private boolean ae;
    private boolean af;
    private boolean ag;
    private boolean ah;
    private boolean ai;
    private int aj;
    private boolean ak;
    private int am;
    private com.iab.omid.library.mmadbridge.adsession.AdSession an;
    private com.iab.omid.library.mmadbridge.adsession.media.MediaEvents ao;
    private java.lang.String ap;
    private int aq;
    private int ar;
    private int as;
    private boolean at;
    private boolean au;
    private boolean av;
    private boolean aw;
    private boolean ax;
    private boolean ay;
    private boolean az;
    public java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> mCampOrderViewData;
    public int mCampaignSize;
    public int mCurrPlayNum;
    public int mCurrentPlayProgressTime;
    public int mMuteSwitch;
    private com.mbridge.msdk.playercommon.PlayerView s;
    private com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView t;
    private android.widget.TextView u;
    private android.view.View v;
    private android.widget.RelativeLayout w;
    private android.widget.ImageView x;
    private android.widget.ProgressBar y;
    private com.mbridge.msdk.widget.FeedBackButton z;














    public static class a {
        public int a;
        public int b;
        public boolean c;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public final java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "ProgressData{curPlayPosition="
                r0.append(r1)
                int r1 = r2.a
                r0.append(r1)
                java.lang.String r1 = ", allDuration="
                r0.append(r1)
                int r1 = r2.b
                r0.append(r1)
                r1 = 125(0x7d, float:1.75E-43)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    private static final class b extends com.mbridge.msdk.playercommon.DefaultVideoPlayerStatusListener {
        private com.mbridge.msdk.video.module.MBridgeVideoView a;
        private int b;
        private int c;
        private int d;
        private boolean e;
        private com.iab.omid.library.mmadbridge.adsession.media.MediaEvents f;
        private com.mbridge.msdk.video.module.MBridgeVideoView.a g;
        private boolean h;
        private boolean i;
        private boolean j;
        private boolean k;
        private java.lang.String l;
        private com.mbridge.msdk.foundation.entity.CampaignEx m;
        private int n;
        private int o;
        private boolean p;

        public b(com.mbridge.msdk.video.module.MBridgeVideoView r2) {
                r1 = this;
                r1.<init>()
                com.mbridge.msdk.video.module.MBridgeVideoView$a r0 = new com.mbridge.msdk.video.module.MBridgeVideoView$a
                r0.<init>()
                r1.g = r0
                r0 = 0
                r1.h = r0
                r1.i = r0
                r1.j = r0
                r1.p = r0
                r1.a = r2
                if (r2 == 0) goto L23
                java.lang.String r0 = r2.getUnitId()
                r1.l = r0
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r2.getCampaign()
                r1.m = r2
            L23:
                return
        }

        static com.iab.omid.library.mmadbridge.adsession.media.MediaEvents a(com.mbridge.msdk.video.module.MBridgeVideoView.b r0, com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r1) {
                r0.f = r1
                return r1
        }

        private void d() {
                r3 = this;
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r3.a
                if (r0 != 0) goto L5
                return
            L5:
                android.widget.TextView r0 = com.mbridge.msdk.video.module.MBridgeVideoView.o(r0)
                android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
                android.widget.RelativeLayout$LayoutParams r0 = (android.widget.RelativeLayout.LayoutParams) r0
                if (r0 == 0) goto L2d
                r1 = -2
                r0.width = r1
                com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
                android.content.Context r1 = r1.j()
                r2 = 1103626240(0x41c80000, float:25.0)
                int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
                r0.height = r1
                com.mbridge.msdk.video.module.MBridgeVideoView r1 = r3.a
                android.widget.TextView r1 = com.mbridge.msdk.video.module.MBridgeVideoView.o(r1)
                r1.setLayoutParams(r0)
            L2d:
                com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
                android.content.Context r0 = r0.j()
                r1 = 1084227584(0x40a00000, float:5.0)
                int r0 = com.mbridge.msdk.foundation.tools.ae.b(r0, r1)
                com.mbridge.msdk.video.module.MBridgeVideoView r1 = r3.a
                android.widget.TextView r1 = com.mbridge.msdk.video.module.MBridgeVideoView.o(r1)
                r2 = 0
                r1.setPadding(r0, r2, r0, r2)
                return
        }

        public final int a() {
                r1 = this;
                int r0 = r1.b
                return r0
        }

        public final void a(int r3, int r4) {
                r2 = this;
                java.lang.String r0 = "DefaultVideoPlayerStatusListener"
                r2.n = r3
                r2.o = r4
                com.mbridge.msdk.foundation.tools.ab r3 = com.mbridge.msdk.foundation.tools.ab.a()
                java.lang.String r4 = "h_c_r_w_p_c"
                r1 = 0
                boolean r3 = r3.a(r4, r1)
                if (r3 != 0) goto L15
                goto Laf
            L15:
                int r3 = r2.n
                r4 = 100
                if (r3 == r4) goto Laf
                int r4 = r2.o
                if (r4 != 0) goto Laf
                boolean r4 = r2.p
                if (r4 != 0) goto Laf
                if (r3 == 0) goto Laf
                com.mbridge.msdk.foundation.entity.CampaignEx r3 = r2.m
                if (r3 != 0) goto L2b
                goto Laf
            L2b:
                int r3 = r3.getAdType()     // Catch: java.lang.Exception -> La3
                r4 = 94
                if (r3 == r4) goto L63
                com.mbridge.msdk.foundation.entity.CampaignEx r3 = r2.m     // Catch: java.lang.Exception -> La3
                int r3 = r3.getAdType()     // Catch: java.lang.Exception -> La3
                r4 = 287(0x11f, float:4.02E-43)
                if (r3 != r4) goto L3e
                goto L63
            L3e:
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La3
                r3.<init>()     // Catch: java.lang.Exception -> La3
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r2.m     // Catch: java.lang.Exception -> La3
                java.lang.String r4 = r4.getId()     // Catch: java.lang.Exception -> La3
                r3.append(r4)     // Catch: java.lang.Exception -> La3
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r2.m     // Catch: java.lang.Exception -> La3
                java.lang.String r4 = r4.getVideoUrlEncode()     // Catch: java.lang.Exception -> La3
                r3.append(r4)     // Catch: java.lang.Exception -> La3
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r2.m     // Catch: java.lang.Exception -> La3
                java.lang.String r4 = r4.getBidToken()     // Catch: java.lang.Exception -> La3
                r3.append(r4)     // Catch: java.lang.Exception -> La3
                java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> La3
                goto L87
            L63:
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La3
                r3.<init>()     // Catch: java.lang.Exception -> La3
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r2.m     // Catch: java.lang.Exception -> La3
                java.lang.String r4 = r4.getRequestId()     // Catch: java.lang.Exception -> La3
                r3.append(r4)     // Catch: java.lang.Exception -> La3
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r2.m     // Catch: java.lang.Exception -> La3
                java.lang.String r4 = r4.getId()     // Catch: java.lang.Exception -> La3
                r3.append(r4)     // Catch: java.lang.Exception -> La3
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r2.m     // Catch: java.lang.Exception -> La3
                java.lang.String r4 = r4.getVideoUrlEncode()     // Catch: java.lang.Exception -> La3
                r3.append(r4)     // Catch: java.lang.Exception -> La3
                java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> La3
            L87:
                com.mbridge.msdk.videocommon.download.b r4 = com.mbridge.msdk.videocommon.download.b.getInstance()     // Catch: java.lang.Exception -> La3
                java.lang.String r1 = r2.l     // Catch: java.lang.Exception -> La3
                com.mbridge.msdk.videocommon.download.a r3 = r4.a(r1, r3)     // Catch: java.lang.Exception -> La3
                if (r3 == 0) goto Laf
                r3.j()     // Catch: java.lang.Exception -> La3
                r3 = 1
                r2.p = r3     // Catch: java.lang.Exception -> La3
                boolean r3 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> La3
                if (r3 == 0) goto Laf
                java.lang.String r3 = "CDRate is : 0  and start download when player create!"
                com.mbridge.msdk.foundation.tools.z.d(r0, r3)     // Catch: java.lang.Exception -> La3
                goto Laf
            La3:
                r3 = move-exception
                boolean r4 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r4 == 0) goto Laf
                java.lang.String r3 = r3.getMessage()
                com.mbridge.msdk.foundation.tools.z.d(r0, r3)
            Laf:
                return
        }

        public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r1) {
                r0 = this;
                r0.m = r1
                return
        }

        public final void a(java.lang.String r1) {
                r0 = this;
                r0.l = r1
                return
        }

        public final void a(boolean r1) {
                r0 = this;
                r0.k = r1
                return
        }

        public final int b() {
                r1 = this;
                int r0 = r1.d
                return r0
        }

        public final void c() {
                r1 = this;
                r0 = 0
                r1.a = r0
                r0 = 0
                com.mbridge.msdk.video.module.MBridgeVideoView.a(r0)
                return
        }

        @Override
        public final void onBufferingEnd() {
                r3 = this;
                super.onBufferingEnd()     // Catch: java.lang.Exception -> L1f
                com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r3.f     // Catch: java.lang.Exception -> L1f
                if (r0 == 0) goto L13
                com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r3.f     // Catch: java.lang.Exception -> L1f
                r0.bufferFinish()     // Catch: java.lang.Exception -> L1f
                java.lang.String r0 = "omsdk"
                java.lang.String r1 = "play:  videoEvents.bufferFinish()"
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Exception -> L1f
            L13:
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r3.a     // Catch: java.lang.Exception -> L1f
                com.mbridge.msdk.video.module.a.a r0 = r0.e     // Catch: java.lang.Exception -> L1f
                r1 = 14
                java.lang.String r2 = ""
                r0.a(r1, r2)     // Catch: java.lang.Exception -> L1f
                goto L23
            L1f:
                r0 = move-exception
                r0.printStackTrace()
            L23:
                return
        }

        @Override
        public final void onBufferingStart(java.lang.String r3) {
                r2 = this;
                super.onBufferingStart(r3)     // Catch: java.lang.Exception -> L18
                com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r3 = r2.f     // Catch: java.lang.Exception -> L18
                if (r3 == 0) goto Lc
                com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r3 = r2.f     // Catch: java.lang.Exception -> L18
                r3.bufferStart()     // Catch: java.lang.Exception -> L18
            Lc:
                com.mbridge.msdk.video.module.MBridgeVideoView r3 = r2.a     // Catch: java.lang.Exception -> L18
                com.mbridge.msdk.video.module.a.a r3 = r3.e     // Catch: java.lang.Exception -> L18
                r0 = 13
                java.lang.String r1 = ""
                r3.a(r0, r1)     // Catch: java.lang.Exception -> L18
                goto L1c
            L18:
                r3 = move-exception
                r3.printStackTrace()
            L1c:
                return
        }

        @Override
        public final void onPlayCompleted() {
                r6 = this;
                super.onPlayCompleted()
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r6.a
                r1 = 1
                com.mbridge.msdk.video.module.MBridgeVideoView.j(r0, r1)
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r6.m
                r2 = 0
                if (r0 == 0) goto L64
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r6.a
                android.widget.TextView r0 = com.mbridge.msdk.video.module.MBridgeVideoView.o(r0)
                com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
                android.content.Context r3 = r3.j()
                java.lang.String r4 = "mbridge_reward_video_view_reward_time_complete"
                java.lang.String r5 = "string"
                int r3 = com.mbridge.msdk.foundation.tools.s.a(r3, r4, r5)
                r0.setText(r3)
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r6.m
                r3 = 100
                r0.setVideoPlayProgress(r3)
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r6.m
                int r0 = r0.getAdSpaceT()
                r3 = 2
                if (r0 != r3) goto L6f
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r6.a
                android.view.View r0 = com.mbridge.msdk.video.module.MBridgeVideoView.s(r0)
                r3 = 4
                r0.setVisibility(r3)
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r6.a
                com.mbridge.msdk.widget.FeedBackButton r0 = com.mbridge.msdk.video.module.MBridgeVideoView.t(r0)
                if (r0 == 0) goto L52
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r6.a
                com.mbridge.msdk.widget.FeedBackButton r0 = com.mbridge.msdk.video.module.MBridgeVideoView.t(r0)
                r0.setClickable(r2)
            L52:
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r6.a
                com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r0 = com.mbridge.msdk.video.module.MBridgeVideoView.u(r0)
                if (r0 == 0) goto L6f
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r6.a
                com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r0 = com.mbridge.msdk.video.module.MBridgeVideoView.u(r0)
                r0.setClickable(r2)
                goto L6f
            L64:
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r6.a
                android.widget.TextView r0 = com.mbridge.msdk.video.module.MBridgeVideoView.o(r0)
                java.lang.String r3 = "0"
                r0.setText(r3)
            L6f:
                com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r6.f
                if (r0 == 0) goto L7d
                r0.complete()
                java.lang.String r0 = "omsdk"
                java.lang.String r3 = "play:  videoEvents.complete()"
                com.mbridge.msdk.foundation.tools.z.a(r0, r3)
            L7d:
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r6.a
                com.mbridge.msdk.playercommon.PlayerView r0 = com.mbridge.msdk.video.module.MBridgeVideoView.b(r0)
                r0.setClickable(r2)
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r6.a
                java.lang.String r0 = com.mbridge.msdk.video.module.MBridgeVideoView.g(r0, r1)
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r6.m
                if (r2 == 0) goto Lda
                int r2 = r2.getDynamicTempCode()
                r3 = 5
                if (r2 != r3) goto Lda
                com.mbridge.msdk.video.module.MBridgeVideoView r2 = r6.a
                if (r2 == 0) goto Lda
                com.mbridge.msdk.video.dynview.e.a r2 = com.mbridge.msdk.video.module.MBridgeVideoView.v(r2)
                if (r2 == 0) goto Lda
                com.mbridge.msdk.video.module.MBridgeVideoView r2 = r6.a
                int r2 = r2.mCampaignSize
                com.mbridge.msdk.video.module.MBridgeVideoView r3 = r6.a
                int r3 = r3.mCurrPlayNum
                if (r2 <= r3) goto Lda
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                com.mbridge.msdk.video.module.MBridgeVideoView r1 = r6.a
                int r1 = r1.mCurrPlayNum
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                java.lang.String r2 = "position"
                r0.put(r2, r1)
                com.mbridge.msdk.video.module.MBridgeVideoView r1 = r6.a
                int r1 = r1.mMuteSwitch
                if (r1 == 0) goto Ld0
                com.mbridge.msdk.video.module.MBridgeVideoView r1 = r6.a
                int r1 = r1.mMuteSwitch
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                java.lang.String r2 = "mute"
                r0.put(r2, r1)
            Ld0:
                com.mbridge.msdk.video.module.MBridgeVideoView r1 = r6.a
                com.mbridge.msdk.video.dynview.e.a r1 = com.mbridge.msdk.video.module.MBridgeVideoView.v(r1)
                r1.a(r0)
                return
            Lda:
                com.mbridge.msdk.video.module.MBridgeVideoView r2 = r6.a
                com.mbridge.msdk.video.module.a.a r2 = r2.e
                r3 = 121(0x79, float:1.7E-43)
                java.lang.String r4 = ""
                r2.a(r3, r4)
                com.mbridge.msdk.video.module.MBridgeVideoView r2 = r6.a
                com.mbridge.msdk.video.module.a.a r2 = r2.e
                r3 = 11
                r2.a(r3, r0)
                int r0 = r6.c
                r6.b = r0
                com.mbridge.msdk.video.module.MBridgeVideoView r2 = r6.a
                r2.mCurrentPlayProgressTime = r0
                com.mbridge.msdk.video.module.MBridgeVideoView.a(r1)
                return
        }

        @Override
        public final void onPlayError(java.lang.String r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "errorStr"
                r0.append(r1)
                r0.append(r3)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "DefaultVideoPlayerStatusListener"
                com.mbridge.msdk.foundation.tools.z.d(r1, r0)
                super.onPlayError(r3)
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r2.a
                if (r0 == 0) goto L24
                com.mbridge.msdk.video.module.a.a r0 = r0.e
                r1 = 12
                r0.a(r1, r3)
            L24:
                return
        }

        @Override
        public final void onPlayProgress(int r12, int r13) {
                r11 = this;
                super.onPlayProgress(r12, r13)
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a
                boolean r0 = r0.f
                java.lang.String r1 = "DefaultVideoPlayerStatusListener"
                r2 = 1
                if (r0 == 0) goto L1fc
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r11.m
                r3 = 0
                if (r0 == 0) goto L3a
                int r0 = r0.getVideoCompleteTime()
                if (r0 > 0) goto L18
                r0 = r13
            L18:
                com.mbridge.msdk.foundation.b.b r4 = com.mbridge.msdk.foundation.b.b.a()
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>()
                com.mbridge.msdk.foundation.entity.CampaignEx r6 = r11.m
                java.lang.String r6 = r6.getCampaignUnitId()
                r5.append(r6)
                java.lang.String r6 = "_"
                r5.append(r6)
                r5.append(r2)
                java.lang.String r5 = r5.toString()
                r4.b(r5, r12)
                goto L3b
            L3a:
                r0 = r3
            L3b:
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r11.m
                boolean r4 = r4.isDynamicView()
                java.lang.String r5 = "0"
                java.lang.String r6 = "mbridge_reward_video_view_reward_time_complete"
                java.lang.String r7 = ""
                java.lang.String r8 = "mbridge_reward_video_view_reward_time_left"
                java.lang.String r9 = "string"
                if (r4 == 0) goto L12d
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r11.m
                int r4 = r4.getDynamicTempCode()
                r10 = 5
                if (r4 != r10) goto L12d
                com.mbridge.msdk.video.module.MBridgeVideoView r3 = r11.a     // Catch: java.lang.Exception -> L123
                int r3 = com.mbridge.msdk.video.module.MBridgeVideoView.w(r3)     // Catch: java.lang.Exception -> L123
                com.mbridge.msdk.video.module.MBridgeVideoView r4 = r11.a     // Catch: java.lang.Exception -> L123
                if (r4 != 0) goto L62
                goto L1fc
            L62:
                com.mbridge.msdk.video.module.MBridgeVideoView r4 = r11.a     // Catch: java.lang.Exception -> L123
                android.content.Context r4 = r4.getContext()     // Catch: java.lang.Exception -> L123
                android.content.res.Resources r4 = r4.getResources()     // Catch: java.lang.Exception -> L123
                com.mbridge.msdk.foundation.controller.a r10 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L123
                android.content.Context r10 = r10.j()     // Catch: java.lang.Exception -> L123
                int r6 = com.mbridge.msdk.foundation.tools.s.a(r10, r6, r9)     // Catch: java.lang.Exception -> L123
                java.lang.CharSequence r4 = r4.getText(r6)     // Catch: java.lang.Exception -> L123
                java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L123
                com.mbridge.msdk.video.module.MBridgeVideoView r6 = r11.a     // Catch: java.lang.Exception -> L123
                android.content.Context r6 = r6.getContext()     // Catch: java.lang.Exception -> L123
                android.content.res.Resources r6 = r6.getResources()     // Catch: java.lang.Exception -> L123
                com.mbridge.msdk.foundation.controller.a r10 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L123
                android.content.Context r10 = r10.j()     // Catch: java.lang.Exception -> L123
                int r8 = com.mbridge.msdk.foundation.tools.s.a(r10, r8, r9)     // Catch: java.lang.Exception -> L123
                java.lang.CharSequence r6 = r6.getText(r8)     // Catch: java.lang.Exception -> L123
                java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Exception -> L123
                if (r0 < 0) goto Lb0
                int r0 = r0 - r12
                if (r0 > 0) goto La0
                goto Ld4
            La0:
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L123
                r3.<init>()     // Catch: java.lang.Exception -> L123
                r3.append(r0)     // Catch: java.lang.Exception -> L123
                r3.append(r6)     // Catch: java.lang.Exception -> L123
                java.lang.String r4 = r3.toString()     // Catch: java.lang.Exception -> L123
                goto Ld4
            Lb0:
                int r3 = r3 - r12
                if (r3 > 0) goto Lb6
                if (r0 > 0) goto Ld5
                goto Ld6
            Lb6:
                if (r0 > 0) goto Lc4
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L123
                r0.<init>()     // Catch: java.lang.Exception -> L123
                r0.append(r3)     // Catch: java.lang.Exception -> L123
                r0.append(r7)     // Catch: java.lang.Exception -> L123
                goto Lcf
            Lc4:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L123
                r0.<init>()     // Catch: java.lang.Exception -> L123
                r0.append(r3)     // Catch: java.lang.Exception -> L123
                r0.append(r6)     // Catch: java.lang.Exception -> L123
            Lcf:
                java.lang.String r4 = r0.toString()     // Catch: java.lang.Exception -> L123
                r0 = r3
            Ld4:
                r3 = r0
            Ld5:
                r5 = r4
            Ld6:
                com.mbridge.msdk.video.module.MBridgeVideoView$a r0 = r11.g     // Catch: java.lang.Exception -> L123
                r0.a = r12     // Catch: java.lang.Exception -> L123
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a     // Catch: java.lang.Exception -> L123
                android.widget.TextView r0 = com.mbridge.msdk.video.module.MBridgeVideoView.o(r0)     // Catch: java.lang.Exception -> L123
                r0.setText(r5)     // Catch: java.lang.Exception -> L123
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a     // Catch: java.lang.Exception -> L123
                android.widget.ProgressBar r0 = com.mbridge.msdk.video.module.MBridgeVideoView.m(r0)     // Catch: java.lang.Exception -> L123
                if (r0 == 0) goto L100
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a     // Catch: java.lang.Exception -> L123
                android.widget.ProgressBar r0 = com.mbridge.msdk.video.module.MBridgeVideoView.m(r0)     // Catch: java.lang.Exception -> L123
                int r0 = r0.getVisibility()     // Catch: java.lang.Exception -> L123
                if (r0 != 0) goto L100
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a     // Catch: java.lang.Exception -> L123
                android.widget.ProgressBar r0 = com.mbridge.msdk.video.module.MBridgeVideoView.m(r0)     // Catch: java.lang.Exception -> L123
                r0.setProgress(r12)     // Catch: java.lang.Exception -> L123
            L100:
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a     // Catch: java.lang.Exception -> L123
                int r0 = com.mbridge.msdk.video.module.MBridgeVideoView.A(r0)     // Catch: java.lang.Exception -> L123
                if (r3 >= r0) goto L1fc
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a     // Catch: java.lang.Exception -> L123
                com.mbridge.msdk.dycreator.baseview.rewardpopview.MBAcquireRewardPopView r0 = com.mbridge.msdk.video.module.MBridgeVideoView.B(r0)     // Catch: java.lang.Exception -> L123
                if (r0 == 0) goto L1fc
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a     // Catch: java.lang.Exception -> L123
                boolean r0 = com.mbridge.msdk.video.module.MBridgeVideoView.C(r0)     // Catch: java.lang.Exception -> L123
                if (r0 == 0) goto L1fc
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a     // Catch: java.lang.Exception -> L123
                com.mbridge.msdk.dycreator.baseview.rewardpopview.MBAcquireRewardPopView r0 = com.mbridge.msdk.video.module.MBridgeVideoView.B(r0)     // Catch: java.lang.Exception -> L123
                r0.onTimeLessThanReduce(r3)     // Catch: java.lang.Exception -> L123
                goto L1fc
            L123:
                r0 = move-exception
                java.lang.String r0 = r0.getMessage()
                com.mbridge.msdk.foundation.tools.z.d(r1, r0)
                goto L1fc
            L12d:
                com.mbridge.msdk.video.module.MBridgeVideoView r4 = r11.a
                if (r4 != 0) goto L133
                goto L1f8
            L133:
                boolean r4 = r11.k
                if (r4 == 0) goto L149
                java.lang.Object[] r0 = new java.lang.Object[r2]
                int r4 = r13 - r12
                java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
                r0[r3] = r4
                java.lang.String r3 = "%s"
                java.lang.String r0 = java.lang.String.format(r3, r0)
                goto L1d2
            L149:
                if (r0 <= r13) goto L14c
                r0 = r13
            L14c:
                if (r0 > 0) goto L151
                int r4 = r13 - r12
                goto L153
            L151:
                int r4 = r0 - r12
            L153:
                if (r4 > 0) goto L177
                if (r0 > 0) goto L158
                goto L175
            L158:
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a
                android.content.Context r0 = r0.getContext()
                android.content.res.Resources r0 = r0.getResources()
                com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
                android.content.Context r4 = r4.j()
                int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r6, r9)
                java.lang.CharSequence r0 = r0.getText(r4)
                r5 = r0
                java.lang.String r5 = (java.lang.String) r5
            L175:
                r0 = r5
                goto L1b1
            L177:
                if (r0 > 0) goto L185
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r4)
                r0.append(r7)
                goto L1ac
            L185:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r4)
                com.mbridge.msdk.video.module.MBridgeVideoView r3 = r11.a
                android.content.Context r3 = r3.getContext()
                android.content.res.Resources r3 = r3.getResources()
                com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()
                android.content.Context r5 = r5.j()
                int r5 = com.mbridge.msdk.foundation.tools.s.a(r5, r8, r9)
                java.lang.CharSequence r3 = r3.getText(r5)
                java.lang.String r3 = (java.lang.String) r3
                r0.append(r3)
            L1ac:
                java.lang.String r0 = r0.toString()
                r3 = r4
            L1b1:
                com.mbridge.msdk.video.module.MBridgeVideoView r4 = r11.a
                int r4 = com.mbridge.msdk.video.module.MBridgeVideoView.A(r4)
                if (r3 >= r4) goto L1d2
                com.mbridge.msdk.video.module.MBridgeVideoView r4 = r11.a
                com.mbridge.msdk.dycreator.baseview.rewardpopview.MBAcquireRewardPopView r4 = com.mbridge.msdk.video.module.MBridgeVideoView.B(r4)
                if (r4 == 0) goto L1d2
                com.mbridge.msdk.video.module.MBridgeVideoView r4 = r11.a
                boolean r4 = com.mbridge.msdk.video.module.MBridgeVideoView.C(r4)
                if (r4 == 0) goto L1d2
                com.mbridge.msdk.video.module.MBridgeVideoView r4 = r11.a
                com.mbridge.msdk.dycreator.baseview.rewardpopview.MBAcquireRewardPopView r4 = com.mbridge.msdk.video.module.MBridgeVideoView.B(r4)
                r4.onTimeLessThanReduce(r3)
            L1d2:
                com.mbridge.msdk.video.module.MBridgeVideoView r3 = r11.a
                android.widget.TextView r3 = com.mbridge.msdk.video.module.MBridgeVideoView.o(r3)
                r3.setText(r0)
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a
                android.widget.ProgressBar r0 = com.mbridge.msdk.video.module.MBridgeVideoView.m(r0)
                if (r0 == 0) goto L1f8
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a
                android.widget.ProgressBar r0 = com.mbridge.msdk.video.module.MBridgeVideoView.m(r0)
                int r0 = r0.getVisibility()
                if (r0 != 0) goto L1f8
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a
                android.widget.ProgressBar r0 = com.mbridge.msdk.video.module.MBridgeVideoView.m(r0)
                r0.setProgress(r12)
            L1f8:
                com.mbridge.msdk.video.module.MBridgeVideoView$a r0 = r11.g
                r0.a = r12
            L1fc:
                r11.c = r13
                com.mbridge.msdk.video.module.MBridgeVideoView$a r0 = r11.g
                r0.b = r13
                com.mbridge.msdk.video.module.MBridgeVideoView$a r0 = r11.g
                com.mbridge.msdk.video.module.MBridgeVideoView r3 = r11.a
                boolean r3 = com.mbridge.msdk.video.module.MBridgeVideoView.x(r3)
                r0.c = r3
                r11.b = r12
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a
                r0.mCurrentPlayProgressTime = r12
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a
                com.mbridge.msdk.video.module.a.a r0 = r0.e
                r3 = 15
                com.mbridge.msdk.video.module.MBridgeVideoView$a r4 = r11.g
                r0.a(r3, r4)
                com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r11.f
                r3 = 100
                if (r0 == 0) goto L26e
                int r4 = r12 * 100
                int r4 = r4 / r13
                int r5 = r12 + 1
                int r5 = r5 * r3
                int r5 = r5 / r13
                r6 = 25
                java.lang.String r7 = "omsdk"
                if (r4 > r6) goto L241
                if (r6 >= r5) goto L241
                boolean r6 = r11.h
                if (r6 != 0) goto L241
                r11.h = r2
                r0.firstQuartile()
                java.lang.String r0 = "play:  videoEvents.firstQuartile()"
                com.mbridge.msdk.foundation.tools.z.a(r7, r0)
                goto L26e
            L241:
                r0 = 50
                if (r4 > r0) goto L258
                if (r0 >= r5) goto L258
                boolean r0 = r11.i
                if (r0 != 0) goto L258
                r11.i = r2
                com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r11.f
                r0.midpoint()
                java.lang.String r0 = "play:  videoEvents.midpoint()"
                com.mbridge.msdk.foundation.tools.z.a(r7, r0)
                goto L26e
            L258:
                r0 = 75
                if (r4 > r0) goto L26e
                if (r0 >= r5) goto L26e
                boolean r0 = r11.j
                if (r0 != 0) goto L26e
                r11.j = r2
                com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r11.f
                r0.thirdQuartile()
                java.lang.String r0 = "play:  videoEvents.thirdQuartile()"
                com.mbridge.msdk.foundation.tools.z.a(r7, r0)
            L26e:
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a
                boolean r0 = com.mbridge.msdk.video.module.MBridgeVideoView.d(r0)
                if (r0 == 0) goto L28d
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a
                boolean r0 = com.mbridge.msdk.video.module.MBridgeVideoView.y(r0)
                if (r0 != 0) goto L28d
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a
                int r0 = com.mbridge.msdk.video.module.MBridgeVideoView.h(r0)
                int r4 = com.mbridge.msdk.foundation.same.a.x
                if (r0 != r4) goto L28d
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a
                com.mbridge.msdk.video.module.MBridgeVideoView.f(r0)
            L28d:
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a     // Catch: java.lang.Throwable -> L2da
                if (r0 == 0) goto L2af
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a     // Catch: java.lang.Throwable -> L2da
                com.mbridge.msdk.dycreator.baseview.cusview.MBridgeSegmentsProgressBar r0 = com.mbridge.msdk.video.module.MBridgeVideoView.z(r0)     // Catch: java.lang.Throwable -> L2da
                if (r0 == 0) goto L2af
                int r0 = r12 * 100
                int r0 = r0 / r13
                com.mbridge.msdk.video.module.MBridgeVideoView r4 = r11.a     // Catch: java.lang.Throwable -> L2da
                com.mbridge.msdk.dycreator.baseview.cusview.MBridgeSegmentsProgressBar r4 = com.mbridge.msdk.video.module.MBridgeVideoView.z(r4)     // Catch: java.lang.Throwable -> L2da
                com.mbridge.msdk.video.module.MBridgeVideoView r5 = r11.a     // Catch: java.lang.Throwable -> L2da
                int r5 = r5.mCurrPlayNum     // Catch: java.lang.Throwable -> L2da
                int r5 = r5 - r2
                r4.setProgress(r0, r5)     // Catch: java.lang.Throwable -> L2da
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r11.m     // Catch: java.lang.Throwable -> L2da
                r4.setVideoPlayProgress(r0)     // Catch: java.lang.Throwable -> L2da
            L2af:
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a     // Catch: java.lang.Throwable -> L2da
                if (r0 == 0) goto L2e2
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a     // Catch: java.lang.Throwable -> L2da
                int r0 = com.mbridge.msdk.video.module.MBridgeVideoView.q(r0)     // Catch: java.lang.Throwable -> L2da
                r4 = -1
                if (r0 == r4) goto L2e2
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a     // Catch: java.lang.Throwable -> L2da
                int r0 = com.mbridge.msdk.video.module.MBridgeVideoView.q(r0)     // Catch: java.lang.Throwable -> L2da
                if (r12 != r0) goto L2e2
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a     // Catch: java.lang.Throwable -> L2da
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.b     // Catch: java.lang.Throwable -> L2da
                if (r0 == 0) goto L2e2
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a     // Catch: java.lang.Throwable -> L2da
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.b     // Catch: java.lang.Throwable -> L2da
                boolean r0 = r0.isDynamicView()     // Catch: java.lang.Throwable -> L2da
                if (r0 == 0) goto L2e2
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r11.a     // Catch: java.lang.Throwable -> L2da
                r0.setCTALayoutVisibleOrGone()     // Catch: java.lang.Throwable -> L2da
                goto L2e2
            L2da:
                r0 = move-exception
                java.lang.String r0 = r0.getMessage()
                com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            L2e2:
                int r0 = r11.n
                if (r0 == r3) goto L386
                boolean r4 = r11.p
                if (r4 != 0) goto L386
                if (r0 != 0) goto L2ee
                goto L386
            L2ee:
                int r4 = r11.o
                if (r4 <= r0) goto L2f6
                int r0 = r0 / 2
                r11.o = r0
            L2f6:
                int r0 = r11.o
                if (r0 < 0) goto L386
                int r13 = r13 * r0
                int r13 = r13 / r3
                if (r12 < r13) goto L386
                com.mbridge.msdk.foundation.entity.CampaignEx r12 = r11.m
                int r12 = r12.getAdType()
                r0 = 94
                if (r12 == r0) goto L338
                com.mbridge.msdk.foundation.entity.CampaignEx r12 = r11.m
                int r12 = r12.getAdType()
                r0 = 287(0x11f, float:4.02E-43)
                if (r12 != r0) goto L313
                goto L338
            L313:
                java.lang.StringBuilder r12 = new java.lang.StringBuilder
                r12.<init>()
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r11.m
                java.lang.String r0 = r0.getId()
                r12.append(r0)
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r11.m
                java.lang.String r0 = r0.getVideoUrlEncode()
                r12.append(r0)
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r11.m
                java.lang.String r0 = r0.getBidToken()
                r12.append(r0)
                java.lang.String r12 = r12.toString()
                goto L35c
            L338:
                java.lang.StringBuilder r12 = new java.lang.StringBuilder
                r12.<init>()
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r11.m
                java.lang.String r0 = r0.getRequestId()
                r12.append(r0)
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r11.m
                java.lang.String r0 = r0.getId()
                r12.append(r0)
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r11.m
                java.lang.String r0 = r0.getVideoUrlEncode()
                r12.append(r0)
                java.lang.String r12 = r12.toString()
            L35c:
                com.mbridge.msdk.videocommon.download.b r0 = com.mbridge.msdk.videocommon.download.b.getInstance()
                java.lang.String r3 = r11.l
                com.mbridge.msdk.videocommon.download.a r12 = r0.a(r3, r12)
                if (r12 == 0) goto L386
                r12.j()
                r11.p = r2
                java.lang.StringBuilder r12 = new java.lang.StringBuilder
                r12.<init>()
                java.lang.String r0 = "CDRate is : "
                r12.append(r0)
                r12.append(r13)
                java.lang.String r13 = " and start download !"
                r12.append(r13)
                java.lang.String r12 = r12.toString()
                com.mbridge.msdk.foundation.tools.z.d(r1, r12)
            L386:
                return
        }

        @Override
        public final void onPlaySetDataSourceError(java.lang.String r1) {
                r0 = this;
                super.onPlaySetDataSourceError(r1)
                return
        }

        @Override
        public final void onPlayStarted(int r9) {
                r8 = this;
                super.onPlayStarted(r9)
                boolean r0 = r8.e
                r1 = 1
                if (r0 != 0) goto L1c
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r8.a
                if (r0 == 0) goto Lf
                com.mbridge.msdk.video.module.MBridgeVideoView.i(r0, r1)
            Lf:
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r8.a
                com.mbridge.msdk.video.module.a.a r0 = r0.e
                r2 = 10
                com.mbridge.msdk.video.module.MBridgeVideoView$a r3 = r8.g
                r0.a(r2, r3)
                r8.e = r1
            L1c:
                r8.d = r9
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.m
                r2 = 0
                if (r0 == 0) goto L10e
                int r0 = r0.getVideoCompleteTime()
                if (r0 > 0) goto L2a
                r0 = r9
            L2a:
                com.mbridge.msdk.foundation.entity.CampaignEx r3 = r8.m
                boolean r3 = r3.isDynamicView()
                java.lang.String r4 = "mbridge_reward_shape_progress"
                java.lang.String r5 = "mbridge_reward_video_time_count_num_bg"
                java.lang.String r6 = "drawable"
                if (r3 == 0) goto L97
                com.mbridge.msdk.video.module.MBridgeVideoView r3 = r8.a
                if (r3 == 0) goto L10e
                android.widget.TextView r3 = com.mbridge.msdk.video.module.MBridgeVideoView.o(r3)
                if (r3 != 0) goto L44
                goto L10e
            L44:
                com.mbridge.msdk.foundation.entity.CampaignEx r3 = r8.m
                int r3 = r3.getDynamicTempCode()
                r7 = 5
                if (r3 != r7) goto L6f
                com.mbridge.msdk.video.module.MBridgeVideoView r3 = r8.a
                int r3 = r3.mCurrPlayNum
                if (r3 <= r1) goto L6f
                if (r0 > 0) goto L6f
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r8.a
                android.widget.TextView r0 = com.mbridge.msdk.video.module.MBridgeVideoView.o(r0)
                com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
                android.content.Context r1 = r1.j()
                int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r5, r6)
                r0.setBackgroundResource(r1)
                r8.d()
                goto L10e
            L6f:
                if (r0 <= 0) goto L81
                boolean r0 = r8.k
                if (r0 == 0) goto L7d
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.m
                int r0 = r0.getDynamicTempCode()
                if (r0 != r7) goto L80
            L7d:
                r8.d()
            L80:
                r4 = r5
            L81:
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r8.a
                android.widget.TextView r0 = com.mbridge.msdk.video.module.MBridgeVideoView.o(r0)
                com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
                android.content.Context r1 = r1.j()
                int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r4, r6)
                r0.setBackgroundResource(r1)
                goto L10e
            L97:
                if (r0 <= 0) goto Lf9
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r8.a
                android.widget.TextView r0 = com.mbridge.msdk.video.module.MBridgeVideoView.o(r0)
                com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
                android.content.Context r3 = r3.j()
                int r3 = com.mbridge.msdk.foundation.tools.s.a(r3, r5, r6)
                r0.setBackgroundResource(r3)
                android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
                r3 = -2
                com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
                android.content.Context r4 = r4.j()
                r5 = 1106247680(0x41f00000, float:30.0)
                int r4 = com.mbridge.msdk.foundation.tools.ae.b(r4, r5)
                r0.<init>(r3, r4)
                com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
                android.content.Context r3 = r3.j()
                r4 = 1084227584(0x40a00000, float:5.0)
                int r3 = com.mbridge.msdk.foundation.tools.ae.b(r3, r4)
                com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
                android.content.Context r4 = r4.j()
                java.lang.String r5 = "mbridge_native_endcard_feed_btn"
                java.lang.String r6 = "id"
                int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r5, r6)
                r0.addRule(r1, r4)
                r0.setMargins(r3, r2, r2, r2)
                com.mbridge.msdk.video.module.MBridgeVideoView r1 = r8.a
                android.widget.TextView r1 = com.mbridge.msdk.video.module.MBridgeVideoView.o(r1)
                r1.setPadding(r3, r2, r3, r2)
                com.mbridge.msdk.video.module.MBridgeVideoView r1 = r8.a
                android.widget.TextView r1 = com.mbridge.msdk.video.module.MBridgeVideoView.o(r1)
                r1.setLayoutParams(r0)
                goto L10e
            Lf9:
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r8.a
                android.widget.TextView r0 = com.mbridge.msdk.video.module.MBridgeVideoView.o(r0)
                com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
                android.content.Context r1 = r1.j()
                int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r4, r6)
                r0.setBackgroundResource(r1)
            L10e:
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r8.a
                android.widget.ProgressBar r0 = com.mbridge.msdk.video.module.MBridgeVideoView.m(r0)
                if (r0 == 0) goto L11f
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r8.a
                android.widget.ProgressBar r0 = com.mbridge.msdk.video.module.MBridgeVideoView.m(r0)
                r0.setMax(r9)
            L11f:
                com.mbridge.msdk.foundation.entity.CampaignEx r9 = r8.m
                if (r9 == 0) goto L133
                int r9 = r9.getAdSpaceT()
                r0 = 2
                if (r9 != r0) goto L133
                com.mbridge.msdk.video.module.MBridgeVideoView r9 = r8.a
                android.widget.RelativeLayout r9 = com.mbridge.msdk.video.module.MBridgeVideoView.n(r9)
                r9.setVisibility(r2)
            L133:
                com.mbridge.msdk.video.module.MBridgeVideoView r9 = r8.a
                android.widget.TextView r9 = com.mbridge.msdk.video.module.MBridgeVideoView.o(r9)
                int r9 = r9.getVisibility()
                if (r9 != 0) goto L144
                com.mbridge.msdk.video.module.MBridgeVideoView r9 = r8.a
                com.mbridge.msdk.video.module.MBridgeVideoView.p(r9)
            L144:
                com.mbridge.msdk.video.module.MBridgeVideoView.a(r2)
                com.mbridge.msdk.video.module.MBridgeVideoView r9 = r8.a
                int r9 = com.mbridge.msdk.video.module.MBridgeVideoView.q(r9)
                if (r9 != 0) goto L154
                com.mbridge.msdk.video.module.MBridgeVideoView r9 = r8.a
                r9.setCTALayoutVisibleOrGone()
            L154:
                com.mbridge.msdk.video.module.MBridgeVideoView r9 = r8.a
                r9.showMoreOfferInPlayTemplate()
                com.mbridge.msdk.video.module.MBridgeVideoView r9 = r8.a
                r9.showBaitClickView()
                com.mbridge.msdk.video.module.MBridgeVideoView r9 = r8.a
                com.mbridge.msdk.video.module.MBridgeVideoView.r(r9)
                return
        }
    }

    static {
            return
    }

    public MBridgeVideoView(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            r3 = 0
            r2.mMuteSwitch = r3
            r2.D = r3
            r0 = 1
            r2.mCampaignSize = r0
            r2.mCurrPlayNum = r0
            r2.mCurrentPlayProgressTime = r3
            r2.J = r3
            r2.L = r3
            r2.M = r3
            r2.N = r3
            java.lang.String r1 = ""
            r2.U = r1
            r2.aa = r3
            r2.ab = r3
            r2.ac = r3
            r2.ad = r3
            r2.ae = r3
            r2.af = r3
            r2.ag = r3
            r2.ah = r3
            r2.ai = r3
            r2.ak = r3
            r1 = 2
            r2.am = r1
            r2.at = r3
            r2.au = r3
            r2.av = r3
            r2.aw = r0
            r2.ax = r3
            r2.ay = r3
            r2.az = r3
            r2.aA = r3
            r2.aD = r3
            r0 = 5
            r2.aE = r0
            r2.aF = r0
            r2.aG = r0
            com.mbridge.msdk.video.module.MBridgeVideoView$b r0 = new com.mbridge.msdk.video.module.MBridgeVideoView$b
            r0.<init>(r2)
            r2.aJ = r0
            r2.aK = r3
            com.mbridge.msdk.video.module.MBridgeVideoView$2 r3 = new com.mbridge.msdk.video.module.MBridgeVideoView$2
            r3.<init>(r2)
            r2.aL = r3
            com.mbridge.msdk.video.module.MBridgeVideoView$5 r3 = new com.mbridge.msdk.video.module.MBridgeVideoView$5
            r3.<init>(r2)
            r2.aM = r3
            return
    }

    public MBridgeVideoView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r1.<init>(r2, r3)
            r2 = 0
            r1.mMuteSwitch = r2
            r1.D = r2
            r3 = 1
            r1.mCampaignSize = r3
            r1.mCurrPlayNum = r3
            r1.mCurrentPlayProgressTime = r2
            r1.J = r2
            r1.L = r2
            r1.M = r2
            r1.N = r2
            java.lang.String r0 = ""
            r1.U = r0
            r1.aa = r2
            r1.ab = r2
            r1.ac = r2
            r1.ad = r2
            r1.ae = r2
            r1.af = r2
            r1.ag = r2
            r1.ah = r2
            r1.ai = r2
            r1.ak = r2
            r0 = 2
            r1.am = r0
            r1.at = r2
            r1.au = r2
            r1.av = r2
            r1.aw = r3
            r1.ax = r2
            r1.ay = r2
            r1.az = r2
            r1.aA = r2
            r1.aD = r2
            r3 = 5
            r1.aE = r3
            r1.aF = r3
            r1.aG = r3
            com.mbridge.msdk.video.module.MBridgeVideoView$b r3 = new com.mbridge.msdk.video.module.MBridgeVideoView$b
            r3.<init>(r1)
            r1.aJ = r3
            r1.aK = r2
            com.mbridge.msdk.video.module.MBridgeVideoView$2 r2 = new com.mbridge.msdk.video.module.MBridgeVideoView$2
            r2.<init>(r1)
            r1.aL = r2
            com.mbridge.msdk.video.module.MBridgeVideoView$5 r2 = new com.mbridge.msdk.video.module.MBridgeVideoView$5
            r2.<init>(r1)
            r1.aM = r2
            return
    }

    static int A(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            int r0 = r0.aG
            return r0
    }

    static com.mbridge.msdk.dycreator.baseview.rewardpopview.MBAcquireRewardPopView B(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            com.mbridge.msdk.dycreator.baseview.rewardpopview.MBAcquireRewardPopView r0 = r0.aI
            return r0
    }

    static boolean C(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            boolean r0 = r0.N
            return r0
    }

    static android.view.animation.AlphaAnimation D(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            android.view.animation.AlphaAnimation r0 = r0.aB
            return r0
    }

    static android.widget.ImageView E(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            android.widget.ImageView r0 = r0.x
            return r0
    }

    static android.widget.FrameLayout F(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            android.widget.FrameLayout r0 = r0.E
            return r0
    }

    static int G(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            int r0 = r0.k()
            return r0
    }

    static int H(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            int r0 = r0.aD
            return r0
    }

    static com.mbridge.msdk.video.module.a.a I(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            com.mbridge.msdk.video.module.a.a r0 = r0.K
            return r0
    }

    static int J(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            int r0 = r0.aE
            return r0
    }

    static java.lang.Runnable K(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            java.lang.Runnable r0 = r0.aM
            return r0
    }

    static int L(com.mbridge.msdk.video.module.MBridgeVideoView r2) {
            int r0 = r2.aE
            int r1 = r0 + (-1)
            r2.aE = r1
            return r0
    }

    static int a(com.mbridge.msdk.video.module.MBridgeVideoView r0, int r1) {
            r0.H = r1
            return r1
    }

    private java.lang.String a(int r4, int r5) {
            r3 = this;
            java.lang.String r0 = ""
            if (r5 == 0) goto L24
            float r4 = (float) r4
            float r1 = (float) r5
            float r4 = r4 / r1
            double r1 = (double) r4
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L20
            r4.<init>()     // Catch: java.lang.Throwable -> L20
            java.lang.Double r1 = java.lang.Double.valueOf(r1)     // Catch: java.lang.Throwable -> L20
            double r1 = com.mbridge.msdk.foundation.tools.ae.a(r1)     // Catch: java.lang.Throwable -> L20
            r4.append(r1)     // Catch: java.lang.Throwable -> L20
            r4.append(r0)     // Catch: java.lang.Throwable -> L20
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L20
            return r4
        L20:
            r4 = move-exception
            r4.printStackTrace()
        L24:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r5)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            return r4
    }

    private void a() {
            r3 = this;
            boolean r0 = r3.e()
            r3.f = r0
            boolean r0 = r3.f
            if (r0 != 0) goto L11
            java.lang.String r0 = "MBridgeVideoView"
            java.lang.String r1 = "MBridgeVideoView init fail"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L11:
            r3.c()
            android.view.animation.AlphaAnimation r0 = new android.view.animation.AlphaAnimation
            r1 = 0
            r2 = 1120403456(0x42c80000, float:100.0)
            r0.<init>(r1, r2)
            r3.aB = r0
            r1 = 200(0xc8, double:9.9E-322)
            r0.setDuration(r1)
            return
    }

    static void a(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            r0.a()
            return
    }

    static void a(com.mbridge.msdk.video.module.MBridgeVideoView r9, java.lang.String r10) {
            com.mbridge.msdk.video.module.a.a r0 = r9.K
            if (r0 == 0) goto L96
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.b
            if (r0 == 0) goto L4f
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.b     // Catch: java.lang.Exception -> L4b
            com.mbridge.msdk.foundation.entity.CampaignEx$c r0 = r0.getRewardTemplateMode()     // Catch: java.lang.Exception -> L4b
            java.lang.String r1 = ""
            if (r0 == 0) goto L25
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4b
            r2.<init>()     // Catch: java.lang.Exception -> L4b
            int r0 = r0.b()     // Catch: java.lang.Exception -> L4b
            r2.append(r0)     // Catch: java.lang.Exception -> L4b
            r2.append(r1)     // Catch: java.lang.Exception -> L4b
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Exception -> L4b
        L25:
            r7 = r1
            android.content.Context r0 = r9.a     // Catch: java.lang.Exception -> L4b
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r9.b     // Catch: java.lang.Exception -> L4b
            java.lang.String r2 = r1.getCampaignUnitId()     // Catch: java.lang.Exception -> L4b
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r9.b     // Catch: java.lang.Exception -> L4b
            boolean r3 = r1.isBidCampaign()     // Catch: java.lang.Exception -> L4b
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r9.b     // Catch: java.lang.Exception -> L4b
            java.lang.String r4 = r1.getRequestId()     // Catch: java.lang.Exception -> L4b
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r9.b     // Catch: java.lang.Exception -> L4b
            java.lang.String r5 = r1.getRequestIdNotice()     // Catch: java.lang.Exception -> L4b
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r9.b     // Catch: java.lang.Exception -> L4b
            java.lang.String r6 = r1.getId()     // Catch: java.lang.Exception -> L4b
            r1 = r10
            com.mbridge.msdk.foundation.same.report.e.a(r0, r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L4b
            goto L4f
        L4b:
            r10 = move-exception
            r10.printStackTrace()
        L4f:
            r10 = 0
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L62
            r0.<init>()     // Catch: org.json.JSONException -> L62
            java.lang.String r10 = com.mbridge.msdk.foundation.same.a.p     // Catch: org.json.JSONException -> L60
            r1 = 0
            org.json.JSONObject r1 = r9.a(r1)     // Catch: org.json.JSONException -> L60
            r0.put(r10, r1)     // Catch: org.json.JSONException -> L60
            goto L69
        L60:
            r10 = move-exception
            goto L66
        L62:
            r0 = move-exception
            r8 = r0
            r0 = r10
            r10 = r8
        L66:
            r10.printStackTrace()
        L69:
            com.mbridge.msdk.video.module.a.a r10 = r9.K
            r1 = 105(0x69, float:1.47E-43)
            r10.a(r1, r0)
            com.mbridge.msdk.foundation.controller.a r10 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r10 = r10.j()
            if (r10 == 0) goto L96
            com.mbridge.msdk.foundation.controller.a r10 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L8c
            android.content.Context r10 = r10.j()     // Catch: java.lang.Exception -> L8c
            android.content.Context r10 = r10.getApplicationContext()     // Catch: java.lang.Exception -> L8c
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = r9.b     // Catch: java.lang.Exception -> L8c
            com.mbridge.msdk.video.module.b.b.d(r10, r9)     // Catch: java.lang.Exception -> L8c
            goto L96
        L8c:
            r9 = move-exception
            java.lang.String r9 = r9.getMessage()
            java.lang.String r10 = "MBridgeVideoView"
            com.mbridge.msdk.foundation.tools.z.d(r10, r9)
        L96:
            return
    }

    private void a(java.lang.String r3) {
            r2 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)
            com.mbridge.msdk.video.module.MBridgeVideoView$13 r1 = new com.mbridge.msdk.video.module.MBridgeVideoView$13
            r1.<init>(r2)
            r0.a(r3, r1)
            return
    }

    static boolean a(com.mbridge.msdk.video.module.MBridgeVideoView r0, boolean r1) {
            r0.aA = r1
            return r1
    }

    static boolean a(boolean r0) {
            com.mbridge.msdk.video.module.MBridgeVideoView.al = r0
            return r0
    }

    static com.mbridge.msdk.playercommon.PlayerView b(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            com.mbridge.msdk.playercommon.PlayerView r0 = r0.s
            return r0
    }

    private java.lang.String b(boolean r5) {
            r4 = this;
            boolean r0 = r4.ak
            java.lang.String r1 = ""
            if (r0 != 0) goto L7
            return r1
        L7:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L38
            r0.<init>()     // Catch: java.lang.Exception -> L38
            boolean r2 = r4.at     // Catch: java.lang.Exception -> L38
            java.lang.String r3 = "Alert_window_status"
            if (r2 != 0) goto L17
            int r2 = com.mbridge.msdk.foundation.same.a.A     // Catch: java.lang.Exception -> L38
            r0.put(r3, r2)     // Catch: java.lang.Exception -> L38
        L17:
            boolean r2 = r4.av     // Catch: java.lang.Exception -> L38
            if (r2 == 0) goto L20
            int r2 = com.mbridge.msdk.foundation.same.a.C     // Catch: java.lang.Exception -> L38
            r0.put(r3, r2)     // Catch: java.lang.Exception -> L38
        L20:
            boolean r2 = r4.au     // Catch: java.lang.Exception -> L38
            if (r2 == 0) goto L29
            int r2 = com.mbridge.msdk.foundation.same.a.B     // Catch: java.lang.Exception -> L38
            r0.put(r3, r2)     // Catch: java.lang.Exception -> L38
        L29:
            java.lang.String r2 = "complete_info"
            if (r5 == 0) goto L2f
            r5 = 1
            goto L30
        L2f:
            r5 = 2
        L30:
            r0.put(r2, r5)     // Catch: java.lang.Exception -> L38
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Exception -> L38
            return r5
        L38:
            java.lang.String r5 = "MBridgeVideoView"
            java.lang.String r0 = "getIVRewardStatusString ERROR"
            com.mbridge.msdk.foundation.tools.z.d(r5, r0)
            return r1
    }

    private void b() {
            r9 = this;
            boolean r0 = r9.ak     // Catch: java.lang.Exception -> L14d
            r1 = 8
            java.lang.String r2 = ""
            r3 = 2
            if (r0 == 0) goto Leb
            int r0 = r9.aq     // Catch: java.lang.Exception -> L14d
            int r4 = com.mbridge.msdk.foundation.same.a.w     // Catch: java.lang.Exception -> L14d
            if (r0 == r4) goto L15
            int r0 = r9.aq     // Catch: java.lang.Exception -> L14d
            int r4 = com.mbridge.msdk.foundation.same.a.x     // Catch: java.lang.Exception -> L14d
            if (r0 != r4) goto Leb
        L15:
            boolean r0 = r9.at     // Catch: java.lang.Exception -> L14d
            if (r0 == 0) goto L2f
            int r0 = r9.aq     // Catch: java.lang.Exception -> L14d
            int r1 = com.mbridge.msdk.foundation.same.a.x     // Catch: java.lang.Exception -> L14d
            if (r0 != r1) goto L2e
            com.mbridge.msdk.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14d
            if (r0 == 0) goto L2e
            com.mbridge.msdk.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14d
            boolean r1 = r9.ax     // Catch: java.lang.Exception -> L14d
            java.lang.String r1 = r9.b(r1)     // Catch: java.lang.Exception -> L14d
            r0.a(r3, r1)     // Catch: java.lang.Exception -> L14d
        L2e:
            return
        L2f:
            int r0 = r9.aq     // Catch: java.lang.Exception -> L14d
            int r4 = com.mbridge.msdk.foundation.same.a.x     // Catch: java.lang.Exception -> L14d
            if (r0 != r4) goto L49
            boolean r0 = r9.az     // Catch: java.lang.Exception -> L14d
            if (r0 == 0) goto L49
            com.mbridge.msdk.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14d
            if (r0 == 0) goto L48
            com.mbridge.msdk.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14d
            boolean r1 = r9.ax     // Catch: java.lang.Exception -> L14d
            java.lang.String r1 = r9.b(r1)     // Catch: java.lang.Exception -> L14d
            r0.a(r3, r1)     // Catch: java.lang.Exception -> L14d
        L48:
            return
        L49:
            boolean r0 = r9.aw     // Catch: java.lang.Exception -> L14d
            if (r0 == 0) goto Lea
            com.mbridge.msdk.playercommon.PlayerView r0 = r9.s     // Catch: java.lang.Exception -> L14d
            int r0 = r0.getCurPosition()     // Catch: java.lang.Exception -> L14d
            int r0 = r0 / 1000
            com.mbridge.msdk.playercommon.PlayerView r4 = r9.s     // Catch: java.lang.Exception -> L14d
            int r4 = r4.getDuration()     // Catch: java.lang.Exception -> L14d
            if (r4 != 0) goto L64
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r9.b     // Catch: java.lang.Exception -> L14d
            int r4 = r4.getVideoLength()     // Catch: java.lang.Exception -> L14d
            goto L6a
        L64:
            com.mbridge.msdk.playercommon.PlayerView r4 = r9.s     // Catch: java.lang.Exception -> L14d
            int r4 = r4.getDuration()     // Catch: java.lang.Exception -> L14d
        L6a:
            float r5 = (float) r0     // Catch: java.lang.Exception -> L14d
            float r4 = (float) r4     // Catch: java.lang.Exception -> L14d
            float r5 = r5 / r4
            r4 = 1120403456(0x42c80000, float:100.0)
            float r5 = r5 * r4
            int r4 = (int) r5     // Catch: java.lang.Exception -> L14d
            int r5 = r9.aq     // Catch: java.lang.Exception -> L14d
            int r6 = com.mbridge.msdk.foundation.same.a.w     // Catch: java.lang.Exception -> L14d
            if (r5 != r6) goto Lb7
            r9.f()     // Catch: java.lang.Exception -> L14d
            int r5 = r9.ar     // Catch: java.lang.Exception -> L14d
            int r6 = com.mbridge.msdk.foundation.same.a.y     // Catch: java.lang.Exception -> L14d
            if (r5 != r6) goto L94
            int r5 = r9.as     // Catch: java.lang.Exception -> L14d
            if (r4 < r5) goto L94
            com.mbridge.msdk.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14d
            if (r0 == 0) goto L93
            com.mbridge.msdk.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14d
            boolean r1 = r9.ax     // Catch: java.lang.Exception -> L14d
            java.lang.String r1 = r9.b(r1)     // Catch: java.lang.Exception -> L14d
            r0.a(r3, r1)     // Catch: java.lang.Exception -> L14d
        L93:
            return
        L94:
            int r5 = r9.ar     // Catch: java.lang.Exception -> L14d
            int r6 = com.mbridge.msdk.foundation.same.a.z     // Catch: java.lang.Exception -> L14d
            if (r5 != r6) goto Lae
            int r5 = r9.as     // Catch: java.lang.Exception -> L14d
            if (r0 < r5) goto Lae
            com.mbridge.msdk.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14d
            if (r0 == 0) goto Lad
            com.mbridge.msdk.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14d
            boolean r1 = r9.ax     // Catch: java.lang.Exception -> L14d
            java.lang.String r1 = r9.b(r1)     // Catch: java.lang.Exception -> L14d
            r0.a(r3, r1)     // Catch: java.lang.Exception -> L14d
        Lad:
            return
        Lae:
            com.mbridge.msdk.video.module.a.a r3 = r9.e     // Catch: java.lang.Exception -> L14d
            if (r3 == 0) goto Lb7
            com.mbridge.msdk.video.module.a.a r3 = r9.e     // Catch: java.lang.Exception -> L14d
            r3.a(r1, r2)     // Catch: java.lang.Exception -> L14d
        Lb7:
            int r3 = r9.aq     // Catch: java.lang.Exception -> L14d
            int r5 = com.mbridge.msdk.foundation.same.a.x     // Catch: java.lang.Exception -> L14d
            if (r3 != r5) goto Lea
            int r3 = r9.ar     // Catch: java.lang.Exception -> L14d
            int r5 = com.mbridge.msdk.foundation.same.a.y     // Catch: java.lang.Exception -> L14d
            if (r3 != r5) goto Ld4
            int r3 = r9.as     // Catch: java.lang.Exception -> L14d
            if (r4 < r3) goto Ld4
            r9.f()     // Catch: java.lang.Exception -> L14d
            com.mbridge.msdk.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14d
            if (r0 == 0) goto Ld3
            com.mbridge.msdk.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14d
            r0.a(r1, r2)     // Catch: java.lang.Exception -> L14d
        Ld3:
            return
        Ld4:
            int r3 = r9.ar     // Catch: java.lang.Exception -> L14d
            int r4 = com.mbridge.msdk.foundation.same.a.z     // Catch: java.lang.Exception -> L14d
            if (r3 != r4) goto Lea
            int r3 = r9.as     // Catch: java.lang.Exception -> L14d
            if (r0 < r3) goto Lea
            r9.f()     // Catch: java.lang.Exception -> L14d
            com.mbridge.msdk.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14d
            if (r0 == 0) goto Lea
            com.mbridge.msdk.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14d
            r0.a(r1, r2)     // Catch: java.lang.Exception -> L14d
        Lea:
            return
        Leb:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.b     // Catch: java.lang.Exception -> L14d
            if (r0 == 0) goto L143
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.b     // Catch: java.lang.Exception -> L14d
            int r0 = r0.getAdSpaceT()     // Catch: java.lang.Exception -> L14d
            if (r0 == r3) goto L143
            int r0 = r9.k()     // Catch: java.lang.Exception -> L14d
            com.mbridge.msdk.playercommon.PlayerView r4 = r9.s     // Catch: java.lang.Exception -> L14d
            int r4 = r4.getCurPosition()     // Catch: java.lang.Exception -> L14d
            int r4 = r4 / 1000
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r9.b     // Catch: java.lang.Exception -> L14d
            int r5 = r5.getDynamicTempCode()     // Catch: java.lang.Exception -> L14d
            r6 = 5
            r7 = 0
            r8 = 1
            if (r5 != r6) goto L11b
            int r5 = r9.mCurrPlayNum     // Catch: java.lang.Exception -> L14d
            if (r5 <= r8) goto L11b
            if (r0 != 0) goto L115
            goto L122
        L115:
            if (r0 <= 0) goto L122
            if (r4 >= r0) goto L122
        L119:
            r7 = r8
            goto L122
        L11b:
            if (r0 <= 0) goto L11f
            if (r4 < r0) goto L119
        L11f:
            if (r0 != 0) goto L122
            goto L119
        L122:
            if (r7 == 0) goto L139
            int r0 = r9.R     // Catch: java.lang.Exception -> L14d
            if (r0 != r8) goto L139
            boolean r0 = r9.ai     // Catch: java.lang.Exception -> L14d
            if (r0 != 0) goto L139
            r9.f()     // Catch: java.lang.Exception -> L14d
            com.mbridge.msdk.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14d
            if (r0 == 0) goto L157
            com.mbridge.msdk.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14d
            r0.a(r1, r2)     // Catch: java.lang.Exception -> L14d
            goto L157
        L139:
            com.mbridge.msdk.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14d
            if (r0 == 0) goto L157
            com.mbridge.msdk.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14d
            r0.a(r3, r2)     // Catch: java.lang.Exception -> L14d
            goto L157
        L143:
            com.mbridge.msdk.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14d
            if (r0 == 0) goto L157
            com.mbridge.msdk.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14d
            r0.a(r3, r2)     // Catch: java.lang.Exception -> L14d
            goto L157
        L14d:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBridgeVideoView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L157:
            return
    }

    static boolean b(com.mbridge.msdk.video.module.MBridgeVideoView r0, boolean r1) {
            r0.az = r1
            return r1
    }

    static com.iab.omid.library.mmadbridge.adsession.media.MediaEvents c(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r0.ao
            return r0
    }

    static boolean c(com.mbridge.msdk.video.module.MBridgeVideoView r0, boolean r1) {
            r0.L = r1
            return r1
    }

    static boolean d(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            boolean r0 = r0.ak
            return r0
    }

    static boolean d(com.mbridge.msdk.video.module.MBridgeVideoView r0, boolean r1) {
            r0.au = r1
            return r1
    }

    private boolean e() {
            r4 = this;
            r0 = 0
            boolean r1 = r4.aA     // Catch: java.lang.Throwable -> Lef
            java.lang.String r2 = "mbridge_vfpv"
            int r1 = r4.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> Lef
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Lef
            com.mbridge.msdk.playercommon.PlayerView r1 = (com.mbridge.msdk.playercommon.PlayerView) r1     // Catch: java.lang.Throwable -> Lef
            r4.s = r1     // Catch: java.lang.Throwable -> Lef
            boolean r1 = r4.aA     // Catch: java.lang.Throwable -> Lef
            java.lang.String r2 = "mbridge_sound_switch"
            int r1 = r4.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> Lef
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Lef
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r1 = (com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView) r1     // Catch: java.lang.Throwable -> Lef
            r4.t = r1     // Catch: java.lang.Throwable -> Lef
            boolean r1 = r4.aA     // Catch: java.lang.Throwable -> Lef
            java.lang.String r2 = "mbridge_tv_count"
            int r1 = r4.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> Lef
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Lef
            android.widget.TextView r1 = (android.widget.TextView) r1     // Catch: java.lang.Throwable -> Lef
            r4.u = r1     // Catch: java.lang.Throwable -> Lef
            boolean r1 = r4.aA     // Catch: java.lang.Throwable -> Lef
            java.lang.String r2 = "mbridge_rl_playing_close"
            int r1 = r4.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> Lef
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Lef
            r4.v = r1     // Catch: java.lang.Throwable -> Lef
            r2 = 4
            if (r1 == 0) goto L45
            r1.setVisibility(r2)     // Catch: java.lang.Throwable -> Lef
        L45:
            boolean r1 = r4.aA     // Catch: java.lang.Throwable -> Lef
            java.lang.String r3 = "mbridge_top_control"
            int r1 = r4.filterFindViewId(r1, r3)     // Catch: java.lang.Throwable -> Lef
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Lef
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1     // Catch: java.lang.Throwable -> Lef
            r4.w = r1     // Catch: java.lang.Throwable -> Lef
            boolean r1 = r4.aA     // Catch: java.lang.Throwable -> Lef
            java.lang.String r3 = "mbridge_videoview_bg"
            int r1 = r4.filterFindViewId(r1, r3)     // Catch: java.lang.Throwable -> Lef
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Lef
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Throwable -> Lef
            r4.x = r1     // Catch: java.lang.Throwable -> Lef
            boolean r1 = r4.aA     // Catch: java.lang.Throwable -> Lef
            java.lang.String r3 = "mbridge_video_progress_bar"
            int r1 = r4.filterFindViewId(r1, r3)     // Catch: java.lang.Throwable -> Lef
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Lef
            android.widget.ProgressBar r1 = (android.widget.ProgressBar) r1     // Catch: java.lang.Throwable -> Lef
            r4.y = r1     // Catch: java.lang.Throwable -> Lef
            boolean r1 = r4.aA     // Catch: java.lang.Throwable -> Lef
            java.lang.String r3 = "mbridge_native_endcard_feed_btn"
            int r1 = r4.filterFindViewId(r1, r3)     // Catch: java.lang.Throwable -> Lef
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Lef
            com.mbridge.msdk.widget.FeedBackButton r1 = (com.mbridge.msdk.widget.FeedBackButton) r1     // Catch: java.lang.Throwable -> Lef
            r4.z = r1     // Catch: java.lang.Throwable -> Lef
            boolean r1 = r4.aA     // Catch: java.lang.Throwable -> Lef
            java.lang.String r3 = "mbridge_reward_segment_progressbar"
            int r1 = r4.filterFindViewId(r1, r3)     // Catch: java.lang.Throwable -> Lef
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Lef
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeSegmentsProgressBar r1 = (com.mbridge.msdk.dycreator.baseview.cusview.MBridgeSegmentsProgressBar) r1     // Catch: java.lang.Throwable -> Lef
            r4.B = r1     // Catch: java.lang.Throwable -> Lef
            boolean r1 = r4.aA     // Catch: java.lang.Throwable -> Lef
            java.lang.String r3 = "mbridge_reward_cta_layout"
            int r1 = r4.filterFindViewId(r1, r3)     // Catch: java.lang.Throwable -> Lef
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Lef
            android.widget.FrameLayout r1 = (android.widget.FrameLayout) r1     // Catch: java.lang.Throwable -> Lef
            r4.E = r1     // Catch: java.lang.Throwable -> Lef
            boolean r1 = r4.aA     // Catch: java.lang.Throwable -> Lef
            java.lang.String r3 = "mbridge_animation_click_view"
            int r1 = r4.filterFindViewId(r1, r3)     // Catch: java.lang.Throwable -> Lef
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Lef
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView r1 = (com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView) r1     // Catch: java.lang.Throwable -> Lef
            r4.aC = r1     // Catch: java.lang.Throwable -> Lef
            boolean r1 = r4.aA     // Catch: java.lang.Throwable -> Lef
            java.lang.String r3 = "mbridge_reward_moreoffer_layout"
            int r1 = r4.filterFindViewId(r1, r3)     // Catch: java.lang.Throwable -> Lef
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Lef
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1     // Catch: java.lang.Throwable -> Lef
            r4.I = r1     // Catch: java.lang.Throwable -> Lef
            boolean r1 = r4.aA     // Catch: java.lang.Throwable -> Lef
            java.lang.String r3 = "mbridge_reward_popview"
            int r1 = r4.filterFindViewId(r1, r3)     // Catch: java.lang.Throwable -> Lef
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Lef
            com.mbridge.msdk.dycreator.baseview.rewardpopview.MBAcquireRewardPopView r1 = (com.mbridge.msdk.dycreator.baseview.rewardpopview.MBAcquireRewardPopView) r1     // Catch: java.lang.Throwable -> Lef
            r4.aI = r1     // Catch: java.lang.Throwable -> Lef
            android.view.View[] r1 = new android.view.View[r2]     // Catch: java.lang.Throwable -> Lef
            com.mbridge.msdk.playercommon.PlayerView r2 = r4.s     // Catch: java.lang.Throwable -> Lef
            r1[r0] = r2     // Catch: java.lang.Throwable -> Lef
            r2 = 1
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r3 = r4.t     // Catch: java.lang.Throwable -> Lef
            r1[r2] = r3     // Catch: java.lang.Throwable -> Lef
            r2 = 2
            android.widget.TextView r3 = r4.u     // Catch: java.lang.Throwable -> Lef
            r1[r2] = r3     // Catch: java.lang.Throwable -> Lef
            r2 = 3
            android.view.View r3 = r4.v     // Catch: java.lang.Throwable -> Lef
            r1[r2] = r3     // Catch: java.lang.Throwable -> Lef
            boolean r0 = r4.isNotNULL(r1)     // Catch: java.lang.Throwable -> Lef
            return r0
        Lef:
            r1 = move-exception
            java.lang.String r2 = r1.getMessage()
            java.lang.String r3 = "MBridgeVideoView"
            com.mbridge.msdk.foundation.tools.z.c(r3, r2, r1)
            return r0
    }

    static boolean e(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            boolean r0 = r0.aw
            return r0
    }

    static boolean e(com.mbridge.msdk.video.module.MBridgeVideoView r0, boolean r1) {
            r0.ay = r1
            return r1
    }

    private void f() {
            r7 = this;
            com.mbridge.msdk.playercommon.PlayerView r0 = r7.s     // Catch: java.lang.Throwable -> L73
            if (r0 == 0) goto L7d
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b     // Catch: java.lang.Throwable -> L73
            if (r0 == 0) goto L13
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b     // Catch: java.lang.Throwable -> L73
            boolean r0 = r0.isRewardPopViewShowed     // Catch: java.lang.Throwable -> L73
            if (r0 != 0) goto L13
            java.lang.Runnable r0 = r7.aM     // Catch: java.lang.Throwable -> L73
            r7.removeCallbacks(r0)     // Catch: java.lang.Throwable -> L73
        L13:
            com.mbridge.msdk.playercommon.PlayerView r0 = r7.s     // Catch: java.lang.Throwable -> L73
            boolean r1 = r7.M     // Catch: java.lang.Throwable -> L73
            r2 = 1
            if (r1 != 0) goto L25
            boolean r1 = r7.L     // Catch: java.lang.Throwable -> L73
            if (r1 != 0) goto L25
            boolean r1 = r7.N     // Catch: java.lang.Throwable -> L73
            if (r1 == 0) goto L23
            goto L25
        L23:
            r1 = 0
            goto L26
        L25:
            r1 = r2
        L26:
            r0.setIsCovered(r1)     // Catch: java.lang.Throwable -> L73
            com.mbridge.msdk.playercommon.PlayerView r0 = r7.s     // Catch: java.lang.Throwable -> L73
            r0.onPause()     // Catch: java.lang.Throwable -> L73
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b     // Catch: java.lang.Throwable -> L73
            if (r0 == 0) goto L62
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b     // Catch: java.lang.Throwable -> L73
            com.mbridge.msdk.foundation.entity.l r0 = r0.getNativeVideoTracking()     // Catch: java.lang.Throwable -> L73
            if (r0 == 0) goto L62
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b     // Catch: java.lang.Throwable -> L73
            boolean r0 = r0.isHasReportAdTrackPause()     // Catch: java.lang.Throwable -> L73
            if (r0 != 0) goto L62
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b     // Catch: java.lang.Throwable -> L73
            r0.setHasReportAdTrackPause(r2)     // Catch: java.lang.Throwable -> L73
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L73
            android.content.Context r1 = r0.j()     // Catch: java.lang.Throwable -> L73
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r7.b     // Catch: java.lang.Throwable -> L73
            java.lang.String r3 = r7.U     // Catch: java.lang.Throwable -> L73
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b     // Catch: java.lang.Throwable -> L73
            com.mbridge.msdk.foundation.entity.l r0 = r0.getNativeVideoTracking()     // Catch: java.lang.Throwable -> L73
            java.lang.String[] r4 = r0.i()     // Catch: java.lang.Throwable -> L73
            r5 = 0
            r6 = 0
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L73
        L62:
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r7.ao     // Catch: java.lang.Throwable -> L73
            if (r0 == 0) goto L7d
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r7.ao     // Catch: java.lang.Throwable -> L73
            r0.pause()     // Catch: java.lang.Throwable -> L73
            java.lang.String r0 = "omsdk"
            java.lang.String r1 = "play:  videoEvents.pause()"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Throwable -> L73
            goto L7d
        L73:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            java.lang.String r2 = "MBridgeVideoView"
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r0)
        L7d:
            return
    }

    static void f(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            r0.b()
            return
    }

    static boolean f(com.mbridge.msdk.video.module.MBridgeVideoView r0, boolean r1) {
            r0.av = r1
            return r1
    }

    static java.lang.String g(com.mbridge.msdk.video.module.MBridgeVideoView r0, boolean r1) {
            java.lang.String r0 = r0.b(r1)
            return r0
    }

    private void g() {
            r7 = this;
            java.lang.String r0 = "MBridgeVideoView"
            boolean r1 = r7.ab     // Catch: java.lang.Exception -> Lb4
            java.lang.String r2 = "omsdk"
            if (r1 != 0) goto L69
            r1 = 2
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r3 = r7.ao     // Catch: java.lang.IllegalArgumentException -> L37 java.lang.Exception -> Lb4
            if (r3 == 0) goto L3f
            com.mbridge.msdk.playercommon.PlayerView r3 = r7.s     // Catch: java.lang.IllegalArgumentException -> L37 java.lang.Exception -> Lb4
            int r3 = r3.getDuration()     // Catch: java.lang.IllegalArgumentException -> L37 java.lang.Exception -> Lb4
            float r3 = (float) r3     // Catch: java.lang.IllegalArgumentException -> L37 java.lang.Exception -> Lb4
            r4 = 0
            int r5 = (r3 > r4 ? 1 : (r3 == r4 ? 0 : -1))
            if (r5 != 0) goto L24
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r7.b     // Catch: java.lang.IllegalArgumentException -> L37 java.lang.Exception -> Lb4
            if (r5 == 0) goto L24
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r7.b     // Catch: java.lang.IllegalArgumentException -> L37 java.lang.Exception -> Lb4
            int r3 = r3.getVideoLength()     // Catch: java.lang.IllegalArgumentException -> L37 java.lang.Exception -> Lb4
            float r3 = (float) r3     // Catch: java.lang.IllegalArgumentException -> L37 java.lang.Exception -> Lb4
        L24:
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r5 = r7.ao     // Catch: java.lang.IllegalArgumentException -> L37 java.lang.Exception -> Lb4
            int r6 = r7.getMute()     // Catch: java.lang.IllegalArgumentException -> L37 java.lang.Exception -> Lb4
            if (r6 != r1) goto L2e
            r4 = 1065353216(0x3f800000, float:1.0)
        L2e:
            r5.start(r3, r4)     // Catch: java.lang.IllegalArgumentException -> L37 java.lang.Exception -> Lb4
            java.lang.String r3 = "play: videoEvents.start()"
            com.mbridge.msdk.foundation.tools.z.a(r2, r3)     // Catch: java.lang.IllegalArgumentException -> L37 java.lang.Exception -> Lb4
            goto L3f
        L37:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Exception -> Lb4
            com.mbridge.msdk.foundation.tools.z.a(r0, r2)     // Catch: java.lang.Exception -> Lb4
        L3f:
            com.mbridge.msdk.playercommon.PlayerView r2 = r7.s     // Catch: java.lang.Exception -> Lb4
            boolean r2 = r2.playVideo()     // Catch: java.lang.Exception -> Lb4
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r7.b     // Catch: java.lang.Exception -> Lb4
            if (r3 == 0) goto L65
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r7.b     // Catch: java.lang.Exception -> Lb4
            int r3 = r3.getPlayable_ads_without_video()     // Catch: java.lang.Exception -> Lb4
            if (r3 == r1) goto L65
            if (r2 != 0) goto L65
            java.lang.String r1 = "MediaPlayer"
            java.lang.String r2 = "播放失败"
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)     // Catch: java.lang.Exception -> Lb4
            com.mbridge.msdk.video.module.MBridgeVideoView$b r1 = r7.aJ     // Catch: java.lang.Exception -> Lb4
            if (r1 == 0) goto L65
            com.mbridge.msdk.video.module.MBridgeVideoView$b r1 = r7.aJ     // Catch: java.lang.Exception -> Lb4
            java.lang.String r2 = "play video failed"
            r1.onPlayError(r2)     // Catch: java.lang.Exception -> Lb4
        L65:
            r1 = 1
            r7.ab = r1     // Catch: java.lang.Exception -> Lb4
            goto Lbc
        L69:
            com.mbridge.msdk.dycreator.baseview.rewardpopview.MBAcquireRewardPopView r1 = r7.aI     // Catch: java.lang.Exception -> Lb4
            if (r1 == 0) goto L76
            boolean r1 = r7.N     // Catch: java.lang.Exception -> Lb4
            if (r1 == 0) goto L76
            com.mbridge.msdk.dycreator.baseview.rewardpopview.MBAcquireRewardPopView r1 = r7.aI     // Catch: java.lang.Exception -> Lb4
            r1.onResume()     // Catch: java.lang.Exception -> Lb4
        L76:
            boolean r1 = r7.M     // Catch: java.lang.Exception -> Lb4
            if (r1 != 0) goto Lbc
            boolean r1 = r7.L     // Catch: java.lang.Exception -> Lb4
            if (r1 != 0) goto Lbc
            boolean r1 = r7.N     // Catch: java.lang.Exception -> Lb4
            if (r1 != 0) goto Lbc
            com.mbridge.msdk.playercommon.PlayerView r1 = r7.s     // Catch: java.lang.Exception -> Lb4
            r3 = 0
            r1.setIsCovered(r3)     // Catch: java.lang.Exception -> Lb4
            com.mbridge.msdk.playercommon.PlayerView r1 = r7.s     // Catch: java.lang.Exception -> Lb4
            r1.onResume()     // Catch: java.lang.Exception -> Lb4
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b     // Catch: java.lang.Exception -> Lb4
            if (r1 == 0) goto L9c
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b     // Catch: java.lang.Exception -> Lb4
            boolean r1 = r1.isRewardPopViewShowed     // Catch: java.lang.Exception -> Lb4
            if (r1 != 0) goto L9c
            java.lang.Runnable r1 = r7.aM     // Catch: java.lang.Exception -> Lb4
            r7.post(r1)     // Catch: java.lang.Exception -> Lb4
        L9c:
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r1 = r7.ao     // Catch: java.lang.IllegalArgumentException -> Lab java.lang.Exception -> Lb4
            if (r1 == 0) goto Lbc
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r1 = r7.ao     // Catch: java.lang.IllegalArgumentException -> Lab java.lang.Exception -> Lb4
            r1.resume()     // Catch: java.lang.IllegalArgumentException -> Lab java.lang.Exception -> Lb4
            java.lang.String r1 = "play:  videoEvents.resume()"
            com.mbridge.msdk.foundation.tools.z.a(r2, r1)     // Catch: java.lang.IllegalArgumentException -> Lab java.lang.Exception -> Lb4
            goto Lbc
        Lab:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Exception -> Lb4
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Exception -> Lb4
            goto Lbc
        Lb4:
            r1 = move-exception
            java.lang.String r2 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r2, r1)
        Lbc:
            return
    }

    static boolean g(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            boolean r0 = r0.L
            return r0
    }

    static int h(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            int r0 = r0.aq
            return r0
    }

    private void h() {
            r16 = this;
            r1 = r16
            android.content.Context r0 = r1.a
            int r0 = com.mbridge.msdk.foundation.tools.ae.h(r0)
            float r0 = (float) r0
            android.content.Context r2 = r1.a
            int r2 = com.mbridge.msdk.foundation.tools.ae.g(r2)
            float r2 = (float) r2
            android.content.Context r3 = r16.getContext()
            r4 = 1114112000(0x42680000, float:58.0)
            int r3 = com.mbridge.msdk.foundation.tools.ae.b(r3, r4)
            android.content.Context r4 = r16.getContext()
            r5 = 1120927744(0x42d00000, float:104.0)
            int r4 = com.mbridge.msdk.foundation.tools.ae.b(r4, r5)
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r1.b
            r6 = 1
            if (r5 == 0) goto L62
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r1.b
            int r5 = r5.getAdSpaceT()
            r7 = 2
            if (r5 != r7) goto L62
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r1.b
            com.mbridge.msdk.foundation.entity.CampaignEx$c r5 = r5.getRewardTemplateMode()
            int r5 = r5.c()
            if (r5 != r6) goto L46
            int r8 = r3 * 2
            float r8 = (float) r8
            float r0 = r0 - r8
            int r8 = r4 * 2
            float r8 = (float) r8
            float r2 = r2 - r8
        L46:
            if (r5 != r7) goto L50
            int r8 = r4 * 2
            float r8 = (float) r8
            float r0 = r0 - r8
            int r8 = r3 * 2
            float r8 = (float) r8
            float r2 = r2 - r8
        L50:
            if (r5 != 0) goto L62
            int r5 = r1.d
            if (r5 != r6) goto L5c
            int r3 = r3 * r7
            float r3 = (float) r3
            float r0 = r0 - r3
            int r4 = r4 * r7
            float r3 = (float) r4
            goto L61
        L5c:
            int r4 = r4 * r7
            float r4 = (float) r4
            float r0 = r0 - r4
            int r3 = r3 * r7
            float r3 = (float) r3
        L61:
            float r2 = r2 - r3
        L62:
            double r3 = r1.V
            r7 = 0
            int r5 = (r3 > r7 ? 1 : (r3 == r7 ? 0 : -1))
            if (r5 <= 0) goto L19c
            double r9 = r1.W
            int r5 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            if (r5 <= 0) goto L19c
            r5 = 0
            int r7 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r7 <= 0) goto L19c
            int r5 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r5 > 0) goto L7b
            goto L19c
        L7b:
            double r3 = r3 / r9
            float r5 = r0 / r2
            double r7 = (double) r5
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r9 = "videoWHDivide:"
            r5.append(r9)
            r5.append(r3)
            java.lang.String r9 = "  screenWHDivide:"
            r5.append(r9)
            r5.append(r7)
            java.lang.String r5 = r5.toString()
            java.lang.String r9 = "MBridgeVideoView"
            com.mbridge.msdk.foundation.tools.z.b(r9, r5)
            java.lang.Double r5 = java.lang.Double.valueOf(r3)
            double r10 = com.mbridge.msdk.foundation.tools.ae.a(r5)
            java.lang.Double r5 = java.lang.Double.valueOf(r7)
            double r7 = com.mbridge.msdk.foundation.tools.ae.a(r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r12 = "videoWHDivideFinal:"
            r5.append(r12)
            r5.append(r10)
            java.lang.String r12 = "  screenWHDivideFinal:"
            r5.append(r12)
            r5.append(r7)
            java.lang.String r5 = r5.toString()
            com.mbridge.msdk.foundation.tools.z.b(r9, r5)
            com.mbridge.msdk.playercommon.PlayerView r5 = r1.s
            android.view.ViewGroup$LayoutParams r5 = r5.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r5 = (android.widget.FrameLayout.LayoutParams) r5
            int r12 = (r10 > r7 ? 1 : (r10 == r7 ? 0 : -1))
            r13 = 17
            r14 = -1
            if (r12 <= 0) goto Le7
            double r7 = (double) r0
            double r10 = r1.W
            double r7 = r7 * r10
            double r10 = r1.V
            double r7 = r7 / r10
            r5.width = r14
            int r7 = (int) r7
            r5.height = r7
            r5.gravity = r13
            goto Lf9
        Le7:
            int r7 = (r10 > r7 ? 1 : (r10 == r7 ? 0 : -1))
            if (r7 >= 0) goto Lf5
            double r7 = (double) r2
            double r7 = r7 * r3
            int r7 = (int) r7
            r5.width = r7
            r5.height = r14
            r5.gravity = r13
            goto Lf9
        Lf5:
            r5.width = r14
            r5.height = r14
        Lf9:
            com.mbridge.msdk.foundation.entity.CampaignEx r7 = r1.b     // Catch: java.lang.Throwable -> L18b
            if (r7 == 0) goto L193
            com.mbridge.msdk.foundation.entity.CampaignEx r7 = r1.b     // Catch: java.lang.Throwable -> L18b
            boolean r7 = r7.isDynamicView()     // Catch: java.lang.Throwable -> L18b
            if (r7 == 0) goto L193
            com.mbridge.msdk.foundation.entity.CampaignEx r7 = r1.b     // Catch: java.lang.Throwable -> L18b
            com.mbridge.msdk.foundation.entity.CampaignEx$c r7 = r7.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L18b
            int r7 = r7.b()     // Catch: java.lang.Throwable -> L18b
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r1.b     // Catch: java.lang.Throwable -> L18b
            com.mbridge.msdk.foundation.entity.CampaignEx$c r8 = r8.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L18b
            int r8 = r8.c()     // Catch: java.lang.Throwable -> L18b
            r10 = 102(0x66, float:1.43E-43)
            r11 = 202(0xca, float:2.83E-43)
            if (r7 == r10) goto L121
            if (r7 != r11) goto L13c
        L121:
            if (r8 != r6) goto L132
            r5.width = r14     // Catch: java.lang.Throwable -> L18b
            r5.gravity = r13     // Catch: java.lang.Throwable -> L18b
            double r2 = r1.W     // Catch: java.lang.Throwable -> L18b
            double r12 = r1.V     // Catch: java.lang.Throwable -> L18b
            double r14 = (double) r0     // Catch: java.lang.Throwable -> L18b
            double r12 = r12 / r14
            double r2 = r2 / r12
            int r2 = (int) r2     // Catch: java.lang.Throwable -> L18b
            r5.height = r2     // Catch: java.lang.Throwable -> L18b
            goto L13c
        L132:
            r6 = r14
            r5.height = r6     // Catch: java.lang.Throwable -> L18b
            r5.gravity = r13     // Catch: java.lang.Throwable -> L18b
            double r12 = (double) r2     // Catch: java.lang.Throwable -> L18b
            double r12 = r12 * r3
            int r2 = (int) r12     // Catch: java.lang.Throwable -> L18b
            r5.width = r2     // Catch: java.lang.Throwable -> L18b
        L13c:
            if (r7 != r11) goto L153
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r1.b     // Catch: java.lang.Throwable -> L18b
            java.lang.String r2 = r2.getImageUrl()     // Catch: java.lang.Throwable -> L18b
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L18b
            if (r2 != 0) goto L153
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r1.b     // Catch: java.lang.Throwable -> L18b
            java.lang.String r2 = r2.getImageUrl()     // Catch: java.lang.Throwable -> L18b
            r1.a(r2)     // Catch: java.lang.Throwable -> L18b
        L153:
            r2 = 302(0x12e, float:4.23E-43)
            if (r7 == r2) goto L15b
            r2 = 802(0x322, float:1.124E-42)
            if (r7 != r2) goto L193
        L15b:
            double r2 = r1.V     // Catch: java.lang.Throwable -> L18b
            double r7 = r1.W     // Catch: java.lang.Throwable -> L18b
            double r2 = r2 / r7
            r7 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            int r2 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
            if (r2 <= 0) goto L174
            r2 = -1
            r5.width = r2     // Catch: java.lang.Throwable -> L18b
            double r2 = r1.W     // Catch: java.lang.Throwable -> L18b
            double r6 = (double) r0     // Catch: java.lang.Throwable -> L18b
            double r2 = r2 * r6
            double r6 = r1.V     // Catch: java.lang.Throwable -> L18b
            double r2 = r2 / r6
            int r0 = (int) r2     // Catch: java.lang.Throwable -> L18b
            r5.height = r0     // Catch: java.lang.Throwable -> L18b
            goto L193
        L174:
            android.content.Context r0 = r16.getContext()     // Catch: java.lang.Throwable -> L18b
            r2 = 1130102784(0x435c0000, float:220.0)
            int r0 = com.mbridge.msdk.foundation.tools.ae.b(r0, r2)     // Catch: java.lang.Throwable -> L18b
            double r2 = r1.V     // Catch: java.lang.Throwable -> L18b
            double r6 = (double) r0     // Catch: java.lang.Throwable -> L18b
            double r2 = r2 * r6
            double r6 = r1.W     // Catch: java.lang.Throwable -> L18b
            double r2 = r2 / r6
            int r2 = (int) r2     // Catch: java.lang.Throwable -> L18b
            r5.width = r2     // Catch: java.lang.Throwable -> L18b
            r5.height = r0     // Catch: java.lang.Throwable -> L18b
            goto L193
        L18b:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r9, r0)
        L193:
            com.mbridge.msdk.playercommon.PlayerView r0 = r1.s
            r0.setLayoutParams(r5)
            r16.setMatchParent()
            goto L19f
        L19c:
            r16.i()
        L19f:
            return
    }

    static boolean h(com.mbridge.msdk.video.module.MBridgeVideoView r0, boolean r1) {
            r0.ah = r1
            return r1
    }

    private void i() {
            r3 = this;
            r0 = 0
            r1 = -1
            r3.setLayoutParam(r0, r0, r1, r1)     // Catch: java.lang.Throwable -> L2a
            boolean r0 = r3.isLandscape()     // Catch: java.lang.Throwable -> L2a
            if (r0 != 0) goto L2e
            boolean r0 = r3.f     // Catch: java.lang.Throwable -> L2a
            if (r0 == 0) goto L2e
            com.mbridge.msdk.playercommon.PlayerView r0 = r3.s     // Catch: java.lang.Throwable -> L2a
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()     // Catch: java.lang.Throwable -> L2a
            android.widget.FrameLayout$LayoutParams r0 = (android.widget.FrameLayout.LayoutParams) r0     // Catch: java.lang.Throwable -> L2a
            android.content.Context r2 = r3.a     // Catch: java.lang.Throwable -> L2a
            int r2 = com.mbridge.msdk.foundation.tools.ae.h(r2)     // Catch: java.lang.Throwable -> L2a
            r0.width = r1     // Catch: java.lang.Throwable -> L2a
            int r2 = r2 * 9
            int r2 = r2 / 16
            r0.height = r2     // Catch: java.lang.Throwable -> L2a
            r1 = 17
            r0.gravity = r1     // Catch: java.lang.Throwable -> L2a
            goto L2e
        L2a:
            r0 = move-exception
            r0.printStackTrace()
        L2e:
            return
    }

    static void i(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            r0.g()
            return
    }

    static boolean i(com.mbridge.msdk.video.module.MBridgeVideoView r0, boolean r1) {
            r0.A = r1
            return r1
    }

    static java.lang.String j(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            java.lang.String r0 = r0.ap
            return r0
    }

    private void j() {
            r5 = this;
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            boolean r0 = r0.b()
            if (r0 == 0) goto L53
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.b
            java.lang.String r1 = r5.U
            r0.setCampaignUnitId(r1)
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r5.U
            r1.append(r2)
            java.lang.String r2 = "_"
            r1.append(r2)
            r3 = 1
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r5.b
            r0.a(r1, r4)
            com.mbridge.msdk.widget.FeedBackButton r0 = r5.z
            if (r0 == 0) goto L5c
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r4 = r5.U
            r1.append(r4)
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.widget.FeedBackButton r2 = r5.z
            r0.a(r1, r2)
            goto L5c
        L53:
            com.mbridge.msdk.widget.FeedBackButton r0 = r5.z
            if (r0 == 0) goto L5c
            r1 = 8
            r0.setVisibility(r1)
        L5c:
            return
    }

    static boolean j(com.mbridge.msdk.video.module.MBridgeVideoView r0, boolean r1) {
            r0.ax = r1
            return r1
    }

    private int k() {
            r4 = this;
            r0 = 0
            int r1 = r4.l()     // Catch: java.lang.Throwable -> L1f
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r4.b     // Catch: java.lang.Throwable -> L1f
            if (r2 != 0) goto La
            return r1
        La:
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r4.b     // Catch: java.lang.Throwable -> L1f
            int r0 = r2.getVideoCompleteTime()     // Catch: java.lang.Throwable -> L1f
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r4.b     // Catch: java.lang.Throwable -> L1f
            int r2 = r2.getDynamicTempCode()     // Catch: java.lang.Throwable -> L1f
            r3 = 5
            if (r2 == r3) goto L1c
            if (r0 <= r1) goto L1c
            r0 = r1
        L1c:
            if (r0 > 0) goto L29
            goto L2a
        L1f:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r2 = "MBridgeVideoView"
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
        L29:
            r1 = r0
        L2a:
            return r1
    }

    static java.lang.String k(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            java.lang.String r0 = r0.U
            return r0
    }

    static boolean k(com.mbridge.msdk.video.module.MBridgeVideoView r0, boolean r1) {
            r0.N = r1
            return r1
    }

    private int l() {
            r3 = this;
            r0 = 0
            com.mbridge.msdk.video.module.MBridgeVideoView$b r1 = r3.aJ     // Catch: java.lang.Throwable -> L14
            if (r1 == 0) goto Lb
            com.mbridge.msdk.video.module.MBridgeVideoView$b r1 = r3.aJ     // Catch: java.lang.Throwable -> L14
            int r0 = r1.b()     // Catch: java.lang.Throwable -> L14
        Lb:
            if (r0 != 0) goto L1e
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.b     // Catch: java.lang.Throwable -> L14
            int r0 = r1.getVideoLength()     // Catch: java.lang.Throwable -> L14
            goto L1e
        L14:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r2 = "MBridgeVideoView"
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
        L1e:
            return r0
    }

    static boolean l(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            boolean r0 = r0.ax
            return r0
    }

    static android.widget.ProgressBar m(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            android.widget.ProgressBar r0 = r0.y
            return r0
    }

    static android.widget.RelativeLayout n(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            android.widget.RelativeLayout r0 = r0.w
            return r0
    }

    static android.widget.TextView o(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            android.widget.TextView r0 = r0.u
            return r0
    }

    static void p(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            r0.j()
            return
    }

    static int q(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            int r0 = r0.H
            return r0
    }

    static void r(com.mbridge.msdk.video.module.MBridgeVideoView r7) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            if (r0 != 0) goto L6
            goto L13a
        L6:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            boolean r0 = r0.isDynamicView()
            if (r0 != 0) goto L10
            goto L13a
        L10:
            boolean r0 = r7.J
            if (r0 == 0) goto L16
            goto L13a
        L16:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            java.lang.String r0 = r0.getMof_template_url()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L29
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            java.lang.String r0 = r0.getMof_template_url()
            goto L3d
        L29:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            com.mbridge.msdk.foundation.entity.CampaignEx$c r0 = r0.getRewardTemplateMode()
            if (r0 != 0) goto L33
            goto L13a
        L33:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            com.mbridge.msdk.foundation.entity.CampaignEx$c r0 = r0.getRewardTemplateMode()
            java.lang.String r0 = r0.e()
        L3d:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L45
            goto L13a
        L45:
            java.lang.String r1 = "guideShow"
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.ak.a(r0, r1)     // Catch: java.lang.Throwable -> L130
            java.lang.String r2 = "guideDelay"
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.ak.a(r0, r2)     // Catch: java.lang.Throwable -> L130
            java.lang.String r3 = "guideTime"
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.ak.a(r0, r3)     // Catch: java.lang.Throwable -> L130
            java.lang.String r4 = "guideRewardTime"
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ak.a(r0, r4)     // Catch: java.lang.Throwable -> L130
            boolean r4 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L130
            if (r4 != 0) goto L69
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Throwable -> L130
            r7.aD = r1     // Catch: java.lang.Throwable -> L130
        L69:
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L130
            r4 = 3
            r5 = 10
            r6 = 5
            if (r1 != 0) goto L7f
            int r1 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Throwable -> L130
            r7.aE = r1     // Catch: java.lang.Throwable -> L130
            if (r1 > r5) goto L7d
            if (r1 >= r4) goto L7f
        L7d:
            r7.aE = r6     // Catch: java.lang.Throwable -> L130
        L7f:
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L130
            if (r1 != 0) goto L91
            int r1 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Throwable -> L130
            r7.aF = r1     // Catch: java.lang.Throwable -> L130
            if (r1 > r5) goto L8f
            if (r1 >= r4) goto L91
        L8f:
            r7.aF = r6     // Catch: java.lang.Throwable -> L130
        L91:
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L130
            if (r1 != 0) goto La3
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> L130
            r7.aG = r0     // Catch: java.lang.Throwable -> L130
            if (r0 > r5) goto La1
            if (r0 >= r6) goto La3
        La1:
            r7.aG = r6     // Catch: java.lang.Throwable -> L130
        La3:
            int r0 = r7.aD     // Catch: java.lang.Throwable -> L130
            if (r0 <= 0) goto L13a
            int r0 = r7.aD     // Catch: java.lang.Throwable -> L130
            r1 = 2
            if (r0 <= r1) goto Lae
            goto L13a
        Lae:
            int r0 = r7.k()     // Catch: java.lang.Throwable -> L130
            if (r0 == 0) goto Lba
            int r1 = r7.aE     // Catch: java.lang.Throwable -> L130
            if (r0 > r1) goto Lba
            goto L13a
        Lba:
            int r1 = r7.aE     // Catch: java.lang.Throwable -> L130
            int r0 = r0 - r1
            if (r0 < 0) goto Lc5
            int r1 = r7.aG     // Catch: java.lang.Throwable -> L130
            if (r1 <= r0) goto Lc5
            r7.aG = r0     // Catch: java.lang.Throwable -> L130
        Lc5:
            int r0 = r7.l()     // Catch: java.lang.Throwable -> L130
            int r1 = r7.aG     // Catch: java.lang.Throwable -> L130
            if (r1 < r0) goto Ld3
            int r1 = r7.aE     // Catch: java.lang.Throwable -> L130
            int r1 = r0 - r1
            r7.aG = r1     // Catch: java.lang.Throwable -> L130
        Ld3:
            int r1 = r7.aE     // Catch: java.lang.Throwable -> L130
            if (r1 < r0) goto Ld8
            goto L13a
        Ld8:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L130
            r0.<init>()     // Catch: java.lang.Throwable -> L130
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b     // Catch: java.lang.Throwable -> L130
            java.lang.String r1 = r1.getAppName()     // Catch: java.lang.Throwable -> L130
            r0.add(r1)     // Catch: java.lang.Throwable -> L130
            java.lang.String r1 = "US"
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L130
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L130
            java.lang.String r3 = r3.k()     // Catch: java.lang.Throwable -> L130
            com.mbridge.msdk.c.a r2 = r2.g(r3)     // Catch: java.lang.Throwable -> L130
            if (r2 == 0) goto Lfe
            java.lang.String r1 = r2.ah()     // Catch: java.lang.Throwable -> L130
        Lfe:
            com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters$Builder r2 = new com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters$Builder     // Catch: java.lang.Throwable -> L130
            java.lang.String r3 = ""
            java.lang.String r4 = r7.U     // Catch: java.lang.Throwable -> L130
            int r5 = r7.aD     // Catch: java.lang.Throwable -> L130
            r2.<init>(r3, r4, r5, r1)     // Catch: java.lang.Throwable -> L130
            int r1 = r7.aF     // Catch: java.lang.Throwable -> L130
            com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters$Builder r1 = r2.setAutoDismissTime(r1)     // Catch: java.lang.Throwable -> L130
            int r2 = r7.aG     // Catch: java.lang.Throwable -> L130
            com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters$Builder r1 = r1.setReduceTime(r2)     // Catch: java.lang.Throwable -> L130
            com.mbridge.msdk.video.module.MBridgeVideoView$4 r2 = new com.mbridge.msdk.video.module.MBridgeVideoView$4     // Catch: java.lang.Throwable -> L130
            r2.<init>(r7)     // Catch: java.lang.Throwable -> L130
            com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters$Builder r1 = r1.setBehaviourListener(r2)     // Catch: java.lang.Throwable -> L130
            com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters$Builder r0 = r1.setRightAnswerList(r0)     // Catch: java.lang.Throwable -> L130
            com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r0.build()     // Catch: java.lang.Throwable -> L130
            r7.aH = r0     // Catch: java.lang.Throwable -> L130
            java.lang.Runnable r0 = r7.aM     // Catch: java.lang.Throwable -> L130
            r1 = 1000(0x3e8, double:4.94E-321)
            r7.postDelayed(r0, r1)     // Catch: java.lang.Throwable -> L130
            goto L13a
        L130:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()
            java.lang.String r0 = "MBridgeVideoView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r7)
        L13a:
            return
    }

    static android.view.View s(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            android.view.View r0 = r0.v
            return r0
    }

    static com.mbridge.msdk.widget.FeedBackButton t(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            com.mbridge.msdk.widget.FeedBackButton r0 = r0.z
            return r0
    }

    static com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView u(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r0 = r0.t
            return r0
    }

    static com.mbridge.msdk.video.dynview.e.a v(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            com.mbridge.msdk.video.dynview.e.a r0 = r0.C
            return r0
    }

    static int w(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            int r0 = r0.D
            return r0
    }

    static boolean x(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            boolean r0 = r0.ay
            return r0
    }

    static boolean y(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            boolean r0 = r0.at
            return r0
    }

    static com.mbridge.msdk.dycreator.baseview.cusview.MBridgeSegmentsProgressBar z(com.mbridge.msdk.video.module.MBridgeVideoView r0) {
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeSegmentsProgressBar r0 = r0.B
            return r0
    }

    @Override
    public void alertWebViewShowed() {
            r1 = this;
            r0 = 1
            r1.L = r0
            r1.setShowingAlertViewCover(r0)
            return
    }

    @Override
    protected final void c() {
            r2 = this;
            super.c()
            boolean r0 = r2.f
            if (r0 == 0) goto L49
            boolean r0 = r2.i
            if (r0 == 0) goto L29
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.b
            int r0 = com.mbridge.msdk.video.dynview.i.b.a(r0)
            r1 = -1
            if (r0 == r1) goto L1e
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.b
            int r0 = com.mbridge.msdk.video.dynview.i.b.a(r0)
            r1 = 100
            if (r0 != r1) goto L33
        L1e:
            com.mbridge.msdk.playercommon.PlayerView r0 = r2.s
            com.mbridge.msdk.video.module.MBridgeVideoView$6 r1 = new com.mbridge.msdk.video.module.MBridgeVideoView$6
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            goto L33
        L29:
            com.mbridge.msdk.playercommon.PlayerView r0 = r2.s
            com.mbridge.msdk.video.module.MBridgeVideoView$7 r1 = new com.mbridge.msdk.video.module.MBridgeVideoView$7
            r1.<init>(r2)
            r0.setOnClickListener(r1)
        L33:
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r0 = r2.t
            if (r0 == 0) goto L3f
            com.mbridge.msdk.video.module.MBridgeVideoView$8 r1 = new com.mbridge.msdk.video.module.MBridgeVideoView$8
            r1.<init>(r2)
            r0.setOnClickListener(r1)
        L3f:
            android.view.View r0 = r2.v
            com.mbridge.msdk.video.module.MBridgeVideoView$9 r1 = new com.mbridge.msdk.video.module.MBridgeVideoView$9
            r1.<init>(r2)
            r0.setOnClickListener(r1)
        L49:
            return
    }

    @Override
    public void closeVideoOperate(int r2, int r3) {
            r1 = this;
            r0 = 1
            if (r2 != r0) goto Le
            r1.az = r0
            int r2 = r1.getVisibility()
            if (r2 != 0) goto Le
            r1.b()
        Le:
            if (r3 != r0) goto L14
            r1.gonePlayingCloseView()
            goto L3d
        L14:
            r2 = 2
            if (r3 != r2) goto L3d
            boolean r2 = r1.ay
            if (r2 == 0) goto L21
            int r2 = r1.getVisibility()
            if (r2 == 0) goto L3d
        L21:
            boolean r2 = r1.f
            if (r2 == 0) goto L3d
            android.view.View r2 = r1.v
            int r2 = r2.getVisibility()
            if (r2 == 0) goto L3d
            boolean r2 = r1.i
            if (r2 == 0) goto L35
            boolean r2 = r1.A
            if (r2 == 0) goto L3b
        L35:
            android.view.View r2 = r1.v
            r3 = 0
            r2.setVisibility(r3)
        L3b:
            r1.ae = r0
        L3d:
            return
    }

    @Override
    public void defaultShow() {
            r12 = this;
            super.defaultShow()
            r0 = 1
            r12.aa = r0
            android.content.Context r1 = r12.a
            int r5 = com.mbridge.msdk.foundation.tools.ae.h(r1)
            android.content.Context r1 = r12.a
            int r6 = com.mbridge.msdk.foundation.tools.ae.g(r1)
            r3 = 0
            r4 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            r10 = 0
            r11 = 0
            r2 = r12
            r2.showVideoLocation(r3, r4, r5, r6, r7, r8, r9, r10, r11)
            r12.videoOperate(r0)
            int r0 = r12.P
            if (r0 != 0) goto L29
            r0 = -1
            r1 = 2
            r12.closeVideoOperate(r0, r1)
        L29:
            return
    }

    @Override
    public void dismissAllAlert() {
            r3 = this;
            com.mbridge.msdk.widget.dialog.MBAlertDialog r0 = r3.S
            if (r0 == 0) goto L7
            r0.dismiss()
        L7:
            com.mbridge.msdk.video.module.a.a r0 = r3.e
            if (r0 == 0) goto L14
            com.mbridge.msdk.video.module.a.a r0 = r3.e
            r1 = 125(0x7d, float:1.75E-43)
            java.lang.String r2 = ""
            r0.a(r1, r2)
        L14:
            return
    }

    @Override
    public int getBorderViewHeight() {
            r1 = this;
            int r0 = com.mbridge.msdk.video.module.MBridgeVideoView.r
            return r0
    }

    @Override
    public int getBorderViewLeft() {
            r1 = this;
            int r0 = com.mbridge.msdk.video.module.MBridgeVideoView.p
            return r0
    }

    @Override
    public int getBorderViewRadius() {
            r1 = this;
            int r0 = com.mbridge.msdk.video.module.MBridgeVideoView.n
            return r0
    }

    @Override
    public int getBorderViewTop() {
            r1 = this;
            int r0 = com.mbridge.msdk.video.module.MBridgeVideoView.o
            return r0
    }

    @Override
    public int getBorderViewWidth() {
            r1 = this;
            int r0 = com.mbridge.msdk.video.module.MBridgeVideoView.q
            return r0
    }

    public int getCloseAlert() {
            r1 = this;
            int r0 = r1.R
            return r0
    }

    @Override
    public java.lang.String getCurrentProgress() {
            r5 = this;
            com.mbridge.msdk.video.module.MBridgeVideoView$b r0 = r5.aJ     // Catch: java.lang.Throwable -> L3f
            int r0 = r0.a()     // Catch: java.lang.Throwable -> L3f
            r1 = 0
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r5.b     // Catch: java.lang.Throwable -> L3f
            if (r2 == 0) goto L11
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r5.b     // Catch: java.lang.Throwable -> L3f
            int r1 = r1.getVideoLength()     // Catch: java.lang.Throwable -> L3f
        L11:
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L3f
            r2.<init>()     // Catch: java.lang.Throwable -> L3f
            java.lang.String r3 = "progress"
            java.lang.String r4 = r5.a(r0, r1)     // Catch: java.lang.Throwable -> L3f
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L3f
            java.lang.String r3 = "time"
            r2.put(r3, r0)     // Catch: java.lang.Throwable -> L3f
            java.lang.String r0 = "duration"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3f
            r3.<init>()     // Catch: java.lang.Throwable -> L3f
            r3.append(r1)     // Catch: java.lang.Throwable -> L3f
            java.lang.String r1 = ""
            r3.append(r1)     // Catch: java.lang.Throwable -> L3f
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> L3f
            r2.put(r0, r1)     // Catch: java.lang.Throwable -> L3f
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L3f
            return r0
        L3f:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            java.lang.String r2 = "MBridgeVideoView"
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r0)
            java.lang.String r0 = "{}"
            return r0
    }

    public int getMute() {
            r1 = this;
            int r0 = r1.am
            return r0
    }

    public java.lang.String getUnitId() {
            r1 = this;
            java.lang.String r0 = r1.U
            return r0
    }

    public int getVideoSkipTime() {
            r1 = this;
            int r0 = r1.P
            return r0
    }

    public void gonePlayingCloseView() {
            r4 = this;
            boolean r0 = r4.f
            if (r0 == 0) goto L16
            android.view.View r0 = r4.v
            int r0 = r0.getVisibility()
            r1 = 8
            if (r0 == r1) goto L16
            android.view.View r0 = r4.v
            r0.setVisibility(r1)
            r0 = 0
            r4.ae = r0
        L16:
            boolean r0 = r4.aK
            if (r0 != 0) goto L42
            boolean r0 = r4.ah
            if (r0 != 0) goto L42
            boolean r0 = r4.af
            if (r0 == 0) goto L23
            goto L42
        L23:
            r0 = 1
            r4.aK = r0
            int r1 = r4.P
            if (r1 >= 0) goto L2b
            goto L42
        L2b:
            if (r1 != 0) goto L30
            r4.ah = r0
            goto L42
        L30:
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            com.mbridge.msdk.video.module.MBridgeVideoView$11 r1 = new com.mbridge.msdk.video.module.MBridgeVideoView$11
            r1.<init>(r4)
            int r2 = r4.P
            int r2 = r2 * 1000
            long r2 = (long) r2
            r0.postDelayed(r1, r2)
        L42:
            return
    }

    @Override
    public void hideAlertView(int r13) {
            r12 = this;
            boolean r0 = r12.L
            if (r0 == 0) goto L8a
            r0 = 0
            r12.L = r0
            r1 = 1
            r12.at = r1
            r12.setShowingAlertViewCover(r0)
            com.mbridge.msdk.videocommon.d.b r2 = com.mbridge.msdk.videocommon.d.b.a()
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r3 = r3.k()
            java.lang.String r4 = r12.U
            r2.a(r3, r4, r0)
            java.lang.String r7 = com.mbridge.msdk.videocommon.d.c.a
            android.content.Context r5 = r12.a
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r12.b
            java.lang.String r8 = r12.U
            r9 = 1
            r11 = 1
            r10 = r13
            com.mbridge.msdk.foundation.same.report.e.a(r5, r6, r7, r8, r9, r10, r11)
            java.lang.String r0 = ""
            if (r13 != 0) goto L56
            r12.g()
            boolean r13 = r12.ak
            if (r13 == 0) goto L8a
            int r13 = r12.aq
            int r2 = com.mbridge.msdk.foundation.same.a.x
            if (r13 == r2) goto L43
            int r13 = r12.aq
            int r2 = com.mbridge.msdk.foundation.same.a.w
            if (r13 != r2) goto L8a
        L43:
            r12.au = r1
            com.mbridge.msdk.video.module.a.a r13 = r12.e
            if (r13 == 0) goto L50
            com.mbridge.msdk.video.module.a.a r13 = r12.e
            r2 = 124(0x7c, float:1.74E-43)
            r13.a(r2, r0)
        L50:
            r12.ay = r1
            r12.gonePlayingCloseView()
            goto L8a
        L56:
            r12.av = r1
            boolean r13 = r12.ak
            if (r13 == 0) goto L66
            int r13 = r12.aq
            int r1 = com.mbridge.msdk.foundation.same.a.x
            if (r13 != r1) goto L66
            r12.g()
            return
        L66:
            boolean r13 = r12.ak
            r1 = 2
            if (r13 == 0) goto L81
            int r13 = r12.aq
            int r2 = com.mbridge.msdk.foundation.same.a.w
            if (r13 != r2) goto L81
            com.mbridge.msdk.video.module.a.a r13 = r12.e
            if (r13 == 0) goto L80
            com.mbridge.msdk.video.module.a.a r13 = r12.e
            boolean r0 = r12.ax
            java.lang.String r0 = r12.b(r0)
            r13.a(r1, r0)
        L80:
            return
        L81:
            com.mbridge.msdk.video.module.a.a r13 = r12.e
            if (r13 == 0) goto L8a
            com.mbridge.msdk.video.module.a.a r13 = r12.e
            r13.a(r1, r0)
        L8a:
            return
    }

    @Override
    public void init(android.content.Context r1) {
            r0 = this;
            return
    }

    @Override
    public boolean isH5Canvas() {
            r2 = this;
            android.view.ViewGroup$LayoutParams r0 = r2.getLayoutParams()
            int r0 = r0.height
            android.content.Context r1 = r2.a
            android.content.Context r1 = r1.getApplicationContext()
            int r1 = com.mbridge.msdk.foundation.tools.ae.g(r1)
            if (r0 < r1) goto L14
            r0 = 0
            return r0
        L14:
            r0 = 1
            return r0
    }

    public boolean isInstallDialogShowing() {
            r1 = this;
            boolean r0 = r1.M
            return r0
    }

    public boolean isMiniCardShowing() {
            r1 = this;
            boolean r0 = r1.ad
            return r0
    }

    public boolean isRewardPopViewShowing() {
            r1 = this;
            boolean r0 = r1.N
            return r0
    }

    public boolean isShowingAlertView() {
            r1 = this;
            boolean r0 = r1.L
            return r0
    }

    public boolean isShowingTransparent() {
            r1 = this;
            boolean r0 = r1.ai
            return r0
    }

    public boolean isfront() {
            r7 = this;
            android.view.ViewParent r0 = r7.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r1 = 0
            if (r0 == 0) goto L2c
            int r2 = r0.indexOfChild(r7)
            int r3 = r0.getChildCount()
            r4 = 1
            int r2 = r2 + r4
            r5 = r1
        L14:
            int r6 = r3 + (-1)
            if (r2 > r6) goto L2b
            android.view.View r5 = r0.getChildAt(r2)
            int r5 = r5.getVisibility()
            if (r5 != 0) goto L27
            boolean r5 = r7.ad
            if (r5 == 0) goto L27
            goto L2c
        L27:
            int r2 = r2 + 1
            r5 = r4
            goto L14
        L2b:
            r1 = r5
        L2c:
            return r1
    }

    @Override
    public void notifyCloseBtn(int r2) {
            r1 = this;
            r0 = 1
            if (r2 != 0) goto L9
            r1.af = r0
            r2 = 0
            r1.ah = r2
            goto Ld
        L9:
            if (r2 != r0) goto Ld
            r1.ag = r0
        Ld:
            return
    }

    public void notifyVideoClose() {
            r3 = this;
            com.mbridge.msdk.video.module.a.a r0 = r3.e
            r1 = 2
            java.lang.String r2 = ""
            r0.a(r1, r2)
            return
    }

    public void onActivityPause() {
            r2 = this;
            com.mbridge.msdk.dycreator.baseview.rewardpopview.MBAcquireRewardPopView r0 = r2.aI     // Catch: java.lang.Throwable -> La
            if (r0 == 0) goto L14
            com.mbridge.msdk.dycreator.baseview.rewardpopview.MBAcquireRewardPopView r0 = r2.aI     // Catch: java.lang.Throwable -> La
            r0.onPause()     // Catch: java.lang.Throwable -> La
            goto L14
        La:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBridgeVideoView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L14:
            return
    }

    public void onActivityResume() {
            r2 = this;
            com.mbridge.msdk.dycreator.baseview.rewardpopview.MBAcquireRewardPopView r0 = r2.aI     // Catch: java.lang.Throwable -> La
            if (r0 == 0) goto L14
            com.mbridge.msdk.dycreator.baseview.rewardpopview.MBAcquireRewardPopView r0 = r2.aI     // Catch: java.lang.Throwable -> La
            r0.onResume()     // Catch: java.lang.Throwable -> La
            goto L14
        La:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBridgeVideoView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L14:
            return
    }

    public void onActivityStop() {
            r2 = this;
            com.mbridge.msdk.dycreator.baseview.rewardpopview.MBAcquireRewardPopView r0 = r2.aI     // Catch: java.lang.Throwable -> La
            if (r0 == 0) goto L14
            com.mbridge.msdk.dycreator.baseview.rewardpopview.MBAcquireRewardPopView r0 = r2.aI     // Catch: java.lang.Throwable -> La
            r0.onStop()     // Catch: java.lang.Throwable -> La
            goto L14
        La:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBridgeVideoView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L14:
            return
    }

    public void onBackPress() {
            r1 = this;
            boolean r0 = r1.ad
            if (r0 != 0) goto L2d
            boolean r0 = r1.L
            if (r0 == 0) goto L9
            goto L2d
        L9:
            boolean r0 = r1.au
            if (r0 == 0) goto Le
            return
        Le:
            boolean r0 = r1.ae
            if (r0 == 0) goto L16
            r1.b()
            return
        L16:
            boolean r0 = r1.af
            if (r0 == 0) goto L22
            boolean r0 = r1.ag
            if (r0 == 0) goto L22
            r1.b()
            return
        L22:
            boolean r0 = r1.af
            if (r0 != 0) goto L2d
            boolean r0 = r1.ah
            if (r0 == 0) goto L2d
            r1.b()
        L2d:
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            super.onConfigurationChanged(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r0.b
            if (r1 == 0) goto L10
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r0.b
            boolean r1 = r1.isDynamicView()
            if (r1 == 0) goto L10
            return
        L10:
            boolean r1 = r0.f
            if (r1 == 0) goto L1b
            boolean r1 = r0.aa
            if (r1 == 0) goto L1b
            r0.h()
        L1b:
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r2 = this;
            super.onDetachedFromWindow()
            java.lang.Runnable r0 = r2.aL     // Catch: java.lang.Throwable -> L1a
            if (r0 == 0) goto L10
            android.os.Handler r0 = r2.getHandler()     // Catch: java.lang.Throwable -> L1a
            java.lang.Runnable r1 = r2.aL     // Catch: java.lang.Throwable -> L1a
            r0.removeCallbacks(r1)     // Catch: java.lang.Throwable -> L1a
        L10:
            int r0 = r2.aD     // Catch: java.lang.Throwable -> L1a
            if (r0 == 0) goto L24
            java.lang.Runnable r0 = r2.aM     // Catch: java.lang.Throwable -> L1a
            r2.removeCallbacks(r0)     // Catch: java.lang.Throwable -> L1a
            goto L24
        L1a:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBridgeVideoView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L24:
            return
    }

    public void preLoadData(com.mbridge.msdk.video.js.factory.b r10) {
            r9 = this;
            r9.G = r10
            boolean r10 = r9.f
            r0 = 0
            if (r10 == 0) goto Lf2
            java.lang.String r10 = r9.O
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            if (r10 != 0) goto Lff
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = r9.b
            if (r10 == 0) goto Lff
            com.iab.omid.library.mmadbridge.adsession.AdSession r10 = r9.an
            r1 = 0
            if (r10 == 0) goto L41
            com.mbridge.msdk.playercommon.PlayerView r2 = r9.s
            r10.registerAdView(r2)
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r10 = r9.t
            if (r10 == 0) goto L28
            com.iab.omid.library.mmadbridge.adsession.AdSession r2 = r9.an
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r3 = com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.OTHER
            r2.addFriendlyObstruction(r10, r3, r1)
        L28:
            com.iab.omid.library.mmadbridge.adsession.AdSession r10 = r9.an
            android.widget.TextView r2 = r9.u
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r3 = com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.OTHER
            r10.addFriendlyObstruction(r2, r3, r1)
            com.iab.omid.library.mmadbridge.adsession.AdSession r10 = r9.an
            android.view.View r2 = r9.v
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r3 = com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.CLOSE_AD
            r10.addFriendlyObstruction(r2, r3, r1)
            java.lang.String r10 = "OMSDK"
            java.lang.String r2 = "RV registerView"
            com.mbridge.msdk.foundation.tools.z.a(r10, r2)
        L41:
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = r9.b
            if (r10 == 0) goto Ld5
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = r9.b
            java.lang.String r10 = r10.getVideoResolution()
            boolean r10 = com.mbridge.msdk.foundation.tools.ai.b(r10)
            if (r10 == 0) goto Ld5
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = r9.b
            java.lang.String r10 = r10.getVideoResolution()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "MBridgeBaseView videoResolution:"
            r2.append(r3)
            r2.append(r10)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "MBridgeVideoView"
            com.mbridge.msdk.foundation.tools.z.b(r3, r2)
            java.lang.String r2 = "x"
            java.lang.String[] r10 = r10.split(r2)
            int r2 = r10.length
            r4 = 2
            r5 = 0
            if (r2 != r4) goto Lbe
            r2 = r10[r0]
            double r7 = com.mbridge.msdk.foundation.tools.ae.b(r2)
            int r2 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r2 <= 0) goto L8b
            r2 = r10[r0]
            double r7 = com.mbridge.msdk.foundation.tools.ae.b(r2)
            r9.V = r7
        L8b:
            r2 = 1
            r4 = r10[r2]
            double r7 = com.mbridge.msdk.foundation.tools.ae.b(r4)
            int r4 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r4 <= 0) goto L9e
            r10 = r10[r2]
            double r7 = com.mbridge.msdk.foundation.tools.ae.b(r10)
            r9.W = r7
        L9e:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r2 = "MBridgeBaseView mVideoW:"
            r10.append(r2)
            double r7 = r9.V
            r10.append(r7)
            java.lang.String r2 = "  mVideoH:"
            r10.append(r2)
            double r7 = r9.W
            r10.append(r7)
            java.lang.String r10 = r10.toString()
            com.mbridge.msdk.foundation.tools.z.b(r3, r10)
        Lbe:
            double r2 = r9.V
            int r10 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r10 > 0) goto Lc8
            r2 = 4653344314980564992(0x4094000000000000, double:1280.0)
            r9.V = r2
        Lc8:
            double r2 = r9.W
            int r10 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r10 > 0) goto Ld5
            r2 = 4649544402794971136(0x4086800000000000, double:720.0)
            r9.W = r2
        Ld5:
            com.mbridge.msdk.playercommon.PlayerView r10 = r9.s
            int r2 = r9.Q
            r10.initBufferIngParam(r2)
            com.mbridge.msdk.playercommon.PlayerView r10 = r9.s
            java.lang.String r2 = r9.O
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r9.b
            java.lang.String r3 = r3.getVideoUrlEncode()
            com.mbridge.msdk.video.module.MBridgeVideoView$b r4 = r9.aJ
            r10.initVFPData(r2, r3, r4)
            int r10 = r9.am
            r2 = -1
            r9.soundOperate(r10, r2, r1)
            goto Lff
        Lf2:
            com.mbridge.msdk.video.module.a.a r10 = r9.e
            if (r10 == 0) goto Lff
            com.mbridge.msdk.video.module.a.a r10 = r9.e
            r1 = 12
            java.lang.String r2 = "MBridgeVideoView initSuccess false"
            r10.a(r1, r2)
        Lff:
            com.mbridge.msdk.video.module.MBridgeVideoView.al = r0
            return
    }

    @Override
    public void progressBarOperate(int r2) {
            r1 = this;
            boolean r0 = r1.f
            if (r0 == 0) goto L1c
            r0 = 1
            if (r2 != r0) goto L11
            android.widget.ProgressBar r2 = r1.y
            if (r2 == 0) goto L1c
            r0 = 8
            r2.setVisibility(r0)
            goto L1c
        L11:
            r0 = 2
            if (r2 != r0) goto L1c
            android.widget.ProgressBar r2 = r1.y
            if (r2 == 0) goto L1c
            r0 = 0
            r2.setVisibility(r0)
        L1c:
            return
    }

    @Override
    public void progressOperate(int r5, int r6) {
            r4 = this;
            boolean r0 = r4.f
            if (r0 == 0) goto L66
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "progressOperate progress:"
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "MBridgeVideoView"
            com.mbridge.msdk.foundation.tools.z.b(r2, r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.b
            r3 = 0
            if (r0 == 0) goto L26
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.b
            int r0 = r0.getVideoLength()
            goto L27
        L26:
            r0 = r3
        L27:
            if (r5 <= 0) goto L48
            if (r5 > r0) goto L48
            com.mbridge.msdk.playercommon.PlayerView r0 = r4.s
            if (r0 == 0) goto L48
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.foundation.tools.z.b(r2, r0)
            com.mbridge.msdk.playercommon.PlayerView r0 = r4.s
            int r5 = r5 * 1000
            r0.seekTo(r5)
        L48:
            r5 = 1
            if (r6 != r5) goto L53
            android.widget.TextView r5 = r4.u
            r6 = 8
            r5.setVisibility(r6)
            goto L5b
        L53:
            r5 = 2
            if (r6 != r5) goto L5b
            android.widget.TextView r5 = r4.u
            r5.setVisibility(r3)
        L5b:
            android.widget.TextView r5 = r4.u
            int r5 = r5.getVisibility()
            if (r5 != 0) goto L66
            r4.j()
        L66:
            return
    }

    public void releasePlayer() {
            r2 = this;
            com.mbridge.msdk.playercommon.PlayerView r0 = r2.s     // Catch: java.lang.Exception -> L1e
            if (r0 == 0) goto Ld
            boolean r0 = r2.ac     // Catch: java.lang.Exception -> L1e
            if (r0 != 0) goto Ld
            com.mbridge.msdk.playercommon.PlayerView r0 = r2.s     // Catch: java.lang.Exception -> L1e
            r0.release()     // Catch: java.lang.Exception -> L1e
        Ld:
            com.mbridge.msdk.video.module.MBridgeVideoView$b r0 = r2.aJ     // Catch: java.lang.Exception -> L1e
            if (r0 == 0) goto L16
            com.mbridge.msdk.video.module.MBridgeVideoView$b r0 = r2.aJ     // Catch: java.lang.Exception -> L1e
            r0.c()     // Catch: java.lang.Exception -> L1e
        L16:
            com.mbridge.msdk.video.module.a.a r0 = r2.K     // Catch: java.lang.Exception -> L1e
            if (r0 == 0) goto L28
            r0 = 0
            r2.K = r0     // Catch: java.lang.Exception -> L1e
            goto L28
        L1e:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBridgeVideoView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L28:
            return
    }

    public void setAdSession(com.iab.omid.library.mmadbridge.adsession.AdSession r1) {
            r0 = this;
            r0.an = r1
            return
    }

    public void setBufferTimeout(int r1) {
            r0 = this;
            r0.Q = r1
            return
    }

    public void setCTALayoutVisibleOrGone() {
            r4 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.b
            if (r0 != 0) goto L5
            return
        L5:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.b
            boolean r0 = r0.isDynamicView()
            if (r0 != 0) goto Le
            return
        Le:
            android.widget.FrameLayout r0 = r4.E
            if (r0 != 0) goto L13
            return
        L13:
            int r1 = r4.H
            r2 = -1
            if (r1 >= r2) goto L19
            return
        L19:
            com.mbridge.msdk.video.module.MBridgeClickCTAView r1 = r4.F
            if (r1 != 0) goto L55
            if (r0 != 0) goto L20
            goto L55
        L20:
            if (r1 != 0) goto L4e
            com.mbridge.msdk.video.module.MBridgeClickCTAView r0 = new com.mbridge.msdk.video.module.MBridgeClickCTAView
            android.content.Context r1 = r4.getContext()
            r0.<init>(r1)
            r4.F = r0
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.b
            r0.setCampaign(r1)
            com.mbridge.msdk.video.module.MBridgeClickCTAView r0 = r4.F
            java.lang.String r1 = r4.U
            r0.setUnitId(r1)
            com.mbridge.msdk.video.module.a.a r0 = r4.K
            if (r0 == 0) goto L47
            com.mbridge.msdk.video.module.MBridgeClickCTAView r1 = r4.F
            com.mbridge.msdk.video.module.a.a.h r3 = new com.mbridge.msdk.video.module.a.a.h
            r3.<init>(r0)
            r1.setNotifyListener(r3)
        L47:
            com.mbridge.msdk.video.module.MBridgeClickCTAView r0 = r4.F
            com.mbridge.msdk.video.js.factory.b r1 = r4.G
            r0.preLoadData(r1)
        L4e:
            android.widget.FrameLayout r0 = r4.E
            com.mbridge.msdk.video.module.MBridgeClickCTAView r1 = r4.F
            r0.addView(r1)
        L55:
            int r0 = r4.H
            r1 = 0
            if (r0 < 0) goto L60
            android.widget.FrameLayout r0 = r4.E
            r0.setVisibility(r1)
            return
        L60:
            if (r0 != r2) goto L87
            android.widget.FrameLayout r0 = r4.E
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L77
            android.widget.FrameLayout r0 = r4.E
            r0.setVisibility(r1)
            java.lang.Runnable r0 = r4.aL
            r1 = 3000(0xbb8, double:1.482E-320)
            r4.postDelayed(r0, r1)
            goto L87
        L77:
            android.widget.FrameLayout r0 = r4.E
            r1 = 8
            r0.setVisibility(r1)
            android.os.Handler r0 = r4.getHandler()
            java.lang.Runnable r1 = r4.aL
            r0.removeCallbacks(r1)
        L87:
            return
    }

    public void setCamPlayOrderCallback(com.mbridge.msdk.video.dynview.e.a r2, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3, int r4, int r5) {
            r1 = this;
            r1.C = r2
            int r2 = r3.size()
            r1.mCampaignSize = r2
            r1.mCurrPlayNum = r4
            r1.D = r5
            r1.mCampOrderViewData = r3
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r1.b
            if (r2 != 0) goto L13
            return
        L13:
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r1.b
            int r2 = r2.getDynamicTempCode()
            r3 = 5
            if (r2 != r3) goto L68
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeSegmentsProgressBar r2 = r1.B
            if (r2 == 0) goto L68
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r1.mCampOrderViewData
            if (r3 != 0) goto L25
            goto L68
        L25:
            int r3 = r1.mCampaignSize
            r4 = 1
            if (r3 <= r4) goto L62
            r3 = 0
            r2.setVisibility(r3)
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeSegmentsProgressBar r2 = r1.B
            int r5 = r1.mCampaignSize
            r0 = 2
            r2.init(r5, r0)
        L36:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r1.mCampOrderViewData
            int r2 = r2.size()
            if (r3 >= r2) goto L68
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r1.mCampOrderViewData
            java.lang.Object r2 = r2.get(r3)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2
            int r2 = r2.getVideoPlayProgress()
            if (r2 <= 0) goto L51
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeSegmentsProgressBar r5 = r1.B
            r5.setProgress(r2, r3)
        L51:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r1.mCampOrderViewData
            java.lang.Object r2 = r2.get(r3)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2
            boolean r2 = r2.isRewardPopViewShowed
            if (r2 == 0) goto L5f
            r1.J = r4
        L5f:
            int r3 = r3 + 1
            goto L36
        L62:
            r3 = 8
            r2.setVisibility(r3)
        L68:
            return
    }

    @Override
    public void setCampaign(com.mbridge.msdk.foundation.entity.CampaignEx r6) {
            r5 = this;
            super.setCampaign(r6)
            com.mbridge.msdk.video.module.MBridgeVideoView$b r0 = r5.aJ
            if (r0 == 0) goto L61
            r0.a(r6)
            com.mbridge.msdk.video.module.MBridgeVideoView$b r0 = r5.aJ
            r1 = 0
            if (r6 == 0) goto L32
            int r2 = r6.getReady_rate()
            r3 = -1
            if (r2 == r3) goto L1b
            int r6 = r6.getReady_rate()
            goto L48
        L1b:
            com.mbridge.msdk.videocommon.d.b r6 = com.mbridge.msdk.videocommon.d.b.a()
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r2 = r2.k()
            java.lang.String r3 = r5.U
            com.mbridge.msdk.videocommon.d.c r6 = r6.a(r2, r3, r1)
            int r6 = r6.r()
            goto L48
        L32:
            com.mbridge.msdk.videocommon.d.b r6 = com.mbridge.msdk.videocommon.d.b.a()
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r2 = r2.k()
            java.lang.String r3 = r5.U
            com.mbridge.msdk.videocommon.d.c r6 = r6.a(r2, r3, r1)
            int r6 = r6.r()
        L48:
            com.mbridge.msdk.videocommon.d.b r2 = com.mbridge.msdk.videocommon.d.b.a()
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r3 = r3.k()
            java.lang.String r4 = r5.U
            com.mbridge.msdk.videocommon.d.c r1 = r2.a(r3, r4, r1)
            int r1 = r1.s()
            r0.a(r6, r1)
        L61:
            return
    }

    public void setCloseAlert(int r1) {
            r0 = this;
            r0.R = r1
            return
    }

    public void setContainerViewOnNotifyListener(com.mbridge.msdk.video.module.a.a r1) {
            r0 = this;
            r0.K = r1
            return
    }

    @Override
    public void setCover(boolean r2) {
            r1 = this;
            boolean r0 = r1.f
            if (r0 == 0) goto L9
            com.mbridge.msdk.playercommon.PlayerView r0 = r1.s
            r0.setIsCovered(r2)
        L9:
            return
    }

    public void setDialogRole(int r2) {
            r1 = this;
            r0 = 1
            if (r2 != r0) goto L4
            goto L5
        L4:
            r0 = 0
        L5:
            r1.aw = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " "
            r0.append(r2)
            boolean r2 = r1.aw
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "MBridgeVideoView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
            return
    }

    public void setIVRewardEnable(int r1, int r2, int r3) {
            r0 = this;
            r0.aq = r1
            r0.ar = r2
            r0.as = r3
            return
    }

    @Override
    public void setInstallDialogState(boolean r2) {
            r1 = this;
            r1.M = r2
            com.mbridge.msdk.playercommon.PlayerView r0 = r1.s
            r0.setIsCovered(r2)
            return
    }

    public void setIsIV(boolean r2) {
            r1 = this;
            r1.ak = r2
            com.mbridge.msdk.video.module.MBridgeVideoView$b r0 = r1.aJ
            if (r0 == 0) goto L9
            r0.a(r2)
        L9:
            return
    }

    @Override
    public void setMiniEndCardState(boolean r1) {
            r0 = this;
            r0.ad = r1
            return
    }

    public void setNotchPadding(int r10, int r11, int r12, int r13) {
            r9 = this;
            java.lang.String r0 = "MBridgeVideoView"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L88
            r1.<init>()     // Catch: java.lang.Exception -> L88
            java.lang.String r2 = "NOTCH VideoView "
            r1.append(r2)     // Catch: java.lang.Exception -> L88
            java.lang.String r2 = "%1s-%2s-%3s-%4s"
            r3 = 4
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L88
            java.lang.Integer r4 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Exception -> L88
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Exception -> L88
            java.lang.Integer r4 = java.lang.Integer.valueOf(r11)     // Catch: java.lang.Exception -> L88
            r6 = 1
            r3[r6] = r4     // Catch: java.lang.Exception -> L88
            r4 = 2
            java.lang.Integer r7 = java.lang.Integer.valueOf(r12)     // Catch: java.lang.Exception -> L88
            r3[r4] = r7     // Catch: java.lang.Exception -> L88
            r4 = 3
            java.lang.Integer r7 = java.lang.Integer.valueOf(r13)     // Catch: java.lang.Exception -> L88
            r3[r4] = r7     // Catch: java.lang.Exception -> L88
            java.lang.String r2 = java.lang.String.format(r2, r3)     // Catch: java.lang.Exception -> L88
            r1.append(r2)     // Catch: java.lang.Exception -> L88
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L88
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Exception -> L88
            android.view.ViewGroup$LayoutParams r1 = r9.getLayoutParams()     // Catch: java.lang.Exception -> L88
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1     // Catch: java.lang.Exception -> L88
            int r2 = r1.leftMargin     // Catch: java.lang.Exception -> L88
            int r3 = r1.rightMargin     // Catch: java.lang.Exception -> L88
            int r4 = r1.topMargin     // Catch: java.lang.Exception -> L88
            int r1 = r1.bottomMargin     // Catch: java.lang.Exception -> L88
            int r7 = java.lang.Math.max(r10, r11)     // Catch: java.lang.Exception -> L88
            int r8 = java.lang.Math.max(r12, r13)     // Catch: java.lang.Exception -> L88
            int r7 = java.lang.Math.max(r7, r8)     // Catch: java.lang.Exception -> L88
            int r2 = java.lang.Math.max(r2, r3)     // Catch: java.lang.Exception -> L88
            int r1 = java.lang.Math.max(r4, r1)     // Catch: java.lang.Exception -> L88
            int r1 = java.lang.Math.max(r2, r1)     // Catch: java.lang.Exception -> L88
            if (r1 <= r7) goto L64
            r5 = r6
        L64:
            if (r5 != 0) goto L7c
            android.widget.RelativeLayout r1 = r9.w     // Catch: java.lang.Exception -> L88
            if (r1 == 0) goto L7c
            android.widget.RelativeLayout r1 = r9.w     // Catch: java.lang.Exception -> L88
            com.mbridge.msdk.video.module.MBridgeVideoView$12 r8 = new com.mbridge.msdk.video.module.MBridgeVideoView$12     // Catch: java.lang.Exception -> L88
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r12
            r6 = r11
            r7 = r13
            r2.<init>(r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L88
            r10 = 200(0xc8, double:9.9E-322)
            r1.postDelayed(r8, r10)     // Catch: java.lang.Exception -> L88
        L7c:
            android.widget.TextView r10 = r9.u     // Catch: java.lang.Exception -> L88
            int r10 = r10.getVisibility()     // Catch: java.lang.Exception -> L88
            if (r10 != 0) goto L90
            r9.j()     // Catch: java.lang.Exception -> L88
            goto L90
        L88:
            r10 = move-exception
            java.lang.String r10 = r10.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r10)
        L90:
            return
    }

    public void setPlayURL(java.lang.String r1) {
            r0 = this;
            r0.O = r1
            return
    }

    @Override
    public void setScaleFitXY(int r1) {
            r0 = this;
            r0.aj = r1
            return
    }

    public void setShowingAlertViewCover(boolean r3) {
            r2 = this;
            if (r3 == 0) goto L11
            com.mbridge.msdk.dycreator.baseview.rewardpopview.MBAcquireRewardPopView r0 = r2.aI
            if (r0 == 0) goto L11
            boolean r1 = r2.N
            if (r1 == 0) goto L11
            boolean r1 = r2.L
            if (r1 == 0) goto L11
            r0.onPause()
        L11:
            com.mbridge.msdk.playercommon.PlayerView r0 = r2.s
            r0.setIsCovered(r3)
            return
    }

    public void setShowingTransparent(boolean r1) {
            r0 = this;
            r0.ai = r1
            return
    }

    public void setSoundState(int r1) {
            r0 = this;
            r0.am = r1
            return
    }

    public void setUnitId(java.lang.String r2) {
            r1 = this;
            r1.U = r2
            com.mbridge.msdk.video.module.MBridgeVideoView$b r0 = r1.aJ
            if (r0 == 0) goto L9
            r0.a(r2)
        L9:
            return
    }

    public void setVideoEvents(com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r2) {
            r1 = this;
            r1.ao = r2
            com.mbridge.msdk.video.module.MBridgeVideoView$b r0 = r1.aJ
            if (r0 == 0) goto L9
            com.mbridge.msdk.video.module.MBridgeVideoView.b.a(r0, r2)
        L9:
            return
    }

    public void setVideoLayout(com.mbridge.msdk.foundation.entity.CampaignEx r3) {
            r2 = this;
            if (r3 == 0) goto La
            r2.b = r3
            boolean r0 = r3.isDynamicView()
            r2.i = r0
        La:
            boolean r0 = r2.i
            if (r0 == 0) goto L24
            com.mbridge.msdk.video.dynview.j.c r0 = new com.mbridge.msdk.video.dynview.j.c
            r0.<init>()
            com.mbridge.msdk.video.dynview.c r3 = r0.a(r2, r3)
            com.mbridge.msdk.video.dynview.b r0 = com.mbridge.msdk.video.dynview.b.a()
            com.mbridge.msdk.video.module.MBridgeVideoView$1 r1 = new com.mbridge.msdk.video.module.MBridgeVideoView$1
            r1.<init>(r2, r2, r3)
            r0.a(r3, r1)
            goto L37
        L24:
            java.lang.String r3 = "mbridge_reward_videoview_item"
            int r3 = r2.findLayout(r3)
            if (r3 <= 0) goto L34
            android.view.LayoutInflater r0 = r2.c
            r0.inflate(r3, r2)
            r2.a()
        L34:
            r3 = 0
            com.mbridge.msdk.video.module.MBridgeVideoView.al = r3
        L37:
            return
    }

    public void setVideoSkipTime(int r1) {
            r0 = this;
            r0.P = r1
            return
    }

    @Override
    public void setVisible(int r1) {
            r0 = this;
            r0.setVisibility(r1)
            return
    }

    @Override
    public void showAlertView() {
            r7 = this;
            boolean r0 = r7.ad
            if (r0 == 0) goto L5
            return
        L5:
            com.mbridge.msdk.widget.dialog.a r0 = r7.T
            if (r0 != 0) goto L10
            com.mbridge.msdk.video.module.MBridgeVideoView$10 r0 = new com.mbridge.msdk.video.module.MBridgeVideoView$10
            r0.<init>(r7)
            r7.T = r0
        L10:
            com.mbridge.msdk.widget.dialog.MBAlertDialog r0 = r7.S
            if (r0 != 0) goto L33
            com.mbridge.msdk.widget.dialog.MBAlertDialog r0 = new com.mbridge.msdk.widget.dialog.MBAlertDialog
            android.content.Context r1 = r7.getContext()
            com.mbridge.msdk.widget.dialog.a r2 = r7.T
            r0.<init>(r1, r2)
            r7.S = r0
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r7.an
            if (r1 == 0) goto L33
            android.view.Window r0 = r0.getWindow()
            android.view.View r0 = r0.getDecorView()
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r2 = com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.NOT_VISIBLE
            r3 = 0
            r1.addFriendlyObstruction(r0, r2, r3)
        L33:
            boolean r0 = r7.ak
            if (r0 == 0) goto L41
            com.mbridge.msdk.widget.dialog.MBAlertDialog r0 = r7.S
            int r1 = r7.aq
            java.lang.String r2 = r7.U
            r0.makeIVAlertView(r1, r2)
            goto L48
        L41:
            com.mbridge.msdk.widget.dialog.MBAlertDialog r0 = r7.S
            java.lang.String r1 = r7.U
            r0.makeRVAlertView(r1)
        L48:
            com.mbridge.msdk.playercommon.PlayerView r0 = r7.s
            if (r0 == 0) goto L82
            boolean r0 = r0.isComplete()
            if (r0 != 0) goto L82
            com.mbridge.msdk.widget.dialog.MBAlertDialog r0 = r7.S
            r0.show()
            r0 = 1
            r7.at = r0
            r7.L = r0
            r7.setShowingAlertViewCover(r0)
            com.mbridge.msdk.videocommon.d.b r0 = com.mbridge.msdk.videocommon.d.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            java.lang.String r2 = r7.U
            r3 = 0
            r0.a(r1, r2, r3)
            java.lang.String r0 = com.mbridge.msdk.videocommon.d.c.a
            r7.ap = r0
            android.content.Context r1 = r7.a
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r7.b
            java.lang.String r3 = r7.ap
            java.lang.String r4 = r7.U
            r5 = 1
            r6 = 1
            com.mbridge.msdk.foundation.same.report.e.a(r1, r2, r3, r4, r5, r6)
        L82:
            return
    }

    public void showBaitClickView() {
            r3 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b
            if (r0 != 0) goto L5
            return
        L5:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b
            boolean r0 = r0.isDynamicView()
            if (r0 != 0) goto Le
            return
        Le:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b
            com.mbridge.msdk.foundation.entity.CampaignEx$c r0 = r0.getRewardTemplateMode()
            if (r0 != 0) goto L17
            return
        L17:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b
            com.mbridge.msdk.foundation.entity.CampaignEx$c r0 = r0.getRewardTemplateMode()
            java.lang.String r0 = r0.e()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L28
            return
        L28:
            java.lang.String r1 = "bait_click"
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ak.a(r0, r1)     // Catch: java.lang.Exception -> L59
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L59
            if (r1 != 0) goto L63
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L59
            if (r0 == 0) goto L63
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView r1 = r3.aC     // Catch: java.lang.Exception -> L59
            if (r1 == 0) goto L63
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView r1 = r3.aC     // Catch: java.lang.Exception -> L59
            r2 = 0
            r1.setVisibility(r2)     // Catch: java.lang.Exception -> L59
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView r1 = r3.aC     // Catch: java.lang.Exception -> L59
            r1.init(r0)     // Catch: java.lang.Exception -> L59
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView r0 = r3.aC     // Catch: java.lang.Exception -> L59
            r0.startAnimation()     // Catch: java.lang.Exception -> L59
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView r0 = r3.aC     // Catch: java.lang.Exception -> L59
            com.mbridge.msdk.video.module.MBridgeVideoView$3 r1 = new com.mbridge.msdk.video.module.MBridgeVideoView$3     // Catch: java.lang.Exception -> L59
            r1.<init>(r3)     // Catch: java.lang.Exception -> L59
            r0.setOnClickListener(r1)     // Catch: java.lang.Exception -> L59
            goto L63
        L59:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBridgeVideoView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L63:
            return
    }

    @Override
    public void showIVRewardAlertView(java.lang.String r3) {
            r2 = this;
            com.mbridge.msdk.video.module.a.a r3 = r2.e
            r0 = 8
            java.lang.String r1 = ""
            r3.a(r0, r1)
            return
    }

    public void showMoreOfferInPlayTemplate() {
            r5 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.b
            if (r0 == 0) goto L5a
            android.widget.RelativeLayout r0 = r5.I
            if (r0 != 0) goto L9
            goto L5a
        L9:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.b
            boolean r0 = r0.isDynamicView()
            if (r0 != 0) goto L12
            return
        L12:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.b
            com.mbridge.msdk.foundation.entity.CampaignEx$c r0 = r0.getRewardTemplateMode()
            if (r0 != 0) goto L1b
            return
        L1b:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.b
            com.mbridge.msdk.foundation.entity.CampaignEx$c r0 = r0.getRewardTemplateMode()
            java.lang.String r0 = r0.e()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L2c
            return
        L2c:
            java.lang.String r1 = "mof"
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ak.a(r0, r1)     // Catch: java.lang.Exception -> L50
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L50
            if (r1 != 0) goto L5a
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L50
            r1 = 1
            if (r0 != r1) goto L5a
            com.mbridge.msdk.video.dynview.moffer.a r0 = com.mbridge.msdk.video.dynview.moffer.a.a()     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r5.b     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.video.module.a.a.h r3 = new com.mbridge.msdk.video.module.a.a.h     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.video.module.a.a r4 = r5.K     // Catch: java.lang.Exception -> L50
            r3.<init>(r4)     // Catch: java.lang.Exception -> L50
            r0.a(r2, r5, r3, r1)     // Catch: java.lang.Exception -> L50
            goto L5a
        L50:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBridgeVideoView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L5a:
            return
    }

    public void showRewardPopView() {
            r2 = this;
            com.mbridge.msdk.dycreator.baseview.rewardpopview.MBAcquireRewardPopView r0 = r2.aI
            if (r0 != 0) goto L5
            return
        L5:
            com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r1 = r2.aH
            if (r1 != 0) goto La
            return
        La:
            r0.init(r1)     // Catch: java.lang.Exception -> L25
            com.mbridge.msdk.dycreator.baseview.rewardpopview.MBAcquireRewardPopView r0 = r2.aI     // Catch: java.lang.Exception -> L25
            r1 = 0
            r0.setVisibility(r1)     // Catch: java.lang.Exception -> L25
            r0 = 1
            r2.setCover(r0)     // Catch: java.lang.Exception -> L25
            r2.f()     // Catch: java.lang.Exception -> L25
            r2.N = r0     // Catch: java.lang.Exception -> L25
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r2.b     // Catch: java.lang.Exception -> L25
            if (r1 == 0) goto L2f
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r2.b     // Catch: java.lang.Exception -> L25
            r1.isRewardPopViewShowed = r0     // Catch: java.lang.Exception -> L25
            goto L2f
        L25:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBridgeVideoView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L2f:
            return
    }

    @Override
    public void showVideoLocation(int r6, int r7, int r8, int r9, int r10, int r11, int r12, int r13, int r14) {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "showVideoLocation marginTop:"
            r0.append(r1)
            r0.append(r6)
            java.lang.String r1 = " marginLeft:"
            r0.append(r1)
            r0.append(r7)
            java.lang.String r1 = " width:"
            r0.append(r1)
            r0.append(r8)
            java.lang.String r1 = "  height:"
            r0.append(r1)
            r0.append(r9)
            java.lang.String r1 = " radius:"
            r0.append(r1)
            r0.append(r10)
            java.lang.String r1 = " borderTop:"
            r0.append(r1)
            r0.append(r11)
            java.lang.String r1 = " borderLeft:"
            r0.append(r1)
            r0.append(r12)
            java.lang.String r1 = " borderWidth:"
            r0.append(r1)
            r0.append(r13)
            java.lang.String r1 = " borderHeight:"
            r0.append(r1)
            r0.append(r14)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "MBridgeVideoView"
            com.mbridge.msdk.foundation.tools.z.b(r1, r0)
            boolean r0 = r5.f
            if (r0 == 0) goto L13b
            android.widget.RelativeLayout r0 = r5.w
            r2 = 0
            r0.setPadding(r2, r2, r2, r2)
            r5.setVisibility(r2)
            android.widget.RelativeLayout r0 = r5.w
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L70
            android.widget.RelativeLayout r0 = r5.w
            r0.setVisibility(r2)
        L70:
            android.widget.TextView r0 = r5.u
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L7b
            r5.j()
        L7b:
            android.content.Context r0 = r5.a
            int r0 = com.mbridge.msdk.foundation.tools.ae.h(r0)
            android.content.Context r3 = r5.a
            int r3 = com.mbridge.msdk.foundation.tools.ae.g(r3)
            r4 = 1
            if (r8 <= 0) goto L92
            if (r9 <= 0) goto L92
            if (r0 < r8) goto L92
            if (r3 < r9) goto L92
            r0 = r4
            goto L93
        L92:
            r0 = r2
        L93:
            if (r0 == 0) goto L138
            boolean r0 = r5.aa
            if (r0 != 0) goto L138
            com.mbridge.msdk.video.module.MBridgeVideoView.o = r11
            com.mbridge.msdk.video.module.MBridgeVideoView.p = r12
            int r13 = r13 + 4
            com.mbridge.msdk.video.module.MBridgeVideoView.q = r13
            int r14 = r14 + 4
            com.mbridge.msdk.video.module.MBridgeVideoView.r = r14
            float r11 = (float) r8
            float r12 = (float) r9
            float r11 = r11 / r12
            r12 = 0
            double r13 = r5.V     // Catch: java.lang.Throwable -> Lb0
            double r0 = r5.W     // Catch: java.lang.Throwable -> Lb0
            double r13 = r13 / r0
            float r12 = (float) r13
            goto Lb8
        Lb0:
            r13 = move-exception
            java.lang.String r14 = r13.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r1, r14, r13)
        Lb8:
            if (r10 <= 0) goto Lfc
            com.mbridge.msdk.video.module.MBridgeVideoView.n = r10
            if (r10 <= 0) goto Lfc
            android.graphics.drawable.GradientDrawable r13 = new android.graphics.drawable.GradientDrawable
            r13.<init>()
            android.content.Context r14 = r5.getContext()
            float r10 = (float) r10
            int r10 = com.mbridge.msdk.foundation.tools.ae.b(r14, r10)
            float r10 = (float) r10
            r13.setCornerRadius(r10)
            r10 = -1
            r13.setColor(r10)
            r13.setStroke(r4, r2)
            int r10 = android.os.Build.VERSION.SDK_INT
            r14 = 16
            if (r10 < r14) goto Le6
            r5.setBackground(r13)
            com.mbridge.msdk.playercommon.PlayerView r10 = r5.s
            r10.setBackground(r13)
            goto Lee
        Le6:
            r5.setBackgroundDrawable(r13)
            com.mbridge.msdk.playercommon.PlayerView r10 = r5.s
            r10.setBackgroundDrawable(r13)
        Lee:
            int r10 = android.os.Build.VERSION.SDK_INT
            r13 = 21
            if (r10 < r13) goto Lfc
            r5.setClipToOutline(r4)
            com.mbridge.msdk.playercommon.PlayerView r10 = r5.s
            r10.setClipToOutline(r4)
        Lfc:
            float r11 = r11 - r12
            float r10 = java.lang.Math.abs(r11)
            r11 = 1036831949(0x3dcccccd, float:0.1)
            int r10 = (r10 > r11 ? 1 : (r10 == r11 ? 0 : -1))
            if (r10 <= 0) goto L114
            int r10 = r5.aj
            if (r10 != r4) goto L10d
            goto L114
        L10d:
            r5.h()
            r5.videoOperate(r4)
            goto L13b
        L114:
            r5.h()
            boolean r10 = r5.ai
            if (r10 == 0) goto L134
            r5.setLayoutCenter(r8, r9)
            boolean r6 = com.mbridge.msdk.video.module.MBridgeVideoView.al
            java.lang.String r7 = ""
            if (r6 == 0) goto L12c
            com.mbridge.msdk.video.module.a.a r6 = r5.e
            r8 = 114(0x72, float:1.6E-43)
            r6.a(r8, r7)
            goto L13b
        L12c:
            com.mbridge.msdk.video.module.a.a r6 = r5.e
            r8 = 116(0x74, float:1.63E-43)
            r6.a(r8, r7)
            goto L13b
        L134:
            r5.setLayoutParam(r7, r6, r8, r9)
            goto L13b
        L138:
            r5.h()
        L13b:
            return
    }

    @Override
    public void soundOperate(int r2, int r3) {
            r1 = this;
            java.lang.String r0 = "2"
            r1.soundOperate(r2, r3, r0)
            return
    }

    @Override
    public void soundOperate(int r7, int r8, java.lang.String r9) {
            r6 = this;
            boolean r0 = r6.f
            if (r0 == 0) goto L78
            r6.am = r7
            java.lang.String r0 = "OMSDK"
            r1 = 2
            r2 = 0
            r3 = 1
            if (r7 != r3) goto L2d
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r4 = r6.t
            if (r4 == 0) goto L14
            r4.setSoundStatus(r2)
        L14:
            com.mbridge.msdk.playercommon.PlayerView r4 = r6.s
            r4.closeSound()
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r4 = r6.ao     // Catch: java.lang.IllegalArgumentException -> L24
            if (r4 == 0) goto L4f
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r4 = r6.ao     // Catch: java.lang.IllegalArgumentException -> L24
            r5 = 0
            r4.volumeChange(r5)     // Catch: java.lang.IllegalArgumentException -> L24
            goto L4f
        L24:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r4)
            goto L4f
        L2d:
            if (r7 != r1) goto L4f
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r4 = r6.t
            if (r4 == 0) goto L36
            r4.setSoundStatus(r3)
        L36:
            com.mbridge.msdk.playercommon.PlayerView r4 = r6.s
            r4.openSound()
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r4 = r6.ao     // Catch: java.lang.IllegalArgumentException -> L47
            if (r4 == 0) goto L4f
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r4 = r6.ao     // Catch: java.lang.IllegalArgumentException -> L47
            r5 = 1065353216(0x3f800000, float:1.0)
            r4.volumeChange(r5)     // Catch: java.lang.IllegalArgumentException -> L47
            goto L4f
        L47:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r4)
        L4f:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r6.b
            if (r0 == 0) goto L63
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r6.b
            boolean r0 = r0.isDynamicView()
            if (r0 == 0) goto L63
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r8 = r6.t
            if (r8 == 0) goto L78
            r8.setVisibility(r2)
            goto L78
        L63:
            if (r8 != r3) goto L6f
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r8 = r6.t
            if (r8 == 0) goto L78
            r0 = 8
            r8.setVisibility(r0)
            goto L78
        L6f:
            if (r8 != r1) goto L78
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r8 = r6.t
            if (r8 == 0) goto L78
            r8.setVisibility(r2)
        L78:
            if (r9 == 0) goto L90
            java.lang.String r8 = "2"
            boolean r8 = r9.equals(r8)
            if (r8 == 0) goto L90
            com.mbridge.msdk.video.module.a.a r8 = r6.e
            if (r8 == 0) goto L90
            com.mbridge.msdk.video.module.a.a r8 = r6.e
            r9 = 7
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)
            r8.a(r9, r7)
        L90:
            return
    }

    @Override
    public void videoOperate(int r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "VideoView videoOperate:"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "MBridgeVideoView"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
            boolean r0 = r3.f
            if (r0 == 0) goto L83
            r0 = 1
            if (r4 != r0) goto L42
            int r4 = r3.getVisibility()
            if (r4 != 0) goto L83
            boolean r4 = r3.isfront()
            if (r4 == 0) goto L83
            java.lang.String r4 = "VideoView videoOperate:play"
            com.mbridge.msdk.foundation.tools.z.a(r1, r4)
            boolean r4 = r3.L
            if (r4 != 0) goto L83
            boolean r4 = r3.ad
            if (r4 != 0) goto L83
            boolean r4 = r3.M
            if (r4 != 0) goto L83
            boolean r4 = com.mbridge.msdk.foundation.b.b.c
            if (r4 != 0) goto L83
            r3.g()
            goto L83
        L42:
            r2 = 2
            if (r4 != r2) goto L54
            int r4 = r3.getVisibility()
            if (r4 != 0) goto L83
            java.lang.String r4 = "VideoView videoOperate:pause"
            com.mbridge.msdk.foundation.tools.z.a(r1, r4)
            r3.f()
            goto L83
        L54:
            r1 = 3
            if (r4 != r1) goto L63
            boolean r4 = r3.ac
            if (r4 != 0) goto L83
            com.mbridge.msdk.playercommon.PlayerView r4 = r3.s
            r4.release()
            r3.ac = r0
            goto L83
        L63:
            r1 = 5
            if (r4 != r1) goto L70
            r3.M = r0
            boolean r4 = r3.ac
            if (r4 != 0) goto L83
            r3.f()
            goto L83
        L70:
            r0 = 4
            if (r4 != r0) goto L83
            r4 = 0
            r3.M = r4
            boolean r4 = r3.ac
            if (r4 != 0) goto L83
            boolean r4 = r3.isMiniCardShowing()
            if (r4 != 0) goto L83
            r3.g()
        L83:
            return
    }
}
