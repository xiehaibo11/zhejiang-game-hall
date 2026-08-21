package com.tkay.expressad.reward.a;

public final class d implements com.tkay.expressad.reward.a.a {
    private static final int L = 8;
    private static final int M = 9;
    private static final int N = 16;
    private static final int O = 17;
    private static final int P = 5000;
    private static final int Q = 30000;
    public static final java.lang.String a = "APP ALREADY INSTALLED";
    public static final java.lang.String b = "Offer list is empty";
    public static final java.lang.String d = "1";
    public static final java.lang.String e = "1";
    public static final int f = 1;
    public static final int g = 2;
    public static final int h = 3;
    public static final int i = 4;
    public static final int j = 5;
    public static final int k = 6;
    public static final int l = 7;
    private static final java.lang.String u = "RewardMVVideoAdapter";
    private int A;
    private int B;
    private boolean C;
    private java.lang.String D;
    private java.lang.String E;
    private com.tkay.expressad.video.bt.module.b.h F;
    private volatile com.tkay.expressad.reward.a.b G;
    private java.lang.Runnable H;
    private com.tkay.expressad.videocommon.e.d I;
    private boolean J;
    private boolean K;
    private java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> R;
    private int S;
    private boolean T;
    private boolean U;
    private java.lang.String V;
    private int W;
    private int X;
    private int Y;
    private com.tkay.expressad.foundation.d.d Z;
    private java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> aa;
    private boolean ab;
    private long ac;
    private android.os.Handler ad;
    private long ae;
    private java.lang.String af;
    private java.util.List<com.tkay.expressad.foundation.d.c> ag;
    private java.util.List<com.tkay.expressad.foundation.d.c> ah;
    public java.lang.Object c;
    public java.lang.String m;
    public java.lang.String n;
    boolean o;
    volatile boolean p;
    volatile boolean q;
    volatile boolean r;
    volatile boolean s;
    volatile boolean t;
    private android.content.Context v;
    private java.lang.String w;
    private java.lang.String x;
    private int y;
    private int z;


    final class 2 implements com.tkay.expressad.reward.a.c.c {
        final boolean a;
        final com.tkay.expressad.foundation.d.c b;
        final int c;
        final com.tkay.expressad.reward.a.d d;




        2(com.tkay.expressad.reward.a.d r1, boolean r2, com.tkay.expressad.foundation.d.c r3, int r4) {
                r0 = this;
                r0.d = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.<init>()
                return
        }

        @Override
        public final void a(java.lang.String r12, java.lang.String r13, java.lang.String r14, java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r15) {
                r11 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "Campaign download sucess: "
                r0.<init>(r1)
                int r1 = r15.size()
                r0.append(r1)
                com.tkay.expressad.reward.a.d r0 = r11.d
                r1 = 1
                r0.p = r1
                if (r15 == 0) goto L18
                r15.size()
            L18:
                boolean r0 = r11.a
                if (r0 != 0) goto L14b
                java.util.Iterator r0 = r15.iterator()
            L20:
                boolean r2 = r0.hasNext()
                if (r2 == 0) goto L14a
                java.lang.Object r2 = r0.next()
                r5 = r2
                com.tkay.expressad.foundation.d.c r5 = (com.tkay.expressad.foundation.d.c) r5
                if (r5 == 0) goto L70
                com.tkay.expressad.foundation.d.c$c r2 = r5.M()
                if (r2 == 0) goto L70
                com.tkay.expressad.foundation.d.c$c r2 = r5.M()
                java.lang.String r2 = r2.e()
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                if (r2 != 0) goto L70
                com.tkay.expressad.foundation.d.c$c r2 = r5.M()
                java.lang.String r2 = r2.e()
                java.lang.String r3 = "cmpt=1"
                boolean r2 = r2.contains(r3)
                if (r2 != 0) goto L70
                com.tkay.expressad.reward.a.d r2 = r11.d
                android.os.Handler r2 = com.tkay.expressad.reward.a.d.i(r2)
                if (r2 == 0) goto L70
                com.tkay.expressad.reward.a.d r2 = r11.d
                android.os.Handler r2 = com.tkay.expressad.reward.a.d.i(r2)
                com.tkay.expressad.reward.a.d$2$1 r10 = new com.tkay.expressad.reward.a.d$2$1
                r3 = r10
                r4 = r11
                r6 = r12
                r7 = r13
                r8 = r14
                r9 = r15
                r3.<init>(r4, r5, r6, r7, r8, r9)
                r2.post(r10)
                goto L20
            L70:
                com.tkay.expressad.reward.a.d r2 = r11.d
                java.util.concurrent.CopyOnWriteArrayList r3 = com.tkay.expressad.reward.a.d.e(r2)
                boolean r4 = r11.a
                int r6 = r11.c
                boolean r2 = r2.a(r3, r4, r6)
                r3 = 5
                r4 = 0
                if (r2 == 0) goto Le1
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                java.lang.String r5 = "模板加载成功 requestId "
                r2.<init>(r5)
                java.lang.Object r4 = r15.get(r4)
                com.tkay.expressad.foundation.d.c r4 = (com.tkay.expressad.foundation.d.c) r4
                java.lang.String r4 = r4.Z()
                r2.append(r4)
                com.tkay.expressad.reward.a.d r2 = r11.d
                java.lang.String r2 = com.tkay.expressad.reward.a.d.f(r2)
                com.tkay.expressad.reward.a.d r4 = r11.d
                java.util.List r4 = com.tkay.expressad.reward.a.d.g(r4)
                com.tkay.expressad.reward.a.d r5 = r11.d
                com.tkay.expressad.reward.a.d.h(r5)
                com.tkay.expressad.reward.a.d.a(r2, r4)
                com.tkay.expressad.reward.a.d r2 = r11.d
                android.os.Handler r2 = com.tkay.expressad.reward.a.d.i(r2)
                if (r2 == 0) goto Lbb
                com.tkay.expressad.reward.a.d r2 = r11.d
                android.os.Handler r2 = com.tkay.expressad.reward.a.d.i(r2)
                r2.removeMessages(r3)
            Lbb:
                com.tkay.expressad.reward.a.d r2 = r11.d
                com.tkay.expressad.reward.a.b r2 = com.tkay.expressad.reward.a.d.c(r2)
                if (r2 == 0) goto L20
                com.tkay.expressad.reward.a.d r2 = r11.d
                boolean r2 = r2.s
                if (r2 != 0) goto L20
                com.tkay.expressad.reward.a.d r2 = r11.d
                r2.s = r1
                com.tkay.expressad.reward.a.d r2 = r11.d
                java.lang.String r2 = com.tkay.expressad.reward.a.d.f(r2)
                android.text.TextUtils.isEmpty(r2)
                com.tkay.expressad.reward.a.d r2 = r11.d
                com.tkay.expressad.reward.a.b r2 = com.tkay.expressad.reward.a.d.c(r2)
                r2.a()
                goto L20
            Le1:
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                java.lang.String r6 = "temp load fail requestId "
                r2.<init>(r6)
                java.lang.Object r4 = r15.get(r4)
                com.tkay.expressad.foundation.d.c r4 = (com.tkay.expressad.foundation.d.c) r4
                java.lang.String r4 = r4.Z()
                r2.append(r4)
                com.tkay.expressad.reward.a.d r2 = r11.d
                com.tkay.expressad.reward.a.d.d(r2)
                com.tkay.expressad.reward.a.d r2 = r11.d
                com.tkay.expressad.reward.a.d.h(r2)
                com.tkay.expressad.reward.a.d r2 = r11.d
                android.os.Handler r2 = com.tkay.expressad.reward.a.d.i(r2)
                if (r2 == 0) goto L110
                com.tkay.expressad.reward.a.d r2 = r11.d
                android.os.Handler r2 = com.tkay.expressad.reward.a.d.i(r2)
                r2.removeMessages(r3)
            L110:
                com.tkay.expressad.reward.a.d r2 = r11.d
                com.tkay.expressad.reward.a.b r2 = com.tkay.expressad.reward.a.d.c(r2)
                if (r2 == 0) goto L20
                com.tkay.expressad.reward.a.d r2 = r11.d
                boolean r2 = r2.t
                if (r2 != 0) goto L20
                com.tkay.expressad.reward.a.d r2 = r11.d
                r2.t = r1
                com.tkay.expressad.reward.a.d r2 = r11.d
                java.lang.String r2 = com.tkay.expressad.reward.a.d.f(r2)
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                if (r2 != 0) goto L13d
                if (r5 == 0) goto L13d
                java.lang.String r2 = r5.aa()
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                if (r2 != 0) goto L13d
                r5.aa()
            L13d:
                com.tkay.expressad.reward.a.d r2 = r11.d
                com.tkay.expressad.reward.a.b r2 = com.tkay.expressad.reward.a.d.c(r2)
                java.lang.String r3 = "errorCode: 3503 errorMessage: have no temp but isReady false"
                r2.a(r3)
                goto L20
            L14a:
                return
            L14b:
                com.tkay.expressad.reward.a.d r12 = r11.d
                boolean r12 = r12.q
                if (r12 == 0) goto L183
                com.tkay.expressad.reward.a.d r12 = r11.d
                boolean r12 = r12.r
                if (r12 != 0) goto L183
                com.tkay.expressad.reward.a.d r12 = r11.d
                android.os.Handler r12 = com.tkay.expressad.reward.a.d.i(r12)
                if (r12 == 0) goto L183
                com.tkay.expressad.reward.a.d r12 = r11.d
                java.lang.Object r12 = r12.c
                monitor-enter(r12)
                com.tkay.expressad.reward.a.d r0 = r11.d     // Catch: java.lang.Throwable -> L180
                boolean r0 = r0.r     // Catch: java.lang.Throwable -> L180
                if (r0 == 0) goto L16c
                monitor-exit(r12)     // Catch: java.lang.Throwable -> L180
                return
            L16c:
                com.tkay.expressad.reward.a.d r0 = r11.d     // Catch: java.lang.Throwable -> L180
                r0.r = r1     // Catch: java.lang.Throwable -> L180
                monitor-exit(r12)     // Catch: java.lang.Throwable -> L180
                com.tkay.expressad.reward.a.d r12 = r11.d
                android.os.Handler r12 = com.tkay.expressad.reward.a.d.i(r12)
                com.tkay.expressad.reward.a.d$2$2 r0 = new com.tkay.expressad.reward.a.d$2$2
                r0.<init>(r11, r14, r13, r15)
                r12.post(r0)
                return
            L180:
                r13 = move-exception
                monitor-exit(r12)
                throw r13
            L183:
                java.lang.StringBuilder r12 = new java.lang.StringBuilder
                java.lang.String r13 = "Campaign download success:bid temp,big temp download fail: isCampaignTPLDownloadSuccess: "
                r12.<init>(r13)
                com.tkay.expressad.reward.a.d r13 = r11.d
                boolean r13 = r13.q
                r12.append(r13)
                java.lang.String r13 = "  isCampaignTPLProLoad: "
                r12.append(r13)
                com.tkay.expressad.reward.a.d r13 = r11.d
                boolean r13 = r13.r
                r12.append(r13)
                return
        }

