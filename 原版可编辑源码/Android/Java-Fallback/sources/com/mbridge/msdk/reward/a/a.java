package com.mbridge.msdk.reward.a;

public class a {
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Integer> K;
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> L;
    public static java.lang.String a;
    public static java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.reward.a.a.d> b;
    private boolean A;
    private boolean B;
    private boolean C;
    private boolean D;
    private boolean E;
    private boolean F;
    private java.util.ArrayList<java.lang.Integer> G;
    private boolean H;
    private final java.lang.Object I;
    private boolean J;
    private java.util.Queue<java.lang.Integer> M;
    private java.lang.String N;
    private com.mbridge.msdk.foundation.db.i O;
    private volatile boolean P;
    private volatile boolean Q;
    private volatile boolean R;
    private volatile boolean S;
    private volatile boolean T;
    private volatile boolean U;
    private volatile boolean V;
    private java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> W;
    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> X;
    volatile boolean c;
    volatile boolean d;
    volatile boolean e;
    volatile boolean f;
    volatile boolean g;
    private android.content.Context h;
    private int i;
    private com.mbridge.msdk.reward.adapter.d j;
    private com.mbridge.msdk.videocommon.d.c k;
    private com.mbridge.msdk.videocommon.d.a l;
    private volatile com.mbridge.msdk.videocommon.listener.InterVideoOutListener m;
    private volatile com.mbridge.msdk.reward.a.a.c n;
    private java.lang.String o;
    private java.lang.String p;
    private com.mbridge.msdk.out.MBridgeIds q;
    private java.lang.String r;
    private volatile java.lang.String s;
    private java.lang.String t;
    private int u;
    private android.os.Handler v;
    private int w;
    private int x;
    private int y;
    private int z;




    final class 4 implements com.mbridge.msdk.reward.adapter.c.c {
        final boolean a;
        final com.mbridge.msdk.foundation.entity.CampaignEx b;
        final com.mbridge.msdk.reward.adapter.d c;
        final int d;
        final com.mbridge.msdk.reward.a.a e;



        4(com.mbridge.msdk.reward.a.a r1, boolean r2, com.mbridge.msdk.foundation.entity.CampaignEx r3, com.mbridge.msdk.reward.adapter.d r4, int r5) {
                r0 = this;
                r0.e = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.d = r5
                r0.<init>()
                return
        }

