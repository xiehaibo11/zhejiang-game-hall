package com.tkay.expressad.reward.player;

public class TYRewardVideoActivity extends com.tkay.expressad.video.signal.activity.AbstractJSActivity {
    public static java.lang.String a = "unitId";
    public static java.lang.String b = "userId";
    public static java.lang.String c = "reward";
    public static java.lang.String d = "mute";
    public static java.lang.String e = "isIV";
    public static java.lang.String f = "isBid";
    public static java.lang.String g = "isBigOffer";
    public static java.lang.String h = "hasRelease";
    public static java.lang.String i = "ivRewardMode";
    public static java.lang.String j = "ivRewardValueType";
    public static java.lang.String k = "ivRewardValue";
    public static java.lang.String l = "extraData";
    public static java.lang.String m = "baserequestInfo";
    private static final java.lang.String p = "TYRewardVideoActivity";
    private boolean A;
    private boolean B;
    private com.tkay.expressad.video.bt.module.b.h C;
    private com.tkay.expressad.videocommon.e.d D;
    private boolean E;
    private boolean F;
    private com.tkay.expressad.videocommon.b.a G;
    private com.tkay.expressad.foundation.d.c H;
    private java.util.List<com.tkay.expressad.videocommon.b.a> I;
    private java.util.List<com.tkay.expressad.foundation.d.c> J;
    private com.tkay.expressad.video.bt.module.TYTempContainer K;
    private com.tkay.expressad.video.bt.module.TkayBTContainer L;
    private com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView M;
    private com.tkay.expressad.video.bt.module.a.a N;
    private java.lang.String O;
    private java.lang.String P;
    private boolean Q;
    private int R;
    private int S;
    private int T;
    private int U;
    private int V;
    private int W;
    private int X;
    private com.tkay.expressad.video.dynview.f.a Y;
    private com.tkay.expressad.video.dynview.f.d Z;
    private java.lang.String q;
    private java.lang.String r;
    private java.lang.String s;
    private com.tkay.expressad.videocommon.c.c t;
    private int u;
    private boolean v;
    private boolean w;
    private int x;
    private int y;
    private int z;





    private static final class a implements java.lang.Runnable {
        private final java.util.List<com.tkay.expressad.videocommon.b.a> a;
        private final java.lang.String b;
        private final java.lang.String c;

        public a(java.util.List<com.tkay.expressad.videocommon.b.a> r1, java.lang.String r2, java.lang.String r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }

        @Override
        public final void run() {
                r5 = this;
                java.util.List<com.tkay.expressad.videocommon.b.a> r0 = r5.a     // Catch: java.lang.Exception -> Ld7
                if (r0 == 0) goto Ld6
                java.util.List<com.tkay.expressad.videocommon.b.a> r0 = r5.a     // Catch: java.lang.Exception -> Ld7
                int r0 = r0.size()     // Catch: java.lang.Exception -> Ld7
                if (r0 <= 0) goto Ld6
                java.util.List<com.tkay.expressad.videocommon.b.a> r0 = r5.a     // Catch: java.lang.Exception -> Ld7
                java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> Ld7
            L12:
                boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> Ld7
                if (r1 == 0) goto Ld6
                java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> Ld7
                com.tkay.expressad.videocommon.b.a r1 = (com.tkay.expressad.videocommon.b.a) r1     // Catch: java.lang.Exception -> Ld7
                if (r1 == 0) goto L12
                com.tkay.expressad.foundation.d.c r2 = r1.n()     // Catch: java.lang.Exception -> Ld7
                if (r2 == 0) goto L12
                com.tkay.expressad.foundation.d.c r1 = r1.n()     // Catch: java.lang.Exception -> Ld7
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld7
                r2.<init>()     // Catch: java.lang.Exception -> Ld7
                java.lang.String r3 = r1.Z()     // Catch: java.lang.Exception -> Ld7
                r2.append(r3)     // Catch: java.lang.Exception -> Ld7
                java.lang.String r3 = r1.aZ()     // Catch: java.lang.Exception -> Ld7
                r2.append(r3)     // Catch: java.lang.Exception -> Ld7
                java.lang.String r3 = r1.S()     // Catch: java.lang.Exception -> Ld7
                r2.append(r3)     // Catch: java.lang.Exception -> Ld7
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Ld7
                com.tkay.expressad.videocommon.b.c r3 = com.tkay.expressad.videocommon.b.c.a()     // Catch: java.lang.Exception -> Ld7
                java.lang.String r4 = r5.b     // Catch: java.lang.Exception -> Ld7
                com.tkay.expressad.videocommon.b.n r3 = r3.c(r4)     // Catch: java.lang.Exception -> Ld7
                if (r3 == 0) goto L57
                r3.b(r2)     // Catch: java.lang.Exception -> L57
            L57:
                if (r1 == 0) goto L12
                com.tkay.expressad.foundation.d.c$c r2 = r1.M()     // Catch: java.lang.Exception -> Ld7
                if (r2 == 0) goto L12
                com.tkay.expressad.foundation.d.c$c r2 = r1.M()     // Catch: java.lang.Exception -> Ld7
                java.lang.String r2 = r2.e()     // Catch: java.lang.Exception -> Ld7
                boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Ld7
                java.lang.String r3 = "_"
                if (r2 != 0) goto La7
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld7
                r2.<init>()     // Catch: java.lang.Exception -> Ld7
                java.lang.String r4 = r5.b     // Catch: java.lang.Exception -> Ld7
                r2.append(r4)     // Catch: java.lang.Exception -> Ld7
                r2.append(r3)     // Catch: java.lang.Exception -> Ld7
                java.lang.String r4 = r1.aZ()     // Catch: java.lang.Exception -> Ld7
                r2.append(r4)     // Catch: java.lang.Exception -> Ld7
                r2.append(r3)     // Catch: java.lang.Exception -> Ld7
                java.lang.String r4 = r5.c     // Catch: java.lang.Exception -> Ld7
                r2.append(r4)     // Catch: java.lang.Exception -> Ld7
                r2.append(r3)     // Catch: java.lang.Exception -> Ld7
                com.tkay.expressad.foundation.d.c$c r4 = r1.M()     // Catch: java.lang.Exception -> Ld7
                java.lang.String r4 = r4.e()     // Catch: java.lang.Exception -> Ld7
                r2.append(r4)     // Catch: java.lang.Exception -> Ld7
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Ld7
                com.tkay.expressad.videocommon.a.b(r2)     // Catch: java.lang.Exception -> Ld7
                int r2 = r1.w()     // Catch: java.lang.Exception -> Ld7
                com.tkay.expressad.videocommon.a.b(r2, r1)     // Catch: java.lang.Exception -> Ld7
            La7:
                java.lang.String r2 = r1.ar()     // Catch: java.lang.Exception -> Ld7
                boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Ld7
                if (r2 != 0) goto L12
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld7
                r2.<init>()     // Catch: java.lang.Exception -> Ld7
                java.lang.String r4 = r5.b     // Catch: java.lang.Exception -> Ld7
                r2.append(r4)     // Catch: java.lang.Exception -> Ld7
                r2.append(r3)     // Catch: java.lang.Exception -> Ld7
                java.lang.String r4 = r5.c     // Catch: java.lang.Exception -> Ld7
                r2.append(r4)     // Catch: java.lang.Exception -> Ld7
                r2.append(r3)     // Catch: java.lang.Exception -> Ld7
                java.lang.String r1 = r1.ar()     // Catch: java.lang.Exception -> Ld7
                r2.append(r1)     // Catch: java.lang.Exception -> Ld7
                java.lang.String r1 = r2.toString()     // Catch: java.lang.Exception -> Ld7
                com.tkay.expressad.videocommon.a.b(r1)     // Catch: java.lang.Exception -> Ld7
                goto L12
            Ld6:
                return
            Ld7:
                r0 = move-exception
                r0.getMessage()
                return
        }
    }