        @Override
        public final void a(java.lang.String r3, java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r4) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "Campaign download fail: "
                r0.<init>(r1)
                int r1 = r4.size()
                r0.append(r1)
                com.tkay.expressad.reward.a.d r0 = r2.d
                r1 = 0
                r0.p = r1
                if (r4 == 0) goto L18
                r4.size()
            L18:
                com.tkay.expressad.reward.a.d r4 = r2.d
                com.tkay.expressad.reward.a.b r4 = com.tkay.expressad.reward.a.d.c(r4)
                if (r4 == 0) goto L36
                com.tkay.expressad.reward.a.d r4 = r2.d
                android.os.Handler r4 = com.tkay.expressad.reward.a.d.i(r4)
                if (r4 == 0) goto L36
                com.tkay.expressad.reward.a.d r4 = r2.d
                android.os.Handler r4 = com.tkay.expressad.reward.a.d.i(r4)
                com.tkay.expressad.reward.a.d$2$3 r0 = new com.tkay.expressad.reward.a.d$2$3
                r0.<init>(r2, r3)
                r4.post(r0)
            L36:
                return
        }
    }


    final class 4 implements com.tkay.expressad.reward.a.c.i {
        final com.tkay.expressad.foundation.d.c a;
        final boolean b;
        final int c;
        final com.tkay.expressad.reward.a.d d;


        4(com.tkay.expressad.reward.a.d r1, com.tkay.expressad.foundation.d.c r2, boolean r3, int r4) {
                r0 = this;
                r0.d = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.<init>()
                return
        }

        @Override
        public final void a(java.lang.String r3) {
                r2 = this;
                com.tkay.expressad.reward.a.d r3 = r2.d
                java.util.List r3 = com.tkay.expressad.reward.a.d.d(r3)
                r0 = 0
                java.lang.Object r3 = r3.get(r0)
                if (r3 == 0) goto L16
                com.tkay.expressad.reward.a.d r3 = r2.d
                java.util.List r3 = com.tkay.expressad.reward.a.d.d(r3)
                r3.size()
            L16:
                com.tkay.expressad.foundation.d.c r3 = r2.a
                java.util.ArrayList r3 = r3.aB()
                if (r3 == 0) goto L60
                com.tkay.expressad.foundation.d.c r3 = r2.a
                java.util.ArrayList r3 = r3.aB()
                int r3 = r3.size()
                if (r3 <= 0) goto L60
                com.tkay.expressad.foundation.d.c r3 = r2.a
                java.util.ArrayList r3 = r3.aB()
                r1 = 3
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                boolean r3 = r3.contains(r1)
                if (r3 == 0) goto L3c
                return
            L3c:
                com.tkay.expressad.foundation.d.c r3 = r2.a
                java.lang.String r3 = r3.ar()
                com.tkay.expressad.foundation.d.c r1 = r2.a
                java.lang.String r1 = r1.I()
                boolean r3 = r3.equals(r1)
                if (r3 == 0) goto L60
                com.tkay.expressad.foundation.d.c r3 = r2.a
                java.util.ArrayList r3 = r3.aB()
                r1 = 2
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                boolean r3 = r3.contains(r1)
                if (r3 == 0) goto L60
                return
            L60:
                com.tkay.expressad.reward.a.d r3 = r2.d
                r3.q = r0
                com.tkay.expressad.reward.a.d r3 = r2.d
                com.tkay.expressad.reward.a.d.d(r3)
                com.tkay.expressad.reward.a.d r3 = r2.d
                com.tkay.expressad.reward.a.d.h(r3)
                com.tkay.expressad.reward.a.d r3 = r2.d
                android.os.Handler r3 = com.tkay.expressad.reward.a.d.i(r3)
                if (r3 == 0) goto L80
                com.tkay.expressad.reward.a.d r3 = r2.d
                android.os.Handler r3 = com.tkay.expressad.reward.a.d.i(r3)
                r0 = 5
                r3.removeMessages(r0)
            L80:
                com.tkay.expressad.reward.a.d r3 = r2.d
                com.tkay.expressad.reward.a.b r3 = com.tkay.expressad.reward.a.d.c(r3)
                if (r3 == 0) goto L9e
                com.tkay.expressad.reward.a.d r3 = r2.d
                boolean r3 = r3.t
                if (r3 != 0) goto L9e
                com.tkay.expressad.reward.a.d r3 = r2.d
                r0 = 1
                r3.t = r0
                com.tkay.expressad.reward.a.d r3 = r2.d
                com.tkay.expressad.reward.a.b r3 = com.tkay.expressad.reward.a.d.c(r3)
                java.lang.String r0 = "errorCode: 3203 errorMessage: tpl temp resource download failed"
                r3.a(r0)
            L9e:
                return
        }

        @Override
        public final void a(java.lang.String r4, java.lang.String r5, java.lang.String r6) {
                r3 = this;
                com.tkay.expressad.reward.a.d r0 = r3.d
                r1 = 1
                r0.q = r1
                com.tkay.expressad.reward.a.d r0 = r3.d
                boolean r0 = r0.p
                if (r0 == 0) goto L3d
                com.tkay.expressad.reward.a.d r0 = r3.d
                boolean r0 = r0.r
                if (r0 != 0) goto L3d
                com.tkay.expressad.reward.a.d r0 = r3.d
                android.os.Handler r0 = com.tkay.expressad.reward.a.d.i(r0)
                if (r0 == 0) goto L3d
                com.tkay.expressad.reward.a.d r0 = r3.d
                java.lang.Object r0 = r0.c
                monitor-enter(r0)
                com.tkay.expressad.reward.a.d r2 = r3.d     // Catch: java.lang.Throwable -> L3a
                boolean r2 = r2.r     // Catch: java.lang.Throwable -> L3a
                if (r2 == 0) goto L26
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L3a
                return
            L26:
                com.tkay.expressad.reward.a.d r2 = r3.d     // Catch: java.lang.Throwable -> L3a
                r2.r = r1     // Catch: java.lang.Throwable -> L3a
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L3a
                com.tkay.expressad.reward.a.d r0 = r3.d
                android.os.Handler r0 = com.tkay.expressad.reward.a.d.i(r0)
                com.tkay.expressad.reward.a.d$4$1 r1 = new com.tkay.expressad.reward.a.d$4$1
                r1.<init>(r3, r6, r4, r5)
                r0.post(r1)
                return
            L3a:
                r4 = move-exception
                monitor-exit(r0)
                throw r4
            L3d:
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                java.lang.String r5 = "bid temp,big temp download success，Campaign 下载不成功，isCampaignsDownloadSuccess: "
                r4.<init>(r5)
                com.tkay.expressad.reward.a.d r5 = r3.d
                boolean r5 = r5.p
                r4.append(r5)
                java.lang.String r5 = "  isCampaignTPLProLoad: "
                r4.append(r5)
                com.tkay.expressad.reward.a.d r5 = r3.d
                boolean r5 = r5.r
                r4.append(r5)
                return
        }
    }

    final class 5 implements java.lang.Runnable {
        final com.tkay.expressad.foundation.d.d a;
        final com.tkay.expressad.reward.a.d b;

        5(com.tkay.expressad.reward.a.d r1, com.tkay.expressad.foundation.d.d r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.tkay.expressad.foundation.d.d r0 = r2.a
                if (r0 == 0) goto L1b
                java.util.ArrayList<com.tkay.expressad.foundation.d.c> r0 = r0.J
                if (r0 == 0) goto L1b
                com.tkay.expressad.foundation.d.d r0 = r2.a
                java.util.ArrayList<com.tkay.expressad.foundation.d.c> r0 = r0.J
                int r0 = r0.size()
                if (r0 <= 0) goto L1b
                com.tkay.expressad.reward.a.d r0 = r2.b
                com.tkay.expressad.foundation.d.d r1 = r2.a
                java.util.ArrayList<com.tkay.expressad.foundation.d.c> r1 = r1.J
                com.tkay.expressad.reward.a.d.a(r0, r1)
            L1b:
                return
        }
    }

    private static class a extends com.tkay.expressad.atsignalcommon.a.a {
        private com.tkay.expressad.reward.a.d b;
        private java.lang.String c;
        private java.lang.String d;
        private com.tkay.expressad.videocommon.a.a e;
        private com.tkay.expressad.foundation.d.c f;
        private boolean g;
        private boolean h;
        private com.tkay.expressad.reward.a.d.g i;
        private android.os.Handler j;

        public a(java.lang.String r1, java.lang.String r2, com.tkay.expressad.videocommon.a.a r3, com.tkay.expressad.foundation.d.c r4, com.tkay.expressad.reward.a.d r5, com.tkay.expressad.reward.a.d.g r6, android.os.Handler r7) {
                r0 = this;
                r0.<init>()
                r0.c = r1
                r0.d = r2
                r0.e = r3
                if (r5 == 0) goto Ld
                r0.b = r5
            Ld:
                r0.f = r4
                r0.i = r6
                r0.j = r7
                return
        }

        @Override
        public final java.lang.String a(java.lang.String r2) {
                r1 = this;
                com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.a()
                java.lang.String r2 = r0.c(r2)
                return r2
        }

        @Override
        public final void a(java.lang.String r1, int r2, int r3) {
                r0 = this;
                return
        }

        @Override
        public final void onPageFinished(android.webkit.WebView r1, java.lang.String r2) {
                r0 = this;
                super.onPageFinished(r1, r2)
                boolean r2 = r0.g
                if (r2 != 0) goto L10
                com.tkay.expressad.atsignalcommon.windvane.j.a()
                com.tkay.expressad.atsignalcommon.windvane.j.b(r1)
                r1 = 1
                r0.g = r1
            L10:
                return
        }

        @Override
        public final void onReceivedError(android.webkit.WebView r1, int r2, java.lang.String r3, java.lang.String r4) {
                r0 = this;
                super.onReceivedError(r1, r2, r3, r4)
                com.tkay.expressad.reward.a.d r1 = r0.b     // Catch: java.lang.Throwable -> L18
                if (r1 == 0) goto L17
                com.tkay.expressad.reward.a.d r1 = r0.b     // Catch: java.lang.Throwable -> L18
                monitor-enter(r1)     // Catch: java.lang.Throwable -> L18
                com.tkay.expressad.reward.a.d r2 = r0.b     // Catch: java.lang.Throwable -> L14
                com.tkay.expressad.reward.a.d.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L14
                r2 = 0
                r0.b = r2     // Catch: java.lang.Throwable -> L14
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L14
                return
            L14:
                r2 = move-exception
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L18
                throw r2     // Catch: java.lang.Throwable -> L18
            L17:
                return
            L18:
                r1 = move-exception
                r1.getMessage()
                return
        }

        @Override
        public final void readyState(android.webkit.WebView r2, int r3) {
                r1 = this;
                boolean r2 = r1.h
                if (r2 != 0) goto L36
                com.tkay.expressad.reward.a.d$g r2 = r1.i
                if (r2 == 0) goto Lf
                android.os.Handler r3 = r1.j
                if (r3 == 0) goto Lf
                r3.removeCallbacks(r2)
            Lf:
                com.tkay.expressad.videocommon.b.j r2 = com.tkay.expressad.videocommon.b.j.a()
                java.lang.String r3 = r1.c
                r0 = 1
                r2.c(r3, r0)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = r1.d
                r2.append(r3)
                java.lang.String r3 = "_"
                r2.append(r3)
                java.lang.String r3 = r1.c
                r2.append(r3)
                com.tkay.expressad.videocommon.a$a r2 = r1.e
                if (r2 == 0) goto L34
                r2.a(r0)
            L34:
                r1.h = r0
            L36:
                return
        }
    }

    private static final class b implements com.tkay.expressad.videocommon.d.b {
        private com.tkay.expressad.reward.a.d a;
        private com.tkay.expressad.foundation.d.c b;

        public b(com.tkay.expressad.reward.a.d r1, com.tkay.expressad.foundation.d.c r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        @Override
        public final void a(java.lang.String r3) {
                r2 = this;
                com.tkay.expressad.videocommon.b.j r0 = com.tkay.expressad.videocommon.b.j.a()     // Catch: java.lang.Throwable -> L4a
                r1 = 1
                r0.a(r3, r1)     // Catch: java.lang.Throwable -> L4a
                com.tkay.expressad.reward.a.d r3 = r2.a     // Catch: java.lang.Throwable -> L4a
                if (r3 == 0) goto L49
                com.tkay.expressad.reward.a.d r3 = r2.a     // Catch: java.lang.Throwable -> L4a
                monitor-enter(r3)     // Catch: java.lang.Throwable -> L4a
                com.tkay.expressad.reward.a.d r0 = r2.a     // Catch: java.lang.Throwable -> L46
                if (r0 == 0) goto L44
                com.tkay.expressad.reward.a.d r0 = r2.a     // Catch: java.lang.Throwable -> L46
                boolean r0 = r0.c()     // Catch: java.lang.Throwable -> L46
                if (r0 == 0) goto L44
                com.tkay.expressad.reward.a.d r0 = r2.a     // Catch: java.lang.Throwable -> L46
                android.os.Handler r0 = com.tkay.expressad.reward.a.d.i(r0)     // Catch: java.lang.Throwable -> L46
                if (r0 == 0) goto L44
                android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Throwable -> L46
                r1 = 6
                r0.what = r1     // Catch: java.lang.Throwable -> L46
                com.tkay.expressad.foundation.d.c r1 = r2.b     // Catch: java.lang.Throwable -> L46
                r0.obj = r1     // Catch: java.lang.Throwable -> L46
                com.tkay.expressad.reward.a.d r1 = r2.a     // Catch: java.lang.Throwable -> L46
                android.os.Handler r1 = com.tkay.expressad.reward.a.d.i(r1)     // Catch: java.lang.Throwable -> L46
                r1.sendMessage(r0)     // Catch: java.lang.Throwable -> L46
                com.tkay.expressad.reward.a.d r0 = r2.a     // Catch: java.lang.Throwable -> L46
                android.os.Handler r0 = com.tkay.expressad.reward.a.d.i(r0)     // Catch: java.lang.Throwable -> L46
                r1 = 5
                r0.removeMessages(r1)     // Catch: java.lang.Throwable -> L46
                r0 = 0
                r2.a = r0     // Catch: java.lang.Throwable -> L46
            L44:
                monitor-exit(r3)     // Catch: java.lang.Throwable -> L46
                return
            L46:
                r0 = move-exception
                monitor-exit(r3)     // Catch: java.lang.Throwable -> L4a
                throw r0     // Catch: java.lang.Throwable -> L4a
            L49:
                return
            L4a:
                r3 = move-exception
                r3.getMessage()
                return
        }

        @Override
        public final void a(java.lang.String r3, java.lang.String r4) {
                r2 = this;
                com.tkay.expressad.reward.a.d r0 = r2.a     // Catch: java.lang.Throwable -> L15
                if (r0 == 0) goto L14
                com.tkay.expressad.reward.a.d r0 = r2.a     // Catch: java.lang.Throwable -> L15
                monitor-enter(r0)     // Catch: java.lang.Throwable -> L15
                com.tkay.expressad.reward.a.d r1 = r2.a     // Catch: java.lang.Throwable -> L11
                com.tkay.expressad.reward.a.d.a(r1, r3, r4)     // Catch: java.lang.Throwable -> L11
                r3 = 0
                r2.a = r3     // Catch: java.lang.Throwable -> L11
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
                return
            L11:
                r3 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
                throw r3     // Catch: java.lang.Throwable -> L15
            L14:
                return
            L15:
                r3 = move-exception
                r3.getMessage()
                return
        }
    }

    private static final class c implements com.tkay.expressad.foundation.g.d.c {
        private com.tkay.expressad.reward.a.d a;
        private com.tkay.expressad.foundation.d.c b;
        private java.lang.String c;

        public c(com.tkay.expressad.reward.a.d r1, com.tkay.expressad.foundation.d.c r2, java.lang.String r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }

        @Override
        public final void a(android.graphics.Bitmap r1, java.lang.String r2) {
                r0 = this;
                return
        }

        @Override
        public final void a(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                return
        }
    }

    private static class d implements com.tkay.expressad.videocommon.b.g.b {
        private com.tkay.expressad.foundation.d.c a;
        private java.lang.String b;
        private com.tkay.expressad.videocommon.e.d c;
        private com.tkay.expressad.reward.a.d d;

        public d(com.tkay.expressad.reward.a.d r1, com.tkay.expressad.foundation.d.c r2, java.lang.String r3, com.tkay.expressad.videocommon.e.d r4) {
                r0 = this;
                r0.<init>()
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.d = r1
                return
        }

        @Override
        public final void a(java.lang.String r5) {
                r4 = this;
                com.tkay.expressad.reward.a.d r0 = r4.d
                if (r0 == 0) goto Ld
                com.tkay.expressad.foundation.d.c r1 = r4.a
                java.lang.String r2 = r4.b
                com.tkay.expressad.videocommon.e.d r3 = r4.c
                com.tkay.expressad.reward.a.d.a(r0, r1, r5, r2, r3)
            Ld:
                return
        }

        @Override
        public final void a(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                com.tkay.expressad.reward.a.d r3 = r1.d
                if (r3 == 0) goto L9
                java.lang.String r0 = "TemplateUrl source download failed"
                com.tkay.expressad.reward.a.d.a(r3, r0, r2)
            L9:
                return
        }
    }

    private static final class e implements com.tkay.expressad.foundation.g.d.c {
        private com.tkay.expressad.reward.a.d a;
        private com.tkay.expressad.foundation.d.c b;
        private java.lang.String c;

        public e(com.tkay.expressad.reward.a.d r1, com.tkay.expressad.foundation.d.c r2, java.lang.String r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }

        @Override
        public final void a(android.graphics.Bitmap r2, java.lang.String r3) {
                r1 = this;
                com.tkay.expressad.videocommon.b.j.a()     // Catch: java.lang.Throwable -> L44
                com.tkay.expressad.videocommon.b.j.c(r3)     // Catch: java.lang.Throwable -> L44
                com.tkay.expressad.reward.a.d r2 = r1.a     // Catch: java.lang.Throwable -> L44
                if (r2 == 0) goto L43
                com.tkay.expressad.reward.a.d r2 = r1.a     // Catch: java.lang.Throwable -> L44
                monitor-enter(r2)     // Catch: java.lang.Throwable -> L44
                com.tkay.expressad.reward.a.d r3 = r1.a     // Catch: java.lang.Throwable -> L40
                boolean r3 = r3.c()     // Catch: java.lang.Throwable -> L40
                if (r3 == 0) goto L3e
                com.tkay.expressad.reward.a.d r3 = r1.a     // Catch: java.lang.Throwable -> L40
                android.os.Handler r3 = com.tkay.expressad.reward.a.d.i(r3)     // Catch: java.lang.Throwable -> L40
                if (r3 == 0) goto L3e
                android.os.Message r3 = android.os.Message.obtain()     // Catch: java.lang.Throwable -> L40
                r0 = 6
                r3.what = r0     // Catch: java.lang.Throwable -> L40
                com.tkay.expressad.foundation.d.c r0 = r1.b     // Catch: java.lang.Throwable -> L40
                r3.obj = r0     // Catch: java.lang.Throwable -> L40
                com.tkay.expressad.reward.a.d r0 = r1.a     // Catch: java.lang.Throwable -> L40
                android.os.Handler r0 = com.tkay.expressad.reward.a.d.i(r0)     // Catch: java.lang.Throwable -> L40
                r0.sendMessage(r3)     // Catch: java.lang.Throwable -> L40
                com.tkay.expressad.reward.a.d r3 = r1.a     // Catch: java.lang.Throwable -> L40
                android.os.Handler r3 = com.tkay.expressad.reward.a.d.i(r3)     // Catch: java.lang.Throwable -> L40
                r0 = 5
                r3.removeMessages(r0)     // Catch: java.lang.Throwable -> L40
                r3 = 0
                r1.a = r3     // Catch: java.lang.Throwable -> L40
            L3e:
                monitor-exit(r2)     // Catch: java.lang.Throwable -> L40
                return
            L40:
                r3 = move-exception
                monitor-exit(r2)     // Catch: java.lang.Throwable -> L44
                throw r3     // Catch: java.lang.Throwable -> L44
            L43:
                return
            L44:
                r2 = move-exception
                r2.getMessage()
                return
        }

        @Override
        public final void a(java.lang.String r3, java.lang.String r4) {
                r2 = this;
                com.tkay.expressad.reward.a.d r0 = r2.a     // Catch: java.lang.Throwable -> L15
                if (r0 == 0) goto L14
                com.tkay.expressad.reward.a.d r0 = r2.a     // Catch: java.lang.Throwable -> L15
                monitor-enter(r0)     // Catch: java.lang.Throwable -> L15
                com.tkay.expressad.reward.a.d r1 = r2.a     // Catch: java.lang.Throwable -> L11
                com.tkay.expressad.reward.a.d.a(r1, r3, r4)     // Catch: java.lang.Throwable -> L11
                r3 = 0
                r2.a = r3     // Catch: java.lang.Throwable -> L11
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
                return
            L11:
                r3 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
                throw r3     // Catch: java.lang.Throwable -> L15
            L14:
                return
            L15:
                r3 = move-exception
                r3.getMessage()
                return
        }
    }

    private static final class f implements com.tkay.expressad.videocommon.b.g.b {
        private com.tkay.expressad.reward.a.d a;
        private com.tkay.expressad.foundation.d.c b;
        private long c;
        private java.lang.String d;
        private boolean e;

        public f(com.tkay.expressad.reward.a.d r3, com.tkay.expressad.foundation.d.c r4, java.lang.String r5, boolean r6) {
                r2 = this;
                r2.<init>()
                r0 = 1
                r2.e = r0
                long r0 = java.lang.System.currentTimeMillis()
                r2.c = r0
                r2.d = r5
                r2.a = r3
                r2.b = r4
                r2.e = r6
                return
        }

        @Override
        public final void a(java.lang.String r3) {
                r2 = this;
                com.tkay.expressad.reward.a.d r0 = r2.a     // Catch: java.lang.Throwable -> L40
                android.os.Handler r0 = com.tkay.expressad.reward.a.d.i(r0)     // Catch: java.lang.Throwable -> L40
                if (r0 == 0) goto L3f
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L40
                java.lang.String r1 = "H5SourceDownloadListener source code download success cid:"
                r0.<init>(r1)     // Catch: java.lang.Throwable -> L40
                com.tkay.expressad.foundation.d.c r1 = r2.b     // Catch: java.lang.Throwable -> L40
                java.lang.String r1 = r1.aZ()     // Catch: java.lang.Throwable -> L40
                r0.append(r1)     // Catch: java.lang.Throwable -> L40
                java.lang.String r1 = "  url:"
                r0.append(r1)     // Catch: java.lang.Throwable -> L40
                r0.append(r3)     // Catch: java.lang.Throwable -> L40
                com.tkay.expressad.reward.a.d r3 = r2.a     // Catch: java.lang.Throwable -> L40
                android.os.Handler r3 = com.tkay.expressad.reward.a.d.i(r3)     // Catch: java.lang.Throwable -> L40
                r0 = 5
                r3.removeMessages(r0)     // Catch: java.lang.Throwable -> L40
                android.os.Message r3 = android.os.Message.obtain()     // Catch: java.lang.Throwable -> L40
                r0 = 8
                r3.what = r0     // Catch: java.lang.Throwable -> L40
                com.tkay.expressad.foundation.d.c r0 = r2.b     // Catch: java.lang.Throwable -> L40
                r3.obj = r0     // Catch: java.lang.Throwable -> L40
                com.tkay.expressad.reward.a.d r0 = r2.a     // Catch: java.lang.Throwable -> L40
                android.os.Handler r0 = com.tkay.expressad.reward.a.d.i(r0)     // Catch: java.lang.Throwable -> L40
                r0.sendMessage(r3)     // Catch: java.lang.Throwable -> L40
            L3f:
                return
            L40:
                r3 = move-exception
                r3.getMessage()
                return
        }

        @Override
        public final void a(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L24
                java.lang.String r0 = "H5SourceDownloadListener source code download fail cid:"
                r3.<init>(r0)     // Catch: java.lang.Throwable -> L24
                com.tkay.expressad.foundation.d.c r0 = r1.b     // Catch: java.lang.Throwable -> L24
                java.lang.String r0 = r0.aZ()     // Catch: java.lang.Throwable -> L24
                r3.append(r0)     // Catch: java.lang.Throwable -> L24
                java.lang.String r0 = "  url:"
                r3.append(r0)     // Catch: java.lang.Throwable -> L24
                r3.append(r2)     // Catch: java.lang.Throwable -> L24
                com.tkay.expressad.reward.a.d r3 = r1.a     // Catch: java.lang.Throwable -> L24
                if (r3 == 0) goto L23
                com.tkay.expressad.reward.a.d r3 = r1.a     // Catch: java.lang.Throwable -> L24
                java.lang.String r0 = "H5 code resource download failed "
                com.tkay.expressad.reward.a.d.a(r3, r0, r2)     // Catch: java.lang.Throwable -> L24
            L23:
                return
            L24:
                r2 = move-exception
                r2.getMessage()
                return
        }
    }

    private class g implements java.lang.Runnable {
        final com.tkay.expressad.reward.a.d a;
        private java.lang.String b;
        private com.tkay.expressad.foundation.d.c c;
        private java.lang.String d;
        private java.lang.String e;
        private com.tkay.expressad.videocommon.e.d f;
        private int g;
        private com.tkay.expressad.reward.a.d h;

        public g(com.tkay.expressad.reward.a.d r1, java.lang.String r2, com.tkay.expressad.foundation.d.c r3, java.lang.String r4, java.lang.String r5, com.tkay.expressad.videocommon.e.d r6, int r7, com.tkay.expressad.reward.a.d r8) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                r0.c = r3
                r0.d = r4
                r0.e = r5
                r0.f = r6
                r0.g = r7
                r0.h = r8
                return
        }

        @Override
        public final void run() {
                r11 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                java.lang.String r1 = "retry load tpl url = "
                r0.<init>(r1)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                java.lang.String r1 = r11.d     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                r0.append(r1)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                com.tkay.expressad.videocommon.a$a r5 = new com.tkay.expressad.videocommon.a$a     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                r5.<init>()     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = new com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                r0.<init>(r1)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                r5.a(r0)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                java.lang.String r1 = com.tkay.expressad.video.bt.a.c.b()     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                r5.a(r1)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                com.tkay.expressad.reward.a.d r2 = r11.a     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                com.tkay.expressad.foundation.d.d r2 = com.tkay.expressad.reward.a.d.k(r2)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                java.util.ArrayList<com.tkay.expressad.foundation.d.c> r2 = r2.J     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                r3 = 0
                if (r2 == 0) goto L54
                com.tkay.expressad.reward.a.d r2 = r11.a     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                com.tkay.expressad.foundation.d.d r2 = com.tkay.expressad.reward.a.d.k(r2)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                java.util.ArrayList<com.tkay.expressad.foundation.d.c> r2 = r2.J     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                int r2 = r2.size()     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                if (r2 <= 0) goto L54
                com.tkay.expressad.video.signal.a.j r2 = new com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                com.tkay.expressad.foundation.d.c r4 = r11.c     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                com.tkay.expressad.reward.a.d r6 = r11.a     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                com.tkay.expressad.foundation.d.d r6 = com.tkay.expressad.reward.a.d.k(r6)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                java.util.ArrayList<com.tkay.expressad.foundation.d.c> r6 = r6.J     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                r2.<init>(r3, r4, r6)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                goto L5b
            L54:
                com.tkay.expressad.video.signal.a.j r2 = new com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                com.tkay.expressad.foundation.d.c r4 = r11.c     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
            L5b:
                r10 = r2
                int r2 = r11.g     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                r10.a(r2)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                java.lang.String r2 = r11.e     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                r10.a(r2)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                r10.c(r1)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                com.tkay.expressad.videocommon.e.d r1 = r11.f     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                r10.a(r1)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                com.tkay.expressad.reward.a.d r1 = r11.a     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                boolean r1 = com.tkay.expressad.reward.a.d.l(r1)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                r10.b(r1)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                com.tkay.expressad.reward.a.d$a r1 = new com.tkay.expressad.reward.a.d$a     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                java.lang.String r3 = r11.d     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                java.lang.String r4 = r11.b     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                com.tkay.expressad.foundation.d.c r6 = r11.c     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                com.tkay.expressad.reward.a.d r7 = r11.h     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                r8 = 0
                r9 = 0
                r2 = r1
                r2.<init>(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                r0.setWebViewListener(r1)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                r0.setObject(r10)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                java.lang.String r1 = r11.d     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                r0.loadUrl(r1)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
                return
            L93:
                r0 = move-exception
                r0.getMessage()
                return
            L98:
                r0 = move-exception
                boolean r1 = com.tkay.expressad.b.a
                if (r1 == 0) goto La0
                r0.printStackTrace()
            La0:
                return
        }
    }

    private class h implements java.lang.Runnable {
        final com.tkay.expressad.reward.a.d a;
        private com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView b;
        private java.lang.String c;
        private com.tkay.expressad.foundation.d.c d;
        private java.util.List<com.tkay.expressad.foundation.d.c> e;
        private java.lang.String f;
        private java.lang.String g;
        private com.tkay.expressad.videocommon.e.d h;
        private int i;
        private com.tkay.expressad.reward.a.d j;

        public h(com.tkay.expressad.reward.a.d r1, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2, java.lang.String r3, com.tkay.expressad.foundation.d.c r4, java.util.List<com.tkay.expressad.foundation.d.c> r5, java.lang.String r6, java.lang.String r7, com.tkay.expressad.videocommon.e.d r8, int r9, com.tkay.expressad.reward.a.d r10) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                r0.c = r3
                r0.d = r4
                r0.e = r5
                r0.f = r6
                r0.g = r7
                r0.h = r8
                r0.i = r9
                r0.j = r10
                return
        }

        @Override
        public final void run() {
                r12 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                java.lang.String r1 = "retry load template url = "
                r0.<init>(r1)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                java.lang.String r1 = r12.f     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                r0.append(r1)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                com.tkay.expressad.videocommon.a$a r6 = new com.tkay.expressad.videocommon.a$a     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                r6.<init>()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = new com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                r0.<init>(r1)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                r6.a(r0)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                java.util.List<com.tkay.expressad.foundation.d.c> r1 = r12.e     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                r2 = 0
                if (r1 == 0) goto L38
                java.util.List<com.tkay.expressad.foundation.d.c> r1 = r12.e     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                int r1 = r1.size()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                if (r1 <= 0) goto L38
                com.tkay.expressad.video.signal.a.j r1 = new com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                com.tkay.expressad.foundation.d.c r3 = r12.d     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                java.util.List<com.tkay.expressad.foundation.d.c> r4 = r12.e     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                r1.<init>(r2, r3, r4)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                goto L3f
            L38:
                com.tkay.expressad.video.signal.a.j r1 = new com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                com.tkay.expressad.foundation.d.c r3 = r12.d     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
            L3f:
                int r2 = r12.i     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                r1.a(r2)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                java.lang.String r2 = r12.g     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                r1.a(r2)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                com.tkay.expressad.videocommon.e.d r2 = r12.h     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                r1.a(r2)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                com.tkay.expressad.reward.a.d r2 = r12.a     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                boolean r2 = com.tkay.expressad.reward.a.d.l(r2)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                r1.b(r2)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                com.tkay.expressad.reward.a.d$j r11 = new com.tkay.expressad.reward.a.d$j     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r12.b     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                java.lang.String r4 = r12.f     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                java.lang.String r5 = r12.c     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                com.tkay.expressad.foundation.d.c r7 = r12.d     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                com.tkay.expressad.reward.a.d r8 = r12.j     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                r9 = 0
                r10 = 0
                r2 = r11
                r2.<init>(r3, r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                r0.setWebViewListener(r11)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                r0.setObject(r1)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                java.lang.String r1 = r12.f     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                r0.loadUrl(r1)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
                return
            L75:
                r0 = move-exception
                r0.getMessage()
                return
            L7a:
                r0 = move-exception
                boolean r1 = com.tkay.expressad.b.a
                if (r1 == 0) goto L82
                r0.printStackTrace()
            L82:
                return
        }
    }

    private static final class i implements com.tkay.expressad.videocommon.b.g.d {
        public static final int a = 497;
        public static final int b = 859;
        public static final int c = 313;
        public static final int d = 502;
        private com.tkay.expressad.foundation.d.c e;
        private com.tkay.expressad.reward.a.d f;
        private long g;
        private java.lang.String h;
        private int i;
        private com.tkay.expressad.videocommon.e.d j;
        private boolean k;

        public i(com.tkay.expressad.foundation.d.c r3, com.tkay.expressad.reward.a.d r4, java.lang.String r5, int r6, com.tkay.expressad.videocommon.e.d r7, boolean r8) {
                r2 = this;
                r2.<init>()
                r0 = 0
                r2.i = r0
                r0 = 1
                r2.k = r0
                long r0 = java.lang.System.currentTimeMillis()
                r2.g = r0
                r2.h = r5
                r2.e = r3
                r2.i = r6
                r2.j = r7
                r2.f = r4
                r2.k = r8
                return
        }

        @Override
        public final void a(java.lang.String r14) {
                r13 = this;
                com.tkay.expressad.videocommon.b.j r0 = com.tkay.expressad.videocommon.b.j.a()     // Catch: java.lang.Throwable -> L178
                r1 = 1
                r0.b(r14, r1)     // Catch: java.lang.Throwable -> L178
                long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L178
                long r4 = r13.g     // Catch: java.lang.Throwable -> L178
                long r2 = r2 - r4
                int r0 = r13.i     // Catch: java.lang.Throwable -> L178
                r4 = 497(0x1f1, float:6.96E-43)
                if (r0 != r4) goto L7a
                boolean r0 = r13.k     // Catch: java.lang.Throwable -> L178
                if (r0 == 0) goto L144
                com.tkay.expressad.foundation.d.r r0 = new com.tkay.expressad.foundation.d.r     // Catch: java.lang.Throwable -> L178
                java.lang.String r5 = "2000043"
                r6 = 14
                java.lang.String r7 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L178
                com.tkay.expressad.foundation.d.c r1 = r13.e     // Catch: java.lang.Throwable -> L178
                java.lang.String r9 = r1.aZ()     // Catch: java.lang.Throwable -> L178
                java.lang.String r10 = r13.h     // Catch: java.lang.Throwable -> L178
                java.lang.String r11 = ""
                java.lang.String r12 = "1"
                r4 = r0
                r8 = r14
                r4.<init>(r5, r6, r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> L178
                com.tkay.expressad.foundation.d.c r14 = r13.e     // Catch: java.lang.Throwable -> L178
                java.lang.String r14 = r14.Z()     // Catch: java.lang.Throwable -> L178
                r0.d(r14)     // Catch: java.lang.Throwable -> L178
                com.tkay.expressad.foundation.d.c r14 = r13.e     // Catch: java.lang.Throwable -> L178
                java.lang.String r14 = r14.aa()     // Catch: java.lang.Throwable -> L178
                r0.e(r14)     // Catch: java.lang.Throwable -> L178
                com.tkay.expressad.foundation.d.c r14 = r13.e     // Catch: java.lang.Throwable -> L178
                java.lang.String r14 = r14.aZ()     // Catch: java.lang.Throwable -> L178
                r0.g(r14)     // Catch: java.lang.Throwable -> L178
                com.tkay.expressad.foundation.d.c r14 = r13.e     // Catch: java.lang.Throwable -> L178
                int r14 = r14.f()     // Catch: java.lang.Throwable -> L178
                r0.b(r14)     // Catch: java.lang.Throwable -> L178
                com.tkay.expressad.foundation.d.c r14 = r13.e     // Catch: java.lang.Throwable -> L178
                int r14 = r14.w()     // Catch: java.lang.Throwable -> L178
                r1 = 287(0x11f, float:4.02E-43)
                if (r14 != r1) goto L69
                java.lang.String r14 = "3"
                r0.a(r14)     // Catch: java.lang.Throwable -> L178
                goto L144
            L69:
                com.tkay.expressad.foundation.d.c r14 = r13.e     // Catch: java.lang.Throwable -> L178
                int r14 = r14.w()     // Catch: java.lang.Throwable -> L178
                r1 = 94
                if (r14 != r1) goto L144
                java.lang.String r14 = "1"
                r0.a(r14)     // Catch: java.lang.Throwable -> L178
                goto L144
            L7a:
                int r0 = r13.i     // Catch: java.lang.Throwable -> L178
                r2 = 859(0x35b, float:1.204E-42)
                if (r0 != r2) goto Le7
                com.tkay.expressad.foundation.d.r r0 = new com.tkay.expressad.foundation.d.r     // Catch: java.lang.Throwable -> L178
                r0.<init>()     // Catch: java.lang.Throwable -> L178
                java.lang.String r2 = "2000045"
                r0.h(r2)     // Catch: java.lang.Throwable -> L178
                com.tkay.expressad.reward.a.d r2 = r13.f     // Catch: java.lang.Throwable -> L178
                if (r2 == 0) goto Lb7
                com.tkay.expressad.foundation.d.c r2 = r13.e     // Catch: java.lang.Throwable -> L178
                java.lang.String r2 = r2.ar()     // Catch: java.lang.Throwable -> L178
                boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L178
                if (r2 == 0) goto La5
                com.tkay.expressad.reward.a.d r2 = r13.f     // Catch: java.lang.Throwable -> L178
                com.tkay.expressad.foundation.d.c r3 = r13.e     // Catch: java.lang.Throwable -> L178
                java.lang.String r4 = r13.h     // Catch: java.lang.Throwable -> L178
                com.tkay.expressad.videocommon.e.d r5 = r13.j     // Catch: java.lang.Throwable -> L178
                com.tkay.expressad.reward.a.d.a(r2, r3, r14, r4, r5)     // Catch: java.lang.Throwable -> L178
            La5:
                com.tkay.expressad.reward.a.d r2 = r13.f     // Catch: java.lang.Throwable -> L178
                android.content.Context r2 = com.tkay.expressad.reward.a.d.q(r2)     // Catch: java.lang.Throwable -> L178
                if (r2 == 0) goto Lb7
                r2.getApplicationContext()     // Catch: java.lang.Throwable -> L178
                int r2 = com.tkay.expressad.foundation.h.k.a()     // Catch: java.lang.Throwable -> L178
                r0.c(r2)     // Catch: java.lang.Throwable -> L178
            Lb7:
                r0.d(r1)     // Catch: java.lang.Throwable -> L178
                com.tkay.expressad.foundation.d.c r1 = r13.e     // Catch: java.lang.Throwable -> L178
                if (r1 == 0) goto Ld9
                com.tkay.expressad.foundation.d.c r1 = r13.e     // Catch: java.lang.Throwable -> L178
                java.lang.String r1 = r1.aZ()     // Catch: java.lang.Throwable -> L178
                r0.g(r1)     // Catch: java.lang.Throwable -> L178
                com.tkay.expressad.foundation.d.c r1 = r13.e     // Catch: java.lang.Throwable -> L178
                java.lang.String r1 = r1.Z()     // Catch: java.lang.Throwable -> L178
                r0.d(r1)     // Catch: java.lang.Throwable -> L178
                com.tkay.expressad.foundation.d.c r1 = r13.e     // Catch: java.lang.Throwable -> L178
                java.lang.String r1 = r1.aa()     // Catch: java.lang.Throwable -> L178
                r0.e(r1)     // Catch: java.lang.Throwable -> L178
            Ld9:
                r0.b(r14)     // Catch: java.lang.Throwable -> L178
                java.lang.String r14 = ""
                r0.i(r14)     // Catch: java.lang.Throwable -> L178
                java.lang.String r14 = r13.h     // Catch: java.lang.Throwable -> L178
                r0.f(r14)     // Catch: java.lang.Throwable -> L178
                goto L144
            Le7:
                int r0 = r13.i     // Catch: java.lang.Throwable -> L178
                r2 = 502(0x1f6, float:7.03E-43)
                if (r0 != r2) goto L13d
                com.tkay.expressad.foundation.d.r r0 = new com.tkay.expressad.foundation.d.r     // Catch: java.lang.Throwable -> L178
                r0.<init>()     // Catch: java.lang.Throwable -> L178
                java.lang.String r2 = "2000045"
                r0.h(r2)     // Catch: java.lang.Throwable -> L178
                com.tkay.expressad.reward.a.d r2 = r13.f     // Catch: java.lang.Throwable -> L178
                if (r2 == 0) goto L10d
                com.tkay.expressad.reward.a.d r2 = r13.f     // Catch: java.lang.Throwable -> L178
                android.content.Context r2 = com.tkay.expressad.reward.a.d.q(r2)     // Catch: java.lang.Throwable -> L178
                if (r2 == 0) goto L10d
                r2.getApplicationContext()     // Catch: java.lang.Throwable -> L178
                int r2 = com.tkay.expressad.foundation.h.k.a()     // Catch: java.lang.Throwable -> L178
                r0.c(r2)     // Catch: java.lang.Throwable -> L178
            L10d:
                r0.d(r1)     // Catch: java.lang.Throwable -> L178
                com.tkay.expressad.foundation.d.c r1 = r13.e     // Catch: java.lang.Throwable -> L178
                if (r1 == 0) goto L12f
                com.tkay.expressad.foundation.d.c r1 = r13.e     // Catch: java.lang.Throwable -> L178
                java.lang.String r1 = r1.aZ()     // Catch: java.lang.Throwable -> L178
                r0.g(r1)     // Catch: java.lang.Throwable -> L178
                com.tkay.expressad.foundation.d.c r1 = r13.e     // Catch: java.lang.Throwable -> L178
                java.lang.String r1 = r1.Z()     // Catch: java.lang.Throwable -> L178
                r0.d(r1)     // Catch: java.lang.Throwable -> L178
                com.tkay.expressad.foundation.d.c r1 = r13.e     // Catch: java.lang.Throwable -> L178
                java.lang.String r1 = r1.aa()     // Catch: java.lang.Throwable -> L178
                r0.e(r1)     // Catch: java.lang.Throwable -> L178
            L12f:
                r0.b(r14)     // Catch: java.lang.Throwable -> L178
                java.lang.String r14 = ""
                r0.i(r14)     // Catch: java.lang.Throwable -> L178
                java.lang.String r14 = r13.h     // Catch: java.lang.Throwable -> L178
                r0.f(r14)     // Catch: java.lang.Throwable -> L178
                goto L144
            L13d:
                int r14 = r13.i     // Catch: java.lang.Throwable -> L178
                r0 = 313(0x139, float:4.39E-43)
                if (r14 != r0) goto L144
                return
            L144:
                com.tkay.expressad.reward.a.d r14 = r13.f     // Catch: java.lang.Throwable -> L178
                if (r14 == 0) goto L177
                com.tkay.expressad.reward.a.d r14 = r13.f     // Catch: java.lang.Throwable -> L178
                monitor-enter(r14)     // Catch: java.lang.Throwable -> L178
                com.tkay.expressad.reward.a.d r0 = r13.f     // Catch: java.lang.Throwable -> L174
                boolean r0 = r0.c()     // Catch: java.lang.Throwable -> L174
                if (r0 == 0) goto L172
                com.tkay.expressad.reward.a.d r0 = r13.f     // Catch: java.lang.Throwable -> L174
                android.os.Handler r0 = com.tkay.expressad.reward.a.d.i(r0)     // Catch: java.lang.Throwable -> L174
                if (r0 == 0) goto L172
                com.tkay.expressad.reward.a.d r0 = r13.f     // Catch: java.lang.Throwable -> L174
                android.os.Handler r0 = com.tkay.expressad.reward.a.d.i(r0)     // Catch: java.lang.Throwable -> L174
                r1 = 6
                r0.sendEmptyMessage(r1)     // Catch: java.lang.Throwable -> L174
                com.tkay.expressad.reward.a.d r0 = r13.f     // Catch: java.lang.Throwable -> L174
                android.os.Handler r0 = com.tkay.expressad.reward.a.d.i(r0)     // Catch: java.lang.Throwable -> L174
                r1 = 5
                r0.removeMessages(r1)     // Catch: java.lang.Throwable -> L174
                r0 = 0
                r13.f = r0     // Catch: java.lang.Throwable -> L174
            L172:
                monitor-exit(r14)     // Catch: java.lang.Throwable -> L174
                return
            L174:
                r0 = move-exception
                monitor-exit(r14)     // Catch: java.lang.Throwable -> L178
                throw r0     // Catch: java.lang.Throwable -> L178
            L177:
                return
            L178:
                r14 = move-exception
                r14.getMessage()
                return
        }

        @Override
        public final void a(java.lang.String r13, java.lang.String r14) {
                r12 = this;
                long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> Ld5
                long r2 = r12.g     // Catch: java.lang.Exception -> Ld5
                long r0 = r0 - r2
                int r2 = r12.i     // Catch: java.lang.Exception -> Ld5
                r3 = 497(0x1f1, float:6.96E-43)
                if (r2 != r3) goto L6f
                boolean r2 = r12.k     // Catch: java.lang.Exception -> Ld5
                if (r2 == 0) goto Lcb
                com.tkay.expressad.foundation.d.r r2 = new com.tkay.expressad.foundation.d.r     // Catch: java.lang.Exception -> Ld5
                java.lang.String r4 = "2000043"
                r5 = 3
                java.lang.String r6 = java.lang.String.valueOf(r0)     // Catch: java.lang.Exception -> Ld5
                com.tkay.expressad.foundation.d.c r0 = r12.e     // Catch: java.lang.Exception -> Ld5
                java.lang.String r8 = r0.aZ()     // Catch: java.lang.Exception -> Ld5
                java.lang.String r9 = r12.h     // Catch: java.lang.Exception -> Ld5
                java.lang.String r10 = "zip download failed"
                java.lang.String r11 = "1"
                r3 = r2
                r7 = r14
                r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Exception -> Ld5
                com.tkay.expressad.foundation.d.c r0 = r12.e     // Catch: java.lang.Exception -> Ld5
                java.lang.String r0 = r0.Z()     // Catch: java.lang.Exception -> Ld5
                r2.d(r0)     // Catch: java.lang.Exception -> Ld5
                com.tkay.expressad.foundation.d.c r0 = r12.e     // Catch: java.lang.Exception -> Ld5
                java.lang.String r0 = r0.aa()     // Catch: java.lang.Exception -> Ld5
                r2.e(r0)     // Catch: java.lang.Exception -> Ld5
                com.tkay.expressad.foundation.d.c r0 = r12.e     // Catch: java.lang.Exception -> Ld5
                java.lang.String r0 = r0.aZ()     // Catch: java.lang.Exception -> Ld5
                r2.g(r0)     // Catch: java.lang.Exception -> Ld5
                com.tkay.expressad.foundation.d.c r0 = r12.e     // Catch: java.lang.Exception -> Ld5
                int r0 = r0.f()     // Catch: java.lang.Exception -> Ld5
                r2.b(r0)     // Catch: java.lang.Exception -> Ld5
                com.tkay.expressad.foundation.d.c r0 = r12.e     // Catch: java.lang.Exception -> Ld5
                int r0 = r0.w()     // Catch: java.lang.Exception -> Ld5
                r1 = 287(0x11f, float:4.02E-43)
                if (r0 != r1) goto L5f
                java.lang.String r0 = "3"
                r2.a(r0)     // Catch: java.lang.Exception -> Ld5
                goto Lcb
            L5f:
                com.tkay.expressad.foundation.d.c r0 = r12.e     // Catch: java.lang.Exception -> Ld5
                int r0 = r0.w()     // Catch: java.lang.Exception -> Ld5
                r1 = 94
                if (r0 != r1) goto Lcb
                java.lang.String r0 = "1"
                r2.a(r0)     // Catch: java.lang.Exception -> Ld5
                goto Lcb
            L6f:
                int r0 = r12.i     // Catch: java.lang.Exception -> Ld5
                r1 = 859(0x35b, float:1.204E-42)
                if (r0 != r1) goto Lc4
                com.tkay.expressad.foundation.d.r r0 = new com.tkay.expressad.foundation.d.r     // Catch: java.lang.Exception -> Ld5
                r0.<init>()     // Catch: java.lang.Exception -> Ld5
                java.lang.String r1 = "2000045"
                r0.h(r1)     // Catch: java.lang.Exception -> Ld5
                com.tkay.expressad.reward.a.d r1 = r12.f     // Catch: java.lang.Exception -> Ld5
                if (r1 == 0) goto L95
                com.tkay.expressad.reward.a.d r1 = r12.f     // Catch: java.lang.Exception -> Ld5
                android.content.Context r1 = com.tkay.expressad.reward.a.d.q(r1)     // Catch: java.lang.Exception -> Ld5
                if (r1 == 0) goto L95
                r1.getApplicationContext()     // Catch: java.lang.Exception -> Ld5
                int r1 = com.tkay.expressad.foundation.h.k.a()     // Catch: java.lang.Exception -> Ld5
                r0.c(r1)     // Catch: java.lang.Exception -> Ld5
            L95:
                r1 = 3
                r0.d(r1)     // Catch: java.lang.Exception -> Ld5
                com.tkay.expressad.foundation.d.c r1 = r12.e     // Catch: java.lang.Exception -> Ld5
                if (r1 == 0) goto Lb8
                com.tkay.expressad.foundation.d.c r1 = r12.e     // Catch: java.lang.Exception -> Ld5
                java.lang.String r1 = r1.aZ()     // Catch: java.lang.Exception -> Ld5
                r0.g(r1)     // Catch: java.lang.Exception -> Ld5
                com.tkay.expressad.foundation.d.c r1 = r12.e     // Catch: java.lang.Exception -> Ld5
                java.lang.String r1 = r1.Z()     // Catch: java.lang.Exception -> Ld5
                r0.d(r1)     // Catch: java.lang.Exception -> Ld5
                com.tkay.expressad.foundation.d.c r1 = r12.e     // Catch: java.lang.Exception -> Ld5
                java.lang.String r1 = r1.aa()     // Catch: java.lang.Exception -> Ld5
                r0.e(r1)     // Catch: java.lang.Exception -> Ld5
            Lb8:
                r0.b(r14)     // Catch: java.lang.Exception -> Ld5
                r0.i(r13)     // Catch: java.lang.Exception -> Ld5
                java.lang.String r1 = r12.h     // Catch: java.lang.Exception -> Ld5
                r0.f(r1)     // Catch: java.lang.Exception -> Ld5
                goto Lcb
            Lc4:
                int r0 = r12.i     // Catch: java.lang.Exception -> Ld5
                r1 = 313(0x139, float:4.39E-43)
                if (r0 != r1) goto Lcb
                return
            Lcb:
                com.tkay.expressad.reward.a.d r0 = r12.f     // Catch: java.lang.Exception -> Ld5
                if (r0 == 0) goto Le9
                com.tkay.expressad.reward.a.d r0 = r12.f     // Catch: java.lang.Exception -> Ld5
                com.tkay.expressad.reward.a.d.a(r0, r13, r14)     // Catch: java.lang.Exception -> Ld5
                goto Le9
            Ld5:
                r13 = move-exception
                com.tkay.expressad.reward.a.d r14 = r12.f     // Catch: java.lang.Throwable -> Le2
                if (r14 == 0) goto Le6
                com.tkay.expressad.reward.a.d r14 = r12.f     // Catch: java.lang.Throwable -> Le2
                java.lang.String r0 = "clear error info failed"
                com.tkay.expressad.reward.a.d.a(r14, r0)     // Catch: java.lang.Throwable -> Le2
                goto Le6
            Le2:
                r14 = move-exception
                r14.getMessage()
            Le6:
                r13.getMessage()
            Le9:
                com.tkay.expressad.reward.a.d r13 = r12.f
                if (r13 == 0) goto Lf0
                r13 = 0
                r12.f = r13
            Lf0:
                return
        }
    }

    private static class j extends com.tkay.expressad.atsignalcommon.a.b {
        public static final int a = 0;
        public static final int b = 1;
        private com.tkay.expressad.reward.a.d c;
        private com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView e;
        private java.lang.String f;
        private java.lang.String g;
        private com.tkay.expressad.videocommon.a.a h;
        private com.tkay.expressad.foundation.d.c i;
        private boolean j;
        private boolean k;
        private com.tkay.expressad.reward.a.d.h l;
        private android.os.Handler m;

        public j(com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1, java.lang.String r2, java.lang.String r3, com.tkay.expressad.videocommon.a.a r4, com.tkay.expressad.foundation.d.c r5, com.tkay.expressad.reward.a.d r6, com.tkay.expressad.reward.a.d.h r7, android.os.Handler r8) {
                r0 = this;
                r0.<init>()
                r0.e = r1
                r0.f = r2
                r0.g = r3
                r0.h = r4
                if (r6 == 0) goto Lf
                r0.c = r6
            Lf:
                r0.i = r5
                r0.l = r7
                r0.m = r8
                return
        }

        @Override
        public final void onPageFinished(android.webkit.WebView r1, java.lang.String r2) {
                r0 = this;
                super.onPageFinished(r1, r2)
                boolean r2 = r0.j
                if (r2 != 0) goto L10
                com.tkay.expressad.atsignalcommon.windvane.j.a()
                com.tkay.expressad.atsignalcommon.windvane.j.b(r1)
                r1 = 1
                r0.j = r1
            L10:
                return
        }

        @Override
        public final void onReceivedError(android.webkit.WebView r1, int r2, java.lang.String r3, java.lang.String r4) {
                r0 = this;
                super.onReceivedError(r1, r2, r3, r4)
                com.tkay.expressad.reward.a.d r1 = r0.c     // Catch: java.lang.Throwable -> L18
                if (r1 == 0) goto L17
                com.tkay.expressad.reward.a.d r1 = r0.c     // Catch: java.lang.Throwable -> L18
                monitor-enter(r1)     // Catch: java.lang.Throwable -> L18
                com.tkay.expressad.reward.a.d r2 = r0.c     // Catch: java.lang.Throwable -> L14
                com.tkay.expressad.reward.a.d.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L14
                r2 = 0
                r0.c = r2     // Catch: java.lang.Throwable -> L14
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L14
                return
            L14:
                r2 = move-exception
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L18
                throw r2     // Catch: java.lang.Throwable -> L18
            L17:
                return
            L18:
                r1 = move-exception
                r1.getMessage()
                return
        }

        @Override
        public final void readyState(android.webkit.WebView r3, int r4) {
                r2 = this;
                boolean r3 = r2.k
                if (r3 != 0) goto Lcf
                com.tkay.expressad.reward.a.d$h r3 = r2.l
                if (r3 == 0) goto Lf
                android.os.Handler r4 = r2.m
                if (r4 == 0) goto Lf
                r4.removeCallbacks(r3)
            Lf:
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r4 = r2.g
                r3.append(r4)
                java.lang.String r4 = "_"
                r3.append(r4)
                java.lang.String r4 = r2.f
                r3.append(r4)
                java.lang.String r3 = r3.toString()
                com.tkay.expressad.videocommon.a$a r4 = r2.h
                r0 = 1
                if (r4 == 0) goto L2f
                r4.a(r0)
            L2f:
                org.json.JSONObject r4 = new org.json.JSONObject
                r4.<init>()
                java.lang.String r1 = "type"
                r4.put(r1, r0)     // Catch: org.json.JSONException -> L46
                java.lang.String r1 = "id"
                r4.put(r1, r3)     // Catch: org.json.JSONException -> L46
                java.lang.String r3 = "unitid"
                java.lang.String r1 = r2.g     // Catch: org.json.JSONException -> L46
                r4.put(r3, r1)     // Catch: org.json.JSONException -> L46
                goto L4a
            L46:
                r3 = move-exception
                r3.printStackTrace()
            L4a:
                com.tkay.expressad.videocommon.b.j r3 = com.tkay.expressad.videocommon.b.j.a()
                java.lang.String r4 = r2.f
                r3.c(r4, r0)
                com.tkay.expressad.reward.a.d r3 = r2.c
                if (r3 == 0) goto L73
                boolean r3 = com.tkay.expressad.reward.a.d.m(r3)
                if (r3 == 0) goto L73
                com.tkay.expressad.foundation.d.c r3 = r2.i
                boolean r3 = r3.A()
                if (r3 == 0) goto L88
                r3 = 287(0x11f, float:4.02E-43)
                com.tkay.expressad.foundation.d.c r4 = r2.i
                java.lang.String r4 = r4.aa()
                com.tkay.expressad.videocommon.a$a r1 = r2.h
                com.tkay.expressad.videocommon.a.a(r3, r4, r1)
                goto L88
            L73:
                com.tkay.expressad.foundation.d.c r3 = r2.i
                boolean r3 = r3.A()
                if (r3 == 0) goto L88
                r3 = 94
                com.tkay.expressad.foundation.d.c r4 = r2.i
                java.lang.String r4 = r4.aa()
                com.tkay.expressad.videocommon.a$a r1 = r2.h
                com.tkay.expressad.videocommon.a.a(r3, r4, r1)
            L88:
                com.tkay.expressad.reward.a.d r3 = r2.c     // Catch: java.lang.Throwable -> Lc9
                if (r3 == 0) goto Lcd
                com.tkay.expressad.reward.a.d r3 = r2.c     // Catch: java.lang.Throwable -> Lc9
                monitor-enter(r3)     // Catch: java.lang.Throwable -> Lc9
                com.tkay.expressad.reward.a.d r4 = r2.c     // Catch: java.lang.Throwable -> Lc6
                if (r4 == 0) goto Lc4
                com.tkay.expressad.reward.a.d r4 = r2.c     // Catch: java.lang.Throwable -> Lc6
                boolean r4 = r4.c()     // Catch: java.lang.Throwable -> Lc6
                if (r4 == 0) goto Lc4
                com.tkay.expressad.reward.a.d r4 = r2.c     // Catch: java.lang.Throwable -> Lc6
                android.os.Handler r4 = com.tkay.expressad.reward.a.d.i(r4)     // Catch: java.lang.Throwable -> Lc6
                if (r4 == 0) goto Lc4
                android.os.Message r4 = android.os.Message.obtain()     // Catch: java.lang.Throwable -> Lc6
                r1 = 6
                r4.what = r1     // Catch: java.lang.Throwable -> Lc6
                com.tkay.expressad.foundation.d.c r1 = r2.i     // Catch: java.lang.Throwable -> Lc6
                r4.obj = r1     // Catch: java.lang.Throwable -> Lc6
                com.tkay.expressad.reward.a.d r1 = r2.c     // Catch: java.lang.Throwable -> Lc6
                android.os.Handler r1 = com.tkay.expressad.reward.a.d.i(r1)     // Catch: java.lang.Throwable -> Lc6
                r1.sendMessage(r4)     // Catch: java.lang.Throwable -> Lc6
                com.tkay.expressad.reward.a.d r4 = r2.c     // Catch: java.lang.Throwable -> Lc6
                android.os.Handler r4 = com.tkay.expressad.reward.a.d.i(r4)     // Catch: java.lang.Throwable -> Lc6
                r1 = 5
                r4.removeMessages(r1)     // Catch: java.lang.Throwable -> Lc6
                r4 = 0
                r2.c = r4     // Catch: java.lang.Throwable -> Lc6
            Lc4:
                monitor-exit(r3)     // Catch: java.lang.Throwable -> Lc6
                goto Lcd
            Lc6:
                r4 = move-exception
                monitor-exit(r3)     // Catch: java.lang.Throwable -> Lc9
                throw r4     // Catch: java.lang.Throwable -> Lc9
            Lc9:
                r3 = move-exception
                r3.getMessage()
            Lcd:
                r2.k = r0
            Lcf:
                return
        }
    }

    public d(android.content.Context r7, java.lang.String r8, java.lang.String r9) {
            r6 = this;
            r6.<init>()
            r0 = 0
            r6.J = r0
            r6.K = r0
            java.lang.Object r1 = new java.lang.Object
            r1.<init>()
            r6.c = r1
            java.util.concurrent.CopyOnWriteArrayList r1 = new java.util.concurrent.CopyOnWriteArrayList
            r1.<init>()
            r6.R = r1
            r1 = 2
            r6.S = r1
            java.lang.String r1 = ""
            r6.V = r1
            r6.ab = r0
            r6.m = r1
            r6.n = r1
            r2 = 0
            r6.ac = r2
            com.tkay.expressad.reward.a.d$1 r4 = new com.tkay.expressad.reward.a.d$1
            android.os.Looper r5 = android.os.Looper.getMainLooper()
            r4.<init>(r6, r5)
            r6.ad = r4
            r6.o = r0
            r6.ae = r2
            r6.p = r0
            r6.q = r0
            r6.r = r0
            r6.s = r0
            r6.t = r0
            r6.af = r1
            android.content.Context r7 = r7.getApplicationContext()     // Catch: java.lang.Exception -> L4d
            r6.v = r7     // Catch: java.lang.Exception -> L4d
            r6.w = r9     // Catch: java.lang.Exception -> L4d
            r6.x = r8     // Catch: java.lang.Exception -> L4d
            return
        L4d:
            r7 = move-exception
            r7.printStackTrace()
            return
    }

    static java.lang.String a(com.tkay.expressad.reward.a.d r0) {
            java.lang.String r0 = r0.D
            return r0
    }

    private void a(com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r18, java.lang.String r19, com.tkay.expressad.foundation.d.c r20, java.util.List<com.tkay.expressad.foundation.d.c> r21, java.lang.String r22, java.lang.String r23, com.tkay.expressad.videocommon.e.d r24) {
            r17 = this;
            r12 = r17
            r0 = r20
            r6 = r21
            com.tkay.expressad.videocommon.a$a r13 = new com.tkay.expressad.videocommon.a$a     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r13.<init>()     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r14 = new com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r14.<init>(r1)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r13.a(r14)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r1 = 0
            if (r6 == 0) goto L2a
            int r2 = r21.size()     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            if (r2 <= 0) goto L2a
            com.tkay.expressad.video.signal.a.j r2 = new com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r2.<init>(r1, r0, r6)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            goto L2f
        L2a:
            com.tkay.expressad.video.signal.a.j r2 = new com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r2.<init>(r1, r0)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
        L2f:
            r15 = r2
            int r1 = r12.S     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r15.a(r1)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r11 = r23
            r15.a(r11)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r9 = r24
            r15.a(r9)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            boolean r1 = r12.ab     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r15.b(r1)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            com.tkay.expressad.reward.a.d$h r10 = new com.tkay.expressad.reward.a.d$h     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            int r8 = r12.S     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r1 = r10
            r2 = r17
            r3 = r18
            r4 = r23
            r5 = r20
            r6 = r21
            r7 = r22
            r16 = r8
            r8 = r23
            r9 = r24
            r21 = r10
            r10 = r16
            r11 = r17
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            com.tkay.expressad.reward.a.d$j r10 = new com.tkay.expressad.reward.a.d$j     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            android.os.Handler r9 = r12.ad     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r1 = r10
            r2 = r18
            r3 = r19
            r4 = r23
            r5 = r13
            r6 = r20
            r7 = r17
            r8 = r21
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r14.setWebViewListener(r10)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r14.setObject(r15)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r0 = r22
            r14.loadUrl(r0)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            android.os.Handler r0 = r12.ad     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r1 = 5000(0x1388, double:2.4703E-320)
            r3 = r21
            r0.postDelayed(r3, r1)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            return
        L8e:
            r0 = move-exception
            r0.getMessage()
            return
        L93:
            r0 = move-exception
            boolean r1 = com.tkay.expressad.b.a
            if (r1 == 0) goto L9b
            r0.printStackTrace()
        L9b:
            return
    }

    private void a(com.tkay.expressad.foundation.d.c r5, java.lang.String r6, java.lang.String r7, com.tkay.expressad.videocommon.e.d r8) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L33
            if (r0 != 0) goto L33
            r0 = 5
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L33
            com.tkay.expressad.videocommon.b.g r1 = com.tkay.expressad.videocommon.b.g.a()     // Catch: java.lang.Exception -> L33
            java.lang.String r1 = r1.c(r6)     // Catch: java.lang.Exception -> L33
            android.os.Message r2 = android.os.Message.obtain()     // Catch: java.lang.Exception -> L33
            r3 = 16
            r2.what = r3     // Catch: java.lang.Exception -> L33
            r3 = 0
            r0[r3] = r5     // Catch: java.lang.Exception -> L33
            r5 = 1
            r0[r5] = r1     // Catch: java.lang.Exception -> L33
            r5 = 2
            r0[r5] = r7     // Catch: java.lang.Exception -> L33
            r5 = 3
            r0[r5] = r8     // Catch: java.lang.Exception -> L33
            r5 = 4
            r0[r5] = r6     // Catch: java.lang.Exception -> L33
            r2.obj = r0     // Catch: java.lang.Exception -> L33
            android.os.Handler r5 = r4.ad     // Catch: java.lang.Exception -> L33
            if (r5 == 0) goto L33
            android.os.Handler r5 = r4.ad     // Catch: java.lang.Exception -> L33
            r5.sendMessage(r2)     // Catch: java.lang.Exception -> L33
        L33:
            return
    }

    static void a(com.tkay.expressad.reward.a.d r17, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r18, java.lang.String r19, com.tkay.expressad.foundation.d.c r20, java.util.List r21, java.lang.String r22, java.lang.String r23, com.tkay.expressad.videocommon.e.d r24) {
            r0 = r17
            r12 = r20
            r6 = r21
            com.tkay.expressad.videocommon.a$a r13 = new com.tkay.expressad.videocommon.a$a     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r13.<init>()     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r14 = new com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r14.<init>(r1)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r13.a(r14)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r1 = 0
            if (r6 == 0) goto L2a
            int r2 = r21.size()     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            if (r2 <= 0) goto L2a
            com.tkay.expressad.video.signal.a.j r2 = new com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r2.<init>(r1, r12, r6)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            goto L2f
        L2a:
            com.tkay.expressad.video.signal.a.j r2 = new com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r2.<init>(r1, r12)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
        L2f:
            r15 = r2
            int r1 = r0.S     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r15.a(r1)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r11 = r23
            r15.a(r11)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r9 = r24
            r15.a(r9)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            boolean r1 = r0.ab     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r15.b(r1)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            com.tkay.expressad.reward.a.d$h r10 = new com.tkay.expressad.reward.a.d$h     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            int r8 = r0.S     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r1 = r10
            r2 = r17
            r3 = r18
            r4 = r23
            r5 = r20
            r6 = r21
            r7 = r22
            r16 = r8
            r8 = r23
            r9 = r24
            r21 = r10
            r10 = r16
            r11 = r17
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            com.tkay.expressad.reward.a.d$j r10 = new com.tkay.expressad.reward.a.d$j     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            android.os.Handler r9 = r0.ad     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r1 = r10
            r2 = r18
            r3 = r19
            r4 = r23
            r5 = r13
            r6 = r20
            r7 = r17
            r8 = r21
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r14.setWebViewListener(r10)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r14.setObject(r15)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r1 = r22
            r14.loadUrl(r1)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            android.os.Handler r0 = r0.ad     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r1 = 5000(0x1388, double:2.4703E-320)
            r3 = r21
            r0.postDelayed(r3, r1)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            return
        L8e:
            r0 = move-exception
            r0.getMessage()
            return
        L93:
            r0 = move-exception
            boolean r1 = com.tkay.expressad.b.a
            if (r1 == 0) goto L9b
            r0.printStackTrace()
        L9b:
            return
    }

    static void a(com.tkay.expressad.reward.a.d r0, com.tkay.expressad.foundation.d.c r1, java.lang.String r2, java.lang.String r3, com.tkay.expressad.videocommon.e.d r4) {
            r0.a(r1, r2, r3, r4)
            return
    }

    static void a(com.tkay.expressad.reward.a.d r0, java.lang.String r1) {
            r0.b(r1)
            return
    }

    static void a(com.tkay.expressad.reward.a.d r16, java.lang.String r17, com.tkay.expressad.foundation.d.c r18, java.lang.String r19, java.lang.String r20, com.tkay.expressad.videocommon.e.d r21) {
            r0 = r16
            r10 = r18
            com.tkay.expressad.videocommon.a$a r11 = new com.tkay.expressad.videocommon.a$a     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r11.<init>()     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r12 = new com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r12.<init>(r1)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r11.a(r12)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            java.lang.String r1 = com.tkay.expressad.video.bt.a.c.b()     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r11.a(r1)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            com.tkay.expressad.foundation.d.d r2 = r0.Z     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r3 = 0
            if (r2 == 0) goto L42
            com.tkay.expressad.foundation.d.d r2 = r0.Z     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r2 = r2.J     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            if (r2 == 0) goto L42
            com.tkay.expressad.foundation.d.d r2 = r0.Z     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r2 = r2.J     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            if (r2 <= 0) goto L42
            com.tkay.expressad.video.signal.a.j r2 = new com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            com.tkay.expressad.foundation.d.d r4 = r0.Z     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r4 = r4.J     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r2.<init>(r3, r10, r4)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            goto L47
        L42:
            com.tkay.expressad.video.signal.a.j r2 = new com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r2.<init>(r3, r10)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
        L47:
            r13 = r2
            int r2 = r0.S     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r13.a(r2)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r14 = r20
            r13.a(r14)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r13.c(r1)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r7 = r21
            r13.a(r7)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            boolean r1 = r0.ab     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r13.b(r1)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            com.tkay.expressad.reward.a.d$g r15 = new com.tkay.expressad.reward.a.d$g     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            int r8 = r0.S     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r1 = r15
            r2 = r16
            r3 = r20
            r4 = r18
            r5 = r19
            r6 = r20
            r7 = r21
            r9 = r16
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            com.tkay.expressad.reward.a.d$a r9 = new com.tkay.expressad.reward.a.d$a     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            android.os.Handler r8 = r0.ad     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r1 = r9
            r2 = r17
            r3 = r20
            r4 = r11
            r5 = r18
            r6 = r16
            r7 = r15
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r12.setWebViewListener(r9)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r12.setObject(r13)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r1 = r19
            r12.loadUrl(r1)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            android.os.Handler r0 = r0.ad     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r1 = 5000(0x1388, double:2.4703E-320)
            r0.postDelayed(r15, r1)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            return
        L9a:
            r0 = move-exception
            r0.getMessage()
            return
        L9f:
            r0 = move-exception
            boolean r1 = com.tkay.expressad.b.a
            if (r1 == 0) goto La7
            r0.printStackTrace()
        La7:
            return
    }

    static void a(com.tkay.expressad.reward.a.d r7, java.lang.String r8, java.lang.String r9) {
            r0 = 5
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r1 = r7.R     // Catch: java.lang.Throwable -> Lc7
            if (r1 == 0) goto Lb1
            boolean r1 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> Lc7
            if (r1 != 0) goto Lb1
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r1 = r7.R     // Catch: java.lang.Throwable -> Lc7
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> Lc7
        L11:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> Lc7
            if (r2 == 0) goto L8f
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> Lc7
            com.tkay.expressad.foundation.d.c r2 = (com.tkay.expressad.foundation.d.c) r2     // Catch: java.lang.Throwable -> Lc7
            if (r2 == 0) goto L11
            java.lang.String r3 = r2.S()     // Catch: java.lang.Throwable -> Lc7
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lc7
            if (r4 != 0) goto L35
            boolean r3 = r9.equals(r3)     // Catch: java.lang.Throwable -> Lc7
            if (r3 == 0) goto L35
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r9 = r7.R     // Catch: java.lang.Throwable -> Lc7
            r9.remove(r2)     // Catch: java.lang.Throwable -> Lc7
            goto L8f
        L35:
            java.lang.String r3 = r2.I()     // Catch: java.lang.Throwable -> Lc7
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lc7
            if (r4 != 0) goto L4b
            boolean r3 = r9.equals(r3)     // Catch: java.lang.Throwable -> Lc7
            if (r3 == 0) goto L4b
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r9 = r7.R     // Catch: java.lang.Throwable -> Lc7
            r9.remove(r2)     // Catch: java.lang.Throwable -> Lc7
            goto L8f
        L4b:
            com.tkay.expressad.foundation.d.c$c r3 = r2.M()     // Catch: java.lang.Throwable -> Lc7
            if (r3 == 0) goto L11
            java.util.List r4 = r3.f()     // Catch: java.lang.Throwable -> Lc7
            if (r4 == 0) goto L7a
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> Lc7
        L5b:
            boolean r5 = r4.hasNext()     // Catch: java.lang.Throwable -> Lc7
            if (r5 == 0) goto L7a
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> Lc7
            com.tkay.expressad.foundation.d.c$c$a r5 = (com.tkay.expressad.foundation.d.c.c.a) r5     // Catch: java.lang.Throwable -> Lc7
            if (r5 == 0) goto L5b
            java.util.List<java.lang.String> r6 = r5.b     // Catch: java.lang.Throwable -> Lc7
            if (r6 == 0) goto L5b
            java.util.List<java.lang.String> r5 = r5.b     // Catch: java.lang.Throwable -> Lc7
            boolean r5 = r5.contains(r9)     // Catch: java.lang.Throwable -> Lc7
            if (r5 == 0) goto L5b
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r4 = r7.R     // Catch: java.lang.Throwable -> Lc7
            r4.remove(r2)     // Catch: java.lang.Throwable -> Lc7
        L7a:
            java.lang.String r3 = r3.e()     // Catch: java.lang.Throwable -> Lc7
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lc7
            if (r4 != 0) goto L11
            boolean r3 = r9.equals(r3)     // Catch: java.lang.Throwable -> Lc7
            if (r3 == 0) goto L11
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r9 = r7.R     // Catch: java.lang.Throwable -> Lc7
            r9.remove(r2)     // Catch: java.lang.Throwable -> Lc7
        L8f:
            com.tkay.expressad.reward.a.b r9 = r7.G     // Catch: java.lang.Throwable -> Lc7
            if (r9 == 0) goto Lc6
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r9 = r7.R     // Catch: java.lang.Throwable -> Lc7
            if (r9 == 0) goto Lc6
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r9 = r7.R     // Catch: java.lang.Throwable -> Lc7
            int r9 = r9.size()     // Catch: java.lang.Throwable -> Lc7
            if (r9 != 0) goto Lc6
            android.os.Handler r9 = r7.ad     // Catch: java.lang.Throwable -> Lc7
            if (r9 == 0) goto La8
            android.os.Handler r9 = r7.ad     // Catch: java.lang.Throwable -> Lc7
            r9.removeMessages(r0)     // Catch: java.lang.Throwable -> Lc7
        La8:
            r7.b(r8)     // Catch: java.lang.Throwable -> Lc7
            com.tkay.expressad.reward.a.b r9 = r7.G     // Catch: java.lang.Throwable -> Lc7
            r9.a(r8)     // Catch: java.lang.Throwable -> Lc7
            return
        Lb1:
            com.tkay.expressad.reward.a.b r9 = r7.G     // Catch: java.lang.Throwable -> Lc7
            if (r9 == 0) goto Lc6
            android.os.Handler r9 = r7.ad     // Catch: java.lang.Throwable -> Lc7
            if (r9 == 0) goto Lbe
            android.os.Handler r9 = r7.ad     // Catch: java.lang.Throwable -> Lc7
            r9.removeMessages(r0)     // Catch: java.lang.Throwable -> Lc7
        Lbe:
            r7.b(r8)     // Catch: java.lang.Throwable -> Lc7
            com.tkay.expressad.reward.a.b r9 = r7.G     // Catch: java.lang.Throwable -> Lc7
            r9.a(r8)     // Catch: java.lang.Throwable -> Lc7
        Lc6:
            return
        Lc7:
            r9 = move-exception
            r9.getMessage()
            com.tkay.expressad.reward.a.b r9 = r7.G     // Catch: java.lang.Throwable -> Ldc
            if (r9 == 0) goto Ldb
            android.os.Handler r9 = r7.ad     // Catch: java.lang.Throwable -> Ldc
            if (r9 == 0) goto Ld8
            android.os.Handler r9 = r7.ad     // Catch: java.lang.Throwable -> Ldc
            r9.removeMessages(r0)     // Catch: java.lang.Throwable -> Ldc
        Ld8:
            r7.b(r8)     // Catch: java.lang.Throwable -> Ldc
        Ldb:
            return
        Ldc:
            r7 = move-exception
            r7.getMessage()
            return
    }

    static void a(com.tkay.expressad.reward.a.d r3, java.util.List r4) {
            android.content.Context r0 = r3.v
            if (r0 == 0) goto L28
            if (r4 == 0) goto L28
            int r0 = r4.size()
            if (r0 != 0) goto Ld
            goto L28
        Ld:
            r0 = 0
        Le:
            int r1 = r4.size()
            if (r0 >= r1) goto L28
            java.lang.Object r1 = r4.get(r0)
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1
            if (r1 == 0) goto L25
            android.content.Context r2 = r3.v
            java.lang.String r1 = r1.ba()
            com.tkay.expressad.foundation.h.t.a(r2, r1)
        L25:
            int r0 = r0 + 1
            goto Le
        L28:
            return
    }

    private void a(java.lang.Runnable r1) {
            r0 = this;
            r0.H = r1
            return
    }

    private void a(java.lang.String r1) {
            r0 = this;
            r0.V = r1
            return
    }

    private void a(java.lang.String r17, com.tkay.expressad.foundation.d.c r18, java.lang.String r19, java.lang.String r20, com.tkay.expressad.videocommon.e.d r21) {
            r16 = this;
            r10 = r16
            r0 = r18
            com.tkay.expressad.videocommon.a$a r11 = new com.tkay.expressad.videocommon.a$a     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r11.<init>()     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r12 = new com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r12.<init>(r1)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r11.a(r12)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            java.lang.String r1 = com.tkay.expressad.video.bt.a.c.b()     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r11.a(r1)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            com.tkay.expressad.foundation.d.d r2 = r10.Z     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r3 = 0
            if (r2 == 0) goto L42
            com.tkay.expressad.foundation.d.d r2 = r10.Z     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r2 = r2.J     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            if (r2 == 0) goto L42
            com.tkay.expressad.foundation.d.d r2 = r10.Z     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r2 = r2.J     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            if (r2 <= 0) goto L42
            com.tkay.expressad.video.signal.a.j r2 = new com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            com.tkay.expressad.foundation.d.d r4 = r10.Z     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r4 = r4.J     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r2.<init>(r3, r0, r4)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            goto L47
        L42:
            com.tkay.expressad.video.signal.a.j r2 = new com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r2.<init>(r3, r0)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
        L47:
            r13 = r2
            int r2 = r10.S     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r13.a(r2)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r14 = r20
            r13.a(r14)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r13.c(r1)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r7 = r21
            r13.a(r7)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            boolean r1 = r10.ab     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r13.b(r1)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            com.tkay.expressad.reward.a.d$g r15 = new com.tkay.expressad.reward.a.d$g     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            int r8 = r10.S     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r1 = r15
            r2 = r16
            r3 = r20
            r4 = r18
            r5 = r19
            r6 = r20
            r7 = r21
            r9 = r16
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            com.tkay.expressad.reward.a.d$a r9 = new com.tkay.expressad.reward.a.d$a     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            android.os.Handler r8 = r10.ad     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r1 = r9
            r2 = r17
            r3 = r20
            r4 = r11
            r5 = r18
            r6 = r16
            r7 = r15
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r12.setWebViewListener(r9)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r12.setObject(r13)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r0 = r19
            r12.loadUrl(r0)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            android.os.Handler r0 = r10.ad     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r1 = 5000(0x1388, double:2.4703E-320)
            r0.postDelayed(r15, r1)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            return
        L9a:
            r0 = move-exception
            r0.getMessage()
            return
        L9f:
            r0 = move-exception
            boolean r1 = com.tkay.expressad.b.a
            if (r1 == 0) goto La7
            r0.printStackTrace()
        La7:
            return
    }

    private void a(java.lang.String r8, java.lang.String r9) {
            r7 = this;
            r0 = 5
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r1 = r7.R     // Catch: java.lang.Throwable -> Lc7
            if (r1 == 0) goto Lb1
            boolean r1 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> Lc7
            if (r1 != 0) goto Lb1
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r1 = r7.R     // Catch: java.lang.Throwable -> Lc7
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> Lc7
        L11:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> Lc7
            if (r2 == 0) goto L8f
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> Lc7
            com.tkay.expressad.foundation.d.c r2 = (com.tkay.expressad.foundation.d.c) r2     // Catch: java.lang.Throwable -> Lc7
            if (r2 == 0) goto L11
            java.lang.String r3 = r2.S()     // Catch: java.lang.Throwable -> Lc7
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lc7
            if (r4 != 0) goto L35
            boolean r3 = r9.equals(r3)     // Catch: java.lang.Throwable -> Lc7
            if (r3 == 0) goto L35
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r9 = r7.R     // Catch: java.lang.Throwable -> Lc7
            r9.remove(r2)     // Catch: java.lang.Throwable -> Lc7
            goto L8f
        L35:
            java.lang.String r3 = r2.I()     // Catch: java.lang.Throwable -> Lc7
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lc7
            if (r4 != 0) goto L4b
            boolean r3 = r9.equals(r3)     // Catch: java.lang.Throwable -> Lc7
            if (r3 == 0) goto L4b
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r9 = r7.R     // Catch: java.lang.Throwable -> Lc7
            r9.remove(r2)     // Catch: java.lang.Throwable -> Lc7
            goto L8f
        L4b:
            com.tkay.expressad.foundation.d.c$c r3 = r2.M()     // Catch: java.lang.Throwable -> Lc7
            if (r3 == 0) goto L11
            java.util.List r4 = r3.f()     // Catch: java.lang.Throwable -> Lc7
            if (r4 == 0) goto L7a
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> Lc7
        L5b:
            boolean r5 = r4.hasNext()     // Catch: java.lang.Throwable -> Lc7
            if (r5 == 0) goto L7a
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> Lc7
            com.tkay.expressad.foundation.d.c$c$a r5 = (com.tkay.expressad.foundation.d.c.c.a) r5     // Catch: java.lang.Throwable -> Lc7
            if (r5 == 0) goto L5b
            java.util.List<java.lang.String> r6 = r5.b     // Catch: java.lang.Throwable -> Lc7
            if (r6 == 0) goto L5b
            java.util.List<java.lang.String> r5 = r5.b     // Catch: java.lang.Throwable -> Lc7
            boolean r5 = r5.contains(r9)     // Catch: java.lang.Throwable -> Lc7
            if (r5 == 0) goto L5b
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r4 = r7.R     // Catch: java.lang.Throwable -> Lc7
            r4.remove(r2)     // Catch: java.lang.Throwable -> Lc7
        L7a:
            java.lang.String r3 = r3.e()     // Catch: java.lang.Throwable -> Lc7
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lc7
            if (r4 != 0) goto L11
            boolean r3 = r9.equals(r3)     // Catch: java.lang.Throwable -> Lc7
            if (r3 == 0) goto L11
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r9 = r7.R     // Catch: java.lang.Throwable -> Lc7
            r9.remove(r2)     // Catch: java.lang.Throwable -> Lc7
        L8f:
            com.tkay.expressad.reward.a.b r9 = r7.G     // Catch: java.lang.Throwable -> Lc7
            if (r9 == 0) goto Lc6
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r9 = r7.R     // Catch: java.lang.Throwable -> Lc7
            if (r9 == 0) goto Lc6
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r9 = r7.R     // Catch: java.lang.Throwable -> Lc7
            int r9 = r9.size()     // Catch: java.lang.Throwable -> Lc7
            if (r9 != 0) goto Lc6
            android.os.Handler r9 = r7.ad     // Catch: java.lang.Throwable -> Lc7
            if (r9 == 0) goto La8
            android.os.Handler r9 = r7.ad     // Catch: java.lang.Throwable -> Lc7
            r9.removeMessages(r0)     // Catch: java.lang.Throwable -> Lc7
        La8:
            r7.b(r8)     // Catch: java.lang.Throwable -> Lc7
            com.tkay.expressad.reward.a.b r9 = r7.G     // Catch: java.lang.Throwable -> Lc7
            r9.a(r8)     // Catch: java.lang.Throwable -> Lc7
            return
        Lb1:
            com.tkay.expressad.reward.a.b r9 = r7.G     // Catch: java.lang.Throwable -> Lc7
            if (r9 == 0) goto Lc6
            android.os.Handler r9 = r7.ad     // Catch: java.lang.Throwable -> Lc7
            if (r9 == 0) goto Lbe
            android.os.Handler r9 = r7.ad     // Catch: java.lang.Throwable -> Lc7
            r9.removeMessages(r0)     // Catch: java.lang.Throwable -> Lc7
        Lbe:
            r7.b(r8)     // Catch: java.lang.Throwable -> Lc7
            com.tkay.expressad.reward.a.b r9 = r7.G     // Catch: java.lang.Throwable -> Lc7
            r9.a(r8)     // Catch: java.lang.Throwable -> Lc7
        Lc6:
            return
        Lc7:
            r9 = move-exception
            r9.getMessage()
            com.tkay.expressad.reward.a.b r9 = r7.G     // Catch: java.lang.Throwable -> Ldc
            if (r9 == 0) goto Ldb
            android.os.Handler r9 = r7.ad     // Catch: java.lang.Throwable -> Ldc
            if (r9 == 0) goto Ld8
            android.os.Handler r9 = r7.ad     // Catch: java.lang.Throwable -> Ldc
            r9.removeMessages(r0)     // Catch: java.lang.Throwable -> Ldc
        Ld8:
            r7.b(r8)     // Catch: java.lang.Throwable -> Ldc
        Ldb:
            return
        Ldc:
            r8 = move-exception
            r8.getMessage()
            return
    }

    static void a(java.lang.String r4, java.util.List r5) {
            if (r5 == 0) goto L75
            int r0 = r5.size()
            if (r0 <= 0) goto L75
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "mark cache data: "
            r0.<init>(r1)
            int r1 = r5.size()
            r0.append(r1)
            java.util.Iterator r5 = r5.iterator()
        L1a:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L75
            java.lang.Object r0 = r5.next()
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            com.tkay.expressad.foundation.d.c$c r1 = r0.M()
            if (r1 == 0) goto L1a
            com.tkay.expressad.foundation.d.c$c r1 = r0.M()
            java.lang.String r1 = r1.e()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L1a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            java.lang.String r2 = "_"
            r1.append(r2)
            java.lang.String r3 = r0.aZ()
            r1.append(r3)
            r1.append(r2)
            java.lang.String r3 = r0.Z()
            r1.append(r3)
            r1.append(r2)
            com.tkay.expressad.foundation.d.c$c r2 = r0.M()
            java.lang.String r2 = r2.e()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.tkay.expressad.videocommon.a.b(r1)
            int r1 = r0.w()
            com.tkay.expressad.videocommon.a.b(r1, r0)
            goto L1a
        L75:
            return
    }

    private void a(java.util.List<com.tkay.expressad.foundation.d.c> r4) {
            r3 = this;
            android.content.Context r0 = r3.v
            if (r0 == 0) goto L28
            if (r4 == 0) goto L28
            int r0 = r4.size()
            if (r0 != 0) goto Ld
            goto L28
        Ld:
            r0 = 0
        Le:
            int r1 = r4.size()
            if (r0 >= r1) goto L28
            java.lang.Object r1 = r4.get(r0)
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1
            if (r1 == 0) goto L25
            android.content.Context r2 = r3.v
            java.lang.String r1 = r1.ba()
            com.tkay.expressad.foundation.h.t.a(r2, r1)
        L25:
            int r0 = r0 + 1
            goto Le
        L28:
            return
    }

    private void a(java.util.List<com.tkay.expressad.foundation.d.c> r6, com.tkay.expressad.videocommon.e.d r7) {
            r5 = this;
            if (r6 == 0) goto L5d
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Exception -> L55
        L6:
            boolean r0 = r6.hasNext()     // Catch: java.lang.Exception -> L55
            if (r0 == 0) goto L5d
            java.lang.Object r0 = r6.next()     // Catch: java.lang.Exception -> L55
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0     // Catch: java.lang.Exception -> L55
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L18
            r3 = r1
            goto L19
        L18:
            r3 = r2
        L19:
            com.tkay.expressad.foundation.d.c$c r4 = r0.M()     // Catch: java.lang.Exception -> L55
            if (r4 == 0) goto L20
            goto L21
        L20:
            r1 = r2
        L21:
            r1 = r1 & r3
            if (r1 == 0) goto L3f
            com.tkay.expressad.foundation.d.c$c r1 = r0.M()     // Catch: java.lang.Exception -> L55
            java.lang.String r1 = r1.e()     // Catch: java.lang.Exception -> L55
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L55
            if (r1 != 0) goto L3f
            com.tkay.expressad.foundation.d.c$c r1 = r0.M()     // Catch: java.lang.Exception -> L55
            java.lang.String r1 = r1.e()     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = r5.w     // Catch: java.lang.Exception -> L55
            r5.a(r0, r1, r2, r7)     // Catch: java.lang.Exception -> L55
        L3f:
            if (r0 == 0) goto L6
            java.lang.String r1 = r0.ar()     // Catch: java.lang.Exception -> L55
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L55
            if (r1 != 0) goto L6
            java.lang.String r1 = r0.ar()     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = r5.w     // Catch: java.lang.Exception -> L55
            r5.a(r0, r1, r2, r7)     // Catch: java.lang.Exception -> L55
            goto L6
        L55:
            r6 = move-exception
            boolean r7 = com.tkay.expressad.b.a
            if (r7 == 0) goto L5d
            r6.printStackTrace()
        L5d:
            return
    }

    private static boolean a(com.tkay.expressad.foundation.d.c r1) {
            com.tkay.expressad.videocommon.a.a r0 = com.tkay.expressad.videocommon.a.a.a()     // Catch: java.lang.Exception -> Le
            if (r0 == 0) goto L12
            com.tkay.expressad.videocommon.a.a.a()     // Catch: java.lang.Exception -> Le
            boolean r1 = com.tkay.expressad.videocommon.a.a.a(r1)     // Catch: java.lang.Exception -> Le
            return r1
        Le:
            r1 = move-exception
            r1.printStackTrace()
        L12:
            r1 = 1
            return r1
    }

    static boolean a(com.tkay.expressad.reward.a.d r0, java.util.List r1, boolean r2, int r3) {
            boolean r0 = r0.b(r1, r2, r3)
            return r0
    }

    static java.lang.String b(com.tkay.expressad.reward.a.d r0) {
            java.lang.String r0 = r0.E
            return r0
    }

    private void b(com.tkay.expressad.foundation.d.c r5, java.lang.String r6, java.lang.String r7, com.tkay.expressad.videocommon.e.d r8) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L3b
            if (r0 != 0) goto L3b
            r0 = 5
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L3b
            java.lang.String r1 = "zip"
            boolean r1 = r6.contains(r1)     // Catch: java.lang.Exception -> L3b
            if (r1 == 0) goto L3b
            android.os.Handler r1 = r4.ad     // Catch: java.lang.Exception -> L3b
            if (r1 == 0) goto L3b
            com.tkay.expressad.videocommon.b.g r1 = com.tkay.expressad.videocommon.b.g.a()     // Catch: java.lang.Exception -> L3b
            java.lang.String r1 = r1.c(r6)     // Catch: java.lang.Exception -> L3b
            android.os.Message r2 = android.os.Message.obtain()     // Catch: java.lang.Exception -> L3b
            r3 = 17
            r2.what = r3     // Catch: java.lang.Exception -> L3b
            r3 = 0
            r0[r3] = r5     // Catch: java.lang.Exception -> L3b
            r5 = 1
            r0[r5] = r1     // Catch: java.lang.Exception -> L3b
            r5 = 2
            r0[r5] = r7     // Catch: java.lang.Exception -> L3b
            r5 = 3
            r0[r5] = r8     // Catch: java.lang.Exception -> L3b
            r5 = 4
            r0[r5] = r6     // Catch: java.lang.Exception -> L3b
            r2.obj = r0     // Catch: java.lang.Exception -> L3b
            android.os.Handler r5 = r4.ad     // Catch: java.lang.Exception -> L3b
            r5.sendMessage(r2)     // Catch: java.lang.Exception -> L3b
        L3b:
            return
    }

    private void b(com.tkay.expressad.foundation.d.d r3) {
            r2 = this;
            r2.Z = r3     // Catch: java.lang.Exception -> L31
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L31
            java.lang.String r0 = "V3 data just requested back,requestId "
            r3.<init>(r0)     // Catch: java.lang.Exception -> L31
            com.tkay.expressad.foundation.d.d r0 = r2.Z     // Catch: java.lang.Exception -> L31
            java.lang.String r0 = r0.f()     // Catch: java.lang.Exception -> L31
            r3.append(r0)     // Catch: java.lang.Exception -> L31
            com.tkay.expressad.foundation.d.d r3 = r2.Z     // Catch: java.lang.Exception -> L31
            if (r3 == 0) goto L23
            com.tkay.expressad.foundation.d.d r3 = r2.Z     // Catch: java.lang.Exception -> L31
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r3 = r3.J     // Catch: java.lang.Exception -> L31
            if (r3 == 0) goto L23
            com.tkay.expressad.foundation.d.d r3 = r2.Z     // Catch: java.lang.Exception -> L31
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r3 = r3.J     // Catch: java.lang.Exception -> L31
            r3.size()     // Catch: java.lang.Exception -> L31
        L23:
            com.tkay.expressad.foundation.d.d r3 = r2.Z     // Catch: java.lang.Exception -> L31
            r2.c(r3)     // Catch: java.lang.Exception -> L31
            com.tkay.expressad.foundation.d.d r3 = r2.Z     // Catch: java.lang.Exception -> L31
            java.lang.String r3 = r3.f()     // Catch: java.lang.Exception -> L31
            r2.m = r3     // Catch: java.lang.Exception -> L31
            return
        L31:
            r3 = move-exception
            boolean r0 = com.tkay.expressad.b.a
            if (r0 == 0) goto L39
            r3.printStackTrace()
        L39:
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r3 = r2.aa
            if (r3 == 0) goto L40
            r3.clear()
        L40:
            java.util.List<com.tkay.expressad.foundation.d.c> r3 = r2.ag
            if (r3 == 0) goto L47
            r3.clear()
        L47:
            r3 = 0
            r2.p = r3
            r2.q = r3
            java.lang.Object r0 = r2.c
            monitor-enter(r0)
            boolean r1 = r2.r     // Catch: java.lang.Throwable -> L63
            if (r1 == 0) goto L55
            r2.r = r3     // Catch: java.lang.Throwable -> L63
        L55:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L63
            r2.t = r3
            r2.s = r3
            java.lang.String r3 = "exception after load success"
            r2.b(r3)
            r2.r()
            return
        L63:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    private void b(java.lang.String r3) {
            r2 = this;
            android.os.Handler r0 = r2.ad
            if (r0 == 0) goto L2c
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 4
            if (r0 == 0) goto L11
            android.os.Handler r3 = r2.ad
            r3.sendEmptyMessage(r1)
            return
        L11:
            android.os.Message r0 = android.os.Message.obtain()
            r0.what = r1
            r0.obj = r3
            java.lang.String r1 = "exception"
            boolean r3 = r3.contains(r1)
            if (r3 == 0) goto L27
            android.os.Handler r3 = r2.ad
            r3.sendMessageAtFrontOfQueue(r0)
            return
        L27:
            android.os.Handler r3 = r2.ad
            r3.sendMessage(r0)
        L2c:
            return
    }

    private static void b(java.lang.String r4, java.util.List<com.tkay.expressad.foundation.d.c> r5) {
            if (r5 == 0) goto L75
            int r0 = r5.size()
            if (r0 <= 0) goto L75
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "mark cache data: "
            r0.<init>(r1)
            int r1 = r5.size()
            r0.append(r1)
            java.util.Iterator r5 = r5.iterator()
        L1a:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L75
            java.lang.Object r0 = r5.next()
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            com.tkay.expressad.foundation.d.c$c r1 = r0.M()
            if (r1 == 0) goto L1a
            com.tkay.expressad.foundation.d.c$c r1 = r0.M()
            java.lang.String r1 = r1.e()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L1a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            java.lang.String r2 = "_"
            r1.append(r2)
            java.lang.String r3 = r0.aZ()
            r1.append(r3)
            r1.append(r2)
            java.lang.String r3 = r0.Z()
            r1.append(r3)
            r1.append(r2)
            com.tkay.expressad.foundation.d.c$c r2 = r0.M()
            java.lang.String r2 = r2.e()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.tkay.expressad.videocommon.a.b(r1)
            int r1 = r0.w()
            com.tkay.expressad.videocommon.a.b(r1, r0)
            goto L1a
        L75:
            return
    }

    private void b(java.util.List<com.tkay.expressad.foundation.d.c> r12) {
            r11 = this;
            if (r12 == 0) goto Lc8
            int r0 = r12.size()
            if (r0 <= 0) goto Lc8
            java.util.Iterator r12 = r12.iterator()
        Lc:
            boolean r0 = r12.hasNext()
            if (r0 == 0) goto Lc8
            java.lang.Object r0 = r12.next()
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            if (r0 == 0) goto Lc
            java.lang.String r1 = r0.P()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L2f
            com.tkay.expressad.videocommon.b.g r1 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r2 = r0.P()
            r1.b(r2)
        L2f:
            com.tkay.expressad.foundation.d.c$c r1 = r0.M()
            if (r1 == 0) goto Lc
            com.tkay.expressad.foundation.d.c$c r8 = r0.M()
            java.lang.String r1 = r8.d()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            java.lang.String r9 = ".zip"
            if (r1 != 0) goto L76
            java.lang.String r1 = r8.d()
            boolean r1 = r1.contains(r9)
            if (r1 == 0) goto L6a
            com.tkay.expressad.reward.a.d$i r10 = new com.tkay.expressad.reward.a.d$i
            java.lang.String r4 = r11.w
            r5 = 313(0x139, float:4.39E-43)
            com.tkay.expressad.videocommon.e.d r6 = r11.I
            r7 = 0
            r1 = r10
            r2 = r0
            r3 = r11
            r1.<init>(r2, r3, r4, r5, r6, r7)
            com.tkay.expressad.videocommon.b.g r1 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r2 = r8.d()
            r1.b(r2, r10)
            goto L76
        L6a:
            com.tkay.expressad.videocommon.b.g r1 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r2 = r8.d()
            r3 = 0
            r1.b(r2, r3)
        L76:
            java.lang.String r1 = r8.e()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Lc
            java.lang.String r1 = r8.e()
            java.lang.String r2 = "cmpt=1"
            boolean r1 = r1.contains(r2)
            if (r1 != 0) goto Lc
            java.lang.String r1 = r8.e()
            boolean r1 = r1.contains(r9)
            if (r1 == 0) goto Lb2
            com.tkay.expressad.reward.a.d$i r9 = new com.tkay.expressad.reward.a.d$i
            java.lang.String r4 = r11.w
            r5 = 859(0x35b, float:1.204E-42)
            com.tkay.expressad.videocommon.e.d r6 = r11.I
            r7 = 0
            r1 = r9
            r2 = r0
            r3 = r11
            r1.<init>(r2, r3, r4, r5, r6, r7)
            com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r1 = r8.e()
            r0.b(r1, r9)
            goto Lc
        Lb2:
            com.tkay.expressad.reward.a.d$d r1 = new com.tkay.expressad.reward.a.d$d
            java.lang.String r2 = r11.w
            com.tkay.expressad.videocommon.e.d r3 = r11.I
            r1.<init>(r11, r0, r2, r3)
            com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r2 = r8.e()
            r0.b(r2, r1)
            goto Lc
        Lc8:
            return
    }

    private boolean b(com.tkay.expressad.foundation.d.c r5) {
            r4 = this;
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r4.aa
            r1 = 0
            if (r0 == 0) goto L2d
            int r0 = r0.size()
            if (r0 <= 0) goto L2d
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r4.aa
            java.util.Iterator r0 = r0.iterator()
        L11:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L2d
            java.lang.Object r2 = r0.next()
            com.tkay.expressad.foundation.d.c r2 = (com.tkay.expressad.foundation.d.c) r2
            java.lang.String r2 = r2.aZ()
            java.lang.String r3 = r5.aZ()
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L11
            r5 = 1
            return r5
        L2d:
            return r1
    }

    private boolean b(java.util.List<com.tkay.expressad.foundation.d.c> r10, boolean r11, int r12) {
            r9 = this;
            r0 = 0
            if (r10 == 0) goto L108
            int r1 = r10.size()
            if (r1 <= 0) goto L108
            java.lang.Object r1 = r10.get(r0)
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1
            com.tkay.expressad.videocommon.b.c r2 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r3 = r9.w
            boolean r4 = r9.U
            int r5 = r10.size()
            r6 = r11
            r7 = r12
            r8 = r10
            boolean r10 = r2.b(r3, r4, r5, r6, r7, r8)
            if (r10 == 0) goto L108
            java.lang.String r10 = "_"
            r12 = 1
            if (r11 == 0) goto L9b
            boolean r11 = r1.j()
            if (r11 == 0) goto L30
            return r12
        L30:
            java.util.ArrayList r11 = r1.aB()
            if (r11 == 0) goto L6e
            java.util.ArrayList r11 = r1.aB()
            int r11 = r11.size()
            if (r11 <= 0) goto L6e
            java.util.ArrayList r11 = r1.aB()
            r2 = 3
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            boolean r11 = r11.contains(r2)
            if (r11 == 0) goto L50
            return r12
        L50:
            java.lang.String r11 = r1.ar()
            java.lang.String r2 = r1.I()
            boolean r11 = r11.equals(r2)
            if (r11 == 0) goto L6e
            java.util.ArrayList r11 = r1.aB()
            r2 = 2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            boolean r11 = r11.contains(r2)
            if (r11 == 0) goto L6e
            return r12
        L6e:
            com.tkay.expressad.videocommon.b.j r11 = com.tkay.expressad.videocommon.b.j.a()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r9.w
            r2.append(r3)
            r2.append(r10)
            java.lang.String r3 = r1.Z()
            r2.append(r3)
            r2.append(r10)
            java.lang.String r10 = r1.ar()
            r2.append(r10)
            java.lang.String r10 = r2.toString()
            boolean r10 = r11.d(r10)
            if (r10 == 0) goto L108
            return r12
        L9b:
            if (r1 == 0) goto La4
            boolean r11 = r1.j()
            if (r11 == 0) goto La4
            return r12
        La4:
            java.util.ArrayList r11 = r1.aB()
            if (r11 == 0) goto Lc3
            java.util.ArrayList r11 = r1.aB()
            int r11 = r11.size()
            if (r11 <= 0) goto Lc3
            java.util.ArrayList r11 = r1.aB()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r12)
            boolean r11 = r11.contains(r2)
            if (r11 == 0) goto Lc3
            return r12
        Lc3:
            com.tkay.expressad.foundation.d.c$c r11 = r1.M()
            if (r11 == 0) goto L107
            com.tkay.expressad.foundation.d.c$c r11 = r1.M()
            java.lang.String r11 = r11.e()
            boolean r11 = android.text.TextUtils.isEmpty(r11)
            if (r11 != 0) goto L107
            com.tkay.expressad.videocommon.b.j r11 = com.tkay.expressad.videocommon.b.j.a()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r9.w
            r2.append(r3)
            r2.append(r10)
            java.lang.String r3 = r1.Z()
            r2.append(r3)
            r2.append(r10)
            com.tkay.expressad.foundation.d.c$c r10 = r1.M()
            java.lang.String r10 = r10.e()
            r2.append(r10)
            java.lang.String r10 = r2.toString()
            boolean r10 = r11.d(r10)
            if (r10 == 0) goto L108
        L107:
            return r12
        L108:
            return r0
    }

    static com.tkay.expressad.reward.a.b c(com.tkay.expressad.reward.a.d r0) {
            com.tkay.expressad.reward.a.b r0 = r0.G
            return r0
    }

    private void c(com.tkay.expressad.foundation.d.c r11) {
            r10 = this;
            if (r11 != 0) goto L3
            return
        L3:
            java.lang.String r0 = r11.P()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L18
            com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r1 = r11.P()
            r0.b(r1)
        L18:
            com.tkay.expressad.foundation.d.c$c r0 = r11.M()
            if (r0 == 0) goto Lae
            com.tkay.expressad.foundation.d.c$c r0 = r11.M()
            java.lang.String r1 = r0.d()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            java.lang.String r2 = ".zip"
            if (r1 != 0) goto L5f
            java.lang.String r1 = r0.d()
            boolean r1 = r1.contains(r2)
            if (r1 == 0) goto L53
            com.tkay.expressad.reward.a.d$i r1 = new com.tkay.expressad.reward.a.d$i
            java.lang.String r6 = r10.w
            r7 = 313(0x139, float:4.39E-43)
            com.tkay.expressad.videocommon.e.d r8 = r10.I
            r9 = 0
            r3 = r1
            r4 = r11
            r5 = r10
            r3.<init>(r4, r5, r6, r7, r8, r9)
            com.tkay.expressad.videocommon.b.g r3 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r4 = r0.d()
            r3.b(r4, r1)
            goto L5f
        L53:
            com.tkay.expressad.videocommon.b.g r1 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r3 = r0.d()
            r4 = 0
            r1.b(r3, r4)
        L5f:
            java.lang.String r1 = r0.e()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Lae
            java.lang.String r1 = r0.e()
            java.lang.String r3 = "cmpt=1"
            boolean r1 = r1.contains(r3)
            if (r1 != 0) goto Lae
            java.lang.String r1 = r0.e()
            boolean r1 = r1.contains(r2)
            if (r1 == 0) goto L9a
            com.tkay.expressad.reward.a.d$i r1 = new com.tkay.expressad.reward.a.d$i
            java.lang.String r5 = r10.w
            r6 = 859(0x35b, float:1.204E-42)
            com.tkay.expressad.videocommon.e.d r7 = r10.I
            r8 = 0
            r2 = r1
            r3 = r11
            r4 = r10
            r2.<init>(r3, r4, r5, r6, r7, r8)
            com.tkay.expressad.videocommon.b.g r11 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r0 = r0.e()
            r11.b(r0, r1)
            return
        L9a:
            com.tkay.expressad.reward.a.d$d r1 = new com.tkay.expressad.reward.a.d$d
            java.lang.String r2 = r10.w
            com.tkay.expressad.videocommon.e.d r3 = r10.I
            r1.<init>(r10, r11, r2, r3)
            com.tkay.expressad.videocommon.b.g r11 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r0 = r0.e()
            r11.b(r0, r1)
        Lae:
            return
    }

    private void c(com.tkay.expressad.foundation.d.d r19) {
            r18 = this;
            r1 = r18
            r0 = r19
            r1.Z = r0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Campaign request success: "
            r2.<init>(r3)
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r3 = r0.J
            int r3 = r3.size()
            r2.append(r3)
            java.util.concurrent.CopyOnWriteArrayList r2 = r18.d(r19)
            r1.aa = r2
            com.tkay.core.common.l.b.a r2 = com.tkay.core.common.l.b.a.a()
            com.tkay.expressad.reward.a.d$5 r3 = new com.tkay.expressad.reward.a.d$5
            r3.<init>(r1, r0)
            r2.a(r3)
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r2 = r1.aa
            if (r2 == 0) goto L12b
            int r2 = r2.size()
            if (r2 <= 0) goto L12b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "onload load success,size:"
            r2.<init>(r3)
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r3 = r1.aa
            int r3 = r3.size()
            r2.append(r3)
            android.os.Handler r2 = r1.ad
            if (r2 == 0) goto L4a
            r3 = 3
            r2.sendEmptyMessage(r3)
        L4a:
            if (r0 == 0) goto L58
            java.lang.String r0 = r19.c()
            boolean r2 = com.tkay.expressad.foundation.h.w.b(r0)
            if (r2 == 0) goto L58
            com.tkay.expressad.reward.b.a.b = r0
        L58:
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r1.aa
            r2 = 0
            if (r0 == 0) goto L6c
            int r3 = r0.size()     // Catch: java.lang.Exception -> L98
            if (r3 <= 0) goto L6c
            int r3 = r1.y     // Catch: java.lang.Exception -> L98
            int r0 = r0.size()     // Catch: java.lang.Exception -> L98
            int r3 = r3 + r0
            r1.y = r3     // Catch: java.lang.Exception -> L98
        L6c:
            com.tkay.expressad.videocommon.e.d r0 = r1.I     // Catch: java.lang.Exception -> L98
            if (r0 == 0) goto L7a
            int r0 = r1.y     // Catch: java.lang.Exception -> L98
            com.tkay.expressad.videocommon.e.d r3 = r1.I     // Catch: java.lang.Exception -> L98
            int r3 = r3.D()     // Catch: java.lang.Exception -> L98
            if (r0 <= r3) goto L7c
        L7a:
            r1.y = r2     // Catch: java.lang.Exception -> L98
        L7c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L98
            java.lang.String r3 = "onload 算出 下次的offset是:"
            r0.<init>(r3)     // Catch: java.lang.Exception -> L98
            int r3 = r1.y     // Catch: java.lang.Exception -> L98
            r0.append(r3)     // Catch: java.lang.Exception -> L98
            java.lang.String r0 = r1.w     // Catch: java.lang.Exception -> L98
            boolean r0 = com.tkay.expressad.foundation.h.w.b(r0)     // Catch: java.lang.Exception -> L98
            if (r0 == 0) goto L9c
            java.lang.String r0 = r1.w     // Catch: java.lang.Exception -> L98
            int r3 = r1.y     // Catch: java.lang.Exception -> L98
            com.tkay.expressad.reward.b.a.a(r0, r3)     // Catch: java.lang.Exception -> L98
            goto L9c
        L98:
            r0 = move-exception
            r0.printStackTrace()
        L9c:
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r1.aa
            if (r0 == 0) goto Lb6
            int r0 = r0.size()
            if (r0 <= 0) goto Lb6
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r3 = "#######onload,save the ad data locally,size:"
            r0.<init>(r3)
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r3 = r1.aa
            int r3 = r3.size()
            r0.append(r3)
        Lb6:
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r1.aa
            java.lang.Object r0 = r0.get(r2)
            r5 = r0
            com.tkay.expressad.foundation.d.c r5 = (com.tkay.expressad.foundation.d.c) r5
            java.lang.String r0 = r5.ar()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r0 = r0 ^ 1
            int r3 = r5.ap()
            r1.p = r2
            r1.q = r2
            java.lang.Object r4 = r1.c
            monitor-enter(r4)
            boolean r6 = r1.r     // Catch: java.lang.Throwable -> L128
            if (r6 == 0) goto Lda
            r1.r = r2     // Catch: java.lang.Throwable -> L128
        Lda:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L128
            r1.t = r2
            r1.s = r2
            com.tkay.expressad.reward.a.c r6 = com.tkay.expressad.reward.a.c.m.a()
            android.content.Context r7 = r1.v
            boolean r10 = r1.U
            boolean r2 = r1.T
            if (r2 == 0) goto Lee
            r2 = 287(0x11f, float:4.02E-43)
            goto Lf0
        Lee:
            r2 = 94
        Lf0:
            r11 = r2
            java.lang.String r12 = r1.x
            java.lang.String r13 = r1.w
            java.lang.String r14 = r5.Z()
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r15 = r1.aa
            com.tkay.expressad.reward.a.d$2 r2 = new com.tkay.expressad.reward.a.d$2
            r2.<init>(r1, r0, r5, r3)
            com.tkay.expressad.reward.a.d$3 r4 = new com.tkay.expressad.reward.a.d$3
            r4.<init>(r1, r0, r5, r3)
            r8 = r0
            r9 = r3
            r16 = r2
            r17 = r4
            r6.a(r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17)
            if (r0 == 0) goto L127
            com.tkay.expressad.reward.a.c r2 = com.tkay.expressad.reward.a.c.m.a()
            android.content.Context r4 = r1.v
            java.lang.String r6 = r1.x
            java.lang.String r7 = r1.w
            java.lang.String r8 = r5.Z()
            com.tkay.expressad.reward.a.d$4 r9 = new com.tkay.expressad.reward.a.d$4
            r9.<init>(r1, r5, r0, r3)
            r3 = r2
            r3.a(r4, r5, r6, r7, r8, r9)
        L127:
            return
        L128:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
        L12b:
            java.lang.String r0 = r1.af
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L137
            java.lang.String r0 = "Offer list is empty"
            r1.af = r0
        L137:
            java.lang.String r0 = r1.af
            r1.b(r0)
            return
    }

    private static void c(java.lang.String r1) {
            boolean r0 = com.tkay.expressad.foundation.h.w.b(r1)
            if (r0 == 0) goto L8
            com.tkay.expressad.reward.b.a.b = r1
        L8:
            return
    }

    private void c(java.util.List<com.tkay.expressad.foundation.d.c> r10) {
            r9 = this;
            if (r10 == 0) goto L75
            int r0 = r10.size()
            if (r0 <= 0) goto L75
            java.util.Iterator r10 = r10.iterator()
        Lc:
            boolean r0 = r10.hasNext()
            if (r0 == 0) goto L75
            java.lang.Object r0 = r10.next()
            r2 = r0
            com.tkay.expressad.foundation.d.c r2 = (com.tkay.expressad.foundation.d.c) r2
            java.lang.String r0 = r2.I()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto Lc
            boolean r1 = r2.H()
            if (r1 != 0) goto Lc
            java.lang.String r1 = ".zip"
            boolean r1 = r0.contains(r1)
            if (r1 == 0) goto L5a
            java.lang.String r1 = "md5filename"
            boolean r1 = r0.contains(r1)
            if (r1 == 0) goto L5a
            com.tkay.expressad.videocommon.b.g r1 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r1 = r1.c(r0)
            boolean r7 = android.text.TextUtils.isEmpty(r1)
            com.tkay.expressad.reward.a.d$i r8 = new com.tkay.expressad.reward.a.d$i
            java.lang.String r4 = r9.w
            r5 = 497(0x1f1, float:6.96E-43)
            com.tkay.expressad.videocommon.e.d r6 = r9.I
            r1 = r8
            r3 = r9
            r1.<init>(r2, r3, r4, r5, r6, r7)
            com.tkay.expressad.videocommon.b.g r1 = com.tkay.expressad.videocommon.b.g.a()
            r1.b(r0, r8)
            goto Lc
        L5a:
            com.tkay.expressad.videocommon.b.h r1 = com.tkay.expressad.videocommon.b.h.a()
            java.lang.String r1 = r1.b(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            com.tkay.expressad.reward.a.d$f r3 = new com.tkay.expressad.reward.a.d$f
            java.lang.String r4 = r9.w
            r3.<init>(r9, r2, r4, r1)
            com.tkay.expressad.videocommon.b.g r1 = com.tkay.expressad.videocommon.b.g.a()
            r1.b(r0, r3)
            goto Lc
        L75:
            return
    }

    static java.util.List d(com.tkay.expressad.reward.a.d r0) {
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r0.ag
            return r0
    }

    private java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> d(com.tkay.expressad.foundation.d.d r10) {
            r9 = this;
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            com.tkay.expressad.videocommon.e.d r1 = r9.I     // Catch: java.lang.Exception -> L1b2
            if (r1 == 0) goto Le
            com.tkay.expressad.videocommon.e.d r1 = r9.I     // Catch: java.lang.Exception -> L1b2
            r1.A()     // Catch: java.lang.Exception -> L1b2
        Le:
            if (r10 == 0) goto L1b6
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r1 = r10.J     // Catch: java.lang.Exception -> L1b2
            if (r1 == 0) goto L1b6
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r1 = r10.J     // Catch: java.lang.Exception -> L1b2
            int r1 = r1.size()     // Catch: java.lang.Exception -> L1b2
            if (r1 <= 0) goto L1b6
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r1 = r10.J     // Catch: java.lang.Exception -> L1b2
            r9.ag = r1     // Catch: java.lang.Exception -> L1b2
            r2 = 0
            if (r10 == 0) goto L49
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r3 = r10.J     // Catch: java.lang.Exception -> L1b2
            if (r3 == 0) goto L49
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r3 = r10.J     // Catch: java.lang.Exception -> L1b2
            int r3 = r3.size()     // Catch: java.lang.Exception -> L1b2
            if (r3 <= 0) goto L49
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r10 = r10.J     // Catch: java.lang.Exception -> L1b2
            r3 = r2
        L32:
            int r4 = r10.size()     // Catch: java.lang.Exception -> L1b2
            if (r3 >= r4) goto L49
            java.lang.Object r4 = r10.get(r3)     // Catch: java.lang.Exception -> L1b2
            com.tkay.expressad.foundation.d.c r4 = (com.tkay.expressad.foundation.d.c) r4     // Catch: java.lang.Exception -> L1b2
            java.lang.String r5 = r9.w     // Catch: java.lang.Exception -> L1b2
            r4.l(r5)     // Catch: java.lang.Exception -> L1b2
            r10.set(r3, r4)     // Catch: java.lang.Exception -> L1b2
            int r3 = r3 + 1
            goto L32
        L49:
            r10 = r2
        L4a:
            int r3 = r1.size()     // Catch: java.lang.Exception -> L1b2
            if (r10 >= r3) goto L1a3
            r3 = 2147483647(0x7fffffff, float:NaN)
            if (r10 >= r3) goto L1a3
            java.lang.Object r3 = r1.get(r10)     // Catch: java.lang.Exception -> L1b2
            com.tkay.expressad.foundation.d.c r3 = (com.tkay.expressad.foundation.d.c) r3     // Catch: java.lang.Exception -> L1b2
            boolean r4 = r3.H()     // Catch: java.lang.Exception -> L1b2
            if (r4 == 0) goto L128
            java.lang.String r4 = r3.G()     // Catch: java.lang.Exception -> L1b2
            java.lang.String r4 = r4.trim()     // Catch: java.lang.Exception -> L1b2
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L1b2
            if (r4 != 0) goto L19f
            r4 = 0
            int r5 = r3.w()     // Catch: java.lang.Exception -> L1b2
            r6 = 287(0x11f, float:4.02E-43)
            if (r5 == r6) goto L83
            int r5 = r3.w()     // Catch: java.lang.Exception -> L1b2
            r6 = 94
            if (r5 == r6) goto L83
            r3.w()     // Catch: java.lang.Exception -> L1b2
        L83:
            com.tkay.expressad.foundation.g.c.c r5 = com.tkay.expressad.foundation.g.c.c.i     // Catch: java.lang.Throwable -> Lf0 java.lang.Exception -> Lf2
            java.lang.String r5 = com.tkay.expressad.foundation.g.c.f.b(r5)     // Catch: java.lang.Throwable -> Lf0 java.lang.Exception -> Lf2
            java.lang.String r6 = r3.G()     // Catch: java.lang.Throwable -> Lf0 java.lang.Exception -> Lf2
            java.lang.String r6 = com.tkay.expressad.foundation.h.p.a(r6)     // Catch: java.lang.Throwable -> Lf0 java.lang.Exception -> Lf2
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Lf0 java.lang.Exception -> Lf2
            if (r7 == 0) goto L9f
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lf0 java.lang.Exception -> Lf2
            java.lang.String r6 = java.lang.String.valueOf(r6)     // Catch: java.lang.Throwable -> Lf0 java.lang.Exception -> Lf2
        L9f:
            java.lang.String r7 = ".html"
            java.lang.String r6 = r6.concat(r7)     // Catch: java.lang.Throwable -> Lf0 java.lang.Exception -> Lf2
            java.io.File r7 = new java.io.File     // Catch: java.lang.Throwable -> Lf0 java.lang.Exception -> Lf2
            r7.<init>(r5, r6)     // Catch: java.lang.Throwable -> Lf0 java.lang.Exception -> Lf2
            java.io.FileOutputStream r5 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> Lf0 java.lang.Exception -> Lf2
            r5.<init>(r7)     // Catch: java.lang.Throwable -> Lf0 java.lang.Exception -> Lf2
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb
            r4.<init>()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb
            java.lang.String r6 = "<script>"
            r4.append(r6)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb
            com.tkay.expressad.d.b.a.a()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb
            java.lang.String r6 = com.tkay.expressad.d.b.a.b()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb
            r4.append(r6)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb
            java.lang.String r6 = "</script>"
            r4.append(r6)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb
            java.lang.String r6 = r3.G()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb
            r4.append(r6)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb
            r5.write(r4)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb
            r5.flush()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb
            java.lang.String r4 = r7.getAbsolutePath()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb
            r3.j(r4)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb
            r5.close()     // Catch: java.lang.Exception -> L1b2
            goto L100
        Le8:
            r10 = move-exception
            r4 = r5
            goto L122
        Leb:
            r4 = move-exception
            r8 = r5
            r5 = r4
            r4 = r8
            goto Lf3
        Lf0:
            r10 = move-exception
            goto L122
        Lf2:
            r5 = move-exception
        Lf3:
            r5.printStackTrace()     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r5 = ""
            r3.j(r5)     // Catch: java.lang.Throwable -> Lf0
            if (r4 == 0) goto L100
            r4.close()     // Catch: java.lang.Exception -> L1b2
        L100:
            java.io.File r4 = new java.io.File     // Catch: java.lang.Exception -> L1b2
            java.lang.String r5 = r3.G()     // Catch: java.lang.Exception -> L1b2
            r4.<init>(r5)     // Catch: java.lang.Exception -> L1b2
            boolean r5 = r4.exists()     // Catch: java.lang.Exception -> L1b2
            if (r5 == 0) goto L11b
            boolean r5 = r4.isFile()     // Catch: java.lang.Exception -> L1b2
            if (r5 == 0) goto L11b
            boolean r4 = r4.canRead()     // Catch: java.lang.Exception -> L1b2
            if (r4 != 0) goto L128
        L11b:
            java.lang.String r3 = "mraid resource write fail"
            r9.b(r3)     // Catch: java.lang.Exception -> L1b2
            goto L19f
        L122:
            if (r4 == 0) goto L127
            r4.close()     // Catch: java.lang.Exception -> L1b2
        L127:
            throw r10     // Catch: java.lang.Exception -> L1b2
        L128:
            if (r3 == 0) goto L19f
            int r4 = r3.O()     // Catch: java.lang.Exception -> L1b2
            r5 = 99
            if (r4 == r5) goto L19f
            boolean r4 = e(r3)     // Catch: java.lang.Exception -> L1b2
            r5 = 1
            if (r4 == 0) goto L14e
            java.lang.String r4 = r3.I()     // Catch: java.lang.Exception -> L1b2
            boolean r4 = com.tkay.expressad.foundation.h.w.a(r4)     // Catch: java.lang.Exception -> L1b2
            if (r4 == 0) goto L15a
            java.lang.String r4 = r3.G()     // Catch: java.lang.Exception -> L1b2
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L1b2
            if (r4 == 0) goto L15a
            goto L158
        L14e:
            java.lang.String r4 = r3.S()     // Catch: java.lang.Exception -> L1b2
            boolean r4 = com.tkay.expressad.foundation.h.w.a(r4)     // Catch: java.lang.Exception -> L1b2
            if (r4 == 0) goto L15a
        L158:
            r4 = r2
            goto L15b
        L15a:
            r4 = r5
        L15b:
            if (r4 == 0) goto L19b
            boolean r4 = com.tkay.expressad.foundation.h.t.a(r3)     // Catch: java.lang.Exception -> L1b2
            if (r4 == 0) goto L175
            android.content.Context r4 = r9.v     // Catch: java.lang.Exception -> L1b2
            java.lang.String r6 = r3.ba()     // Catch: java.lang.Exception -> L1b2
            boolean r4 = com.tkay.expressad.foundation.h.t.a(r4, r6)     // Catch: java.lang.Exception -> L1b2
            if (r4 == 0) goto L171
            r4 = r5
            goto L172
        L171:
            r4 = 2
        L172:
            r3.i(r4)     // Catch: java.lang.Exception -> L1b2
        L175:
            int r4 = r3.ae()     // Catch: java.lang.Exception -> L1b2
            if (r4 == r5) goto L197
            android.content.Context r4 = r9.v     // Catch: java.lang.Exception -> L1b2
            java.lang.String r5 = r3.ba()     // Catch: java.lang.Exception -> L1b2
            boolean r4 = com.tkay.expressad.foundation.h.t.a(r4, r5)     // Catch: java.lang.Exception -> L1b2
            if (r4 != 0) goto L188
            goto L197
        L188:
            boolean r4 = com.tkay.expressad.foundation.h.t.a(r3)     // Catch: java.lang.Exception -> L1b2
            if (r4 == 0) goto L192
            r0.add(r3)     // Catch: java.lang.Exception -> L1b2
            goto L19f
        L192:
            java.lang.String r3 = "APP ALREADY INSTALLED"
            r9.af = r3     // Catch: java.lang.Exception -> L1b2
            goto L19f
        L197:
            r0.add(r3)     // Catch: java.lang.Exception -> L1b2
            goto L19f
        L19b:
            java.lang.String r3 = "No video campaign"
            r9.af = r3     // Catch: java.lang.Exception -> L1b2
        L19f:
            int r10 = r10 + 1
            goto L4a
        L1a3:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1b2
            java.lang.String r1 = "onload,return campaign with the following video resources:"
            r10.<init>(r1)     // Catch: java.lang.Exception -> L1b2
            int r1 = r0.size()     // Catch: java.lang.Exception -> L1b2
            r10.append(r1)     // Catch: java.lang.Exception -> L1b2
            goto L1b6
        L1b2:
            r10 = move-exception
            r10.printStackTrace()
        L1b6:
            return r0
    }

    private void d(com.tkay.expressad.foundation.d.c r10) {
            r9 = this;
            if (r10 == 0) goto L31
            java.lang.String r0 = r10.ar()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L31
            java.lang.String r0 = r10.ar()
            com.tkay.expressad.videocommon.b.g r1 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r1 = r1.c(r0)
            boolean r8 = android.text.TextUtils.isEmpty(r1)
            com.tkay.expressad.reward.a.d$i r1 = new com.tkay.expressad.reward.a.d$i
            java.lang.String r5 = r9.w
            r6 = 502(0x1f6, float:7.03E-43)
            com.tkay.expressad.videocommon.e.d r7 = r9.I
            r2 = r1
            r3 = r10
            r4 = r9
            r2.<init>(r3, r4, r5, r6, r7, r8)
            com.tkay.expressad.videocommon.b.g r10 = com.tkay.expressad.videocommon.b.g.a()
            r10.b(r0, r1)
        L31:
            return
    }

    private void d(java.util.List<com.tkay.expressad.foundation.d.c> r5) {
            r4 = this;
            if (r5 == 0) goto L61
            int r0 = r5.size()
            if (r0 <= 0) goto L61
            java.util.Iterator r5 = r5.iterator()
        Lc:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L61
            java.lang.Object r0 = r5.next()
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            java.lang.String r1 = r0.bd()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L3c
            com.tkay.expressad.reward.a.d$c r1 = new com.tkay.expressad.reward.a.d$c
            java.lang.String r2 = r4.w
            r1.<init>(r4, r0, r2)
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            com.tkay.expressad.foundation.g.d.b r2 = com.tkay.expressad.foundation.g.d.b.a(r2)
            java.lang.String r3 = r0.bd()
            r2.a(r3, r1)
        L3c:
            java.lang.String r1 = r0.be()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Lc
            com.tkay.expressad.reward.a.d$c r1 = new com.tkay.expressad.reward.a.d$c
            java.lang.String r2 = r4.w
            r1.<init>(r4, r0, r2)
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            com.tkay.expressad.foundation.g.d.b r2 = com.tkay.expressad.foundation.g.d.b.a(r2)
            java.lang.String r0 = r0.be()
            r2.a(r0, r1)
            goto Lc
        L61:
            return
    }

    static java.util.concurrent.CopyOnWriteArrayList e(com.tkay.expressad.reward.a.d r0) {
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r0.aa
            return r0
    }

    private void e(com.tkay.expressad.foundation.d.d r3) {
            r2 = this;
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.expressad.reward.a.d$5 r1 = new com.tkay.expressad.reward.a.d$5
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    private void e(java.util.List<com.tkay.expressad.foundation.d.c> r7) {
            r6 = this;
            if (r7 == 0) goto L7f
            int r0 = r7.size()     // Catch: java.lang.Throwable -> L77
            if (r0 <= 0) goto L7f
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Throwable -> L77
        Lc:
            boolean r0 = r7.hasNext()     // Catch: java.lang.Throwable -> L77
            if (r0 == 0) goto L7f
            java.lang.Object r0 = r7.next()     // Catch: java.lang.Throwable -> L77
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0     // Catch: java.lang.Throwable -> L77
            com.tkay.expressad.foundation.d.c$c r1 = r0.M()     // Catch: java.lang.Throwable -> L77
            if (r1 == 0) goto Lc
            com.tkay.expressad.foundation.d.c$c r1 = r0.M()     // Catch: java.lang.Throwable -> L77
            java.util.List r1 = r1.f()     // Catch: java.lang.Throwable -> L77
            if (r1 == 0) goto Lc
            com.tkay.expressad.foundation.d.c$c r1 = r0.M()     // Catch: java.lang.Throwable -> L77
            java.util.List r1 = r1.f()     // Catch: java.lang.Throwable -> L77
            if (r1 == 0) goto Lc
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L77
        L36:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L77
            if (r2 == 0) goto Lc
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L77
            com.tkay.expressad.foundation.d.c$c$a r2 = (com.tkay.expressad.foundation.d.c.c.a) r2     // Catch: java.lang.Throwable -> L77
            if (r2 == 0) goto L36
            java.util.List<java.lang.String> r3 = r2.b     // Catch: java.lang.Throwable -> L77
            if (r3 == 0) goto L36
            java.util.List<java.lang.String> r2 = r2.b     // Catch: java.lang.Throwable -> L77
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L77
        L4e:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L77
            if (r3 == 0) goto L36
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L77
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L77
            boolean r4 = com.tkay.expressad.foundation.h.w.b(r3)     // Catch: java.lang.Throwable -> L77
            if (r4 == 0) goto L4e
            com.tkay.expressad.reward.a.d$e r4 = new com.tkay.expressad.reward.a.d$e     // Catch: java.lang.Throwable -> L77
            java.lang.String r5 = r6.w     // Catch: java.lang.Throwable -> L77
            r4.<init>(r6, r0, r5)     // Catch: java.lang.Throwable -> L77
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L77
            android.content.Context r5 = r5.f()     // Catch: java.lang.Throwable -> L77
            com.tkay.expressad.foundation.g.d.b r5 = com.tkay.expressad.foundation.g.d.b.a(r5)     // Catch: java.lang.Throwable -> L77
            r5.a(r3, r4)     // Catch: java.lang.Throwable -> L77
            goto L4e
        L77:
            r7 = move-exception
            boolean r0 = com.tkay.expressad.b.a
            if (r0 == 0) goto L7f
            r7.printStackTrace()
        L7f:
            return
    }

    private static boolean e(com.tkay.expressad.foundation.d.c r1) {
            if (r1 == 0) goto L13
            int r1 = r1.J()     // Catch: java.lang.Throwable -> Lb
            r0 = 2
            if (r1 != r0) goto L13
            r1 = 1
            return r1
        Lb:
            r1 = move-exception
            boolean r0 = com.tkay.expressad.b.a
            if (r0 == 0) goto L13
            r1.printStackTrace()
        L13:
            r1 = 0
            return r1
    }

    static java.lang.String f(com.tkay.expressad.reward.a.d r0) {
            java.lang.String r0 = r0.w
            return r0
    }

    private void f(java.util.List<com.tkay.expressad.foundation.d.c> r5) {
            r4 = this;
            if (r5 == 0) goto L52
            int r0 = r5.size()     // Catch: java.lang.Exception -> L4e
            if (r0 <= 0) goto L52
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4e
            java.lang.String r1 = "onload 开始下载视频素材 size:"
            r0.<init>(r1)     // Catch: java.lang.Exception -> L4e
            int r1 = r5.size()     // Catch: java.lang.Exception -> L4e
            r0.append(r1)     // Catch: java.lang.Exception -> L4e
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r4.R     // Catch: java.lang.Exception -> L4e
            r0.clear()     // Catch: java.lang.Exception -> L4e
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r4.R     // Catch: java.lang.Exception -> L4e
            r0.addAll(r5)     // Catch: java.lang.Exception -> L4e
            com.tkay.expressad.videocommon.b.j r0 = com.tkay.expressad.videocommon.b.j.a()     // Catch: java.lang.Exception -> L4e
            r0.a(r5)     // Catch: java.lang.Exception -> L4e
            com.tkay.expressad.videocommon.b.c r0 = com.tkay.expressad.videocommon.b.c.a()     // Catch: java.lang.Exception -> L4e
            if (r0 == 0) goto L52
            com.tkay.expressad.reward.a.d$b r0 = new com.tkay.expressad.reward.a.d$b     // Catch: java.lang.Exception -> L4e
            r1 = 0
            java.lang.Object r1 = r5.get(r1)     // Catch: java.lang.Exception -> L4e
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1     // Catch: java.lang.Exception -> L4e
            r0.<init>(r4, r1)     // Catch: java.lang.Exception -> L4e
            com.tkay.expressad.videocommon.b.c r1 = com.tkay.expressad.videocommon.b.c.a()     // Catch: java.lang.Exception -> L4e
            java.lang.String r2 = r4.w     // Catch: java.lang.Exception -> L4e
            r3 = 94
            r1.a(r2, r5, r3, r0)     // Catch: java.lang.Exception -> L4e
            com.tkay.expressad.videocommon.b.c r5 = com.tkay.expressad.videocommon.b.c.a()     // Catch: java.lang.Exception -> L4e
            java.lang.String r0 = r4.w     // Catch: java.lang.Exception -> L4e
            r5.d(r0)     // Catch: java.lang.Exception -> L4e
            goto L52
        L4e:
            r5 = move-exception
            r5.getMessage()
        L52:
            return
    }

    static java.util.List g(com.tkay.expressad.reward.a.d r0) {
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r0.ah
            return r0
    }

    private void g() {
            r1 = this;
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r1.R
            if (r0 == 0) goto Lf
            int r0 = r0.size()
            if (r0 <= 0) goto Lf
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r1.R
            r0.clear()
        Lf:
            return
    }

    private void g(java.util.List<com.tkay.expressad.foundation.d.c> r2) {
            r1 = this;
            if (r2 == 0) goto L11
            int r0 = r2.size()     // Catch: java.lang.Exception -> L3e
            if (r0 <= 0) goto L11
            int r0 = r1.y     // Catch: java.lang.Exception -> L3e
            int r2 = r2.size()     // Catch: java.lang.Exception -> L3e
            int r0 = r0 + r2
            r1.y = r0     // Catch: java.lang.Exception -> L3e
        L11:
            com.tkay.expressad.videocommon.e.d r2 = r1.I     // Catch: java.lang.Exception -> L3e
            if (r2 == 0) goto L1f
            int r2 = r1.y     // Catch: java.lang.Exception -> L3e
            com.tkay.expressad.videocommon.e.d r0 = r1.I     // Catch: java.lang.Exception -> L3e
            int r0 = r0.D()     // Catch: java.lang.Exception -> L3e
            if (r2 <= r0) goto L22
        L1f:
            r2 = 0
            r1.y = r2     // Catch: java.lang.Exception -> L3e
        L22:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3e
            java.lang.String r0 = "onload 算出 下次的offset是:"
            r2.<init>(r0)     // Catch: java.lang.Exception -> L3e
            int r0 = r1.y     // Catch: java.lang.Exception -> L3e
            r2.append(r0)     // Catch: java.lang.Exception -> L3e
            java.lang.String r2 = r1.w     // Catch: java.lang.Exception -> L3e
            boolean r2 = com.tkay.expressad.foundation.h.w.b(r2)     // Catch: java.lang.Exception -> L3e
            if (r2 == 0) goto L3d
            java.lang.String r2 = r1.w     // Catch: java.lang.Exception -> L3e
            int r0 = r1.y     // Catch: java.lang.Exception -> L3e
            com.tkay.expressad.reward.b.a.a(r2, r0)     // Catch: java.lang.Exception -> L3e
        L3d:
            return
        L3e:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    private int h() {
            r1 = this;
            int r0 = r1.S
            return r0
    }

    private void h(java.util.List<com.tkay.expressad.foundation.d.c> r1) {
            r0 = this;
            r0.ah = r1
            return
    }

    static boolean h(com.tkay.expressad.reward.a.d r0) {
            boolean r0 = r0.U
            return r0
    }

    static android.os.Handler i(com.tkay.expressad.reward.a.d r0) {
            android.os.Handler r0 = r0.ad
            return r0
    }

    private static void i() {
            return
    }

    static java.util.concurrent.CopyOnWriteArrayList j(com.tkay.expressad.reward.a.d r0) {
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r0.R
            return r0
    }

    private static void j() {
            return
    }

    static com.tkay.expressad.foundation.d.d k(com.tkay.expressad.reward.a.d r0) {
            com.tkay.expressad.foundation.d.d r0 = r0.Z
            return r0
    }

    private void k() {
            r2 = this;
            android.os.Handler r0 = r2.ad
            if (r0 == 0) goto L8
            r1 = 3
            r0.sendEmptyMessage(r1)
        L8:
            return
    }

    private static void l() {
            return
    }

    static boolean l(com.tkay.expressad.reward.a.d r0) {
            boolean r0 = r0.ab
            return r0
    }

    private static void m() {
            return
    }

    static boolean m(com.tkay.expressad.reward.a.d r0) {
            boolean r0 = r0.T
            return r0
    }

    static int n(com.tkay.expressad.reward.a.d r0) {
            int r0 = r0.S
            return r0
    }

    private static void n() {
            return
    }

    static com.tkay.expressad.videocommon.e.d o(com.tkay.expressad.reward.a.d r0) {
            com.tkay.expressad.videocommon.e.d r0 = r0.I
            return r0
    }

    private static void o() {
            return
    }

    static java.lang.String p(com.tkay.expressad.reward.a.d r0) {
            java.lang.String r0 = r0.x
            return r0
    }

    private static void p() {
            return
    }

    private int q() {
            r3 = this;
            r0 = 0
            java.lang.String r1 = r3.w     // Catch: java.lang.Exception -> L20
            boolean r1 = com.tkay.expressad.foundation.h.w.b(r1)     // Catch: java.lang.Exception -> L20
            if (r1 == 0) goto L10
            java.lang.String r1 = r3.w     // Catch: java.lang.Exception -> L20
            int r1 = com.tkay.expressad.reward.b.a.a(r1)     // Catch: java.lang.Exception -> L20
            goto L11
        L10:
            r1 = r0
        L11:
            com.tkay.expressad.videocommon.e.d r2 = r3.I     // Catch: java.lang.Exception -> L20
            if (r2 == 0) goto L24
            com.tkay.expressad.videocommon.e.d r2 = r3.I     // Catch: java.lang.Exception -> L20
            int r2 = r2.D()     // Catch: java.lang.Exception -> L20
            if (r1 <= r2) goto L1e
            goto L24
        L1e:
            r0 = r1
            goto L24
        L20:
            r1 = move-exception
            r1.printStackTrace()
        L24:
            return r0
    }

    static android.content.Context q(com.tkay.expressad.reward.a.d r0) {
            android.content.Context r0 = r0.v
            return r0
    }

    private void r() {
            r2 = this;
            java.lang.String r0 = r2.w     // Catch: java.lang.Exception -> Lf
            boolean r0 = com.tkay.expressad.foundation.h.w.b(r0)     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto Le
            java.lang.String r0 = r2.w     // Catch: java.lang.Exception -> Lf
            r1 = 0
            com.tkay.expressad.reward.b.a.a(r0, r1)     // Catch: java.lang.Exception -> Lf
        Le:
            return
        Lf:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    private static java.lang.String s() {
            java.lang.String r0 = ""
            java.lang.String r1 = com.tkay.expressad.reward.b.a.b     // Catch: java.lang.Exception -> Ld
            boolean r1 = com.tkay.expressad.foundation.h.w.b(r1)     // Catch: java.lang.Exception -> Ld
            if (r1 == 0) goto L11
            java.lang.String r0 = com.tkay.expressad.reward.b.a.b     // Catch: java.lang.Exception -> Ld
            goto L11
        Ld:
            r1 = move-exception
            r1.printStackTrace()
        L11:
            return r0
    }

    private static java.lang.String t() {
            java.lang.String r0 = ""
            return r0
    }

    private static void u() {
            java.util.Map<java.lang.String, java.lang.Long> r0 = com.tkay.expressad.foundation.g.a.f.h     // Catch: java.lang.Exception -> L12
            if (r0 == 0) goto L11
            java.util.Map<java.lang.String, java.lang.Long> r0 = com.tkay.expressad.foundation.g.a.f.h     // Catch: java.lang.Exception -> L12
            int r0 = r0.size()     // Catch: java.lang.Exception -> L12
            if (r0 <= 0) goto L11
            java.util.Map<java.lang.String, java.lang.Long> r0 = com.tkay.expressad.foundation.g.a.f.h     // Catch: java.lang.Exception -> L12
            r0.clear()     // Catch: java.lang.Exception -> L12
        L11:
            return
        L12:
            r0 = move-exception
            boolean r1 = com.tkay.expressad.b.a
            if (r1 == 0) goto L1a
            r0.printStackTrace()
        L1a:
            return
    }

    private static void v() {
            return
    }

    private static void w() {
            return
    }

    private static void x() {
            return
    }

    public final void a(int r1) {
            r0 = this;
            r0.S = r1
            return
    }

    public final void a(int r1, int r2, int r3) {
            r0 = this;
            r0.W = r1
            r0.X = r2
            r0.Y = r3
            return
    }

    public final void a(android.app.Activity r3, com.tkay.expressad.video.bt.module.b.h r4, java.lang.String r5, java.lang.String r6, int r7, java.lang.String r8, com.tkay.core.common.f.i r9) {
            r2 = this;
            r2.F = r4     // Catch: java.lang.Exception -> L107
            android.content.Context r4 = r2.v     // Catch: java.lang.Exception -> L107
            if (r4 == 0) goto Lfb
            java.lang.String r4 = r2.w     // Catch: java.lang.Exception -> L107
            boolean r4 = com.tkay.expressad.foundation.h.w.a(r4)     // Catch: java.lang.Exception -> L107
            if (r4 == 0) goto L10
            goto Lfb
        L10:
            android.content.Context r4 = r2.v     // Catch: java.lang.Exception -> L107
            if (r3 == 0) goto L1b
            boolean r0 = r3.isFinishing()     // Catch: java.lang.Exception -> L107
            if (r0 != 0) goto L1b
            goto L23
        L1b:
            java.lang.String r3 = "tkay_BaseAdActivity"
            java.lang.String r0 = "Activity is null"
            android.util.Log.i(r3, r0)     // Catch: java.lang.Exception -> L107
            r3 = r4
        L23:
            android.content.Intent r4 = new android.content.Intent     // Catch: java.lang.Exception -> L107
            java.lang.Class<com.tkay.expressad.reward.player.TYRewardVideoActivity> r0 = com.tkay.expressad.reward.player.TYRewardVideoActivity.class
            r4.<init>(r3, r0)     // Catch: java.lang.Exception -> L107
            boolean r0 = r3 instanceof android.app.Activity     // Catch: java.lang.Exception -> L107
            if (r0 != 0) goto L33
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r4.addFlags(r0)     // Catch: java.lang.Exception -> L107
        L33:
            java.lang.String r0 = com.tkay.expressad.reward.player.TYRewardVideoActivity.a     // Catch: java.lang.Exception -> L107
            java.lang.String r1 = r2.w     // Catch: java.lang.Exception -> L107
            r4.putExtra(r0, r1)     // Catch: java.lang.Exception -> L107
            java.lang.String r0 = com.tkay.expressad.b.y     // Catch: java.lang.Exception -> L107
            java.lang.String r1 = r2.x     // Catch: java.lang.Exception -> L107
            r4.putExtra(r0, r1)     // Catch: java.lang.Exception -> L107
            java.lang.String r0 = com.tkay.expressad.reward.player.TYRewardVideoActivity.c     // Catch: java.lang.Exception -> L107
            r4.putExtra(r0, r5)     // Catch: java.lang.Exception -> L107
            java.lang.String r5 = com.tkay.expressad.reward.player.TYRewardVideoActivity.d     // Catch: java.lang.Exception -> L107
            r4.putExtra(r5, r7)     // Catch: java.lang.Exception -> L107
            java.lang.String r5 = com.tkay.expressad.reward.player.TYRewardVideoActivity.e     // Catch: java.lang.Exception -> L107
            boolean r7 = r2.T     // Catch: java.lang.Exception -> L107
            r4.putExtra(r5, r7)     // Catch: java.lang.Exception -> L107
            java.lang.String r5 = com.tkay.expressad.reward.player.TYRewardVideoActivity.f     // Catch: java.lang.Exception -> L107
            boolean r7 = r2.U     // Catch: java.lang.Exception -> L107
            r4.putExtra(r5, r7)     // Catch: java.lang.Exception -> L107
            java.lang.String r5 = com.tkay.expressad.reward.player.TYRewardVideoActivity.l     // Catch: java.lang.Exception -> L107
            r4.putExtra(r5, r8)     // Catch: java.lang.Exception -> L107
            java.lang.String r5 = com.tkay.expressad.reward.player.TYRewardVideoActivity.m     // Catch: java.lang.Exception -> L107
            r4.putExtra(r5, r9)     // Catch: java.lang.Exception -> L107
            com.tkay.expressad.videocommon.b.c r5 = com.tkay.expressad.videocommon.b.c.a()     // Catch: java.lang.Exception -> L107
            java.lang.String r7 = r2.w     // Catch: java.lang.Exception -> L107
            java.util.List r5 = r5.a(r7)     // Catch: java.lang.Exception -> L107
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L107
            java.lang.String r8 = "cur showing Offer requestId"
            r7.<init>(r8)     // Catch: java.lang.Exception -> L107
            r8 = 0
            java.lang.Object r9 = r5.get(r8)     // Catch: java.lang.Exception -> L107
            com.tkay.expressad.foundation.d.c r9 = (com.tkay.expressad.foundation.d.c) r9     // Catch: java.lang.Exception -> L107
            java.lang.String r9 = r9.Z()     // Catch: java.lang.Exception -> L107
            r7.append(r9)     // Catch: java.lang.Exception -> L107
            if (r5 == 0) goto Lb5
            int r7 = r5.size()     // Catch: java.lang.Exception -> L107
            if (r7 <= 0) goto Lb5
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L107
            java.lang.String r9 = "can show data: "
            r7.<init>(r9)     // Catch: java.lang.Exception -> L107
            int r9 = r5.size()     // Catch: java.lang.Exception -> L107
            r7.append(r9)     // Catch: java.lang.Exception -> L107
            java.lang.Object r5 = r5.get(r8)     // Catch: java.lang.Exception -> L107
            com.tkay.expressad.foundation.d.c r5 = (com.tkay.expressad.foundation.d.c) r5     // Catch: java.lang.Exception -> L107
            if (r5 == 0) goto La6
            java.lang.String r7 = r5.Z()     // Catch: java.lang.Exception -> L107
            r2.n = r7     // Catch: java.lang.Exception -> L107
        La6:
            if (r5 == 0) goto Lc1
            java.lang.String r5 = r5.ar()     // Catch: java.lang.Exception -> L107
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L107
            if (r5 != 0) goto Lc1
            r5 = 1
            r8 = r5
            goto Lc1
        Lb5:
            com.tkay.expressad.video.bt.module.b.h r5 = r2.F     // Catch: java.lang.Exception -> L107
            if (r5 == 0) goto Lc1
            com.tkay.expressad.video.bt.module.b.h r3 = r2.F     // Catch: java.lang.Exception -> L107
            java.lang.String r4 = "load failed"
            r3.a(r4)     // Catch: java.lang.Exception -> L107
            return
        Lc1:
            java.lang.String r5 = com.tkay.expressad.reward.player.TYRewardVideoActivity.g     // Catch: java.lang.Exception -> L107
            r4.putExtra(r5, r8)     // Catch: java.lang.Exception -> L107
            boolean r5 = r2.T     // Catch: java.lang.Exception -> L107
            if (r5 == 0) goto Ldf
            java.lang.String r5 = com.tkay.expressad.reward.player.TYRewardVideoActivity.i     // Catch: java.lang.Exception -> L107
            int r7 = r2.W     // Catch: java.lang.Exception -> L107
            r4.putExtra(r5, r7)     // Catch: java.lang.Exception -> L107
            java.lang.String r5 = com.tkay.expressad.reward.player.TYRewardVideoActivity.j     // Catch: java.lang.Exception -> L107
            int r7 = r2.X     // Catch: java.lang.Exception -> L107
            r4.putExtra(r5, r7)     // Catch: java.lang.Exception -> L107
            java.lang.String r5 = com.tkay.expressad.reward.player.TYRewardVideoActivity.k     // Catch: java.lang.Exception -> L107
            int r7 = r2.Y     // Catch: java.lang.Exception -> L107
            r4.putExtra(r5, r7)     // Catch: java.lang.Exception -> L107
        Ldf:
            boolean r5 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L107
            if (r5 != 0) goto Lea
            java.lang.String r5 = com.tkay.expressad.reward.player.TYRewardVideoActivity.b     // Catch: java.lang.Exception -> L107
            r4.putExtra(r5, r6)     // Catch: java.lang.Exception -> L107
        Lea:
            com.tkay.expressad.reward.a.e r5 = com.tkay.expressad.reward.a.e.a.a()     // Catch: java.lang.Exception -> L107
            java.lang.String r6 = r2.x     // Catch: java.lang.Exception -> L107
            java.lang.String r7 = r2.w     // Catch: java.lang.Exception -> L107
            com.tkay.expressad.videocommon.e.d r8 = r2.I     // Catch: java.lang.Exception -> L107
            r5.a(r6, r7, r8)     // Catch: java.lang.Exception -> L107
            r3.startActivity(r4)     // Catch: java.lang.Exception -> L107
            return
        Lfb:
            com.tkay.expressad.video.bt.module.b.h r3 = r2.F     // Catch: java.lang.Exception -> L107
            if (r3 == 0) goto L106
            com.tkay.expressad.video.bt.module.b.h r3 = r2.F     // Catch: java.lang.Exception -> L107
            java.lang.String r4 = "context or unitid is null"
            r3.a(r4)     // Catch: java.lang.Exception -> L107
        L106:
            return
        L107:
            r3 = move-exception
            r3.printStackTrace()
            com.tkay.expressad.video.bt.module.b.h r4 = r2.F
            if (r4 == 0) goto L124
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = "show failed, exception is "
            r5.<init>(r6)
            java.lang.String r3 = r3.getMessage()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.a(r3)
        L124:
            return
    }

    public final void a(com.tkay.expressad.foundation.d.d r4) {
            r3 = this;
            r0 = 1
            r3.z = r0
            r1 = 8
            r3.B = r1
            r3.C = r0
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r3.aa
            if (r0 == 0) goto L10
            r0.clear()
        L10:
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r3.ag
            if (r0 == 0) goto L17
            r0.clear()
        L17:
            r0 = 0
            r3.p = r0
            r3.q = r0
            java.lang.Object r1 = r3.c
            monitor-enter(r1)
            boolean r2 = r3.r     // Catch: java.lang.Throwable -> Lcb
            if (r2 == 0) goto L25
            r3.r = r0     // Catch: java.lang.Throwable -> Lcb
        L25:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lcb
            r3.t = r0
            r3.s = r0
            android.content.Context r1 = r3.v
            if (r1 != 0) goto L34
            java.lang.String r4 = "Context is null"
            r3.b(r4)
            return
        L34:
            java.lang.String r1 = r3.w
            boolean r1 = com.tkay.expressad.foundation.h.w.a(r1)
            if (r1 == 0) goto L42
            java.lang.String r4 = "UnitId is null"
            r3.b(r4)
            return
        L42:
            com.tkay.expressad.videocommon.e.d r1 = r3.I
            if (r1 != 0) goto L4c
            java.lang.String r4 = "RewardUnitSetting is null"
            r3.b(r4)
            return
        L4c:
            java.util.Map<java.lang.String, java.lang.Long> r1 = com.tkay.expressad.foundation.g.a.f.h     // Catch: java.lang.Exception -> L5e
            if (r1 == 0) goto L66
            java.util.Map<java.lang.String, java.lang.Long> r1 = com.tkay.expressad.foundation.g.a.f.h     // Catch: java.lang.Exception -> L5e
            int r1 = r1.size()     // Catch: java.lang.Exception -> L5e
            if (r1 <= 0) goto L66
            java.util.Map<java.lang.String, java.lang.Long> r1 = com.tkay.expressad.foundation.g.a.f.h     // Catch: java.lang.Exception -> L5e
            r1.clear()     // Catch: java.lang.Exception -> L5e
            goto L66
        L5e:
            r1 = move-exception
            boolean r2 = com.tkay.expressad.b.a
            if (r2 == 0) goto L66
            r1.printStackTrace()
        L66:
            r3.Z = r4     // Catch: java.lang.Exception -> L97
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L97
            java.lang.String r1 = "V3 data just requested back,requestId "
            r4.<init>(r1)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.foundation.d.d r1 = r3.Z     // Catch: java.lang.Exception -> L97
            java.lang.String r1 = r1.f()     // Catch: java.lang.Exception -> L97
            r4.append(r1)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.foundation.d.d r4 = r3.Z     // Catch: java.lang.Exception -> L97
            if (r4 == 0) goto L89
            com.tkay.expressad.foundation.d.d r4 = r3.Z     // Catch: java.lang.Exception -> L97
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r4 = r4.J     // Catch: java.lang.Exception -> L97
            if (r4 == 0) goto L89
            com.tkay.expressad.foundation.d.d r4 = r3.Z     // Catch: java.lang.Exception -> L97
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r4 = r4.J     // Catch: java.lang.Exception -> L97
            r4.size()     // Catch: java.lang.Exception -> L97
        L89:
            com.tkay.expressad.foundation.d.d r4 = r3.Z     // Catch: java.lang.Exception -> L97
            r3.c(r4)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.foundation.d.d r4 = r3.Z     // Catch: java.lang.Exception -> L97
            java.lang.String r4 = r4.f()     // Catch: java.lang.Exception -> L97
            r3.m = r4     // Catch: java.lang.Exception -> L97
            return
        L97:
            r4 = move-exception
            boolean r1 = com.tkay.expressad.b.a
            if (r1 == 0) goto L9f
            r4.printStackTrace()
        L9f:
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r4 = r3.aa
            if (r4 == 0) goto La6
            r4.clear()
        La6:
            java.util.List<com.tkay.expressad.foundation.d.c> r4 = r3.ag
            if (r4 == 0) goto Lad
            r4.clear()
        Lad:
            r3.p = r0
            r3.q = r0
            java.lang.Object r4 = r3.c
            monitor-enter(r4)
            boolean r1 = r3.r     // Catch: java.lang.Throwable -> Lc8
            if (r1 == 0) goto Lba
            r3.r = r0     // Catch: java.lang.Throwable -> Lc8
        Lba:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> Lc8
            r3.t = r0
            r3.s = r0
            java.lang.String r4 = "exception after load success"
            r3.b(r4)
            r3.r()
            return
        Lc8:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
        Lcb:
            r4 = move-exception
            monitor-exit(r1)
            throw r4
    }

    @Override
    public final void a(com.tkay.expressad.reward.a.b r1) {
            r0 = this;
            r0.G = r1
            return
    }

    public final void a(com.tkay.expressad.videocommon.e.d r2) {
            r1 = this;
            r1.I = r2     // Catch: java.lang.Throwable -> L19
            if (r2 == 0) goto L18
            int r2 = r2.V()     // Catch: java.lang.Throwable -> L19
            int r2 = r2 * 1000
            int r0 = com.tkay.expressad.foundation.g.a.cq     // Catch: java.lang.Throwable -> L19
            if (r2 == r0) goto L18
            com.tkay.expressad.videocommon.e.d r2 = r1.I     // Catch: java.lang.Throwable -> L19
            int r2 = r2.V()     // Catch: java.lang.Throwable -> L19
            int r2 = r2 * 1000
            com.tkay.expressad.foundation.g.a.cq = r2     // Catch: java.lang.Throwable -> L19
        L18:
            return
        L19:
            r2 = move-exception
            r2.getMessage()
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.T = r1
            return
    }

    @Override
    public final boolean a() {
            r1 = this;
            r0 = 0
            return r0
    }

    public final boolean a(java.util.List<com.tkay.expressad.foundation.d.c> r1, boolean r2, int r3) {
            r0 = this;
            boolean r1 = r0.b(r1, r2, r3)
            return r1
    }

    @Override
    public final void b() {
            r0 = this;
            return
    }

    public final void b(boolean r1) {
            r0 = this;
            r0.U = r1
            return
    }

    public final java.lang.String c(boolean r2) {
            r1 = this;
            if (r2 == 0) goto L2e
            java.lang.String r2 = r1.n
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L2b
            com.tkay.expressad.videocommon.b.c r2 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r0 = r1.w
            java.util.List r2 = r2.a(r0)
            if (r2 == 0) goto L2b
            int r0 = r2.size()
            if (r0 <= 0) goto L2b
            r0 = 0
            java.lang.Object r2 = r2.get(r0)
            com.tkay.expressad.foundation.d.c r2 = (com.tkay.expressad.foundation.d.c) r2
            if (r2 == 0) goto L2b
            java.lang.String r2 = r2.Z()
            r1.n = r2
        L2b:
            java.lang.String r2 = r1.n
            return r2
        L2e:
            java.lang.String r2 = r1.m
            return r2
    }

    @Override
    public final boolean c() {
            r3 = this;
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r3.aa
            r1 = 0
            if (r0 == 0) goto L29
            int r0 = r0.size()
            if (r0 != 0) goto Lc
            goto L29
        Lc:
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r3.aa
            java.lang.Object r0 = r0.get(r1)
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r1 = r3.aa
            java.lang.String r2 = r0.ar()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            r2 = r2 ^ 1
            int r0 = r0.ap()
            boolean r0 = r3.b(r1, r2, r0)
            return r0
        L29:
            return r1
    }

    @Override
    public final void d() {
            r0 = this;
            return
    }

    public final void d(boolean r1) {
            r0 = this;
            if (r1 != 0) goto Lf
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r1 = r0.aa
            if (r1 == 0) goto Lf
            int r1 = r1.size()
            if (r1 <= 0) goto Lf
            com.tkay.expressad.videocommon.a.a.a()
        Lf:
            return
    }

    public final java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.w
            return r0
    }

    public final void e(boolean r7) {
            r6 = this;
            java.lang.String r0 = "_"
            r1 = 0
            if (r7 == 0) goto L69
            java.util.List<com.tkay.expressad.foundation.d.c> r7 = r6.ah
            if (r7 == 0) goto Lcc
            int r7 = r7.size()
            if (r7 <= 0) goto Lcc
            java.util.List<com.tkay.expressad.foundation.d.c> r7 = r6.ah
            java.util.Iterator r7 = r7.iterator()
        L15:
            boolean r2 = r7.hasNext()
            if (r2 == 0) goto L68
            java.lang.Object r2 = r7.next()
            com.tkay.expressad.foundation.d.c r2 = (com.tkay.expressad.foundation.d.c) r2
            if (r2 == 0) goto L15
            r2.l(r1)
            com.tkay.expressad.foundation.d.c$c r3 = r2.M()
            if (r3 == 0) goto L15
            com.tkay.expressad.foundation.d.c$c r3 = r2.M()
            java.lang.String r3 = r3.e()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L15
            com.tkay.expressad.videocommon.b.j r3 = com.tkay.expressad.videocommon.b.j.a()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = r6.w
            r4.append(r5)
            r4.append(r0)
            java.lang.String r5 = r2.Z()
            r4.append(r5)
            r4.append(r0)
            com.tkay.expressad.foundation.d.c$c r2 = r2.M()
            java.lang.String r2 = r2.e()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r3.c(r2, r1)
            goto L15
        L68:
            return
        L69:
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r7 = r6.aa
            if (r7 == 0) goto Lcc
            int r7 = r7.size()
            if (r7 <= 0) goto Lcc
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r7 = r6.aa
            java.util.Iterator r7 = r7.iterator()
        L79:
            boolean r2 = r7.hasNext()
            if (r2 == 0) goto Lcc
            java.lang.Object r2 = r7.next()
            com.tkay.expressad.foundation.d.c r2 = (com.tkay.expressad.foundation.d.c) r2
            if (r2 == 0) goto L79
            r2.l(r1)
            com.tkay.expressad.foundation.d.c$c r3 = r2.M()
            if (r3 == 0) goto L79
            com.tkay.expressad.foundation.d.c$c r3 = r2.M()
            java.lang.String r3 = r3.e()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L79
            com.tkay.expressad.videocommon.b.j r3 = com.tkay.expressad.videocommon.b.j.a()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = r6.w
            r4.append(r5)
            r4.append(r0)
            java.lang.String r5 = r2.Z()
            r4.append(r5)
            r4.append(r0)
            com.tkay.expressad.foundation.d.c$c r2 = r2.M()
            java.lang.String r2 = r2.e()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r3.c(r2, r1)
            goto L79
        Lcc:
            return
    }

    public final java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> f() {
            r1 = this;
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r1.aa
            return r0
    }

    public final boolean f(boolean r7) {
            r6 = this;
            java.lang.String r0 = "_"
            r1 = 1
            if (r7 == 0) goto L69
            java.util.List<com.tkay.expressad.foundation.d.c> r7 = r6.ah
            if (r7 == 0) goto Lcd
            int r7 = r7.size()
            if (r7 <= 0) goto Lcd
            java.util.List<com.tkay.expressad.foundation.d.c> r7 = r6.ah
            java.util.Iterator r7 = r7.iterator()
        L15:
            boolean r2 = r7.hasNext()
            if (r2 == 0) goto L68
            java.lang.Object r2 = r7.next()
            com.tkay.expressad.foundation.d.c r2 = (com.tkay.expressad.foundation.d.c) r2
            if (r2 == 0) goto L15
            r2.l(r1)
            com.tkay.expressad.foundation.d.c$c r3 = r2.M()
            if (r3 == 0) goto L15
            com.tkay.expressad.foundation.d.c$c r3 = r2.M()
            java.lang.String r3 = r3.e()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L15
            com.tkay.expressad.videocommon.b.j r3 = com.tkay.expressad.videocommon.b.j.a()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = r6.w
            r4.append(r5)
            r4.append(r0)
            java.lang.String r5 = r2.Z()
            r4.append(r5)
            r4.append(r0)
            com.tkay.expressad.foundation.d.c$c r2 = r2.M()
            java.lang.String r2 = r2.e()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r3.c(r2, r1)
            goto L15
        L68:
            return r1
        L69:
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r7 = r6.aa
            if (r7 == 0) goto Lcd
            int r7 = r7.size()
            if (r7 <= 0) goto Lcd
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r7 = r6.aa
            java.util.Iterator r7 = r7.iterator()
        L79:
            boolean r2 = r7.hasNext()
            if (r2 == 0) goto Lcc
            java.lang.Object r2 = r7.next()
            com.tkay.expressad.foundation.d.c r2 = (com.tkay.expressad.foundation.d.c) r2
            if (r2 == 0) goto L79
            r2.l(r1)
            com.tkay.expressad.foundation.d.c$c r3 = r2.M()
            if (r3 == 0) goto L79
            com.tkay.expressad.foundation.d.c$c r3 = r2.M()
            java.lang.String r3 = r3.e()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L79
            com.tkay.expressad.videocommon.b.j r3 = com.tkay.expressad.videocommon.b.j.a()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = r6.w
            r4.append(r5)
            r4.append(r0)
            java.lang.String r5 = r2.Z()
            r4.append(r5)
            r4.append(r0)
            com.tkay.expressad.foundation.d.c$c r2 = r2.M()
            java.lang.String r2 = r2.e()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r3.c(r2, r1)
            goto L79
        Lcc:
            return r1
        Lcd:
            r7 = 0
            return r7
    }
}
