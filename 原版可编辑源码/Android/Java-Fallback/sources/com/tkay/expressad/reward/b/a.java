package com.tkay.expressad.reward.b;

public class a implements com.tkay.core.common.a.g {
    private static final int A = 9;
    private static final int E = 16;
    private static final int F = 18;
    private static final int G = 17;
    private static final int H = 1001001;
    private static final int I = 1001002;
    private static java.util.Map<java.lang.String, java.lang.Integer> T = null;
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> U = null;
    public static final int a = 1;
    public static java.lang.String b = null;
    public static java.util.Map<java.lang.String, com.tkay.expressad.reward.b.a.d> c = null;
    private static final java.lang.String i = "RewardVideoController";
    private static final int j = 8;
    private static final int z = 8;
    private int B;
    private int C;
    private int D;
    private boolean J;
    private boolean K;
    private boolean L;
    private boolean M;
    private boolean N;
    private boolean O;
    private java.util.ArrayList<java.lang.Integer> P;
    private boolean Q;
    private volatile boolean R;
    private final java.lang.Object S;
    private java.util.Queue<java.lang.Integer> V;
    private java.lang.String W;
    private com.tkay.expressad.foundation.c.c X;
    private volatile boolean Y;
    private volatile boolean Z;
    private volatile boolean aa;
    private volatile boolean ab;
    private volatile boolean ac;
    private volatile boolean ad;
    private volatile boolean ae;
    private java.util.List<com.tkay.expressad.foundation.d.c> af;
    private java.util.List<com.tkay.expressad.foundation.d.c> ag;
    volatile boolean d;
    volatile boolean e;
    volatile boolean f;
    volatile boolean g;
    volatile boolean h;
    private android.content.Context k;
    private int l;
    private com.tkay.expressad.reward.a.d m;
    private com.tkay.expressad.videocommon.e.d n;
    private com.tkay.expressad.videocommon.e.a o;
    private volatile com.tkay.expressad.videocommon.d.a p;
    private volatile com.tkay.expressad.reward.b.a.c q;
    private java.lang.String r;
    private java.lang.String s;
    private volatile java.lang.String t;
    private java.lang.String u;
    private java.lang.String v;
    private int w;
    private android.os.Handler x;
    private int y;


    public class a implements java.lang.Runnable {
        final com.tkay.expressad.reward.b.a a;
        private com.tkay.expressad.reward.a.a b;
        private int c;
        private boolean d;

        public a(com.tkay.expressad.reward.b.a r1, com.tkay.expressad.reward.a.a r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                r1 = 1
                r0.c = r1
                r0.d = r1
                return
        }