        @Override
        public final void a(java.lang.String r21, java.lang.String r22, java.lang.String r23, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r24) {
                r20 = this;
                r7 = r20
                r8 = r22
                r9 = r24
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Campaign Cache 下载成功： "
                r0.append(r1)
                int r1 = r24.size()
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.String r10 = "RewardVideoController"
                com.mbridge.msdk.foundation.tools.z.a(r10, r0)
                com.mbridge.msdk.reward.a.a r0 = r7.e
                r11 = 1
                r0.c = r11
                boolean r0 = r7.a
                if (r0 != 0) goto L131
                java.lang.String r0 = "Campaign Cache 下载成功： 非大模板"
                com.mbridge.msdk.foundation.tools.z.a(r10, r0)
                java.util.Iterator r12 = r24.iterator()
            L32:
                boolean r0 = r12.hasNext()
                if (r0 == 0) goto L16e
                java.lang.Object r0 = r12.next()
                r14 = r0
                com.mbridge.msdk.foundation.entity.CampaignEx r14 = (com.mbridge.msdk.foundation.entity.CampaignEx) r14
                if (r14 == 0) goto L88
                com.mbridge.msdk.foundation.entity.CampaignEx$c r0 = r14.getRewardTemplateMode()
                if (r0 == 0) goto L88
                com.mbridge.msdk.foundation.entity.CampaignEx$c r0 = r14.getRewardTemplateMode()
                java.lang.String r0 = r0.e()
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 != 0) goto L88
                com.mbridge.msdk.foundation.entity.CampaignEx$c r0 = r14.getRewardTemplateMode()
                java.lang.String r0 = r0.e()
                java.lang.String r1 = "cmpt=1"
                boolean r0 = r0.contains(r1)
                if (r0 != 0) goto L88
                com.mbridge.msdk.reward.a.a r0 = r7.e
                android.os.Handler r0 = com.mbridge.msdk.reward.a.a.q(r0)
                if (r0 == 0) goto L88
                com.mbridge.msdk.reward.a.a r0 = r7.e
                android.os.Handler r13 = com.mbridge.msdk.reward.a.a.q(r0)
                com.mbridge.msdk.reward.a.a$4$1 r15 = new com.mbridge.msdk.reward.a.a$4$1
                r0 = r15
                r1 = r20
                r2 = r14
                r3 = r24
                r4 = r21
                r5 = r22
                r6 = r23
                r0.<init>(r1, r2, r3, r4, r5, r6)
                r13.post(r15)
                goto Ld0
            L88:
                java.lang.String r0 = "Campaign Cache 下载成功： 非大模板，不存在播放模板"
                com.mbridge.msdk.foundation.tools.z.a(r10, r0)
                com.mbridge.msdk.reward.adapter.d r0 = r7.c
                if (r0 == 0) goto Ld4
                boolean r1 = r7.a
                int r2 = r7.d
                boolean r0 = r0.a(r9, r1, r2)
                if (r0 == 0) goto Ld4
                com.mbridge.msdk.reward.a.a r0 = r7.e
                com.mbridge.msdk.reward.a.a$c r0 = com.mbridge.msdk.reward.a.a.d(r0)
                if (r0 == 0) goto Ld0
                com.mbridge.msdk.reward.a.a r0 = r7.e
                boolean r0 = r0.g
                if (r0 != 0) goto Ld0
                com.mbridge.msdk.reward.a.a r0 = r7.e
                r0.g = r11
                java.lang.String r0 = "Cache onVideoLoadSuccessForCache"
                com.mbridge.msdk.foundation.tools.z.a(r10, r0)
                com.mbridge.msdk.reward.a.a r0 = r7.e
                android.content.Context r0 = com.mbridge.msdk.reward.a.a.m(r0)
                com.mbridge.msdk.reward.a.a r1 = r7.e
                java.lang.String r1 = com.mbridge.msdk.reward.a.a.g(r1)
                r2 = 0
                com.mbridge.msdk.reward.b.a.a(r0, r9, r1, r2)
                com.mbridge.msdk.reward.a.a r0 = r7.e
                com.mbridge.msdk.reward.a.a$c r0 = com.mbridge.msdk.reward.a.a.d(r0)
                r3 = r21
                com.mbridge.msdk.reward.a.a.c.b(r0, r3, r8)
                goto L32
            Ld0:
                r3 = r21
                goto L32
            Ld4:
                r3 = r21
                com.mbridge.msdk.reward.a.a r0 = r7.e
                java.util.List r1 = com.mbridge.msdk.reward.a.a.b(r0)
                com.mbridge.msdk.reward.a.a.a(r0, r8, r1)
                com.mbridge.msdk.reward.a.a r0 = r7.e
                com.mbridge.msdk.reward.a.a$c r0 = com.mbridge.msdk.reward.a.a.d(r0)
                if (r0 == 0) goto L32
                com.mbridge.msdk.reward.a.a r0 = r7.e
                boolean r0 = r0.f
                if (r0 != 0) goto L32
                com.mbridge.msdk.reward.a.a r0 = r7.e
                r0.f = r11
                java.lang.String r0 = "Cache onVideoLoadFailForCache"
                com.mbridge.msdk.foundation.tools.z.a(r10, r0)
                java.lang.String r0 = ""
                if (r14 == 0) goto L109
                java.lang.String r1 = r14.getRequestIdNotice()
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 == 0) goto L105
                goto L109
            L105:
                java.lang.String r0 = r14.getRequestIdNotice()
            L109:
                r19 = r0
                com.mbridge.msdk.reward.a.a r0 = r7.e
                android.content.Context r13 = com.mbridge.msdk.reward.a.a.m(r0)
                com.mbridge.msdk.reward.a.a r0 = r7.e
                java.lang.String r16 = com.mbridge.msdk.reward.a.a.g(r0)
                com.mbridge.msdk.reward.a.a r0 = r7.e
                boolean r17 = com.mbridge.msdk.reward.a.a.i(r0)
                java.lang.String r15 = "have no temp but isReady false"
                r18 = r23
                com.mbridge.msdk.reward.b.a.a(r13, r14, r15, r16, r17, r18, r19)
                com.mbridge.msdk.reward.a.a r0 = r7.e
                com.mbridge.msdk.reward.a.a$c r0 = com.mbridge.msdk.reward.a.a.d(r0)
                java.lang.String r1 = "errorCode: 3503 errorMessage: have no temp but isReady false"
                com.mbridge.msdk.reward.a.a.c.d(r0, r1)
                goto L32
            L131:
                r3 = r21
                java.lang.String r0 = "Campaign Cache 下载成功： 大模板"
                com.mbridge.msdk.foundation.tools.z.a(r10, r0)
                com.mbridge.msdk.reward.a.a r0 = r7.e
                boolean r0 = r0.d
                if (r0 == 0) goto L16e
                com.mbridge.msdk.reward.a.a r0 = r7.e
                boolean r0 = r0.e
                if (r0 != 0) goto L16e
                com.mbridge.msdk.reward.a.a r0 = r7.e
                android.os.Handler r0 = com.mbridge.msdk.reward.a.a.q(r0)
                if (r0 == 0) goto L16e
                java.lang.String r0 = "Campaign Cache 下载成功： 大模板，campaign 下载成功，开始预加载大模板"
                com.mbridge.msdk.foundation.tools.z.a(r10, r0)
                com.mbridge.msdk.reward.a.a r0 = r7.e
                r0.e = r11
                com.mbridge.msdk.reward.a.a r0 = r7.e
                android.os.Handler r6 = com.mbridge.msdk.reward.a.a.q(r0)
                com.mbridge.msdk.reward.a.a$4$2 r10 = new com.mbridge.msdk.reward.a.a$4$2
                r0 = r10
                r1 = r20
                r2 = r23
                r3 = r21
                r4 = r22
                r5 = r24
                r0.<init>(r1, r2, r3, r4, r5)
                r6.post(r10)
            L16e:
                return
        }

        @Override
        public final void a(java.lang.String r8, java.lang.String r9, java.lang.String r10, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r11, java.lang.String r12) {
                r7 = this;
                java.lang.StringBuilder r8 = new java.lang.StringBuilder
                r8.<init>()
                java.lang.String r0 = "Campaign Cache 下载失败： "
                r8.append(r0)
                int r11 = r11.size()
                r8.append(r11)
                java.lang.String r8 = r8.toString()
                java.lang.String r11 = "RewardVideoController"
                com.mbridge.msdk.foundation.tools.z.a(r11, r8)
                com.mbridge.msdk.reward.a.a r8 = r7.e
                r11 = 0
                r8.c = r11
                com.mbridge.msdk.reward.a.a r8 = r7.e
                java.util.List r0 = com.mbridge.msdk.reward.a.a.b(r8)
                com.mbridge.msdk.reward.a.a.a(r8, r9, r0)
                com.mbridge.msdk.reward.a.a r8 = r7.e
                com.mbridge.msdk.reward.a.a$c r8 = com.mbridge.msdk.reward.a.a.d(r8)
                if (r8 == 0) goto L94
                com.mbridge.msdk.reward.a.a r8 = r7.e
                boolean r8 = r8.f
                if (r8 != 0) goto L94
                com.mbridge.msdk.reward.a.a r8 = r7.e
                r9 = 1
                r8.f = r9
                com.mbridge.msdk.reward.a.a r8 = r7.e
                java.util.concurrent.CopyOnWriteArrayList r8 = com.mbridge.msdk.reward.a.a.a(r8)
                if (r8 == 0) goto L89
                com.mbridge.msdk.reward.a.a r8 = r7.e
                java.util.concurrent.CopyOnWriteArrayList r8 = com.mbridge.msdk.reward.a.a.a(r8)
                int r8 = r8.size()
                if (r8 <= 0) goto L89
                com.mbridge.msdk.reward.a.a r8 = r7.e
                android.content.Context r0 = com.mbridge.msdk.reward.a.a.m(r8)
                com.mbridge.msdk.reward.a.a r8 = r7.e
                java.util.concurrent.CopyOnWriteArrayList r8 = com.mbridge.msdk.reward.a.a.a(r8)
                java.lang.Object r8 = r8.get(r11)
                r1 = r8
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1
                java.lang.StringBuilder r8 = new java.lang.StringBuilder
                r8.<init>()
                java.lang.String r9 = ""
                r8.append(r9)
                r8.append(r12)
                java.lang.String r2 = r8.toString()
                com.mbridge.msdk.reward.a.a r8 = r7.e
                java.lang.String r3 = com.mbridge.msdk.reward.a.a.g(r8)
                com.mbridge.msdk.reward.a.a r8 = r7.e
                boolean r4 = com.mbridge.msdk.reward.a.a.i(r8)
                com.mbridge.msdk.foundation.entity.CampaignEx r8 = r7.b
                java.lang.String r6 = r8.getRequestIdNotice()
                r5 = r10
                com.mbridge.msdk.reward.b.a.a(r0, r1, r2, r3, r4, r5, r6)
            L89:
                com.mbridge.msdk.reward.a.a r8 = r7.e
                com.mbridge.msdk.reward.a.a$c r8 = com.mbridge.msdk.reward.a.a.d(r8)
                java.lang.String r9 = "errorCode: 3201 errorMessage: campaign resource download failed"
                com.mbridge.msdk.reward.a.a.c.d(r8, r9)
            L94:
                return
        }
    }


    final class 6 implements com.mbridge.msdk.reward.adapter.c.i {
        final com.mbridge.msdk.foundation.entity.CampaignEx a;
        final java.util.concurrent.CopyOnWriteArrayList b;
        final com.mbridge.msdk.reward.adapter.d c;
        final boolean d;
        final int e;
        final com.mbridge.msdk.reward.a.a f;


        6(com.mbridge.msdk.reward.a.a r1, com.mbridge.msdk.foundation.entity.CampaignEx r2, java.util.concurrent.CopyOnWriteArrayList r3, com.mbridge.msdk.reward.adapter.d r4, boolean r5, int r6) {
                r0 = this;
                r0.f = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.d = r5
                r0.e = r6
                r0.<init>()
                return
        }

        @Override
        public final void a(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
                r1 = this;
                com.mbridge.msdk.reward.a.a r5 = r1.f
                r0 = 1
                r5.d = r0
                com.mbridge.msdk.reward.a.a r5 = r1.f
                boolean r5 = r5.c
                if (r5 == 0) goto L2b
                com.mbridge.msdk.reward.a.a r5 = r1.f
                boolean r5 = r5.e
                if (r5 != 0) goto L2b
                com.mbridge.msdk.reward.a.a r5 = r1.f
                android.os.Handler r5 = com.mbridge.msdk.reward.a.a.q(r5)
                if (r5 == 0) goto L2b
                com.mbridge.msdk.reward.a.a r5 = r1.f
                r5.e = r0
                com.mbridge.msdk.reward.a.a r5 = r1.f
                android.os.Handler r5 = com.mbridge.msdk.reward.a.a.q(r5)
                com.mbridge.msdk.reward.a.a$6$1 r0 = new com.mbridge.msdk.reward.a.a$6$1
                r0.<init>(r1, r4, r2, r3)
                r5.post(r0)
            L2b:
                return
        }

        @Override
        public final void a(java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12) {
                r7 = this;
                com.mbridge.msdk.reward.a.a r8 = r7.f
                java.util.List r11 = com.mbridge.msdk.reward.a.a.b(r8)
                com.mbridge.msdk.reward.a.a.a(r8, r9, r11)
                com.mbridge.msdk.reward.a.a r8 = r7.f
                r9 = 0
                r8.d = r9
                com.mbridge.msdk.reward.a.a r8 = r7.f
                com.mbridge.msdk.reward.a.a$c r8 = com.mbridge.msdk.reward.a.a.d(r8)
                if (r8 == 0) goto L7a
                com.mbridge.msdk.reward.a.a r8 = r7.f
                boolean r8 = r8.f
                if (r8 != 0) goto L7a
                com.mbridge.msdk.reward.a.a r8 = r7.f
                r11 = 1
                r8.f = r11
                com.mbridge.msdk.reward.a.a r8 = r7.f
                java.util.concurrent.CopyOnWriteArrayList r8 = com.mbridge.msdk.reward.a.a.a(r8)
                if (r8 == 0) goto L6f
                com.mbridge.msdk.reward.a.a r8 = r7.f
                java.util.concurrent.CopyOnWriteArrayList r8 = com.mbridge.msdk.reward.a.a.a(r8)
                int r8 = r8.size()
                if (r8 <= 0) goto L6f
                com.mbridge.msdk.reward.a.a r8 = r7.f
                android.content.Context r0 = com.mbridge.msdk.reward.a.a.m(r8)
                com.mbridge.msdk.reward.a.a r8 = r7.f
                java.util.concurrent.CopyOnWriteArrayList r8 = com.mbridge.msdk.reward.a.a.a(r8)
                java.lang.Object r8 = r8.get(r9)
                r1 = r8
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1
                java.lang.StringBuilder r8 = new java.lang.StringBuilder
                r8.<init>()
                java.lang.String r9 = ""
                r8.append(r9)
                r8.append(r12)
                java.lang.String r2 = r8.toString()
                com.mbridge.msdk.reward.a.a r8 = r7.f
                java.lang.String r3 = com.mbridge.msdk.reward.a.a.g(r8)
                com.mbridge.msdk.reward.a.a r8 = r7.f
                boolean r4 = com.mbridge.msdk.reward.a.a.i(r8)
                com.mbridge.msdk.foundation.entity.CampaignEx r8 = r7.a
                java.lang.String r6 = r8.getRequestIdNotice()
                r5 = r10
                com.mbridge.msdk.reward.b.a.a(r0, r1, r2, r3, r4, r5, r6)
            L6f:
                com.mbridge.msdk.reward.a.a r8 = r7.f
                com.mbridge.msdk.reward.a.a$c r8 = com.mbridge.msdk.reward.a.a.d(r8)
                java.lang.String r9 = "errorCode: 3203 errorMessage: tpl temp resource download failed"
                com.mbridge.msdk.reward.a.a.c.d(r8, r9)
            L7a:
                return
        }
    }


    public class a implements java.lang.Runnable {
        final com.mbridge.msdk.reward.a.a a;
        private final com.mbridge.msdk.reward.adapter.d b;
        private final int c;
        private final boolean d;

        public a(com.mbridge.msdk.reward.a.a r1, com.mbridge.msdk.reward.adapter.d r2, int r3, boolean r4) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                r0.c = r3
                r0.d = r4
                return
        }

        @Override
        public final void run() {
                r8 = this;
                com.mbridge.msdk.reward.adapter.d r0 = r8.b
                if (r0 == 0) goto L8
                r1 = 1
                r0.d(r1)
            L8:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "adSource="
                r0.append(r1)
                int r1 = r8.c
                r0.append(r1)
                java.lang.String r1 = " CommonCancelTimeTask mIsDevCall："
                r0.append(r1)
                boolean r1 = r8.d
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "RewardVideoController"
                com.mbridge.msdk.foundation.tools.z.d(r1, r0)
                com.mbridge.msdk.reward.a.a r0 = r8.a
                android.content.Context r1 = com.mbridge.msdk.reward.a.a.m(r0)
                r2 = 0
                com.mbridge.msdk.reward.a.a r0 = r8.a
                java.lang.String r4 = com.mbridge.msdk.reward.a.a.g(r0)
                com.mbridge.msdk.reward.a.a r0 = r8.a
                boolean r5 = com.mbridge.msdk.reward.a.a.i(r0)
                java.lang.String r3 = "v3 is timeout"
                java.lang.String r6 = ""
                java.lang.String r7 = ""
                com.mbridge.msdk.reward.b.a.b(r1, r2, r3, r4, r5, r6, r7)
                com.mbridge.msdk.reward.a.a r0 = r8.a
                java.lang.String r1 = "v3 is timeout"
                com.mbridge.msdk.reward.a.a.a(r0, r1)
                return
        }
    }

    public class b implements com.mbridge.msdk.reward.adapter.b {
        final com.mbridge.msdk.reward.a.a a;
        private com.mbridge.msdk.reward.adapter.a b;
        private boolean c;
        private java.lang.Runnable d;

        public b(com.mbridge.msdk.reward.a.a r1, com.mbridge.msdk.reward.adapter.a r2, boolean r3) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                r0.c = r3
                return
        }

        @Override
        public final void a() {
                r3 = this;
                java.lang.Runnable r0 = r3.d
                if (r0 == 0) goto Lf
                com.mbridge.msdk.reward.a.a r0 = r3.a
                android.os.Handler r0 = com.mbridge.msdk.reward.a.a.q(r0)
                java.lang.Runnable r1 = r3.d
                r0.removeCallbacks(r1)
            Lf:
                com.mbridge.msdk.reward.a.a r0 = r3.a
                com.mbridge.msdk.reward.a.a$c r0 = com.mbridge.msdk.reward.a.a.d(r0)
                if (r0 == 0) goto L2c
                com.mbridge.msdk.reward.a.a r0 = r3.a
                com.mbridge.msdk.reward.a.a$c r0 = com.mbridge.msdk.reward.a.a.d(r0)
                com.mbridge.msdk.reward.a.a r1 = r3.a
                java.lang.String r1 = com.mbridge.msdk.reward.a.a.f(r1)
                com.mbridge.msdk.reward.a.a r2 = r3.a
                java.lang.String r2 = com.mbridge.msdk.reward.a.a.g(r2)
                com.mbridge.msdk.reward.a.a.c.a(r0, r1, r2)
            L2c:
                return
        }

        public final void a(java.lang.Runnable r1) {
                r0 = this;
                r0.d = r1
                return
        }

        @Override
        public final void a(java.lang.String r3) {
                r2 = this;
                java.lang.Runnable r0 = r2.d
                if (r0 == 0) goto Lf
                com.mbridge.msdk.reward.a.a r0 = r2.a
                android.os.Handler r0 = com.mbridge.msdk.reward.a.a.q(r0)
                java.lang.Runnable r1 = r2.d
                r0.removeCallbacks(r1)
            Lf:
                com.mbridge.msdk.reward.adapter.a r0 = r2.b
                if (r0 == 0) goto L19
                r1 = 0
                r0.a(r1)
                r2.b = r1
            L19:
                com.mbridge.msdk.reward.a.a r0 = r2.a
                com.mbridge.msdk.reward.a.a$c r0 = com.mbridge.msdk.reward.a.a.d(r0)
                if (r0 == 0) goto L2a
                com.mbridge.msdk.reward.a.a r0 = r2.a
                com.mbridge.msdk.reward.a.a$c r0 = com.mbridge.msdk.reward.a.a.d(r0)
                com.mbridge.msdk.reward.a.a.c.a(r0, r3)
            L2a:
                return
        }

        @Override
        public final void b(java.lang.String r3) {
                r2 = this;
                java.lang.Runnable r3 = r2.d
                if (r3 == 0) goto Lf
                com.mbridge.msdk.reward.a.a r3 = r2.a
                android.os.Handler r3 = com.mbridge.msdk.reward.a.a.q(r3)
                java.lang.Runnable r0 = r2.d
                r3.removeCallbacks(r0)
            Lf:
                com.mbridge.msdk.reward.a.a r3 = r2.a
                com.mbridge.msdk.reward.a.a$c r3 = com.mbridge.msdk.reward.a.a.d(r3)
                if (r3 == 0) goto L2c
                com.mbridge.msdk.reward.a.a r3 = r2.a
                com.mbridge.msdk.reward.a.a$c r3 = com.mbridge.msdk.reward.a.a.d(r3)
                com.mbridge.msdk.reward.a.a r0 = r2.a
                java.lang.String r0 = com.mbridge.msdk.reward.a.a.f(r0)
                com.mbridge.msdk.reward.a.a r1 = r2.a
                java.lang.String r1 = com.mbridge.msdk.reward.a.a.g(r1)
                com.mbridge.msdk.reward.a.a.c.d(r3, r0, r1)
            L2c:
                return
        }
    }

    private final class c {
        final com.mbridge.msdk.reward.a.a a;
        private java.lang.ref.WeakReference<com.mbridge.msdk.videocommon.listener.InterVideoOutListener> b;
        private volatile java.util.concurrent.atomic.AtomicInteger c;
        private android.os.Handler d;
        private java.lang.String e;
        private boolean f;

        private c(com.mbridge.msdk.reward.a.a r1, com.mbridge.msdk.videocommon.listener.InterVideoOutListener r2, android.os.Handler r3, java.lang.String r4) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
                r1.<init>(r2)
                r0.b = r1
                java.util.concurrent.atomic.AtomicInteger r1 = new java.util.concurrent.atomic.AtomicInteger
                r2 = 0
                r1.<init>(r2)
                r0.c = r1
                r0.d = r3
                r0.e = r4
                return
        }

        c(com.mbridge.msdk.reward.a.a r1, com.mbridge.msdk.videocommon.listener.InterVideoOutListener r2, android.os.Handler r3, java.lang.String r4, com.mbridge.msdk.reward.a.a.1 r5) {
                r0 = this;
                r0.<init>(r1, r2, r3, r4)
                return
        }

        static int a(com.mbridge.msdk.reward.a.a.c r0) {
                java.util.concurrent.atomic.AtomicInteger r0 = r0.c
                int r0 = r0.get()
                return r0
        }

        static void a(com.mbridge.msdk.reward.a.a.c r0, int r1) {
                java.util.concurrent.atomic.AtomicInteger r0 = r0.c
                r0.set(r1)
                return
        }

        static void a(com.mbridge.msdk.reward.a.a.c r7, java.lang.String r8) {
                android.os.Handler r0 = r7.d
                if (r0 == 0) goto La
                r1 = 1001002(0xf462a, float:1.402703E-39)
                r0.removeMessages(r1)
            La:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "收到 onVideoLoadFail，当前状态： "
                r0.append(r1)
                java.util.concurrent.atomic.AtomicInteger r2 = r7.c
                int r2 = r2.get()
                r0.append(r2)
                java.lang.String r2 = " hasCalledVideoLoadFail: "
                r0.append(r2)
                com.mbridge.msdk.reward.a.a r3 = r7.a
                boolean r3 = com.mbridge.msdk.reward.a.a.v(r3)
                r0.append(r3)
                java.lang.String r3 = " "
                r0.append(r3)
                r0.append(r8)
                java.lang.String r0 = r0.toString()
                java.lang.String r4 = "RewardVideoController_Listener"
                com.mbridge.msdk.foundation.tools.z.a(r4, r0)
                java.lang.ref.WeakReference<com.mbridge.msdk.videocommon.listener.InterVideoOutListener> r0 = r7.b
                if (r0 == 0) goto L111
                java.lang.Object r0 = r0.get()
                com.mbridge.msdk.videocommon.listener.InterVideoOutListener r0 = (com.mbridge.msdk.videocommon.listener.InterVideoOutListener) r0
                if (r0 == 0) goto L111
                java.util.concurrent.atomic.AtomicInteger r0 = r7.c
                int r0 = r0.get()
                r5 = 1
                if (r0 == r5) goto L5a
                java.util.concurrent.atomic.AtomicInteger r0 = r7.c
                int r0 = r0.get()
                r6 = 3
                if (r0 != r6) goto L111
            L5a:
                android.os.Handler r0 = r7.d
                if (r0 == 0) goto L111
                com.mbridge.msdk.reward.a.a r0 = r7.a
                com.mbridge.msdk.reward.a.a.e(r0, r5)
                com.mbridge.msdk.reward.a.a r0 = r7.a
                boolean r0 = com.mbridge.msdk.reward.a.a.w(r0)
                if (r0 == 0) goto L73
                java.lang.String r0 = "resource load timeout"
                boolean r0 = r8.contains(r0)
                if (r0 == 0) goto L78
            L73:
                com.mbridge.msdk.reward.a.a r0 = r7.a
                com.mbridge.msdk.reward.a.a.f(r0, r5)
            L78:
                com.mbridge.msdk.reward.a.a r0 = r7.a
                boolean r0 = com.mbridge.msdk.reward.a.a.u(r0)
                r5 = 2
                if (r0 == 0) goto L86
                java.util.concurrent.atomic.AtomicInteger r0 = r7.c
                r0.set(r5)
            L86:
                com.mbridge.msdk.reward.a.a r0 = r7.a
                boolean r0 = com.mbridge.msdk.reward.a.a.v(r0)
                if (r0 == 0) goto Le2
                com.mbridge.msdk.reward.a.a r0 = r7.a
                boolean r0 = com.mbridge.msdk.reward.a.a.x(r0)
                if (r0 == 0) goto Le2
                com.mbridge.msdk.reward.a.a r0 = r7.a
                boolean r0 = com.mbridge.msdk.reward.a.a.u(r0)
                if (r0 != 0) goto Le2
                java.util.concurrent.atomic.AtomicInteger r0 = r7.c
                r0.set(r5)
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r1)
                java.util.concurrent.atomic.AtomicInteger r1 = r7.c
                int r1 = r1.get()
                r0.append(r1)
                r0.append(r2)
                com.mbridge.msdk.reward.a.a r1 = r7.a
                boolean r1 = com.mbridge.msdk.reward.a.a.v(r1)
                r0.append(r1)
                r0.append(r3)
                r0.append(r8)
                java.lang.String r1 = " 响应"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                com.mbridge.msdk.foundation.tools.z.d(r4, r0)
                android.os.Message r0 = android.os.Message.obtain()
                r0.obj = r8
                r8 = 16
                r0.what = r8
                android.os.Handler r7 = r7.d
                r7.sendMessage(r0)
                goto L111
            Le2:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r1)
                java.util.concurrent.atomic.AtomicInteger r1 = r7.c
                int r1 = r1.get()
                r0.append(r1)
                r0.append(r2)
                com.mbridge.msdk.reward.a.a r7 = r7.a
                boolean r7 = com.mbridge.msdk.reward.a.a.v(r7)
                r0.append(r7)
                r0.append(r3)
                r0.append(r8)
                java.lang.String r7 = " 无需响应"
                r0.append(r7)
                java.lang.String r7 = r0.toString()
                com.mbridge.msdk.foundation.tools.z.a(r4, r7)
            L111:
                return
        }

        static void a(com.mbridge.msdk.reward.a.a.c r6, java.lang.String r7, java.lang.String r8) {
                android.os.Handler r0 = r6.d
                if (r0 == 0) goto La
                r1 = 1001002(0xf462a, float:1.402703E-39)
                r0.removeMessages(r1)
            La:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "收到 onVideoLoadSuccess，当前状态： "
                r0.append(r1)
                java.util.concurrent.atomic.AtomicInteger r2 = r6.c
                int r2 = r2.get()
                r0.append(r2)
                java.lang.String r2 = " hasCalledVideoLoadSuccess: "
                r0.append(r2)
                com.mbridge.msdk.reward.a.a r3 = r6.a
                boolean r3 = com.mbridge.msdk.reward.a.a.u(r3)
                r0.append(r3)
                java.lang.String r0 = r0.toString()
                java.lang.String r3 = "RewardVideoController_Listener"
                com.mbridge.msdk.foundation.tools.z.a(r3, r0)
                java.lang.ref.WeakReference<com.mbridge.msdk.videocommon.listener.InterVideoOutListener> r0 = r6.b
                if (r0 == 0) goto Ldd
                java.lang.Object r0 = r0.get()
                com.mbridge.msdk.videocommon.listener.InterVideoOutListener r0 = (com.mbridge.msdk.videocommon.listener.InterVideoOutListener) r0
                if (r0 == 0) goto Ldd
                java.util.concurrent.atomic.AtomicInteger r0 = r6.c
                int r0 = r0.get()
                r4 = 1
                if (r0 == r4) goto L52
                java.util.concurrent.atomic.AtomicInteger r0 = r6.c
                int r0 = r0.get()
                r5 = 3
                if (r0 != r5) goto Ldd
            L52:
                android.os.Handler r0 = r6.d
                if (r0 == 0) goto Ldd
                java.util.concurrent.atomic.AtomicInteger r0 = r6.c
                r5 = 2
                r0.set(r5)
                com.mbridge.msdk.reward.a.a r0 = r6.a
                boolean r0 = com.mbridge.msdk.reward.a.a.u(r0)
                if (r0 != 0) goto Lb4
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r1)
                java.util.concurrent.atomic.AtomicInteger r1 = r6.c
                int r1 = r1.get()
                r0.append(r1)
                r0.append(r2)
                com.mbridge.msdk.reward.a.a r1 = r6.a
                boolean r1 = com.mbridge.msdk.reward.a.a.u(r1)
                r0.append(r1)
                java.lang.String r1 = " 响应"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                com.mbridge.msdk.foundation.tools.z.d(r3, r0)
                com.mbridge.msdk.reward.a.a r0 = r6.a
                com.mbridge.msdk.reward.a.a.d(r0, r4)
                android.os.Message r0 = android.os.Message.obtain()
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r2 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
                r1.putString(r2, r7)
                java.lang.String r7 = "unit_id"
                r1.putString(r7, r8)
                r0.setData(r1)
                r0.obj = r8
                r7 = 9
                r0.what = r7
                android.os.Handler r6 = r6.d
                r6.sendMessage(r0)
                goto Ldd
            Lb4:
                java.lang.StringBuilder r7 = new java.lang.StringBuilder
                r7.<init>()
                r7.append(r1)
                java.util.concurrent.atomic.AtomicInteger r8 = r6.c
                int r8 = r8.get()
                r7.append(r8)
                r7.append(r2)
                com.mbridge.msdk.reward.a.a r6 = r6.a
                boolean r6 = com.mbridge.msdk.reward.a.a.u(r6)
                r7.append(r6)
                java.lang.String r6 = " 无需响应"
                r7.append(r6)
                java.lang.String r6 = r7.toString()
                com.mbridge.msdk.foundation.tools.z.a(r3, r6)
            Ldd:
                return
        }

        private void a(java.lang.String r2) {
                r1 = this;
                android.os.Handler r0 = r1.d
                if (r0 == 0) goto L13
                android.os.Message r0 = android.os.Message.obtain()
                r0.obj = r2
                r2 = 18
                r0.what = r2
                android.os.Handler r2 = r1.d
                r2.sendMessage(r0)
            L13:
                return
        }

        static java.util.concurrent.atomic.AtomicInteger b(com.mbridge.msdk.reward.a.a.c r0) {
                java.util.concurrent.atomic.AtomicInteger r0 = r0.c
                return r0
        }

        static void b(com.mbridge.msdk.reward.a.a.c r0, java.lang.String r1) {
                r0.a(r1)
                return
        }

        static void b(com.mbridge.msdk.reward.a.a.c r6, java.lang.String r7, java.lang.String r8) {
                android.os.Handler r0 = r6.d
                if (r0 == 0) goto La
                r1 = 1001002(0xf462a, float:1.402703E-39)
                r0.removeMessages(r1)
            La:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "收到 onVideoLoadSuccessForCache，当前状态： "
                r0.append(r1)
                java.util.concurrent.atomic.AtomicInteger r2 = r6.c
                int r2 = r2.get()
                r0.append(r2)
                java.lang.String r2 = " hasCalledVideoLoadSuccess: "
                r0.append(r2)
                com.mbridge.msdk.reward.a.a r3 = r6.a
                boolean r3 = com.mbridge.msdk.reward.a.a.u(r3)
                r0.append(r3)
                java.lang.String r0 = r0.toString()
                java.lang.String r3 = "RewardVideoController_Listener"
                com.mbridge.msdk.foundation.tools.z.a(r3, r0)
                java.lang.ref.WeakReference<com.mbridge.msdk.videocommon.listener.InterVideoOutListener> r0 = r6.b
                if (r0 == 0) goto Lf2
                java.lang.Object r0 = r0.get()
                com.mbridge.msdk.videocommon.listener.InterVideoOutListener r0 = (com.mbridge.msdk.videocommon.listener.InterVideoOutListener) r0
                if (r0 == 0) goto Lf2
                java.util.concurrent.atomic.AtomicInteger r0 = r6.c
                int r0 = r0.get()
                r4 = 3
                r5 = 1
                if (r0 == r5) goto L52
                java.util.concurrent.atomic.AtomicInteger r0 = r6.c
                int r0 = r0.get()
                if (r0 != r4) goto Lf2
            L52:
                android.os.Handler r0 = r6.d
                if (r0 == 0) goto Lf2
                java.util.concurrent.atomic.AtomicInteger r0 = r6.c
                int r0 = r0.get()
                if (r0 != r5) goto L63
                java.util.concurrent.atomic.AtomicInteger r0 = r6.c
                r0.set(r4)
            L63:
                com.mbridge.msdk.reward.a.a r0 = r6.a
                boolean r0 = com.mbridge.msdk.reward.a.a.u(r0)
                if (r0 != 0) goto Lc9
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r1)
                java.util.concurrent.atomic.AtomicInteger r1 = r6.c
                int r1 = r1.get()
                r0.append(r1)
                r0.append(r2)
                com.mbridge.msdk.reward.a.a r1 = r6.a
                boolean r1 = com.mbridge.msdk.reward.a.a.u(r1)
                r0.append(r1)
                java.lang.String r1 = " 响应"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                com.mbridge.msdk.foundation.tools.z.d(r3, r0)
                com.mbridge.msdk.reward.a.a r0 = r6.a
                com.mbridge.msdk.reward.a.a.d(r0, r5)
                android.os.Message r0 = android.os.Message.obtain()
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r2 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
                r1.putString(r2, r7)
                java.lang.String r7 = "unit_id"
                r1.putString(r7, r8)
                r0.setData(r1)
                r0.obj = r8
                r7 = 9
                r0.what = r7
                android.os.Handler r7 = r6.d
                r7.sendMessage(r0)
                com.mbridge.msdk.reward.a.a r7 = r6.a
                boolean r7 = com.mbridge.msdk.reward.a.a.v(r7)
                if (r7 == 0) goto Lf2
                java.util.concurrent.atomic.AtomicInteger r6 = r6.c
                r7 = 2
                r6.set(r7)
                goto Lf2
            Lc9:
                java.lang.StringBuilder r7 = new java.lang.StringBuilder
                r7.<init>()
                r7.append(r1)
                java.util.concurrent.atomic.AtomicInteger r8 = r6.c
                int r8 = r8.get()
                r7.append(r8)
                r7.append(r2)
                com.mbridge.msdk.reward.a.a r6 = r6.a
                boolean r6 = com.mbridge.msdk.reward.a.a.u(r6)
                r7.append(r6)
                java.lang.String r6 = " 无需响应"
                r7.append(r6)
                java.lang.String r6 = r7.toString()
                com.mbridge.msdk.foundation.tools.z.a(r3, r6)
            Lf2:
                return
        }

        static void c(com.mbridge.msdk.reward.a.a.c r2, java.lang.String r3) {
                java.util.concurrent.atomic.AtomicInteger r0 = r2.c
                r1 = 2
                r0.set(r1)
                r2.a(r3)
                return
        }

        static void c(com.mbridge.msdk.reward.a.a.c r4, java.lang.String r5, java.lang.String r6) {
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "收到 onCampaignLoadSuccessForCache，当前状态： "
                r0.append(r1)
                java.util.concurrent.atomic.AtomicInteger r2 = r4.c
                int r2 = r2.get()
                r0.append(r2)
                java.lang.String r2 = " hasCalledCampaignLoadSuccess: "
                r0.append(r2)
                com.mbridge.msdk.reward.a.a r3 = r4.a
                boolean r3 = com.mbridge.msdk.reward.a.a.t(r3)
                r0.append(r3)
                java.lang.String r0 = r0.toString()
                java.lang.String r3 = "RewardVideoController_Listener"
                com.mbridge.msdk.foundation.tools.z.a(r3, r0)
                java.lang.ref.WeakReference<com.mbridge.msdk.videocommon.listener.InterVideoOutListener> r0 = r4.b
                if (r0 == 0) goto Lbc
                java.lang.Object r0 = r0.get()
                com.mbridge.msdk.videocommon.listener.InterVideoOutListener r0 = (com.mbridge.msdk.videocommon.listener.InterVideoOutListener) r0
                if (r0 == 0) goto Lbc
                android.os.Handler r0 = r4.d
                if (r0 == 0) goto Lbc
                com.mbridge.msdk.reward.a.a r0 = r4.a
                boolean r0 = com.mbridge.msdk.reward.a.a.t(r0)
                if (r0 != 0) goto L93
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r1)
                java.util.concurrent.atomic.AtomicInteger r1 = r4.c
                int r1 = r1.get()
                r0.append(r1)
                r0.append(r2)
                com.mbridge.msdk.reward.a.a r1 = r4.a
                boolean r1 = com.mbridge.msdk.reward.a.a.t(r1)
                r0.append(r1)
                java.lang.String r1 = " 响应"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                com.mbridge.msdk.foundation.tools.z.d(r3, r0)
                com.mbridge.msdk.reward.a.a r0 = r4.a
                r1 = 1
                com.mbridge.msdk.reward.a.a.c(r0, r1)
                android.os.Message r0 = android.os.Message.obtain()
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r2 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
                r1.putString(r2, r5)
                java.lang.String r5 = "unit_id"
                r1.putString(r5, r6)
                r0.setData(r1)
                r0.obj = r6
                r5 = 17
                r0.what = r5
                android.os.Handler r4 = r4.d
                r4.sendMessage(r0)
                goto Lbc
            L93:
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>()
                r5.append(r1)
                java.util.concurrent.atomic.AtomicInteger r6 = r4.c
                int r6 = r6.get()
                r5.append(r6)
                r5.append(r2)
                com.mbridge.msdk.reward.a.a r4 = r4.a
                boolean r4 = com.mbridge.msdk.reward.a.a.t(r4)
                r5.append(r4)
                java.lang.String r4 = " 无需响应"
                r5.append(r4)
                java.lang.String r4 = r5.toString()
                com.mbridge.msdk.foundation.tools.z.a(r3, r4)
            Lbc:
                return
        }

        static void d(com.mbridge.msdk.reward.a.a.c r7, java.lang.String r8) {
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "收到 onVideoLoadFailForCache，当前状态： "
                r0.append(r1)
                java.util.concurrent.atomic.AtomicInteger r2 = r7.c
                int r2 = r2.get()
                r0.append(r2)
                java.lang.String r2 = " hasCalledVideoLoadFailedForCache: "
                r0.append(r2)
                com.mbridge.msdk.reward.a.a r3 = r7.a
                boolean r3 = com.mbridge.msdk.reward.a.a.x(r3)
                r0.append(r3)
                java.lang.String r3 = " "
                r0.append(r3)
                r0.append(r8)
                java.lang.String r0 = r0.toString()
                java.lang.String r4 = "RewardVideoController_Listener"
                com.mbridge.msdk.foundation.tools.z.a(r4, r0)
                java.lang.ref.WeakReference<com.mbridge.msdk.videocommon.listener.InterVideoOutListener> r0 = r7.b
                if (r0 == 0) goto Lf4
                java.lang.Object r0 = r0.get()
                com.mbridge.msdk.videocommon.listener.InterVideoOutListener r0 = (com.mbridge.msdk.videocommon.listener.InterVideoOutListener) r0
                if (r0 == 0) goto Lf4
                java.util.concurrent.atomic.AtomicInteger r0 = r7.c
                int r0 = r0.get()
                r5 = 1
                if (r0 == r5) goto L50
                java.util.concurrent.atomic.AtomicInteger r0 = r7.c
                int r0 = r0.get()
                r6 = 3
                if (r0 != r6) goto Lf4
            L50:
                android.os.Handler r0 = r7.d
                if (r0 == 0) goto Lf4
                com.mbridge.msdk.reward.a.a r0 = r7.a
                com.mbridge.msdk.reward.a.a.f(r0, r5)
                java.lang.String r0 = "resource load timeout"
                boolean r0 = r8.contains(r0)
                if (r0 == 0) goto L66
                com.mbridge.msdk.reward.a.a r0 = r7.a
                com.mbridge.msdk.reward.a.a.e(r0, r5)
            L66:
                com.mbridge.msdk.reward.a.a r0 = r7.a
                boolean r0 = com.mbridge.msdk.reward.a.a.x(r0)
                if (r0 == 0) goto Lc5
                com.mbridge.msdk.reward.a.a r0 = r7.a
                boolean r0 = com.mbridge.msdk.reward.a.a.v(r0)
                if (r0 == 0) goto Lc5
                com.mbridge.msdk.reward.a.a r0 = r7.a
                boolean r0 = com.mbridge.msdk.reward.a.a.u(r0)
                if (r0 != 0) goto Lc5
                java.util.concurrent.atomic.AtomicInteger r0 = r7.c
                r1 = 2
                r0.set(r1)
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "收到 hasCalledVideoLoadFailedForCache，当前状态： "
                r0.append(r1)
                java.util.concurrent.atomic.AtomicInteger r1 = r7.c
                int r1 = r1.get()
                r0.append(r1)
                r0.append(r2)
                com.mbridge.msdk.reward.a.a r1 = r7.a
                boolean r1 = com.mbridge.msdk.reward.a.a.x(r1)
                r0.append(r1)
                r0.append(r3)
                r0.append(r8)
                java.lang.String r1 = " 响应"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                com.mbridge.msdk.foundation.tools.z.d(r4, r0)
                android.os.Message r0 = android.os.Message.obtain()
                r0.obj = r8
                r8 = 16
                r0.what = r8
                android.os.Handler r7 = r7.d
                r7.sendMessage(r0)
                goto Lf4
            Lc5:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r1)
                java.util.concurrent.atomic.AtomicInteger r1 = r7.c
                int r1 = r1.get()
                r0.append(r1)
                r0.append(r2)
                com.mbridge.msdk.reward.a.a r7 = r7.a
                boolean r7 = com.mbridge.msdk.reward.a.a.x(r7)
                r0.append(r7)
                r0.append(r3)
                r0.append(r8)
                java.lang.String r7 = " 无需响应"
                r0.append(r7)
                java.lang.String r7 = r0.toString()
                com.mbridge.msdk.foundation.tools.z.a(r4, r7)
            Lf4:
                return
        }

        static void d(com.mbridge.msdk.reward.a.a.c r6, java.lang.String r7, java.lang.String r8) {
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "收到 onCampaignLoadSuccess，当前状态： "
                r0.append(r1)
                java.util.concurrent.atomic.AtomicInteger r2 = r6.c
                int r2 = r2.get()
                r0.append(r2)
                java.lang.String r2 = " hasCalledCampaignLoadSuccess: "
                r0.append(r2)
                com.mbridge.msdk.reward.a.a r3 = r6.a
                boolean r3 = com.mbridge.msdk.reward.a.a.t(r3)
                r0.append(r3)
                java.lang.String r0 = r0.toString()
                java.lang.String r3 = "RewardVideoController_Listener"
                com.mbridge.msdk.foundation.tools.z.a(r3, r0)
                java.lang.ref.WeakReference<com.mbridge.msdk.videocommon.listener.InterVideoOutListener> r0 = r6.b
                if (r0 == 0) goto Lcd
                java.lang.Object r0 = r0.get()
                com.mbridge.msdk.videocommon.listener.InterVideoOutListener r0 = (com.mbridge.msdk.videocommon.listener.InterVideoOutListener) r0
                if (r0 == 0) goto Lcd
                java.util.concurrent.atomic.AtomicInteger r0 = r6.c
                int r0 = r0.get()
                r4 = 1
                if (r0 == r4) goto L48
                java.util.concurrent.atomic.AtomicInteger r0 = r6.c
                int r0 = r0.get()
                r5 = 3
                if (r0 != r5) goto Lcd
            L48:
                android.os.Handler r0 = r6.d
                if (r0 == 0) goto Lcd
                com.mbridge.msdk.reward.a.a r0 = r6.a
                boolean r0 = com.mbridge.msdk.reward.a.a.t(r0)
                if (r0 != 0) goto La4
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r1)
                java.util.concurrent.atomic.AtomicInteger r1 = r6.c
                int r1 = r1.get()
                r0.append(r1)
                r0.append(r2)
                com.mbridge.msdk.reward.a.a r1 = r6.a
                boolean r1 = com.mbridge.msdk.reward.a.a.t(r1)
                r0.append(r1)
                java.lang.String r1 = " 响应"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                com.mbridge.msdk.foundation.tools.z.d(r3, r0)
                com.mbridge.msdk.reward.a.a r0 = r6.a
                com.mbridge.msdk.reward.a.a.c(r0, r4)
                android.os.Message r0 = android.os.Message.obtain()
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r2 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
                r1.putString(r2, r7)
                java.lang.String r7 = "unit_id"
                r1.putString(r7, r8)
                r0.setData(r1)
                r0.obj = r8
                r7 = 17
                r0.what = r7
                android.os.Handler r6 = r6.d
                r6.sendMessage(r0)
                goto Lcd
            La4:
                java.lang.StringBuilder r7 = new java.lang.StringBuilder
                r7.<init>()
                r7.append(r1)
                java.util.concurrent.atomic.AtomicInteger r8 = r6.c
                int r8 = r8.get()
                r7.append(r8)
                r7.append(r2)
                com.mbridge.msdk.reward.a.a r6 = r6.a
                boolean r6 = com.mbridge.msdk.reward.a.a.t(r6)
                r7.append(r6)
                java.lang.String r6 = " 无需响应"
                r7.append(r6)
                java.lang.String r6 = r7.toString()
                com.mbridge.msdk.foundation.tools.z.a(r3, r6)
            Lcd:
                return
        }

        public final void a(boolean r1) {
                r0 = this;
                r0.f = r1
                return
        }
    }

    private final class d implements com.mbridge.msdk.video.bt.module.b.h {
        final com.mbridge.msdk.reward.a.a a;
        private com.mbridge.msdk.reward.a.a b;
        private int c;
        private android.os.Handler d;
        private int e;


        private d(com.mbridge.msdk.reward.a.a r1, com.mbridge.msdk.reward.a.a r2, int r3, android.os.Handler r4) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r1 = 0
                r0.e = r1
                r0.b = r2
                r0.c = r3
                r0.d = r4
                return
        }

        d(com.mbridge.msdk.reward.a.a r1, com.mbridge.msdk.reward.a.a r2, int r3, android.os.Handler r4, com.mbridge.msdk.reward.a.a.1 r5) {
                r0 = this;
                r0.<init>(r1, r2, r3, r4)
                return
        }

        static com.mbridge.msdk.reward.a.a a(com.mbridge.msdk.reward.a.a.d r0) {
                com.mbridge.msdk.reward.a.a r0 = r0.b
                return r0
        }

        @Override
        public final void a() {
                r3 = this;
                com.mbridge.msdk.reward.a.a r0 = r3.a
                r1 = 0
                com.mbridge.msdk.reward.a.a.a(r0, r1)
                java.lang.String r0 = "RewardVideoController"
                java.lang.String r1 = "=====================onAdShow====================="
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)
                com.mbridge.msdk.reward.a.a r0 = r3.b     // Catch: java.lang.Throwable -> L61
                if (r0 == 0) goto L69
                com.mbridge.msdk.reward.a.a r0 = r3.b     // Catch: java.lang.Throwable -> L61
                r1 = 1
                com.mbridge.msdk.reward.a.a.b(r0, r1)     // Catch: java.lang.Throwable -> L61
                com.mbridge.msdk.reward.a.a r0 = r3.b     // Catch: java.lang.Throwable -> L61
                com.mbridge.msdk.reward.adapter.d r0 = com.mbridge.msdk.reward.a.a.c(r0)     // Catch: java.lang.Throwable -> L61
                if (r0 == 0) goto L29
                com.mbridge.msdk.reward.a.a r0 = r3.b     // Catch: java.lang.Throwable -> L61
                com.mbridge.msdk.reward.adapter.d r0 = com.mbridge.msdk.reward.a.a.c(r0)     // Catch: java.lang.Throwable -> L61
                java.lang.String r1 = ""
                r0.c = r1     // Catch: java.lang.Throwable -> L61
            L29:
                com.mbridge.msdk.reward.a.a r0 = r3.b     // Catch: java.lang.Throwable -> L61
                int r1 = r3.c     // Catch: java.lang.Throwable -> L61
                com.mbridge.msdk.reward.a.a$7 r2 = new com.mbridge.msdk.reward.a.a$7     // Catch: java.lang.Throwable -> L61
                r2.<init>(r0, r1)     // Catch: java.lang.Throwable -> L61
                java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.a()     // Catch: java.lang.Throwable -> L61
                r0.execute(r2)     // Catch: java.lang.Throwable -> L61
                com.mbridge.msdk.reward.a.a r0 = r3.b     // Catch: java.lang.Throwable -> L61
                com.mbridge.msdk.videocommon.listener.InterVideoOutListener r0 = com.mbridge.msdk.reward.a.a.h(r0)     // Catch: java.lang.Throwable -> L61
                if (r0 == 0) goto L69
                com.mbridge.msdk.reward.a.a r0 = r3.a     // Catch: java.lang.Throwable -> L61
                boolean r0 = com.mbridge.msdk.reward.a.a.i(r0)     // Catch: java.lang.Throwable -> L61
                if (r0 == 0) goto L4e
                com.mbridge.msdk.reward.a.a r0 = r3.a     // Catch: java.lang.Throwable -> L61
                com.mbridge.msdk.reward.a.a.j(r0)     // Catch: java.lang.Throwable -> L61
            L4e:
                com.mbridge.msdk.reward.a.a r0 = r3.b     // Catch: java.lang.Throwable -> L61
                com.mbridge.msdk.videocommon.listener.InterVideoOutListener r0 = com.mbridge.msdk.reward.a.a.h(r0)     // Catch: java.lang.Throwable -> L61
                com.mbridge.msdk.reward.a.a r1 = r3.a     // Catch: java.lang.Throwable -> L61
                com.mbridge.msdk.out.MBridgeIds r1 = com.mbridge.msdk.reward.a.a.k(r1)     // Catch: java.lang.Throwable -> L61
                r0.onAdShow(r1)     // Catch: java.lang.Throwable -> L61
                r0 = 2
                r3.e = r0     // Catch: java.lang.Throwable -> L61
                goto L69
            L61:
                r0 = move-exception
                boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r1 == 0) goto L69
                r0.printStackTrace()
            L69:
                return
        }

        @Override
        public final void a(int r3, java.lang.String r4, java.lang.String r5) {
                r2 = this;
                r2.e = r3
                java.lang.String r3 = "RewardVideoController"
                java.lang.String r4 = "===================== onAutoLoad ====================="
                com.mbridge.msdk.foundation.tools.z.a(r3, r4)
                com.mbridge.msdk.reward.a.a r4 = r2.b
                if (r4 == 0) goto Lb0
                boolean r4 = com.mbridge.msdk.reward.a.a.i(r4)
                if (r4 != 0) goto Lb0
                com.mbridge.msdk.reward.a.a r4 = r2.b
                boolean r4 = com.mbridge.msdk.reward.a.a.p(r4)
                if (r4 != 0) goto Lb0
                com.mbridge.msdk.reward.a.a r4 = r2.b
                com.mbridge.msdk.videocommon.d.c r4 = com.mbridge.msdk.reward.a.a.l(r4)
                if (r4 == 0) goto Lb0
                com.mbridge.msdk.reward.a.a r4 = r2.b
                com.mbridge.msdk.videocommon.d.c r4 = com.mbridge.msdk.reward.a.a.l(r4)
                int r5 = r2.e
                boolean r4 = r4.v(r5)
                if (r4 == 0) goto Lb0
                com.mbridge.msdk.reward.a.a r4 = r2.b
                com.mbridge.msdk.reward.a.a$c r4 = com.mbridge.msdk.reward.a.a.d(r4)
                if (r4 == 0) goto Lb0
                com.mbridge.msdk.reward.a.a r4 = r2.b
                com.mbridge.msdk.reward.a.a$c r4 = com.mbridge.msdk.reward.a.a.d(r4)
                int r4 = com.mbridge.msdk.reward.a.a.c.a(r4)
                r5 = 1
                if (r4 == r5) goto Lb0
                com.mbridge.msdk.reward.a.a r4 = r2.b
                com.mbridge.msdk.reward.a.a$c r4 = com.mbridge.msdk.reward.a.a.d(r4)
                int r4 = com.mbridge.msdk.reward.a.a.c.a(r4)
                r5 = 3
                if (r4 == r5) goto Lb0
                com.mbridge.msdk.reward.a.a r4 = r2.a
                java.util.ArrayList r4 = com.mbridge.msdk.reward.a.a.n(r4)
                int r5 = r2.e
                java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
                boolean r4 = r4.contains(r5)
                if (r4 == 0) goto L66
                return
            L66:
                com.mbridge.msdk.reward.a.a r4 = r2.a
                java.util.ArrayList r4 = com.mbridge.msdk.reward.a.a.n(r4)
                int r5 = r2.e
                java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
                r4.add(r5)
                java.lang.String r4 = "===================== onAutoLoad 进来了====================="
                com.mbridge.msdk.foundation.tools.z.a(r3, r4)
                com.mbridge.msdk.reward.a.a r3 = r2.b
                com.mbridge.msdk.videocommon.d.c r3 = com.mbridge.msdk.reward.a.a.l(r3)
                int r3 = r3.E()
                int r3 = r3 * 1000
                int r4 = r2.e
                r5 = 4
                if (r4 != r5) goto L8d
                r3 = 3000(0xbb8, float:4.204E-42)
            L8d:
                android.os.Handler r4 = r2.d
                if (r4 == 0) goto L9e
                r5 = 1001001(0xf4629, float:1.402701E-39)
                r4.removeMessages(r5)
                android.os.Handler r4 = r2.d
                long r0 = (long) r3
                r4.sendEmptyMessageDelayed(r5, r0)
                goto Lb0
            L9e:
                android.os.Handler r4 = new android.os.Handler
                android.os.Looper r5 = android.os.Looper.getMainLooper()
                r4.<init>(r5)
                com.mbridge.msdk.reward.a.a$d$1 r5 = new com.mbridge.msdk.reward.a.a$d$1
                r5.<init>(r2)
                long r0 = (long) r3
                r4.postDelayed(r5, r0)
            Lb0:
                return
        }

        @Override
        public final void a(java.lang.String r12) {
                r11 = this;
                com.mbridge.msdk.reward.a.a r0 = r11.a
                r1 = 0
                com.mbridge.msdk.reward.a.a.a(r0, r1)
                java.lang.String r0 = "RewardVideoController"
                java.lang.String r2 = "=====================onShowFail====================="
                com.mbridge.msdk.foundation.tools.z.a(r0, r2)
                com.mbridge.msdk.reward.a.a r0 = r11.b     // Catch: java.lang.Exception -> L96
                if (r0 == 0) goto La0
                com.mbridge.msdk.reward.a.a r0 = r11.a     // Catch: java.lang.Exception -> L96
                boolean r0 = com.mbridge.msdk.reward.a.a.i(r0)     // Catch: java.lang.Exception -> L96
                if (r0 == 0) goto L1e
                com.mbridge.msdk.reward.a.a r0 = r11.a     // Catch: java.lang.Exception -> L96
                com.mbridge.msdk.reward.a.a.j(r0)     // Catch: java.lang.Exception -> L96
            L1e:
                com.mbridge.msdk.reward.a.a r0 = r11.b     // Catch: java.lang.Exception -> L96
                com.mbridge.msdk.reward.a.a.b(r0, r1)     // Catch: java.lang.Exception -> L96
                com.mbridge.msdk.reward.a.a r0 = r11.b     // Catch: java.lang.Exception -> L96
                com.mbridge.msdk.videocommon.listener.InterVideoOutListener r0 = com.mbridge.msdk.reward.a.a.h(r0)     // Catch: java.lang.Exception -> L96
                if (r0 == 0) goto La0
                com.mbridge.msdk.reward.a.a r0 = r11.a     // Catch: java.lang.Exception -> L7a
                java.util.concurrent.CopyOnWriteArrayList r0 = com.mbridge.msdk.reward.a.a.a(r0)     // Catch: java.lang.Exception -> L7a
                if (r0 == 0) goto L7a
                com.mbridge.msdk.reward.a.a r0 = r11.a     // Catch: java.lang.Exception -> L7a
                java.util.concurrent.CopyOnWriteArrayList r0 = com.mbridge.msdk.reward.a.a.a(r0)     // Catch: java.lang.Exception -> L7a
                int r0 = r0.size()     // Catch: java.lang.Exception -> L7a
                if (r0 <= 0) goto L7a
                com.mbridge.msdk.reward.a.a r0 = r11.a     // Catch: java.lang.Exception -> L7a
                java.util.concurrent.CopyOnWriteArrayList r0 = com.mbridge.msdk.reward.a.a.a(r0)     // Catch: java.lang.Exception -> L7a
                java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Exception -> L7a
                r2 = r0
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2     // Catch: java.lang.Exception -> L7a
                com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L7a
                android.content.Context r3 = r0.j()     // Catch: java.lang.Exception -> L7a
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L7a
                r0.<init>()     // Catch: java.lang.Exception -> L7a
                java.lang.String r4 = "show failed: "
                r0.append(r4)     // Catch: java.lang.Exception -> L7a
                r0.append(r12)     // Catch: java.lang.Exception -> L7a
                java.lang.String r4 = r0.toString()     // Catch: java.lang.Exception -> L7a
                com.mbridge.msdk.reward.a.a r0 = r11.a     // Catch: java.lang.Exception -> L7a
                java.lang.String r5 = com.mbridge.msdk.reward.a.a.g(r0)     // Catch: java.lang.Exception -> L7a
                com.mbridge.msdk.reward.a.a r0 = r11.a     // Catch: java.lang.Exception -> L7a
                boolean r6 = com.mbridge.msdk.reward.a.a.i(r0)     // Catch: java.lang.Exception -> L7a
                java.lang.String r7 = ""
                java.lang.String r8 = ""
                r9 = 0
                com.mbridge.msdk.reward.b.a.a(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> L7a
            L7a:
                com.mbridge.msdk.reward.a.a r0 = r11.b     // Catch: java.lang.Exception -> L8a
                com.mbridge.msdk.videocommon.listener.InterVideoOutListener r0 = com.mbridge.msdk.reward.a.a.h(r0)     // Catch: java.lang.Exception -> L8a
                com.mbridge.msdk.reward.a.a r2 = r11.a     // Catch: java.lang.Exception -> L8a
                com.mbridge.msdk.out.MBridgeIds r2 = com.mbridge.msdk.reward.a.a.k(r2)     // Catch: java.lang.Exception -> L8a
                r0.onShowFail(r2, r12)     // Catch: java.lang.Exception -> L8a
                goto L92
            L8a:
                r12 = move-exception
                boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> L96
                if (r0 == 0) goto L92
                r12.printStackTrace()     // Catch: java.lang.Exception -> L96
            L92:
                r12 = 4
                r11.e = r12     // Catch: java.lang.Exception -> L96
                goto La0
            L96:
                r12 = move-exception
                r11.e = r1
                boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r0 == 0) goto La0
                r12.printStackTrace()
            La0:
                return
        }

        @Override
        public final void a(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                java.lang.String r2 = "RewardVideoController"
                java.lang.String r3 = "=====================onVideoComplete====================="
                com.mbridge.msdk.foundation.tools.z.a(r2, r3)
                java.lang.String r3 = "onVideoComplete start"
                com.mbridge.msdk.foundation.tools.z.a(r2, r3)
                com.mbridge.msdk.reward.a.a r3 = r1.b     // Catch: java.lang.Exception -> L39
                if (r3 == 0) goto L41
                com.mbridge.msdk.reward.a.a r3 = r1.b     // Catch: java.lang.Exception -> L39
                com.mbridge.msdk.videocommon.listener.InterVideoOutListener r3 = com.mbridge.msdk.reward.a.a.h(r3)     // Catch: java.lang.Exception -> L39
                if (r3 == 0) goto L41
                com.mbridge.msdk.reward.a.a r3 = r1.b     // Catch: java.lang.Exception -> L28
                com.mbridge.msdk.videocommon.listener.InterVideoOutListener r3 = com.mbridge.msdk.reward.a.a.h(r3)     // Catch: java.lang.Exception -> L28
                com.mbridge.msdk.reward.a.a r0 = r1.a     // Catch: java.lang.Exception -> L28
                com.mbridge.msdk.out.MBridgeIds r0 = com.mbridge.msdk.reward.a.a.k(r0)     // Catch: java.lang.Exception -> L28
                r3.onVideoComplete(r0)     // Catch: java.lang.Exception -> L28
                goto L30
            L28:
                r3 = move-exception
                boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> L39
                if (r0 == 0) goto L30
                r3.printStackTrace()     // Catch: java.lang.Exception -> L39
            L30:
                r3 = 5
                r1.e = r3     // Catch: java.lang.Exception -> L39
                java.lang.String r3 = "onEndcardShow callback"
                com.mbridge.msdk.foundation.tools.z.a(r2, r3)     // Catch: java.lang.Exception -> L39
                goto L41
            L39:
                r2 = move-exception
                boolean r3 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r3 == 0) goto L41
                r2.printStackTrace()
            L41:
                return
        }

        @Override
        public final void a(boolean r4, int r5) {
                r3 = this;
                java.lang.String r0 = "RewardVideoController"
                java.lang.String r1 = "=====================onAdCloseWithIVReward====================="
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)
                java.lang.String r1 = "onAdCloseWithIVReward start"
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)
                com.mbridge.msdk.reward.a.a r1 = r3.b     // Catch: java.lang.Exception -> L41
                if (r1 == 0) goto L49
                com.mbridge.msdk.reward.a.a r1 = r3.b     // Catch: java.lang.Exception -> L41
                com.mbridge.msdk.videocommon.listener.InterVideoOutListener r1 = com.mbridge.msdk.reward.a.a.h(r1)     // Catch: java.lang.Exception -> L41
                if (r1 == 0) goto L49
                com.mbridge.msdk.reward.a.a r1 = r3.b     // Catch: java.lang.Exception -> L41
                r2 = 0
                com.mbridge.msdk.reward.a.a.b(r1, r2)     // Catch: java.lang.Exception -> L41
                com.mbridge.msdk.out.RewardInfo r1 = new com.mbridge.msdk.out.RewardInfo     // Catch: java.lang.Exception -> L33
                r1.<init>(r4, r5)     // Catch: java.lang.Exception -> L33
                com.mbridge.msdk.reward.a.a r4 = r3.b     // Catch: java.lang.Exception -> L33
                com.mbridge.msdk.videocommon.listener.InterVideoOutListener r4 = com.mbridge.msdk.reward.a.a.h(r4)     // Catch: java.lang.Exception -> L33
                com.mbridge.msdk.reward.a.a r5 = r3.a     // Catch: java.lang.Exception -> L33
                com.mbridge.msdk.out.MBridgeIds r5 = com.mbridge.msdk.reward.a.a.k(r5)     // Catch: java.lang.Exception -> L33
                r4.onAdCloseWithIVReward(r5, r1)     // Catch: java.lang.Exception -> L33
                goto L3b
            L33:
                r4 = move-exception
                boolean r5 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> L41
                if (r5 == 0) goto L3b
                r4.printStackTrace()     // Catch: java.lang.Exception -> L41
            L3b:
                java.lang.String r4 = "onAdCloseWithIVReward callback"
                com.mbridge.msdk.foundation.tools.z.a(r0, r4)     // Catch: java.lang.Exception -> L41
                goto L49
            L41:
                r4 = move-exception
                boolean r5 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r5 == 0) goto L49
                r4.printStackTrace()
            L49:
                return
        }

        @Override
        public final void a(boolean r4, com.mbridge.msdk.videocommon.b.d r5) {
                r3 = this;
                java.lang.String r0 = "RewardVideoController"
                java.lang.String r1 = "=====================onAdClose====================="
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)
                com.mbridge.msdk.reward.a.a r1 = r3.b     // Catch: java.lang.Exception -> L7b
                if (r1 == 0) goto L83
                com.mbridge.msdk.reward.a.a r1 = r3.b     // Catch: java.lang.Exception -> L7b
                com.mbridge.msdk.videocommon.listener.InterVideoOutListener r1 = com.mbridge.msdk.reward.a.a.h(r1)     // Catch: java.lang.Exception -> L7b
                if (r1 == 0) goto L83
                if (r5 != 0) goto L1f
                com.mbridge.msdk.reward.a.a r5 = r3.b     // Catch: java.lang.Exception -> L7b
                java.lang.String r5 = com.mbridge.msdk.reward.a.a.o(r5)     // Catch: java.lang.Exception -> L7b
                com.mbridge.msdk.videocommon.b.d r5 = com.mbridge.msdk.videocommon.b.d.b(r5)     // Catch: java.lang.Exception -> L7b
            L1f:
                com.mbridge.msdk.reward.a.a r1 = r3.a     // Catch: java.lang.Exception -> L7b
                boolean r1 = com.mbridge.msdk.reward.a.a.i(r1)     // Catch: java.lang.Exception -> L7b
                if (r1 == 0) goto L40
                com.mbridge.msdk.reward.a.a r1 = r3.a     // Catch: java.lang.Exception -> L7b
                com.mbridge.msdk.reward.a.a.j(r1)     // Catch: java.lang.Exception -> L7b
                com.mbridge.msdk.reward.a.a r1 = r3.a     // Catch: java.lang.Exception -> L7b
                r1.a()     // Catch: java.lang.Exception -> L7b
                com.mbridge.msdk.reward.a.a r1 = r3.a     // Catch: java.lang.Exception -> L7b
                java.lang.String r1 = com.mbridge.msdk.reward.a.a.g(r1)     // Catch: java.lang.Exception -> L7b
                com.mbridge.msdk.reward.a.a r2 = r3.a     // Catch: java.lang.Exception -> L7b
                java.lang.String r2 = r2.b()     // Catch: java.lang.Exception -> L7b
                com.mbridge.msdk.foundation.same.a.d.c(r1, r2)     // Catch: java.lang.Exception -> L7b
            L40:
                com.mbridge.msdk.out.RewardInfo r1 = new com.mbridge.msdk.out.RewardInfo     // Catch: java.lang.Exception -> L7b
                java.lang.String r2 = r5.a()     // Catch: java.lang.Exception -> L7b
                int r5 = r5.b()     // Catch: java.lang.Exception -> L7b
                java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Exception -> L7b
                r1.<init>(r4, r2, r5)     // Catch: java.lang.Exception -> L7b
                com.mbridge.msdk.reward.a.a r4 = r3.b     // Catch: java.lang.Exception -> L7b
                com.mbridge.msdk.videocommon.listener.InterVideoOutListener r4 = com.mbridge.msdk.reward.a.a.h(r4)     // Catch: java.lang.Exception -> L7b
                com.mbridge.msdk.reward.a.a r5 = r3.a     // Catch: java.lang.Exception -> L7b
                com.mbridge.msdk.out.MBridgeIds r5 = com.mbridge.msdk.reward.a.a.k(r5)     // Catch: java.lang.Exception -> L7b
                r4.onAdClose(r5, r1)     // Catch: java.lang.Exception -> L7b
                r4 = 7
                r3.e = r4     // Catch: java.lang.Exception -> L7b
                java.lang.String r4 = "onAdClose start release"
                com.mbridge.msdk.foundation.tools.z.a(r0, r4)     // Catch: java.lang.Exception -> L7b
                com.mbridge.msdk.reward.a.a r4 = r3.b     // Catch: java.lang.Exception -> L7b
                r5 = 0
                com.mbridge.msdk.reward.a.a.b(r4, r5)     // Catch: java.lang.Exception -> L7b
                com.mbridge.msdk.reward.a.a r4 = r3.a     // Catch: java.lang.Exception -> L7b
                java.util.ArrayList r4 = com.mbridge.msdk.reward.a.a.n(r4)     // Catch: java.lang.Exception -> L7b
                r4.clear()     // Catch: java.lang.Exception -> L7b
                r4 = 0
                r3.b = r4     // Catch: java.lang.Exception -> L7b
                goto L83
            L7b:
                r4 = move-exception
                boolean r5 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r5 == 0) goto L83
                r4.printStackTrace()
            L83:
                return
        }

        @Override
        public final void a(boolean r1, java.lang.String r2, java.lang.String r3) {
                r0 = this;
                java.lang.String r2 = "RewardVideoController"
                java.lang.String r3 = "=====================onVideoAdClicked====================="
                com.mbridge.msdk.foundation.tools.z.a(r2, r3)
                com.mbridge.msdk.reward.a.a r2 = r0.b     // Catch: java.lang.Exception -> L39
                if (r2 == 0) goto L41
                com.mbridge.msdk.reward.a.a r2 = r0.b     // Catch: java.lang.Exception -> L39
                com.mbridge.msdk.videocommon.listener.InterVideoOutListener r2 = com.mbridge.msdk.reward.a.a.h(r2)     // Catch: java.lang.Exception -> L39
                if (r2 == 0) goto L41
                com.mbridge.msdk.reward.a.a r2 = r0.a     // Catch: java.lang.Exception -> L30
                boolean r2 = com.mbridge.msdk.reward.a.a.i(r2)     // Catch: java.lang.Exception -> L30
                if (r2 == 0) goto L20
                com.mbridge.msdk.reward.a.a r2 = r0.a     // Catch: java.lang.Exception -> L30
                com.mbridge.msdk.reward.a.a.j(r2)     // Catch: java.lang.Exception -> L30
            L20:
                com.mbridge.msdk.reward.a.a r2 = r0.b     // Catch: java.lang.Exception -> L30
                com.mbridge.msdk.videocommon.listener.InterVideoOutListener r2 = com.mbridge.msdk.reward.a.a.h(r2)     // Catch: java.lang.Exception -> L30
                com.mbridge.msdk.reward.a.a r3 = r0.a     // Catch: java.lang.Exception -> L30
                com.mbridge.msdk.out.MBridgeIds r3 = com.mbridge.msdk.reward.a.a.k(r3)     // Catch: java.lang.Exception -> L30
                r2.onVideoAdClicked(r1, r3)     // Catch: java.lang.Exception -> L30
                goto L41
            L30:
                r1 = move-exception
                boolean r2 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> L39
                if (r2 == 0) goto L41
                r1.printStackTrace()     // Catch: java.lang.Exception -> L39
                goto L41
            L39:
                r1 = move-exception
                boolean r2 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r2 == 0) goto L41
                r1.printStackTrace()
            L41:
                return
        }

        @Override
        public final void b(java.lang.String r3, java.lang.String r4) {
                r2 = this;
                java.lang.String r3 = "RewardVideoController"
                java.lang.String r0 = "=====================onEndcardShow====================="
                com.mbridge.msdk.foundation.tools.z.a(r3, r0)
                java.lang.String r0 = "onEndcardShow start"
                com.mbridge.msdk.foundation.tools.z.a(r3, r0)
                com.mbridge.msdk.reward.a.a r0 = r2.b     // Catch: java.lang.Exception -> L55
                if (r0 == 0) goto L5d
                com.mbridge.msdk.reward.a.a r0 = r2.b     // Catch: java.lang.Exception -> L55
                com.mbridge.msdk.videocommon.listener.InterVideoOutListener r0 = com.mbridge.msdk.reward.a.a.h(r0)     // Catch: java.lang.Exception -> L55
                if (r0 == 0) goto L5d
                com.mbridge.msdk.reward.a.a r0 = r2.b     // Catch: java.lang.Exception -> L44
                com.mbridge.msdk.videocommon.listener.InterVideoOutListener r0 = com.mbridge.msdk.reward.a.a.h(r0)     // Catch: java.lang.Exception -> L44
                com.mbridge.msdk.reward.a.a r1 = r2.a     // Catch: java.lang.Exception -> L44
                com.mbridge.msdk.out.MBridgeIds r1 = com.mbridge.msdk.reward.a.a.k(r1)     // Catch: java.lang.Exception -> L44
                r0.onEndcardShow(r1)     // Catch: java.lang.Exception -> L44
                com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Exception -> L44
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L44
                r1.<init>()     // Catch: java.lang.Exception -> L44
                r1.append(r4)     // Catch: java.lang.Exception -> L44
                java.lang.String r4 = "_"
                r1.append(r4)     // Catch: java.lang.Exception -> L44
                r4 = 2
                r1.append(r4)     // Catch: java.lang.Exception -> L44
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L44
                r0.c(r1, r4)     // Catch: java.lang.Exception -> L44
                goto L4c
            L44:
                r4 = move-exception
                boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> L55
                if (r0 == 0) goto L4c
                r4.printStackTrace()     // Catch: java.lang.Exception -> L55
            L4c:
                r4 = 6
                r2.e = r4     // Catch: java.lang.Exception -> L55
                java.lang.String r4 = "onEndcardShow callback"
                com.mbridge.msdk.foundation.tools.z.a(r3, r4)     // Catch: java.lang.Exception -> L55
                goto L5d
            L55:
                r3 = move-exception
                boolean r4 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r4 == 0) goto L5d
                r3.printStackTrace()
            L5d:
                return
        }

        @Override
        public final boolean b() {
                r1 = this;
                r0 = 0
                return r0
        }
    }

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.mbridge.msdk.reward.a.a.K = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.mbridge.msdk.reward.a.a.L = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.mbridge.msdk.reward.a.a.b = r0
            return
    }

    public a() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.u = r0
            r1 = 2
            r3.w = r1
            r3.A = r0
            r3.B = r0
            r3.C = r0
            r3.D = r0
            r3.F = r0
            java.util.ArrayList r1 = new java.util.ArrayList
            r2 = 7
            r1.<init>(r2)
            r3.G = r1
            r3.H = r0
            java.lang.Object r1 = new java.lang.Object
            r1.<init>()
            r3.I = r1
            r3.J = r0
            r1 = 0
            r3.O = r1
            r1 = 1
            r3.P = r1
            r3.Q = r0
            r3.R = r0
            r3.S = r0
            r3.T = r0
            r3.U = r0
            r3.V = r0
            r3.c = r0
            r3.d = r0
            r3.e = r0
            r3.f = r0
            r3.g = r0
            com.mbridge.msdk.reward.a.a$1 r0 = new com.mbridge.msdk.reward.a.a$1
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r3, r1)
            r3.v = r0
            return
    }

    public static int a(java.lang.String r1) {
            boolean r0 = com.mbridge.msdk.foundation.tools.ai.b(r1)     // Catch: java.lang.Exception -> L21
            if (r0 == 0) goto L25
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.reward.a.a.K     // Catch: java.lang.Exception -> L21
            if (r0 == 0) goto L25
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.reward.a.a.K     // Catch: java.lang.Exception -> L21
            boolean r0 = r0.containsKey(r1)     // Catch: java.lang.Exception -> L21
            if (r0 == 0) goto L25
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.reward.a.a.K     // Catch: java.lang.Exception -> L21
            java.lang.Object r1 = r0.get(r1)     // Catch: java.lang.Exception -> L21
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Exception -> L21
            if (r1 == 0) goto L25
            int r1 = r1.intValue()     // Catch: java.lang.Exception -> L21
            return r1
        L21:
            r1 = move-exception
            r1.printStackTrace()
        L25:
            r1 = 0
            return r1
    }

    static com.mbridge.msdk.foundation.db.i a(com.mbridge.msdk.reward.a.a r0, com.mbridge.msdk.foundation.db.i r1) {
            r0.O = r1
            return r1
    }

    static java.util.concurrent.CopyOnWriteArrayList a(com.mbridge.msdk.reward.a.a r0) {
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r0.W
            return r0
    }

    private java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> a(java.lang.String r9, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r10) {
            r8 = this;
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.util.LinkedHashMap r2 = new java.util.LinkedHashMap
            r2.<init>()
            if (r10 == 0) goto Leb
            int r3 = r10.size()     // Catch: java.lang.Exception -> Le7
            if (r3 <= 0) goto Leb
            java.util.Iterator r10 = r10.iterator()     // Catch: java.lang.Exception -> Le7
            r3 = 1
            r4 = r3
        L1d:
            boolean r5 = r10.hasNext()     // Catch: java.lang.Exception -> Le7
            if (r5 == 0) goto L87
            java.lang.Object r5 = r10.next()     // Catch: java.lang.Exception -> Le7
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5     // Catch: java.lang.Exception -> Le7
            if (r5 == 0) goto L1d
            int r6 = r5.getVcn()     // Catch: java.lang.Exception -> Le7
            if (r6 <= r4) goto L35
            int r4 = r5.getVcn()     // Catch: java.lang.Exception -> Le7
        L35:
            int r6 = r5.getTokenRule()     // Catch: java.lang.Exception -> Le7
            if (r6 != r3) goto L61
            java.lang.String r6 = r5.getRequestId()     // Catch: java.lang.Exception -> Le7
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> Le7
            if (r7 != 0) goto L1d
            boolean r7 = r1.containsKey(r6)     // Catch: java.lang.Exception -> Le7
            if (r7 == 0) goto L55
            java.lang.Object r6 = r1.get(r6)     // Catch: java.lang.Exception -> Le7
            java.util.List r6 = (java.util.List) r6     // Catch: java.lang.Exception -> Le7
            r6.add(r5)     // Catch: java.lang.Exception -> Le7
            goto L1d
        L55:
            java.util.ArrayList r7 = new java.util.ArrayList     // Catch: java.lang.Exception -> Le7
            r7.<init>()     // Catch: java.lang.Exception -> Le7
            r7.add(r5)     // Catch: java.lang.Exception -> Le7
            r1.put(r6, r7)     // Catch: java.lang.Exception -> Le7
            goto L1d
        L61:
            java.lang.String r6 = r5.getRequestId()     // Catch: java.lang.Exception -> Le7
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> Le7
            if (r7 != 0) goto L1d
            boolean r7 = r2.containsKey(r6)     // Catch: java.lang.Exception -> Le7
            if (r7 == 0) goto L7b
            java.lang.Object r6 = r2.get(r6)     // Catch: java.lang.Exception -> Le7
            java.util.List r6 = (java.util.List) r6     // Catch: java.lang.Exception -> Le7
            r6.add(r5)     // Catch: java.lang.Exception -> Le7
            goto L1d
        L7b:
            java.util.ArrayList r7 = new java.util.ArrayList     // Catch: java.lang.Exception -> Le7
            r7.<init>()     // Catch: java.lang.Exception -> Le7
            r7.add(r5)     // Catch: java.lang.Exception -> Le7
            r2.put(r6, r7)     // Catch: java.lang.Exception -> Le7
            goto L1d
        L87:
            int r10 = r2.size()     // Catch: java.lang.Exception -> Le7
            int r2 = r1.size()     // Catch: java.lang.Exception -> Le7
            int r10 = r10 + r2
            if (r10 < r4) goto Leb
            int r10 = r1.size()     // Catch: java.lang.Exception -> Le7
            if (r10 <= 0) goto Leb
            java.util.Set r10 = r1.entrySet()     // Catch: java.lang.Exception -> Le7
            if (r10 == 0) goto Leb
            java.util.Set r10 = r1.entrySet()     // Catch: java.lang.Exception -> Le7
            java.util.Iterator r10 = r10.iterator()     // Catch: java.lang.Exception -> Le7
            if (r10 == 0) goto Leb
            java.util.Set r10 = r1.entrySet()     // Catch: java.lang.Exception -> Le7
            java.util.Iterator r10 = r10.iterator()     // Catch: java.lang.Exception -> Le7
            java.lang.Object r10 = r10.next()     // Catch: java.lang.Exception -> Le7
            if (r10 == 0) goto Leb
            java.util.Set r10 = r1.entrySet()     // Catch: java.lang.Exception -> Le7
            java.util.Iterator r10 = r10.iterator()     // Catch: java.lang.Exception -> Le7
            java.lang.Object r10 = r10.next()     // Catch: java.lang.Exception -> Le7
            java.util.Map$Entry r10 = (java.util.Map.Entry) r10     // Catch: java.lang.Exception -> Le7
            java.lang.Object r10 = r10.getValue()     // Catch: java.lang.Exception -> Le7
            if (r10 == 0) goto Leb
            java.util.Set r10 = r1.entrySet()     // Catch: java.lang.Exception -> Le7
            java.util.Iterator r10 = r10.iterator()     // Catch: java.lang.Exception -> Le7
            java.lang.Object r10 = r10.next()     // Catch: java.lang.Exception -> Le7
            java.util.Map$Entry r10 = (java.util.Map.Entry) r10     // Catch: java.lang.Exception -> Le7
            java.lang.Object r10 = r10.getValue()     // Catch: java.lang.Exception -> Le7
            java.util.Collection r10 = (java.util.Collection) r10     // Catch: java.lang.Exception -> Le7
            r0.addAll(r10)     // Catch: java.lang.Exception -> Le7
            java.lang.String r10 = r8.p     // Catch: java.lang.Exception -> Le7
            com.mbridge.msdk.foundation.same.a.d.a(r10, r9, r4)     // Catch: java.lang.Exception -> Le7
            goto Leb
        Le7:
            r9 = move-exception
            r9.printStackTrace()
        Leb:
            return r0
    }

    private void a(int r11, int r12, boolean r13, java.lang.String r14) {
            r10 = this;
            java.lang.String r0 = "RewardVideoController"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L88
            r1.<init>()     // Catch: java.lang.Exception -> L88
            java.lang.String r2 = "开始从 SOURCE_MBAPI 请求新的 offer: "
            r1.append(r2)     // Catch: java.lang.Exception -> L88
            r1.append(r12)     // Catch: java.lang.Exception -> L88
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L88
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Exception -> L88
            com.mbridge.msdk.reward.adapter.d r0 = r10.j     // Catch: java.lang.Exception -> L88
            if (r0 == 0) goto L28
            java.lang.String r0 = r10.p     // Catch: java.lang.Exception -> L88
            com.mbridge.msdk.reward.adapter.d r1 = r10.j     // Catch: java.lang.Exception -> L88
            java.lang.String r1 = r1.a()     // Catch: java.lang.Exception -> L88
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Exception -> L88
            if (r0 != 0) goto L41
        L28:
            com.mbridge.msdk.reward.adapter.d r0 = new com.mbridge.msdk.reward.adapter.d     // Catch: java.lang.Exception -> L88
            android.content.Context r1 = r10.h     // Catch: java.lang.Exception -> L88
            java.lang.String r2 = r10.s     // Catch: java.lang.Exception -> L88
            java.lang.String r3 = r10.p     // Catch: java.lang.Exception -> L88
            r0.<init>(r1, r2, r3)     // Catch: java.lang.Exception -> L88
            r10.j = r0     // Catch: java.lang.Exception -> L88
            boolean r1 = r10.A     // Catch: java.lang.Exception -> L88
            r0.a(r1)     // Catch: java.lang.Exception -> L88
            com.mbridge.msdk.reward.adapter.d r0 = r10.j     // Catch: java.lang.Exception -> L88
            boolean r1 = r10.B     // Catch: java.lang.Exception -> L88
            r0.b(r1)     // Catch: java.lang.Exception -> L88
        L41:
            boolean r0 = r10.A     // Catch: java.lang.Exception -> L88
            if (r0 == 0) goto L50
            com.mbridge.msdk.reward.adapter.d r0 = r10.j     // Catch: java.lang.Exception -> L88
            int r1 = r10.x     // Catch: java.lang.Exception -> L88
            int r2 = r10.y     // Catch: java.lang.Exception -> L88
            int r3 = r10.z     // Catch: java.lang.Exception -> L88
            r0.a(r1, r2, r3)     // Catch: java.lang.Exception -> L88
        L50:
            com.mbridge.msdk.reward.adapter.d r0 = r10.j     // Catch: java.lang.Exception -> L88
            int r1 = r10.w     // Catch: java.lang.Exception -> L88
            r0.a(r1)     // Catch: java.lang.Exception -> L88
            com.mbridge.msdk.reward.adapter.d r0 = r10.j     // Catch: java.lang.Exception -> L88
            com.mbridge.msdk.videocommon.d.c r1 = r10.k     // Catch: java.lang.Exception -> L88
            r0.a(r1)     // Catch: java.lang.Exception -> L88
            com.mbridge.msdk.reward.a.a$a r0 = new com.mbridge.msdk.reward.a.a$a     // Catch: java.lang.Exception -> L88
            com.mbridge.msdk.reward.adapter.d r1 = r10.j     // Catch: java.lang.Exception -> L88
            r0.<init>(r10, r1, r11, r13)     // Catch: java.lang.Exception -> L88
            com.mbridge.msdk.reward.a.a$b r1 = new com.mbridge.msdk.reward.a.a$b     // Catch: java.lang.Exception -> L88
            com.mbridge.msdk.reward.adapter.d r2 = r10.j     // Catch: java.lang.Exception -> L88
            r1.<init>(r10, r2, r13)     // Catch: java.lang.Exception -> L88
            r1.a(r0)     // Catch: java.lang.Exception -> L88
            com.mbridge.msdk.reward.adapter.d r2 = r10.j     // Catch: java.lang.Exception -> L88
            r2.a(r1)     // Catch: java.lang.Exception -> L88
            android.os.Handler r1 = r10.v     // Catch: java.lang.Exception -> L88
            int r2 = r12 * 1000
            long r2 = (long) r2     // Catch: java.lang.Exception -> L88
            r1.postDelayed(r0, r2)     // Catch: java.lang.Exception -> L88
            com.mbridge.msdk.reward.adapter.d r4 = r10.j     // Catch: java.lang.Exception -> L88
            boolean r9 = r10.F     // Catch: java.lang.Exception -> L88
            r5 = r11
            r6 = r12
            r7 = r13
            r8 = r14
            r4.a(r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> L88
            goto Lb5
        L88:
            r11 = move-exception
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r12 = r10.W
            if (r12 == 0) goto Lae
            int r12 = r12.size()
            if (r12 <= 0) goto Lae
            android.content.Context r0 = r10.h
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r12 = r10.W
            r13 = 0
            java.lang.Object r12 = r12.get(r13)
            r1 = r12
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1
            java.lang.String r2 = r11.getMessage()
            java.lang.String r3 = r10.p
            boolean r4 = r10.B
            java.lang.String r5 = ""
            java.lang.String r6 = ""
            com.mbridge.msdk.reward.b.a.b(r0, r1, r2, r3, r4, r5, r6)
        Lae:
            java.lang.String r11 = r11.getMessage()
            r10.c(r11)
        Lb5:
            return
    }

    static void a(com.mbridge.msdk.reward.a.a r0, java.lang.String r1) {
            r0.c(r1)
            return
    }

    static void a(com.mbridge.msdk.reward.a.a r2, java.lang.String r3, java.util.List r4) {
            java.lang.String r0 = "RewardVideoController"
            if (r4 == 0) goto L42
            int r1 = r4.size()     // Catch: java.lang.Throwable -> L3a
            if (r1 <= 0) goto L42
            boolean r2 = r2.S     // Catch: java.lang.Throwable -> L3a
            if (r2 != 0) goto L42
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3a
            r2.<init>()     // Catch: java.lang.Throwable -> L3a
            java.lang.String r1 = "标记缓存数据 ： "
            r2.append(r1)     // Catch: java.lang.Throwable -> L3a
            int r1 = r4.size()     // Catch: java.lang.Throwable -> L3a
            r2.append(r1)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L3a
            com.mbridge.msdk.foundation.tools.z.a(r0, r2)     // Catch: java.lang.Throwable -> L3a
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L3a
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L3a
            com.mbridge.msdk.foundation.db.i r2 = com.mbridge.msdk.foundation.db.i.a(r2)     // Catch: java.lang.Throwable -> L3a
            com.mbridge.msdk.foundation.db.f r2 = com.mbridge.msdk.foundation.db.f.a(r2)     // Catch: java.lang.Throwable -> L3a
            r2.a(r4, r3)     // Catch: java.lang.Throwable -> L3a
            goto L42
        L3a:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L42:
            return
    }

    public static void a(java.lang.String r1, int r2) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.reward.a.a.K     // Catch: java.lang.Exception -> L14
            if (r0 == 0) goto L18
            boolean r0 = com.mbridge.msdk.foundation.tools.ai.b(r1)     // Catch: java.lang.Exception -> L14
            if (r0 == 0) goto L18
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.reward.a.a.K     // Catch: java.lang.Exception -> L14
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L14
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L14
            goto L18
        L14:
            r1 = move-exception
            r1.printStackTrace()
        L18:
            return
    }

    public static void a(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L7
            return
        L7:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Le
            return
        Le:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = com.mbridge.msdk.reward.a.a.L
            if (r0 == 0) goto L1d
            boolean r0 = r0.containsKey(r1)
            if (r0 != 0) goto L1d
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = com.mbridge.msdk.reward.a.a.L
            r0.put(r1, r2)
        L1d:
            return
    }

    private void a(java.util.Queue<java.lang.Integer> r11, boolean r12, java.lang.String r13) {
            r10 = this;
            r0 = 8
            r1 = 1
            r2 = 0
            if (r11 == 0) goto L19
            int r3 = r11.size()     // Catch: java.lang.Exception -> L17
            if (r3 <= 0) goto L19
            java.lang.Object r11 = r11.poll()     // Catch: java.lang.Exception -> L17
            java.lang.Integer r11 = (java.lang.Integer) r11     // Catch: java.lang.Exception -> L17
            int r0 = r11.intValue()     // Catch: java.lang.Exception -> L17
            goto L19
        L17:
            r11 = move-exception
            goto L6d
        L19:
            r10.a(r1, r0, r12, r13)     // Catch: java.lang.Exception -> L1e
            goto L9b
        L1e:
            r11 = move-exception
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r12 = r10.W     // Catch: java.lang.Exception -> L17
            java.lang.String r13 = "load mv api error:"
            if (r12 == 0) goto L56
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r12 = r10.W     // Catch: java.lang.Exception -> L17
            int r12 = r12.size()     // Catch: java.lang.Exception -> L17
            if (r12 <= 0) goto L56
            android.content.Context r3 = r10.h     // Catch: java.lang.Exception -> L17
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r12 = r10.W     // Catch: java.lang.Exception -> L17
            java.lang.Object r12 = r12.get(r2)     // Catch: java.lang.Exception -> L17
            r4 = r12
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4     // Catch: java.lang.Exception -> L17
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L17
            r12.<init>()     // Catch: java.lang.Exception -> L17
            r12.append(r13)     // Catch: java.lang.Exception -> L17
            java.lang.String r0 = r11.getMessage()     // Catch: java.lang.Exception -> L17
            r12.append(r0)     // Catch: java.lang.Exception -> L17
            java.lang.String r5 = r12.toString()     // Catch: java.lang.Exception -> L17
            java.lang.String r6 = r10.p     // Catch: java.lang.Exception -> L17
            boolean r7 = r10.B     // Catch: java.lang.Exception -> L17
            java.lang.String r8 = ""
            java.lang.String r9 = ""
            com.mbridge.msdk.reward.b.a.b(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> L17
        L56:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L17
            r12.<init>()     // Catch: java.lang.Exception -> L17
            r12.append(r13)     // Catch: java.lang.Exception -> L17
            java.lang.String r11 = r11.getMessage()     // Catch: java.lang.Exception -> L17
            r12.append(r11)     // Catch: java.lang.Exception -> L17
            java.lang.String r11 = r12.toString()     // Catch: java.lang.Exception -> L17
            r10.c(r11)     // Catch: java.lang.Exception -> L17
            goto L9b
        L6d:
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r12 = r10.W
            if (r12 == 0) goto L8f
            int r12 = r12.size()
            if (r12 <= 0) goto L8f
            android.content.Context r3 = r10.h
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r12 = r10.W
            java.lang.Object r12 = r12.get(r2)
            r4 = r12
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4
            java.lang.String r6 = r10.p
            boolean r7 = r10.B
            java.lang.String r5 = "can't show because unknow error"
            java.lang.String r8 = ""
            java.lang.String r9 = ""
            com.mbridge.msdk.reward.b.a.b(r3, r4, r5, r6, r7, r8, r9)
        L8f:
            java.lang.String r12 = "can't show because unknow error"
            r10.c(r12)
            boolean r12 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r12 == 0) goto L9b
            r11.printStackTrace()
        L9b:
            return
    }

    private void a(java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r23, com.mbridge.msdk.reward.adapter.d r24) {
            r22 = this;
            r7 = r22
            r0 = 0
            r6 = r23
            java.lang.Object r1 = r6.get(r0)
            r15 = r1
            com.mbridge.msdk.foundation.entity.CampaignEx r15 = (com.mbridge.msdk.foundation.entity.CampaignEx) r15
            java.lang.String r1 = r15.getCMPTEntryUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            r14 = r1 ^ 1
            int r13 = r15.getNscpt()
            r7.c = r0
            r7.d = r0
            r7.e = r0
            r7.f = r0
            r7.g = r0
            com.mbridge.msdk.reward.adapter.c r8 = com.mbridge.msdk.reward.adapter.c.a()
            android.content.Context r9 = r7.h
            boolean r12 = r7.B
            boolean r0 = r7.A
            if (r0 == 0) goto L33
            r0 = 287(0x11f, float:4.02E-43)
            goto L35
        L33:
            r0 = 94
        L35:
            r16 = r0
            java.lang.String r11 = r7.s
            java.lang.String r10 = r7.p
            java.lang.String r17 = r15.getRequestId()
            com.mbridge.msdk.reward.a.a$4 r18 = new com.mbridge.msdk.reward.a.a$4
            r0 = r18
            r1 = r22
            r2 = r14
            r3 = r15
            r4 = r24
            r5 = r13
            r0.<init>(r1, r2, r3, r4, r5)
            com.mbridge.msdk.reward.a.a$5 r0 = new com.mbridge.msdk.reward.a.a$5
            r0.<init>(r7, r14, r15, r13)
            r1 = r10
            r10 = r14
            r2 = r11
            r11 = r13
            r20 = r13
            r13 = r16
            r5 = r14
            r14 = r2
            r21 = r15
            r15 = r1
            r16 = r17
            r17 = r23
            r19 = r0
            r8.a(r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19)
            if (r5 == 0) goto L8d
            com.mbridge.msdk.reward.adapter.c r8 = com.mbridge.msdk.reward.adapter.c.a()
            android.content.Context r9 = r7.h
            java.lang.String r11 = r7.s
            java.lang.String r12 = r7.p
            java.lang.String r13 = r21.getRequestId()
            com.mbridge.msdk.reward.a.a$6 r14 = new com.mbridge.msdk.reward.a.a$6
            r0 = r14
            r1 = r22
            r2 = r21
            r3 = r23
            r4 = r24
            r6 = r20
            r0.<init>(r1, r2, r3, r4, r5, r6)
            r10 = r21
            r8.a(r9, r10, r11, r12, r13, r14)
        L8d:
            return
    }

    private void a(java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r5, java.lang.String r6) {
            r4 = this;
            if (r5 == 0) goto L5a
            int r0 = r5.size()
            if (r0 <= 0) goto L5a
            r0 = 1
            r4.V = r0
            com.mbridge.msdk.reward.a.a$c r1 = r4.n
            boolean r2 = r4.B
            r1.a(r2)
            com.mbridge.msdk.reward.a.a$c r1 = r4.n
            java.lang.String r2 = r4.s
            java.lang.String r3 = r4.p
            com.mbridge.msdk.reward.a.a.c.c(r1, r2, r3)
            r1 = 0
            java.lang.Object r1 = r5.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1
            java.lang.String r2 = r1.getRequestId()
            a(r2, r6)
            com.mbridge.msdk.reward.adapter.d r6 = r4.j
            if (r6 == 0) goto L55
            java.lang.String r2 = r1.getCMPTEntryUrl()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            r0 = r0 ^ r2
            int r1 = r1.getNscpt()
            boolean r6 = r6.a(r5, r0, r1)
            if (r6 == 0) goto L55
            android.content.Context r5 = r4.h
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r6 = r4.W
            java.lang.String r0 = r4.p
            r1 = 0
            com.mbridge.msdk.reward.b.a.a(r5, r6, r0, r1)
            com.mbridge.msdk.reward.a.a$c r5 = r4.n
            java.lang.String r6 = r4.s
            java.lang.String r0 = r4.p
            com.mbridge.msdk.reward.a.a.c.b(r5, r6, r0)
            goto L5a
        L55:
            com.mbridge.msdk.reward.adapter.d r6 = r4.j
            r4.a(r5, r6)
        L5a:
            return
    }

    static boolean a(com.mbridge.msdk.reward.a.a r0, boolean r1) {
            r0.J = r1
            return r1
    }

    private boolean a(java.util.List<com.mbridge.msdk.foundation.entity.c> r4, java.lang.String r5) {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            java.util.Iterator r4 = r4.iterator()
        L8:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L32
            java.lang.Object r1 = r4.next()
            com.mbridge.msdk.foundation.entity.c r1 = (com.mbridge.msdk.foundation.entity.c) r1
            if (r1 == 0) goto L8
            java.lang.String r2 = r1.b()
            boolean r2 = r5.equals(r2)
            if (r2 == 0) goto L8
            com.mbridge.msdk.reward.adapter.d r2 = r3.j
            java.lang.String r1 = r1.a()
            r2.a(r1)
            com.mbridge.msdk.reward.adapter.d r1 = r3.j
            boolean r1 = r1.b()
            if (r1 == 0) goto L8
            r0 = 1
        L32:
            return r0
    }

    static java.util.List b(com.mbridge.msdk.reward.a.a r0) {
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r0.X
            return r0
    }

    private java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> b(java.lang.String r4, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r5) {
            r3 = this;
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            if (r5 == 0) goto L33
            int r1 = r5.size()
            if (r1 <= 0) goto L33
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 != 0) goto L33
            java.util.Iterator r5 = r5.iterator()
        L17:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L33
            java.lang.Object r1 = r5.next()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1
            if (r1 == 0) goto L17
            java.lang.String r2 = r1.getBidToken()
            boolean r2 = r4.equals(r2)
            if (r2 == 0) goto L17
            r0.add(r1)
            goto L17
        L33:
            return r0
    }

    private void b(boolean r9, java.lang.String r10) {
            r8 = this;
            com.mbridge.msdk.reward.a.a$c r0 = r8.n
            if (r0 == 0) goto L21a
            boolean r0 = r8.B
            r1 = 1
            java.lang.String r2 = "checkOverCap failed"
            r3 = 0
            java.lang.String r4 = "RewardVideoController"
            if (r0 != 0) goto L143
            java.lang.String r0 = r8.p
            boolean r0 = r8.b(r0)
            r8.V = r0
            boolean r0 = r8.V
            if (r0 == 0) goto Lfa
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r5 = "本地存在可用的缓存: "
            r0.append(r5)
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r5 = r8.W
            int r5 = r5.size()
            r0.append(r5)
            java.lang.String r5 = " 条"
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.foundation.tools.z.a(r4, r0)
            java.lang.String r0 = "本地存在可用的缓存，非 BID Campaign"
            com.mbridge.msdk.foundation.tools.z.a(r4, r0)
            boolean r0 = r8.j()
            if (r0 != 0) goto Lb3
            java.lang.String r0 = "本地存在可用的缓存，没有超过上限，并预加载各种资源"
            com.mbridge.msdk.foundation.tools.z.a(r4, r0)
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r8.W
            if (r0 == 0) goto L21a
            int r2 = r0.size()
            if (r2 <= 0) goto L21a
            com.mbridge.msdk.reward.a.a$c r2 = r8.n
            java.lang.String r5 = r8.s
            java.lang.String r6 = r8.p
            com.mbridge.msdk.reward.a.a.c.c(r2, r5, r6)
            java.lang.String r2 = "非BID，本地存在可用的缓存，没有超过上限，回调 onCampaignLoadSuccess，开始预加载资源"
            com.mbridge.msdk.foundation.tools.z.a(r4, r2)
            java.lang.Object r2 = r0.get(r3)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2
            com.mbridge.msdk.reward.a.a$c r3 = r8.n
            boolean r4 = r8.B
            r3.a(r4)
            com.mbridge.msdk.reward.adapter.d r3 = r8.j
            if (r3 == 0) goto L9a
            java.lang.String r4 = r2.getCMPTEntryUrl()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            r1 = r1 ^ r4
            int r2 = r2.getNscpt()
            boolean r1 = r3.a(r0, r1, r2)
            if (r1 == 0) goto L9a
            android.content.Context r0 = r8.h
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r8.W
            java.lang.String r2 = r8.p
            r3 = 0
            com.mbridge.msdk.reward.b.a.a(r0, r1, r2, r3)
            com.mbridge.msdk.reward.a.a$c r0 = r8.n
            java.lang.String r1 = r8.s
            java.lang.String r2 = r8.p
            com.mbridge.msdk.reward.a.a.c.b(r0, r1, r2)
            goto L9f
        L9a:
            com.mbridge.msdk.reward.adapter.d r1 = r8.j
            r8.a(r0, r1)
        L9f:
            boolean r0 = r8.P
            if (r0 == 0) goto L21a
            com.mbridge.msdk.reward.adapter.d r0 = r8.j
            if (r0 == 0) goto Lac
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r8.W
            r0.a(r1)
        Lac:
            java.util.Queue<java.lang.Integer> r0 = r8.M
            r8.a(r0, r9, r10)
            goto L21a
        Lb3:
            java.lang.String r0 = "非BID，本地存在可用的缓存，超过上限"
            com.mbridge.msdk.foundation.tools.z.a(r4, r0)
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r8.W
            if (r0 == 0) goto Lde
            int r0 = r0.size()
            if (r0 <= 0) goto Lde
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r8.W
            java.util.Iterator r0 = r0.iterator()
        Lc8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto Lde
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1
            com.mbridge.msdk.videocommon.a.a r4 = com.mbridge.msdk.videocommon.a.a.a()
            java.lang.String r5 = r8.p
            r4.a(r1, r5)
            goto Lc8
        Lde:
            if (r9 == 0) goto Lea
            com.mbridge.msdk.reward.a.a$c r9 = r8.n
            if (r9 == 0) goto Le9
            com.mbridge.msdk.reward.a.a$c r9 = r8.n
            com.mbridge.msdk.reward.a.a.c.c(r9, r2)
        Le9:
            return
        Lea:
            r8.V = r3
            com.mbridge.msdk.reward.a.a$c r0 = r8.n
            boolean r1 = r8.B
            r0.a(r1)
            java.util.Queue<java.lang.Integer> r0 = r8.M
            r8.a(r0, r9, r10)
            goto L21a
        Lfa:
            java.lang.String r0 = "非BID，不存在可用的缓存"
            com.mbridge.msdk.foundation.tools.z.a(r4, r0)
            boolean r0 = r8.j()
            if (r0 != 0) goto L11e
            r8.V = r3
            com.mbridge.msdk.reward.adapter.d r0 = r8.j
            if (r0 == 0) goto L110
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r8.W
            r0.a(r1)
        L110:
            com.mbridge.msdk.reward.a.a$c r0 = r8.n
            boolean r1 = r8.B
            r0.a(r1)
            java.util.Queue<java.lang.Integer> r0 = r8.M
            r8.a(r0, r9, r10)
            goto L21a
        L11e:
            if (r9 == 0) goto L12a
            com.mbridge.msdk.reward.a.a$c r9 = r8.n
            if (r9 == 0) goto L129
            com.mbridge.msdk.reward.a.a$c r9 = r8.n
            com.mbridge.msdk.reward.a.a.c.c(r9, r2)
        L129:
            return
        L12a:
            r8.V = r3
            com.mbridge.msdk.reward.adapter.d r0 = r8.j
            if (r0 == 0) goto L135
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r8.W
            r0.a(r1)
        L135:
            com.mbridge.msdk.reward.a.a$c r0 = r8.n
            boolean r1 = r8.B
            r0.a(r1)
            java.util.Queue<java.lang.Integer> r0 = r8.M
            r8.a(r0, r9, r10)
            goto L21a
        L143:
            com.mbridge.msdk.videocommon.a.a r0 = com.mbridge.msdk.videocommon.a.a.a()
            java.lang.String r5 = r8.p
            boolean r6 = r8.B
            java.lang.String r7 = ""
            java.util.concurrent.CopyOnWriteArrayList r0 = r0.a(r5, r1, r6, r7)
            java.lang.String r1 = "HBOPTIMIZE"
            if (r0 == 0) goto L1e7
            int r5 = r0.size()
            if (r5 <= 0) goto L1e7
            java.lang.String r5 = "执行存在缓存逻辑"
            com.mbridge.msdk.foundation.tools.z.d(r1, r5)
            java.lang.String r5 = "BID，本地存在可用的缓存"
            com.mbridge.msdk.foundation.tools.z.a(r4, r5)
            boolean r5 = r8.j()
            if (r5 != 0) goto L1cd
            java.util.concurrent.CopyOnWriteArrayList r2 = r8.b(r10, r0)
            if (r2 == 0) goto L180
            int r4 = r2.size()
            if (r4 <= 0) goto L180
            java.lang.String r9 = "执行 BidToken 存在逻辑"
            com.mbridge.msdk.foundation.tools.z.d(r1, r9)
            r8.a(r2, r10)
            return
        L180:
            java.util.concurrent.CopyOnWriteArrayList r0 = r8.a(r10, r0)
            if (r0 == 0) goto L1b9
            int r2 = r0.size()
            if (r2 <= 0) goto L1b9
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "需要被替换Offer的 bidToken "
            r2.append(r4)
            r2.append(r10)
            java.lang.String r2 = r2.toString()
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)
            r8.a(r0, r10)
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r2.j()
            com.mbridge.msdk.foundation.db.b r2 = com.mbridge.msdk.foundation.db.b.a(r2)
            r2.a(r10, r0)
            com.mbridge.msdk.reward.adapter.d r2 = r8.j
            if (r2 == 0) goto L1b9
            r2.a(r0)
        L1b9:
            r8.V = r3
            com.mbridge.msdk.reward.a.a$c r0 = r8.n
            boolean r2 = r8.B
            r0.a(r2)
            java.lang.String r0 = "执行tokenRule 为 1 继续请求逻辑"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            java.util.Queue<java.lang.Integer> r0 = r8.M
            r8.a(r0, r9, r10)
            goto L21a
        L1cd:
            java.lang.String r0 = "BID，本地存在可用的缓存，超过上限"
            com.mbridge.msdk.foundation.tools.z.a(r4, r0)
            com.mbridge.msdk.videocommon.a.a r0 = com.mbridge.msdk.videocommon.a.a.a()
            java.lang.String r1 = r8.p
            r0.a(r1, r10)
            if (r9 == 0) goto L21a
            com.mbridge.msdk.reward.a.a$c r9 = r8.n
            if (r9 == 0) goto L21a
            com.mbridge.msdk.reward.a.a$c r9 = r8.n
            com.mbridge.msdk.reward.a.a.c.c(r9, r2)
            goto L21a
        L1e7:
            java.lang.String r0 = "BID，不存在可用的缓存"
            com.mbridge.msdk.foundation.tools.z.a(r4, r0)
            java.lang.String r0 = "执行 无可用缓存逻辑"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            boolean r0 = r8.j()
            if (r0 != 0) goto L206
            r8.V = r3
            com.mbridge.msdk.reward.a.a$c r0 = r8.n
            boolean r1 = r8.B
            r0.a(r1)
            java.util.Queue<java.lang.Integer> r0 = r8.M
            r8.a(r0, r9, r10)
            goto L21a
        L206:
            com.mbridge.msdk.videocommon.a.a r0 = com.mbridge.msdk.videocommon.a.a.a()
            java.lang.String r1 = r8.p
            r0.a(r1, r10)
            if (r9 == 0) goto L21a
            com.mbridge.msdk.reward.a.a$c r9 = r8.n
            if (r9 == 0) goto L21a
            com.mbridge.msdk.reward.a.a$c r9 = r8.n
            com.mbridge.msdk.reward.a.a.c.c(r9, r2)
        L21a:
            return
    }

    static boolean b(com.mbridge.msdk.reward.a.a r0, boolean r1) {
            r0.H = r1
            return r1
    }

    private boolean b(java.lang.String r7) {
            r6 = this;
            com.mbridge.msdk.reward.adapter.d r0 = r6.j     // Catch: java.lang.Exception -> L35
            if (r0 == 0) goto L10
            com.mbridge.msdk.reward.adapter.d r0 = r6.j     // Catch: java.lang.Exception -> L35
            java.lang.String r0 = r0.a()     // Catch: java.lang.Exception -> L35
            boolean r0 = r7.equals(r0)     // Catch: java.lang.Exception -> L35
            if (r0 != 0) goto L27
        L10:
            com.mbridge.msdk.reward.adapter.d r0 = new com.mbridge.msdk.reward.adapter.d     // Catch: java.lang.Exception -> L35
            android.content.Context r1 = r6.h     // Catch: java.lang.Exception -> L35
            java.lang.String r2 = r6.s     // Catch: java.lang.Exception -> L35
            r0.<init>(r1, r2, r7)     // Catch: java.lang.Exception -> L35
            r6.j = r0     // Catch: java.lang.Exception -> L35
            boolean r1 = r6.A     // Catch: java.lang.Exception -> L35
            r0.a(r1)     // Catch: java.lang.Exception -> L35
            com.mbridge.msdk.reward.adapter.d r0 = r6.j     // Catch: java.lang.Exception -> L35
            boolean r1 = r6.B     // Catch: java.lang.Exception -> L35
            r0.b(r1)     // Catch: java.lang.Exception -> L35
        L27:
            com.mbridge.msdk.reward.adapter.d r0 = r6.j     // Catch: java.lang.Exception -> L35
            int r1 = r6.w     // Catch: java.lang.Exception -> L35
            r0.a(r1)     // Catch: java.lang.Exception -> L35
            com.mbridge.msdk.reward.adapter.d r0 = r6.j     // Catch: java.lang.Exception -> L35
            com.mbridge.msdk.videocommon.d.c r1 = r6.k     // Catch: java.lang.Exception -> L35
            r0.a(r1)     // Catch: java.lang.Exception -> L35
        L35:
            com.mbridge.msdk.videocommon.a.a r0 = com.mbridge.msdk.videocommon.a.a.a()
            boolean r1 = r6.B
            r2 = 1
            java.util.List r0 = r0.a(r7, r2, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "当前可用的缓存数据： "
            r1.append(r3)
            r3 = 0
            if (r0 != 0) goto L4f
            r4 = r3
            goto L53
        L4f:
            int r4 = r0.size()
        L53:
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            java.lang.String r4 = "RewardVideoController"
            com.mbridge.msdk.foundation.tools.z.a(r4, r1)
            com.mbridge.msdk.videocommon.a.a r1 = com.mbridge.msdk.videocommon.a.a.a()
            boolean r5 = r6.B
            java.util.List r7 = r1.b(r7, r2, r5)
            r6.X = r7
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "当前全部的缓存数据： "
            r7.append(r1)
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r6.X
            if (r1 != 0) goto L7b
            r1 = r3
            goto L7f
        L7b:
            int r1 = r1.size()
        L7f:
            r7.append(r1)
            java.lang.String r7 = r7.toString()
            com.mbridge.msdk.foundation.tools.z.a(r4, r7)
            if (r0 == 0) goto La6
            int r7 = r0.size()
            if (r7 <= 0) goto La6
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r7 = r6.W
            if (r7 != 0) goto L9d
            java.util.concurrent.CopyOnWriteArrayList r7 = new java.util.concurrent.CopyOnWriteArrayList
            r7.<init>()
            r6.W = r7
            goto La0
        L9d:
            r7.clear()
        La0:
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r7 = r6.W
            r7.addAll(r0)
            return r2
        La6:
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r7 = r6.W
            if (r7 == 0) goto Lad
            r7.clear()
        Lad:
            return r3
    }

    static com.mbridge.msdk.reward.adapter.d c(com.mbridge.msdk.reward.a.a r0) {
            com.mbridge.msdk.reward.adapter.d r0 = r0.j
            return r0
    }

    private void c() {
            r2 = this;
            android.content.Context r0 = r2.h
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.foundation.db.f.a(r0)
            java.lang.String r1 = r2.p
            r0.a(r1)
            return
    }

    private void c(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.reward.a.a$c r0 = r1.n
            if (r0 == 0) goto Lc
            r0 = 1
            r1.U = r0
            com.mbridge.msdk.reward.a.a$c r0 = r1.n
            com.mbridge.msdk.reward.a.a.c.a(r0, r2)
        Lc:
            return
    }

    static boolean c(com.mbridge.msdk.reward.a.a r0, boolean r1) {
            r0.R = r1
            return r1
    }

    static com.mbridge.msdk.reward.a.a.c d(com.mbridge.msdk.reward.a.a r0) {
            com.mbridge.msdk.reward.a.a$c r0 = r0.n
            return r0
    }

    private void d() {
            r5 = this;
            java.lang.String r0 = "_"
            android.content.Context r1 = r5.h     // Catch: java.lang.Exception -> Lab
            com.mbridge.msdk.foundation.db.i r1 = com.mbridge.msdk.foundation.db.i.a(r1)     // Catch: java.lang.Exception -> Lab
            com.mbridge.msdk.foundation.db.f r1 = com.mbridge.msdk.foundation.db.f.a(r1)     // Catch: java.lang.Exception -> Lab
            java.lang.String r2 = r5.p     // Catch: java.lang.Exception -> Lab
            java.util.List r1 = r1.b(r2)     // Catch: java.lang.Exception -> Lab
            if (r1 == 0) goto Lab
            int r2 = r1.size()     // Catch: java.lang.Exception -> Lab
            if (r2 <= 0) goto Lab
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> Lab
        L1e:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> Lab
            if (r2 == 0) goto Lab
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> Lab
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2     // Catch: java.lang.Exception -> Lab
            java.lang.String r3 = r2.getCMPTEntryUrl()     // Catch: java.lang.Exception -> Lab
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Lab
            if (r3 != 0) goto La2
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lab
            r3.<init>()     // Catch: java.lang.Exception -> Lab
            java.lang.String r4 = r5.p     // Catch: java.lang.Exception -> Lab
            r3.append(r4)     // Catch: java.lang.Exception -> Lab
            r3.append(r0)     // Catch: java.lang.Exception -> Lab
            java.lang.String r4 = r2.getRequestId()     // Catch: java.lang.Exception -> Lab
            r3.append(r4)     // Catch: java.lang.Exception -> Lab
            r3.append(r0)     // Catch: java.lang.Exception -> Lab
            java.lang.String r4 = r2.getCMPTEntryUrl()     // Catch: java.lang.Exception -> Lab
            r3.append(r4)     // Catch: java.lang.Exception -> Lab
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Lab
            com.mbridge.msdk.videocommon.a.b(r3)     // Catch: java.lang.Exception -> Lab
            com.mbridge.msdk.foundation.entity.CampaignEx$c r3 = r2.getRewardTemplateMode()     // Catch: java.lang.Exception -> Lab
            if (r3 == 0) goto L1e
            com.mbridge.msdk.foundation.entity.CampaignEx$c r3 = r2.getRewardTemplateMode()     // Catch: java.lang.Exception -> Lab
            java.lang.String r3 = r3.e()     // Catch: java.lang.Exception -> Lab
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Lab
            if (r3 != 0) goto L1e
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lab
            r3.<init>()     // Catch: java.lang.Exception -> Lab
            java.lang.String r4 = r5.p     // Catch: java.lang.Exception -> Lab
            r3.append(r4)     // Catch: java.lang.Exception -> Lab
            r3.append(r0)     // Catch: java.lang.Exception -> Lab
            java.lang.String r4 = r2.getId()     // Catch: java.lang.Exception -> Lab
            r3.append(r4)     // Catch: java.lang.Exception -> Lab
            r3.append(r0)     // Catch: java.lang.Exception -> Lab
            java.lang.String r4 = r2.getRequestId()     // Catch: java.lang.Exception -> Lab
            r3.append(r4)     // Catch: java.lang.Exception -> Lab
            r3.append(r0)     // Catch: java.lang.Exception -> Lab
            com.mbridge.msdk.foundation.entity.CampaignEx$c r2 = r2.getRewardTemplateMode()     // Catch: java.lang.Exception -> Lab
            java.lang.String r2 = r2.e()     // Catch: java.lang.Exception -> Lab
            r3.append(r2)     // Catch: java.lang.Exception -> Lab
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Exception -> Lab
            com.mbridge.msdk.videocommon.a.b(r2)     // Catch: java.lang.Exception -> Lab
            goto L1e
        La2:
            int r3 = r2.getAdType()     // Catch: java.lang.Exception -> Lab
            com.mbridge.msdk.videocommon.a.b(r3, r2)     // Catch: java.lang.Exception -> Lab
            goto L1e
        Lab:
            return
    }

    private void d(java.lang.String r15) {
            r14 = this;
            java.lang.String r0 = ""
            java.lang.String r1 = "1"
            java.lang.String r2 = "_"
            java.lang.String r3 = "RewardVideoController"
            r4 = 3
            r5 = 4
            r6 = 1
            r7 = 0
            com.mbridge.msdk.videocommon.d.a r8 = r14.l     // Catch: java.lang.Exception -> L160
            if (r8 == 0) goto L29
            com.mbridge.msdk.videocommon.d.a r8 = r14.l     // Catch: java.lang.Exception -> L160
            java.util.Map r8 = r8.i()     // Catch: java.lang.Exception -> L160
            if (r8 == 0) goto L29
            boolean r9 = r8.containsKey(r1)     // Catch: java.lang.Exception -> L160
            if (r9 == 0) goto L29
            java.lang.Object r1 = r8.get(r1)     // Catch: java.lang.Exception -> L160
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Exception -> L160
            int r1 = r1.intValue()     // Catch: java.lang.Exception -> L160
            goto L2a
        L29:
            r1 = r7
        L2a:
            android.content.Context r8 = r14.h     // Catch: java.lang.Exception -> L160
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L160
            r9.<init>()     // Catch: java.lang.Exception -> L160
            java.lang.String r10 = r14.s     // Catch: java.lang.Exception -> L160
            r9.append(r10)     // Catch: java.lang.Exception -> L160
            r9.append(r2)     // Catch: java.lang.Exception -> L160
            r9.append(r6)     // Catch: java.lang.Exception -> L160
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L160
            java.lang.Integer r10 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Exception -> L160
            java.lang.Object r8 = com.mbridge.msdk.foundation.tools.ag.b(r8, r9, r10)     // Catch: java.lang.Exception -> L160
            if (r8 == 0) goto L70
            android.content.Context r8 = r14.h     // Catch: java.lang.Exception -> L160
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L160
            r9.<init>()     // Catch: java.lang.Exception -> L160
            java.lang.String r10 = r14.s     // Catch: java.lang.Exception -> L160
            r9.append(r10)     // Catch: java.lang.Exception -> L160
            r9.append(r2)     // Catch: java.lang.Exception -> L160
            r9.append(r6)     // Catch: java.lang.Exception -> L160
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L160
            java.lang.Integer r10 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Exception -> L160
            java.lang.Object r8 = com.mbridge.msdk.foundation.tools.ag.b(r8, r9, r10)     // Catch: java.lang.Exception -> L160
            java.lang.Integer r8 = (java.lang.Integer) r8     // Catch: java.lang.Exception -> L160
            int r8 = r8.intValue()     // Catch: java.lang.Exception -> L160
            r14.i = r8     // Catch: java.lang.Exception -> L160
        L70:
            com.mbridge.msdk.reward.adapter.d r8 = r14.j     // Catch: java.lang.Exception -> L160
            if (r8 != 0) goto L77
            r14.i()     // Catch: java.lang.Exception -> L160
        L77:
            com.mbridge.msdk.reward.adapter.d r8 = r14.j     // Catch: java.lang.Exception -> L160
            if (r8 == 0) goto Lf7
            java.lang.String r8 = "controller 819"
            com.mbridge.msdk.foundation.tools.z.d(r3, r8)     // Catch: java.lang.Exception -> L160
            boolean r8 = r14.B     // Catch: java.lang.Exception -> L160
            if (r8 == 0) goto L89
            boolean r8 = r14.g()     // Catch: java.lang.Exception -> L160
            goto L8f
        L89:
            com.mbridge.msdk.reward.adapter.d r8 = r14.j     // Catch: java.lang.Exception -> L160
            boolean r8 = r8.b()     // Catch: java.lang.Exception -> L160
        L8f:
            if (r8 == 0) goto Lc0
            int r2 = r14.i     // Catch: java.lang.Exception -> L160
            if (r2 < r1) goto L9a
            if (r1 <= 0) goto L9a
            r14.J = r7     // Catch: java.lang.Exception -> L160
            return
        L9a:
            java.lang.String r1 = "invoke adapter show isReady"
            com.mbridge.msdk.foundation.tools.z.b(r3, r1)     // Catch: java.lang.Exception -> L160
            com.mbridge.msdk.reward.a.a$d r1 = new com.mbridge.msdk.reward.a.a$d     // Catch: java.lang.Exception -> L160
            android.os.Handler r12 = r14.v     // Catch: java.lang.Exception -> L160
            r13 = 0
            r11 = 1
            r8 = r1
            r9 = r14
            r10 = r14
            r8.<init>(r9, r10, r11, r12, r13)     // Catch: java.lang.Exception -> L160
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.reward.a.a$d> r2 = com.mbridge.msdk.reward.a.a.b     // Catch: java.lang.Exception -> L160
            java.lang.String r8 = r14.p     // Catch: java.lang.Exception -> L160
            r2.put(r8, r1)     // Catch: java.lang.Exception -> L160
            com.mbridge.msdk.reward.adapter.d r8 = r14.j     // Catch: java.lang.Exception -> L160
            java.lang.String r11 = r14.o     // Catch: java.lang.Exception -> L160
            int r12 = r14.w     // Catch: java.lang.Exception -> L160
            java.lang.String r13 = r14.r     // Catch: java.lang.Exception -> L160
            r9 = r1
            r10 = r15
            r8.a(r9, r10, r11, r12, r13)     // Catch: java.lang.Exception -> L160
            return
        Lc0:
            boolean r1 = r14.B     // Catch: java.lang.Exception -> L160
            if (r1 == 0) goto Lc9
            boolean r1 = r14.h()     // Catch: java.lang.Exception -> L160
            goto Lcf
        Lc9:
            com.mbridge.msdk.reward.adapter.d r1 = r14.j     // Catch: java.lang.Exception -> L160
            boolean r1 = r1.c()     // Catch: java.lang.Exception -> L160
        Lcf:
            if (r1 == 0) goto Lf7
            java.lang.String r1 = "invoke adapter show isSpareOfferReady"
            com.mbridge.msdk.foundation.tools.z.b(r3, r1)     // Catch: java.lang.Exception -> L160
            com.mbridge.msdk.reward.a.a$d r1 = new com.mbridge.msdk.reward.a.a$d     // Catch: java.lang.Exception -> L160
            android.os.Handler r12 = r14.v     // Catch: java.lang.Exception -> L160
            r13 = 0
            r11 = 1
            r8 = r1
            r9 = r14
            r10 = r14
            r8.<init>(r9, r10, r11, r12, r13)     // Catch: java.lang.Exception -> L160
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.reward.a.a$d> r2 = com.mbridge.msdk.reward.a.a.b     // Catch: java.lang.Exception -> L160
            java.lang.String r8 = r14.p     // Catch: java.lang.Exception -> L160
            r2.put(r8, r1)     // Catch: java.lang.Exception -> L160
            com.mbridge.msdk.reward.adapter.d r8 = r14.j     // Catch: java.lang.Exception -> L160
            java.lang.String r11 = r14.o     // Catch: java.lang.Exception -> L160
            int r12 = r14.w     // Catch: java.lang.Exception -> L160
            java.lang.String r13 = r14.r     // Catch: java.lang.Exception -> L160
            r9 = r1
            r10 = r15
            r8.a(r9, r10, r11, r12, r13)     // Catch: java.lang.Exception -> L160
            return
        Lf7:
            int r1 = r14.i     // Catch: java.lang.Exception -> L160
            if (r1 == 0) goto L11c
            android.content.Context r1 = r14.h     // Catch: java.lang.Exception -> L160
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L160
            r8.<init>()     // Catch: java.lang.Exception -> L160
            java.lang.String r9 = r14.s     // Catch: java.lang.Exception -> L160
            r8.append(r9)     // Catch: java.lang.Exception -> L160
            r8.append(r2)     // Catch: java.lang.Exception -> L160
            r8.append(r6)     // Catch: java.lang.Exception -> L160
            java.lang.String r2 = r8.toString()     // Catch: java.lang.Exception -> L160
            java.lang.Integer r8 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Exception -> L160
            com.mbridge.msdk.foundation.tools.ag.a(r1, r2, r8)     // Catch: java.lang.Exception -> L160
            r14.d(r15)     // Catch: java.lang.Exception -> L160
            return
        L11c:
            r14.J = r7     // Catch: java.lang.Exception -> L160
            com.mbridge.msdk.videocommon.listener.InterVideoOutListener r15 = r14.m     // Catch: java.lang.Exception -> L160
            if (r15 == 0) goto L134
            com.mbridge.msdk.videocommon.listener.InterVideoOutListener r15 = r14.m     // Catch: java.lang.Exception -> L12c
            com.mbridge.msdk.out.MBridgeIds r1 = r14.q     // Catch: java.lang.Exception -> L12c
            java.lang.String r2 = "can't show because load is failed"
            r15.onShowFail(r1, r2)     // Catch: java.lang.Exception -> L12c
            goto L134
        L12c:
            r15 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> L160
            if (r1 == 0) goto L134
            r15.printStackTrace()     // Catch: java.lang.Exception -> L160
        L134:
            boolean r15 = r14.A     // Catch: java.lang.Exception -> L160
            if (r15 != 0) goto L1ac
            boolean r15 = r14.B     // Catch: java.lang.Exception -> L160
            if (r15 != 0) goto L1ac
            com.mbridge.msdk.videocommon.d.c r15 = r14.k     // Catch: java.lang.Exception -> L160
            if (r15 == 0) goto L1ac
            com.mbridge.msdk.videocommon.d.c r15 = r14.k     // Catch: java.lang.Exception -> L160
            boolean r15 = r15.v(r5)     // Catch: java.lang.Exception -> L160
            if (r15 == 0) goto L1ac
            com.mbridge.msdk.reward.a.a$c r15 = r14.n     // Catch: java.lang.Exception -> L160
            if (r15 == 0) goto L1ac
            com.mbridge.msdk.reward.a.a$c r15 = r14.n     // Catch: java.lang.Exception -> L160
            int r15 = com.mbridge.msdk.reward.a.a.c.a(r15)     // Catch: java.lang.Exception -> L160
            if (r15 == r6) goto L1ac
            com.mbridge.msdk.reward.a.a$c r15 = r14.n     // Catch: java.lang.Exception -> L160
            int r15 = com.mbridge.msdk.reward.a.a.c.a(r15)     // Catch: java.lang.Exception -> L160
            if (r15 == r4) goto L1ac
            r14.a(r7, r0)     // Catch: java.lang.Exception -> L160
            goto L1ac
        L160:
            r15 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L16c
            java.lang.String r1 = r15.getLocalizedMessage()
            com.mbridge.msdk.foundation.tools.z.d(r3, r1)
        L16c:
            com.mbridge.msdk.videocommon.listener.InterVideoOutListener r1 = r14.m
            if (r1 == 0) goto L181
            com.mbridge.msdk.videocommon.listener.InterVideoOutListener r1 = r14.m     // Catch: java.lang.Exception -> L17a
            com.mbridge.msdk.out.MBridgeIds r2 = r14.q     // Catch: java.lang.Exception -> L17a
            java.lang.String r3 = "show exception"
            r1.onShowFail(r2, r3)     // Catch: java.lang.Exception -> L17a
            goto L181
        L17a:
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L181
            r15.printStackTrace()
        L181:
            boolean r15 = r14.A
            if (r15 != 0) goto L1aa
            boolean r15 = r14.B
            if (r15 != 0) goto L1aa
            com.mbridge.msdk.videocommon.d.c r15 = r14.k
            if (r15 == 0) goto L1aa
            boolean r15 = r15.v(r5)
            if (r15 == 0) goto L1aa
            com.mbridge.msdk.reward.a.a$c r15 = r14.n
            if (r15 == 0) goto L1aa
            com.mbridge.msdk.reward.a.a$c r15 = r14.n
            int r15 = com.mbridge.msdk.reward.a.a.c.a(r15)
            if (r15 == r6) goto L1aa
            com.mbridge.msdk.reward.a.a$c r15 = r14.n
            int r15 = com.mbridge.msdk.reward.a.a.c.a(r15)
            if (r15 == r4) goto L1aa
            r14.a(r7, r0)
        L1aa:
            r14.J = r7
        L1ac:
            return
    }

    static boolean d(com.mbridge.msdk.reward.a.a r0, boolean r1) {
            r0.S = r1
            return r1
    }

    private void e() {
            r7 = this;
            com.mbridge.msdk.videocommon.d.c r0 = r7.k     // Catch: java.lang.Exception -> L42
            java.util.List r0 = r0.y()     // Catch: java.lang.Exception -> L42
            if (r0 == 0) goto L46
            int r1 = r0.size()     // Catch: java.lang.Exception -> L42
            if (r1 <= 0) goto L46
            r1 = 0
            r2 = r1
        L10:
            int r3 = r0.size()     // Catch: java.lang.Exception -> L42
            if (r2 >= r3) goto L46
            java.lang.Object r3 = r0.get(r2)     // Catch: java.lang.Exception -> L42
            com.mbridge.msdk.videocommon.b.b r3 = (com.mbridge.msdk.videocommon.b.b) r3     // Catch: java.lang.Exception -> L42
            android.content.Context r4 = r7.h     // Catch: java.lang.Exception -> L42
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L42
            r5.<init>()     // Catch: java.lang.Exception -> L42
            java.lang.String r6 = r7.s     // Catch: java.lang.Exception -> L42
            r5.append(r6)     // Catch: java.lang.Exception -> L42
            java.lang.String r6 = "_"
            r5.append(r6)     // Catch: java.lang.Exception -> L42
            int r3 = r3.a()     // Catch: java.lang.Exception -> L42
            r5.append(r3)     // Catch: java.lang.Exception -> L42
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Exception -> L42
            java.lang.Integer r5 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L42
            com.mbridge.msdk.foundation.tools.ag.a(r4, r3, r5)     // Catch: java.lang.Exception -> L42
            int r2 = r2 + 1
            goto L10
        L42:
            r0 = move-exception
            r0.printStackTrace()
        L46:
            return
    }

    static boolean e(com.mbridge.msdk.reward.a.a r0) {
            boolean r0 = r0.E
            return r0
    }

    static boolean e(com.mbridge.msdk.reward.a.a r0, boolean r1) {
            r0.T = r1
            return r1
    }

    static java.lang.String f(com.mbridge.msdk.reward.a.a r0) {
            java.lang.String r0 = r0.s
            return r0
    }

    private boolean f() {
            r10 = this;
            java.lang.String r0 = ""
            com.mbridge.msdk.videocommon.d.c r1 = r10.k     // Catch: java.lang.Exception -> L9e
            java.util.List r1 = r1.y()     // Catch: java.lang.Exception -> L9e
            com.mbridge.msdk.videocommon.d.a r2 = r10.l     // Catch: java.lang.Exception -> L9e
            if (r2 != 0) goto L16
            com.mbridge.msdk.videocommon.d.b r2 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> L9e
            com.mbridge.msdk.videocommon.d.a r2 = r2.b()     // Catch: java.lang.Exception -> L9e
            r10.l = r2     // Catch: java.lang.Exception -> L9e
        L16:
            com.mbridge.msdk.videocommon.d.a r2 = r10.l     // Catch: java.lang.Exception -> L9e
            java.util.Map r2 = r2.i()     // Catch: java.lang.Exception -> L9e
            if (r1 == 0) goto Lab
            int r3 = r1.size()     // Catch: java.lang.Exception -> L9e
            if (r3 <= 0) goto Lab
            r3 = 0
            r4 = r3
        L26:
            int r5 = r1.size()     // Catch: java.lang.Exception -> L9e
            if (r4 >= r5) goto Lab
            java.lang.Object r5 = r1.get(r4)     // Catch: java.lang.Exception -> L9e
            com.mbridge.msdk.videocommon.b.b r5 = (com.mbridge.msdk.videocommon.b.b) r5     // Catch: java.lang.Exception -> L9e
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L9e
            r6.<init>()     // Catch: java.lang.Exception -> L9e
            int r7 = r5.a()     // Catch: java.lang.Exception -> L9e
            r6.append(r7)     // Catch: java.lang.Exception -> L9e
            r6.append(r0)     // Catch: java.lang.Exception -> L9e
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L9e
            boolean r6 = r2.containsKey(r6)     // Catch: java.lang.Exception -> L9e
            if (r6 == 0) goto L69
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L9e
            r6.<init>()     // Catch: java.lang.Exception -> L9e
            int r7 = r5.a()     // Catch: java.lang.Exception -> L9e
            r6.append(r7)     // Catch: java.lang.Exception -> L9e
            r6.append(r0)     // Catch: java.lang.Exception -> L9e
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L9e
            java.lang.Object r6 = r2.get(r6)     // Catch: java.lang.Exception -> L9e
            java.lang.Integer r6 = (java.lang.Integer) r6     // Catch: java.lang.Exception -> L9e
            int r6 = r6.intValue()     // Catch: java.lang.Exception -> L9e
            goto L6a
        L69:
            r6 = r3
        L6a:
            android.content.Context r7 = r10.h     // Catch: java.lang.Exception -> L9e
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L9e
            r8.<init>()     // Catch: java.lang.Exception -> L9e
            java.lang.String r9 = r10.s     // Catch: java.lang.Exception -> L9e
            r8.append(r9)     // Catch: java.lang.Exception -> L9e
            java.lang.String r9 = "_"
            r8.append(r9)     // Catch: java.lang.Exception -> L9e
            int r5 = r5.a()     // Catch: java.lang.Exception -> L9e
            r8.append(r5)     // Catch: java.lang.Exception -> L9e
            java.lang.String r5 = r8.toString()     // Catch: java.lang.Exception -> L9e
            java.lang.Integer r8 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Exception -> L9e
            java.lang.Object r5 = com.mbridge.msdk.foundation.tools.ag.b(r7, r5, r8)     // Catch: java.lang.Exception -> L9e
            if (r5 == 0) goto L97
            java.lang.Integer r5 = (java.lang.Integer) r5     // Catch: java.lang.Exception -> L9e
            int r5 = r5.intValue()     // Catch: java.lang.Exception -> L9e
            goto L98
        L97:
            r5 = r3
        L98:
            if (r5 >= r6) goto L9b
            return r3
        L9b:
            int r4 = r4 + 1
            goto L26
        L9e:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "RewardVideoController"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        Lab:
            r0 = 1
            return r0
    }

    static boolean f(com.mbridge.msdk.reward.a.a r0, boolean r1) {
            r0.U = r1
            return r1
    }

    static java.lang.String g(com.mbridge.msdk.reward.a.a r0) {
            java.lang.String r0 = r0.p
            return r0
    }

    private boolean g() {
            r4 = this;
            com.mbridge.msdk.reward.adapter.d r0 = r4.j
            if (r0 != 0) goto L7
            r4.i()
        L7:
            com.mbridge.msdk.videocommon.a.a r0 = com.mbridge.msdk.videocommon.a.a.a()
            java.lang.String r1 = r4.p
            java.util.List r0 = r0.a(r1)
            r1 = 0
            if (r0 == 0) goto L50
            int r2 = r0.size()
            if (r2 <= 0) goto L50
            java.lang.String r2 = r4.p
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.d.b(r2)
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L2a
            boolean r1 = r4.a(r0, r2)
        L2a:
            if (r1 != 0) goto L50
            java.util.Iterator r0 = r0.iterator()
        L30:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L50
            java.lang.Object r2 = r0.next()
            com.mbridge.msdk.foundation.entity.c r2 = (com.mbridge.msdk.foundation.entity.c) r2
            if (r2 == 0) goto L30
            com.mbridge.msdk.reward.adapter.d r3 = r4.j
            java.lang.String r2 = r2.a()
            r3.a(r2)
            com.mbridge.msdk.reward.adapter.d r2 = r4.j
            boolean r2 = r2.b()
            if (r2 == 0) goto L30
            r1 = 1
        L50:
            return r1
    }

    static com.mbridge.msdk.videocommon.listener.InterVideoOutListener h(com.mbridge.msdk.reward.a.a r0) {
            com.mbridge.msdk.videocommon.listener.InterVideoOutListener r0 = r0.m
            return r0
    }

    private boolean h() {
            r4 = this;
            com.mbridge.msdk.reward.adapter.d r0 = r4.j
            if (r0 != 0) goto L7
            r4.i()
        L7:
            com.mbridge.msdk.videocommon.a.a r0 = com.mbridge.msdk.videocommon.a.a.a()
            java.lang.String r1 = r4.p
            java.util.List r0 = r0.a(r1)
            if (r0 == 0) goto L4c
            int r1 = r0.size()
            if (r1 <= 0) goto L4c
            java.util.Iterator r0 = r0.iterator()
        L1d:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L4c
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.foundation.entity.c r1 = (com.mbridge.msdk.foundation.entity.c) r1
            if (r1 == 0) goto L1d
            com.mbridge.msdk.reward.adapter.d r2 = r4.j
            java.lang.String r3 = r1.a()
            r2.a(r3)
            com.mbridge.msdk.reward.adapter.d r2 = r4.j
            boolean r2 = r2.c()
            if (r2 == 0) goto L3e
            r0 = 1
            return r0
        L3e:
            com.mbridge.msdk.videocommon.a.a r2 = com.mbridge.msdk.videocommon.a.a.a()
            java.lang.String r3 = r4.p
            java.lang.String r1 = r1.a()
            r2.b(r3, r1)
            goto L1d
        L4c:
            r0 = 0
            return r0
    }

    private void i() {
            r4 = this;
            com.mbridge.msdk.reward.adapter.d r0 = new com.mbridge.msdk.reward.adapter.d
            android.content.Context r1 = r4.h
            java.lang.String r2 = r4.s
            java.lang.String r3 = r4.p
            r0.<init>(r1, r2, r3)
            r4.j = r0
            boolean r1 = r4.A
            r0.a(r1)
            com.mbridge.msdk.reward.adapter.d r0 = r4.j
            boolean r1 = r4.B
            r0.b(r1)
            boolean r0 = r4.A
            if (r0 == 0) goto L28
            com.mbridge.msdk.reward.adapter.d r0 = r4.j
            int r1 = r4.x
            int r2 = r4.y
            int r3 = r4.z
            r0.a(r1, r2, r3)
        L28:
            com.mbridge.msdk.reward.adapter.d r0 = r4.j
            com.mbridge.msdk.videocommon.d.c r1 = r4.k
            r0.a(r1)
            return
    }

    static boolean i(com.mbridge.msdk.reward.a.a r0) {
            boolean r0 = r0.B
            return r0
    }

    public static void insertExcludeId(java.lang.String r4, com.mbridge.msdk.foundation.entity.CampaignEx r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L3b
            if (r5 == 0) goto L3b
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            if (r0 == 0) goto L3b
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)
            com.mbridge.msdk.foundation.db.k r0 = com.mbridge.msdk.foundation.db.k.a(r0)
            com.mbridge.msdk.foundation.entity.g r1 = new com.mbridge.msdk.foundation.entity.g
            r1.<init>()
            long r2 = java.lang.System.currentTimeMillis()
            r1.a(r2)
            r1.b(r4)
            java.lang.String r4 = r5.getId()
            r1.a(r4)
            r0.a(r1)
        L3b:
            return
    }

    static void j(com.mbridge.msdk.reward.a.a r2) {
            com.mbridge.msdk.out.MBridgeIds r0 = r2.q
            if (r0 == 0) goto L3b
            boolean r0 = r2.H
            if (r0 != 0) goto L9
            goto L34
        L9:
            java.lang.String r0 = r2.b()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L3b
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r1 = com.mbridge.msdk.reward.a.a.L
            if (r1 == 0) goto L34
            boolean r1 = r1.containsKey(r0)
            if (r1 == 0) goto L34
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r1 = com.mbridge.msdk.reward.a.a.L
            java.lang.Object r1 = r1.get(r0)
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L34
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r1 = com.mbridge.msdk.reward.a.a.L
            java.lang.Object r0 = r1.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            goto L36
        L34:
            java.lang.String r0 = ""
        L36:
            com.mbridge.msdk.out.MBridgeIds r2 = r2.q
            r2.setBidToken(r0)
        L3b:
            return
    }

    private boolean j() {
            r6 = this;
            r0 = 0
            com.mbridge.msdk.foundation.db.i r1 = r6.O     // Catch: java.lang.Throwable -> L45
            if (r1 != 0) goto L13
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L45
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L45
            com.mbridge.msdk.foundation.db.i r1 = com.mbridge.msdk.foundation.db.i.a(r1)     // Catch: java.lang.Throwable -> L45
            r6.O = r1     // Catch: java.lang.Throwable -> L45
        L13:
            com.mbridge.msdk.foundation.db.i r1 = r6.O     // Catch: java.lang.Throwable -> L45
            com.mbridge.msdk.foundation.db.j r1 = com.mbridge.msdk.foundation.db.j.a(r1)     // Catch: java.lang.Throwable -> L45
            com.mbridge.msdk.videocommon.d.c r2 = r6.k     // Catch: java.lang.Throwable -> L45
            if (r2 != 0) goto L33
            com.mbridge.msdk.videocommon.d.b r2 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Throwable -> L45
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L45
            java.lang.String r3 = r3.k()     // Catch: java.lang.Throwable -> L45
            java.lang.String r4 = r6.p     // Catch: java.lang.Throwable -> L45
            boolean r5 = r6.A     // Catch: java.lang.Throwable -> L45
            com.mbridge.msdk.videocommon.d.c r2 = r2.a(r3, r4, r5)     // Catch: java.lang.Throwable -> L45
            r6.k = r2     // Catch: java.lang.Throwable -> L45
        L33:
            com.mbridge.msdk.videocommon.d.c r2 = r6.k     // Catch: java.lang.Throwable -> L45
            int r2 = r2.f()     // Catch: java.lang.Throwable -> L45
            if (r1 == 0) goto L4c
            java.lang.String r3 = r6.p     // Catch: java.lang.Throwable -> L45
            boolean r1 = r1.a(r3, r2)     // Catch: java.lang.Throwable -> L45
            if (r1 == 0) goto L4c
            r0 = 1
            goto L4c
        L45:
            java.lang.String r1 = "RewardVideoController"
            java.lang.String r2 = "cap check error"
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)
        L4c:
            return r0
    }

    static com.mbridge.msdk.out.MBridgeIds k(com.mbridge.msdk.reward.a.a r0) {
            com.mbridge.msdk.out.MBridgeIds r0 = r0.q
            return r0
    }

    static com.mbridge.msdk.videocommon.d.c l(com.mbridge.msdk.reward.a.a r0) {
            com.mbridge.msdk.videocommon.d.c r0 = r0.k
            return r0
    }

    static android.content.Context m(com.mbridge.msdk.reward.a.a r0) {
            android.content.Context r0 = r0.h
            return r0
    }

    static java.util.ArrayList n(com.mbridge.msdk.reward.a.a r0) {
            java.util.ArrayList<java.lang.Integer> r0 = r0.G
            return r0
    }

    static java.lang.String o(com.mbridge.msdk.reward.a.a r0) {
            java.lang.String r0 = r0.t
            return r0
    }

    static boolean p(com.mbridge.msdk.reward.a.a r0) {
            boolean r0 = r0.A
            return r0
    }

    static android.os.Handler q(com.mbridge.msdk.reward.a.a r0) {
            android.os.Handler r0 = r0.v
            return r0
    }

    static boolean r(com.mbridge.msdk.reward.a.a r0) {
            boolean r0 = r0.F
            return r0
    }

    static int s(com.mbridge.msdk.reward.a.a r0) {
            int r0 = r0.w
            return r0
    }

    static boolean t(com.mbridge.msdk.reward.a.a r0) {
            boolean r0 = r0.R
            return r0
    }

    static boolean u(com.mbridge.msdk.reward.a.a r0) {
            boolean r0 = r0.S
            return r0
    }

    static boolean v(com.mbridge.msdk.reward.a.a r0) {
            boolean r0 = r0.T
            return r0
    }

    static boolean w(com.mbridge.msdk.reward.a.a r0) {
            boolean r0 = r0.V
            return r0
    }

    static boolean x(com.mbridge.msdk.reward.a.a r0) {
            boolean r0 = r0.U
            return r0
    }

    static com.mbridge.msdk.foundation.db.i y(com.mbridge.msdk.reward.a.a r0) {
            com.mbridge.msdk.foundation.db.i r0 = r0.O
            return r0
    }

    static int z(com.mbridge.msdk.reward.a.a r0) {
            int r0 = r0.i
            return r0
    }

    public final void a() {
            r2 = this;
            boolean r0 = r2.H
            if (r0 == 0) goto L1b
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = com.mbridge.msdk.reward.a.a.L
            if (r0 == 0) goto L1b
            java.lang.String r1 = r2.b()
            boolean r0 = r0.containsKey(r1)
            if (r0 != 0) goto L1b
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = com.mbridge.msdk.reward.a.a.L
            java.lang.String r1 = r2.b()
            r0.remove(r1)
        L1b:
            return
    }

    public final void a(int r1) {
            r0 = this;
            r0.w = r1
            return
    }

    public final void a(int r6, int r7, int r8) {
            r5 = this;
            r5.x = r6
            r5.y = r7
            int r0 = com.mbridge.msdk.foundation.same.a.z
            if (r7 != r0) goto Lf
            if (r8 >= 0) goto Lc
            r0 = 5
            goto Ld
        Lc:
            r0 = r8
        Ld:
            r5.z = r0
        Lf:
            int r0 = r5.y
            int r1 = com.mbridge.msdk.foundation.same.a.y
            if (r0 != r1) goto L1d
            if (r8 >= 0) goto L1a
            r0 = 80
            goto L1b
        L1a:
            r0 = r8
        L1b:
            r5.z = r0
        L1d:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L66
            r0.<init>()     // Catch: java.lang.Exception -> L66
            java.lang.String r1 = "ivRewardEnable"
            r2 = 1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L66
            java.lang.String r1 = "ivRewardMode"
            int r3 = com.mbridge.msdk.foundation.same.a.w     // Catch: java.lang.Exception -> L66
            r4 = 0
            if (r6 != r3) goto L31
            r6 = r4
            goto L32
        L31:
            r6 = r2
        L32:
            r0.put(r1, r6)     // Catch: java.lang.Exception -> L66
            java.lang.String r6 = "ivRewardPlayValueMode"
            int r1 = com.mbridge.msdk.foundation.same.a.y     // Catch: java.lang.Exception -> L66
            if (r7 != r1) goto L3c
            r2 = r4
        L3c:
            r0.put(r6, r2)     // Catch: java.lang.Exception -> L66
            java.lang.String r6 = "ivRewardPlayValue"
            r0.put(r6, r8)     // Catch: java.lang.Exception -> L66
            com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L66
            java.lang.String r6 = r5.p     // Catch: java.lang.Exception -> L66
            java.lang.String r7 = r0.toString()     // Catch: java.lang.Exception -> L66
            com.mbridge.msdk.foundation.a.a.a r8 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Exception -> L66
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L66
            r0.<init>()     // Catch: java.lang.Exception -> L66
            java.lang.String r1 = "ivreward_"
            r0.append(r1)     // Catch: java.lang.Exception -> L66
            r0.append(r6)     // Catch: java.lang.Exception -> L66
            java.lang.String r6 = r0.toString()     // Catch: java.lang.Exception -> L66
            r8.a(r6, r7)     // Catch: java.lang.Exception -> L66
            goto L6d
        L66:
            java.lang.String r6 = "RewardVideoController"
            java.lang.String r7 = "setIVRewardEnable to SP was ERROR"
            com.mbridge.msdk.foundation.tools.z.d(r6, r7)
        L6d:
            return
    }

    public final void a(com.mbridge.msdk.videocommon.listener.InterVideoOutListener r8) {
            r7 = this;
            r7.m = r8
            com.mbridge.msdk.reward.a.a$c r6 = new com.mbridge.msdk.reward.a.a$c
            android.os.Handler r3 = r7.v
            java.lang.String r4 = r7.p
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            r7.n = r6
            return
    }

    public final void a(java.lang.String r7, java.lang.String r8, java.lang.String r9) {
            r6 = this;
            r0 = 3
            r1 = 4
            r2 = 1
            r3 = 0
            r6.t = r7     // Catch: java.lang.Exception -> L1da
            r6.o = r8     // Catch: java.lang.Exception -> L1da
            r6.r = r9     // Catch: java.lang.Exception -> L1da
            java.lang.Object r8 = r6.I     // Catch: java.lang.Exception -> L1da
            monitor-enter(r8)     // Catch: java.lang.Exception -> L1da
            boolean r9 = r6.J     // Catch: java.lang.Throwable -> L1d7
            if (r9 == 0) goto L29
            com.mbridge.msdk.videocommon.listener.InterVideoOutListener r7 = r6.m     // Catch: java.lang.Throwable -> L1d7
            if (r7 == 0) goto L27
            com.mbridge.msdk.videocommon.listener.InterVideoOutListener r7 = r6.m     // Catch: java.lang.Exception -> L1f java.lang.Throwable -> L1d7
            com.mbridge.msdk.out.MBridgeIds r9 = r6.q     // Catch: java.lang.Exception -> L1f java.lang.Throwable -> L1d7
            java.lang.String r4 = "campaing is show progressing "
            r7.onShowFail(r9, r4)     // Catch: java.lang.Exception -> L1f java.lang.Throwable -> L1d7
            goto L27
        L1f:
            r7 = move-exception
            boolean r9 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Throwable -> L1d7
            if (r9 == 0) goto L27
            r7.printStackTrace()     // Catch: java.lang.Throwable -> L1d7
        L27:
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L1d7
            return
        L29:
            r6.J = r2     // Catch: java.lang.Throwable -> L1d7
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L1d7
            com.mbridge.msdk.reward.a.a$c r8 = r6.n     // Catch: java.lang.Exception -> L1da
            if (r8 == 0) goto L82
            com.mbridge.msdk.reward.a.a$c r8 = r6.n     // Catch: java.lang.Exception -> L1da
            java.util.concurrent.atomic.AtomicInteger r8 = com.mbridge.msdk.reward.a.a.c.b(r8)     // Catch: java.lang.Exception -> L1da
            int r8 = r8.get()     // Catch: java.lang.Exception -> L1da
            if (r8 != r2) goto L82
            com.mbridge.msdk.videocommon.listener.InterVideoOutListener r7 = r6.m     // Catch: java.lang.Exception -> L1da
            if (r7 == 0) goto L52
            com.mbridge.msdk.videocommon.listener.InterVideoOutListener r7 = r6.m     // Catch: java.lang.Exception -> L4a
            com.mbridge.msdk.out.MBridgeIds r8 = r6.q     // Catch: java.lang.Exception -> L4a
            java.lang.String r9 = "campaing is loading"
            r7.onShowFail(r8, r9)     // Catch: java.lang.Exception -> L4a
            goto L52
        L4a:
            r7 = move-exception
            boolean r8 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> L1da
            if (r8 == 0) goto L52
            r7.printStackTrace()     // Catch: java.lang.Exception -> L1da
        L52:
            boolean r7 = r6.A     // Catch: java.lang.Exception -> L1da
            if (r7 != 0) goto L7f
            boolean r7 = r6.B     // Catch: java.lang.Exception -> L1da
            if (r7 != 0) goto L7f
            com.mbridge.msdk.videocommon.d.c r7 = r6.k     // Catch: java.lang.Exception -> L1da
            if (r7 == 0) goto L7f
            com.mbridge.msdk.videocommon.d.c r7 = r6.k     // Catch: java.lang.Exception -> L1da
            boolean r7 = r7.v(r1)     // Catch: java.lang.Exception -> L1da
            if (r7 == 0) goto L7f
            com.mbridge.msdk.reward.a.a$c r7 = r6.n     // Catch: java.lang.Exception -> L1da
            if (r7 == 0) goto L7f
            com.mbridge.msdk.reward.a.a$c r7 = r6.n     // Catch: java.lang.Exception -> L1da
            int r7 = com.mbridge.msdk.reward.a.a.c.a(r7)     // Catch: java.lang.Exception -> L1da
            if (r7 == r2) goto L7f
            com.mbridge.msdk.reward.a.a$c r7 = r6.n     // Catch: java.lang.Exception -> L1da
            int r7 = com.mbridge.msdk.reward.a.a.c.a(r7)     // Catch: java.lang.Exception -> L1da
            if (r7 == r0) goto L7f
            java.lang.String r7 = ""
            r6.a(r3, r7)     // Catch: java.lang.Exception -> L1da
        L7f:
            r6.J = r3     // Catch: java.lang.Exception -> L1da
            return
        L82:
            android.content.Context r8 = r6.h     // Catch: java.lang.Exception -> L1da
            if (r8 != 0) goto Lcc
            com.mbridge.msdk.videocommon.listener.InterVideoOutListener r7 = r6.m     // Catch: java.lang.Exception -> L1da
            if (r7 == 0) goto L9c
            com.mbridge.msdk.videocommon.listener.InterVideoOutListener r7 = r6.m     // Catch: java.lang.Exception -> L94
            com.mbridge.msdk.out.MBridgeIds r8 = r6.q     // Catch: java.lang.Exception -> L94
            java.lang.String r9 = "context is null"
            r7.onShowFail(r8, r9)     // Catch: java.lang.Exception -> L94
            goto L9c
        L94:
            r7 = move-exception
            boolean r8 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> L1da
            if (r8 == 0) goto L9c
            r7.printStackTrace()     // Catch: java.lang.Exception -> L1da
        L9c:
            boolean r7 = r6.A     // Catch: java.lang.Exception -> L1da
            if (r7 != 0) goto Lc9
            boolean r7 = r6.B     // Catch: java.lang.Exception -> L1da
            if (r7 != 0) goto Lc9
            com.mbridge.msdk.videocommon.d.c r7 = r6.k     // Catch: java.lang.Exception -> L1da
            if (r7 == 0) goto Lc9
            com.mbridge.msdk.videocommon.d.c r7 = r6.k     // Catch: java.lang.Exception -> L1da
            boolean r7 = r7.v(r1)     // Catch: java.lang.Exception -> L1da
            if (r7 == 0) goto Lc9
            com.mbridge.msdk.reward.a.a$c r7 = r6.n     // Catch: java.lang.Exception -> L1da
            if (r7 == 0) goto Lc9
            com.mbridge.msdk.reward.a.a$c r7 = r6.n     // Catch: java.lang.Exception -> L1da
            int r7 = com.mbridge.msdk.reward.a.a.c.a(r7)     // Catch: java.lang.Exception -> L1da
            if (r7 == r2) goto Lc9
            com.mbridge.msdk.reward.a.a$c r7 = r6.n     // Catch: java.lang.Exception -> L1da
            int r7 = com.mbridge.msdk.reward.a.a.c.a(r7)     // Catch: java.lang.Exception -> L1da
            if (r7 == r0) goto Lc9
            java.lang.String r7 = ""
            r6.a(r3, r7)     // Catch: java.lang.Exception -> L1da
        Lc9:
            r6.J = r3     // Catch: java.lang.Exception -> L1da
            return
        Lcc:
            boolean r8 = r6.A     // Catch: java.lang.Exception -> L1da
            if (r8 == 0) goto L11e
            android.content.Context r8 = r6.h     // Catch: java.lang.Exception -> L1da
            boolean r8 = com.mbridge.msdk.foundation.tools.ae.c(r8)     // Catch: java.lang.Exception -> L1da
            if (r8 != 0) goto L11e
            com.mbridge.msdk.videocommon.listener.InterVideoOutListener r7 = r6.m     // Catch: java.lang.Exception -> L1da
            if (r7 == 0) goto Lee
            com.mbridge.msdk.videocommon.listener.InterVideoOutListener r7 = r6.m     // Catch: java.lang.Exception -> Le6
            com.mbridge.msdk.out.MBridgeIds r8 = r6.q     // Catch: java.lang.Exception -> Le6
            java.lang.String r9 = "network exception"
            r7.onShowFail(r8, r9)     // Catch: java.lang.Exception -> Le6
            goto Lee
        Le6:
            r7 = move-exception
            boolean r8 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> L1da
            if (r8 == 0) goto Lee
            r7.printStackTrace()     // Catch: java.lang.Exception -> L1da
        Lee:
            boolean r7 = r6.A     // Catch: java.lang.Exception -> L1da
            if (r7 != 0) goto L11b
            boolean r7 = r6.B     // Catch: java.lang.Exception -> L1da
            if (r7 != 0) goto L11b
            com.mbridge.msdk.videocommon.d.c r7 = r6.k     // Catch: java.lang.Exception -> L1da
            if (r7 == 0) goto L11b
            com.mbridge.msdk.videocommon.d.c r7 = r6.k     // Catch: java.lang.Exception -> L1da
            boolean r7 = r7.v(r1)     // Catch: java.lang.Exception -> L1da
            if (r7 == 0) goto L11b
            com.mbridge.msdk.reward.a.a$c r7 = r6.n     // Catch: java.lang.Exception -> L1da
            if (r7 == 0) goto L11b
            com.mbridge.msdk.reward.a.a$c r7 = r6.n     // Catch: java.lang.Exception -> L1da
            int r7 = com.mbridge.msdk.reward.a.a.c.a(r7)     // Catch: java.lang.Exception -> L1da
            if (r7 == r2) goto L11b
            com.mbridge.msdk.reward.a.a$c r7 = r6.n     // Catch: java.lang.Exception -> L1da
            int r7 = com.mbridge.msdk.reward.a.a.c.a(r7)     // Catch: java.lang.Exception -> L1da
            if (r7 == r0) goto L11b
            java.lang.String r7 = ""
            r6.a(r3, r7)     // Catch: java.lang.Exception -> L1da
        L11b:
            r6.J = r3     // Catch: java.lang.Exception -> L1da
            return
        L11e:
            boolean r8 = r6.j()     // Catch: java.lang.Exception -> L1da
            if (r8 == 0) goto L171
            java.lang.String r7 = "RewardVideoController"
            java.lang.String r8 = " check over cap true"
            com.mbridge.msdk.foundation.tools.z.a(r7, r8)     // Catch: java.lang.Exception -> L1da
            com.mbridge.msdk.videocommon.listener.InterVideoOutListener r7 = r6.m     // Catch: java.lang.Exception -> L1da
            if (r7 == 0) goto L141
            com.mbridge.msdk.videocommon.listener.InterVideoOutListener r7 = r6.m     // Catch: java.lang.Exception -> L139
            com.mbridge.msdk.out.MBridgeIds r8 = r6.q     // Catch: java.lang.Exception -> L139
            java.lang.String r9 = "Play more than limit"
            r7.onShowFail(r8, r9)     // Catch: java.lang.Exception -> L139
            goto L141
        L139:
            r7 = move-exception
            boolean r8 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> L1da
            if (r8 == 0) goto L141
            r7.printStackTrace()     // Catch: java.lang.Exception -> L1da
        L141:
            boolean r7 = r6.A     // Catch: java.lang.Exception -> L1da
            if (r7 != 0) goto L16e
            boolean r7 = r6.B     // Catch: java.lang.Exception -> L1da
            if (r7 != 0) goto L16e
            com.mbridge.msdk.videocommon.d.c r7 = r6.k     // Catch: java.lang.Exception -> L1da
            if (r7 == 0) goto L16e
            com.mbridge.msdk.videocommon.d.c r7 = r6.k     // Catch: java.lang.Exception -> L1da
            boolean r7 = r7.v(r1)     // Catch: java.lang.Exception -> L1da
            if (r7 == 0) goto L16e
            com.mbridge.msdk.reward.a.a$c r7 = r6.n     // Catch: java.lang.Exception -> L1da
            if (r7 == 0) goto L16e
            com.mbridge.msdk.reward.a.a$c r7 = r6.n     // Catch: java.lang.Exception -> L1da
            int r7 = com.mbridge.msdk.reward.a.a.c.a(r7)     // Catch: java.lang.Exception -> L1da
            if (r7 == r2) goto L16e
            com.mbridge.msdk.reward.a.a$c r7 = r6.n     // Catch: java.lang.Exception -> L1da
            int r7 = com.mbridge.msdk.reward.a.a.c.a(r7)     // Catch: java.lang.Exception -> L1da
            if (r7 == r0) goto L16e
            java.lang.String r7 = ""
            r6.a(r3, r7)     // Catch: java.lang.Exception -> L1da
        L16e:
            r6.J = r3     // Catch: java.lang.Exception -> L1da
            return
        L171:
            java.lang.String r8 = r6.o     // Catch: java.lang.Exception -> L1da
            boolean r8 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> L1da
            if (r8 == 0) goto L17f
            java.lang.String r8 = com.mbridge.msdk.foundation.tools.v.E()     // Catch: java.lang.Exception -> L1da
            r6.o = r8     // Catch: java.lang.Exception -> L1da
        L17f:
            java.text.SimpleDateFormat r8 = new java.text.SimpleDateFormat     // Catch: java.lang.Exception -> L1d3
            java.lang.String r9 = "dd"
            r8.<init>(r9)     // Catch: java.lang.Exception -> L1d3
            java.util.Date r9 = new java.util.Date     // Catch: java.lang.Exception -> L1d3
            r9.<init>()     // Catch: java.lang.Exception -> L1d3
            java.lang.String r8 = r8.format(r9)     // Catch: java.lang.Exception -> L1d3
            android.content.Context r9 = r6.h     // Catch: java.lang.Exception -> L1d3
            java.lang.String r4 = "reward_date"
            java.lang.String r5 = "0"
            java.lang.Object r9 = com.mbridge.msdk.foundation.tools.ag.b(r9, r4, r5)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r9 = (java.lang.String) r9     // Catch: java.lang.Exception -> L1d3
            boolean r4 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> L1d3
            if (r4 != 0) goto L1d3
            boolean r4 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> L1d3
            if (r4 != 0) goto L1d3
            boolean r9 = r9.equals(r8)     // Catch: java.lang.Exception -> L1d3
            if (r9 != 0) goto L1d3
            android.content.Context r9 = r6.h     // Catch: java.lang.Exception -> L1d3
            java.lang.String r4 = "reward_date"
            com.mbridge.msdk.foundation.tools.ag.a(r9, r4, r8)     // Catch: java.lang.Exception -> L1d3
            android.content.Context r8 = r6.h     // Catch: java.lang.Exception -> L1d3
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1d3
            r9.<init>()     // Catch: java.lang.Exception -> L1d3
            java.lang.String r4 = r6.s     // Catch: java.lang.Exception -> L1d3
            r9.append(r4)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r4 = "_"
            r9.append(r4)     // Catch: java.lang.Exception -> L1d3
            r9.append(r2)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L1d3
            java.lang.Integer r4 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Exception -> L1d3
            com.mbridge.msdk.foundation.tools.ag.a(r8, r9, r4)     // Catch: java.lang.Exception -> L1d3
        L1d3:
            r6.d(r7)     // Catch: java.lang.Exception -> L1da
            goto L22a
        L1d7:
            r7 = move-exception
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L1d7
            throw r7     // Catch: java.lang.Exception -> L1da
        L1da:
            r7 = move-exception
            boolean r8 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r8 == 0) goto L1e8
            java.lang.String r8 = r7.getLocalizedMessage()
            java.lang.String r9 = "RewardVideoController"
            com.mbridge.msdk.foundation.tools.z.d(r9, r8)
        L1e8:
            com.mbridge.msdk.videocommon.listener.InterVideoOutListener r8 = r6.m
            if (r8 == 0) goto L1fd
            com.mbridge.msdk.videocommon.listener.InterVideoOutListener r8 = r6.m     // Catch: java.lang.Exception -> L1f6
            com.mbridge.msdk.out.MBridgeIds r9 = r6.q     // Catch: java.lang.Exception -> L1f6
            java.lang.String r4 = "show exception"
            r8.onShowFail(r9, r4)     // Catch: java.lang.Exception -> L1f6
            goto L1fd
        L1f6:
            boolean r8 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r8 == 0) goto L1fd
            r7.printStackTrace()
        L1fd:
            boolean r7 = r6.A
            if (r7 != 0) goto L228
            boolean r7 = r6.B
            if (r7 != 0) goto L228
            com.mbridge.msdk.videocommon.d.c r7 = r6.k
            if (r7 == 0) goto L228
            boolean r7 = r7.v(r1)
            if (r7 == 0) goto L228
            com.mbridge.msdk.reward.a.a$c r7 = r6.n
            if (r7 == 0) goto L228
            com.mbridge.msdk.reward.a.a$c r7 = r6.n
            int r7 = com.mbridge.msdk.reward.a.a.c.a(r7)
            if (r7 == r2) goto L228
            com.mbridge.msdk.reward.a.a$c r7 = r6.n
            int r7 = com.mbridge.msdk.reward.a.a.c.a(r7)
            if (r7 == r0) goto L228
            java.lang.String r7 = ""
            r6.a(r3, r7)
        L228:
            r6.J = r3
        L22a:
            return
    }

    public final void a(java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L22
            android.content.Context r0 = r3.h
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "MBridge_ConfirmTitle"
            r1.append(r2)
            java.lang.String r2 = r3.p
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r4 = r4.trim()
            com.mbridge.msdk.foundation.tools.ag.a(r0, r1, r4)
        L22:
            boolean r4 = android.text.TextUtils.isEmpty(r5)
            if (r4 != 0) goto L44
            android.content.Context r4 = r3.h
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "MBridge_ConfirmContent"
            r0.append(r1)
            java.lang.String r1 = r3.p
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r5 = r5.trim()
            com.mbridge.msdk.foundation.tools.ag.a(r4, r0, r5)
        L44:
            boolean r4 = android.text.TextUtils.isEmpty(r7)
            if (r4 != 0) goto L66
            android.content.Context r4 = r3.h
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "MBridge_CancelText"
            r5.append(r0)
            java.lang.String r0 = r3.p
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            java.lang.String r7 = r7.trim()
            com.mbridge.msdk.foundation.tools.ag.a(r4, r5, r7)
        L66:
            boolean r4 = android.text.TextUtils.isEmpty(r6)
            if (r4 != 0) goto L88
            android.content.Context r4 = r3.h
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r7 = "MBridge_ConfirmText"
            r5.append(r7)
            java.lang.String r7 = r3.p
            r5.append(r7)
            java.lang.String r5 = r5.toString()
            java.lang.String r6 = r6.trim()
            com.mbridge.msdk.foundation.tools.ag.a(r4, r5, r6)
        L88:
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.A = r1
            return
    }

    public final void a(boolean r18, java.lang.String r19) {
            r17 = this;
            r1 = r17
            r2 = r18
            java.lang.String r3 = "load exception"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = "发起一次 load： isDevCall "
            r0.append(r4)
            r0.append(r2)
            java.lang.String r4 = " "
            r0.append(r4)
            r4 = r19
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r5 = "RewardVideoController"
            com.mbridge.msdk.foundation.tools.z.a(r5, r0)
            com.mbridge.msdk.reward.a.a$c r0 = r1.n
            r6 = 1
            if (r0 == 0) goto L6c
            com.mbridge.msdk.reward.a.a$c r0 = r1.n
            int r0 = com.mbridge.msdk.reward.a.a.c.a(r0)
            if (r0 != r6) goto L6c
            boolean r0 = r1.E
            if (r0 == 0) goto L5c
            if (r2 == 0) goto L56
            java.lang.String r0 = "本地存在由开发者发起的load，此次 load 也是开发者发起的，回调 CURRENT_UNIT_IS_LOADING"
            com.mbridge.msdk.foundation.tools.z.a(r5, r0)
            android.content.Context r6 = r1.h
            r7 = 0
            java.lang.String r9 = r1.p
            boolean r10 = r1.B
            java.lang.String r8 = "current unit is loading"
            java.lang.String r11 = ""
            java.lang.String r12 = ""
            com.mbridge.msdk.reward.b.a.b(r6, r7, r8, r9, r10, r11, r12)
            com.mbridge.msdk.reward.a.a$c r0 = r1.n
            java.lang.String r2 = "errorCode: 3501 errorMessage: current unit is loading"
            com.mbridge.msdk.reward.a.a.c.b(r0, r2)
            goto L6b
        L56:
            java.lang.String r0 = "本地存在由开发者发起的load，此次 load 是自动 load，不做任何处理"
            com.mbridge.msdk.foundation.tools.z.a(r5, r0)
            goto L6b
        L5c:
            if (r2 == 0) goto L66
            java.lang.String r0 = "本地存在由自动 load 发起的load，此次 load 是开发者发起的，将回调转移给开发者"
            com.mbridge.msdk.foundation.tools.z.a(r5, r0)
            r1.E = r2
            goto L6b
        L66:
            java.lang.String r0 = "本地存在由自动 load 发起的load，此次 load 是自动 load 发起的，不做任何处理"
            com.mbridge.msdk.foundation.tools.z.a(r5, r0)
        L6b:
            return
        L6c:
            com.mbridge.msdk.reward.a.a$c r0 = r1.n
            r7 = 0
            if (r0 == 0) goto L7d
            com.mbridge.msdk.reward.a.a$c r0 = r1.n
            int r0 = com.mbridge.msdk.reward.a.a.c.a(r0)
            r8 = 3
            if (r0 != r8) goto L7d
            r1.P = r7
            goto L84
        L7d:
            r1.P = r6
            com.mbridge.msdk.reward.a.a$c r0 = r1.n
            com.mbridge.msdk.reward.a.a.c.a(r0, r6)
        L84:
            r1.E = r2
            android.os.Handler r0 = r1.v
            r6 = 1001001(0xf4629, float:1.402701E-39)
            r0.removeMessages(r6)
            r1.S = r7
            r1.R = r7
            r1.T = r7
            r1.U = r7
            r17.d()
            r17.c()
            com.mbridge.msdk.reward.adapter.c r0 = com.mbridge.msdk.reward.adapter.c.a()
            r0.b()
            boolean r0 = android.text.TextUtils.isEmpty(r19)     // Catch: java.lang.Exception -> L230
            if (r0 == 0) goto Lc4
            boolean r0 = r1.A     // Catch: java.lang.Exception -> L230
            if (r0 == 0) goto Lb9
            com.mbridge.msdk.e.b r0 = com.mbridge.msdk.e.b.getInstance()     // Catch: java.lang.Exception -> L230
            java.lang.String r6 = r1.s     // Catch: java.lang.Exception -> L230
            java.lang.String r8 = r1.p     // Catch: java.lang.Exception -> L230
            r0.addInterstitialList(r6, r8)     // Catch: java.lang.Exception -> L230
            goto Lc4
        Lb9:
            com.mbridge.msdk.e.b r0 = com.mbridge.msdk.e.b.getInstance()     // Catch: java.lang.Exception -> L230
            java.lang.String r6 = r1.s     // Catch: java.lang.Exception -> L230
            java.lang.String r8 = r1.p     // Catch: java.lang.Exception -> L230
            r0.addRewardList(r6, r8)     // Catch: java.lang.Exception -> L230
        Lc4:
            boolean r0 = r1.B     // Catch: java.lang.Exception -> L230
            if (r0 == 0) goto Lfe
            boolean r0 = android.text.TextUtils.isEmpty(r19)     // Catch: java.lang.Exception -> L230
            if (r0 == 0) goto Lfe
            com.mbridge.msdk.reward.a.a$c r0 = r1.n     // Catch: java.lang.Exception -> L230
            if (r0 == 0) goto Lfd
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.W     // Catch: java.lang.Exception -> L230
            if (r0 == 0) goto Lf6
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.W     // Catch: java.lang.Exception -> L230
            int r0 = r0.size()     // Catch: java.lang.Exception -> L230
            if (r0 <= 0) goto Lf6
            android.content.Context r8 = r1.h     // Catch: java.lang.Exception -> L230
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.W     // Catch: java.lang.Exception -> L230
            java.lang.Object r0 = r0.get(r7)     // Catch: java.lang.Exception -> L230
            r9 = r0
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = (com.mbridge.msdk.foundation.entity.CampaignEx) r9     // Catch: java.lang.Exception -> L230
            java.lang.String r10 = "bidToken is empty"
            java.lang.String r11 = r1.p     // Catch: java.lang.Exception -> L230
            boolean r12 = r1.B     // Catch: java.lang.Exception -> L230
            java.lang.String r13 = ""
            java.lang.String r14 = ""
            com.mbridge.msdk.reward.b.a.b(r8, r9, r10, r11, r12, r13, r14)     // Catch: java.lang.Exception -> L230
        Lf6:
            com.mbridge.msdk.reward.a.a$c r0 = r1.n     // Catch: java.lang.Exception -> L230
            java.lang.String r2 = "bidToken is empty"
            com.mbridge.msdk.reward.a.a.c.c(r0, r2)     // Catch: java.lang.Exception -> L230
        Lfd:
            return
        Lfe:
            java.util.Map<java.lang.String, java.lang.String> r0 = com.mbridge.msdk.system.a.a     // Catch: java.lang.Exception -> L230
            if (r0 != 0) goto L137
            com.mbridge.msdk.reward.a.a$c r0 = r1.n     // Catch: java.lang.Exception -> L230
            if (r0 == 0) goto L136
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.W     // Catch: java.lang.Exception -> L230
            if (r0 == 0) goto L12a
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.W     // Catch: java.lang.Exception -> L230
            int r0 = r0.size()     // Catch: java.lang.Exception -> L230
            if (r0 <= 0) goto L12a
            android.content.Context r8 = r1.h     // Catch: java.lang.Exception -> L230
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.W     // Catch: java.lang.Exception -> L230
            java.lang.Object r0 = r0.get(r7)     // Catch: java.lang.Exception -> L230
            r9 = r0
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = (com.mbridge.msdk.foundation.entity.CampaignEx) r9     // Catch: java.lang.Exception -> L230
            java.lang.String r10 = "init error"
            java.lang.String r11 = r1.p     // Catch: java.lang.Exception -> L230
            boolean r12 = r1.B     // Catch: java.lang.Exception -> L230
            java.lang.String r13 = ""
            java.lang.String r14 = ""
            com.mbridge.msdk.reward.b.a.b(r8, r9, r10, r11, r12, r13, r14)     // Catch: java.lang.Exception -> L230
        L12a:
            com.mbridge.msdk.reward.a.a$c r0 = r1.n     // Catch: java.lang.Exception -> L230
            java.lang.String r2 = "init error"
            com.mbridge.msdk.reward.a.a.c.c(r0, r2)     // Catch: java.lang.Exception -> L230
            java.lang.String r0 = "SDK 初始化错误"
            com.mbridge.msdk.foundation.tools.z.a(r5, r0)     // Catch: java.lang.Exception -> L230
        L136:
            return
        L137:
            com.mbridge.msdk.videocommon.d.b r0 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> L230
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L230
            java.lang.String r6 = r6.k()     // Catch: java.lang.Exception -> L230
            java.lang.String r8 = r1.p     // Catch: java.lang.Exception -> L230
            com.mbridge.msdk.videocommon.d.c r0 = r0.a(r6, r8)     // Catch: java.lang.Exception -> L230
            r1.k = r0     // Catch: java.lang.Exception -> L230
            if (r0 != 0) goto L18a
            java.lang.String r0 = "当前 RewardUnitSetting 为空，请求新的配置信息"
            com.mbridge.msdk.foundation.tools.z.a(r5, r0)     // Catch: java.lang.Exception -> L230
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L230
            java.lang.String r0 = r0.k()     // Catch: java.lang.Exception -> L230
            r1.N = r0     // Catch: java.lang.Exception -> L230
            com.mbridge.msdk.videocommon.d.b r0 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> L230
            java.lang.String r6 = r1.N     // Catch: java.lang.Exception -> L230
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L230
            java.lang.String r8 = r8.l()     // Catch: java.lang.Exception -> L230
            java.lang.String r9 = r1.p     // Catch: java.lang.Exception -> L230
            com.mbridge.msdk.reward.a.a$3 r10 = new com.mbridge.msdk.reward.a.a$3     // Catch: java.lang.Exception -> L230
            r10.<init>(r1)     // Catch: java.lang.Exception -> L230
            r0.a(r6, r8, r9, r10)     // Catch: java.lang.Exception -> L230
            com.mbridge.msdk.videocommon.d.b r0 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> L230
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L230
            java.lang.String r6 = r6.k()     // Catch: java.lang.Exception -> L230
            java.lang.String r8 = r1.p     // Catch: java.lang.Exception -> L230
            boolean r9 = r1.A     // Catch: java.lang.Exception -> L230
            com.mbridge.msdk.videocommon.d.c r0 = r0.a(r6, r8, r9)     // Catch: java.lang.Exception -> L230
            r1.k = r0     // Catch: java.lang.Exception -> L230
        L18a:
            java.lang.String r0 = r1.s     // Catch: java.lang.Exception -> L230
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L230
            if (r0 != 0) goto L199
            com.mbridge.msdk.videocommon.d.c r0 = r1.k     // Catch: java.lang.Exception -> L230
            java.lang.String r6 = r1.s     // Catch: java.lang.Exception -> L230
            r0.b(r6)     // Catch: java.lang.Exception -> L230
        L199:
            com.mbridge.msdk.videocommon.d.c r0 = r1.k     // Catch: java.lang.Exception -> L230
            int r0 = r0.H()     // Catch: java.lang.Exception -> L230
            int r0 = r0 * 1000
            android.os.Handler r6 = r1.v     // Catch: java.lang.Exception -> L230
            if (r6 == 0) goto L1c7
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L230
            r6.<init>()     // Catch: java.lang.Exception -> L230
            java.lang.String r8 = "start load timeout for "
            r6.append(r8)     // Catch: java.lang.Exception -> L230
            r6.append(r0)     // Catch: java.lang.Exception -> L230
            java.lang.String r8 = " ms"
            r6.append(r8)     // Catch: java.lang.Exception -> L230
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L230
            com.mbridge.msdk.foundation.tools.z.a(r5, r6)     // Catch: java.lang.Exception -> L230
            android.os.Handler r6 = r1.v     // Catch: java.lang.Exception -> L230
            r8 = 1001002(0xf462a, float:1.402703E-39)
            long r9 = (long) r0     // Catch: java.lang.Exception -> L230
            r6.sendEmptyMessageDelayed(r8, r9)     // Catch: java.lang.Exception -> L230
        L1c7:
            com.mbridge.msdk.videocommon.d.c r0 = r1.k     // Catch: java.lang.Exception -> L230
            java.util.Queue r0 = r0.F()     // Catch: java.lang.Exception -> L230
            r1.M = r0     // Catch: java.lang.Exception -> L230
            boolean r0 = r17.f()     // Catch: java.lang.Exception -> L1de
            if (r0 == 0) goto L1e6
            java.lang.String r0 = "当前 cap 全满，清除所有的 cap"
            com.mbridge.msdk.foundation.tools.z.a(r5, r0)     // Catch: java.lang.Exception -> L1de
            r17.e()     // Catch: java.lang.Exception -> L1de
            goto L1e6
        L1de:
            r0 = move-exception
            boolean r5 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> L230
            if (r5 == 0) goto L1e6
            r0.printStackTrace()     // Catch: java.lang.Exception -> L230
        L1e6:
            r17.b(r18, r19)     // Catch: java.lang.Exception -> L1eb
            goto L276
        L1eb:
            r0 = move-exception
            r2 = r0
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.W     // Catch: java.lang.Exception -> L226
            if (r0 == 0) goto L226
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.W     // Catch: java.lang.Exception -> L226
            int r0 = r0.size()     // Catch: java.lang.Exception -> L226
            if (r0 <= 0) goto L226
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.W     // Catch: java.lang.Exception -> L226
            java.lang.Object r0 = r0.get(r7)     // Catch: java.lang.Exception -> L226
            r8 = r0
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = (com.mbridge.msdk.foundation.entity.CampaignEx) r8     // Catch: java.lang.Exception -> L226
            android.content.Context r9 = r1.h     // Catch: java.lang.Exception -> L226
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L226
            r0.<init>()     // Catch: java.lang.Exception -> L226
            java.lang.String r4 = "load exception: "
            r0.append(r4)     // Catch: java.lang.Exception -> L226
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Exception -> L226
            r0.append(r2)     // Catch: java.lang.Exception -> L226
            java.lang.String r10 = r0.toString()     // Catch: java.lang.Exception -> L226
            java.lang.String r11 = r1.p     // Catch: java.lang.Exception -> L226
            boolean r12 = r1.B     // Catch: java.lang.Exception -> L226
            java.lang.String r13 = ""
            java.lang.String r14 = ""
            r15 = 0
            com.mbridge.msdk.reward.b.a.a(r8, r9, r10, r11, r12, r13, r14, r15)     // Catch: java.lang.Exception -> L226
        L226:
            com.mbridge.msdk.reward.a.a$c r0 = r1.n     // Catch: java.lang.Exception -> L230
            if (r0 == 0) goto L276
            com.mbridge.msdk.reward.a.a$c r0 = r1.n     // Catch: java.lang.Exception -> L230
            com.mbridge.msdk.reward.a.a.c.a(r0, r3)     // Catch: java.lang.Exception -> L230
            goto L276
        L230:
            r0 = move-exception
            com.mbridge.msdk.reward.a.a$c r2 = r1.n
            if (r2 == 0) goto L26f
            com.mbridge.msdk.reward.a.a$c r2 = r1.n
            com.mbridge.msdk.reward.a.a.c.a(r2, r3)
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r1.W
            if (r2 == 0) goto L26f
            int r2 = r2.size()
            if (r2 <= 0) goto L26f
            android.content.Context r8 = r1.h
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r1.W
            java.lang.Object r2 = r2.get(r7)
            r9 = r2
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = (com.mbridge.msdk.foundation.entity.CampaignEx) r9
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "load exception "
            r2.append(r3)
            java.lang.String r3 = r0.getMessage()
            r2.append(r3)
            java.lang.String r10 = r2.toString()
            java.lang.String r11 = r1.p
            boolean r12 = r1.B
            java.lang.String r13 = ""
            java.lang.String r14 = ""
            com.mbridge.msdk.reward.b.a.b(r8, r9, r10, r11, r12, r13, r14)
        L26f:
            boolean r2 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r2 == 0) goto L276
            r0.printStackTrace()
        L276:
            return
    }

    public final java.lang.String b() {
            r2 = this;
            com.mbridge.msdk.reward.adapter.d r0 = r2.j
            if (r0 == 0) goto Lb
            boolean r1 = r2.H
            java.lang.String r0 = r0.c(r1)
            return r0
        Lb:
            java.lang.String r0 = ""
            return r0
    }

    public final void b(java.lang.String r8, java.lang.String r9) {
            r7 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L92
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L92
            r7.h = r0     // Catch: java.lang.Throwable -> L92
            r7.p = r9     // Catch: java.lang.Throwable -> L92
            r7.s = r8     // Catch: java.lang.Throwable -> L92
            com.mbridge.msdk.out.MBridgeIds r8 = new com.mbridge.msdk.out.MBridgeIds     // Catch: java.lang.Throwable -> L92
            java.lang.String r9 = r7.s     // Catch: java.lang.Throwable -> L92
            java.lang.String r0 = r7.p     // Catch: java.lang.Throwable -> L92
            r8.<init>(r9, r0)     // Catch: java.lang.Throwable -> L92
            r7.q = r8     // Catch: java.lang.Throwable -> L92
            com.mbridge.msdk.videocommon.d.b r8 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Throwable -> L92
            com.mbridge.msdk.videocommon.d.a r8 = r8.b()     // Catch: java.lang.Throwable -> L92
            r7.l = r8     // Catch: java.lang.Throwable -> L92
            com.mbridge.msdk.reward.a.a$2 r8 = new com.mbridge.msdk.reward.a.a$2     // Catch: java.lang.Throwable -> L92
            r8.<init>(r7)     // Catch: java.lang.Throwable -> L92
            java.util.concurrent.ThreadPoolExecutor r9 = com.mbridge.msdk.foundation.same.f.b.b()     // Catch: java.lang.Throwable -> L92
            r9.execute(r8)     // Catch: java.lang.Throwable -> L92
            com.mbridge.msdk.foundation.tools.x.b()     // Catch: java.lang.Throwable -> L92
            com.mbridge.msdk.foundation.download.download.ResourceManager r8 = com.mbridge.msdk.foundation.download.download.ResourceManager.getinstance()     // Catch: java.lang.Throwable -> L92
            r8.cleanZipRes()     // Catch: java.lang.Throwable -> L92
            com.mbridge.msdk.foundation.download.download.HTMLResourceManager r8 = com.mbridge.msdk.foundation.download.download.HTMLResourceManager.getInstance()     // Catch: java.lang.Throwable -> L92
            r8.cleanHtmlRes()     // Catch: java.lang.Throwable -> L92
            com.mbridge.msdk.videocommon.d.b r8 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Throwable -> L92
            java.lang.String r9 = r7.p     // Catch: java.lang.Throwable -> L92
            r8.b(r9)     // Catch: java.lang.Throwable -> L92
            com.mbridge.msdk.foundation.tools.ab r8 = com.mbridge.msdk.foundation.tools.ab.a()     // Catch: java.lang.Throwable -> L92
            java.lang.String r9 = "c_d_v_w_i"
            r0 = 0
            boolean r8 = r8.a(r9, r0)     // Catch: java.lang.Throwable -> L92
            if (r8 != 0) goto L7f
            java.lang.String r8 = r7.p     // Catch: java.lang.Throwable -> L92
            boolean r8 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L92
            if (r8 != 0) goto L7f
            com.mbridge.msdk.videocommon.a.a r8 = com.mbridge.msdk.videocommon.a.a.a()     // Catch: java.lang.Throwable -> L92
            java.lang.String r9 = r7.p     // Catch: java.lang.Throwable -> L92
            r0 = 1
            java.util.concurrent.CopyOnWriteArrayList r4 = r8.a(r9, r0)     // Catch: java.lang.Throwable -> L92
            if (r4 == 0) goto L7f
            int r8 = r4.size()     // Catch: java.lang.Throwable -> L92
            if (r8 <= 0) goto L7f
            com.mbridge.msdk.videocommon.download.b r1 = com.mbridge.msdk.videocommon.download.b.getInstance()     // Catch: java.lang.Throwable -> L92
            android.content.Context r2 = r7.h     // Catch: java.lang.Throwable -> L92
            java.lang.String r3 = r7.p     // Catch: java.lang.Throwable -> L92
            r5 = 94
            r6 = 0
            r1.createUnitCache(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L92
        L7f:
            com.mbridge.msdk.foundation.db.i r8 = r7.O     // Catch: java.lang.Throwable -> L92
            if (r8 != 0) goto L9c
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L92
            android.content.Context r8 = r8.j()     // Catch: java.lang.Throwable -> L92
            com.mbridge.msdk.foundation.db.i r8 = com.mbridge.msdk.foundation.db.i.a(r8)     // Catch: java.lang.Throwable -> L92
            r7.O = r8     // Catch: java.lang.Throwable -> L92
            goto L9c
        L92:
            r8 = move-exception
            java.lang.String r9 = r8.getMessage()
            java.lang.String r0 = "RewardVideoController"
            com.mbridge.msdk.foundation.tools.z.c(r0, r9, r8)
        L9c:
            return
    }

    public final void b(boolean r1) {
            r0 = this;
            r0.B = r1
            return
    }

    public final void c(boolean r1) {
            r0 = this;
            r0.F = r1
            return
    }

    public final void d(boolean r2) {
            r1 = this;
            java.lang.String r0 = ""
            r1.a(r2, r0)
            return
    }

    public final boolean e(boolean r3) {
            r2 = this;
            r3 = 0
            boolean r0 = r2.j()     // Catch: java.lang.Throwable -> L22
            if (r0 != 0) goto L2a
            boolean r0 = r2.B     // Catch: java.lang.Throwable -> L22
            if (r0 == 0) goto L10
            boolean r3 = r2.g()     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L2a
            goto L2a
        L10:
            com.mbridge.msdk.reward.adapter.d r0 = r2.j     // Catch: java.lang.Throwable -> L22
            if (r0 != 0) goto L17
            r2.i()     // Catch: java.lang.Throwable -> L22
        L17:
            com.mbridge.msdk.reward.adapter.d r0 = r2.j     // Catch: java.lang.Throwable -> L22
            if (r0 == 0) goto L2a
            com.mbridge.msdk.reward.adapter.d r0 = r2.j     // Catch: java.lang.Throwable -> L22
            boolean r3 = r0.b()     // Catch: java.lang.Throwable -> L22
            goto L2a
        L22:
            r0 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L2a
            r0.printStackTrace()
        L2a:
            return r3
    }
}
