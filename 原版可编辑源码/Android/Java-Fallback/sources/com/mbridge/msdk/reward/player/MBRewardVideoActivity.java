package com.mbridge.msdk.reward.player;

public class MBRewardVideoActivity extends com.mbridge.msdk.video.js.activity.AbstractJSActivity {
    public static java.lang.String INTENT_EXTRADATA = "extraData";
    public static java.lang.String INTENT_ISBID = "isBid";
    public static java.lang.String INTENT_ISBIG_OFFER = "isBigOffer";
    public static java.lang.String INTENT_ISIV = "isIV";
    public static java.lang.String INTENT_IVREWARD_MODETYPE = "ivRewardMode";
    public static java.lang.String INTENT_IVREWARD_VALUE = "ivRewardValue";
    public static java.lang.String INTENT_IVREWARD_VALUETYPE = "ivRewardValueType";
    public static java.lang.String INTENT_MUTE = "mute";
    public static java.lang.String INTENT_REWARD = "reward";
    public static java.lang.String INTENT_UNITID = "unitId";
    public static java.lang.String INTENT_USERID = "userId";
    public static java.lang.String SAVE_STATE_KEY_REPORT = "hasRelease";
    private boolean A;
    private int B;
    private int C;
    private int D;
    private int E;
    private int F;
    private int G;
    private int H;
    private com.mbridge.msdk.video.dynview.e.a I;
    private com.mbridge.msdk.video.dynview.e.d J;
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private com.mbridge.msdk.videocommon.b.d d;
    private int e;
    private boolean f;
    private boolean g;
    private int h;
    private int i;
    private int j;
    private boolean k;
    private boolean l;
    private com.mbridge.msdk.video.bt.module.b.h m;
    private com.mbridge.msdk.videocommon.d.c n;
    private boolean o;
    private boolean p;
    private com.mbridge.msdk.videocommon.download.a q;
    private com.mbridge.msdk.foundation.entity.CampaignEx r;
    private java.util.List<com.mbridge.msdk.videocommon.download.a> s;
    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> t;
    private com.mbridge.msdk.video.bt.module.MBTempContainer u;
    private com.mbridge.msdk.video.bt.module.MBridgeBTContainer v;
    private com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView w;
    private com.mbridge.msdk.video.bt.module.a.a x;
    private java.lang.String y;
    private java.lang.String z;





    private static final class a implements java.lang.Runnable {
        private final java.util.List<com.mbridge.msdk.videocommon.download.a> a;
        private final java.lang.String b;
        private final java.lang.String c;

        public a(java.util.List<com.mbridge.msdk.videocommon.download.a> r1, java.lang.String r2, java.lang.String r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }

        @Override
        public final void run() {
                r6 = this;
                java.lang.String r0 = "MBRewardVideoActivity"
                java.util.List<com.mbridge.msdk.videocommon.download.a> r1 = r6.a     // Catch: java.lang.Exception -> Lf1
                if (r1 == 0) goto Lf9
                java.util.List<com.mbridge.msdk.videocommon.download.a> r1 = r6.a     // Catch: java.lang.Exception -> Lf1
                int r1 = r1.size()     // Catch: java.lang.Exception -> Lf1
                if (r1 <= 0) goto Lf9
                java.util.List<com.mbridge.msdk.videocommon.download.a> r1 = r6.a     // Catch: java.lang.Exception -> Lf1
                java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> Lf1
            L14:
                boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> Lf1
                if (r2 == 0) goto Lf9
                java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> Lf1
                com.mbridge.msdk.videocommon.download.a r2 = (com.mbridge.msdk.videocommon.download.a) r2     // Catch: java.lang.Exception -> Lf1
                if (r2 == 0) goto L14
                com.mbridge.msdk.foundation.entity.CampaignEx r3 = r2.g()     // Catch: java.lang.Exception -> Lf1
                if (r3 == 0) goto L14
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r2.g()     // Catch: java.lang.Exception -> Lf1
                com.mbridge.msdk.scheme.applet.AppletModelManager r3 = com.mbridge.msdk.scheme.applet.AppletModelManager.getInstance()     // Catch: java.lang.Exception -> L34
                r3.remove(r2)     // Catch: java.lang.Exception -> L34
                goto L3e
            L34:
                r3 = move-exception
                boolean r4 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> Lf1
                if (r4 == 0) goto L3e
                java.lang.String r4 = "AppletModelManager remove error"
                com.mbridge.msdk.foundation.tools.z.c(r0, r4, r3)     // Catch: java.lang.Exception -> Lf1
            L3e:
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf1
                r3.<init>()     // Catch: java.lang.Exception -> Lf1
                java.lang.String r4 = r2.getRequestId()     // Catch: java.lang.Exception -> Lf1
                r3.append(r4)     // Catch: java.lang.Exception -> Lf1
                java.lang.String r4 = r2.getId()     // Catch: java.lang.Exception -> Lf1
                r3.append(r4)     // Catch: java.lang.Exception -> Lf1
                java.lang.String r4 = r2.getVideoUrlEncode()     // Catch: java.lang.Exception -> Lf1
                r3.append(r4)     // Catch: java.lang.Exception -> Lf1
                java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Lf1
                com.mbridge.msdk.videocommon.download.b r4 = com.mbridge.msdk.videocommon.download.b.getInstance()     // Catch: java.lang.Exception -> Lf1
                java.lang.String r5 = r6.b     // Catch: java.lang.Exception -> Lf1
                com.mbridge.msdk.videocommon.download.d r4 = r4.c(r5)     // Catch: java.lang.Exception -> Lf1
                if (r4 == 0) goto L6b
                r4.b(r3)     // Catch: java.lang.Exception -> L6b
            L6b:
                if (r2 == 0) goto L14
                com.mbridge.msdk.foundation.entity.CampaignEx$c r3 = r2.getRewardTemplateMode()     // Catch: java.lang.Exception -> Lf1
                if (r3 == 0) goto L14
                com.mbridge.msdk.foundation.entity.CampaignEx$c r3 = r2.getRewardTemplateMode()     // Catch: java.lang.Exception -> Lf1
                java.lang.String r3 = r3.e()     // Catch: java.lang.Exception -> Lf1
                boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Lf1
                java.lang.String r4 = "_"
                if (r3 != 0) goto Lbb
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf1
                r3.<init>()     // Catch: java.lang.Exception -> Lf1
                java.lang.String r5 = r6.b     // Catch: java.lang.Exception -> Lf1
                r3.append(r5)     // Catch: java.lang.Exception -> Lf1
                r3.append(r4)     // Catch: java.lang.Exception -> Lf1
                java.lang.String r5 = r2.getId()     // Catch: java.lang.Exception -> Lf1
                r3.append(r5)     // Catch: java.lang.Exception -> Lf1
                r3.append(r4)     // Catch: java.lang.Exception -> Lf1
                java.lang.String r5 = r6.c     // Catch: java.lang.Exception -> Lf1
                r3.append(r5)     // Catch: java.lang.Exception -> Lf1
                r3.append(r4)     // Catch: java.lang.Exception -> Lf1
                com.mbridge.msdk.foundation.entity.CampaignEx$c r5 = r2.getRewardTemplateMode()     // Catch: java.lang.Exception -> Lf1
                java.lang.String r5 = r5.e()     // Catch: java.lang.Exception -> Lf1
                r3.append(r5)     // Catch: java.lang.Exception -> Lf1
                java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Lf1
                com.mbridge.msdk.videocommon.a.b(r3)     // Catch: java.lang.Exception -> Lf1
                int r3 = r2.getAdType()     // Catch: java.lang.Exception -> Lf1
                com.mbridge.msdk.videocommon.a.b(r3, r2)     // Catch: java.lang.Exception -> Lf1
            Lbb:
                java.lang.String r3 = r2.getCMPTEntryUrl()     // Catch: java.lang.Exception -> Lf1
                boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Lf1
                if (r3 != 0) goto Le8
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf1
                r3.<init>()     // Catch: java.lang.Exception -> Lf1
                java.lang.String r5 = r6.b     // Catch: java.lang.Exception -> Lf1
                r3.append(r5)     // Catch: java.lang.Exception -> Lf1
                r3.append(r4)     // Catch: java.lang.Exception -> Lf1
                java.lang.String r5 = r6.c     // Catch: java.lang.Exception -> Lf1
                r3.append(r5)     // Catch: java.lang.Exception -> Lf1
                r3.append(r4)     // Catch: java.lang.Exception -> Lf1
                java.lang.String r4 = r2.getCMPTEntryUrl()     // Catch: java.lang.Exception -> Lf1
                r3.append(r4)     // Catch: java.lang.Exception -> Lf1
                java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Lf1
                com.mbridge.msdk.videocommon.a.b(r3)     // Catch: java.lang.Exception -> Lf1
            Le8:
                com.mbridge.msdk.videocommon.a.a r3 = com.mbridge.msdk.videocommon.a.a.a()     // Catch: java.lang.Exception -> Lf1
                r3.a(r2)     // Catch: java.lang.Exception -> Lf1
                goto L14
            Lf1:
                r1 = move-exception
                java.lang.String r1 = r1.getMessage()
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            Lf9:
                return
        }
    }