        @Override
        public final void run() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "adSource="
                r0.<init>(r1)
                int r1 = r2.c
                r0.append(r1)
                java.lang.String r1 = " CommonCancelTimeTask mIsDevCall:"
                r0.append(r1)
                boolean r1 = r2.d
                r0.append(r1)
                com.tkay.expressad.reward.b.a r0 = r2.a
                java.lang.String r1 = "v3 is timeout"
                com.tkay.expressad.reward.b.a.a(r0, r1)
                return
        }
    }

    public class b implements com.tkay.expressad.reward.a.b {
        final com.tkay.expressad.reward.b.a a;
        private com.tkay.expressad.reward.a.a b;
        private boolean c;
        private java.lang.Runnable d;

        public b(com.tkay.expressad.reward.b.a r1, com.tkay.expressad.reward.a.a r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                r1 = 1
                r0.c = r1
                return
        }

        private java.lang.Runnable c() {
                r1 = this;
                java.lang.Runnable r0 = r1.d
                return r0
        }

        @Override
        public final void a() {
                r3 = this;
                java.lang.Runnable r0 = r3.d
                if (r0 == 0) goto Lf
                com.tkay.expressad.reward.b.a r0 = r3.a
                android.os.Handler r0 = com.tkay.expressad.reward.b.a.w(r0)
                java.lang.Runnable r1 = r3.d
                r0.removeCallbacks(r1)
            Lf:
                com.tkay.expressad.reward.b.a r0 = r3.a
                com.tkay.expressad.reward.b.a$c r0 = com.tkay.expressad.reward.b.a.d(r0)
                if (r0 == 0) goto L2c
                com.tkay.expressad.reward.b.a r0 = r3.a
                com.tkay.expressad.reward.b.a$c r0 = com.tkay.expressad.reward.b.a.d(r0)
                com.tkay.expressad.reward.b.a r1 = r3.a
                java.lang.String r1 = com.tkay.expressad.reward.b.a.f(r1)
                com.tkay.expressad.reward.b.a r2 = r3.a
                java.lang.String r2 = com.tkay.expressad.reward.b.a.g(r2)
                com.tkay.expressad.reward.b.a.c.a(r0, r1, r2)
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
                com.tkay.expressad.reward.b.a r0 = r2.a
                android.os.Handler r0 = com.tkay.expressad.reward.b.a.w(r0)
                java.lang.Runnable r1 = r2.d
                r0.removeCallbacks(r1)
            Lf:
                com.tkay.expressad.reward.a.a r0 = r2.b
                if (r0 == 0) goto L19
                r1 = 0
                r0.a(r1)
                r2.b = r1
            L19:
                com.tkay.expressad.reward.b.a r0 = r2.a
                com.tkay.expressad.reward.b.a$c r0 = com.tkay.expressad.reward.b.a.d(r0)
                if (r0 == 0) goto L2a
                com.tkay.expressad.reward.b.a r0 = r2.a
                com.tkay.expressad.reward.b.a$c r0 = com.tkay.expressad.reward.b.a.d(r0)
                com.tkay.expressad.reward.b.a.c.a(r0, r3)
            L2a:
                return
        }

        @Override
        public final void b() {
                r3 = this;
                java.lang.Runnable r0 = r3.d
                if (r0 == 0) goto Lf
                com.tkay.expressad.reward.b.a r0 = r3.a
                android.os.Handler r0 = com.tkay.expressad.reward.b.a.w(r0)
                java.lang.Runnable r1 = r3.d
                r0.removeCallbacks(r1)
            Lf:
                com.tkay.expressad.reward.b.a r0 = r3.a
                com.tkay.expressad.reward.b.a$c r0 = com.tkay.expressad.reward.b.a.d(r0)
                if (r0 == 0) goto L2c
                com.tkay.expressad.reward.b.a r0 = r3.a
                com.tkay.expressad.reward.b.a$c r0 = com.tkay.expressad.reward.b.a.d(r0)
                com.tkay.expressad.reward.b.a r1 = r3.a
                java.lang.String r1 = com.tkay.expressad.reward.b.a.f(r1)
                com.tkay.expressad.reward.b.a r2 = r3.a
                java.lang.String r2 = com.tkay.expressad.reward.b.a.g(r2)
                com.tkay.expressad.reward.b.a.c.c(r0, r1, r2)
            L2c:
                return
        }
    }

    private final class c {
        private static final java.lang.String b = "RewardVideoController_Listener";
        private static final int d = 0;
        private static final int e = 1;
        private static final int f = 2;
        private static final int g = 3;
        final com.tkay.expressad.reward.b.a a;
        private java.lang.ref.WeakReference<com.tkay.expressad.videocommon.d.a> c;
        private volatile java.util.concurrent.atomic.AtomicInteger h;
        private android.os.Handler i;
        private java.lang.String j;
        private java.util.List<com.tkay.expressad.foundation.d.c> k;
        private boolean l;

        private c(com.tkay.expressad.reward.b.a r1, com.tkay.expressad.videocommon.d.a r2, android.os.Handler r3, java.lang.String r4) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
                r1.<init>(r2)
                r0.c = r1
                java.util.concurrent.atomic.AtomicInteger r1 = new java.util.concurrent.atomic.AtomicInteger
                r2 = 0
                r1.<init>(r2)
                r0.h = r1
                r0.i = r3
                r0.j = r4
                return
        }

        c(com.tkay.expressad.reward.b.a r1, com.tkay.expressad.videocommon.d.a r2, android.os.Handler r3, java.lang.String r4, byte r5) {
                r0 = this;
                r0.<init>(r1, r2, r3, r4)
                return
        }

        private int a() {
                r1 = this;
                java.util.concurrent.atomic.AtomicInteger r0 = r1.h
                int r0 = r0.get()
                return r0
        }

        static int a(com.tkay.expressad.reward.b.a.c r0) {
                java.util.concurrent.atomic.AtomicInteger r0 = r0.h
                int r0 = r0.get()
                return r0
        }

        private void a(int r2) {
                r1 = this;
                java.util.concurrent.atomic.AtomicInteger r0 = r1.h
                r0.set(r2)
                return
        }

        private void a(com.tkay.expressad.foundation.d.c r2) {
                r1 = this;
                java.lang.ref.WeakReference<com.tkay.expressad.videocommon.d.a> r0 = r1.c
                if (r0 == 0) goto Lf
                java.lang.Object r0 = r0.get()
                com.tkay.expressad.videocommon.d.a r0 = (com.tkay.expressad.videocommon.d.a) r0
                if (r0 == 0) goto Lf
                r0.a(r2)
            Lf:
                return
        }

        static void a(com.tkay.expressad.reward.b.a.c r5, java.lang.String r6) {
                android.os.Handler r0 = r5.i
                if (r0 == 0) goto La
                r1 = 1001002(0xf462a, float:1.402703E-39)
                r0.removeMessages(r1)
            La:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "receive onVideoLoadFail,cur state: "
                r0.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r2 = r5.h
                int r2 = r2.get()
                r0.append(r2)
                java.lang.String r2 = " hasCalledVideoLoadFail: "
                r0.append(r2)
                com.tkay.expressad.reward.b.a r3 = r5.a
                boolean r3 = com.tkay.expressad.reward.b.a.r(r3)
                r0.append(r3)
                java.lang.String r3 = " "
                r0.append(r3)
                r0.append(r6)
                java.lang.ref.WeakReference<com.tkay.expressad.videocommon.d.a> r0 = r5.c
                if (r0 == 0) goto Lf1
                java.lang.Object r0 = r0.get()
                com.tkay.expressad.videocommon.d.a r0 = (com.tkay.expressad.videocommon.d.a) r0
                if (r0 == 0) goto Lf1
                java.util.concurrent.atomic.AtomicInteger r0 = r5.h
                int r0 = r0.get()
                r4 = 1
                if (r0 == r4) goto L4e
                java.util.concurrent.atomic.AtomicInteger r0 = r5.h
                int r0 = r0.get()
                r4 = 3
                if (r0 != r4) goto Lf1
            L4e:
                android.os.Handler r0 = r5.i
                if (r0 == 0) goto Lf1
                com.tkay.expressad.reward.b.a r0 = r5.a
                com.tkay.expressad.reward.b.a.s(r0)
                com.tkay.expressad.reward.b.a r0 = r5.a
                boolean r0 = com.tkay.expressad.reward.b.a.t(r0)
                if (r0 == 0) goto L67
                java.lang.String r0 = "resource load timeout"
                boolean r0 = r6.contains(r0)
                if (r0 == 0) goto L6c
            L67:
                com.tkay.expressad.reward.b.a r0 = r5.a
                com.tkay.expressad.reward.b.a.u(r0)
            L6c:
                com.tkay.expressad.reward.b.a r0 = r5.a
                boolean r0 = com.tkay.expressad.reward.b.a.p(r0)
                r4 = 2
                if (r0 == 0) goto L7a
                java.util.concurrent.atomic.AtomicInteger r0 = r5.h
                r0.set(r4)
            L7a:
                com.tkay.expressad.reward.b.a r0 = r5.a
                boolean r0 = com.tkay.expressad.reward.b.a.r(r0)
                if (r0 == 0) goto Lcc
                com.tkay.expressad.reward.b.a r0 = r5.a
                boolean r0 = com.tkay.expressad.reward.b.a.v(r0)
                if (r0 == 0) goto Lcc
                com.tkay.expressad.reward.b.a r0 = r5.a
                boolean r0 = com.tkay.expressad.reward.b.a.p(r0)
                if (r0 != 0) goto Lcc
                java.util.concurrent.atomic.AtomicInteger r0 = r5.h
                r0.set(r4)
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r1 = r5.h
                int r1 = r1.get()
                r0.append(r1)
                r0.append(r2)
                com.tkay.expressad.reward.b.a r1 = r5.a
                boolean r1 = com.tkay.expressad.reward.b.a.r(r1)
                r0.append(r1)
                r0.append(r3)
                r0.append(r6)
                java.lang.String r1 = " 响应"
                r0.append(r1)
                android.os.Message r0 = android.os.Message.obtain()
                r0.obj = r6
                r6 = 16
                r0.what = r6
                android.os.Handler r5 = r5.i
                r5.sendMessage(r0)
                return
            Lcc:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r1 = r5.h
                int r1 = r1.get()
                r0.append(r1)
                r0.append(r2)
                com.tkay.expressad.reward.b.a r5 = r5.a
                boolean r5 = com.tkay.expressad.reward.b.a.r(r5)
                r0.append(r5)
                r0.append(r3)
                r0.append(r6)
                java.lang.String r5 = " 无需响应"
                r0.append(r5)
            Lf1:
                return
        }

        static void a(com.tkay.expressad.reward.b.a.c r4, java.lang.String r5, java.lang.String r6) {
                android.os.Handler r0 = r4.i
                if (r0 == 0) goto La
                r1 = 1001002(0xf462a, float:1.402703E-39)
                r0.removeMessages(r1)
            La:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "receive onVideoLoadSuccess,cur state: "
                r0.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r2 = r4.h
                int r2 = r2.get()
                r0.append(r2)
                java.lang.String r2 = " hasCalledVideoLoadSuccess: "
                r0.append(r2)
                com.tkay.expressad.reward.b.a r3 = r4.a
                boolean r3 = com.tkay.expressad.reward.b.a.p(r3)
                r0.append(r3)
                java.lang.ref.WeakReference<com.tkay.expressad.videocommon.d.a> r0 = r4.c
                if (r0 == 0) goto Lbd
                java.lang.Object r0 = r0.get()
                com.tkay.expressad.videocommon.d.a r0 = (com.tkay.expressad.videocommon.d.a) r0
                if (r0 == 0) goto Lbd
                java.util.concurrent.atomic.AtomicInteger r0 = r4.h
                int r0 = r0.get()
                r3 = 1
                if (r0 == r3) goto L46
                java.util.concurrent.atomic.AtomicInteger r0 = r4.h
                int r0 = r0.get()
                r3 = 3
                if (r0 != r3) goto Lbd
            L46:
                android.os.Handler r0 = r4.i
                if (r0 == 0) goto Lbd
                java.util.concurrent.atomic.AtomicInteger r0 = r4.h
                r3 = 2
                r0.set(r3)
                com.tkay.expressad.reward.b.a r0 = r4.a
                boolean r0 = com.tkay.expressad.reward.b.a.p(r0)
                if (r0 != 0) goto L9e
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r1 = r4.h
                int r1 = r1.get()
                r0.append(r1)
                r0.append(r2)
                com.tkay.expressad.reward.b.a r1 = r4.a
                boolean r1 = com.tkay.expressad.reward.b.a.p(r1)
                r0.append(r1)
                java.lang.String r1 = " 响应"
                r0.append(r1)
                com.tkay.expressad.reward.b.a r0 = r4.a
                com.tkay.expressad.reward.b.a.q(r0)
                android.os.Message r0 = android.os.Message.obtain()
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r2 = com.tkay.expressad.b.y
                r1.putString(r2, r5)
                java.lang.String r5 = "unit_id"
                r1.putString(r5, r6)
                r0.setData(r1)
                r0.obj = r6
                r5 = 9
                r0.what = r5
                android.os.Handler r4 = r4.i
                r4.sendMessage(r0)
                return
            L9e:
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r6 = r4.h
                int r6 = r6.get()
                r5.append(r6)
                r5.append(r2)
                com.tkay.expressad.reward.b.a r4 = r4.a
                boolean r4 = com.tkay.expressad.reward.b.a.p(r4)
                r5.append(r4)
                java.lang.String r4 = " 无需响应"
                r5.append(r4)
            Lbd:
                return
        }

        private void a(java.lang.String r6) {
                r5 = this;
                android.os.Handler r0 = r5.i
                if (r0 == 0) goto La
                r1 = 1001002(0xf462a, float:1.402703E-39)
                r0.removeMessages(r1)
            La:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "receive onVideoLoadFail,cur state: "
                r0.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r2 = r5.h
                int r2 = r2.get()
                r0.append(r2)
                java.lang.String r2 = " hasCalledVideoLoadFail: "
                r0.append(r2)
                com.tkay.expressad.reward.b.a r3 = r5.a
                boolean r3 = com.tkay.expressad.reward.b.a.r(r3)
                r0.append(r3)
                java.lang.String r3 = " "
                r0.append(r3)
                r0.append(r6)
                java.lang.ref.WeakReference<com.tkay.expressad.videocommon.d.a> r0 = r5.c
                if (r0 == 0) goto Lf1
                java.lang.Object r0 = r0.get()
                com.tkay.expressad.videocommon.d.a r0 = (com.tkay.expressad.videocommon.d.a) r0
                if (r0 == 0) goto Lf1
                java.util.concurrent.atomic.AtomicInteger r0 = r5.h
                int r0 = r0.get()
                r4 = 1
                if (r0 == r4) goto L4e
                java.util.concurrent.atomic.AtomicInteger r0 = r5.h
                int r0 = r0.get()
                r4 = 3
                if (r0 != r4) goto Lf1
            L4e:
                android.os.Handler r0 = r5.i
                if (r0 == 0) goto Lf1
                com.tkay.expressad.reward.b.a r0 = r5.a
                com.tkay.expressad.reward.b.a.s(r0)
                com.tkay.expressad.reward.b.a r0 = r5.a
                boolean r0 = com.tkay.expressad.reward.b.a.t(r0)
                if (r0 == 0) goto L67
                java.lang.String r0 = "resource load timeout"
                boolean r0 = r6.contains(r0)
                if (r0 == 0) goto L6c
            L67:
                com.tkay.expressad.reward.b.a r0 = r5.a
                com.tkay.expressad.reward.b.a.u(r0)
            L6c:
                com.tkay.expressad.reward.b.a r0 = r5.a
                boolean r0 = com.tkay.expressad.reward.b.a.p(r0)
                r4 = 2
                if (r0 == 0) goto L7a
                java.util.concurrent.atomic.AtomicInteger r0 = r5.h
                r0.set(r4)
            L7a:
                com.tkay.expressad.reward.b.a r0 = r5.a
                boolean r0 = com.tkay.expressad.reward.b.a.r(r0)
                if (r0 == 0) goto Lcc
                com.tkay.expressad.reward.b.a r0 = r5.a
                boolean r0 = com.tkay.expressad.reward.b.a.v(r0)
                if (r0 == 0) goto Lcc
                com.tkay.expressad.reward.b.a r0 = r5.a
                boolean r0 = com.tkay.expressad.reward.b.a.p(r0)
                if (r0 != 0) goto Lcc
                java.util.concurrent.atomic.AtomicInteger r0 = r5.h
                r0.set(r4)
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r1 = r5.h
                int r1 = r1.get()
                r0.append(r1)
                r0.append(r2)
                com.tkay.expressad.reward.b.a r1 = r5.a
                boolean r1 = com.tkay.expressad.reward.b.a.r(r1)
                r0.append(r1)
                r0.append(r3)
                r0.append(r6)
                java.lang.String r1 = " 响应"
                r0.append(r1)
                android.os.Message r0 = android.os.Message.obtain()
                r0.obj = r6
                r6 = 16
                r0.what = r6
                android.os.Handler r6 = r5.i
                r6.sendMessage(r0)
                return
            Lcc:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r1 = r5.h
                int r1 = r1.get()
                r0.append(r1)
                r0.append(r2)
                com.tkay.expressad.reward.b.a r1 = r5.a
                boolean r1 = com.tkay.expressad.reward.b.a.r(r1)
                r0.append(r1)
                r0.append(r3)
                r0.append(r6)
                java.lang.String r6 = " 无需响应"
                r0.append(r6)
            Lf1:
                return
        }

        private void a(java.lang.String r5, java.lang.String r6) {
                r4 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "receive onCampaignLoadSuccess,cur state: "
                r0.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r2 = r4.h
                int r2 = r2.get()
                r0.append(r2)
                java.lang.String r2 = " hasCalledCampaignLoadSuccess: "
                r0.append(r2)
                com.tkay.expressad.reward.b.a r3 = r4.a
                boolean r3 = com.tkay.expressad.reward.b.a.n(r3)
                r0.append(r3)
                java.lang.ref.WeakReference<com.tkay.expressad.videocommon.d.a> r0 = r4.c
                if (r0 == 0) goto Lad
                java.lang.Object r0 = r0.get()
                com.tkay.expressad.videocommon.d.a r0 = (com.tkay.expressad.videocommon.d.a) r0
                if (r0 == 0) goto Lad
                java.util.concurrent.atomic.AtomicInteger r0 = r4.h
                int r0 = r0.get()
                r3 = 1
                if (r0 == r3) goto L3c
                java.util.concurrent.atomic.AtomicInteger r0 = r4.h
                int r0 = r0.get()
                r3 = 3
                if (r0 != r3) goto Lad
            L3c:
                android.os.Handler r0 = r4.i
                if (r0 == 0) goto Lad
                com.tkay.expressad.reward.b.a r0 = r4.a
                boolean r0 = com.tkay.expressad.reward.b.a.n(r0)
                if (r0 != 0) goto L8e
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r1 = r4.h
                int r1 = r1.get()
                r0.append(r1)
                r0.append(r2)
                com.tkay.expressad.reward.b.a r1 = r4.a
                boolean r1 = com.tkay.expressad.reward.b.a.n(r1)
                r0.append(r1)
                java.lang.String r1 = " response"
                r0.append(r1)
                com.tkay.expressad.reward.b.a r0 = r4.a
                com.tkay.expressad.reward.b.a.o(r0)
                android.os.Message r0 = android.os.Message.obtain()
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r2 = com.tkay.expressad.b.y
                r1.putString(r2, r5)
                java.lang.String r5 = "unit_id"
                r1.putString(r5, r6)
                r0.setData(r1)
                r0.obj = r6
                r5 = 17
                r0.what = r5
                android.os.Handler r5 = r4.i
                r5.sendMessage(r0)
                return
            L8e:
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r6 = r4.h
                int r6 = r6.get()
                r5.append(r6)
                r5.append(r2)
                com.tkay.expressad.reward.b.a r6 = r4.a
                boolean r6 = com.tkay.expressad.reward.b.a.n(r6)
                r5.append(r6)
                java.lang.String r6 = " 无需响应"
                r5.append(r6)
            Lad:
                return
        }

        private void a(java.util.List<com.tkay.expressad.foundation.d.c> r1) {
                r0 = this;
                r0.k = r1
                return
        }

        private void a(boolean r1) {
                r0 = this;
                r0.l = r1
                return
        }

        private void a(boolean r3, java.lang.String r4, float r5) {
                r2 = this;
                java.lang.ref.WeakReference<com.tkay.expressad.videocommon.d.a> r0 = r2.c
                if (r0 == 0) goto L1f
                java.lang.Object r0 = r0.get()
                com.tkay.expressad.videocommon.d.a r0 = (com.tkay.expressad.videocommon.d.a) r0
                if (r0 == 0) goto L1f
                com.tkay.expressad.reward.b.a r1 = r2.a
                boolean r1 = com.tkay.expressad.reward.b.a.i(r1)
                if (r1 == 0) goto L1c
                com.tkay.expressad.reward.b.a.b()
                com.tkay.expressad.reward.b.a r1 = r2.a
                r1.a()
            L1c:
                r0.a(r3, r4, r5)
            L1f:
                return
        }

        private void b() {
                r1 = this;
                com.tkay.expressad.reward.b.a r0 = r1.a
                com.tkay.expressad.reward.b.a.l(r0)
                java.lang.ref.WeakReference<com.tkay.expressad.videocommon.d.a> r0 = r1.c
                if (r0 == 0) goto L14
                java.lang.Object r0 = r0.get()
                com.tkay.expressad.videocommon.d.a r0 = (com.tkay.expressad.videocommon.d.a) r0
                if (r0 == 0) goto L14
                r0.c()
            L14:
                return
        }

        static void b(com.tkay.expressad.reward.b.a.c r1) {
                java.util.concurrent.atomic.AtomicInteger r1 = r1.h
                r0 = 1
                r1.set(r0)
                return
        }

        static void b(com.tkay.expressad.reward.b.a.c r2, java.lang.String r3) {
                java.util.concurrent.atomic.AtomicInteger r0 = r2.h
                r1 = 2
                r0.set(r1)
                android.os.Handler r0 = r2.i
                if (r0 == 0) goto L19
                android.os.Message r0 = android.os.Message.obtain()
                r0.obj = r3
                r3 = 18
                r0.what = r3
                android.os.Handler r2 = r2.i
                r2.sendMessage(r0)
            L19:
                return
        }

        static void b(com.tkay.expressad.reward.b.a.c r5, java.lang.String r6, java.lang.String r7) {
                android.os.Handler r0 = r5.i
                if (r0 == 0) goto La
                r1 = 1001002(0xf462a, float:1.402703E-39)
                r0.removeMessages(r1)
            La:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "receive onVideoLoadSuccessForCache,cur state: "
                r0.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r2 = r5.h
                int r2 = r2.get()
                r0.append(r2)
                java.lang.String r2 = " hasCalledVideoLoadSuccess: "
                r0.append(r2)
                com.tkay.expressad.reward.b.a r3 = r5.a
                boolean r3 = com.tkay.expressad.reward.b.a.p(r3)
                r0.append(r3)
                java.lang.ref.WeakReference<com.tkay.expressad.videocommon.d.a> r0 = r5.c
                if (r0 == 0) goto Ld2
                java.lang.Object r0 = r0.get()
                com.tkay.expressad.videocommon.d.a r0 = (com.tkay.expressad.videocommon.d.a) r0
                if (r0 == 0) goto Ld2
                java.util.concurrent.atomic.AtomicInteger r0 = r5.h
                int r0 = r0.get()
                r3 = 3
                r4 = 1
                if (r0 == r4) goto L46
                java.util.concurrent.atomic.AtomicInteger r0 = r5.h
                int r0 = r0.get()
                if (r0 != r3) goto Ld2
            L46:
                android.os.Handler r0 = r5.i
                if (r0 == 0) goto Ld2
                java.util.concurrent.atomic.AtomicInteger r0 = r5.h
                int r0 = r0.get()
                if (r0 != r4) goto L57
                java.util.concurrent.atomic.AtomicInteger r0 = r5.h
                r0.set(r3)
            L57:
                com.tkay.expressad.reward.b.a r0 = r5.a
                boolean r0 = com.tkay.expressad.reward.b.a.p(r0)
                if (r0 != 0) goto Lb3
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r1 = r5.h
                int r1 = r1.get()
                r0.append(r1)
                r0.append(r2)
                com.tkay.expressad.reward.b.a r1 = r5.a
                boolean r1 = com.tkay.expressad.reward.b.a.p(r1)
                r0.append(r1)
                java.lang.String r1 = " 响应"
                r0.append(r1)
                com.tkay.expressad.reward.b.a r0 = r5.a
                com.tkay.expressad.reward.b.a.q(r0)
                android.os.Message r0 = android.os.Message.obtain()
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r2 = com.tkay.expressad.b.y
                r1.putString(r2, r6)
                java.lang.String r6 = "unit_id"
                r1.putString(r6, r7)
                r0.setData(r1)
                r0.obj = r7
                r6 = 9
                r0.what = r6
                android.os.Handler r6 = r5.i
                r6.sendMessage(r0)
                com.tkay.expressad.reward.b.a r6 = r5.a
                boolean r6 = com.tkay.expressad.reward.b.a.r(r6)
                if (r6 == 0) goto Lb2
                java.util.concurrent.atomic.AtomicInteger r5 = r5.h
                r6 = 2
                r5.set(r6)
            Lb2:
                return
            Lb3:
                java.lang.StringBuilder r6 = new java.lang.StringBuilder
                r6.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r7 = r5.h
                int r7 = r7.get()
                r6.append(r7)
                r6.append(r2)
                com.tkay.expressad.reward.b.a r5 = r5.a
                boolean r5 = com.tkay.expressad.reward.b.a.p(r5)
                r6.append(r5)
                java.lang.String r5 = " 无需响应"
                r6.append(r5)
            Ld2:
                return
        }

        private void b(java.lang.String r3) {
                r2 = this;
                java.util.concurrent.atomic.AtomicInteger r0 = r2.h
                r1 = 2
                r0.set(r1)
                android.os.Handler r0 = r2.i
                if (r0 == 0) goto L19
                android.os.Message r0 = android.os.Message.obtain()
                r0.obj = r3
                r3 = 18
                r0.what = r3
                android.os.Handler r3 = r2.i
                r3.sendMessage(r0)
            L19:
                return
        }

        private void b(java.lang.String r5, java.lang.String r6) {
                r4 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "receive onCampaignLoadSuccessForCache,cur state: "
                r0.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r2 = r4.h
                int r2 = r2.get()
                r0.append(r2)
                java.lang.String r2 = " hasCalledCampaignLoadSuccess: "
                r0.append(r2)
                com.tkay.expressad.reward.b.a r3 = r4.a
                boolean r3 = com.tkay.expressad.reward.b.a.n(r3)
                r0.append(r3)
                java.lang.ref.WeakReference<com.tkay.expressad.videocommon.d.a> r0 = r4.c
                if (r0 == 0) goto L9d
                java.lang.Object r0 = r0.get()
                com.tkay.expressad.videocommon.d.a r0 = (com.tkay.expressad.videocommon.d.a) r0
                if (r0 == 0) goto L9d
                android.os.Handler r0 = r4.i
                if (r0 == 0) goto L9d
                com.tkay.expressad.reward.b.a r0 = r4.a
                boolean r0 = com.tkay.expressad.reward.b.a.n(r0)
                if (r0 != 0) goto L7e
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "receive onCampaignLoadSuccessForCache,curstate: "
                r0.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r1 = r4.h
                int r1 = r1.get()
                r0.append(r1)
                r0.append(r2)
                com.tkay.expressad.reward.b.a r1 = r4.a
                boolean r1 = com.tkay.expressad.reward.b.a.n(r1)
                r0.append(r1)
                java.lang.String r1 = " response"
                r0.append(r1)
                com.tkay.expressad.reward.b.a r0 = r4.a
                com.tkay.expressad.reward.b.a.o(r0)
                android.os.Message r0 = android.os.Message.obtain()
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r2 = com.tkay.expressad.b.y
                r1.putString(r2, r5)
                java.lang.String r5 = "unit_id"
                r1.putString(r5, r6)
                r0.setData(r1)
                r0.obj = r6
                r5 = 17
                r0.what = r5
                android.os.Handler r5 = r4.i
                r5.sendMessage(r0)
                return
            L7e:
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r6 = r4.h
                int r6 = r6.get()
                r5.append(r6)
                r5.append(r2)
                com.tkay.expressad.reward.b.a r6 = r4.a
                boolean r6 = com.tkay.expressad.reward.b.a.n(r6)
                r5.append(r6)
                java.lang.String r6 = " 无需响应"
                r5.append(r6)
            L9d:
                return
        }

        static java.util.concurrent.atomic.AtomicInteger c(com.tkay.expressad.reward.b.a.c r0) {
                java.util.concurrent.atomic.AtomicInteger r0 = r0.h
                return r0
        }

        private void c() {
                r1 = this;
                java.lang.ref.WeakReference<com.tkay.expressad.videocommon.d.a> r0 = r1.c
                if (r0 == 0) goto L7
                r0.get()
            L7:
                return
        }

        static void c(com.tkay.expressad.reward.b.a.c r4, java.lang.String r5, java.lang.String r6) {
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "receive onCampaignLoadSuccess,cur state: "
                r0.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r2 = r4.h
                int r2 = r2.get()
                r0.append(r2)
                java.lang.String r2 = " hasCalledCampaignLoadSuccess: "
                r0.append(r2)
                com.tkay.expressad.reward.b.a r3 = r4.a
                boolean r3 = com.tkay.expressad.reward.b.a.n(r3)
                r0.append(r3)
                java.lang.ref.WeakReference<com.tkay.expressad.videocommon.d.a> r0 = r4.c
                if (r0 == 0) goto Lad
                java.lang.Object r0 = r0.get()
                com.tkay.expressad.videocommon.d.a r0 = (com.tkay.expressad.videocommon.d.a) r0
                if (r0 == 0) goto Lad
                java.util.concurrent.atomic.AtomicInteger r0 = r4.h
                int r0 = r0.get()
                r3 = 1
                if (r0 == r3) goto L3c
                java.util.concurrent.atomic.AtomicInteger r0 = r4.h
                int r0 = r0.get()
                r3 = 3
                if (r0 != r3) goto Lad
            L3c:
                android.os.Handler r0 = r4.i
                if (r0 == 0) goto Lad
                com.tkay.expressad.reward.b.a r0 = r4.a
                boolean r0 = com.tkay.expressad.reward.b.a.n(r0)
                if (r0 != 0) goto L8e
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r1 = r4.h
                int r1 = r1.get()
                r0.append(r1)
                r0.append(r2)
                com.tkay.expressad.reward.b.a r1 = r4.a
                boolean r1 = com.tkay.expressad.reward.b.a.n(r1)
                r0.append(r1)
                java.lang.String r1 = " response"
                r0.append(r1)
                com.tkay.expressad.reward.b.a r0 = r4.a
                com.tkay.expressad.reward.b.a.o(r0)
                android.os.Message r0 = android.os.Message.obtain()
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r2 = com.tkay.expressad.b.y
                r1.putString(r2, r5)
                java.lang.String r5 = "unit_id"
                r1.putString(r5, r6)
                r0.setData(r1)
                r0.obj = r6
                r5 = 17
                r0.what = r5
                android.os.Handler r4 = r4.i
                r4.sendMessage(r0)
                return
            L8e:
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r6 = r4.h
                int r6 = r6.get()
                r5.append(r6)
                r5.append(r2)
                com.tkay.expressad.reward.b.a r4 = r4.a
                boolean r4 = com.tkay.expressad.reward.b.a.n(r4)
                r5.append(r4)
                java.lang.String r4 = " 无需响应"
                r5.append(r4)
            Lad:
                return
        }

        private void c(java.lang.String r2) {
                r1 = this;
                android.os.Handler r0 = r1.i
                if (r0 == 0) goto L13
                android.os.Message r0 = android.os.Message.obtain()
                r0.obj = r2
                r2 = 18
                r0.what = r2
                android.os.Handler r2 = r1.i
                r2.sendMessage(r0)
            L13:
                return
        }

        private void c(java.lang.String r5, java.lang.String r6) {
                r4 = this;
                android.os.Handler r0 = r4.i
                if (r0 == 0) goto La
                r1 = 1001002(0xf462a, float:1.402703E-39)
                r0.removeMessages(r1)
            La:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "receive onVideoLoadSuccess,cur state: "
                r0.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r2 = r4.h
                int r2 = r2.get()
                r0.append(r2)
                java.lang.String r2 = " hasCalledVideoLoadSuccess: "
                r0.append(r2)
                com.tkay.expressad.reward.b.a r3 = r4.a
                boolean r3 = com.tkay.expressad.reward.b.a.p(r3)
                r0.append(r3)
                java.lang.ref.WeakReference<com.tkay.expressad.videocommon.d.a> r0 = r4.c
                if (r0 == 0) goto Lbd
                java.lang.Object r0 = r0.get()
                com.tkay.expressad.videocommon.d.a r0 = (com.tkay.expressad.videocommon.d.a) r0
                if (r0 == 0) goto Lbd
                java.util.concurrent.atomic.AtomicInteger r0 = r4.h
                int r0 = r0.get()
                r3 = 1
                if (r0 == r3) goto L46
                java.util.concurrent.atomic.AtomicInteger r0 = r4.h
                int r0 = r0.get()
                r3 = 3
                if (r0 != r3) goto Lbd
            L46:
                android.os.Handler r0 = r4.i
                if (r0 == 0) goto Lbd
                java.util.concurrent.atomic.AtomicInteger r0 = r4.h
                r3 = 2
                r0.set(r3)
                com.tkay.expressad.reward.b.a r0 = r4.a
                boolean r0 = com.tkay.expressad.reward.b.a.p(r0)
                if (r0 != 0) goto L9e
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r1 = r4.h
                int r1 = r1.get()
                r0.append(r1)
                r0.append(r2)
                com.tkay.expressad.reward.b.a r1 = r4.a
                boolean r1 = com.tkay.expressad.reward.b.a.p(r1)
                r0.append(r1)
                java.lang.String r1 = " 响应"
                r0.append(r1)
                com.tkay.expressad.reward.b.a r0 = r4.a
                com.tkay.expressad.reward.b.a.q(r0)
                android.os.Message r0 = android.os.Message.obtain()
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r2 = com.tkay.expressad.b.y
                r1.putString(r2, r5)
                java.lang.String r5 = "unit_id"
                r1.putString(r5, r6)
                r0.setData(r1)
                r0.obj = r6
                r5 = 9
                r0.what = r5
                android.os.Handler r5 = r4.i
                r5.sendMessage(r0)
                return
            L9e:
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r6 = r4.h
                int r6 = r6.get()
                r5.append(r6)
                r5.append(r2)
                com.tkay.expressad.reward.b.a r6 = r4.a
                boolean r6 = com.tkay.expressad.reward.b.a.p(r6)
                r5.append(r6)
                java.lang.String r6 = " 无需响应"
                r5.append(r6)
            Lbd:
                return
        }

        private void d() {
                r1 = this;
                java.lang.ref.WeakReference<com.tkay.expressad.videocommon.d.a> r0 = r1.c
                if (r0 == 0) goto Lf
                java.lang.Object r0 = r0.get()
                com.tkay.expressad.videocommon.d.a r0 = (com.tkay.expressad.videocommon.d.a) r0
                if (r0 == 0) goto Lf
                r0.d()
            Lf:
                return
        }

        private void d(java.lang.String r6) {
                r5 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "receive onVideoLoadFailForCache,cur state: "
                r0.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r2 = r5.h
                int r2 = r2.get()
                r0.append(r2)
                java.lang.String r2 = " hasCalledVideoLoadFailedForCache: "
                r0.append(r2)
                com.tkay.expressad.reward.b.a r3 = r5.a
                boolean r3 = com.tkay.expressad.reward.b.a.v(r3)
                r0.append(r3)
                java.lang.String r3 = " "
                r0.append(r3)
                r0.append(r6)
                java.lang.ref.WeakReference<com.tkay.expressad.videocommon.d.a> r0 = r5.c
                if (r0 == 0) goto Ld4
                java.lang.Object r0 = r0.get()
                com.tkay.expressad.videocommon.d.a r0 = (com.tkay.expressad.videocommon.d.a) r0
                if (r0 == 0) goto Ld4
                java.util.concurrent.atomic.AtomicInteger r0 = r5.h
                int r0 = r0.get()
                r4 = 1
                if (r0 == r4) goto L44
                java.util.concurrent.atomic.AtomicInteger r0 = r5.h
                int r0 = r0.get()
                r4 = 3
                if (r0 != r4) goto Ld4
            L44:
                android.os.Handler r0 = r5.i
                if (r0 == 0) goto Ld4
                com.tkay.expressad.reward.b.a r0 = r5.a
                com.tkay.expressad.reward.b.a.u(r0)
                java.lang.String r0 = "resource load timeout"
                boolean r0 = r6.contains(r0)
                if (r0 == 0) goto L5a
                com.tkay.expressad.reward.b.a r0 = r5.a
                com.tkay.expressad.reward.b.a.s(r0)
            L5a:
                com.tkay.expressad.reward.b.a r0 = r5.a
                boolean r0 = com.tkay.expressad.reward.b.a.v(r0)
                if (r0 == 0) goto Laf
                com.tkay.expressad.reward.b.a r0 = r5.a
                boolean r0 = com.tkay.expressad.reward.b.a.r(r0)
                if (r0 == 0) goto Laf
                com.tkay.expressad.reward.b.a r0 = r5.a
                boolean r0 = com.tkay.expressad.reward.b.a.p(r0)
                if (r0 != 0) goto Laf
                java.util.concurrent.atomic.AtomicInteger r0 = r5.h
                r1 = 2
                r0.set(r1)
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "receive hasCalledVideoLoadFailedForCache,cur state: "
                r0.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r1 = r5.h
                int r1 = r1.get()
                r0.append(r1)
                r0.append(r2)
                com.tkay.expressad.reward.b.a r1 = r5.a
                boolean r1 = com.tkay.expressad.reward.b.a.v(r1)
                r0.append(r1)
                r0.append(r3)
                r0.append(r6)
                java.lang.String r1 = " 响应"
                r0.append(r1)
                android.os.Message r0 = android.os.Message.obtain()
                r0.obj = r6
                r6 = 16
                r0.what = r6
                android.os.Handler r6 = r5.i
                r6.sendMessage(r0)
                return
            Laf:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r1 = r5.h
                int r1 = r1.get()
                r0.append(r1)
                r0.append(r2)
                com.tkay.expressad.reward.b.a r1 = r5.a
                boolean r1 = com.tkay.expressad.reward.b.a.v(r1)
                r0.append(r1)
                r0.append(r3)
                r0.append(r6)
                java.lang.String r6 = " 无需响应"
                r0.append(r6)
            Ld4:
                return
        }

        private void d(java.lang.String r6, java.lang.String r7) {
                r5 = this;
                android.os.Handler r0 = r5.i
                if (r0 == 0) goto La
                r1 = 1001002(0xf462a, float:1.402703E-39)
                r0.removeMessages(r1)
            La:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "receive onVideoLoadSuccessForCache,cur state: "
                r0.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r2 = r5.h
                int r2 = r2.get()
                r0.append(r2)
                java.lang.String r2 = " hasCalledVideoLoadSuccess: "
                r0.append(r2)
                com.tkay.expressad.reward.b.a r3 = r5.a
                boolean r3 = com.tkay.expressad.reward.b.a.p(r3)
                r0.append(r3)
                java.lang.ref.WeakReference<com.tkay.expressad.videocommon.d.a> r0 = r5.c
                if (r0 == 0) goto Ld2
                java.lang.Object r0 = r0.get()
                com.tkay.expressad.videocommon.d.a r0 = (com.tkay.expressad.videocommon.d.a) r0
                if (r0 == 0) goto Ld2
                java.util.concurrent.atomic.AtomicInteger r0 = r5.h
                int r0 = r0.get()
                r3 = 3
                r4 = 1
                if (r0 == r4) goto L46
                java.util.concurrent.atomic.AtomicInteger r0 = r5.h
                int r0 = r0.get()
                if (r0 != r3) goto Ld2
            L46:
                android.os.Handler r0 = r5.i
                if (r0 == 0) goto Ld2
                java.util.concurrent.atomic.AtomicInteger r0 = r5.h
                int r0 = r0.get()
                if (r0 != r4) goto L57
                java.util.concurrent.atomic.AtomicInteger r0 = r5.h
                r0.set(r3)
            L57:
                com.tkay.expressad.reward.b.a r0 = r5.a
                boolean r0 = com.tkay.expressad.reward.b.a.p(r0)
                if (r0 != 0) goto Lb3
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r1 = r5.h
                int r1 = r1.get()
                r0.append(r1)
                r0.append(r2)
                com.tkay.expressad.reward.b.a r1 = r5.a
                boolean r1 = com.tkay.expressad.reward.b.a.p(r1)
                r0.append(r1)
                java.lang.String r1 = " 响应"
                r0.append(r1)
                com.tkay.expressad.reward.b.a r0 = r5.a
                com.tkay.expressad.reward.b.a.q(r0)
                android.os.Message r0 = android.os.Message.obtain()
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r2 = com.tkay.expressad.b.y
                r1.putString(r2, r6)
                java.lang.String r6 = "unit_id"
                r1.putString(r6, r7)
                r0.setData(r1)
                r0.obj = r7
                r6 = 9
                r0.what = r6
                android.os.Handler r6 = r5.i
                r6.sendMessage(r0)
                com.tkay.expressad.reward.b.a r6 = r5.a
                boolean r6 = com.tkay.expressad.reward.b.a.r(r6)
                if (r6 == 0) goto Lb2
                java.util.concurrent.atomic.AtomicInteger r6 = r5.h
                r7 = 2
                r6.set(r7)
            Lb2:
                return
            Lb3:
                java.lang.StringBuilder r6 = new java.lang.StringBuilder
                r6.<init>(r1)
                java.util.concurrent.atomic.AtomicInteger r7 = r5.h
                int r7 = r7.get()
                r6.append(r7)
                r6.append(r2)
                com.tkay.expressad.reward.b.a r7 = r5.a
                boolean r7 = com.tkay.expressad.reward.b.a.p(r7)
                r6.append(r7)
                java.lang.String r7 = " 无需响应"
                r6.append(r7)
            Ld2:
                return
        }

        private void e(java.lang.String r2) {
                r1 = this;
                com.tkay.expressad.reward.b.a r0 = r1.a
                com.tkay.expressad.reward.b.a.l(r0)
                java.lang.ref.WeakReference<com.tkay.expressad.videocommon.d.a> r0 = r1.c
                if (r0 == 0) goto L14
                java.lang.Object r0 = r0.get()
                com.tkay.expressad.videocommon.d.a r0 = (com.tkay.expressad.videocommon.d.a) r0
                if (r0 == 0) goto L14
                r0.b(r2)
            L14:
                return
        }
    }

    private final class d implements com.tkay.expressad.video.bt.module.b.h {
        final com.tkay.expressad.reward.b.a a;
        private com.tkay.expressad.reward.b.a b;
        private int c;
        private android.os.Handler d;
        private int e;

        d(com.tkay.expressad.reward.b.a r2, com.tkay.expressad.reward.b.a r3, android.os.Handler r4) {
                r1 = this;
                r0 = 0
                r1.<init>(r2, r3, r4, r0)
                return
        }

        private d(com.tkay.expressad.reward.b.a r1, com.tkay.expressad.reward.b.a r2, android.os.Handler r3, byte r4) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r1 = 0
                r0.e = r1
                r0.b = r2
                r1 = 1
                r0.c = r1
                r0.d = r3
                return
        }

        private void d() {
                r1 = this;
                com.tkay.expressad.reward.b.a r0 = r1.a
                java.util.ArrayList r0 = com.tkay.expressad.reward.b.a.k(r0)
                r0.clear()
                r0 = 0
                r1.b = r0
                return
        }

        @Override
        public final void a() {
                r2 = this;
                com.tkay.expressad.reward.b.a r0 = r2.a
                com.tkay.expressad.reward.b.a.l(r0)
                com.tkay.expressad.reward.b.a r0 = r2.b     // Catch: java.lang.Throwable -> L41
                if (r0 == 0) goto L40
                com.tkay.expressad.reward.b.a r0 = r2.b     // Catch: java.lang.Throwable -> L41
                r1 = 1
                com.tkay.expressad.reward.b.a.a(r0, r1)     // Catch: java.lang.Throwable -> L41
                com.tkay.expressad.reward.b.a r0 = r2.b     // Catch: java.lang.Throwable -> L41
                com.tkay.expressad.reward.a.d r0 = com.tkay.expressad.reward.b.a.c(r0)     // Catch: java.lang.Throwable -> L41
                if (r0 == 0) goto L21
                com.tkay.expressad.reward.b.a r0 = r2.b     // Catch: java.lang.Throwable -> L41
                com.tkay.expressad.reward.a.d r0 = com.tkay.expressad.reward.b.a.c(r0)     // Catch: java.lang.Throwable -> L41
                java.lang.String r1 = ""
                r0.n = r1     // Catch: java.lang.Throwable -> L41
            L21:
                com.tkay.expressad.reward.b.a r0 = r2.b     // Catch: java.lang.Throwable -> L41
                com.tkay.expressad.videocommon.d.a r0 = com.tkay.expressad.reward.b.a.h(r0)     // Catch: java.lang.Throwable -> L41
                if (r0 == 0) goto L40
                com.tkay.expressad.reward.b.a r0 = r2.a     // Catch: java.lang.Throwable -> L41
                boolean r0 = com.tkay.expressad.reward.b.a.i(r0)     // Catch: java.lang.Throwable -> L41
                if (r0 == 0) goto L34
                com.tkay.expressad.reward.b.a.b()     // Catch: java.lang.Throwable -> L41
            L34:
                com.tkay.expressad.reward.b.a r0 = r2.b     // Catch: java.lang.Throwable -> L41
                com.tkay.expressad.videocommon.d.a r0 = com.tkay.expressad.reward.b.a.h(r0)     // Catch: java.lang.Throwable -> L41
                r0.c()     // Catch: java.lang.Throwable -> L41
                r0 = 2
                r2.e = r0     // Catch: java.lang.Throwable -> L41
            L40:
                return
            L41:
                r0 = move-exception
                boolean r1 = com.tkay.expressad.b.a
                if (r1 == 0) goto L49
                r0.printStackTrace()
            L49:
                return
        }

        @Override
        public final void a(com.tkay.expressad.foundation.d.c r2) {
                r1 = this;
                com.tkay.expressad.reward.b.a r0 = r1.b     // Catch: java.lang.Exception -> L2a
                if (r0 == 0) goto L29
                com.tkay.expressad.reward.b.a r0 = r1.b     // Catch: java.lang.Exception -> L2a
                com.tkay.expressad.videocommon.d.a r0 = com.tkay.expressad.reward.b.a.h(r0)     // Catch: java.lang.Exception -> L2a
                if (r0 == 0) goto L29
                com.tkay.expressad.reward.b.a r0 = r1.a     // Catch: java.lang.Exception -> L21
                boolean r0 = com.tkay.expressad.reward.b.a.i(r0)     // Catch: java.lang.Exception -> L21
                if (r0 == 0) goto L17
                com.tkay.expressad.reward.b.a.b()     // Catch: java.lang.Exception -> L21
            L17:
                com.tkay.expressad.reward.b.a r0 = r1.b     // Catch: java.lang.Exception -> L21
                com.tkay.expressad.videocommon.d.a r0 = com.tkay.expressad.reward.b.a.h(r0)     // Catch: java.lang.Exception -> L21
                r0.a(r2)     // Catch: java.lang.Exception -> L21
                return
            L21:
                r2 = move-exception
                boolean r0 = com.tkay.expressad.b.a     // Catch: java.lang.Exception -> L2a
                if (r0 == 0) goto L29
                r2.printStackTrace()     // Catch: java.lang.Exception -> L2a
            L29:
                return
            L2a:
                r2 = move-exception
                boolean r0 = com.tkay.expressad.b.a
                if (r0 == 0) goto L32
                r2.printStackTrace()
            L32:
                return
        }

        @Override
        public final void a(java.lang.String r3) {
                r2 = this;
                com.tkay.expressad.reward.b.a r0 = r2.a
                com.tkay.expressad.reward.b.a.l(r0)
                r0 = 0
                com.tkay.expressad.reward.b.a r1 = r2.b     // Catch: java.lang.Exception -> L49
                if (r1 == 0) goto L48
                com.tkay.expressad.reward.b.a r1 = r2.a     // Catch: java.lang.Exception -> L49
                boolean r1 = com.tkay.expressad.reward.b.a.i(r1)     // Catch: java.lang.Exception -> L49
                if (r1 == 0) goto L15
                com.tkay.expressad.reward.b.a.b()     // Catch: java.lang.Exception -> L49
            L15:
                com.tkay.expressad.reward.b.a r1 = r2.b     // Catch: java.lang.Exception -> L49
                com.tkay.expressad.reward.b.a.a(r1, r0)     // Catch: java.lang.Exception -> L49
                com.tkay.expressad.reward.b.a r1 = r2.b     // Catch: java.lang.Exception -> L49
                com.tkay.expressad.videocommon.d.a r1 = com.tkay.expressad.reward.b.a.h(r1)     // Catch: java.lang.Exception -> L49
                if (r1 == 0) goto L48
                com.tkay.expressad.reward.b.a r1 = r2.a     // Catch: java.lang.Exception -> L33
                java.util.List r1 = com.tkay.expressad.reward.b.a.a(r1)     // Catch: java.lang.Exception -> L33
                if (r1 == 0) goto L33
                com.tkay.expressad.reward.b.a r1 = r2.a     // Catch: java.lang.Exception -> L33
                java.util.List r1 = com.tkay.expressad.reward.b.a.a(r1)     // Catch: java.lang.Exception -> L33
                r1.size()     // Catch: java.lang.Exception -> L33
            L33:
                com.tkay.expressad.reward.b.a r1 = r2.b     // Catch: java.lang.Exception -> L3d
                com.tkay.expressad.videocommon.d.a r1 = com.tkay.expressad.reward.b.a.h(r1)     // Catch: java.lang.Exception -> L3d
                r1.b(r3)     // Catch: java.lang.Exception -> L3d
                goto L45
            L3d:
                r3 = move-exception
                boolean r1 = com.tkay.expressad.b.a     // Catch: java.lang.Exception -> L49
                if (r1 == 0) goto L45
                r3.printStackTrace()     // Catch: java.lang.Exception -> L49
            L45:
                r3 = 4
                r2.e = r3     // Catch: java.lang.Exception -> L49
            L48:
                return
            L49:
                r3 = move-exception
                r2.e = r0
                boolean r0 = com.tkay.expressad.b.a
                if (r0 == 0) goto L53
                r3.printStackTrace()
            L53:
                return
        }

        @Override
        public final void a(boolean r1, int r2) {
                r0 = this;
                com.tkay.expressad.reward.b.a r1 = r0.b     // Catch: java.lang.Exception -> L21
                if (r1 == 0) goto L20
                com.tkay.expressad.reward.b.a r1 = r0.b     // Catch: java.lang.Exception -> L21
                com.tkay.expressad.videocommon.d.a r1 = com.tkay.expressad.reward.b.a.h(r1)     // Catch: java.lang.Exception -> L21
                if (r1 == 0) goto L20
                com.tkay.expressad.reward.b.a r1 = r0.b     // Catch: java.lang.Exception -> L21
                r2 = 0
                com.tkay.expressad.reward.b.a.a(r1, r2)     // Catch: java.lang.Exception -> L21
                com.tkay.expressad.reward.b.a r1 = r0.b     // Catch: java.lang.Exception -> L18
                com.tkay.expressad.reward.b.a.h(r1)     // Catch: java.lang.Exception -> L18
                return
            L18:
                r1 = move-exception
                boolean r2 = com.tkay.expressad.b.a     // Catch: java.lang.Exception -> L21
                if (r2 == 0) goto L20
                r1.printStackTrace()     // Catch: java.lang.Exception -> L21
            L20:
                return
            L21:
                r1 = move-exception
                boolean r2 = com.tkay.expressad.b.a
                if (r2 == 0) goto L29
                r1.printStackTrace()
            L29:
                return
        }

        @Override
        public final void a(boolean r3, com.tkay.expressad.videocommon.c.c r4) {
                r2 = this;
                com.tkay.expressad.reward.b.a r0 = r2.b     // Catch: java.lang.Exception -> L50
                if (r0 == 0) goto L4f
                com.tkay.expressad.reward.b.a r0 = r2.b     // Catch: java.lang.Exception -> L50
                com.tkay.expressad.videocommon.d.a r0 = com.tkay.expressad.reward.b.a.h(r0)     // Catch: java.lang.Exception -> L50
                if (r0 == 0) goto L4f
                if (r4 != 0) goto L18
                com.tkay.expressad.reward.b.a r4 = r2.b     // Catch: java.lang.Exception -> L50
                java.lang.String r4 = com.tkay.expressad.reward.b.a.m(r4)     // Catch: java.lang.Exception -> L50
                com.tkay.expressad.videocommon.c.c r4 = com.tkay.expressad.videocommon.c.c.b(r4)     // Catch: java.lang.Exception -> L50
            L18:
                com.tkay.expressad.reward.b.a r0 = r2.a     // Catch: java.lang.Exception -> L50
                boolean r0 = com.tkay.expressad.reward.b.a.i(r0)     // Catch: java.lang.Exception -> L50
                if (r0 == 0) goto L28
                com.tkay.expressad.reward.b.a.b()     // Catch: java.lang.Exception -> L50
                com.tkay.expressad.reward.b.a r0 = r2.a     // Catch: java.lang.Exception -> L50
                r0.a()     // Catch: java.lang.Exception -> L50
            L28:
                com.tkay.expressad.reward.b.a r0 = r2.b     // Catch: java.lang.Exception -> L50
                com.tkay.expressad.videocommon.d.a r0 = com.tkay.expressad.reward.b.a.h(r0)     // Catch: java.lang.Exception -> L50
                java.lang.String r1 = r4.a()     // Catch: java.lang.Exception -> L50
                int r4 = r4.b()     // Catch: java.lang.Exception -> L50
                float r4 = (float) r4     // Catch: java.lang.Exception -> L50
                r0.a(r3, r1, r4)     // Catch: java.lang.Exception -> L50
                r3 = 7
                r2.e = r3     // Catch: java.lang.Exception -> L50
                com.tkay.expressad.reward.b.a r3 = r2.b     // Catch: java.lang.Exception -> L50
                r4 = 0
                com.tkay.expressad.reward.b.a.a(r3, r4)     // Catch: java.lang.Exception -> L50
                com.tkay.expressad.reward.b.a r3 = r2.a     // Catch: java.lang.Exception -> L50
                java.util.ArrayList r3 = com.tkay.expressad.reward.b.a.k(r3)     // Catch: java.lang.Exception -> L50
                r3.clear()     // Catch: java.lang.Exception -> L50
                r3 = 0
                r2.b = r3     // Catch: java.lang.Exception -> L50
            L4f:
                return
            L50:
                r3 = move-exception
                boolean r4 = com.tkay.expressad.b.a
                if (r4 == 0) goto L58
                r3.printStackTrace()
            L58:
                return
        }

        @Override
        public final void b() {
                r2 = this;
                com.tkay.expressad.reward.b.a r0 = r2.b     // Catch: java.lang.Exception -> L22
                if (r0 == 0) goto L21
                com.tkay.expressad.reward.b.a r0 = r2.b     // Catch: java.lang.Exception -> L22
                com.tkay.expressad.videocommon.d.a r0 = com.tkay.expressad.reward.b.a.h(r0)     // Catch: java.lang.Exception -> L22
                if (r0 == 0) goto L21
                com.tkay.expressad.reward.b.a r0 = r2.b     // Catch: java.lang.Exception -> L16
                com.tkay.expressad.videocommon.d.a r0 = com.tkay.expressad.reward.b.a.h(r0)     // Catch: java.lang.Exception -> L16
                r0.d()     // Catch: java.lang.Exception -> L16
                goto L1e
            L16:
                r0 = move-exception
                boolean r1 = com.tkay.expressad.b.a     // Catch: java.lang.Exception -> L22
                if (r1 == 0) goto L1e
                r0.printStackTrace()     // Catch: java.lang.Exception -> L22
            L1e:
                r0 = 5
                r2.e = r0     // Catch: java.lang.Exception -> L22
            L21:
                return
            L22:
                r0 = move-exception
                boolean r1 = com.tkay.expressad.b.a
                if (r1 == 0) goto L2a
                r0.printStackTrace()
            L2a:
                return
        }

        @Override
        public final void c() {
                r3 = this;
                com.tkay.expressad.reward.b.a r0 = r3.b     // Catch: java.lang.Exception -> L28
                if (r0 == 0) goto L27
                com.tkay.expressad.reward.b.a r0 = r3.b     // Catch: java.lang.Exception -> L28
                com.tkay.expressad.videocommon.d.a r0 = com.tkay.expressad.reward.b.a.h(r0)     // Catch: java.lang.Exception -> L28
                if (r0 == 0) goto L27
                com.tkay.expressad.reward.b.a r0 = r3.b     // Catch: java.lang.Exception -> L1c
                com.tkay.expressad.reward.b.a.h(r0)     // Catch: java.lang.Exception -> L1c
                com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Exception -> L1c
                java.lang.String r1 = "_2"
                r2 = 2
                r0.b(r1, r2)     // Catch: java.lang.Exception -> L1c
                goto L24
            L1c:
                r0 = move-exception
                boolean r1 = com.tkay.expressad.b.a     // Catch: java.lang.Exception -> L28
                if (r1 == 0) goto L24
                r0.printStackTrace()     // Catch: java.lang.Exception -> L28
            L24:
                r0 = 6
                r3.e = r0     // Catch: java.lang.Exception -> L28
            L27:
                return
            L28:
                r0 = move-exception
                boolean r1 = com.tkay.expressad.b.a
                if (r1 == 0) goto L30
                r0.printStackTrace()
            L30:
                return
        }
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tkay.expressad.reward.b.a.T = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tkay.expressad.reward.b.a.c = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.tkay.expressad.reward.b.a.U = r0
            return
    }

    public a() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.w = r0
            r1 = 2
            r3.y = r1
            r3.J = r0
            r3.K = r0
            r3.L = r0
            r3.M = r0
            r3.O = r0
            java.util.ArrayList r1 = new java.util.ArrayList
            r2 = 7
            r1.<init>(r2)
            r3.P = r1
            r3.Q = r0
            r3.R = r0
            java.lang.Object r1 = new java.lang.Object
            r1.<init>()
            r3.S = r1
            r1 = 0
            r3.X = r1
            r1 = 1
            r3.Y = r1
            r3.Z = r0
            r3.aa = r0
            r3.ab = r0
            r3.ac = r0
            r3.ad = r0
            r3.ae = r0
            r3.d = r0
            r3.e = r0
            r3.f = r0
            r3.g = r0
            r3.h = r0
            com.tkay.expressad.reward.b.a$1 r0 = new com.tkay.expressad.reward.b.a$1
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r3, r1)
            r3.x = r0
            return
    }

    public static int a(java.lang.String r1) {
            boolean r0 = com.tkay.expressad.foundation.h.w.b(r1)     // Catch: java.lang.Exception -> L21
            if (r0 == 0) goto L25
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.reward.b.a.T     // Catch: java.lang.Exception -> L21
            if (r0 == 0) goto L25
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.reward.b.a.T     // Catch: java.lang.Exception -> L21
            boolean r0 = r0.containsKey(r1)     // Catch: java.lang.Exception -> L21
            if (r0 == 0) goto L25
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.reward.b.a.T     // Catch: java.lang.Exception -> L21
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

    static java.util.List a(com.tkay.expressad.reward.b.a r0) {
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r0.af
            return r0
    }

    private static java.util.List<com.tkay.expressad.foundation.d.c> a(java.lang.String r3, java.util.List<com.tkay.expressad.foundation.d.c> r4) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            if (r4 == 0) goto L33
            int r1 = r4.size()
            if (r1 <= 0) goto L33
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto L33
            java.util.Iterator r4 = r4.iterator()
        L17:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L33
            java.lang.Object r1 = r4.next()
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1
            if (r1 == 0) goto L17
            java.lang.String r2 = r1.B()
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L17
            r0.add(r1)
            goto L17
        L33:
            return r0
    }

    private void a(int r6, int r7, int r8) {
            r5 = this;
            r5.B = r6
            r5.C = r7
            int r0 = com.tkay.expressad.foundation.g.a.cu
            if (r7 != r0) goto Lf
            if (r8 >= 0) goto Lc
            r0 = 5
            goto Ld
        Lc:
            r0 = r8
        Ld:
            r5.D = r0
        Lf:
            int r0 = r5.C
            int r1 = com.tkay.expressad.foundation.g.a.ct
            if (r0 != r1) goto L1d
            if (r8 >= 0) goto L1a
            r0 = 80
            goto L1b
        L1a:
            r0 = r8
        L1b:
            r5.D = r0
        L1d:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L50
            r0.<init>()     // Catch: java.lang.Exception -> L50
            java.lang.String r1 = "ivRewardEnable"
            r2 = 1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L50
            java.lang.String r1 = "ivRewardMode"
            int r3 = com.tkay.expressad.foundation.g.a.cr     // Catch: java.lang.Exception -> L50
            r4 = 0
            if (r6 != r3) goto L31
            r6 = r4
            goto L32
        L31:
            r6 = r2
        L32:
            r0.put(r1, r6)     // Catch: java.lang.Exception -> L50
            java.lang.String r6 = "ivRewardPlayValueMode"
            int r1 = com.tkay.expressad.foundation.g.a.ct     // Catch: java.lang.Exception -> L50
            if (r7 != r1) goto L3c
            r2 = r4
        L3c:
            r0.put(r6, r2)     // Catch: java.lang.Exception -> L50
            java.lang.String r6 = "ivRewardPlayValue"
            r0.put(r6, r8)     // Catch: java.lang.Exception -> L50
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Exception -> L50
            java.lang.String r6 = r5.s     // Catch: java.lang.Exception -> L50
            java.lang.String r7 = r0.toString()     // Catch: java.lang.Exception -> L50
            com.tkay.expressad.d.b.e(r6, r7)     // Catch: java.lang.Exception -> L50
        L50:
            return
    }

    private void a(android.app.Activity r12, java.lang.String r13, com.tkay.core.common.f.i r14) {
            r11 = this;
            java.lang.String r0 = "_1"
            java.lang.String r1 = "1"
            r2 = 0
            com.tkay.expressad.videocommon.e.a r3 = r11.o     // Catch: java.lang.Exception -> Lb3
            if (r3 == 0) goto L22
            com.tkay.expressad.videocommon.e.a r3 = r11.o     // Catch: java.lang.Exception -> Lb3
            java.util.Map r3 = r3.i()     // Catch: java.lang.Exception -> Lb3
            if (r3 == 0) goto L22
            boolean r4 = r3.containsKey(r1)     // Catch: java.lang.Exception -> Lb3
            if (r4 == 0) goto L22
            java.lang.Object r1 = r3.get(r1)     // Catch: java.lang.Exception -> Lb3
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Exception -> Lb3
            int r1 = r1.intValue()     // Catch: java.lang.Exception -> Lb3
            goto L23
        L22:
            r1 = r2
        L23:
            android.content.Context r3 = r11.k     // Catch: java.lang.Exception -> Lb3
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb3
            r4.<init>()     // Catch: java.lang.Exception -> Lb3
            java.lang.String r5 = r11.t     // Catch: java.lang.Exception -> Lb3
            r4.append(r5)     // Catch: java.lang.Exception -> Lb3
            r4.append(r0)     // Catch: java.lang.Exception -> Lb3
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> Lb3
            java.lang.Integer r5 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> Lb3
            java.lang.Object r3 = com.tkay.expressad.foundation.h.v.b(r3, r4, r5)     // Catch: java.lang.Exception -> Lb3
            if (r3 == 0) goto L63
            android.content.Context r3 = r11.k     // Catch: java.lang.Exception -> Lb3
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb3
            r4.<init>()     // Catch: java.lang.Exception -> Lb3
            java.lang.String r5 = r11.t     // Catch: java.lang.Exception -> Lb3
            r4.append(r5)     // Catch: java.lang.Exception -> Lb3
            r4.append(r0)     // Catch: java.lang.Exception -> Lb3
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Exception -> Lb3
            java.lang.Integer r4 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> Lb3
            java.lang.Object r0 = com.tkay.expressad.foundation.h.v.b(r3, r0, r4)     // Catch: java.lang.Exception -> Lb3
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Exception -> Lb3
            int r0 = r0.intValue()     // Catch: java.lang.Exception -> Lb3
            r11.l = r0     // Catch: java.lang.Exception -> Lb3
        L63:
            com.tkay.expressad.reward.a.d r0 = r11.m     // Catch: java.lang.Exception -> Lb3
            if (r0 != 0) goto L6a
            r11.i()     // Catch: java.lang.Exception -> Lb3
        L6a:
            com.tkay.expressad.reward.a.d r0 = r11.m     // Catch: java.lang.Exception -> Lb3
            if (r0 == 0) goto L9c
            com.tkay.expressad.reward.a.d r0 = r11.m     // Catch: java.lang.Exception -> Lb3
            boolean r0 = r0.c()     // Catch: java.lang.Exception -> Lb3
            if (r0 == 0) goto L9c
            int r0 = r11.l     // Catch: java.lang.Exception -> Lb3
            if (r0 < r1) goto L7f
            if (r1 <= 0) goto L7f
            r11.R = r2     // Catch: java.lang.Exception -> Lb3
            return
        L7f:
            com.tkay.expressad.reward.b.a$d r5 = new com.tkay.expressad.reward.b.a$d     // Catch: java.lang.Exception -> Lb3
            android.os.Handler r0 = r11.x     // Catch: java.lang.Exception -> Lb3
            r5.<init>(r11, r11, r0)     // Catch: java.lang.Exception -> Lb3
            java.util.Map<java.lang.String, com.tkay.expressad.reward.b.a$d> r0 = com.tkay.expressad.reward.b.a.c     // Catch: java.lang.Exception -> Lb3
            java.lang.String r1 = r11.s     // Catch: java.lang.Exception -> Lb3
            r0.put(r1, r5)     // Catch: java.lang.Exception -> Lb3
            com.tkay.expressad.reward.a.d r3 = r11.m     // Catch: java.lang.Exception -> Lb3
            java.lang.String r7 = r11.r     // Catch: java.lang.Exception -> Lb3
            int r8 = r11.y     // Catch: java.lang.Exception -> Lb3
            java.lang.String r9 = r11.u     // Catch: java.lang.Exception -> Lb3
            r4 = r12
            r6 = r13
            r10 = r14
            r3.a(r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Exception -> Lb3
            return
        L9c:
            r11.R = r2     // Catch: java.lang.Exception -> Lb3
            com.tkay.expressad.videocommon.d.a r12 = r11.p     // Catch: java.lang.Exception -> Lb3
            if (r12 == 0) goto Lb2
            com.tkay.expressad.videocommon.d.a r12 = r11.p     // Catch: java.lang.Exception -> Laa
            java.lang.String r13 = "can't show because load is failed"
            r12.b(r13)     // Catch: java.lang.Exception -> Laa
            return
        Laa:
            r12 = move-exception
            boolean r13 = com.tkay.expressad.b.a     // Catch: java.lang.Exception -> Lb3
            if (r13 == 0) goto Lb2
            r12.printStackTrace()     // Catch: java.lang.Exception -> Lb3
        Lb2:
            return
        Lb3:
            r12 = move-exception
            boolean r13 = com.tkay.expressad.b.a
            if (r13 == 0) goto Lbb
            r12.getLocalizedMessage()
        Lbb:
            com.tkay.expressad.videocommon.d.a r13 = r11.p
            if (r13 == 0) goto Lce
            com.tkay.expressad.videocommon.d.a r13 = r11.p     // Catch: java.lang.Exception -> Lc7
            java.lang.String r14 = "show exception"
            r13.b(r14)     // Catch: java.lang.Exception -> Lc7
            goto Lce
        Lc7:
            boolean r13 = com.tkay.expressad.b.a
            if (r13 == 0) goto Lce
            r12.printStackTrace()
        Lce:
            r11.R = r2
            return
    }

    static void a(com.tkay.expressad.reward.b.a r0, java.lang.String r1) {
            r0.b(r1)
            return
    }

    public static void a(java.lang.String r1, int r2) {
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.reward.b.a.T     // Catch: java.lang.Exception -> L14
            if (r0 == 0) goto L13
            boolean r0 = com.tkay.expressad.foundation.h.w.b(r1)     // Catch: java.lang.Exception -> L14
            if (r0 == 0) goto L13
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.reward.b.a.T     // Catch: java.lang.Exception -> L14
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L14
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L14
        L13:
            return
        L14:
            r1 = move-exception
            r1.printStackTrace()
            return
    }

    private void a(java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L1f
            android.content.Context r0 = r3.k
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Tkay_ConfirmTitle"
            r1.<init>(r2)
            java.lang.String r2 = r3.s
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r4 = r4.trim()
            com.tkay.expressad.foundation.h.v.a(r0, r1, r4)
        L1f:
            boolean r4 = android.text.TextUtils.isEmpty(r5)
            if (r4 != 0) goto L3e
            android.content.Context r4 = r3.k
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Tkay_ConfirmContent"
            r0.<init>(r1)
            java.lang.String r1 = r3.s
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r5 = r5.trim()
            com.tkay.expressad.foundation.h.v.a(r4, r0, r5)
        L3e:
            boolean r4 = android.text.TextUtils.isEmpty(r7)
            if (r4 != 0) goto L5d
            android.content.Context r4 = r3.k
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r0 = "Tkay_CancelText"
            r5.<init>(r0)
            java.lang.String r0 = r3.s
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            java.lang.String r7 = r7.trim()
            com.tkay.expressad.foundation.h.v.a(r4, r5, r7)
        L5d:
            boolean r4 = android.text.TextUtils.isEmpty(r6)
            if (r4 != 0) goto L7c
            android.content.Context r4 = r3.k
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r7 = "Tkay_ConfirmText"
            r5.<init>(r7)
            java.lang.String r7 = r3.s
            r5.append(r7)
            java.lang.String r5 = r5.toString()
            java.lang.String r6 = r6.trim()
            com.tkay.expressad.foundation.h.v.a(r4, r5, r6)
        L7c:
            return
    }

    private static void a(boolean r1, boolean r2) {
            java.util.Map<java.lang.String, com.tkay.expressad.reward.b.a$d> r0 = com.tkay.expressad.reward.b.a.c     // Catch: java.lang.Throwable -> L28
            if (r0 == 0) goto L9
            java.util.Map<java.lang.String, com.tkay.expressad.reward.b.a$d> r0 = com.tkay.expressad.reward.b.a.c     // Catch: java.lang.Throwable -> L28
            r0.clear()     // Catch: java.lang.Throwable -> L28
        L9:
            if (r1 == 0) goto L17
            r1 = 287(0x11f, float:4.02E-43)
            if (r2 == 0) goto L13
            com.tkay.expressad.videocommon.a.a(r1)     // Catch: java.lang.Throwable -> L28
            goto L22
        L13:
            com.tkay.expressad.videocommon.a.b(r1)     // Catch: java.lang.Throwable -> L28
            goto L22
        L17:
            r1 = 94
            if (r2 == 0) goto L1f
            com.tkay.expressad.videocommon.a.a(r1)     // Catch: java.lang.Throwable -> L28
            goto L22
        L1f:
            com.tkay.expressad.videocommon.a.b(r1)     // Catch: java.lang.Throwable -> L28
        L22:
            com.tkay.expressad.videocommon.a.a()     // Catch: java.lang.Throwable -> L28
            com.tkay.expressad.videocommon.a.b()     // Catch: java.lang.Throwable -> L28
        L28:
            return
    }

    private static void a(boolean r1, boolean r2, java.lang.String r3) {
            java.util.Map<java.lang.String, com.tkay.expressad.reward.b.a$d> r0 = com.tkay.expressad.reward.b.a.c     // Catch: java.lang.Throwable -> L28
            if (r0 == 0) goto L9
            java.util.Map<java.lang.String, com.tkay.expressad.reward.b.a$d> r0 = com.tkay.expressad.reward.b.a.c     // Catch: java.lang.Throwable -> L28
            r0.clear()     // Catch: java.lang.Throwable -> L28
        L9:
            if (r1 == 0) goto L17
            r1 = 287(0x11f, float:4.02E-43)
            if (r2 == 0) goto L13
            com.tkay.expressad.videocommon.a.a(r1)     // Catch: java.lang.Throwable -> L28
            goto L22
        L13:
            com.tkay.expressad.videocommon.a.b(r1)     // Catch: java.lang.Throwable -> L28
            goto L22
        L17:
            r1 = 94
            if (r2 == 0) goto L1f
            com.tkay.expressad.videocommon.a.a(r1)     // Catch: java.lang.Throwable -> L28
            goto L22
        L1f:
            com.tkay.expressad.videocommon.a.b(r1)     // Catch: java.lang.Throwable -> L28
        L22:
            com.tkay.expressad.videocommon.a.c(r3)     // Catch: java.lang.Throwable -> L28
            com.tkay.expressad.videocommon.a.b()     // Catch: java.lang.Throwable -> L28
        L28:
            return
    }

    static boolean a(com.tkay.expressad.reward.b.a r0, boolean r1) {
            r0.Q = r1
            return r1
    }

    private com.tkay.expressad.videocommon.c.b b(int r5) {
            r4 = this;
            com.tkay.expressad.videocommon.e.d r0 = r4.n
            r1 = 0
            if (r0 == 0) goto L31
            java.util.List r0 = r0.I()
            int r0 = r0.size()
            r2 = 0
        Le:
            if (r2 >= r0) goto L31
            com.tkay.expressad.videocommon.e.d r3 = r4.n
            java.util.List r3 = r3.I()
            java.lang.Object r3 = r3.get(r2)
            com.tkay.expressad.videocommon.c.b r3 = (com.tkay.expressad.videocommon.c.b) r3
            int r3 = r3.a()
            if (r3 != r5) goto L2e
            com.tkay.expressad.videocommon.e.d r1 = r4.n
            java.util.List r1 = r1.I()
            java.lang.Object r1 = r1.get(r2)
            com.tkay.expressad.videocommon.c.b r1 = (com.tkay.expressad.videocommon.c.b) r1
        L2e:
            int r2 = r2 + 1
            goto Le
        L31:
            return r1
    }

    static java.util.List b(com.tkay.expressad.reward.b.a r0) {
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r0.ag
            return r0
    }

    static void b() {
            return
    }

    private void b(com.tkay.expressad.foundation.d.d r3) {
            r2 = this;
            r2.c(r3)     // Catch: java.lang.Exception -> L4
            return
        L4:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1b
            java.lang.String r1 = "load mv api error:"
            r0.<init>(r1)     // Catch: java.lang.Exception -> L1b
            java.lang.String r3 = r3.getMessage()     // Catch: java.lang.Exception -> L1b
            r0.append(r3)     // Catch: java.lang.Exception -> L1b
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Exception -> L1b
            r2.b(r3)     // Catch: java.lang.Exception -> L1b
            return
        L1b:
            r3 = move-exception
            java.lang.String r0 = "can't show because unknow error"
            r2.b(r0)
            boolean r0 = com.tkay.expressad.b.a
            if (r0 == 0) goto L28
            r3.printStackTrace()
        L28:
            return
    }

    private void b(java.lang.String r2) {
            r1 = this;
            com.tkay.expressad.reward.b.a$c r0 = r1.q
            if (r0 == 0) goto Lc
            r0 = 1
            r1.ad = r0
            com.tkay.expressad.reward.b.a$c r0 = r1.q
            com.tkay.expressad.reward.b.a.c.a(r0, r2)
        Lc:
            return
    }

    private static void b(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L7
            return
        L7:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Le
            return
        Le:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = com.tkay.expressad.reward.b.a.U
            if (r0 == 0) goto L1d
            boolean r0 = r0.containsKey(r1)
            if (r0 != 0) goto L1d
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = com.tkay.expressad.reward.b.a.U
            r0.put(r1, r2)
        L1d:
            return
    }

    private void b(boolean r1) {
            r0 = this;
            r0.K = r1
            return
    }

    static com.tkay.expressad.reward.a.d c(com.tkay.expressad.reward.b.a r0) {
            com.tkay.expressad.reward.a.d r0 = r0.m
            return r0
    }

    private static void c() {
            return
    }

    private void c(com.tkay.expressad.foundation.d.d r5) {
            r4 = this;
            com.tkay.expressad.reward.a.d r0 = r4.m     // Catch: java.lang.Exception -> L64
            if (r0 == 0) goto L12
            java.lang.String r0 = r4.s     // Catch: java.lang.Exception -> L64
            com.tkay.expressad.reward.a.d r1 = r4.m     // Catch: java.lang.Exception -> L64
            java.lang.String r1 = r1.e()     // Catch: java.lang.Exception -> L64
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Exception -> L64
            if (r0 != 0) goto L2b
        L12:
            com.tkay.expressad.reward.a.d r0 = new com.tkay.expressad.reward.a.d     // Catch: java.lang.Exception -> L64
            android.content.Context r1 = r4.k     // Catch: java.lang.Exception -> L64
            java.lang.String r2 = r4.t     // Catch: java.lang.Exception -> L64
            java.lang.String r3 = r4.s     // Catch: java.lang.Exception -> L64
            r0.<init>(r1, r2, r3)     // Catch: java.lang.Exception -> L64
            r4.m = r0     // Catch: java.lang.Exception -> L64
            boolean r1 = r4.J     // Catch: java.lang.Exception -> L64
            r0.a(r1)     // Catch: java.lang.Exception -> L64
            com.tkay.expressad.reward.a.d r0 = r4.m     // Catch: java.lang.Exception -> L64
            boolean r1 = r4.K     // Catch: java.lang.Exception -> L64
            r0.b(r1)     // Catch: java.lang.Exception -> L64
        L2b:
            boolean r0 = r4.J     // Catch: java.lang.Exception -> L64
            if (r0 == 0) goto L3a
            com.tkay.expressad.reward.a.d r0 = r4.m     // Catch: java.lang.Exception -> L64
            int r1 = r4.B     // Catch: java.lang.Exception -> L64
            int r2 = r4.C     // Catch: java.lang.Exception -> L64
            int r3 = r4.D     // Catch: java.lang.Exception -> L64
            r0.a(r1, r2, r3)     // Catch: java.lang.Exception -> L64
        L3a:
            com.tkay.expressad.reward.a.d r0 = r4.m     // Catch: java.lang.Exception -> L64
            int r1 = r4.y     // Catch: java.lang.Exception -> L64
            r0.a(r1)     // Catch: java.lang.Exception -> L64
            com.tkay.expressad.reward.a.d r0 = r4.m     // Catch: java.lang.Exception -> L64
            com.tkay.expressad.videocommon.e.d r1 = r4.n     // Catch: java.lang.Exception -> L64
            r0.a(r1)     // Catch: java.lang.Exception -> L64
            com.tkay.expressad.reward.b.a$a r0 = new com.tkay.expressad.reward.b.a$a     // Catch: java.lang.Exception -> L64
            com.tkay.expressad.reward.a.d r1 = r4.m     // Catch: java.lang.Exception -> L64
            r0.<init>(r4, r1)     // Catch: java.lang.Exception -> L64
            com.tkay.expressad.reward.b.a$b r1 = new com.tkay.expressad.reward.b.a$b     // Catch: java.lang.Exception -> L64
            com.tkay.expressad.reward.a.d r2 = r4.m     // Catch: java.lang.Exception -> L64
            r1.<init>(r4, r2)     // Catch: java.lang.Exception -> L64
            r1.a(r0)     // Catch: java.lang.Exception -> L64
            com.tkay.expressad.reward.a.d r0 = r4.m     // Catch: java.lang.Exception -> L64
            r0.a(r1)     // Catch: java.lang.Exception -> L64
            com.tkay.expressad.reward.a.d r0 = r4.m     // Catch: java.lang.Exception -> L64
            r0.a(r5)     // Catch: java.lang.Exception -> L64
            return
        L64:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            r4.b(r5)
            return
    }

    private void c(boolean r1) {
            r0 = this;
            r0.O = r1
            return
    }

    static com.tkay.expressad.reward.b.a.c d(com.tkay.expressad.reward.b.a r0) {
            com.tkay.expressad.reward.b.a$c r0 = r0.q
            return r0
    }

    private java.lang.String d() {
            r2 = this;
            com.tkay.expressad.reward.a.d r0 = r2.m
            if (r0 == 0) goto Lb
            boolean r1 = r2.Q
            java.lang.String r0 = r0.c(r1)
            return r0
        Lb:
            java.lang.String r0 = ""
            return r0
    }

    private static void e() {
            com.tkay.expressad.foundation.h.m.a()
            return
    }

    static boolean e(com.tkay.expressad.reward.b.a r0) {
            boolean r0 = r0.N
            return r0
    }

    static java.lang.String f(com.tkay.expressad.reward.b.a r0) {
            java.lang.String r0 = r0.t
            return r0
    }

    private void f() {
            r7 = this;
            com.tkay.expressad.videocommon.e.d r0 = r7.n     // Catch: java.lang.Exception -> L43
            java.util.List r0 = r0.I()     // Catch: java.lang.Exception -> L43
            if (r0 == 0) goto L42
            int r1 = r0.size()     // Catch: java.lang.Exception -> L43
            if (r1 <= 0) goto L42
            r1 = 0
            r2 = r1
        L10:
            int r3 = r0.size()     // Catch: java.lang.Exception -> L43
            if (r2 >= r3) goto L42
            java.lang.Object r3 = r0.get(r2)     // Catch: java.lang.Exception -> L43
            com.tkay.expressad.videocommon.c.b r3 = (com.tkay.expressad.videocommon.c.b) r3     // Catch: java.lang.Exception -> L43
            android.content.Context r4 = r7.k     // Catch: java.lang.Exception -> L43
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L43
            r5.<init>()     // Catch: java.lang.Exception -> L43
            java.lang.String r6 = r7.t     // Catch: java.lang.Exception -> L43
            r5.append(r6)     // Catch: java.lang.Exception -> L43
            java.lang.String r6 = "_"
            r5.append(r6)     // Catch: java.lang.Exception -> L43
            int r3 = r3.a()     // Catch: java.lang.Exception -> L43
            r5.append(r3)     // Catch: java.lang.Exception -> L43
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Exception -> L43
            java.lang.Integer r5 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L43
            com.tkay.expressad.foundation.h.v.a(r4, r3, r5)     // Catch: java.lang.Exception -> L43
            int r2 = r2 + 1
            goto L10
        L42:
            return
        L43:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    static java.lang.String g(com.tkay.expressad.reward.b.a r0) {
            java.lang.String r0 = r0.s
            return r0
    }

    private boolean g() {
            r9 = this;
            com.tkay.expressad.videocommon.e.d r0 = r9.n     // Catch: java.lang.Exception -> L96
            java.util.List r0 = r0.I()     // Catch: java.lang.Exception -> L96
            com.tkay.expressad.videocommon.e.a r1 = r9.o     // Catch: java.lang.Exception -> L96
            if (r1 != 0) goto L14
            com.tkay.expressad.videocommon.e.c r1 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Exception -> L96
            com.tkay.expressad.videocommon.e.a r1 = r1.b()     // Catch: java.lang.Exception -> L96
            r9.o = r1     // Catch: java.lang.Exception -> L96
        L14:
            com.tkay.expressad.videocommon.e.a r1 = r9.o     // Catch: java.lang.Exception -> L96
            java.util.Map r1 = r1.i()     // Catch: java.lang.Exception -> L96
            if (r0 == 0) goto L9d
            int r2 = r0.size()     // Catch: java.lang.Exception -> L96
            if (r2 <= 0) goto L9d
            r2 = 0
            r3 = r2
        L24:
            int r4 = r0.size()     // Catch: java.lang.Exception -> L96
            if (r3 >= r4) goto L9d
            java.lang.Object r4 = r0.get(r3)     // Catch: java.lang.Exception -> L96
            com.tkay.expressad.videocommon.c.b r4 = (com.tkay.expressad.videocommon.c.b) r4     // Catch: java.lang.Exception -> L96
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L96
            r5.<init>()     // Catch: java.lang.Exception -> L96
            int r6 = r4.a()     // Catch: java.lang.Exception -> L96
            r5.append(r6)     // Catch: java.lang.Exception -> L96
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L96
            boolean r5 = r1.containsKey(r5)     // Catch: java.lang.Exception -> L96
            if (r5 == 0) goto L61
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L96
            r5.<init>()     // Catch: java.lang.Exception -> L96
            int r6 = r4.a()     // Catch: java.lang.Exception -> L96
            r5.append(r6)     // Catch: java.lang.Exception -> L96
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L96
            java.lang.Object r5 = r1.get(r5)     // Catch: java.lang.Exception -> L96
            java.lang.Integer r5 = (java.lang.Integer) r5     // Catch: java.lang.Exception -> L96
            int r5 = r5.intValue()     // Catch: java.lang.Exception -> L96
            goto L62
        L61:
            r5 = r2
        L62:
            android.content.Context r6 = r9.k     // Catch: java.lang.Exception -> L96
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L96
            r7.<init>()     // Catch: java.lang.Exception -> L96
            java.lang.String r8 = r9.t     // Catch: java.lang.Exception -> L96
            r7.append(r8)     // Catch: java.lang.Exception -> L96
            java.lang.String r8 = "_"
            r7.append(r8)     // Catch: java.lang.Exception -> L96
            int r4 = r4.a()     // Catch: java.lang.Exception -> L96
            r7.append(r4)     // Catch: java.lang.Exception -> L96
            java.lang.String r4 = r7.toString()     // Catch: java.lang.Exception -> L96
            java.lang.Integer r7 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L96
            java.lang.Object r4 = com.tkay.expressad.foundation.h.v.b(r6, r4, r7)     // Catch: java.lang.Exception -> L96
            if (r4 == 0) goto L8f
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.Exception -> L96
            int r4 = r4.intValue()     // Catch: java.lang.Exception -> L96
            goto L90
        L8f:
            r4 = r2
        L90:
            if (r4 >= r5) goto L93
            return r2
        L93:
            int r3 = r3 + 1
            goto L24
        L96:
            r0 = move-exception
            r0.printStackTrace()
            r0.getMessage()
        L9d:
            r0 = 1
            return r0
    }

    static com.tkay.expressad.videocommon.d.a h(com.tkay.expressad.reward.b.a r0) {
            com.tkay.expressad.videocommon.d.a r0 = r0.p
            return r0
    }

    private boolean h() {
            r1 = this;
            com.tkay.expressad.reward.a.d r0 = r1.m
            if (r0 != 0) goto L7
            r1.i()
        L7:
            com.tkay.expressad.reward.a.d r0 = r1.m
            if (r0 == 0) goto L10
            boolean r0 = r0.c()
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    private void i() {
            r4 = this;
            com.tkay.expressad.reward.a.d r0 = new com.tkay.expressad.reward.a.d
            android.content.Context r1 = r4.k
            java.lang.String r2 = r4.t
            java.lang.String r3 = r4.s
            r0.<init>(r1, r2, r3)
            r4.m = r0
            boolean r1 = r4.J
            r0.a(r1)
            com.tkay.expressad.reward.a.d r0 = r4.m
            boolean r1 = r4.K
            r0.b(r1)
            boolean r0 = r4.J
            if (r0 == 0) goto L28
            com.tkay.expressad.reward.a.d r0 = r4.m
            int r1 = r4.B
            int r2 = r4.C
            int r3 = r4.D
            r0.a(r1, r2, r3)
        L28:
            com.tkay.expressad.reward.a.d r0 = r4.m
            com.tkay.expressad.videocommon.e.d r1 = r4.n
            r0.a(r1)
            return
    }

    static boolean i(com.tkay.expressad.reward.b.a r0) {
            boolean r0 = r0.K
            return r0
    }

    static com.tkay.expressad.videocommon.e.d j(com.tkay.expressad.reward.b.a r0) {
            com.tkay.expressad.videocommon.e.d r0 = r0.n
            return r0
    }

    private boolean j() {
            r1 = this;
            com.tkay.expressad.foundation.c.c r0 = r1.X     // Catch: java.lang.Throwable -> L12
            if (r0 != 0) goto L12
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L12
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> L12
            com.tkay.expressad.foundation.c.c r0 = com.tkay.expressad.foundation.c.c.a(r0)     // Catch: java.lang.Throwable -> L12
            r1.X = r0     // Catch: java.lang.Throwable -> L12
        L12:
            r0 = 0
            return r0
    }

    static java.util.ArrayList k(com.tkay.expressad.reward.b.a r0) {
            java.util.ArrayList<java.lang.Integer> r0 = r0.P
            return r0
    }

    static boolean l(com.tkay.expressad.reward.b.a r1) {
            r0 = 0
            r1.R = r0
            return r0
    }

    static java.lang.String m(com.tkay.expressad.reward.b.a r0) {
            java.lang.String r0 = r0.v
            return r0
    }

    static boolean n(com.tkay.expressad.reward.b.a r0) {
            boolean r0 = r0.aa
            return r0
    }

    static boolean o(com.tkay.expressad.reward.b.a r1) {
            r0 = 1
            r1.aa = r0
            return r0
    }

    static boolean p(com.tkay.expressad.reward.b.a r0) {
            boolean r0 = r0.ab
            return r0
    }

    static boolean q(com.tkay.expressad.reward.b.a r1) {
            r0 = 1
            r1.ab = r0
            return r0
    }

    static boolean r(com.tkay.expressad.reward.b.a r0) {
            boolean r0 = r0.ac
            return r0
    }

    static boolean s(com.tkay.expressad.reward.b.a r1) {
            r0 = 1
            r1.ac = r0
            return r0
    }

    static boolean t(com.tkay.expressad.reward.b.a r0) {
            boolean r0 = r0.ae
            return r0
    }

    static boolean u(com.tkay.expressad.reward.b.a r1) {
            r0 = 1
            r1.ad = r0
            return r0
    }

    static boolean v(com.tkay.expressad.reward.b.a r0) {
            boolean r0 = r0.ad
            return r0
    }

    static android.os.Handler w(com.tkay.expressad.reward.b.a r0) {
            android.os.Handler r0 = r0.x
            return r0
    }

    public final void a() {
            r2 = this;
            boolean r0 = r2.Q
            if (r0 == 0) goto L1b
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = com.tkay.expressad.reward.b.a.U
            if (r0 == 0) goto L1b
            java.lang.String r1 = r2.d()
            boolean r0 = r0.containsKey(r1)
            if (r0 != 0) goto L1b
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = com.tkay.expressad.reward.b.a.U
            java.lang.String r1 = r2.d()
            r0.remove(r1)
        L1b:
            return
    }

    public final void a(int r1) {
            r0 = this;
            r0.y = r1
            return
    }

    public final void a(android.app.Activity r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, com.tkay.core.common.f.i r14) {
            r9 = this;
            r0 = 0
            r9.v = r11     // Catch: java.lang.Exception -> L1b8
            r9.r = r12     // Catch: java.lang.Exception -> L1b8
            r9.u = r13     // Catch: java.lang.Exception -> L1b8
            java.lang.Object r12 = r9.S     // Catch: java.lang.Exception -> L1b8
            monitor-enter(r12)     // Catch: java.lang.Exception -> L1b8
            boolean r13 = r9.R     // Catch: java.lang.Throwable -> L1b5
            if (r13 == 0) goto L24
            com.tkay.expressad.videocommon.d.a r10 = r9.p     // Catch: java.lang.Throwable -> L1b5
            if (r10 == 0) goto L22
            com.tkay.expressad.videocommon.d.a r10 = r9.p     // Catch: java.lang.Exception -> L1a java.lang.Throwable -> L1b5
            java.lang.String r11 = "Campaign is show progressing "
            r10.b(r11)     // Catch: java.lang.Exception -> L1a java.lang.Throwable -> L1b5
            goto L22
        L1a:
            r10 = move-exception
            boolean r11 = com.tkay.expressad.b.a     // Catch: java.lang.Throwable -> L1b5
            if (r11 == 0) goto L22
            r10.printStackTrace()     // Catch: java.lang.Throwable -> L1b5
        L22:
            monitor-exit(r12)     // Catch: java.lang.Throwable -> L1b5
            return
        L24:
            r13 = 1
            r9.R = r13     // Catch: java.lang.Throwable -> L1b5
            monitor-exit(r12)     // Catch: java.lang.Throwable -> L1b5
            com.tkay.expressad.reward.b.a$c r12 = r9.q     // Catch: java.lang.Exception -> L1b8
            if (r12 == 0) goto L4f
            com.tkay.expressad.reward.b.a$c r12 = r9.q     // Catch: java.lang.Exception -> L1b8
            java.util.concurrent.atomic.AtomicInteger r12 = com.tkay.expressad.reward.b.a.c.c(r12)     // Catch: java.lang.Exception -> L1b8
            int r12 = r12.get()     // Catch: java.lang.Exception -> L1b8
            if (r12 != r13) goto L4f
            com.tkay.expressad.videocommon.d.a r10 = r9.p     // Catch: java.lang.Exception -> L1b8
            if (r10 == 0) goto L4c
            com.tkay.expressad.videocommon.d.a r10 = r9.p     // Catch: java.lang.Exception -> L44
            java.lang.String r11 = "campaing is loading"
            r10.b(r11)     // Catch: java.lang.Exception -> L44
            goto L4c
        L44:
            r10 = move-exception
            boolean r11 = com.tkay.expressad.b.a     // Catch: java.lang.Exception -> L1b8
            if (r11 == 0) goto L4c
            r10.printStackTrace()     // Catch: java.lang.Exception -> L1b8
        L4c:
            r9.R = r0     // Catch: java.lang.Exception -> L1b8
            return
        L4f:
            android.content.Context r12 = r9.k     // Catch: java.lang.Exception -> L1b8
            if (r12 != 0) goto L6a
            com.tkay.expressad.videocommon.d.a r10 = r9.p     // Catch: java.lang.Exception -> L1b8
            if (r10 == 0) goto L67
            com.tkay.expressad.videocommon.d.a r10 = r9.p     // Catch: java.lang.Exception -> L5f
            java.lang.String r11 = "context is null"
            r10.b(r11)     // Catch: java.lang.Exception -> L5f
            goto L67
        L5f:
            r10 = move-exception
            boolean r11 = com.tkay.expressad.b.a     // Catch: java.lang.Exception -> L1b8
            if (r11 == 0) goto L67
            r10.printStackTrace()     // Catch: java.lang.Exception -> L1b8
        L67:
            r9.R = r0     // Catch: java.lang.Exception -> L1b8
            return
        L6a:
            boolean r12 = r9.J     // Catch: java.lang.Exception -> L1b8
            if (r12 == 0) goto L8d
            android.content.Context r12 = r9.k     // Catch: java.lang.Exception -> L1b8
            boolean r12 = com.tkay.expressad.foundation.h.t.b(r12)     // Catch: java.lang.Exception -> L1b8
            if (r12 != 0) goto L8d
            com.tkay.expressad.videocommon.d.a r10 = r9.p     // Catch: java.lang.Exception -> L1b8
            if (r10 == 0) goto L8a
            com.tkay.expressad.videocommon.d.a r10 = r9.p     // Catch: java.lang.Exception -> L82
            java.lang.String r11 = "network exception"
            r10.b(r11)     // Catch: java.lang.Exception -> L82
            goto L8a
        L82:
            r10 = move-exception
            boolean r11 = com.tkay.expressad.b.a     // Catch: java.lang.Exception -> L1b8
            if (r11 == 0) goto L8a
            r10.printStackTrace()     // Catch: java.lang.Exception -> L1b8
        L8a:
            r9.R = r0     // Catch: java.lang.Exception -> L1b8
            return
        L8d:
            r9.j()     // Catch: java.lang.Exception -> L1b8
            java.text.SimpleDateFormat r12 = new java.text.SimpleDateFormat     // Catch: java.lang.Exception -> Le1
            java.lang.String r13 = "dd"
            r12.<init>(r13)     // Catch: java.lang.Exception -> Le1
            java.util.Date r13 = new java.util.Date     // Catch: java.lang.Exception -> Le1
            r13.<init>()     // Catch: java.lang.Exception -> Le1
            java.lang.String r12 = r12.format(r13)     // Catch: java.lang.Exception -> Le1
            android.content.Context r13 = r9.k     // Catch: java.lang.Exception -> Le1
            java.lang.String r1 = "reward_date"
            java.lang.String r2 = "0"
            java.lang.Object r13 = com.tkay.expressad.foundation.h.v.b(r13, r1, r2)     // Catch: java.lang.Exception -> Le1
            java.lang.String r13 = (java.lang.String) r13     // Catch: java.lang.Exception -> Le1
            boolean r1 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Exception -> Le1
            if (r1 != 0) goto Le1
            boolean r1 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Exception -> Le1
            if (r1 != 0) goto Le1
            boolean r13 = r13.equals(r12)     // Catch: java.lang.Exception -> Le1
            if (r13 != 0) goto Le1
            android.content.Context r13 = r9.k     // Catch: java.lang.Exception -> Le1
            java.lang.String r1 = "reward_date"
            com.tkay.expressad.foundation.h.v.a(r13, r1, r12)     // Catch: java.lang.Exception -> Le1
            android.content.Context r12 = r9.k     // Catch: java.lang.Exception -> Le1
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le1
            r13.<init>()     // Catch: java.lang.Exception -> Le1
            java.lang.String r1 = r9.t     // Catch: java.lang.Exception -> Le1
            r13.append(r1)     // Catch: java.lang.Exception -> Le1
            java.lang.String r1 = "_1"
            r13.append(r1)     // Catch: java.lang.Exception -> Le1
            java.lang.String r13 = r13.toString()     // Catch: java.lang.Exception -> Le1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> Le1
            com.tkay.expressad.foundation.h.v.a(r12, r13, r1)     // Catch: java.lang.Exception -> Le1
        Le1:
            com.tkay.expressad.videocommon.e.a r12 = r9.o     // Catch: java.lang.Exception -> L197
            if (r12 == 0) goto L102
            com.tkay.expressad.videocommon.e.a r12 = r9.o     // Catch: java.lang.Exception -> L197
            java.util.Map r12 = r12.i()     // Catch: java.lang.Exception -> L197
            if (r12 == 0) goto L102
            java.lang.String r13 = "1"
            boolean r13 = r12.containsKey(r13)     // Catch: java.lang.Exception -> L197
            if (r13 == 0) goto L102
            java.lang.String r13 = "1"
            java.lang.Object r12 = r12.get(r13)     // Catch: java.lang.Exception -> L197
            java.lang.Integer r12 = (java.lang.Integer) r12     // Catch: java.lang.Exception -> L197
            int r12 = r12.intValue()     // Catch: java.lang.Exception -> L197
            goto L103
        L102:
            r12 = r0
        L103:
            android.content.Context r13 = r9.k     // Catch: java.lang.Exception -> L197
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L197
            r1.<init>()     // Catch: java.lang.Exception -> L197
            java.lang.String r2 = r9.t     // Catch: java.lang.Exception -> L197
            r1.append(r2)     // Catch: java.lang.Exception -> L197
            java.lang.String r2 = "_1"
            r1.append(r2)     // Catch: java.lang.Exception -> L197
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L197
            java.lang.Integer r2 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> L197
            java.lang.Object r13 = com.tkay.expressad.foundation.h.v.b(r13, r1, r2)     // Catch: java.lang.Exception -> L197
            if (r13 == 0) goto L147
            android.content.Context r13 = r9.k     // Catch: java.lang.Exception -> L197
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L197
            r1.<init>()     // Catch: java.lang.Exception -> L197
            java.lang.String r2 = r9.t     // Catch: java.lang.Exception -> L197
            r1.append(r2)     // Catch: java.lang.Exception -> L197
            java.lang.String r2 = "_1"
            r1.append(r2)     // Catch: java.lang.Exception -> L197
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L197
            java.lang.Integer r2 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> L197
            java.lang.Object r13 = com.tkay.expressad.foundation.h.v.b(r13, r1, r2)     // Catch: java.lang.Exception -> L197
            java.lang.Integer r13 = (java.lang.Integer) r13     // Catch: java.lang.Exception -> L197
            int r13 = r13.intValue()     // Catch: java.lang.Exception -> L197
            r9.l = r13     // Catch: java.lang.Exception -> L197
        L147:
            com.tkay.expressad.reward.a.d r13 = r9.m     // Catch: java.lang.Exception -> L197
            if (r13 != 0) goto L14e
            r9.i()     // Catch: java.lang.Exception -> L197
        L14e:
            com.tkay.expressad.reward.a.d r13 = r9.m     // Catch: java.lang.Exception -> L197
            if (r13 == 0) goto L180
            com.tkay.expressad.reward.a.d r13 = r9.m     // Catch: java.lang.Exception -> L197
            boolean r13 = r13.c()     // Catch: java.lang.Exception -> L197
            if (r13 == 0) goto L180
            int r13 = r9.l     // Catch: java.lang.Exception -> L197
            if (r13 < r12) goto L163
            if (r12 <= 0) goto L163
            r9.R = r0     // Catch: java.lang.Exception -> L197
            return
        L163:
            com.tkay.expressad.reward.b.a$d r3 = new com.tkay.expressad.reward.b.a$d     // Catch: java.lang.Exception -> L197
            android.os.Handler r12 = r9.x     // Catch: java.lang.Exception -> L197
            r3.<init>(r9, r9, r12)     // Catch: java.lang.Exception -> L197
            java.util.Map<java.lang.String, com.tkay.expressad.reward.b.a$d> r12 = com.tkay.expressad.reward.b.a.c     // Catch: java.lang.Exception -> L197
            java.lang.String r13 = r9.s     // Catch: java.lang.Exception -> L197
            r12.put(r13, r3)     // Catch: java.lang.Exception -> L197
            com.tkay.expressad.reward.a.d r1 = r9.m     // Catch: java.lang.Exception -> L197
            java.lang.String r5 = r9.r     // Catch: java.lang.Exception -> L197
            int r6 = r9.y     // Catch: java.lang.Exception -> L197
            java.lang.String r7 = r9.u     // Catch: java.lang.Exception -> L197
            r2 = r10
            r4 = r11
            r8 = r14
            r1.a(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L197
            return
        L180:
            r9.R = r0     // Catch: java.lang.Exception -> L197
            com.tkay.expressad.videocommon.d.a r10 = r9.p     // Catch: java.lang.Exception -> L197
            if (r10 == 0) goto L196
            com.tkay.expressad.videocommon.d.a r10 = r9.p     // Catch: java.lang.Exception -> L18e
            java.lang.String r11 = "can't show because load is failed"
            r10.b(r11)     // Catch: java.lang.Exception -> L18e
            return
        L18e:
            r10 = move-exception
            boolean r11 = com.tkay.expressad.b.a     // Catch: java.lang.Exception -> L197
            if (r11 == 0) goto L196
            r10.printStackTrace()     // Catch: java.lang.Exception -> L197
        L196:
            return
        L197:
            r10 = move-exception
            boolean r11 = com.tkay.expressad.b.a     // Catch: java.lang.Exception -> L1b8
            if (r11 == 0) goto L19f
            r10.getLocalizedMessage()     // Catch: java.lang.Exception -> L1b8
        L19f:
            com.tkay.expressad.videocommon.d.a r11 = r9.p     // Catch: java.lang.Exception -> L1b8
            if (r11 == 0) goto L1b2
            com.tkay.expressad.videocommon.d.a r11 = r9.p     // Catch: java.lang.Exception -> L1ab
            java.lang.String r12 = "show exception"
            r11.b(r12)     // Catch: java.lang.Exception -> L1ab
            goto L1b2
        L1ab:
            boolean r11 = com.tkay.expressad.b.a     // Catch: java.lang.Exception -> L1b8
            if (r11 == 0) goto L1b2
            r10.printStackTrace()     // Catch: java.lang.Exception -> L1b8
        L1b2:
            r9.R = r0     // Catch: java.lang.Exception -> L1b8
            return
        L1b5:
            r10 = move-exception
            monitor-exit(r12)     // Catch: java.lang.Exception -> L1b8
            throw r10     // Catch: java.lang.Exception -> L1b8
        L1b8:
            r10 = move-exception
            boolean r11 = com.tkay.expressad.b.a
            if (r11 == 0) goto L1c0
            r10.getLocalizedMessage()
        L1c0:
            com.tkay.expressad.videocommon.d.a r11 = r9.p
            if (r11 == 0) goto L1d3
            com.tkay.expressad.videocommon.d.a r11 = r9.p     // Catch: java.lang.Exception -> L1cc
            java.lang.String r12 = "show exception"
            r11.b(r12)     // Catch: java.lang.Exception -> L1cc
            goto L1d3
        L1cc:
            boolean r11 = com.tkay.expressad.b.a
            if (r11 == 0) goto L1d3
            r10.printStackTrace()
        L1d3:
            r9.R = r0
            return
    }

    public final void a(com.tkay.expressad.foundation.d.d r6) {
            r5 = this;
            if (r6 != 0) goto La
            com.tkay.expressad.reward.b.a$c r6 = r5.q
            java.lang.String r0 = "Campaign data is NULL"
            com.tkay.expressad.reward.b.a.c.b(r6, r0)
            return
        La:
            com.tkay.expressad.reward.b.a$c r0 = r5.q
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L1c
            com.tkay.expressad.reward.b.a$c r0 = r5.q
            int r0 = com.tkay.expressad.reward.b.a.c.a(r0)
            r3 = 3
            if (r0 != r3) goto L1c
            r5.Y = r2
            goto L23
        L1c:
            r5.Y = r1
            com.tkay.expressad.reward.b.a$c r0 = r5.q
            com.tkay.expressad.reward.b.a.c.b(r0)
        L23:
            r5.N = r1
            android.os.Handler r0 = r5.x
            r1 = 1001001(0xf4629, float:1.402701E-39)
            r0.removeMessages(r1)
            r5.ab = r2
            r5.aa = r2
            r5.ac = r2
            r5.ad = r2
            com.tkay.expressad.reward.a.c.a()
            com.tkay.expressad.videocommon.e.c r0 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Exception -> Lc4
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> Lc4
            java.lang.String r1 = r1.e()     // Catch: java.lang.Exception -> Lc4
            java.lang.String r2 = r5.s     // Catch: java.lang.Exception -> Lc4
            boolean r3 = r5.J     // Catch: java.lang.Exception -> Lc4
            com.tkay.expressad.videocommon.e.d r0 = r0.a(r1, r2, r3)     // Catch: java.lang.Exception -> Lc4
            r5.n = r0     // Catch: java.lang.Exception -> Lc4
            java.lang.String r0 = r5.t     // Catch: java.lang.Exception -> Lc4
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> Lc4
            if (r0 != 0) goto L5d
            com.tkay.expressad.videocommon.e.d r0 = r5.n     // Catch: java.lang.Exception -> Lc4
            java.lang.String r1 = r5.t     // Catch: java.lang.Exception -> Lc4
            r0.b(r1)     // Catch: java.lang.Exception -> Lc4
        L5d:
            com.tkay.expressad.videocommon.e.d r0 = r5.n     // Catch: java.lang.Exception -> Lc4
            int r0 = r0.S()     // Catch: java.lang.Exception -> Lc4
            int r0 = r0 * 1000
            android.os.Handler r1 = r5.x     // Catch: java.lang.Exception -> Lc4
            if (r1 == 0) goto L81
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lc4
            java.lang.String r2 = "start load timeout for "
            r1.<init>(r2)     // Catch: java.lang.Exception -> Lc4
            r1.append(r0)     // Catch: java.lang.Exception -> Lc4
            java.lang.String r2 = " ms"
            r1.append(r2)     // Catch: java.lang.Exception -> Lc4
            android.os.Handler r1 = r5.x     // Catch: java.lang.Exception -> Lc4
            r2 = 1001002(0xf462a, float:1.402703E-39)
            long r3 = (long) r0     // Catch: java.lang.Exception -> Lc4
            r1.sendEmptyMessageDelayed(r2, r3)     // Catch: java.lang.Exception -> Lc4
        L81:
            com.tkay.expressad.videocommon.e.d r0 = r5.n     // Catch: java.lang.Exception -> Lc4
            java.util.Queue r0 = r0.Q()     // Catch: java.lang.Exception -> Lc4
            r5.V = r0     // Catch: java.lang.Exception -> Lc4
            boolean r0 = r5.g()     // Catch: java.lang.Exception -> L93
            if (r0 == 0) goto L9b
            r5.f()     // Catch: java.lang.Exception -> L93
            goto L9b
        L93:
            r0 = move-exception
            boolean r1 = com.tkay.expressad.b.a     // Catch: java.lang.Exception -> Lc4
            if (r1 == 0) goto L9b
            r0.printStackTrace()     // Catch: java.lang.Exception -> Lc4
        L9b:
            r5.c(r6)     // Catch: java.lang.Exception -> L9f
            return
        L9f:
            r6 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb6
            java.lang.String r1 = "load mv api error:"
            r0.<init>(r1)     // Catch: java.lang.Exception -> Lb6
            java.lang.String r6 = r6.getMessage()     // Catch: java.lang.Exception -> Lb6
            r0.append(r6)     // Catch: java.lang.Exception -> Lb6
            java.lang.String r6 = r0.toString()     // Catch: java.lang.Exception -> Lb6
            r5.b(r6)     // Catch: java.lang.Exception -> Lb6
            return
        Lb6:
            r6 = move-exception
            java.lang.String r0 = "can't show because unknow error"
            r5.b(r0)     // Catch: java.lang.Exception -> Lc4
            boolean r0 = com.tkay.expressad.b.a     // Catch: java.lang.Exception -> Lc4
            if (r0 == 0) goto Lc3
            r6.printStackTrace()     // Catch: java.lang.Exception -> Lc4
        Lc3:
            return
        Lc4:
            r6 = move-exception
            com.tkay.expressad.reward.b.a$c r0 = r5.q
            if (r0 == 0) goto Ld0
            com.tkay.expressad.reward.b.a$c r0 = r5.q
            java.lang.String r1 = "load exception"
            com.tkay.expressad.reward.b.a.c.a(r0, r1)
        Ld0:
            boolean r0 = com.tkay.expressad.b.a
            if (r0 == 0) goto Ld7
            r6.printStackTrace()
        Ld7:
            return
    }

    public final void a(com.tkay.expressad.videocommon.d.a r8) {
            r7 = this;
            r7.p = r8
            com.tkay.expressad.reward.b.a$c r6 = new com.tkay.expressad.reward.b.a$c
            android.os.Handler r3 = r7.x
            java.lang.String r4 = r7.s
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            r7.q = r6
            return
    }

    public final void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L47
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> L47
            r1.k = r0     // Catch: java.lang.Throwable -> L47
            r1.s = r3     // Catch: java.lang.Throwable -> L47
            r1.t = r2     // Catch: java.lang.Throwable -> L47
            com.tkay.expressad.videocommon.e.c r2 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Throwable -> L47
            com.tkay.expressad.videocommon.e.a r2 = r2.b()     // Catch: java.lang.Throwable -> L47
            r1.o = r2     // Catch: java.lang.Throwable -> L47
            com.tkay.expressad.foundation.h.m.b()     // Catch: java.lang.Throwable -> L47
            com.tkay.expressad.videocommon.b.k r2 = com.tkay.expressad.videocommon.b.k.a()     // Catch: java.lang.Throwable -> L47
            r2.b()     // Catch: java.lang.Throwable -> L47
            com.tkay.expressad.videocommon.b.h r2 = com.tkay.expressad.videocommon.b.h.a()     // Catch: java.lang.Throwable -> L47
            r2.b()     // Catch: java.lang.Throwable -> L47
            com.tkay.expressad.videocommon.e.c r2 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Throwable -> L47
            java.lang.String r3 = r1.s     // Catch: java.lang.Throwable -> L47
            boolean r0 = r1.J     // Catch: java.lang.Throwable -> L47
            r2.a(r3, r0)     // Catch: java.lang.Throwable -> L47
            com.tkay.expressad.foundation.c.c r2 = r1.X     // Catch: java.lang.Throwable -> L47
            if (r2 != 0) goto L46
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L47
            android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> L47
            com.tkay.expressad.foundation.c.c r2 = com.tkay.expressad.foundation.c.c.a(r2)     // Catch: java.lang.Throwable -> L47
            r1.X = r2     // Catch: java.lang.Throwable -> L47
        L46:
            return
        L47:
            r2 = move-exception
            r2.getMessage()
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.J = r1
            return
    }

    @Override
    public boolean isReady() {
            r3 = this;
            r0 = 0
            r3.j()     // Catch: java.lang.Throwable -> L1a
            boolean r1 = r3.K     // Catch: java.lang.Throwable -> L1a
            if (r1 != 0) goto L22
            com.tkay.expressad.reward.a.d r1 = r3.m     // Catch: java.lang.Throwable -> L1a
            if (r1 != 0) goto Lf
            r3.i()     // Catch: java.lang.Throwable -> L1a
        Lf:
            com.tkay.expressad.reward.a.d r1 = r3.m     // Catch: java.lang.Throwable -> L1a
            if (r1 == 0) goto L22
            com.tkay.expressad.reward.a.d r1 = r3.m     // Catch: java.lang.Throwable -> L1a
            boolean r0 = r1.c()     // Catch: java.lang.Throwable -> L1a
            goto L22
        L1a:
            r1 = move-exception
            boolean r2 = com.tkay.expressad.b.a
            if (r2 == 0) goto L22
            r1.printStackTrace()
        L22:
            return r0
    }
}