    static {
            return
    }

    public TYRewardVideoActivity() {
            r2 = this;
            r2.<init>()
            r0 = 2
            r2.u = r0
            r0 = 0
            r2.v = r0
            r2.w = r0
            r2.A = r0
            r2.B = r0
            r2.E = r0
            r2.F = r0
            r1 = 1
            r2.R = r1
            r2.S = r0
            r2.T = r0
            r2.U = r0
            r2.V = r0
            r2.W = r0
            r2.X = r0
            com.tkay.expressad.reward.player.TYRewardVideoActivity$1 r0 = new com.tkay.expressad.reward.player.TYRewardVideoActivity$1
            r0.<init>(r2)
            r2.Y = r0
            com.tkay.expressad.reward.player.TYRewardVideoActivity$2 r0 = new com.tkay.expressad.reward.player.TYRewardVideoActivity$2
            r0.<init>(r2)
            r2.Z = r0
            return
    }

    private int a(int r6, int r7) {
            r5 = this;
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r5.J
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
            java.util.List<com.tkay.expressad.foundation.d.c> r4 = r5.J
            int r4 = r4.size()
            if (r1 >= r4) goto L3e
            java.util.List<com.tkay.expressad.foundation.d.c> r4 = r5.J
            java.lang.Object r4 = r4.get(r0)
            if (r4 == 0) goto L3b
            if (r1 != 0) goto L2e
            java.util.List<com.tkay.expressad.foundation.d.c> r3 = r5.J
            java.lang.Object r3 = r3.get(r0)
            com.tkay.expressad.foundation.d.c r3 = (com.tkay.expressad.foundation.d.c) r3
            int r3 = r3.i()
        L2e:
            java.util.List<com.tkay.expressad.foundation.d.c> r4 = r5.J
            java.lang.Object r4 = r4.get(r1)
            com.tkay.expressad.foundation.d.c r4 = (com.tkay.expressad.foundation.d.c) r4
            int r4 = r4.bi()
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
            java.util.List<com.tkay.expressad.foundation.d.c> r2 = r5.J
            java.lang.Object r2 = r2.get(r6)
            if (r2 == 0) goto L6b
            java.util.List<com.tkay.expressad.foundation.d.c> r2 = r5.J
            java.lang.Object r2 = r2.get(r6)
            com.tkay.expressad.foundation.d.c r2 = (com.tkay.expressad.foundation.d.c) r2
            int r2 = r2.bi()
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

    static int a(com.tkay.expressad.reward.player.TYRewardVideoActivity r0, int r1) {
            r0.u = r1
            return r1
    }

    static int a(com.tkay.expressad.reward.player.TYRewardVideoActivity r0, int r1, int r2) {
            int r0 = r0.a(r1, r2)
            return r0
    }

    private static com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView a(java.lang.String r0) {
            com.tkay.expressad.videocommon.a$a r0 = com.tkay.expressad.videocommon.a.a(r0)
            if (r0 == 0) goto Lb
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r0.a()
            return r0
        Lb:
            r0 = 0
            return r0
    }

    static com.tkay.expressad.foundation.d.c a(com.tkay.expressad.reward.player.TYRewardVideoActivity r0, com.tkay.expressad.foundation.d.c r1) {
            r0.H = r1
            return r1
    }

    static java.util.List a(com.tkay.expressad.reward.player.TYRewardVideoActivity r0) {
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r0.J
            return r0
    }

    private void a(int r6) {
            r5 = this;
            com.tkay.expressad.foundation.d.c r0 = r5.H     // Catch: java.lang.Throwable -> L61
            if (r0 == 0) goto L60
            com.tkay.expressad.foundation.d.c r0 = r5.H     // Catch: java.lang.Throwable -> L61
            int r0 = r0.f()     // Catch: java.lang.Throwable -> L61
            r1 = 2
            if (r0 != r1) goto L60
            android.view.Window r0 = r5.getWindow()     // Catch: java.lang.Throwable -> L61
            android.view.View r0 = r0.getDecorView()     // Catch: java.lang.Throwable -> L61
            android.graphics.drawable.ColorDrawable r2 = new android.graphics.drawable.ColorDrawable     // Catch: java.lang.Throwable -> L61
            r3 = 0
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L61
            r0.setBackgroundDrawable(r2)     // Catch: java.lang.Throwable -> L61
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r5.K     // Catch: java.lang.Throwable -> L61
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()     // Catch: java.lang.Throwable -> L61
            android.widget.FrameLayout$LayoutParams r0 = (android.widget.FrameLayout.LayoutParams) r0     // Catch: java.lang.Throwable -> L61
            r2 = 1114112000(0x42680000, float:58.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r5, r2)     // Catch: java.lang.Throwable -> L61
            r3 = 1120927744(0x42d00000, float:104.0)
            int r3 = com.tkay.expressad.foundation.h.t.b(r5, r3)     // Catch: java.lang.Throwable -> L61
            com.tkay.expressad.foundation.d.c r4 = r5.H     // Catch: java.lang.Throwable -> L61
            com.tkay.expressad.foundation.d.c$c r4 = r4.M()     // Catch: java.lang.Throwable -> L61
            int r4 = r4.c()     // Catch: java.lang.Throwable -> L61
            if (r4 != 0) goto L48
            if (r6 != r1) goto L44
            r0.setMargins(r3, r2, r3, r2)     // Catch: java.lang.Throwable -> L61
            goto L5b
        L44:
            r0.setMargins(r2, r3, r2, r3)     // Catch: java.lang.Throwable -> L61
            goto L5b
        L48:
            com.tkay.expressad.foundation.d.c r6 = r5.H     // Catch: java.lang.Throwable -> L61
            com.tkay.expressad.foundation.d.c$c r6 = r6.M()     // Catch: java.lang.Throwable -> L61
            int r6 = r6.c()     // Catch: java.lang.Throwable -> L61
            if (r6 != r1) goto L58
            r0.setMargins(r3, r2, r3, r2)     // Catch: java.lang.Throwable -> L61
            goto L5b
        L58:
            r0.setMargins(r2, r3, r2, r3)     // Catch: java.lang.Throwable -> L61
        L5b:
            com.tkay.expressad.video.bt.module.TYTempContainer r6 = r5.K     // Catch: java.lang.Throwable -> L61
            r6.setLayoutParams(r0)     // Catch: java.lang.Throwable -> L61
        L60:
            return
        L61:
            r6 = move-exception
            r6.getMessage()
            return
    }

    private void a(com.tkay.expressad.foundation.d.c r3) {
            r2 = this;
            if (r3 == 0) goto L1f
            int r0 = r3.i()
            int r1 = r2.R
            int r0 = r2.a(r0, r1)
            r2.H = r3
            r3.m()
            r3 = 1
            r2.R = r3
            com.tkay.expressad.foundation.d.c r3 = r2.H
            r3.b(r0)
            com.tkay.expressad.foundation.d.c r3 = r2.H
            r2.b(r3)
            return
        L1f:
            java.lang.String r3 = "campaign is less"
            r2.b(r3)
            return
    }

    static void a(com.tkay.expressad.reward.player.TYRewardVideoActivity r0, java.lang.String r1) {
            r0.b(r1)
            return
    }

    private void a(java.util.List<com.tkay.expressad.foundation.d.c> r5) {
            r4 = this;
            java.lang.String r0 = "no available campaign"
            if (r5 != 0) goto L8
            r4.b(r0)
            return
        L8:
            int r1 = r5.size()
            if (r1 != 0) goto L12
            r4.b(r0)
            return
        L12:
            r0 = 0
            java.lang.Object r1 = r5.get(r0)
            if (r1 == 0) goto L24
            java.lang.Object r1 = r5.get(r0)
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1
            int r1 = r1.k()
            goto L25
        L24:
            r1 = r0
        L25:
            r2 = 5
            if (r1 == r2) goto L2c
            r4.c()
            return
        L2c:
            java.util.Iterator r1 = r5.iterator()
        L30:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L48
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.foundation.d.c r2 = (com.tkay.expressad.foundation.d.c) r2
            if (r2 == 0) goto L30
            int r3 = r4.S
            int r2 = r2.bi()
            int r3 = r3 + r2
            r4.S = r3
            goto L30
        L48:
            java.lang.Object r5 = r5.get(r0)
            com.tkay.expressad.foundation.d.c r5 = (com.tkay.expressad.foundation.d.c) r5
            if (r5 == 0) goto L6d
            int r0 = r5.i()
            int r1 = r4.R
            int r0 = r4.a(r0, r1)
            r4.H = r5
            r5.m()
            r5 = 1
            r4.R = r5
            com.tkay.expressad.foundation.d.c r5 = r4.H
            r5.b(r0)
            com.tkay.expressad.foundation.d.c r5 = r4.H
            r4.b(r5)
            return
        L6d:
            java.lang.String r5 = "campaign is less"
            r4.b(r5)
            return
    }

    static int b(com.tkay.expressad.reward.player.TYRewardVideoActivity r2) {
            int r0 = r2.R
            int r1 = r0 + 1
            r2.R = r1
            return r0
    }

    static int b(com.tkay.expressad.reward.player.TYRewardVideoActivity r1, int r2) {
            int r0 = r1.S
            int r0 = r0 - r2
            r1.S = r0
            return r0
    }

    private void b() {
            r6 = this;
            java.lang.String r0 = "tkay_temp_container"
            int r0 = r6.c(r0)
            if (r0 >= 0) goto Ld
            java.lang.String r1 = "no id tkay_bt_container in tkay_more_offer_activity layout"
            r6.b(r1)
        Ld:
            android.view.View r0 = r6.findViewById(r0)
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = (com.tkay.expressad.video.bt.module.TYTempContainer) r0
            r6.K = r0
            if (r0 != 0) goto L1c
            java.lang.String r0 = "env error"
            r6.b(r0)
        L1c:
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r6.J
            r1 = 0
            if (r0 == 0) goto L40
            int r0 = r0.size()
            if (r0 <= 0) goto L40
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r6.J
            java.lang.Object r0 = r0.get(r1)
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            boolean r0 = r0.j()
            if (r0 == 0) goto L40
            com.tkay.expressad.video.dynview.h.b r0 = new com.tkay.expressad.video.dynview.h.b
            r0.<init>()
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            com.tkay.expressad.video.dynview.h.b.e(r0)
            goto L45
        L40:
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            r0.setVisibility(r1)
        L45:
            r0 = -1
            r6.a(r0)
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            r0.setVisibility(r1)
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            r0.setActivity(r6)
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            boolean r2 = r6.w
            r0.setBidCampaign(r2)
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            boolean r2 = r6.A
            r0.setBigOffer(r2)
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            java.lang.String r2 = r6.q
            r0.setUnitId(r2)
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            com.tkay.expressad.foundation.d.c r2 = r6.H
            r0.setCampaign(r2)
            com.tkay.expressad.foundation.d.c r0 = r6.H
            int r0 = r0.k()
            r2 = 5
            r3 = 1
            if (r0 != r2) goto Lab
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r6.J
            if (r0 == 0) goto Lab
            int r0 = r0.size()
            if (r0 <= r3) goto Lab
            java.lang.String r0 = "tkay_reward_root_container"
            int r0 = r6.c(r0)
            android.view.View r0 = r6.findViewById(r0)
            if (r0 == 0) goto L94
            r2 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r0.setBackgroundColor(r2)
        L94:
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            r0.removeAllViews()
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            java.util.List<com.tkay.expressad.foundation.d.c> r2 = r6.J
            int r4 = r6.S
            r0.setCampOrderViewData(r2, r4)
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            com.tkay.expressad.video.dynview.f.a r2 = r6.Y
            int r4 = r6.R
            r0.setCamPlayOrderCallback(r2, r4)
        Lab:
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            com.tkay.expressad.videocommon.b.a r2 = r6.G
            r0.setCampaignDownLoadTask(r2)
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            boolean r2 = r6.v
            r0.setIV(r2)
            com.tkay.expressad.foundation.d.c r0 = r6.H
            if (r0 == 0) goto Lca
            int r0 = r0.f()
            r2 = 2
            if (r0 != r2) goto Lca
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            r0.setIVRewardEnable(r1, r1, r1)
            goto Ld5
        Lca:
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            int r2 = r6.x
            int r4 = r6.y
            int r5 = r6.z
            r0.setIVRewardEnable(r2, r4, r5)
        Ld5:
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            int r2 = r6.u
            r0.setMute(r2)
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            java.lang.String r2 = r6.P
            r0.setDeveloperExtraData(r2)
            com.tkay.expressad.foundation.d.c r0 = r6.H
            if (r0 == 0) goto Leb
            com.tkay.expressad.foundation.d.p r0 = r0.aH
            if (r0 != 0) goto L109
        Leb:
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r6.J
            if (r0 == 0) goto L131
            int r0 = r0.size()
            if (r0 <= 0) goto L131
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r6.J
            java.lang.Object r0 = r0.get(r1)
            if (r0 == 0) goto L131
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r6.J
            java.lang.Object r0 = r0.get(r1)
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            com.tkay.expressad.foundation.d.p r0 = r0.aH
            if (r0 == 0) goto L131
        L109:
            java.lang.String r1 = r0.b()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L131
            int r1 = r0.a()
            if (r1 <= 0) goto L131
            com.tkay.expressad.videocommon.c.c r1 = new com.tkay.expressad.videocommon.c.c
            java.lang.String r2 = r0.b()
            int r0 = r0.a()
            r1.<init>(r2, r0)
            int r0 = r1.b()
            if (r0 >= 0) goto L12f
            r1.a(r3)
        L12f:
            r6.t = r1
        L131:
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            com.tkay.expressad.videocommon.c.c r1 = r6.t
            r0.setReward(r1)
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            com.tkay.expressad.videocommon.e.d r1 = r6.D
            r0.setRewardUnitSetting(r1)
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            java.lang.String r1 = r6.r
            r0.setPlacementId(r1)
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            java.lang.String r1 = r6.s
            r0.setUserId(r1)
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            com.tkay.expressad.video.bt.module.b.h r1 = r6.C
            r0.setShowRewardListener(r1)
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            r0.init(r6)
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            r0.onCreate()
            return
    }

    private void b(com.tkay.expressad.foundation.d.c r7) {
            r6 = this;
            java.util.List<com.tkay.expressad.videocommon.b.a> r0 = r6.I     // Catch: java.lang.Exception -> L5f
            if (r0 == 0) goto L45
            java.util.List<com.tkay.expressad.videocommon.b.a> r0 = r6.I     // Catch: java.lang.Exception -> L5f
            int r0 = r0.size()     // Catch: java.lang.Exception -> L5f
            if (r0 <= 0) goto L45
            java.util.List<com.tkay.expressad.videocommon.b.a> r0 = r6.I     // Catch: java.lang.Exception -> L5f
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L5f
        L12:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L5f
            if (r1 == 0) goto L45
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L5f
            com.tkay.expressad.videocommon.b.a r1 = (com.tkay.expressad.videocommon.b.a) r1     // Catch: java.lang.Exception -> L5f
            if (r1 == 0) goto L12
            com.tkay.expressad.foundation.d.c r2 = r1.n()     // Catch: java.lang.Exception -> L5f
            if (r2 == 0) goto L12
            java.lang.String r3 = r2.aZ()     // Catch: java.lang.Exception -> L5f
            java.lang.String r4 = r7.aZ()     // Catch: java.lang.Exception -> L5f
            boolean r3 = android.text.TextUtils.equals(r3, r4)     // Catch: java.lang.Exception -> L5f
            if (r3 == 0) goto L12
            java.lang.String r2 = r2.Z()     // Catch: java.lang.Exception -> L5f
            java.lang.String r3 = r7.Z()     // Catch: java.lang.Exception -> L5f
            boolean r2 = android.text.TextUtils.equals(r2, r3)     // Catch: java.lang.Exception -> L5f
            if (r2 == 0) goto L12
            r6.G = r1     // Catch: java.lang.Exception -> L5f
            goto L12
        L45:
            r7 = 1
            r6.A = r7     // Catch: java.lang.Exception -> L5f
            r6.b()     // Catch: java.lang.Exception -> L5f
            com.tkay.expressad.video.bt.module.TYTempContainer r7 = r6.K     // Catch: java.lang.Exception -> L5f
            if (r7 == 0) goto L5e
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K     // Catch: java.lang.Exception -> L5f
            int r1 = r6.X     // Catch: java.lang.Exception -> L5f
            int r2 = r6.T     // Catch: java.lang.Exception -> L5f
            int r3 = r6.V     // Catch: java.lang.Exception -> L5f
            int r4 = r6.U     // Catch: java.lang.Exception -> L5f
            int r5 = r6.W     // Catch: java.lang.Exception -> L5f
            r0.setNotchPadding(r1, r2, r3, r4, r5)     // Catch: java.lang.Exception -> L5f
        L5e:
            return
        L5f:
            r7 = move-exception
            r7.getMessage()
            java.lang.String r7 = "more offer to one offer exception"
            r6.b(r7)
            return
    }

    static void b(com.tkay.expressad.reward.player.TYRewardVideoActivity r0, com.tkay.expressad.foundation.d.c r1) {
            r0.b(r1)
            return
    }

    private void b(java.lang.String r2) {
            r1 = this;
            com.tkay.expressad.video.bt.module.b.h r0 = r1.C
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            r1.finish()
            return
    }

    private int c(java.lang.String r3) {
            r2 = this;
            android.content.Context r0 = r2.getApplicationContext()
            java.lang.String r1 = "id"
            int r3 = com.tkay.expressad.foundation.h.i.a(r0, r3, r1)
            return r3
    }

    static com.tkay.expressad.foundation.d.c c(com.tkay.expressad.reward.player.TYRewardVideoActivity r0) {
            com.tkay.expressad.foundation.d.c r0 = r0.H
            return r0
    }

    private void c() {
            r4 = this;
            java.lang.String r0 = "tkay_bt_container"
            int r0 = r4.c(r0)
            if (r0 >= 0) goto Ld
            java.lang.String r1 = "no tkay_webview_framelayout in tkay_more_offer_activity layout"
            r4.b(r1)
        Ld:
            android.view.View r0 = r4.findViewById(r0)
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = (com.tkay.expressad.video.bt.module.TkayBTContainer) r0
            r4.L = r0
            if (r0 != 0) goto L1c
            java.lang.String r0 = "env error"
            r4.b(r0)
        L1c:
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r4.L
            r1 = 0
            r0.setVisibility(r1)
            com.tkay.expressad.video.bt.module.a.a r0 = r4.d()
            r4.N = r0
            com.tkay.expressad.video.bt.module.TkayBTContainer r2 = r4.L
            r2.setBTContainerCallback(r0)
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r4.L
            com.tkay.expressad.video.bt.module.b.h r2 = r4.C
            r0.setShowRewardVideoListener(r2)
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r4.L
            com.tkay.expressad.video.dynview.f.d r2 = r4.Z
            r0.setChoiceOneCallback(r2)
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r4.L
            java.util.List<com.tkay.expressad.foundation.d.c> r2 = r4.J
            r0.setCampaigns(r2)
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r4.L
            java.util.List<com.tkay.expressad.videocommon.b.a> r2 = r4.I
            r0.setCampaignDownLoadTasks(r2)
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r4.L
            com.tkay.expressad.videocommon.e.d r2 = r4.D
            r0.setRewardUnitSetting(r2)
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r4.L
            java.lang.String r2 = r4.q
            r0.setUnitId(r2)
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r4.L
            java.lang.String r2 = r4.r
            r0.setPlacementId(r2)
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r4.L
            java.lang.String r2 = r4.s
            r0.setUserId(r2)
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r4.L
            r0.setActivity(r4)
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r4.L
            java.lang.String r2 = r4.P
            r0.setDeveloperExtraData(r2)
            com.tkay.expressad.foundation.d.c r0 = r4.H
            if (r0 == 0) goto L79
            com.tkay.expressad.foundation.d.p r0 = r0.aH
            if (r0 != 0) goto L8d
        L79:
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r4.J
            java.lang.Object r0 = r0.get(r1)
            if (r0 == 0) goto Lb6
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r4.J
            java.lang.Object r0 = r0.get(r1)
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            com.tkay.expressad.foundation.d.p r0 = r0.aH
            if (r0 == 0) goto Lb6
        L8d:
            java.lang.String r1 = r0.b()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Lb6
            int r1 = r0.a()
            if (r1 <= 0) goto Lb6
            com.tkay.expressad.videocommon.c.c r1 = new com.tkay.expressad.videocommon.c.c
            java.lang.String r2 = r0.b()
            int r0 = r0.a()
            r1.<init>(r2, r0)
            int r0 = r1.b()
            if (r0 >= 0) goto Lb4
            r0 = 1
            r1.a(r0)
        Lb4:
            r4.t = r1
        Lb6:
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r4.L
            com.tkay.expressad.videocommon.c.c r1 = r4.t
            r0.setReward(r1)
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r4.L
            int r1 = r4.x
            int r2 = r4.y
            int r3 = r4.z
            r0.setIVRewardEnable(r1, r2, r3)
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r4.L
            boolean r1 = r4.v
            r0.setIV(r1)
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r4.L
            int r1 = r4.u
            r0.setMute(r1)
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r4.L
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = r4.o
            com.tkay.expressad.video.signal.factory.b r1 = (com.tkay.expressad.video.signal.factory.b) r1
            r0.setJSFactory(r1)
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r4.L
            r0.init(r4)
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r4.L
            r0.onCreate()
            return
    }

    private static void c(com.tkay.expressad.foundation.d.c r2) {
            if (r2 == 0) goto L3c
            java.lang.String r0 = r2.be()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1f
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            java.lang.String r1 = r2.be()
            r0.c(r1)
        L1f:
            java.lang.String r0 = r2.bd()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L3c
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            java.lang.String r2 = r2.bd()
            r0.c(r2)
        L3c:
            return
    }

    static int d(com.tkay.expressad.reward.player.TYRewardVideoActivity r0) {
            int r0 = r0.R
            return r0
    }

    private int d(java.lang.String r3) {
            r2 = this;
            android.content.Context r0 = r2.getApplicationContext()
            java.lang.String r1 = "layout"
            int r3 = com.tkay.expressad.foundation.h.i.a(r0, r3, r1)
            return r3
    }

    private com.tkay.expressad.video.bt.module.a.a d() {
            r1 = this;
            com.tkay.expressad.video.bt.module.a.a r0 = r1.N
            if (r0 != 0) goto Lb
            com.tkay.expressad.reward.player.TYRewardVideoActivity$3 r0 = new com.tkay.expressad.reward.player.TYRewardVideoActivity$3
            r0.<init>(r1)
            r1.N = r0
        Lb:
            com.tkay.expressad.video.bt.module.a.a r0 = r1.N
            return r0
    }

    static com.tkay.expressad.video.bt.module.TkayBTContainer e(com.tkay.expressad.reward.player.TYRewardVideoActivity r0) {
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r0.L
            return r0
    }

    private void e() {
            r2 = this;
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r2.J     // Catch: java.lang.Throwable -> L2c
            if (r0 == 0) goto L22
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r2.J     // Catch: java.lang.Throwable -> L2c
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L2c
            if (r0 <= 0) goto L22
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r2.J     // Catch: java.lang.Throwable -> L2c
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L2c
        L12:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L2c
            if (r1 == 0) goto L22
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L2c
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1     // Catch: java.lang.Throwable -> L2c
            c(r1)     // Catch: java.lang.Throwable -> L2c
            goto L12
        L22:
            com.tkay.expressad.foundation.d.c r0 = r2.H     // Catch: java.lang.Throwable -> L2c
            if (r0 == 0) goto L2b
            com.tkay.expressad.foundation.d.c r0 = r2.H     // Catch: java.lang.Throwable -> L2c
            c(r0)     // Catch: java.lang.Throwable -> L2c
        L2b:
            return
        L2c:
            r0 = move-exception
            r0.getMessage()
            return
    }

    static boolean f(com.tkay.expressad.reward.player.TYRewardVideoActivity r1) {
            r0 = 1
            r1.A = r0
            return r0
    }

    static void g(com.tkay.expressad.reward.player.TYRewardVideoActivity r0) {
            r0.b()
            return
    }

    static com.tkay.expressad.video.bt.module.TYTempContainer h(com.tkay.expressad.reward.player.TYRewardVideoActivity r0) {
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r0.K
            return r0
    }

    static int i(com.tkay.expressad.reward.player.TYRewardVideoActivity r0) {
            int r0 = r0.X
            return r0
    }

    static int j(com.tkay.expressad.reward.player.TYRewardVideoActivity r0) {
            int r0 = r0.T
            return r0
    }

    static int k(com.tkay.expressad.reward.player.TYRewardVideoActivity r0) {
            int r0 = r0.V
            return r0
    }

    static int l(com.tkay.expressad.reward.player.TYRewardVideoActivity r0) {
            int r0 = r0.U
            return r0
    }

    static int m(com.tkay.expressad.reward.player.TYRewardVideoActivity r0) {
            int r0 = r0.W
            return r0
    }

    static com.tkay.expressad.video.bt.module.b.h n(com.tkay.expressad.reward.player.TYRewardVideoActivity r0) {
            com.tkay.expressad.video.bt.module.b.h r0 = r0.C
            return r0
    }

    @Override
    public final void a(int r8, int r9, int r10, int r11, int r12) {
            r7 = this;
            r7.T = r9
            r7.V = r10
            r7.U = r11
            r7.W = r12
            r7.X = r8
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r7.K
            if (r0 == 0) goto L16
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.setNotchPadding(r1, r2, r3, r4, r5)
        L16:
            com.tkay.expressad.video.bt.module.TkayBTContainer r1 = r7.L
            if (r1 == 0) goto L22
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r1.setNotchPadding(r2, r3, r4, r5, r6)
        L22:
            com.tkay.expressad.video.dynview.a.b.e = r8
            com.tkay.expressad.video.dynview.a.b.a = r9
            com.tkay.expressad.video.dynview.a.b.b = r10
            com.tkay.expressad.video.dynview.a.b.c = r11
            com.tkay.expressad.video.dynview.a.b.d = r12
            return
    }

    @Override
    public void finish() {
            r3 = this;
            super.finish()
            java.lang.String r0 = "anim"
            java.lang.String r1 = "tkay_reward_activity_close"
            int r1 = com.tkay.expressad.foundation.h.i.a(r3, r1, r0)
            java.lang.String r2 = "tkay_reward_activity_stay"
            int r0 = com.tkay.expressad.foundation.h.i.a(r3, r2, r0)
            r2 = 1
            if (r1 <= r2) goto L19
            if (r0 <= r2) goto L19
            r3.overridePendingTransition(r0, r1)
        L19:
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r3.K
            r1 = 0
            if (r0 == 0) goto L23
            r0.onDestroy()
            r3.K = r1
        L23:
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r3.L
            if (r0 == 0) goto L2c
            r0.onDestroy()
            r3.L = r1
        L2c:
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r3.q
            r1.append(r2)
            java.lang.String r2 = "_1"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.c(r1)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r3.q
            r1.append(r2)
            java.lang.String r2 = "_2"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.c(r1)
            return
    }

    @Override
    public void onBackPressed() {
            r1 = this;
            super.onBackPressed()
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r1.K
            if (r0 == 0) goto La
            r0.onBackPressed()
        La:
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r1.L
            if (r0 == 0) goto L11
            r0.onBackPressed()
        L11:
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            super.onConfigurationChanged(r2)
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r1.K
            if (r0 == 0) goto L11
            int r0 = r2.orientation
            r1.a(r0)
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r1.K
            r0.onConfigurationChanged(r2)
        L11:
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r1.L
            if (r0 == 0) goto L18
            r0.onConfigurationChanged(r2)
        L18:
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r12) {
            r11 = this;
            java.lang.String r0 = "_"
            java.lang.String r1 = ""
            java.lang.String r2 = "anim"
            super.onCreate(r12)
            r3 = 1
            com.tkay.expressad.b.x = r3
            com.tkay.expressad.foundation.b.b r4 = com.tkay.expressad.foundation.b.b.b()
            r4.b(r11)
            android.content.Intent r4 = r11.getIntent()     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r5 = com.tkay.expressad.reward.player.TYRewardVideoActivity.a     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r5 = r4.getStringExtra(r5)     // Catch: java.lang.Throwable -> L2a3
            r11.q = r5     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r5 = "tkay_more_offer_activity"
            android.content.Context r6 = r11.getApplicationContext()     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r7 = "layout"
            int r5 = com.tkay.expressad.foundation.h.i.a(r6, r5, r7)     // Catch: java.lang.Throwable -> L2a3
            if (r5 >= 0) goto L33
            java.lang.String r12 = "no tkay_more_offer_activity layout"
            r11.b(r12)     // Catch: java.lang.Throwable -> L2a3
            return
        L33:
            r11.setContentView(r5)     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r5 = r11.q     // Catch: java.lang.Throwable -> L2a3
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r6 = "data empty error"
            if (r5 == 0) goto L44
            r11.b(r6)     // Catch: java.lang.Throwable -> L2a3
            return
        L44:
            java.util.Map<java.lang.String, com.tkay.expressad.reward.b.a$d> r5 = com.tkay.expressad.reward.b.a.c     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r7 = r11.q     // Catch: java.lang.Throwable -> L2a3
            java.lang.Object r5 = r5.get(r7)     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.video.bt.module.b.h r5 = (com.tkay.expressad.video.bt.module.b.h) r5     // Catch: java.lang.Throwable -> L2a3
            r11.C = r5     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r5 = com.tkay.expressad.b.y     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r5 = r4.getStringExtra(r5)     // Catch: java.lang.Throwable -> L2a3
            r11.r = r5     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r5 = com.tkay.expressad.reward.player.TYRewardVideoActivity.c     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r5 = r4.getStringExtra(r5)     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.videocommon.c.c r5 = com.tkay.expressad.videocommon.c.c.b(r5)     // Catch: java.lang.Throwable -> L2a3
            r11.t = r5     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r5 = com.tkay.expressad.reward.player.TYRewardVideoActivity.b     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r5 = r4.getStringExtra(r5)     // Catch: java.lang.Throwable -> L2a3
            r11.s = r5     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r5 = com.tkay.expressad.reward.player.TYRewardVideoActivity.d     // Catch: java.lang.Throwable -> L2a3
            r7 = 2
            int r5 = r4.getIntExtra(r5, r7)     // Catch: java.lang.Throwable -> L2a3
            r11.u = r5     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r5 = com.tkay.expressad.reward.player.TYRewardVideoActivity.e     // Catch: java.lang.Throwable -> L2a3
            r7 = 0
            boolean r5 = r4.getBooleanExtra(r5, r7)     // Catch: java.lang.Throwable -> L2a3
            r11.v = r5     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r5 = com.tkay.expressad.reward.player.TYRewardVideoActivity.f     // Catch: java.lang.Throwable -> L2a3
            boolean r5 = r4.getBooleanExtra(r5, r7)     // Catch: java.lang.Throwable -> L2a3
            r11.w = r5     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r5 = com.tkay.expressad.reward.player.TYRewardVideoActivity.l     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r5 = r4.getStringExtra(r5)     // Catch: java.lang.Throwable -> L2a3
            r11.P = r5     // Catch: java.lang.Throwable -> L2a3
            boolean r5 = r11.v     // Catch: java.lang.Throwable -> L2a3
            if (r5 == 0) goto Laa
            java.lang.String r5 = com.tkay.expressad.reward.player.TYRewardVideoActivity.i     // Catch: java.lang.Throwable -> L2a3
            int r5 = r4.getIntExtra(r5, r7)     // Catch: java.lang.Throwable -> L2a3
            r11.x = r5     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r5 = com.tkay.expressad.reward.player.TYRewardVideoActivity.j     // Catch: java.lang.Throwable -> L2a3
            int r5 = r4.getIntExtra(r5, r7)     // Catch: java.lang.Throwable -> L2a3
            r11.y = r5     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r5 = com.tkay.expressad.reward.player.TYRewardVideoActivity.k     // Catch: java.lang.Throwable -> L2a3
            int r5 = r4.getIntExtra(r5, r7)     // Catch: java.lang.Throwable -> L2a3
            r11.z = r5     // Catch: java.lang.Throwable -> L2a3
        Laa:
            com.tkay.expressad.video.signal.factory.b r5 = new com.tkay.expressad.video.signal.factory.b     // Catch: java.lang.Throwable -> L2a3
            r5.<init>(r11)     // Catch: java.lang.Throwable -> L2a3
            r11.o = r5     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.video.signal.factory.IJSFactory r5 = r11.o     // Catch: java.lang.Throwable -> L2a3
            r11.a(r5)     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.video.bt.module.b.h r5 = r11.C     // Catch: java.lang.Throwable -> L2a3
            if (r5 != 0) goto Lc0
            java.lang.String r12 = "showRewardListener is null"
            r11.b(r12)     // Catch: java.lang.Throwable -> L2a3
            return
        Lc0:
            com.tkay.expressad.reward.a.e r5 = com.tkay.expressad.reward.a.e.a()     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r8 = r11.r     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r9 = r11.q     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.videocommon.e.d r5 = r5.a(r8, r9)     // Catch: java.lang.Throwable -> L2a3
            r11.D = r5     // Catch: java.lang.Throwable -> L2a3
            if (r5 != 0) goto Lfc
            com.tkay.expressad.videocommon.e.c r5 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.foundation.b.b r8 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r8 = r8.e()     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r9 = r11.q     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.videocommon.e.d r5 = r5.a(r8, r9)     // Catch: java.lang.Throwable -> L2a3
            r11.D = r5     // Catch: java.lang.Throwable -> L2a3
            if (r5 != 0) goto Lfc
            com.tkay.expressad.videocommon.e.c r5 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.foundation.b.b r8 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r8 = r8.e()     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r9 = r11.q     // Catch: java.lang.Throwable -> L2a3
            boolean r10 = r11.v     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.videocommon.e.d r5 = r5.a(r8, r9, r10)     // Catch: java.lang.Throwable -> L2a3
            r11.D = r5     // Catch: java.lang.Throwable -> L2a3
        Lfc:
            com.tkay.expressad.videocommon.e.d r5 = r11.D     // Catch: java.lang.Throwable -> L2a3
            if (r5 == 0) goto L116
            com.tkay.expressad.videocommon.c.c r5 = r11.t     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.videocommon.e.d r8 = r11.D     // Catch: java.lang.Throwable -> L2a3
            int r8 = r8.m()     // Catch: java.lang.Throwable -> L2a3
            r5.a(r8)     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.videocommon.c.c r5 = r11.t     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.videocommon.e.d r8 = r11.D     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r8 = r8.n()     // Catch: java.lang.Throwable -> L2a3
            r5.a(r8)     // Catch: java.lang.Throwable -> L2a3
        L116:
            com.tkay.expressad.videocommon.c.c r5 = r11.t     // Catch: java.lang.Throwable -> L2a3
            if (r5 == 0) goto L127
            com.tkay.expressad.videocommon.c.c r5 = r11.t     // Catch: java.lang.Throwable -> L2a3
            int r5 = r5.b()     // Catch: java.lang.Throwable -> L2a3
            if (r5 > 0) goto L127
            com.tkay.expressad.videocommon.c.c r5 = r11.t     // Catch: java.lang.Throwable -> L2a3
            r5.a(r3)     // Catch: java.lang.Throwable -> L2a3
        L127:
            java.lang.String r5 = "tkay_reward_activity_open"
            int r5 = com.tkay.expressad.foundation.h.i.a(r11, r5, r2)     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r8 = "tkay_reward_activity_stay"
            int r2 = com.tkay.expressad.foundation.h.i.a(r11, r8, r2)     // Catch: java.lang.Throwable -> L2a3
            if (r5 <= r3) goto L13a
            if (r2 <= r3) goto L13a
            r11.overridePendingTransition(r5, r2)     // Catch: java.lang.Throwable -> L2a3
        L13a:
            if (r12 == 0) goto L149
            java.lang.String r2 = com.tkay.expressad.reward.player.TYRewardVideoActivity.h     // Catch: java.lang.Exception -> L145 java.lang.Throwable -> L2a3
            boolean r12 = r12.getBoolean(r2)     // Catch: java.lang.Exception -> L145 java.lang.Throwable -> L2a3
            r11.F = r12     // Catch: java.lang.Exception -> L145 java.lang.Throwable -> L2a3
            goto L149
        L145:
            r12 = move-exception
            r12.printStackTrace()     // Catch: java.lang.Throwable -> L2a3
        L149:
            com.tkay.expressad.videocommon.b.c r12 = com.tkay.expressad.videocommon.b.c.a()     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r2 = r11.q     // Catch: java.lang.Throwable -> L2a3
            java.util.List r12 = r12.b(r2)     // Catch: java.lang.Throwable -> L2a3
            r11.I = r12     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r12 = com.tkay.expressad.reward.player.TYRewardVideoActivity.g     // Catch: java.lang.Throwable -> L2a3
            boolean r12 = r4.getBooleanExtra(r12, r7)     // Catch: java.lang.Throwable -> L2a3
            r11.A = r12     // Catch: java.lang.Throwable -> L2a3
            if (r12 != 0) goto L19e
            java.util.List<com.tkay.expressad.videocommon.b.a> r12 = r11.I     // Catch: java.lang.Throwable -> L2a3
            if (r12 == 0) goto L175
            java.util.List<com.tkay.expressad.videocommon.b.a> r12 = r11.I     // Catch: java.lang.Throwable -> L2a3
            int r12 = r12.size()     // Catch: java.lang.Throwable -> L2a3
            if (r12 <= 0) goto L175
            java.util.List<com.tkay.expressad.videocommon.b.a> r12 = r11.I     // Catch: java.lang.Throwable -> L2a3
            java.lang.Object r12 = r12.get(r7)     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.videocommon.b.a r12 = (com.tkay.expressad.videocommon.b.a) r12     // Catch: java.lang.Throwable -> L2a3
            r11.G = r12     // Catch: java.lang.Throwable -> L2a3
        L175:
            com.tkay.expressad.videocommon.b.a r12 = r11.G     // Catch: java.lang.Throwable -> L2a3
            if (r12 == 0) goto L18b
            com.tkay.expressad.videocommon.b.a r12 = r11.G     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.foundation.d.c r12 = r12.n()     // Catch: java.lang.Throwable -> L2a3
            r11.H = r12     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.videocommon.b.a r12 = r11.G     // Catch: java.lang.Throwable -> L2a3
            r12.a(r3)     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.videocommon.b.a r12 = r11.G     // Catch: java.lang.Throwable -> L2a3
            r12.b(r7)     // Catch: java.lang.Throwable -> L2a3
        L18b:
            com.tkay.expressad.videocommon.b.a r12 = r11.G     // Catch: java.lang.Throwable -> L2a3
            if (r12 == 0) goto L197
            com.tkay.expressad.foundation.d.c r12 = r11.H     // Catch: java.lang.Throwable -> L2a3
            if (r12 == 0) goto L197
            com.tkay.expressad.videocommon.c.c r12 = r11.t     // Catch: java.lang.Throwable -> L2a3
            if (r12 != 0) goto L19a
        L197:
            r11.b(r6)     // Catch: java.lang.Throwable -> L2a3
        L19a:
            r11.b()     // Catch: java.lang.Throwable -> L2a3
            return
        L19e:
            com.tkay.expressad.videocommon.b.c r12 = com.tkay.expressad.videocommon.b.c.a()     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r2 = r11.q     // Catch: java.lang.Throwable -> L2a3
            java.util.List r12 = r12.a(r2)     // Catch: java.lang.Throwable -> L2a3
            r11.J = r12     // Catch: java.lang.Throwable -> L2a3
            r11.O = r1     // Catch: java.lang.Throwable -> L2a3
            if (r12 == 0) goto L1c6
            int r12 = r12.size()     // Catch: java.lang.Throwable -> L2a3
            if (r12 <= 0) goto L1c6
            java.util.List<com.tkay.expressad.foundation.d.c> r12 = r11.J     // Catch: java.lang.Throwable -> L2a3
            java.lang.Object r12 = r12.get(r7)     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.foundation.d.c r12 = (com.tkay.expressad.foundation.d.c) r12     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r1 = r12.ar()     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r12 = r12.Z()     // Catch: java.lang.Throwable -> L2a3
            r11.O = r12     // Catch: java.lang.Throwable -> L2a3
        L1c6:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2a3
            r12.<init>()     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r2 = r11.q     // Catch: java.lang.Throwable -> L2a3
            r12.append(r2)     // Catch: java.lang.Throwable -> L2a3
            r12.append(r0)     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r2 = r11.O     // Catch: java.lang.Throwable -> L2a3
            r12.append(r2)     // Catch: java.lang.Throwable -> L2a3
            r12.append(r0)     // Catch: java.lang.Throwable -> L2a3
            r12.append(r1)     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.videocommon.a$a r12 = com.tkay.expressad.videocommon.a.a(r12)     // Catch: java.lang.Throwable -> L2a3
            r0 = 0
            if (r12 == 0) goto L1ee
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r12 = r12.a()     // Catch: java.lang.Throwable -> L2a3
            goto L1ef
        L1ee:
            r12 = r0
        L1ef:
            r11.M = r12     // Catch: java.lang.Throwable -> L2a3
            if (r12 != 0) goto L29f
            com.tkay.expressad.videocommon.b.a r12 = r11.G     // Catch: java.lang.Throwable -> L2a3
            if (r12 != 0) goto L20d
            java.util.List<com.tkay.expressad.videocommon.b.a> r12 = r11.I     // Catch: java.lang.Throwable -> L2a3
            if (r12 == 0) goto L20d
            java.util.List<com.tkay.expressad.videocommon.b.a> r12 = r11.I     // Catch: java.lang.Throwable -> L2a3
            int r12 = r12.size()     // Catch: java.lang.Throwable -> L2a3
            if (r12 <= 0) goto L20d
            java.util.List<com.tkay.expressad.videocommon.b.a> r12 = r11.I     // Catch: java.lang.Throwable -> L2a3
            java.lang.Object r12 = r12.get(r7)     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.videocommon.b.a r12 = (com.tkay.expressad.videocommon.b.a) r12     // Catch: java.lang.Throwable -> L2a3
            r11.G = r12     // Catch: java.lang.Throwable -> L2a3
        L20d:
            com.tkay.expressad.videocommon.b.a r12 = r11.G     // Catch: java.lang.Throwable -> L2a3
            if (r12 != 0) goto L22e
            com.tkay.expressad.videocommon.b.c r12 = com.tkay.expressad.videocommon.b.c.a()     // Catch: java.lang.Throwable -> L2a3
            boolean r1 = r11.v     // Catch: java.lang.Throwable -> L2a3
            if (r1 == 0) goto L21c
            r1 = 287(0x11f, float:4.02E-43)
            goto L21e
        L21c:
            r1 = 94
        L21e:
            java.lang.String r2 = r11.q     // Catch: java.lang.Throwable -> L2a3
            boolean r4 = r11.w     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.videocommon.b.n r12 = r12.c(r2)     // Catch: java.lang.Throwable -> L2a3
            if (r12 == 0) goto L22c
            com.tkay.expressad.videocommon.b.a r0 = r12.b(r1, r4)     // Catch: java.lang.Throwable -> L2a3
        L22c:
            r11.G = r0     // Catch: java.lang.Throwable -> L2a3
        L22e:
            com.tkay.expressad.videocommon.b.a r12 = r11.G     // Catch: java.lang.Throwable -> L2a3
            if (r12 == 0) goto L244
            com.tkay.expressad.videocommon.b.a r12 = r11.G     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.foundation.d.c r12 = r12.n()     // Catch: java.lang.Throwable -> L2a3
            r11.H = r12     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.videocommon.b.a r12 = r11.G     // Catch: java.lang.Throwable -> L2a3
            r12.a(r3)     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.videocommon.b.a r12 = r11.G     // Catch: java.lang.Throwable -> L2a3
            r12.b(r7)     // Catch: java.lang.Throwable -> L2a3
        L244:
            com.tkay.expressad.videocommon.b.a r12 = r11.G     // Catch: java.lang.Throwable -> L2a3
            if (r12 == 0) goto L250
            com.tkay.expressad.foundation.d.c r12 = r11.H     // Catch: java.lang.Throwable -> L2a3
            if (r12 == 0) goto L250
            com.tkay.expressad.videocommon.c.c r12 = r11.t     // Catch: java.lang.Throwable -> L2a3
            if (r12 != 0) goto L253
        L250:
            r11.b(r6)     // Catch: java.lang.Throwable -> L2a3
        L253:
            r11.A = r7     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.videocommon.a.a.a()     // Catch: java.lang.Throwable -> L2a3
            java.util.List<com.tkay.expressad.foundation.d.c> r12 = r11.J     // Catch: java.lang.Throwable -> L2a3
            java.util.List r12 = com.tkay.expressad.videocommon.a.a.a(r12)     // Catch: java.lang.Throwable -> L2a3
            java.lang.String r0 = "no available campaign"
            if (r12 != 0) goto L266
            r11.b(r0)     // Catch: java.lang.Throwable -> L2a3
            return
        L266:
            int r1 = r12.size()     // Catch: java.lang.Throwable -> L2a3
            if (r1 != 0) goto L270
            r11.b(r0)     // Catch: java.lang.Throwable -> L2a3
            return
        L270:
            java.lang.Object r0 = r12.get(r7)     // Catch: java.lang.Throwable -> L2a3
            if (r0 == 0) goto L29b
            java.lang.Object r0 = r12.get(r7)     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0     // Catch: java.lang.Throwable -> L2a3
            boolean r0 = r0.j()     // Catch: java.lang.Throwable -> L2a3
            if (r0 == 0) goto L29b
            if (r1 != r3) goto L297
            java.lang.Object r12 = r12.get(r7)     // Catch: java.lang.Throwable -> L2a3
            com.tkay.expressad.foundation.d.c r12 = (com.tkay.expressad.foundation.d.c) r12     // Catch: java.lang.Throwable -> L2a3
            r11.H = r12     // Catch: java.lang.Throwable -> L2a3
            if (r12 == 0) goto L291
            r12.m()     // Catch: java.lang.Throwable -> L2a3
        L291:
            com.tkay.expressad.foundation.d.c r12 = r11.H     // Catch: java.lang.Throwable -> L2a3
            r11.b(r12)     // Catch: java.lang.Throwable -> L2a3
            return
        L297:
            r11.a(r12)     // Catch: java.lang.Throwable -> L2a3
            return
        L29b:
            r11.b()     // Catch: java.lang.Throwable -> L2a3
            return
        L29f:
            r11.c()     // Catch: java.lang.Throwable -> L2a3
            return
        L2a3:
            r12 = move-exception
            java.lang.String r12 = java.lang.String.valueOf(r12)
            java.lang.String r0 = "onCreate error"
            java.lang.String r12 = r0.concat(r12)
            r11.b(r12)
            return
    }

    @Override
    public void onDestroy() {
            r6 = this;
            super.onDestroy()     // Catch: java.lang.Throwable -> L3
        L3:
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r6.J     // Catch: java.lang.Throwable -> L2f
            if (r0 == 0) goto L25
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r6.J     // Catch: java.lang.Throwable -> L2f
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L2f
            if (r0 <= 0) goto L25
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r6.J     // Catch: java.lang.Throwable -> L2f
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L2f
        L15:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L2f
            if (r1 == 0) goto L25
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L2f
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1     // Catch: java.lang.Throwable -> L2f
            c(r1)     // Catch: java.lang.Throwable -> L2f
            goto L15
        L25:
            com.tkay.expressad.foundation.d.c r0 = r6.H     // Catch: java.lang.Throwable -> L2f
            if (r0 == 0) goto L33
            com.tkay.expressad.foundation.d.c r0 = r6.H     // Catch: java.lang.Throwable -> L2f
            c(r0)     // Catch: java.lang.Throwable -> L2f
            goto L33
        L2f:
            r0 = move-exception
            r0.getMessage()
        L33:
            java.lang.String r0 = r6.q
            com.tkay.expressad.video.module.b.a.a(r0)
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r6.K
            r1 = 0
            if (r0 == 0) goto L42
            r0.onDestroy()
            r6.K = r1
        L42:
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r6.L
            if (r0 == 0) goto L4b
            r0.onDestroy()
            r6.L = r1
        L4b:
            r6.Y = r1
            r6.Z = r1
            java.util.concurrent.ThreadPoolExecutor r0 = com.tkay.expressad.foundation.g.h.a.a()
            com.tkay.expressad.reward.player.TYRewardVideoActivity$a r2 = new com.tkay.expressad.reward.player.TYRewardVideoActivity$a
            java.util.List<com.tkay.expressad.videocommon.b.a> r3 = r6.I
            java.lang.String r4 = r6.q
            java.lang.String r5 = r6.O
            r2.<init>(r3, r4, r5)
            r0.execute(r2)
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r6.J
            if (r0 == 0) goto L75
            int r0 = r0.size()
            if (r0 <= 0) goto L75
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r6.J
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            r1 = r0
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1
        L75:
            if (r1 != 0) goto L79
            com.tkay.expressad.foundation.d.c r1 = r6.H
        L79:
            if (r1 == 0) goto L8c
            java.lang.String r0 = r1.S()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L8c
            com.tkay.core.common.a.j r0 = com.tkay.core.common.a.j.a()
            r0.b()
        L8c:
            return
    }

    @Override
    public void onPause() {
            r1 = this;
            super.onPause()
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r1.K
            if (r0 == 0) goto La
            r0.onPause()
        La:
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r1.L
            if (r0 == 0) goto L11
            r0.onPause()
        L11:
            return
    }

    @Override
    protected void onRestart() {
            r1 = this;
            super.onRestart()
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r1.K
            if (r0 == 0) goto La
            r0.onRestart()
        La:
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r1.L
            if (r0 == 0) goto L11
            r0.onRestart()
        L11:
            return
    }

    @Override
    public void onResume() {
            r1 = this;
            super.onResume()
            boolean r0 = com.tkay.expressad.foundation.f.b.c
            if (r0 == 0) goto L8
            return
        L8:
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            r0.b(r1)
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r1.K
            if (r0 == 0) goto L16
            r0.onResume()
        L16:
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r1.L
            if (r0 == 0) goto L1d
            r0.onResume()
        L1d:
            return
    }

    @Override
    public void onSaveInstanceState(android.os.Bundle r3) {
            r2 = this;
            java.lang.String r0 = com.tkay.expressad.reward.player.TYRewardVideoActivity.h
            boolean r1 = r2.F
            r3.putBoolean(r0, r1)
            super.onSaveInstanceState(r3)
            return
    }

    @Override
    protected void onStart() {
            r5 = this;
            super.onStart()
            com.tkay.expressad.reward.player.TYRewardVideoActivity$4 r0 = new com.tkay.expressad.reward.player.TYRewardVideoActivity$4
            r0.<init>(r5)
            boolean r0 = com.tkay.expressad.foundation.f.b.c
            if (r0 == 0) goto Ld
            return
        Ld:
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r5.K
            java.lang.String r1 = "_1"
            if (r0 == 0) goto L37
            r0.onStart()
            com.tkay.expressad.foundation.d.c r0 = r5.H
            java.lang.String r2 = r5.q
            r0.l(r2)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r5.q
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            com.tkay.expressad.foundation.d.c r3 = r5.H
            r0.a(r2, r3)
        L37:
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r5.L
            if (r0 == 0) goto L6e
            r0.onStart()
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r5.J
            if (r0 == 0) goto L6e
            int r0 = r0.size()
            if (r0 <= 0) goto L6e
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r5.J
            r2 = 0
            java.lang.Object r0 = r0.get(r2)
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            java.lang.String r2 = r5.q
            r0.l(r2)
            com.tkay.expressad.foundation.f.b r2 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = r5.q
            r3.append(r4)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r2.a(r3, r0)
        L6e:
            boolean r0 = r5.Q
            if (r0 != 0) goto La7
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r5.q
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r2 = 1
            r0.b(r1, r2)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = r5.q
            r1.append(r3)
            java.lang.String r3 = "_2"
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.c(r1)
            r5.Q = r2
        La7:
            return
    }

    @Override
    protected void onStop() {
            r1 = this;
            r0 = 0
            com.tkay.expressad.b.x = r0
            super.onStop()     // Catch: java.lang.Throwable -> L6
        L6:
            com.tkay.expressad.video.bt.module.TYTempContainer r0 = r1.K
            if (r0 == 0) goto Ld
            r0.onStop()
        Ld:
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r1.L
            if (r0 == 0) goto L14
            r0.onStop()
        L14:
            return
    }

    @Override
    public void setTheme(int r2) {
            r1 = this;
            java.lang.String r2 = "tkay_transparent_theme"
            java.lang.String r0 = "style"
            int r2 = com.tkay.expressad.foundation.h.i.a(r1, r2, r0)
            super.setTheme(r2)
            return
    }
}