    private static final class b implements java.lang.Runnable {
        private final com.mbridge.msdk.foundation.entity.CampaignEx a;
        private final java.lang.String b;
        private final int c;

        public b(com.mbridge.msdk.foundation.entity.CampaignEx r1, java.lang.String r2, int r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }

        @Override
        public final void run() {
                r4 = this;
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.a
                if (r0 == 0) goto L29
                java.lang.String r0 = r4.b
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 != 0) goto L29
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.a     // Catch: java.lang.Exception -> L29
                java.lang.String r0 = r0.getMof_template_url()     // Catch: java.lang.Exception -> L29
                java.lang.String r1 = ""
                boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L29
                if (r2 != 0) goto L20
                java.lang.String r1 = "cltp"
                java.lang.String r1 = com.mbridge.msdk.foundation.tools.ak.a(r0, r1)     // Catch: java.lang.Exception -> L29
            L20:
                java.lang.String r0 = r4.b     // Catch: java.lang.Exception -> L29
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r4.a     // Catch: java.lang.Exception -> L29
                int r3 = r4.c     // Catch: java.lang.Exception -> L29
                com.mbridge.msdk.video.module.b.a.a(r0, r2, r3, r1)     // Catch: java.lang.Exception -> L29
            L29:
                return
        }
    }

    private static final class c implements java.lang.Runnable {
        private final java.util.List<com.mbridge.msdk.videocommon.download.a> a;
        private final java.lang.String b;

        public c(java.lang.String r1, java.util.List<com.mbridge.msdk.videocommon.download.a> r2) {
                r0 = this;
                r0.<init>()
                r0.a = r2
                r0.b = r1
                return
        }

        @Override
        public final void run() {
                r4 = this;
                java.util.List<com.mbridge.msdk.videocommon.download.a> r0 = r4.a     // Catch: java.lang.Throwable -> L34
                if (r0 == 0) goto L3e
                java.util.List<com.mbridge.msdk.videocommon.download.a> r0 = r4.a     // Catch: java.lang.Throwable -> L34
                int r0 = r0.size()     // Catch: java.lang.Throwable -> L34
                if (r0 <= 0) goto L3e
                java.util.List<com.mbridge.msdk.videocommon.download.a> r0 = r4.a     // Catch: java.lang.Throwable -> L34
                java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L34
            L12:
                boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L34
                if (r1 == 0) goto L3e
                java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L34
                com.mbridge.msdk.videocommon.download.a r1 = (com.mbridge.msdk.videocommon.download.a) r1     // Catch: java.lang.Throwable -> L34
                if (r1 == 0) goto L12
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r1.g()     // Catch: java.lang.Throwable -> L34
                if (r2 == 0) goto L12
                com.mbridge.msdk.videocommon.a.a r2 = com.mbridge.msdk.videocommon.a.a.a()     // Catch: java.lang.Throwable -> L34
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = r1.g()     // Catch: java.lang.Throwable -> L34
                java.lang.String r3 = r4.b     // Catch: java.lang.Throwable -> L34
                r2.a(r1, r3)     // Catch: java.lang.Throwable -> L34
                goto L12
            L34:
                r0 = move-exception
                java.lang.String r0 = r0.getMessage()
                java.lang.String r1 = "MBRewardVideoActivity"
                com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            L3e:
                return
        }
    }

    static {
            return
    }

    public MBRewardVideoActivity() {
            r2 = this;
            r2.<init>()
            r0 = 2
            r2.e = r0
            r0 = 0
            r2.f = r0
            r2.g = r0
            r2.k = r0
            r2.l = r0
            r2.o = r0
            r2.p = r0
            r1 = 1
            r2.B = r1
            r2.C = r0
            r2.D = r0
            r2.E = r0
            r2.F = r0
            r2.G = r0
            r2.H = r0
            com.mbridge.msdk.reward.player.MBRewardVideoActivity$1 r0 = new com.mbridge.msdk.reward.player.MBRewardVideoActivity$1
            r0.<init>(r2)
            r2.I = r0
            com.mbridge.msdk.reward.player.MBRewardVideoActivity$2 r0 = new com.mbridge.msdk.reward.player.MBRewardVideoActivity$2
            r0.<init>(r2)
            r2.J = r0
            return
    }

    private int a(int r6, int r7) {
            r5 = this;
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r5.t
            if (r0 != 0) goto L5
            return r6
        L5:
            int r0 = r0.size()
            if (r0 != 0) goto Lc
            return r6
        Lc:
            r0 = 0
            r1 = r0
            r2 = r1
            r3 = r2
        L10:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r5.t
            int r4 = r4.size()
            if (r1 >= r4) goto L3e
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r5.t
            java.lang.Object r4 = r4.get(r0)
            if (r4 == 0) goto L3b
            if (r1 != 0) goto L2e
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r5.t
            java.lang.Object r3 = r3.get(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
            int r3 = r3.getVideoCompleteTime()
        L2e:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r5.t
            java.lang.Object r4 = r4.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4
            int r4 = r4.getVideoLength()
            int r2 = r2 + r4
        L3b:
            int r1 = r1 + 1
            goto L10
        L3e:
            r1 = 45
            r4 = 1
            if (r7 != r4) goto L50
            if (r6 != 0) goto L49
            if (r2 < r1) goto L4e
            r6 = r1
            goto L74
        L49:
            if (r2 <= r6) goto L4e
            if (r6 <= r1) goto L74
            return r1
        L4e:
            r6 = r2
            goto L74
        L50:
            r6 = r0
            r1 = r6
        L52:
            int r2 = r7 + (-1)
            if (r6 >= r2) goto L6e
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r5.t
            java.lang.Object r2 = r2.get(r6)
            if (r2 == 0) goto L6b
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r5.t
            java.lang.Object r2 = r2.get(r6)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2
            int r2 = r2.getVideoLength()
            int r1 = r1 + r2
        L6b:
            int r6 = r6 + 1
            goto L52
        L6e:
            if (r3 <= r1) goto L73
            int r6 = r3 - r1
            goto L74
        L73:
            r6 = r0
        L74:
            return r6
    }

    static int a(com.mbridge.msdk.reward.player.MBRewardVideoActivity r0, int r1) {
            r0.e = r1
            return r1
    }

    static int a(com.mbridge.msdk.reward.player.MBRewardVideoActivity r0, int r1, int r2) {
            int r0 = r0.a(r1, r2)
            return r0
    }

    static com.mbridge.msdk.foundation.entity.CampaignEx a(com.mbridge.msdk.reward.player.MBRewardVideoActivity r0, com.mbridge.msdk.foundation.entity.CampaignEx r1) {
            r0.r = r1
            return r1
    }

    static java.util.List a(com.mbridge.msdk.reward.player.MBRewardVideoActivity r0) {
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r0.t
            return r0
    }

    private void a() {
            r10 = this;
            java.lang.String r0 = "mbridge_temp_container"
            int r0 = r10.findID(r0)
            if (r0 >= 0) goto Ld
            java.lang.String r1 = "no id mbridge_bt_container in mbridge_more_offer_activity layout"
            r10.a(r1)
        Ld:
            android.view.View r0 = r10.findViewById(r0)
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = (com.mbridge.msdk.video.bt.module.MBTempContainer) r0
            r10.u = r0
            if (r0 != 0) goto L1c
            java.lang.String r0 = "env error"
            r10.a(r0)
        L1c:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r10.t
            r1 = 0
            if (r0 == 0) goto L42
            int r0 = r0.size()
            if (r0 <= 0) goto L42
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r10.t
            java.lang.Object r0 = r0.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            boolean r0 = r0.isDynamicView()
            if (r0 == 0) goto L42
            com.mbridge.msdk.video.dynview.h.b r0 = new com.mbridge.msdk.video.dynview.h.b
            r0.<init>()
            com.mbridge.msdk.video.bt.module.MBTempContainer r2 = r10.u
            r3 = 500(0x1f4, double:2.47E-321)
            r0.c(r2, r3)
            goto L47
        L42:
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r10.u
            r0.setVisibility(r1)
        L47:
            r0 = -1
            r10.changeHalfScreenPadding(r0)
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r10.u
            r0.setActivity(r10)
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r10.u
            boolean r2 = r10.g
            r0.setBidCampaign(r2)
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r10.u
            boolean r2 = r10.k
            r0.setBigOffer(r2)
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r10.u
            java.lang.String r2 = r10.a
            r0.setUnitId(r2)
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r10.u
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r10.r
            r0.setCampaign(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.r
            int r0 = r0.getDynamicTempCode()
            r2 = 5
            r3 = 1
            if (r0 != r2) goto La8
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r10.t
            if (r0 == 0) goto La8
            int r0 = r0.size()
            if (r0 <= r3) goto La8
            java.lang.String r0 = "mbridge_reward_root_container"
            int r0 = r10.findID(r0)
            android.view.View r0 = r10.findViewById(r0)
            if (r0 == 0) goto L91
            r2 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r0.setBackgroundColor(r2)
        L91:
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r10.u
            r0.removeAllViews()
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r10.u
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r10.t
            int r4 = r10.C
            r0.setCampOrderViewData(r2, r4)
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r10.u
            com.mbridge.msdk.video.dynview.e.a r2 = r10.I
            int r4 = r10.B
            r0.setCamPlayOrderCallback(r2, r4)
        La8:
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r10.u
            com.mbridge.msdk.videocommon.download.a r2 = r10.q
            r0.setCampaignDownLoadTask(r2)
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r10.u
            boolean r2 = r10.f
            r0.setIV(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.r
            if (r0 == 0) goto Lc7
            int r0 = r0.getAdSpaceT()
            r2 = 2
            if (r0 != r2) goto Lc7
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r10.u
            r0.setIVRewardEnable(r1, r1, r1)
            goto Ld2
        Lc7:
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r10.u
            int r2 = r10.h
            int r4 = r10.i
            int r5 = r10.j
            r0.setIVRewardEnable(r2, r4, r5)
        Ld2:
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r10.u
            int r2 = r10.e
            r0.setMute(r2)
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r10.u
            java.lang.String r2 = r10.z
            r0.setDeveloperExtraData(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.r
            if (r0 == 0) goto Lea
            com.mbridge.msdk.foundation.entity.RewardPlus r0 = r0.getRewardPlus()
            if (r0 != 0) goto L10a
        Lea:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r10.t
            if (r0 == 0) goto L132
            int r0 = r0.size()
            if (r0 <= 0) goto L132
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r10.t
            java.lang.Object r0 = r0.get(r1)
            if (r0 == 0) goto L132
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r10.t
            java.lang.Object r0 = r0.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            com.mbridge.msdk.foundation.entity.RewardPlus r0 = r0.getRewardPlus()
            if (r0 == 0) goto L132
        L10a:
            java.lang.String r1 = r0.getName()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L132
            int r1 = r0.getAmount()
            if (r1 <= 0) goto L132
            com.mbridge.msdk.videocommon.b.d r1 = new com.mbridge.msdk.videocommon.b.d
            java.lang.String r2 = r0.getName()
            int r0 = r0.getAmount()
            r1.<init>(r2, r0)
            int r0 = r1.b()
            if (r0 >= 0) goto L130
            r1.a(r3)
        L130:
            r10.d = r1
        L132:
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r10.u
            com.mbridge.msdk.videocommon.b.d r1 = r10.d
            r0.setReward(r1)
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r10.u
            com.mbridge.msdk.videocommon.d.c r1 = r10.n
            r0.setRewardUnitSetting(r1)
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r10.u
            java.lang.String r1 = r10.b
            r0.setPlacementId(r1)
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r10.u
            java.lang.String r1 = r10.c
            r0.setUserId(r1)
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r10.u
            com.mbridge.msdk.video.bt.module.b.h r1 = r10.m
            r0.setShowRewardListener(r1)
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r10.u
            r0.init(r10)
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r10.u
            r0.onCreate()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r10.r     // Catch: java.lang.Exception -> L178
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L178
            android.content.Context r2 = r0.j()     // Catch: java.lang.Exception -> L178
            java.lang.String r3 = "showBTOld"
            java.lang.String r4 = r10.a     // Catch: java.lang.Exception -> L178
            boolean r5 = r10.g     // Catch: java.lang.Exception -> L178
            java.lang.String r6 = ""
            java.lang.String r7 = ""
            r8 = 0
            com.mbridge.msdk.reward.b.a.a(r1, r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L178
        L178:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.r
            r10.b(r0)
            return
    }

    private void a(com.mbridge.msdk.foundation.entity.CampaignEx r7) {
            r6 = this;
            java.util.List<com.mbridge.msdk.videocommon.download.a> r0 = r6.s     // Catch: java.lang.Exception -> L5f
            if (r0 == 0) goto L45
            java.util.List<com.mbridge.msdk.videocommon.download.a> r0 = r6.s     // Catch: java.lang.Exception -> L5f
            int r0 = r0.size()     // Catch: java.lang.Exception -> L5f
            if (r0 <= 0) goto L45
            java.util.List<com.mbridge.msdk.videocommon.download.a> r0 = r6.s     // Catch: java.lang.Exception -> L5f
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L5f
        L12:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L5f
            if (r1 == 0) goto L45
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L5f
            com.mbridge.msdk.videocommon.download.a r1 = (com.mbridge.msdk.videocommon.download.a) r1     // Catch: java.lang.Exception -> L5f
            if (r1 == 0) goto L12
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r1.g()     // Catch: java.lang.Exception -> L5f
            if (r2 == 0) goto L12
            java.lang.String r3 = r2.getId()     // Catch: java.lang.Exception -> L5f
            java.lang.String r4 = r7.getId()     // Catch: java.lang.Exception -> L5f
            boolean r3 = android.text.TextUtils.equals(r3, r4)     // Catch: java.lang.Exception -> L5f
            if (r3 == 0) goto L12
            java.lang.String r2 = r2.getRequestId()     // Catch: java.lang.Exception -> L5f
            java.lang.String r3 = r7.getRequestId()     // Catch: java.lang.Exception -> L5f
            boolean r2 = android.text.TextUtils.equals(r2, r3)     // Catch: java.lang.Exception -> L5f
            if (r2 == 0) goto L12
            r6.q = r1     // Catch: java.lang.Exception -> L5f
            goto L12
        L45:
            r7 = 1
            r6.k = r7     // Catch: java.lang.Exception -> L5f
            r6.a()     // Catch: java.lang.Exception -> L5f
            com.mbridge.msdk.video.bt.module.MBTempContainer r7 = r6.u     // Catch: java.lang.Exception -> L5f
            if (r7 == 0) goto L6e
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r6.u     // Catch: java.lang.Exception -> L5f
            int r1 = r6.H     // Catch: java.lang.Exception -> L5f
            int r2 = r6.D     // Catch: java.lang.Exception -> L5f
            int r3 = r6.F     // Catch: java.lang.Exception -> L5f
            int r4 = r6.E     // Catch: java.lang.Exception -> L5f
            int r5 = r6.G     // Catch: java.lang.Exception -> L5f
            r0.setNotchPadding(r1, r2, r3, r4, r5)     // Catch: java.lang.Exception -> L5f
            goto L6e
        L5f:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()
            java.lang.String r0 = "MBRewardVideoActivity"
            com.mbridge.msdk.foundation.tools.z.d(r0, r7)
            java.lang.String r7 = "more offer to one offer exception"
            r6.a(r7)
        L6e:
            return
    }

    static void a(com.mbridge.msdk.reward.player.MBRewardVideoActivity r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    private void a(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "MBRewardVideoActivity"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
            com.mbridge.msdk.video.bt.module.b.h r0 = r1.m
            if (r0 == 0) goto Lc
            r0.a(r2)
        Lc:
            r1.finish()
            return
    }

    private void a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r5) {
            r4 = this;
            java.lang.String r0 = "no available campaign"
            if (r5 != 0) goto L8
            r4.a(r0)
            return
        L8:
            int r1 = r5.size()
            if (r1 != 0) goto L12
            r4.a(r0)
            return
        L12:
            r0 = 0
            java.lang.Object r1 = r5.get(r0)
            if (r1 == 0) goto L24
            java.lang.Object r1 = r5.get(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1
            int r1 = r1.getDynamicTempCode()
            goto L25
        L24:
            r1 = r0
        L25:
            r2 = 5
            if (r1 == r2) goto L2c
            r4.b()
            goto L72
        L2c:
            java.util.Iterator r1 = r5.iterator()
        L30:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L48
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2
            if (r2 == 0) goto L30
            int r3 = r4.C
            int r2 = r2.getVideoLength()
            int r3 = r3 + r2
            r4.C = r3
            goto L30
        L48:
            java.lang.Object r5 = r5.get(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5
            if (r5 == 0) goto L6d
            int r0 = r5.getVideoCompleteTime()
            int r1 = r4.B
            int r0 = r4.a(r0, r1)
            r4.r = r5
            r1 = 1
            r5.setCampaignIsFiltered(r1)
            r4.B = r1
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r4.r
            r5.setVideoCompleteTime(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r4.r
            r4.a(r5)
            goto L72
        L6d:
            java.lang.String r5 = "campaign is less"
            r4.a(r5)
        L72:
            return
    }

    static boolean a(com.mbridge.msdk.reward.player.MBRewardVideoActivity r0, boolean r1) {
            r0.k = r1
            return r1
    }

    static int b(com.mbridge.msdk.reward.player.MBRewardVideoActivity r2) {
            int r0 = r2.B
            int r1 = r0 + 1
            r2.B = r1
            return r0
    }

    static int b(com.mbridge.msdk.reward.player.MBRewardVideoActivity r0, int r1) {
            r0.C = r1
            return r1
    }

    private void b() {
            r11 = this;
            java.lang.String r0 = "mbridge_bt_container"
            int r0 = r11.findID(r0)
            if (r0 >= 0) goto Ld
            java.lang.String r1 = "no mbridge_webview_framelayout in mbridge_more_offer_activity layout"
            r11.a(r1)
        Ld:
            android.view.View r0 = r11.findViewById(r0)
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = (com.mbridge.msdk.video.bt.module.MBridgeBTContainer) r0
            r11.v = r0
            if (r0 != 0) goto L1c
            java.lang.String r0 = "env error"
            r11.a(r0)
        L1c:
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r11.v
            r1 = 0
            r0.setVisibility(r1)
            com.mbridge.msdk.video.bt.module.a.a r0 = r11.c()
            r11.x = r0
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r2 = r11.v
            r2.setBTContainerCallback(r0)
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r11.v
            com.mbridge.msdk.video.bt.module.b.h r2 = r11.m
            r0.setShowRewardVideoListener(r2)
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r11.v
            com.mbridge.msdk.video.dynview.e.d r2 = r11.J
            r0.setChoiceOneCallback(r2)
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r11.v
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r11.t
            r0.setCampaigns(r2)
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r11.v
            java.util.List<com.mbridge.msdk.videocommon.download.a> r2 = r11.s
            r0.setCampaignDownLoadTasks(r2)
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r11.v
            com.mbridge.msdk.videocommon.d.c r2 = r11.n
            r0.setRewardUnitSetting(r2)
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r11.v
            java.lang.String r2 = r11.a
            r0.setUnitId(r2)
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r11.v
            java.lang.String r2 = r11.b
            r0.setPlacementId(r2)
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r11.v
            java.lang.String r2 = r11.c
            r0.setUserId(r2)
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r11.v
            r0.setActivity(r11)
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r11.v
            java.lang.String r2 = r11.z
            r0.setDeveloperExtraData(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r11.r
            if (r0 == 0) goto L7b
            com.mbridge.msdk.foundation.entity.RewardPlus r0 = r0.getRewardPlus()
            if (r0 != 0) goto L91
        L7b:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r11.t
            java.lang.Object r0 = r0.get(r1)
            if (r0 == 0) goto Lba
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r11.t
            java.lang.Object r0 = r0.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            com.mbridge.msdk.foundation.entity.RewardPlus r0 = r0.getRewardPlus()
            if (r0 == 0) goto Lba
        L91:
            java.lang.String r2 = r0.getName()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto Lba
            int r2 = r0.getAmount()
            if (r2 <= 0) goto Lba
            com.mbridge.msdk.videocommon.b.d r2 = new com.mbridge.msdk.videocommon.b.d
            java.lang.String r3 = r0.getName()
            int r0 = r0.getAmount()
            r2.<init>(r3, r0)
            int r0 = r2.b()
            if (r0 >= 0) goto Lb8
            r0 = 1
            r2.a(r0)
        Lb8:
            r11.d = r2
        Lba:
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r11.v
            com.mbridge.msdk.videocommon.b.d r2 = r11.d
            r0.setReward(r2)
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r11.v
            int r2 = r11.h
            int r3 = r11.i
            int r4 = r11.j
            r0.setIVRewardEnable(r2, r3, r4)
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r11.v
            boolean r2 = r11.f
            r0.setIV(r2)
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r11.v
            int r2 = r11.e
            r0.setMute(r2)
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r11.v
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r11.jsFactory
            com.mbridge.msdk.video.js.factory.b r2 = (com.mbridge.msdk.video.js.factory.b) r2
            r0.setJSFactory(r2)
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r11.v
            r0.init(r11)
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r11.v
            r0.onCreate()
            java.util.List<com.mbridge.msdk.videocommon.download.a> r0 = r11.s     // Catch: java.lang.Exception -> L11c
            if (r0 == 0) goto L11c
            java.util.List<com.mbridge.msdk.videocommon.download.a> r0 = r11.s     // Catch: java.lang.Exception -> L11c
            int r0 = r0.size()     // Catch: java.lang.Exception -> L11c
            if (r0 <= 0) goto L11c
            java.util.List<com.mbridge.msdk.videocommon.download.a> r0 = r11.s     // Catch: java.lang.Exception -> L11c
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Exception -> L11c
            com.mbridge.msdk.videocommon.download.a r0 = (com.mbridge.msdk.videocommon.download.a) r0     // Catch: java.lang.Exception -> L11c
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r0.g()     // Catch: java.lang.Exception -> L11c
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L11c
            android.content.Context r3 = r0.j()     // Catch: java.lang.Exception -> L11c
            java.lang.String r4 = "showMoreOffer"
            java.lang.String r5 = r11.a     // Catch: java.lang.Exception -> L11c
            boolean r6 = r11.g     // Catch: java.lang.Exception -> L11c
            java.lang.String r7 = ""
            java.lang.String r8 = ""
            r9 = 0
            com.mbridge.msdk.reward.b.a.a(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> L11c
        L11c:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r11.t
            if (r0 == 0) goto L139
            int r0 = r0.size()
            if (r0 <= 0) goto L139
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r11.t
            java.lang.Object r0 = r0.get(r1)
            if (r0 == 0) goto L139
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r11.t
            java.lang.Object r0 = r0.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            r11.b(r0)
        L139:
            return
    }

    private void b(com.mbridge.msdk.foundation.entity.CampaignEx r8) {
            r7 = this;
            com.mbridge.msdk.videocommon.d.c r0 = r7.n
            if (r0 == 0) goto L1a
            java.lang.String r0 = com.mbridge.msdk.videocommon.d.c.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1a
            com.mbridge.msdk.mbjscommon.confirmation.e r1 = com.mbridge.msdk.mbjscommon.confirmation.e.a()
            java.lang.String r2 = com.mbridge.msdk.videocommon.d.c.a
            java.lang.String r5 = r7.a
            r6 = 0
            r3 = r8
            r4 = r7
            r1.a(r2, r3, r4, r5, r6)
        L1a:
            return
    }

    static void b(com.mbridge.msdk.reward.player.MBRewardVideoActivity r0, com.mbridge.msdk.foundation.entity.CampaignEx r1) {
            r0.a(r1)
            return
    }

    static int c(com.mbridge.msdk.reward.player.MBRewardVideoActivity r0) {
            int r0 = r0.C
            return r0
    }

    private com.mbridge.msdk.video.bt.module.a.a c() {
            r1 = this;
            com.mbridge.msdk.video.bt.module.a.a r0 = r1.x
            if (r0 != 0) goto Lb
            com.mbridge.msdk.reward.player.MBRewardVideoActivity$3 r0 = new com.mbridge.msdk.reward.player.MBRewardVideoActivity$3
            r0.<init>(r1)
            r1.x = r0
        Lb:
            com.mbridge.msdk.video.bt.module.a.a r0 = r1.x
            return r0
    }

    private void c(com.mbridge.msdk.foundation.entity.CampaignEx r3) {
            r2 = this;
            if (r3 == 0) goto L3c
            java.lang.String r0 = r3.getImageUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1f
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)
            java.lang.String r1 = r3.getImageUrl()
            r0.c(r1)
        L1f:
            java.lang.String r0 = r3.getIconUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L3c
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)
            java.lang.String r3 = r3.getIconUrl()
            r0.c(r3)
        L3c:
            return
    }

    static com.mbridge.msdk.foundation.entity.CampaignEx d(com.mbridge.msdk.reward.player.MBRewardVideoActivity r0) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.r
            return r0
    }

    static int e(com.mbridge.msdk.reward.player.MBRewardVideoActivity r0) {
            int r0 = r0.B
            return r0
    }

    static com.mbridge.msdk.video.bt.module.MBridgeBTContainer f(com.mbridge.msdk.reward.player.MBRewardVideoActivity r0) {
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r0.v
            return r0
    }

    static void g(com.mbridge.msdk.reward.player.MBRewardVideoActivity r0) {
            r0.a()
            return
    }

    static com.mbridge.msdk.video.bt.module.MBTempContainer h(com.mbridge.msdk.reward.player.MBRewardVideoActivity r0) {
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r0.u
            return r0
    }

    static int i(com.mbridge.msdk.reward.player.MBRewardVideoActivity r0) {
            int r0 = r0.H
            return r0
    }

    static int j(com.mbridge.msdk.reward.player.MBRewardVideoActivity r0) {
            int r0 = r0.D
            return r0
    }

    static int k(com.mbridge.msdk.reward.player.MBRewardVideoActivity r0) {
            int r0 = r0.F
            return r0
    }

    static int l(com.mbridge.msdk.reward.player.MBRewardVideoActivity r0) {
            int r0 = r0.E
            return r0
    }

    static int m(com.mbridge.msdk.reward.player.MBRewardVideoActivity r0) {
            int r0 = r0.G
            return r0
    }

    static java.lang.String n(com.mbridge.msdk.reward.player.MBRewardVideoActivity r0) {
            java.lang.String r0 = r0.a
            return r0
    }

    static com.mbridge.msdk.video.bt.module.b.h o(com.mbridge.msdk.reward.player.MBRewardVideoActivity r0) {
            com.mbridge.msdk.video.bt.module.b.h r0 = r0.m
            return r0
    }

    public void changeHalfScreenPadding(int r6) {
            r5 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.r     // Catch: java.lang.Throwable -> L61
            if (r0 == 0) goto L6b
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.r     // Catch: java.lang.Throwable -> L61
            int r0 = r0.getAdSpaceT()     // Catch: java.lang.Throwable -> L61
            r1 = 2
            if (r0 != r1) goto L6b
            android.view.Window r0 = r5.getWindow()     // Catch: java.lang.Throwable -> L61
            android.view.View r0 = r0.getDecorView()     // Catch: java.lang.Throwable -> L61
            android.graphics.drawable.ColorDrawable r2 = new android.graphics.drawable.ColorDrawable     // Catch: java.lang.Throwable -> L61
            r3 = 0
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L61
            r0.setBackground(r2)     // Catch: java.lang.Throwable -> L61
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r5.u     // Catch: java.lang.Throwable -> L61
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()     // Catch: java.lang.Throwable -> L61
            android.widget.FrameLayout$LayoutParams r0 = (android.widget.FrameLayout.LayoutParams) r0     // Catch: java.lang.Throwable -> L61
            r2 = 1114112000(0x42680000, float:58.0)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r5, r2)     // Catch: java.lang.Throwable -> L61
            r3 = 1120927744(0x42d00000, float:104.0)
            int r3 = com.mbridge.msdk.foundation.tools.ae.b(r5, r3)     // Catch: java.lang.Throwable -> L61
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r5.r     // Catch: java.lang.Throwable -> L61
            com.mbridge.msdk.foundation.entity.CampaignEx$c r4 = r4.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L61
            int r4 = r4.c()     // Catch: java.lang.Throwable -> L61
            if (r4 != 0) goto L48
            if (r6 != r1) goto L44
            r0.setMargins(r3, r2, r3, r2)     // Catch: java.lang.Throwable -> L61
            goto L5b
        L44:
            r0.setMargins(r2, r3, r2, r3)     // Catch: java.lang.Throwable -> L61
            goto L5b
        L48:
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r5.r     // Catch: java.lang.Throwable -> L61
            com.mbridge.msdk.foundation.entity.CampaignEx$c r6 = r6.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L61
            int r6 = r6.c()     // Catch: java.lang.Throwable -> L61
            if (r6 != r1) goto L58
            r0.setMargins(r3, r2, r3, r2)     // Catch: java.lang.Throwable -> L61
            goto L5b
        L58:
            r0.setMargins(r2, r3, r2, r3)     // Catch: java.lang.Throwable -> L61
        L5b:
            com.mbridge.msdk.video.bt.module.MBTempContainer r6 = r5.u     // Catch: java.lang.Throwable -> L61
            r6.setLayoutParams(r0)     // Catch: java.lang.Throwable -> L61
            goto L6b
        L61:
            r6 = move-exception
            java.lang.String r6 = r6.getMessage()
            java.lang.String r0 = "MBRewardVideoActivity"
            com.mbridge.msdk.foundation.tools.z.d(r0, r6)
        L6b:
            return
    }

    public int findID(java.lang.String r3) {
            r2 = this;
            android.content.Context r0 = r2.getApplicationContext()
            java.lang.String r1 = "id"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r0, r3, r1)
            return r3
    }

    public int findLayout(java.lang.String r3) {
            r2 = this;
            android.content.Context r0 = r2.getApplicationContext()
            java.lang.String r1 = "layout"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r0, r3, r1)
            return r3
    }

    @Override
    public void finish() {
            r4 = this;
            super.finish()
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            r1 = 0
            r0.b(r1)
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r4.u
            r1 = 0
            if (r0 == 0) goto L15
            r0.onDestroy()
            r4.u = r1
        L15:
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r4.v
            if (r0 == 0) goto L1e
            r0.onDestroy()
            r4.v = r1
        L1e:
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r4.a
            r1.append(r2)
            java.lang.String r2 = "_"
            r1.append(r2)
            r3 = 1
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.c(r1)
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = r4.a
            r1.append(r3)
            r1.append(r2)
            r2 = 2
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.c(r1)
            return
    }

    @Override
    public void onBackPressed() {
            r1 = this;
            super.onBackPressed()
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r1.u
            if (r0 == 0) goto La
            r0.onBackPressed()
        La:
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r1.v
            if (r0 == 0) goto L11
            r0.onBackPressed()
        L11:
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            super.onConfigurationChanged(r2)
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r1.u
            if (r0 == 0) goto L11
            int r0 = r2.orientation
            r1.changeHalfScreenPadding(r0)
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r1.u
            r0.onConfigurationChanged(r2)
        L11:
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r1.v
            if (r0 == 0) goto L18
            r0.onConfigurationChanged(r2)
        L18:
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r20) {
            r19 = this;
            r1 = r19
            r0 = r20
            java.lang.String r2 = "_"
            java.lang.String r3 = ""
            java.lang.String r4 = "anim"
            super.onCreate(r20)
            r5 = 1
            com.mbridge.msdk.MBridgeConstans.isRewardActivityShowing = r5
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()
            r6.a(r1)
            java.lang.String r6 = "mbridge_more_offer_activity"
            int r6 = r1.findLayout(r6)     // Catch: java.lang.Throwable -> L2f1
            if (r6 >= 0) goto L25
            java.lang.String r0 = "no mbridge_more_offer_activity layout"
            r1.a(r0)     // Catch: java.lang.Throwable -> L2f1
            return
        L25:
            r1.setContentView(r6)     // Catch: java.lang.Throwable -> L2f1
            android.content.Intent r6 = r19.getIntent()     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r7 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.INTENT_UNITID     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r7 = r6.getStringExtra(r7)     // Catch: java.lang.Throwable -> L2f1
            r1.a = r7     // Catch: java.lang.Throwable -> L2f1
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r8 = "data empty error"
            if (r7 == 0) goto L40
            r1.a(r8)     // Catch: java.lang.Throwable -> L2f1
            return
        L40:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.reward.a.a$d> r7 = com.mbridge.msdk.reward.a.a.b     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r9 = r1.a     // Catch: java.lang.Throwable -> L2f1
            java.lang.Object r7 = r7.get(r9)     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.video.bt.module.b.h r7 = (com.mbridge.msdk.video.bt.module.b.h) r7     // Catch: java.lang.Throwable -> L2f1
            r1.m = r7     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r7 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r7 = r6.getStringExtra(r7)     // Catch: java.lang.Throwable -> L2f1
            r1.b = r7     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r7 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.INTENT_REWARD     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r7 = r6.getStringExtra(r7)     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.videocommon.b.d r7 = com.mbridge.msdk.videocommon.b.d.b(r7)     // Catch: java.lang.Throwable -> L2f1
            r1.d = r7     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r7 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.INTENT_USERID     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r7 = r6.getStringExtra(r7)     // Catch: java.lang.Throwable -> L2f1
            r1.c = r7     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r7 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.INTENT_MUTE     // Catch: java.lang.Throwable -> L2f1
            r9 = 2
            int r7 = r6.getIntExtra(r7, r9)     // Catch: java.lang.Throwable -> L2f1
            r1.e = r7     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r7 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.INTENT_ISIV     // Catch: java.lang.Throwable -> L2f1
            r9 = 0
            boolean r7 = r6.getBooleanExtra(r7, r9)     // Catch: java.lang.Throwable -> L2f1
            r1.f = r7     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.foundation.controller.a r7 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L2f1
            boolean r10 = r1.f     // Catch: java.lang.Throwable -> L2f1
            r11 = 287(0x11f, float:4.02E-43)
            r12 = 94
            if (r10 == 0) goto L88
            r10 = r11
            goto L89
        L88:
            r10 = r12
        L89:
            r7.b(r10)     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r7 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.INTENT_ISBID     // Catch: java.lang.Throwable -> L2f1
            boolean r7 = r6.getBooleanExtra(r7, r9)     // Catch: java.lang.Throwable -> L2f1
            r1.g = r7     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r7 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.INTENT_EXTRADATA     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r7 = r6.getStringExtra(r7)     // Catch: java.lang.Throwable -> L2f1
            r1.z = r7     // Catch: java.lang.Throwable -> L2f1
            boolean r7 = r1.f     // Catch: java.lang.Throwable -> L2f1
            if (r7 == 0) goto Lb8
            java.lang.String r7 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.INTENT_IVREWARD_MODETYPE     // Catch: java.lang.Throwable -> L2f1
            int r7 = r6.getIntExtra(r7, r9)     // Catch: java.lang.Throwable -> L2f1
            r1.h = r7     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r7 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.INTENT_IVREWARD_VALUETYPE     // Catch: java.lang.Throwable -> L2f1
            int r7 = r6.getIntExtra(r7, r9)     // Catch: java.lang.Throwable -> L2f1
            r1.i = r7     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r7 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.INTENT_IVREWARD_VALUE     // Catch: java.lang.Throwable -> L2f1
            int r7 = r6.getIntExtra(r7, r9)     // Catch: java.lang.Throwable -> L2f1
            r1.j = r7     // Catch: java.lang.Throwable -> L2f1
        Lb8:
            com.mbridge.msdk.video.js.factory.b r7 = new com.mbridge.msdk.video.js.factory.b     // Catch: java.lang.Throwable -> L2f1
            r7.<init>(r1)     // Catch: java.lang.Throwable -> L2f1
            r1.jsFactory = r7     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.video.js.factory.IJSFactory r7 = r1.jsFactory     // Catch: java.lang.Throwable -> L2f1
            r1.registerJsFactory(r7)     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.video.bt.module.b.h r7 = r1.m     // Catch: java.lang.Throwable -> L2f1
            if (r7 != 0) goto Lce
            java.lang.String r0 = "showRewardListener is null"
            r1.a(r0)     // Catch: java.lang.Throwable -> L2f1
            return
        Lce:
            com.mbridge.msdk.reward.adapter.RewardUnitCacheManager r7 = com.mbridge.msdk.reward.adapter.RewardUnitCacheManager.getInstance()     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r10 = r1.b     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r13 = r1.a     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.videocommon.d.c r7 = r7.get(r10, r13)     // Catch: java.lang.Throwable -> L2f1
            r1.n = r7     // Catch: java.lang.Throwable -> L2f1
            if (r7 != 0) goto L10a
            com.mbridge.msdk.videocommon.d.b r7 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.foundation.controller.a r10 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r10 = r10.k()     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r13 = r1.a     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.videocommon.d.c r7 = r7.a(r10, r13)     // Catch: java.lang.Throwable -> L2f1
            r1.n = r7     // Catch: java.lang.Throwable -> L2f1
            if (r7 != 0) goto L10a
            com.mbridge.msdk.videocommon.d.b r7 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.foundation.controller.a r10 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r10 = r10.k()     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r13 = r1.a     // Catch: java.lang.Throwable -> L2f1
            boolean r14 = r1.f     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.videocommon.d.c r7 = r7.a(r10, r13, r14)     // Catch: java.lang.Throwable -> L2f1
            r1.n = r7     // Catch: java.lang.Throwable -> L2f1
        L10a:
            com.mbridge.msdk.videocommon.d.c r7 = r1.n     // Catch: java.lang.Throwable -> L2f1
            if (r7 == 0) goto L124
            com.mbridge.msdk.videocommon.b.d r7 = r1.d     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.videocommon.d.c r10 = r1.n     // Catch: java.lang.Throwable -> L2f1
            int r10 = r10.m()     // Catch: java.lang.Throwable -> L2f1
            r7.a(r10)     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.videocommon.b.d r7 = r1.d     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.videocommon.d.c r10 = r1.n     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r10 = r10.n()     // Catch: java.lang.Throwable -> L2f1
            r7.a(r10)     // Catch: java.lang.Throwable -> L2f1
        L124:
            com.mbridge.msdk.videocommon.b.d r7 = r1.d     // Catch: java.lang.Throwable -> L2f1
            if (r7 == 0) goto L135
            com.mbridge.msdk.videocommon.b.d r7 = r1.d     // Catch: java.lang.Throwable -> L2f1
            int r7 = r7.b()     // Catch: java.lang.Throwable -> L2f1
            if (r7 > 0) goto L135
            com.mbridge.msdk.videocommon.b.d r7 = r1.d     // Catch: java.lang.Throwable -> L2f1
            r7.a(r5)     // Catch: java.lang.Throwable -> L2f1
        L135:
            java.lang.String r7 = "mbridge_reward_activity_open"
            int r7 = com.mbridge.msdk.foundation.tools.s.a(r1, r7, r4)     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r10 = "mbridge_reward_activity_stay"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r1, r10, r4)     // Catch: java.lang.Throwable -> L2f1
            if (r7 <= r5) goto L148
            if (r4 <= r5) goto L148
            r1.overridePendingTransition(r7, r4)     // Catch: java.lang.Throwable -> L2f1
        L148:
            if (r0 == 0) goto L157
            java.lang.String r4 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.SAVE_STATE_KEY_REPORT     // Catch: java.lang.Exception -> L153 java.lang.Throwable -> L2f1
            boolean r0 = r0.getBoolean(r4)     // Catch: java.lang.Exception -> L153 java.lang.Throwable -> L2f1
            r1.p = r0     // Catch: java.lang.Exception -> L153 java.lang.Throwable -> L2f1
            goto L157
        L153:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L2f1
        L157:
            com.mbridge.msdk.videocommon.download.b r0 = com.mbridge.msdk.videocommon.download.b.getInstance()     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r4 = r1.a     // Catch: java.lang.Throwable -> L2f1
            java.util.concurrent.CopyOnWriteArrayList r0 = r0.b(r4)     // Catch: java.lang.Throwable -> L2f1
            r1.s = r0     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r0 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.INTENT_ISBIG_OFFER     // Catch: java.lang.Throwable -> L2f1
            boolean r0 = r6.getBooleanExtra(r0, r9)     // Catch: java.lang.Throwable -> L2f1
            r1.k = r0     // Catch: java.lang.Throwable -> L2f1
            if (r0 != 0) goto L1ac
            java.util.List<com.mbridge.msdk.videocommon.download.a> r0 = r1.s     // Catch: java.lang.Throwable -> L2f1
            if (r0 == 0) goto L183
            java.util.List<com.mbridge.msdk.videocommon.download.a> r0 = r1.s     // Catch: java.lang.Throwable -> L2f1
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L2f1
            if (r0 <= 0) goto L183
            java.util.List<com.mbridge.msdk.videocommon.download.a> r0 = r1.s     // Catch: java.lang.Throwable -> L2f1
            java.lang.Object r0 = r0.get(r9)     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.videocommon.download.a r0 = (com.mbridge.msdk.videocommon.download.a) r0     // Catch: java.lang.Throwable -> L2f1
            r1.q = r0     // Catch: java.lang.Throwable -> L2f1
        L183:
            com.mbridge.msdk.videocommon.download.a r0 = r1.q     // Catch: java.lang.Throwable -> L2f1
            if (r0 == 0) goto L199
            com.mbridge.msdk.videocommon.download.a r0 = r1.q     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.g()     // Catch: java.lang.Throwable -> L2f1
            r1.r = r0     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.videocommon.download.a r0 = r1.q     // Catch: java.lang.Throwable -> L2f1
            r0.a(r5)     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.videocommon.download.a r0 = r1.q     // Catch: java.lang.Throwable -> L2f1
            r0.b(r9)     // Catch: java.lang.Throwable -> L2f1
        L199:
            com.mbridge.msdk.videocommon.download.a r0 = r1.q     // Catch: java.lang.Throwable -> L2f1
            if (r0 == 0) goto L1a5
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.r     // Catch: java.lang.Throwable -> L2f1
            if (r0 == 0) goto L1a5
            com.mbridge.msdk.videocommon.b.d r0 = r1.d     // Catch: java.lang.Throwable -> L2f1
            if (r0 != 0) goto L1a8
        L1a5:
            r1.a(r8)     // Catch: java.lang.Throwable -> L2f1
        L1a8:
            r19.a()     // Catch: java.lang.Throwable -> L2f1
            return
        L1ac:
            com.mbridge.msdk.videocommon.download.b r0 = com.mbridge.msdk.videocommon.download.b.getInstance()     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r4 = r1.a     // Catch: java.lang.Throwable -> L2f1
            java.util.concurrent.CopyOnWriteArrayList r0 = r0.a(r4)     // Catch: java.lang.Throwable -> L2f1
            r1.t = r0     // Catch: java.lang.Throwable -> L2f1
            r1.y = r3     // Catch: java.lang.Throwable -> L2f1
            if (r0 == 0) goto L1d4
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L2f1
            if (r0 <= 0) goto L1d4
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.t     // Catch: java.lang.Throwable -> L2f1
            java.lang.Object r0 = r0.get(r9)     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r3 = r0.getCMPTEntryUrl()     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r0 = r0.getRequestId()     // Catch: java.lang.Throwable -> L2f1
            r1.y = r0     // Catch: java.lang.Throwable -> L2f1
        L1d4:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2f1
            r0.<init>()     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r4 = r1.a     // Catch: java.lang.Throwable -> L2f1
            r0.append(r4)     // Catch: java.lang.Throwable -> L2f1
            r0.append(r2)     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r4 = r1.y     // Catch: java.lang.Throwable -> L2f1
            r0.append(r4)     // Catch: java.lang.Throwable -> L2f1
            r0.append(r2)     // Catch: java.lang.Throwable -> L2f1
            r0.append(r3)     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.videocommon.a$a r0 = com.mbridge.msdk.videocommon.a.a(r0)     // Catch: java.lang.Throwable -> L2f1
            r2 = 0
            if (r0 == 0) goto L1fc
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r0.a()     // Catch: java.lang.Throwable -> L2f1
            goto L1fd
        L1fc:
            r0 = r2
        L1fd:
            r1.w = r0     // Catch: java.lang.Throwable -> L2f1
            if (r0 != 0) goto L2ed
            com.mbridge.msdk.videocommon.download.a r0 = r1.q     // Catch: java.lang.Throwable -> L2f1
            if (r0 != 0) goto L21b
            java.util.List<com.mbridge.msdk.videocommon.download.a> r0 = r1.s     // Catch: java.lang.Throwable -> L2f1
            if (r0 == 0) goto L21b
            java.util.List<com.mbridge.msdk.videocommon.download.a> r0 = r1.s     // Catch: java.lang.Throwable -> L2f1
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L2f1
            if (r0 <= 0) goto L21b
            java.util.List<com.mbridge.msdk.videocommon.download.a> r0 = r1.s     // Catch: java.lang.Throwable -> L2f1
            java.lang.Object r0 = r0.get(r9)     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.videocommon.download.a r0 = (com.mbridge.msdk.videocommon.download.a) r0     // Catch: java.lang.Throwable -> L2f1
            r1.q = r0     // Catch: java.lang.Throwable -> L2f1
        L21b:
            com.mbridge.msdk.videocommon.download.a r0 = r1.q     // Catch: java.lang.Throwable -> L2f1
            if (r0 != 0) goto L239
            com.mbridge.msdk.videocommon.download.b r0 = com.mbridge.msdk.videocommon.download.b.getInstance()     // Catch: java.lang.Throwable -> L2f1
            boolean r3 = r1.f     // Catch: java.lang.Throwable -> L2f1
            if (r3 == 0) goto L228
            goto L229
        L228:
            r11 = r12
        L229:
            java.lang.String r3 = r1.a     // Catch: java.lang.Throwable -> L2f1
            boolean r4 = r1.g     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.videocommon.download.d r0 = r0.c(r3)     // Catch: java.lang.Throwable -> L2f1
            if (r0 == 0) goto L237
            com.mbridge.msdk.videocommon.download.a r2 = r0.b(r11, r4)     // Catch: java.lang.Throwable -> L2f1
        L237:
            r1.q = r2     // Catch: java.lang.Throwable -> L2f1
        L239:
            com.mbridge.msdk.videocommon.download.a r0 = r1.q     // Catch: java.lang.Throwable -> L2f1
            if (r0 == 0) goto L24f
            com.mbridge.msdk.videocommon.download.a r0 = r1.q     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.g()     // Catch: java.lang.Throwable -> L2f1
            r1.r = r0     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.videocommon.download.a r0 = r1.q     // Catch: java.lang.Throwable -> L2f1
            r0.a(r5)     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.videocommon.download.a r0 = r1.q     // Catch: java.lang.Throwable -> L2f1
            r0.b(r9)     // Catch: java.lang.Throwable -> L2f1
        L24f:
            com.mbridge.msdk.videocommon.download.a r0 = r1.q     // Catch: java.lang.Throwable -> L2f1
            if (r0 == 0) goto L25b
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.r     // Catch: java.lang.Throwable -> L2f1
            if (r0 == 0) goto L25b
            com.mbridge.msdk.videocommon.b.d r0 = r1.d     // Catch: java.lang.Throwable -> L2f1
            if (r0 != 0) goto L25e
        L25b:
            r1.a(r8)     // Catch: java.lang.Throwable -> L2f1
        L25e:
            r1.k = r9     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = r1.r     // Catch: java.lang.Exception -> L281 java.lang.Throwable -> L2f1
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L281 java.lang.Throwable -> L2f1
            android.content.Context r11 = r0.j()     // Catch: java.lang.Exception -> L281 java.lang.Throwable -> L2f1
            java.lang.String r12 = "showMoreOffer showBTOld"
            java.lang.String r13 = r1.a     // Catch: java.lang.Exception -> L281 java.lang.Throwable -> L2f1
            boolean r14 = r1.g     // Catch: java.lang.Exception -> L281 java.lang.Throwable -> L2f1
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.r     // Catch: java.lang.Exception -> L281 java.lang.Throwable -> L2f1
            java.lang.String r15 = r0.getRequestId()     // Catch: java.lang.Exception -> L281 java.lang.Throwable -> L2f1
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.r     // Catch: java.lang.Exception -> L281 java.lang.Throwable -> L2f1
            java.lang.String r16 = r0.getRequestIdNotice()     // Catch: java.lang.Exception -> L281 java.lang.Throwable -> L2f1
            r17 = 0
            com.mbridge.msdk.reward.b.a.a(r10, r11, r12, r13, r14, r15, r16, r17)     // Catch: java.lang.Exception -> L281 java.lang.Throwable -> L2f1
        L281:
            com.mbridge.msdk.videocommon.a.a r0 = com.mbridge.msdk.videocommon.a.a.a()     // Catch: java.lang.Throwable -> L2f1
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r1.t     // Catch: java.lang.Throwable -> L2f1
            java.util.List r0 = r0.a(r2)     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r2 = "no available campaign"
            if (r0 != 0) goto L293
            r1.a(r2)     // Catch: java.lang.Throwable -> L2f1
            return
        L293:
            int r3 = r0.size()     // Catch: java.lang.Throwable -> L2f1
            if (r3 != 0) goto L29d
            r1.a(r2)     // Catch: java.lang.Throwable -> L2f1
            return
        L29d:
            java.lang.Object r2 = r0.get(r9)     // Catch: java.lang.Throwable -> L2f1
            if (r2 == 0) goto L2e9
            java.lang.Object r2 = r0.get(r9)     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2     // Catch: java.lang.Throwable -> L2f1
            boolean r2 = r2.isDynamicView()     // Catch: java.lang.Throwable -> L2f1
            if (r2 == 0) goto L2e9
            if (r3 != r5) goto L2e5
            java.lang.Object r0 = r0.get(r9)     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0     // Catch: java.lang.Throwable -> L2f1
            r1.r = r0     // Catch: java.lang.Throwable -> L2f1
            if (r0 == 0) goto L2df
            r0.setCampaignIsFiltered(r5)     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r1.r     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L2f1
            android.content.Context r7 = r0.j()     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r8 = "no available campaign but to one offer show"
            java.lang.String r9 = r1.a     // Catch: java.lang.Throwable -> L2f1
            boolean r10 = r1.g     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.r     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r11 = r0.getRequestId()     // Catch: java.lang.Throwable -> L2f1
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.r     // Catch: java.lang.Throwable -> L2f1
            java.lang.String r12 = r0.getRequestIdNotice()     // Catch: java.lang.Throwable -> L2f1
            r13 = 0
            com.mbridge.msdk.reward.b.a.a(r6, r7, r8, r9, r10, r11, r12, r13)     // Catch: java.lang.Throwable -> L2f1
        L2df:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.r     // Catch: java.lang.Throwable -> L2f1
            r1.a(r0)     // Catch: java.lang.Throwable -> L2f1
            goto L306
        L2e5:
            r1.a(r0)     // Catch: java.lang.Throwable -> L2f1
            goto L306
        L2e9:
            r19.a()     // Catch: java.lang.Throwable -> L2f1
            goto L306
        L2ed:
            r19.b()     // Catch: java.lang.Throwable -> L2f1
            goto L306
        L2f1:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "onCreate error"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.a(r0)
        L306:
            return
    }

    @Override
    public void onDestroy() {
            r5 = this;
            super.onDestroy()
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r5.t     // Catch: java.lang.Throwable -> L2f
            if (r0 == 0) goto L25
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r5.t     // Catch: java.lang.Throwable -> L2f
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L2f
            if (r0 <= 0) goto L25
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r5.t     // Catch: java.lang.Throwable -> L2f
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L2f
        L15:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L2f
            if (r1 == 0) goto L25
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L2f
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1     // Catch: java.lang.Throwable -> L2f
            r5.c(r1)     // Catch: java.lang.Throwable -> L2f
            goto L15
        L25:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.r     // Catch: java.lang.Throwable -> L2f
            if (r0 == 0) goto L39
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.r     // Catch: java.lang.Throwable -> L2f
            r5.c(r0)     // Catch: java.lang.Throwable -> L2f
            goto L39
        L2f:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBRewardVideoActivity"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L39:
            java.lang.String r0 = r5.a
            com.mbridge.msdk.video.module.b.b.a(r0)
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r5.u
            r1 = 0
            if (r0 == 0) goto L48
            r0.onDestroy()
            r5.u = r1
        L48:
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r5.v
            if (r0 == 0) goto L51
            r0.onDestroy()
            r5.v = r1
        L51:
            r5.I = r1
            r5.J = r1
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.a()
            com.mbridge.msdk.reward.player.MBRewardVideoActivity$a r1 = new com.mbridge.msdk.reward.player.MBRewardVideoActivity$a
            java.util.List<com.mbridge.msdk.videocommon.download.a> r2 = r5.s
            java.lang.String r3 = r5.a
            java.lang.String r4 = r5.y
            r1.<init>(r2, r3, r4)
            r0.execute(r1)
            return
    }

    @Override
    public void onPause() {
            r1 = this;
            super.onPause()
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r1.u
            if (r0 == 0) goto La
            r0.onPause()
        La:
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r1.v
            if (r0 == 0) goto L11
            r0.onPause()
        L11:
            return
    }

    @Override
    protected void onRestart() {
            r1 = this;
            super.onRestart()
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r1.u
            if (r0 == 0) goto La
            r0.onRestart()
        La:
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r1.v
            if (r0 == 0) goto L11
            r0.onRestart()
        L11:
            return
    }

    @Override
    public void onResume() {
            r4 = this;
            super.onResume()
            boolean r0 = com.mbridge.msdk.foundation.b.b.c
            if (r0 == 0) goto L8
            return
        L8:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            r0.a(r4)
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.a()     // Catch: java.lang.Throwable -> L20
            com.mbridge.msdk.reward.player.MBRewardVideoActivity$c r1 = new com.mbridge.msdk.reward.player.MBRewardVideoActivity$c     // Catch: java.lang.Throwable -> L20
            java.lang.String r2 = r4.a     // Catch: java.lang.Throwable -> L20
            java.util.List<com.mbridge.msdk.videocommon.download.a> r3 = r4.s     // Catch: java.lang.Throwable -> L20
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L20
            r0.execute(r1)     // Catch: java.lang.Throwable -> L20
            goto L2a
        L20:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBRewardVideoActivity"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L2a:
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r4.u
            if (r0 == 0) goto L31
            r0.onResume()
        L31:
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r4.v
            if (r0 == 0) goto L38
            r0.onResume()
        L38:
            return
    }

    @Override
    public void onSaveInstanceState(android.os.Bundle r3) {
            r2 = this;
            java.lang.String r0 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.SAVE_STATE_KEY_REPORT
            boolean r1 = r2.p
            r3.putBoolean(r0, r1)
            super.onSaveInstanceState(r3)
            return
    }

    @Override
    protected void onStart() {
            r6 = this;
            super.onStart()
            com.mbridge.msdk.reward.player.MBRewardVideoActivity$4 r0 = new com.mbridge.msdk.reward.player.MBRewardVideoActivity$4
            r0.<init>(r6)
            boolean r0 = com.mbridge.msdk.foundation.b.b.c
            if (r0 == 0) goto Ld
            return
        Ld:
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r6.u
            java.lang.String r1 = "_"
            r2 = 1
            if (r0 == 0) goto L3b
            r0.onStart()
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r6.r
            java.lang.String r3 = r6.a
            r0.setCampaignUnitId(r3)
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = r6.a
            r3.append(r4)
            r3.append(r1)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r6.r
            r0.a(r3, r4)
        L3b:
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r6.v
            if (r0 == 0) goto L75
            r0.onStart()
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r6.t
            if (r0 == 0) goto L75
            int r0 = r0.size()
            if (r0 <= 0) goto L75
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r6.t
            r3 = 0
            java.lang.Object r0 = r0.get(r3)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            java.lang.String r3 = r6.a
            r0.setCampaignUnitId(r3)
            com.mbridge.msdk.foundation.b.b r3 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = r6.a
            r4.append(r5)
            r4.append(r1)
            r4.append(r2)
            java.lang.String r4 = r4.toString()
            r3.a(r4, r0)
        L75:
            boolean r0 = r6.A
            if (r0 != 0) goto Lb2
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = r6.a
            r3.append(r4)
            r3.append(r1)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            r0.c(r3, r2)
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = r6.a
            r3.append(r4)
            r3.append(r1)
            r1 = 2
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r0.c(r1)
            r6.A = r2
        Lb2:
            return
    }

    @Override
    protected void onStop() {
            r1 = this;
            r0 = 0
            com.mbridge.msdk.MBridgeConstans.isRewardActivityShowing = r0
            super.onStop()
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r1.u
            if (r0 == 0) goto Ld
            r0.onStop()
        Ld:
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r1.v
            if (r0 == 0) goto L14
            r0.onStop()
        L14:
            return
    }

    @Override
    public void setTheme(int r2) {
            r1 = this;
            java.lang.String r2 = "mbridge_transparent_theme"
            java.lang.String r0 = "style"
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r1, r2, r0)
            super.setTheme(r2)
            return
    }

    @Override
    public void setTopControllerPadding(int r8, int r9, int r10, int r11, int r12) {
            r7 = this;
            r7.D = r9
            r7.F = r10
            r7.E = r11
            r7.G = r12
            r7.H = r8
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r7.u
            if (r0 == 0) goto L16
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.setNotchPadding(r1, r2, r3, r4, r5)
        L16:
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r1 = r7.v
            if (r1 == 0) goto L22
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r1.setNotchPadding(r2, r3, r4, r5, r6)
        L22:
            com.mbridge.msdk.video.dynview.a.a.e = r8
            com.mbridge.msdk.video.dynview.a.a.a = r9
            com.mbridge.msdk.video.dynview.a.a.b = r10
            com.mbridge.msdk.video.dynview.a.a.c = r11
            com.mbridge.msdk.video.dynview.a.a.d = r12
            return
    }
}
