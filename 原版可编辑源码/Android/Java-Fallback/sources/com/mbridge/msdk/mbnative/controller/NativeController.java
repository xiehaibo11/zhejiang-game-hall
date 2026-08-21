package com.mbridge.msdk.mbnative.controller;

public class NativeController {
    private static boolean B;
    public static java.util.Map<java.lang.String, java.lang.Long> c;
    private static final java.lang.String e = null;
    private boolean A;
    private int C;
    private int D;
    private int E;
    private int F;
    private com.mbridge.msdk.foundation.same.e.b G;
    private java.util.Map<java.lang.String, java.lang.Boolean> H;
    private java.util.List<com.mbridge.msdk.mbnative.controller.a> I;
    private java.util.List<com.mbridge.msdk.mbnative.controller.a.a> J;
    private java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.same.e.a> K;
    private java.util.Hashtable<java.lang.String, com.iab.omid.library.mmadbridge.adsession.AdSession> L;
    private int M;
    private java.lang.String N;
    private com.mbridge.msdk.foundation.db.i O;
    private int P;
    private com.mbridge.msdk.mbnative.controller.NativeController.a Q;
    private boolean R;
    private boolean S;
    private java.lang.String T;
    private java.util.Timer U;
    private java.lang.String V;
    private com.mbridge.msdk.c.d W;
    private long X;
    private int Y;
    private int Z;
    protected java.util.List<java.lang.Integer> a;
    private boolean aa;
    private int ab;
    private int ac;
    private boolean ad;
    protected java.util.List<java.lang.Integer> b;
    java.util.Map<java.lang.String, java.lang.Object> d;
    private com.mbridge.msdk.c.c f;
    private com.mbridge.msdk.mbnative.c.a g;
    private com.mbridge.msdk.out.NativeListener.NativeTrackingListener h;
    private android.content.Context i;
    private java.lang.String j;
    private java.lang.String k;
    private java.util.Queue<java.lang.Integer> l;
    private java.util.Queue<java.lang.Long> m;
    private java.lang.String n;
    private com.mbridge.msdk.mbnative.controller.NativeController.e o;
    private com.mbridge.msdk.foundation.same.report.d p;
    private java.lang.String q;
    private com.mbridge.msdk.click.b r;
    private int s;
    private int t;
    private int u;
    private int v;
    private java.lang.String w;
    private boolean x;
    private boolean y;
    private boolean z;
















    public class a extends com.mbridge.msdk.mbnative.e.a.b implements com.mbridge.msdk.foundation.same.e.d {
        final com.mbridge.msdk.mbnative.controller.NativeController a;
        private boolean b;
        private java.lang.Runnable c;
        private boolean d;
        private java.util.List<java.lang.String> e;

        public a(com.mbridge.msdk.mbnative.controller.NativeController r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r1 = 0
                r0.b = r1
                r1 = 1
                r0.d = r1
                r1 = 0
                r0.e = r1
                return
        }

        @Override
        public final void a(int r3, java.lang.String r4) {
                r2 = this;
                com.mbridge.msdk.mbnative.controller.NativeController r0 = r2.a
                r1 = 1
                com.mbridge.msdk.mbnative.controller.NativeController.b(r0, r1)
                boolean r0 = r2.b
                if (r0 != 0) goto L56
                r0 = -1
                if (r3 != r0) goto L1e
                com.mbridge.msdk.mbnative.controller.NativeController r3 = r2.a
                int r3 = com.mbridge.msdk.mbnative.controller.NativeController.p(r3)
                java.lang.String r0 = r2.unitId
                com.mbridge.msdk.mbnative.controller.b.b(r3, r0)
                com.mbridge.msdk.mbnative.controller.NativeController r3 = r2.a
                r0 = 0
                com.mbridge.msdk.mbnative.controller.NativeController.b(r3, r0)
            L1e:
                java.lang.Runnable r3 = r2.c
                if (r3 == 0) goto L36
                java.lang.String r3 = com.mbridge.msdk.mbnative.controller.NativeController.c()
                java.lang.String r0 = "REMOVE CANCEL TASK ON onFailed"
                com.mbridge.msdk.foundation.tools.z.b(r3, r0)
                com.mbridge.msdk.mbnative.controller.NativeController r3 = r2.a
                com.mbridge.msdk.mbnative.controller.NativeController$e r3 = com.mbridge.msdk.mbnative.controller.NativeController.k(r3)
                java.lang.Runnable r0 = r2.c
                r3.removeCallbacks(r0)
            L36:
                com.mbridge.msdk.mbnative.controller.NativeController r3 = r2.a
                boolean r3 = com.mbridge.msdk.mbnative.controller.NativeController.e(r3)
                if (r3 != 0) goto L78
                int r3 = r2.b()
                if (r3 == r1) goto L48
                boolean r3 = r2.d
                if (r3 == 0) goto L78
            L48:
                com.mbridge.msdk.mbnative.controller.NativeController r3 = r2.a
                int r0 = r2.b()
                java.lang.String r1 = r2.a()
                r3.a(r4, r0, r1)
                goto L78
            L56:
                com.mbridge.msdk.mbnative.controller.NativeController r3 = r2.a
                boolean r3 = com.mbridge.msdk.mbnative.controller.NativeController.e(r3)
                if (r3 != 0) goto L78
                boolean r3 = r2.d
                if (r3 == 0) goto L78
                java.lang.String r3 = com.mbridge.msdk.mbnative.controller.NativeController.c()
                java.lang.String r0 = "onFailed onnative fail"
                com.mbridge.msdk.foundation.tools.z.b(r3, r0)
                com.mbridge.msdk.mbnative.controller.NativeController r3 = r2.a
                int r0 = r2.b()
                java.lang.String r1 = r2.a()
                r3.a(r4, r0, r1)
            L78:
                return
        }

        public final void a(java.lang.Runnable r1) {
                r0 = this;
                r0.c = r1
                return
        }

        public final void a(java.util.List<java.lang.String> r1) {
                r0 = this;
                r0.e = r1
                return
        }

        @Override
        public final void a(java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r14, com.mbridge.msdk.foundation.entity.CampaignUnit r15) {
                r13 = this;
                com.mbridge.msdk.mbnative.controller.NativeController r14 = r13.a
                r0 = 1
                com.mbridge.msdk.mbnative.controller.NativeController.b(r14, r0)
                com.mbridge.msdk.mbnative.controller.NativeController r14 = r13.a
                android.content.Context r14 = com.mbridge.msdk.mbnative.controller.NativeController.i(r14)
                com.mbridge.msdk.foundation.db.i r14 = com.mbridge.msdk.foundation.db.i.a(r14)
                com.mbridge.msdk.foundation.db.l r14 = com.mbridge.msdk.foundation.db.l.a(r14)
                r14.b()
                java.lang.Runnable r1 = r13.c
                if (r1 == 0) goto L2f
                java.lang.String r1 = com.mbridge.msdk.mbnative.controller.NativeController.c()
                java.lang.String r2 = "REMOVE CANCEL TASK ON SUCCESS"
                com.mbridge.msdk.foundation.tools.z.b(r1, r2)
                com.mbridge.msdk.mbnative.controller.NativeController r1 = r13.a
                com.mbridge.msdk.mbnative.controller.NativeController$e r1 = com.mbridge.msdk.mbnative.controller.NativeController.k(r1)
                java.lang.Runnable r2 = r13.c
                r1.removeCallbacks(r2)
            L2f:
                java.lang.String r1 = com.mbridge.msdk.mbnative.controller.NativeController.c()
                java.lang.String r2 = "onSuccess"
                com.mbridge.msdk.foundation.tools.z.d(r1, r2)
                java.util.ArrayList r1 = r15.getAds()
                com.mbridge.msdk.foundation.tools.ae.a(r1)
                r1 = 0
                if (r15 == 0) goto L2da
                java.util.ArrayList r2 = r15.getAds()
                if (r2 == 0) goto L2da
                java.util.ArrayList r2 = r15.getAds()
                int r2 = r2.size()
                if (r2 <= 0) goto L2da
                com.mbridge.msdk.mbnative.controller.NativeController r2 = r13.a
                java.lang.String r3 = r15.getSessionId()
                com.mbridge.msdk.mbnative.controller.NativeController.a(r2, r3)
                java.util.ArrayList r2 = new java.util.ArrayList
                r2.<init>()
                java.util.ArrayList r3 = new java.util.ArrayList
                r3.<init>()
                java.util.ArrayList r4 = new java.util.ArrayList
                r4.<init>()
                com.mbridge.msdk.mbnative.controller.NativeController r5 = r13.a
                int r5 = com.mbridge.msdk.mbnative.controller.NativeController.l(r5)
                r6 = 2
                if (r5 > 0) goto Lc2
                com.mbridge.msdk.mbnative.controller.NativeController r5 = r13.a
                int r5 = com.mbridge.msdk.mbnative.controller.NativeController.l(r5)
                r7 = -3
                if (r5 != r7) goto L8a
                com.mbridge.msdk.mbnative.controller.NativeController r5 = r13.a
                java.util.ArrayList r7 = r15.getAds()
                int r7 = r7.size()
                com.mbridge.msdk.mbnative.controller.NativeController.a(r5, r7)
                goto L93
            L8a:
                com.mbridge.msdk.mbnative.controller.NativeController r5 = r13.a
                int r7 = com.mbridge.msdk.mbnative.controller.NativeController.c(r5)
                com.mbridge.msdk.mbnative.controller.NativeController.a(r5, r7)
            L93:
                com.mbridge.msdk.mbnative.controller.NativeController r5 = r13.a
                int r5 = com.mbridge.msdk.mbnative.controller.NativeController.m(r5)
                if (r5 == 0) goto Laa
                int r5 = r15.getTemplate()
                if (r5 != r6) goto Laa
                com.mbridge.msdk.mbnative.controller.NativeController r5 = r13.a
                int r7 = com.mbridge.msdk.mbnative.controller.NativeController.m(r5)
                com.mbridge.msdk.mbnative.controller.NativeController.a(r5, r7)
            Laa:
                com.mbridge.msdk.mbnative.controller.NativeController r5 = r13.a
                int r5 = com.mbridge.msdk.mbnative.controller.NativeController.n(r5)
                if (r5 == 0) goto Lc2
                int r5 = r15.getTemplate()
                r7 = 3
                if (r5 != r7) goto Lc2
                com.mbridge.msdk.mbnative.controller.NativeController r5 = r13.a
                int r7 = com.mbridge.msdk.mbnative.controller.NativeController.n(r5)
                com.mbridge.msdk.mbnative.controller.NativeController.a(r5, r7)
            Lc2:
                r5 = r1
                r7 = r5
            Lc4:
                java.util.ArrayList r8 = r15.getAds()
                int r8 = r8.size()
                if (r5 >= r8) goto L1e8
                java.util.ArrayList r8 = r15.getAds()
                java.lang.Object r8 = r8.get(r5)
                com.mbridge.msdk.foundation.entity.CampaignEx r8 = (com.mbridge.msdk.foundation.entity.CampaignEx) r8
                java.lang.String r9 = r13.unitId
                r8.setCampaignUnitId(r9)
                com.mbridge.msdk.mbnative.controller.NativeController r9 = r13.a
                java.lang.String r9 = com.mbridge.msdk.mbnative.controller.NativeController.d(r9)
                boolean r9 = android.text.TextUtils.isEmpty(r9)
                if (r9 != 0) goto Lf5
                com.mbridge.msdk.mbnative.controller.NativeController r9 = r13.a
                java.lang.String r9 = com.mbridge.msdk.mbnative.controller.NativeController.d(r9)
                r8.setBidToken(r9)
                r8.setIsBidCampaign(r0)
            Lf5:
                boolean r9 = com.mbridge.msdk.mbnative.controller.NativeController.d()
                if (r9 == 0) goto L102
                r9 = 0
                r8.loadIconUrlAsyncWithBlock(r9)
                r8.loadImageUrlAsyncWithBlock(r9)
            L102:
                if (r8 == 0) goto L1e4
                com.mbridge.msdk.mbnative.controller.NativeController r9 = r13.a
                android.content.Context r9 = com.mbridge.msdk.mbnative.controller.NativeController.i(r9)
                java.lang.String r10 = r8.getPackageName()
                boolean r9 = com.mbridge.msdk.foundation.tools.ae.c(r9, r10)
                if (r9 == 0) goto L12f
                java.util.Set r10 = com.mbridge.msdk.foundation.controller.a.e()
                if (r10 == 0) goto L12f
                com.mbridge.msdk.foundation.entity.i r7 = new com.mbridge.msdk.foundation.entity.i
                java.lang.String r10 = r8.getId()
                java.lang.String r11 = r8.getPackageName()
                r7.<init>(r10, r11)
                java.util.Set r10 = com.mbridge.msdk.foundation.controller.a.e()
                r10.add(r7)
                r7 = r0
            L12f:
                com.mbridge.msdk.mbnative.controller.NativeController r10 = r13.a
                int r10 = com.mbridge.msdk.mbnative.controller.NativeController.c(r10)
                r11 = 99
                if (r5 >= r10) goto L185
                int r10 = r8.getOfferType()
                if (r10 == r11) goto L185
                boolean r10 = com.mbridge.msdk.foundation.tools.ae.b(r8)
                if (r10 == 0) goto L14d
                if (r9 == 0) goto L149
                r10 = r0
                goto L14a
            L149:
                r10 = r6
            L14a:
                r8.setRtinsType(r10)
            L14d:
                int r10 = r8.getWtick()
                if (r10 == r0) goto L175
                if (r9 != 0) goto L156
                goto L175
            L156:
                boolean r10 = com.mbridge.msdk.foundation.tools.ae.b(r8)
                if (r10 == 0) goto L16d
                r2.add(r8)
                java.lang.String r10 = r8.getVideoUrlEncode()
                boolean r10 = android.text.TextUtils.isEmpty(r10)
                if (r10 != 0) goto L185
                r4.add(r8)
                goto L185
            L16d:
                java.lang.String r10 = r13.unitId
                int r12 = com.mbridge.msdk.foundation.same.a.E
                com.mbridge.msdk.foundation.tools.ae.a(r10, r8, r12)
                goto L185
            L175:
                r2.add(r8)
                java.lang.String r10 = r8.getVideoUrlEncode()
                boolean r10 = android.text.TextUtils.isEmpty(r10)
                if (r10 != 0) goto L185
                r4.add(r8)
            L185:
                com.mbridge.msdk.mbnative.controller.NativeController r10 = r13.a
                int r10 = com.mbridge.msdk.mbnative.controller.NativeController.l(r10)
                if (r5 >= r10) goto L1b0
                int r10 = r8.getOfferType()
                if (r10 == r11) goto L1b0
                boolean r10 = com.mbridge.msdk.foundation.tools.ae.b(r8)
                if (r10 == 0) goto L1a1
                if (r9 == 0) goto L19d
                r10 = r0
                goto L19e
            L19d:
                r10 = r6
            L19e:
                r8.setRtinsType(r10)
            L1a1:
                if (r9 != 0) goto L1a7
                r3.add(r8)
                goto L1b0
            L1a7:
                boolean r9 = com.mbridge.msdk.foundation.tools.ae.b(r8)
                if (r9 == 0) goto L1b0
                r3.add(r8)
            L1b0:
                java.lang.String r9 = r8.getId()
                boolean r9 = r14.a(r9)
                if (r9 != 0) goto L1e4
                com.mbridge.msdk.foundation.entity.h r9 = new com.mbridge.msdk.foundation.entity.h
                r9.<init>()
                java.lang.String r10 = r8.getId()
                r9.a(r10)
                int r10 = r8.getFca()
                r9.a(r10)
                int r8 = r8.getFcb()
                r9.b(r8)
                r9.d(r1)
                r9.c(r1)
                long r10 = java.lang.System.currentTimeMillis()
                r9.a(r10)
                r14.a(r9)
            L1e4:
                int r5 = r5 + 1
                goto Lc4
            L1e8:
                com.mbridge.msdk.mbnative.controller.NativeController r14 = r13.a
                com.mbridge.msdk.mbnative.controller.NativeController.b(r14, r4)
                if (r7 == 0) goto L1f6
                com.mbridge.msdk.foundation.controller.a r14 = com.mbridge.msdk.foundation.controller.a.f()
                r14.h()
            L1f6:
                java.util.ArrayList r14 = r15.getAds()
                java.lang.Object r14 = r14.get(r1)
                if (r14 == 0) goto L20f
                java.util.ArrayList r14 = r15.getAds()
                java.lang.Object r14 = r14.get(r1)
                com.mbridge.msdk.foundation.entity.CampaignEx r14 = (com.mbridge.msdk.foundation.entity.CampaignEx) r14
                int r14 = r14.getType()
                goto L210
            L20f:
                r14 = r0
            L210:
                com.mbridge.msdk.mbnative.a.b r15 = com.mbridge.msdk.mbnative.a.f.a(r14)
                if (r15 == 0) goto L221
                java.lang.String r4 = r13.unitId
                com.mbridge.msdk.mbnative.controller.NativeController r5 = r13.a
                java.lang.String r5 = com.mbridge.msdk.mbnative.controller.NativeController.d(r5)
                r15.a(r4, r3, r5)
            L221:
                int r15 = r2.size()
                if (r15 != 0) goto L241
                com.mbridge.msdk.mbnative.controller.NativeController r15 = r13.a
                boolean r15 = com.mbridge.msdk.mbnative.controller.NativeController.j(r15)
                if (r15 != 0) goto L231
                if (r14 == r0) goto L240
            L231:
                com.mbridge.msdk.mbnative.controller.NativeController r14 = r13.a
                int r15 = r13.b()
                java.lang.String r0 = r13.a()
                java.lang.String r1 = "APP ALREADY INSTALLED"
                r14.a(r1, r15, r0)
            L240:
                return
            L241:
                com.mbridge.msdk.mbnative.controller.NativeController r15 = r13.a
                boolean r15 = com.mbridge.msdk.mbnative.controller.NativeController.j(r15)
                if (r15 != 0) goto L24b
                if (r14 == r0) goto L258
            L24b:
                com.mbridge.msdk.mbnative.controller.NativeController r15 = r13.a
                java.util.List r3 = com.mbridge.msdk.mbnative.controller.NativeController.c(r15, r2)
                java.util.List r3 = com.mbridge.msdk.mbnative.controller.NativeController.a(r15, r14, r3)
                com.mbridge.msdk.mbnative.controller.NativeController.a(r15, r3)
            L258:
                com.mbridge.msdk.mbnative.controller.NativeController r15 = r13.a
                boolean r15 = com.mbridge.msdk.mbnative.controller.NativeController.e(r15)
                if (r15 != 0) goto L27d
                com.mbridge.msdk.mbnative.controller.NativeController r15 = r13.a
                boolean r15 = com.mbridge.msdk.mbnative.controller.NativeController.o(r15)
                if (r15 == 0) goto L27d
                com.mbridge.msdk.mbnative.controller.NativeController r15 = r13.a
                boolean r15 = com.mbridge.msdk.mbnative.controller.NativeController.j(r15)
                if (r15 != 0) goto L27d
                com.mbridge.msdk.mbnative.controller.NativeController r15 = r13.a
                java.util.List r2 = com.mbridge.msdk.mbnative.controller.NativeController.c(r15, r2)
                java.util.List r14 = com.mbridge.msdk.mbnative.controller.NativeController.a(r15, r14, r2)
                com.mbridge.msdk.mbnative.controller.NativeController.a(r15, r14)
            L27d:
                java.util.Map r14 = com.mbridge.msdk.mbnative.controller.b.b()
                java.lang.String r15 = r13.unitId
                boolean r14 = r14.containsKey(r15)
                if (r14 == 0) goto L2a7
                java.util.Map r14 = com.mbridge.msdk.mbnative.controller.b.b()
                java.lang.String r15 = r13.unitId
                java.lang.Object r14 = r14.get(r15)
                java.lang.Boolean r14 = (java.lang.Boolean) r14
                boolean r14 = r14.booleanValue()
                if (r14 == 0) goto L2a7
                com.mbridge.msdk.mbnative.controller.NativeController r14 = r13.a
                int r14 = com.mbridge.msdk.mbnative.controller.NativeController.p(r14)
                java.lang.String r15 = r13.unitId
                com.mbridge.msdk.mbnative.controller.b.a(r14, r15)
                goto L2ff
            L2a7:
                java.util.Map r14 = com.mbridge.msdk.mbnative.controller.b.e()
                java.lang.String r15 = r13.unitId
                boolean r14 = r14.containsKey(r15)
                if (r14 == 0) goto L2c3
                java.util.Map r14 = com.mbridge.msdk.mbnative.controller.b.e()
                java.lang.String r15 = r13.unitId
                java.lang.Object r14 = r14.get(r15)
                java.lang.Integer r14 = (java.lang.Integer) r14
                int r0 = r14.intValue()
            L2c3:
                com.mbridge.msdk.mbnative.controller.NativeController r14 = r13.a
                int r14 = com.mbridge.msdk.mbnative.controller.NativeController.c(r14)
                com.mbridge.msdk.mbnative.controller.NativeController r15 = r13.a
                int r15 = com.mbridge.msdk.mbnative.controller.NativeController.q(r15)
                int r14 = r14 + r15
                if (r14 <= r0) goto L2d3
                goto L2d4
            L2d3:
                r1 = r14
            L2d4:
                com.mbridge.msdk.mbnative.controller.NativeController r14 = r13.a
                com.mbridge.msdk.mbnative.controller.NativeController.b(r14, r1)
                goto L2ff
            L2da:
                java.lang.StringBuilder r14 = new java.lang.StringBuilder
                r14.<init>()
                java.lang.String r15 = "0_"
                r14.append(r15)
                java.lang.String r15 = r13.unitId
                r14.append(r15)
                java.lang.String r14 = r14.toString()
                r13.unitId = r14
                com.mbridge.msdk.mbnative.controller.NativeController r14 = r13.a
                int r14 = com.mbridge.msdk.mbnative.controller.NativeController.p(r14)
                java.lang.String r15 = r13.unitId
                com.mbridge.msdk.mbnative.controller.b.b(r14, r15)
                com.mbridge.msdk.mbnative.controller.NativeController r14 = r13.a
                com.mbridge.msdk.mbnative.controller.NativeController.b(r14, r1)
            L2ff:
                return
        }

        @Override
        public final void a(boolean r1) {
                r0 = this;
                r0.b = r1
                return
        }

        @Override
        public final void b(java.util.List<com.mbridge.msdk.out.Frame> r6) {
                r5 = this;
                boolean r0 = r5.b
                if (r0 != 0) goto La4
                java.lang.Runnable r0 = r5.c
                if (r0 == 0) goto L1c
                java.lang.String r0 = com.mbridge.msdk.mbnative.controller.NativeController.c()
                java.lang.String r1 = "REMOVE CANCEL TASK ON onAdLoaded"
                com.mbridge.msdk.foundation.tools.z.b(r0, r1)
                com.mbridge.msdk.mbnative.controller.NativeController r0 = r5.a
                com.mbridge.msdk.mbnative.controller.NativeController$e r0 = com.mbridge.msdk.mbnative.controller.NativeController.k(r0)
                java.lang.Runnable r1 = r5.c
                r0.removeCallbacks(r1)
            L1c:
                r0 = 1
                if (r6 == 0) goto L8c
                int r1 = r6.size()
                if (r1 != 0) goto L26
                goto L8c
            L26:
                java.util.Iterator r1 = r6.iterator()
            L2a:
                boolean r2 = r1.hasNext()
                if (r2 == 0) goto L7a
                java.lang.Object r2 = r1.next()
                com.mbridge.msdk.out.Frame r2 = (com.mbridge.msdk.out.Frame) r2
                java.util.List r2 = r2.getCampaigns()
                if (r2 == 0) goto L61
                int r3 = r2.size()
                if (r3 != 0) goto L43
                goto L61
            L43:
                java.util.Iterator r2 = r2.iterator()
            L47:
                boolean r3 = r2.hasNext()
                if (r3 == 0) goto L2a
                java.lang.Object r3 = r2.next()
                com.mbridge.msdk.out.Campaign r3 = (com.mbridge.msdk.out.Campaign) r3
                boolean r4 = com.mbridge.msdk.mbnative.controller.NativeController.d()
                if (r4 == 0) goto L47
                r4 = 0
                r3.loadImageUrlAsyncWithBlock(r4)
                r3.loadIconUrlAsyncWithBlock(r4)
                goto L47
            L61:
                com.mbridge.msdk.mbnative.controller.NativeController r6 = r5.a
                com.mbridge.msdk.mbnative.c.a r6 = com.mbridge.msdk.mbnative.controller.NativeController.g(r6)
                if (r6 == 0) goto L79
                com.mbridge.msdk.mbnative.controller.NativeController r6 = r5.a
                com.mbridge.msdk.mbnative.controller.NativeController.c(r6, r0)
                com.mbridge.msdk.mbnative.controller.NativeController r6 = r5.a
                com.mbridge.msdk.mbnative.c.a r6 = com.mbridge.msdk.mbnative.controller.NativeController.g(r6)
                java.lang.String r0 = "ads in frame is empty"
                r6.onAdLoadError(r0)
            L79:
                return
            L7a:
                com.mbridge.msdk.mbnative.controller.NativeController r0 = r5.a
                com.mbridge.msdk.mbnative.c.a r0 = com.mbridge.msdk.mbnative.controller.NativeController.g(r0)
                if (r0 == 0) goto La4
                com.mbridge.msdk.mbnative.controller.NativeController r0 = r5.a
                com.mbridge.msdk.mbnative.c.a r0 = com.mbridge.msdk.mbnative.controller.NativeController.g(r0)
                r0.onAdFramesLoaded(r6)
                goto La4
            L8c:
                com.mbridge.msdk.mbnative.controller.NativeController r6 = r5.a
                com.mbridge.msdk.mbnative.c.a r6 = com.mbridge.msdk.mbnative.controller.NativeController.g(r6)
                if (r6 == 0) goto La4
                com.mbridge.msdk.mbnative.controller.NativeController r6 = r5.a
                com.mbridge.msdk.mbnative.controller.NativeController.c(r6, r0)
                com.mbridge.msdk.mbnative.controller.NativeController r6 = r5.a
                com.mbridge.msdk.mbnative.c.a r6 = com.mbridge.msdk.mbnative.controller.NativeController.g(r6)
                java.lang.String r0 = "frame is empty"
                r6.onAdLoadError(r0)
            La4:
                return
        }

        public final void b(boolean r1) {
                r0 = this;
                r0.d = r1
                return
        }
    }

    public interface b {
        void a();
    }

    public class c implements java.lang.Runnable {
        final com.mbridge.msdk.mbnative.controller.NativeController a;
        private int b;
        private com.mbridge.msdk.foundation.same.e.d c;
        private int d;
        private java.lang.String e;

        public c(com.mbridge.msdk.mbnative.controller.NativeController r1, int r2, com.mbridge.msdk.foundation.same.e.d r3, int r4, java.lang.String r5) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                r0.c = r3
                r0.d = r4
                r0.e = r5
                return
        }

        @Override
        public final void run() {
                r4 = this;
                java.lang.String r0 = com.mbridge.msdk.mbnative.controller.NativeController.c()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "cancel task adsource is = "
                r1.append(r2)
                int r2 = r4.b
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                com.mbridge.msdk.foundation.tools.z.b(r0, r1)
                com.mbridge.msdk.foundation.same.e.d r0 = r4.c
                r1 = 1
                r0.a(r1)
                int r0 = r4.b
                java.lang.String r2 = "REQUEST_TIMEOUT"
                if (r0 == r1) goto L40
                r3 = 2
                if (r0 == r3) goto L2a
                goto L5a
            L2a:
                com.mbridge.msdk.mbnative.controller.NativeController r0 = r4.a
                boolean r0 = com.mbridge.msdk.mbnative.controller.NativeController.e(r0)
                if (r0 == 0) goto L36
                int r0 = r4.d
                if (r0 != r1) goto L5a
            L36:
                com.mbridge.msdk.mbnative.controller.NativeController r0 = r4.a
                int r1 = r4.d
                java.lang.String r3 = r4.e
                r0.a(r2, r1, r3)
                goto L5a
            L40:
                com.mbridge.msdk.mbnative.controller.NativeController r0 = r4.a
                com.mbridge.msdk.mbnative.controller.NativeController.b(r0, r1)
                com.mbridge.msdk.mbnative.controller.NativeController r0 = r4.a
                boolean r0 = com.mbridge.msdk.mbnative.controller.NativeController.j(r0)
                if (r0 != 0) goto L51
                int r0 = r4.d
                if (r0 != r1) goto L5a
            L51:
                com.mbridge.msdk.mbnative.controller.NativeController r0 = r4.a
                int r1 = r4.d
                java.lang.String r3 = r4.e
                r0.a(r2, r1, r3)
            L5a:
                return
        }
    }

    private static class d implements com.mbridge.msdk.foundation.download.download.H5DownLoadManager.IH5SourceDownloadListener {
        private java.lang.String a;
        private com.mbridge.msdk.foundation.entity.CampaignEx b;
        private long c;
        private boolean d;

        public d(java.lang.String r3, com.mbridge.msdk.foundation.entity.CampaignEx r4, boolean r5) {
                r2 = this;
                r2.<init>()
                r0 = 1
                r2.d = r0
                long r0 = java.lang.System.currentTimeMillis()
                r2.c = r0
                r2.a = r3
                r2.b = r4
                r2.d = r5
                return
        }

        @Override
        public final void onFailed(java.lang.String r13, java.lang.String r14) {
                r12 = this;
                boolean r0 = r12.d     // Catch: java.lang.Exception -> L84
                if (r0 == 0) goto L90
                long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L84
                long r2 = r12.c     // Catch: java.lang.Exception -> L84
                long r0 = r0 - r2
                com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L84
                android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> L84
                com.mbridge.msdk.foundation.db.i r2 = com.mbridge.msdk.foundation.db.i.a(r2)     // Catch: java.lang.Exception -> L84
                com.mbridge.msdk.foundation.db.t.a(r2)     // Catch: java.lang.Exception -> L84
                com.mbridge.msdk.foundation.entity.p r2 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> L84
                java.lang.String r4 = "2000043"
                r5 = 21
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L84
                r3.<init>()     // Catch: java.lang.Exception -> L84
                r3.append(r0)     // Catch: java.lang.Exception -> L84
                java.lang.String r0 = ""
                r3.append(r0)     // Catch: java.lang.Exception -> L84
                java.lang.String r6 = r3.toString()     // Catch: java.lang.Exception -> L84
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r12.b     // Catch: java.lang.Exception -> L84
                java.lang.String r8 = r0.getId()     // Catch: java.lang.Exception -> L84
                java.lang.String r9 = r12.a     // Catch: java.lang.Exception -> L84
                java.lang.String r11 = "2"
                r3 = r2
                r7 = r13
                r10 = r14
                r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Exception -> L84
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L84
                java.lang.String r13 = r13.getRequestId()     // Catch: java.lang.Exception -> L84
                r2.k(r13)     // Catch: java.lang.Exception -> L84
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L84
                java.lang.String r13 = r13.getRequestIdNotice()     // Catch: java.lang.Exception -> L84
                r2.l(r13)     // Catch: java.lang.Exception -> L84
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L84
                if (r13 == 0) goto L6c
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L84
                java.lang.String r13 = r13.getId()     // Catch: java.lang.Exception -> L84
                boolean r13 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Exception -> L84
                if (r13 != 0) goto L6c
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L84
                java.lang.String r13 = r13.getId()     // Catch: java.lang.Exception -> L84
                r2.n(r13)     // Catch: java.lang.Exception -> L84
            L6c:
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L84
                if (r13 == 0) goto L79
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L84
                int r13 = r13.getAdSpaceT()     // Catch: java.lang.Exception -> L84
                r2.b(r13)     // Catch: java.lang.Exception -> L84
            L79:
                java.lang.String r13 = "1"
                r2.h(r13)     // Catch: java.lang.Exception -> L84
                java.lang.String r13 = r12.a     // Catch: java.lang.Exception -> L84
                com.mbridge.msdk.foundation.same.report.c.a(r2, r13)     // Catch: java.lang.Exception -> L84
                goto L90
            L84:
                r13 = move-exception
                java.lang.String r14 = com.mbridge.msdk.mbnative.controller.NativeController.c()
                java.lang.String r13 = com.mbridge.msdk.mbnative.b.a.a(r13)
                com.mbridge.msdk.foundation.tools.z.d(r14, r13)
            L90:
                return
        }

        @Override
        public final void onSuccess(java.lang.String r13) {
                r12 = this;
                boolean r0 = r12.d     // Catch: java.lang.Exception -> L85
                if (r0 == 0) goto L91
                long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L85
                long r2 = r12.c     // Catch: java.lang.Exception -> L85
                long r0 = r0 - r2
                com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L85
                android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> L85
                com.mbridge.msdk.foundation.db.i r2 = com.mbridge.msdk.foundation.db.i.a(r2)     // Catch: java.lang.Exception -> L85
                com.mbridge.msdk.foundation.db.t.a(r2)     // Catch: java.lang.Exception -> L85
                com.mbridge.msdk.foundation.entity.p r2 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> L85
                java.lang.String r4 = "2000043"
                r5 = 20
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L85
                r3.<init>()     // Catch: java.lang.Exception -> L85
                r3.append(r0)     // Catch: java.lang.Exception -> L85
                java.lang.String r0 = ""
                r3.append(r0)     // Catch: java.lang.Exception -> L85
                java.lang.String r6 = r3.toString()     // Catch: java.lang.Exception -> L85
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r12.b     // Catch: java.lang.Exception -> L85
                java.lang.String r8 = r0.getId()     // Catch: java.lang.Exception -> L85
                java.lang.String r9 = r12.a     // Catch: java.lang.Exception -> L85
                java.lang.String r10 = ""
                java.lang.String r11 = "2"
                r3 = r2
                r7 = r13
                r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Exception -> L85
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L85
                if (r13 == 0) goto L5b
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L85
                java.lang.String r13 = r13.getId()     // Catch: java.lang.Exception -> L85
                boolean r13 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Exception -> L85
                if (r13 != 0) goto L5b
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L85
                java.lang.String r13 = r13.getId()     // Catch: java.lang.Exception -> L85
                r2.n(r13)     // Catch: java.lang.Exception -> L85
            L5b:
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L85
                if (r13 == 0) goto L7a
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L85
                int r13 = r13.getAdSpaceT()     // Catch: java.lang.Exception -> L85
                r2.b(r13)     // Catch: java.lang.Exception -> L85
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L85
                java.lang.String r13 = r13.getRequestId()     // Catch: java.lang.Exception -> L85
                r2.k(r13)     // Catch: java.lang.Exception -> L85
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L85
                java.lang.String r13 = r13.getRequestIdNotice()     // Catch: java.lang.Exception -> L85
                r2.l(r13)     // Catch: java.lang.Exception -> L85
            L7a:
                java.lang.String r13 = "1"
                r2.h(r13)     // Catch: java.lang.Exception -> L85
                java.lang.String r13 = r12.a     // Catch: java.lang.Exception -> L85
                com.mbridge.msdk.foundation.same.report.c.a(r2, r13)     // Catch: java.lang.Exception -> L85
                goto L91
            L85:
                r13 = move-exception
                java.lang.String r0 = com.mbridge.msdk.mbnative.controller.NativeController.c()
                java.lang.String r13 = com.mbridge.msdk.mbnative.b.a.a(r13)
                com.mbridge.msdk.foundation.tools.z.d(r0, r13)
            L91:
                return
        }
    }

    private static class e extends android.os.Handler {
        private java.lang.ref.WeakReference<com.mbridge.msdk.mbnative.controller.NativeController> a;

        public e(com.mbridge.msdk.mbnative.controller.NativeController r2) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.a = r0
                return
        }

        @Override
        public final void handleMessage(android.os.Message r5) {
                r4 = this;
                super.handleMessage(r5)
                int r0 = r5.what     // Catch: java.lang.Exception -> L81
                if (r0 != 0) goto L22
                java.lang.ref.WeakReference<com.mbridge.msdk.mbnative.controller.NativeController> r0 = r4.a     // Catch: java.lang.Exception -> L81
                if (r0 == 0) goto L22
                java.lang.ref.WeakReference<com.mbridge.msdk.mbnative.controller.NativeController> r0 = r4.a     // Catch: java.lang.Exception -> L81
                java.lang.Object r0 = r0.get()     // Catch: java.lang.Exception -> L81
                com.mbridge.msdk.mbnative.controller.NativeController r0 = (com.mbridge.msdk.mbnative.controller.NativeController) r0     // Catch: java.lang.Exception -> L81
                if (r0 == 0) goto L22
                com.mbridge.msdk.foundation.same.report.d r0 = com.mbridge.msdk.mbnative.controller.NativeController.a(r0)     // Catch: java.lang.Exception -> L81
                int r1 = r5.arg1     // Catch: java.lang.Exception -> L81
                java.lang.Object r2 = r5.obj     // Catch: java.lang.Exception -> L81
                java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L81
                r0.a(r1, r2)     // Catch: java.lang.Exception -> L81
            L22:
                int r5 = r5.what     // Catch: java.lang.Exception -> L81
                r0 = 1
                if (r5 != r0) goto L8d
                r5 = 0
                java.lang.ref.WeakReference<com.mbridge.msdk.mbnative.controller.NativeController> r1 = r4.a     // Catch: java.lang.Exception -> L81
                if (r1 == 0) goto L3c
                java.lang.ref.WeakReference<com.mbridge.msdk.mbnative.controller.NativeController> r1 = r4.a     // Catch: java.lang.Exception -> L81
                java.lang.Object r1 = r1.get()     // Catch: java.lang.Exception -> L81
                if (r1 == 0) goto L3c
                java.lang.ref.WeakReference<com.mbridge.msdk.mbnative.controller.NativeController> r5 = r4.a     // Catch: java.lang.Exception -> L81
                java.lang.Object r5 = r5.get()     // Catch: java.lang.Exception -> L81
                com.mbridge.msdk.mbnative.controller.NativeController r5 = (com.mbridge.msdk.mbnative.controller.NativeController) r5     // Catch: java.lang.Exception -> L81
            L3c:
                if (r5 == 0) goto L8d
                com.mbridge.msdk.mbnative.controller.NativeController.a(r5, r0)     // Catch: java.lang.Exception -> L81
                java.lang.String r0 = com.mbridge.msdk.mbnative.controller.NativeController.c()     // Catch: java.lang.Exception -> L81
                java.lang.String r1 = "time out return"
                com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L81
                java.lang.String r0 = com.mbridge.msdk.mbnative.controller.NativeController.b(r5)     // Catch: java.lang.Exception -> L81
                int r1 = com.mbridge.msdk.mbnative.controller.NativeController.c(r5)     // Catch: java.lang.Exception -> L81
                java.lang.String r2 = com.mbridge.msdk.mbnative.controller.NativeController.d(r5)     // Catch: java.lang.Exception -> L81
                java.util.List r0 = r5.b(r0, r1, r2)     // Catch: java.lang.Exception -> L81
                boolean r1 = com.mbridge.msdk.mbnative.controller.NativeController.e(r5)     // Catch: java.lang.Exception -> L81
                if (r1 == 0) goto L61
                return
            L61:
                java.lang.String r1 = com.mbridge.msdk.mbnative.controller.NativeController.c()     // Catch: java.lang.Exception -> L81
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L81
                r2.<init>()     // Catch: java.lang.Exception -> L81
                java.lang.String r3 = "time out return isReturn = "
                r2.append(r3)     // Catch: java.lang.Exception -> L81
                boolean r3 = com.mbridge.msdk.mbnative.controller.NativeController.e(r5)     // Catch: java.lang.Exception -> L81
                r2.append(r3)     // Catch: java.lang.Exception -> L81
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L81
                com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Exception -> L81
                com.mbridge.msdk.mbnative.controller.NativeController.a(r5, r0)     // Catch: java.lang.Exception -> L81
                goto L8d
            L81:
                r5 = move-exception
                java.lang.String r0 = com.mbridge.msdk.mbnative.controller.NativeController.c()
                java.lang.String r5 = com.mbridge.msdk.mbnative.b.a.a(r5)
                com.mbridge.msdk.foundation.tools.z.d(r0, r5)
            L8d:
                return
        }
    }

    private static class f extends com.mbridge.msdk.foundation.same.e.a {
        private com.mbridge.msdk.foundation.entity.CampaignEx a;
        private java.lang.ref.WeakReference<android.view.View> b;
        private java.lang.ref.WeakReference<java.util.List<android.view.View>> c;
        private java.lang.ref.WeakReference<com.mbridge.msdk.mbnative.controller.NativeController> d;
        private java.lang.ref.WeakReference<com.iab.omid.library.mmadbridge.adsession.AdSession> e;

        public f(com.mbridge.msdk.foundation.entity.CampaignEx r1, android.view.View r2, java.util.List<android.view.View> r3, com.mbridge.msdk.mbnative.controller.NativeController r4, com.iab.omid.library.mmadbridge.adsession.AdSession r5) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
                r1.<init>(r2)
                r0.b = r1
                java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
                r1.<init>(r3)
                r0.c = r1
                java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
                r1.<init>(r4)
                r0.d = r1
                java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
                r1.<init>(r5)
                r0.e = r1
                return
        }

        @Override
        public final void cancelTask() {
                r0 = this;
                return
        }

        @Override
        public final void pauseTask(boolean r1) {
                r0 = this;
                return
        }

        @Override
        public final void runTask() {
                r5 = this;
                java.lang.String r0 = com.mbridge.msdk.mbnative.controller.NativeController.c()
                java.lang.String r1 = "waitSomeTimeToReport run"
                com.mbridge.msdk.foundation.tools.z.d(r0, r1)
                java.lang.ref.WeakReference<com.mbridge.msdk.mbnative.controller.NativeController> r0 = r5.d     // Catch: java.lang.Exception -> L44
                if (r0 == 0) goto L50
                java.lang.ref.WeakReference<android.view.View> r0 = r5.b     // Catch: java.lang.Exception -> L44
                if (r0 == 0) goto L50
                java.lang.ref.WeakReference<java.util.List<android.view.View>> r0 = r5.c     // Catch: java.lang.Exception -> L44
                if (r0 == 0) goto L50
                java.lang.ref.WeakReference<android.view.View> r0 = r5.b     // Catch: java.lang.Exception -> L44
                java.lang.Object r0 = r0.get()     // Catch: java.lang.Exception -> L44
                android.view.View r0 = (android.view.View) r0     // Catch: java.lang.Exception -> L44
                java.lang.ref.WeakReference<java.util.List<android.view.View>> r1 = r5.c     // Catch: java.lang.Exception -> L44
                java.lang.Object r1 = r1.get()     // Catch: java.lang.Exception -> L44
                java.util.List r1 = (java.util.List) r1     // Catch: java.lang.Exception -> L44
                java.lang.ref.WeakReference<com.mbridge.msdk.mbnative.controller.NativeController> r2 = r5.d     // Catch: java.lang.Exception -> L44
                java.lang.Object r2 = r2.get()     // Catch: java.lang.Exception -> L44
                com.mbridge.msdk.mbnative.controller.NativeController r2 = (com.mbridge.msdk.mbnative.controller.NativeController) r2     // Catch: java.lang.Exception -> L44
                r3 = 0
                java.lang.ref.WeakReference<com.iab.omid.library.mmadbridge.adsession.AdSession> r4 = r5.e     // Catch: java.lang.Exception -> L44
                if (r4 == 0) goto L3a
                java.lang.ref.WeakReference<com.iab.omid.library.mmadbridge.adsession.AdSession> r3 = r5.e     // Catch: java.lang.Exception -> L44
                java.lang.Object r3 = r3.get()     // Catch: java.lang.Exception -> L44
                com.iab.omid.library.mmadbridge.adsession.AdSession r3 = (com.iab.omid.library.mmadbridge.adsession.AdSession) r3     // Catch: java.lang.Exception -> L44
            L3a:
                if (r0 == 0) goto L50
                if (r2 == 0) goto L50
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r5.a     // Catch: java.lang.Exception -> L44
                com.mbridge.msdk.mbnative.controller.NativeController.a(r2, r4, r0, r1, r3)     // Catch: java.lang.Exception -> L44
                goto L50
            L44:
                r0 = move-exception
                java.lang.String r1 = com.mbridge.msdk.mbnative.controller.NativeController.c()
                java.lang.String r0 = com.mbridge.msdk.mbnative.b.a.a(r0)
                com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            L50:
                return
        }
    }

    private static final class g implements com.mbridge.msdk.foundation.download.download.H5DownLoadManager.ZipDownloadListener {
        java.lang.String a;
        com.mbridge.msdk.foundation.entity.CampaignEx b;
        private long c;
        private boolean d;

        public g(java.lang.String r3, com.mbridge.msdk.foundation.entity.CampaignEx r4, boolean r5) {
                r2 = this;
                r2.<init>()
                r0 = 1
                r2.d = r0
                long r0 = java.lang.System.currentTimeMillis()
                r2.c = r0
                r2.a = r3
                r2.b = r4
                r2.d = r5
                return
        }

        @Override
        public final void onFailed(java.lang.String r13, java.lang.String r14) {
                r12 = this;
                boolean r0 = r12.d     // Catch: java.lang.Exception -> L83
                if (r0 == 0) goto L8f
                long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L83
                long r2 = r12.c     // Catch: java.lang.Exception -> L83
                long r0 = r0 - r2
                com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L83
                android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> L83
                com.mbridge.msdk.foundation.db.i r2 = com.mbridge.msdk.foundation.db.i.a(r2)     // Catch: java.lang.Exception -> L83
                com.mbridge.msdk.foundation.db.t.a(r2)     // Catch: java.lang.Exception -> L83
                com.mbridge.msdk.foundation.entity.p r2 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> L83
                java.lang.String r4 = "2000043"
                r5 = 3
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L83
                r3.<init>()     // Catch: java.lang.Exception -> L83
                r3.append(r0)     // Catch: java.lang.Exception -> L83
                java.lang.String r0 = ""
                r3.append(r0)     // Catch: java.lang.Exception -> L83
                java.lang.String r6 = r3.toString()     // Catch: java.lang.Exception -> L83
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r12.b     // Catch: java.lang.Exception -> L83
                java.lang.String r8 = r0.getId()     // Catch: java.lang.Exception -> L83
                java.lang.String r9 = r12.a     // Catch: java.lang.Exception -> L83
                java.lang.String r11 = "1"
                r3 = r2
                r7 = r14
                r10 = r13
                r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Exception -> L83
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L83
                if (r13 == 0) goto L59
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L83
                java.lang.String r13 = r13.getId()     // Catch: java.lang.Exception -> L83
                boolean r13 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Exception -> L83
                if (r13 != 0) goto L59
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L83
                java.lang.String r13 = r13.getId()     // Catch: java.lang.Exception -> L83
                r2.n(r13)     // Catch: java.lang.Exception -> L83
            L59:
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L83
                if (r13 == 0) goto L78
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L83
                int r13 = r13.getAdSpaceT()     // Catch: java.lang.Exception -> L83
                r2.b(r13)     // Catch: java.lang.Exception -> L83
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L83
                java.lang.String r13 = r13.getRequestId()     // Catch: java.lang.Exception -> L83
                r2.k(r13)     // Catch: java.lang.Exception -> L83
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L83
                java.lang.String r13 = r13.getRequestIdNotice()     // Catch: java.lang.Exception -> L83
                r2.l(r13)     // Catch: java.lang.Exception -> L83
            L78:
                java.lang.String r13 = "2"
                r2.h(r13)     // Catch: java.lang.Exception -> L83
                java.lang.String r13 = r12.a     // Catch: java.lang.Exception -> L83
                com.mbridge.msdk.foundation.same.report.c.a(r2, r13)     // Catch: java.lang.Exception -> L83
                goto L8f
            L83:
                r13 = move-exception
                java.lang.String r14 = com.mbridge.msdk.mbnative.controller.NativeController.c()
                java.lang.String r13 = com.mbridge.msdk.mbnative.b.a.a(r13)
                com.mbridge.msdk.foundation.tools.z.d(r14, r13)
            L8f:
                return
        }

        @Override
        public final void onSuccess(java.lang.String r13) {
                r12 = this;
                boolean r0 = r12.d     // Catch: java.lang.Exception -> L85
                if (r0 == 0) goto L91
                long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L85
                long r2 = r12.c     // Catch: java.lang.Exception -> L85
                long r0 = r0 - r2
                com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L85
                android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> L85
                com.mbridge.msdk.foundation.db.i r2 = com.mbridge.msdk.foundation.db.i.a(r2)     // Catch: java.lang.Exception -> L85
                com.mbridge.msdk.foundation.db.t.a(r2)     // Catch: java.lang.Exception -> L85
                com.mbridge.msdk.foundation.entity.p r2 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> L85
                java.lang.String r4 = "2000043"
                r5 = 14
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L85
                r3.<init>()     // Catch: java.lang.Exception -> L85
                r3.append(r0)     // Catch: java.lang.Exception -> L85
                java.lang.String r0 = ""
                r3.append(r0)     // Catch: java.lang.Exception -> L85
                java.lang.String r6 = r3.toString()     // Catch: java.lang.Exception -> L85
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r12.b     // Catch: java.lang.Exception -> L85
                java.lang.String r8 = r0.getId()     // Catch: java.lang.Exception -> L85
                java.lang.String r9 = r12.a     // Catch: java.lang.Exception -> L85
                java.lang.String r10 = ""
                java.lang.String r11 = "1"
                r3 = r2
                r7 = r13
                r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Exception -> L85
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L85
                if (r13 == 0) goto L5b
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L85
                java.lang.String r13 = r13.getId()     // Catch: java.lang.Exception -> L85
                boolean r13 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Exception -> L85
                if (r13 != 0) goto L5b
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L85
                java.lang.String r13 = r13.getId()     // Catch: java.lang.Exception -> L85
                r2.n(r13)     // Catch: java.lang.Exception -> L85
            L5b:
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L85
                if (r13 == 0) goto L7a
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L85
                int r13 = r13.getAdSpaceT()     // Catch: java.lang.Exception -> L85
                r2.b(r13)     // Catch: java.lang.Exception -> L85
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L85
                java.lang.String r13 = r13.getRequestId()     // Catch: java.lang.Exception -> L85
                r2.k(r13)     // Catch: java.lang.Exception -> L85
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.b     // Catch: java.lang.Exception -> L85
                java.lang.String r13 = r13.getRequestIdNotice()     // Catch: java.lang.Exception -> L85
                r2.l(r13)     // Catch: java.lang.Exception -> L85
            L7a:
                java.lang.String r13 = "2"
                r2.h(r13)     // Catch: java.lang.Exception -> L85
                java.lang.String r13 = r12.a     // Catch: java.lang.Exception -> L85
                com.mbridge.msdk.foundation.same.report.c.a(r2, r13)     // Catch: java.lang.Exception -> L85
                goto L91
            L85:
                r13 = move-exception
                java.lang.String r0 = com.mbridge.msdk.mbnative.controller.NativeController.c()
                java.lang.String r13 = com.mbridge.msdk.mbnative.b.a.a(r13)
                com.mbridge.msdk.foundation.tools.z.d(r0, r13)
            L91:
                return
        }
    }

    static {
            java.lang.Class<com.mbridge.msdk.mbnative.controller.NativeController> r0 = com.mbridge.msdk.mbnative.controller.NativeController.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.mbnative.controller.NativeController.e = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.mbnative.controller.NativeController.c = r0
            return
    }

    public NativeController() {
            r2 = this;
            r2.<init>()
            r0 = 1
            r2.s = r0
            r2.t = r0
            r1 = -1
            r2.u = r1
            r1 = 0
            r2.v = r1
            r2.y = r1
            r2.z = r1
            r2.A = r1
            r2.C = r1
            r2.D = r1
            r2.E = r1
            r2.F = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r2.H = r1
            java.util.concurrent.CopyOnWriteArrayList r1 = new java.util.concurrent.CopyOnWriteArrayList
            r1.<init>()
            r2.K = r1
            java.util.Hashtable r1 = new java.util.Hashtable
            r1.<init>()
            r2.L = r1
            r2.M = r0
            java.lang.String r0 = ""
            r2.N = r0
            r1 = 2
            r2.P = r1
            r2.T = r0
            r2.V = r0
            return
    }

    public NativeController(com.mbridge.msdk.mbnative.c.a r12, com.mbridge.msdk.out.NativeListener.NativeTrackingListener r13, java.util.Map<java.lang.String, java.lang.Object> r14, android.content.Context r15) {
            r11 = this;
            java.lang.String r0 = "native_info"
            java.lang.String r1 = "com.mbridge.msdk.videocommon.download.b"
            r11.<init>()
            r2 = 1
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)
            r11.s = r2
            r11.t = r2
            r4 = -1
            r11.u = r4
            r4 = 0
            r11.v = r4
            r11.y = r4
            r11.z = r4
            r11.A = r4
            r11.C = r4
            r11.D = r4
            r11.E = r4
            r11.F = r4
            java.util.HashMap r5 = new java.util.HashMap
            r5.<init>()
            r11.H = r5
            java.util.concurrent.CopyOnWriteArrayList r5 = new java.util.concurrent.CopyOnWriteArrayList
            r5.<init>()
            r11.K = r5
            java.util.Hashtable r5 = new java.util.Hashtable
            r5.<init>()
            r11.L = r5
            r11.M = r2
            java.lang.String r5 = ""
            r11.N = r5
            r6 = 2
            r11.P = r6
            r11.T = r5
            r11.V = r5
            r11.i = r15
            r11.d = r14
            com.mbridge.msdk.c.c r7 = new com.mbridge.msdk.c.c
            r7.<init>()
            r11.f = r7
            r11.g = r12
            r11.h = r13
            java.util.ArrayList r12 = new java.util.ArrayList
            r12.<init>()
            r11.I = r12
            java.util.ArrayList r12 = new java.util.ArrayList
            r12.<init>()
            r11.J = r12
            java.lang.String r12 = "unit_id"
            java.lang.Object r12 = r14.get(r12)
            java.lang.String r12 = (java.lang.String) r12
            r11.j = r12
            boolean r12 = android.text.TextUtils.isEmpty(r12)
            if (r12 == 0) goto L7b
            java.lang.String r12 = com.mbridge.msdk.mbnative.controller.NativeController.e
            java.lang.String r13 = "load error,make sure you have correct unitid"
            com.mbridge.msdk.foundation.tools.z.c(r12, r13)
            return
        L7b:
            java.lang.String r12 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
            boolean r12 = r14.containsKey(r12)
            if (r12 == 0) goto L96
            java.lang.String r12 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
            java.lang.Object r12 = r14.get(r12)
            if (r12 == 0) goto L96
            java.lang.String r12 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
            java.lang.Object r12 = r14.get(r12)
            java.lang.String r12 = (java.lang.String) r12
            r11.k = r12
            goto L98
        L96:
            r11.k = r5
        L98:
            java.lang.String r12 = "isPreloadImg"
            boolean r13 = r14.containsKey(r12)
            if (r13 == 0) goto Lac
            java.lang.Object r12 = r14.get(r12)
            java.lang.Boolean r12 = (java.lang.Boolean) r12
            boolean r12 = r12.booleanValue()
            com.mbridge.msdk.mbnative.controller.NativeController.B = r12
        Lac:
            java.util.LinkedList r12 = new java.util.LinkedList
            r12.<init>()
            r11.l = r12
            java.util.LinkedList r12 = new java.util.LinkedList
            r12.<init>()
            r11.m = r12
            com.mbridge.msdk.foundation.same.e.b r12 = new com.mbridge.msdk.foundation.same.e.b
            android.content.Context r13 = r11.i
            r12.<init>(r13)
            r11.G = r12
            android.os.Looper r12 = android.os.Looper.myLooper()
            if (r12 != 0) goto Lcc
            android.os.Looper.prepare()
        Lcc:
            com.mbridge.msdk.mbnative.controller.NativeController$e r12 = new com.mbridge.msdk.mbnative.controller.NativeController$e
            r12.<init>(r11)
            r11.o = r12
            java.lang.String r12 = "catetory"
            boolean r13 = r14.containsKey(r12)
            if (r13 == 0) goto Le3
            java.lang.Object r12 = r14.get(r12)
            java.lang.String r12 = (java.lang.String) r12
            r11.w = r12
        Le3:
            java.util.Map r12 = com.mbridge.msdk.mbnative.controller.b.b()     // Catch: java.lang.Exception -> L17d
            java.lang.String r13 = r11.j     // Catch: java.lang.Exception -> L17d
            boolean r12 = r12.containsKey(r13)     // Catch: java.lang.Exception -> L17d
            if (r12 == 0) goto L100
            java.util.Map r12 = com.mbridge.msdk.mbnative.controller.b.b()     // Catch: java.lang.Exception -> L17d
            java.lang.String r13 = r11.j     // Catch: java.lang.Exception -> L17d
            java.lang.Object r12 = r12.get(r13)     // Catch: java.lang.Exception -> L17d
            java.lang.Boolean r12 = (java.lang.Boolean) r12     // Catch: java.lang.Exception -> L17d
            boolean r12 = r12.booleanValue()     // Catch: java.lang.Exception -> L17d
            goto L101
        L100:
            r12 = r4
        L101:
            java.lang.String r13 = "ad_frame_num"
            java.lang.String r7 = "ad_num"
            if (r12 != 0) goto L136
            boolean r12 = r14.containsKey(r7)     // Catch: java.lang.Exception -> L17d
            if (r12 == 0) goto L123
            java.lang.Object r12 = r14.get(r7)     // Catch: java.lang.Exception -> L17d
            java.lang.Integer r12 = (java.lang.Integer) r12     // Catch: java.lang.Exception -> L17d
            int r12 = r12.intValue()     // Catch: java.lang.Exception -> L17d
            if (r12 >= r2) goto L11a
            r12 = r2
        L11a:
            r7 = 10
            if (r12 <= r7) goto L11f
            r12 = r7
        L11f:
            r11.t = r12     // Catch: java.lang.Exception -> L17d
            r11.s = r12     // Catch: java.lang.Exception -> L17d
        L123:
            boolean r12 = r14.containsKey(r13)     // Catch: java.lang.Exception -> L17d
            if (r12 == 0) goto L187
            java.lang.Object r12 = r14.get(r13)     // Catch: java.lang.Exception -> L17d
            java.lang.Integer r12 = (java.lang.Integer) r12     // Catch: java.lang.Exception -> L17d
            int r12 = r12.intValue()     // Catch: java.lang.Exception -> L17d
            r11.E = r12     // Catch: java.lang.Exception -> L17d
            goto L187
        L136:
            java.util.Map r12 = com.mbridge.msdk.mbnative.controller.b.d()     // Catch: java.lang.Exception -> L17d
            java.lang.String r8 = r11.j     // Catch: java.lang.Exception -> L17d
            boolean r12 = r12.containsKey(r8)     // Catch: java.lang.Exception -> L17d
            if (r12 == 0) goto L187
            java.util.Map r12 = com.mbridge.msdk.mbnative.controller.b.d()     // Catch: java.lang.Exception -> L17d
            java.lang.String r8 = r11.j     // Catch: java.lang.Exception -> L17d
            java.lang.Object r12 = r12.get(r8)     // Catch: java.lang.Exception -> L17d
            java.lang.Integer r12 = (java.lang.Integer) r12     // Catch: java.lang.Exception -> L17d
            int r12 = r12.intValue()     // Catch: java.lang.Exception -> L17d
            r11.t = r12     // Catch: java.lang.Exception -> L17d
            boolean r12 = r14.containsKey(r7)     // Catch: java.lang.Exception -> L17d
            if (r12 == 0) goto L168
            java.lang.Object r12 = r14.get(r7)     // Catch: java.lang.Exception -> L17d
            java.lang.Integer r12 = (java.lang.Integer) r12     // Catch: java.lang.Exception -> L17d
            int r12 = r12.intValue()     // Catch: java.lang.Exception -> L17d
            r11.C = r12     // Catch: java.lang.Exception -> L17d
            r11.s = r12     // Catch: java.lang.Exception -> L17d
        L168:
            boolean r12 = r14.containsKey(r13)     // Catch: java.lang.Exception -> L17d
            if (r12 == 0) goto L187
            java.lang.Object r12 = r14.get(r13)     // Catch: java.lang.Exception -> L17d
            java.lang.Integer r12 = (java.lang.Integer) r12     // Catch: java.lang.Exception -> L17d
            int r12 = r12.intValue()     // Catch: java.lang.Exception -> L17d
            r11.D = r12     // Catch: java.lang.Exception -> L17d
            r11.E = r12     // Catch: java.lang.Exception -> L17d
            goto L187
        L17d:
            r12 = move-exception
            java.lang.String r13 = com.mbridge.msdk.mbnative.controller.NativeController.e
            java.lang.String r12 = com.mbridge.msdk.mbnative.b.a.a(r12)
            com.mbridge.msdk.foundation.tools.z.d(r13, r12)
        L187:
            com.mbridge.msdk.foundation.same.report.d r12 = new com.mbridge.msdk.foundation.same.report.d
            android.content.Context r13 = r11.i
            r12.<init>(r13)
            r11.p = r12
            com.mbridge.msdk.click.b r12 = new com.mbridge.msdk.click.b
            android.content.Context r13 = r11.i
            java.lang.String r7 = r11.j
            r12.<init>(r13, r7)
            r11.r = r12
            java.lang.String r12 = "com.mbridge.msdk.nativex.view.MBMediaView"
            java.lang.Class.forName(r12)     // Catch: java.lang.Throwable -> L2c2
            java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L2c2
            r11.S = r2     // Catch: java.lang.Throwable -> L2c2
            java.util.Map<java.lang.String, java.lang.Object> r12 = r11.d     // Catch: java.lang.Throwable -> L2c2
            if (r12 == 0) goto L1c7
            java.util.Map<java.lang.String, java.lang.Object> r12 = r11.d     // Catch: java.lang.Throwable -> L2c2
            java.lang.String r13 = "native_video_width"
            boolean r12 = r12.containsKey(r13)     // Catch: java.lang.Throwable -> L2c2
            if (r12 != 0) goto L1c5
            java.util.Map<java.lang.String, java.lang.Object> r12 = r11.d     // Catch: java.lang.Throwable -> L2c2
            java.lang.String r13 = "native_video_height"
            boolean r12 = r12.containsKey(r13)     // Catch: java.lang.Throwable -> L2c2
            if (r12 != 0) goto L1c5
            java.lang.String r12 = "videoSupport"
            boolean r12 = r14.containsKey(r12)     // Catch: java.lang.Throwable -> L2c2
            if (r12 == 0) goto L1c7
        L1c5:
            r11.R = r2     // Catch: java.lang.Throwable -> L2c2
        L1c7:
            android.content.Context r12 = r11.i     // Catch: java.lang.Throwable -> L2c2
            java.lang.String r13 = r11.j     // Catch: java.lang.Throwable -> L2c2
            com.mbridge.msdk.mbnative.controller.c.a(r12, r13)     // Catch: java.lang.Throwable -> L2c2
            com.mbridge.msdk.foundation.tools.x.b()     // Catch: java.lang.Throwable -> L2c2
            java.lang.String r12 = r11.j     // Catch: java.lang.Throwable -> L2c2
            boolean r12 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L2c2
            if (r12 != 0) goto L2c9
            android.content.Context r12 = r11.i     // Catch: java.lang.Throwable -> L2c2
            com.mbridge.msdk.foundation.db.i r12 = com.mbridge.msdk.foundation.db.i.a(r12)     // Catch: java.lang.Throwable -> L2c2
            com.mbridge.msdk.foundation.db.f r12 = com.mbridge.msdk.foundation.db.f.a(r12)     // Catch: java.lang.Throwable -> L2c2
            r12.a()     // Catch: java.lang.Throwable -> L2c2
            boolean r12 = r14.containsKey(r0)     // Catch: java.lang.Throwable -> L2c2
            r13 = 0
            if (r12 == 0) goto L1f4
            java.lang.Object r12 = r14.get(r0)     // Catch: java.lang.Throwable -> L2c2
            java.lang.String r12 = (java.lang.String) r12     // Catch: java.lang.Throwable -> L2c2
            goto L1f5
        L1f4:
            r12 = r13
        L1f5:
            int r12 = r11.a(r12)     // Catch: java.lang.Throwable -> L2c2
            java.lang.String r14 = r11.j     // Catch: java.lang.Throwable -> L2c2
            if (r12 > 0) goto L1ff
            int r12 = r11.s     // Catch: java.lang.Throwable -> L2c2
        L1ff:
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L2c2
            com.mbridge.msdk.c.d r0 = r0.e(r5, r14)     // Catch: java.lang.Throwable -> L2c2
            r11.W = r0     // Catch: java.lang.Throwable -> L2c2
            if (r0 != 0) goto L211
            com.mbridge.msdk.c.d r0 = com.mbridge.msdk.c.d.d(r14)     // Catch: java.lang.Throwable -> L2c2
            r11.W = r0     // Catch: java.lang.Throwable -> L2c2
        L211:
            com.mbridge.msdk.c.d r0 = r11.W     // Catch: java.lang.Throwable -> L2c2
            java.util.List r0 = r0.r()     // Catch: java.lang.Throwable -> L2c2
            r11.a = r0     // Catch: java.lang.Throwable -> L2c2
            if (r0 == 0) goto L236
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L2c2
            if (r0 <= 0) goto L236
            java.util.List<java.lang.Integer> r0 = r11.a     // Catch: java.lang.Throwable -> L2c2
            boolean r0 = r0.contains(r3)     // Catch: java.lang.Throwable -> L2c2
            if (r0 == 0) goto L236
            com.mbridge.msdk.mbnative.a.b r0 = com.mbridge.msdk.mbnative.a.f.a(r2)     // Catch: java.lang.Throwable -> L2c2
            if (r0 == 0) goto L236
            java.lang.Object r12 = r0.b(r14, r12)     // Catch: java.lang.Throwable -> L2c2
            java.util.List r12 = (java.util.List) r12     // Catch: java.lang.Throwable -> L2c2
            goto L237
        L236:
            r12 = r13
        L237:
            if (r12 == 0) goto L2c9
            java.util.ArrayList r14 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L2c2
            r14.<init>()     // Catch: java.lang.Throwable -> L2c2
            r0 = r4
        L23f:
            int r5 = r12.size()     // Catch: java.lang.Throwable -> L2c2
            if (r0 >= r5) goto L25b
            java.lang.Object r5 = r12.get(r0)     // Catch: java.lang.Throwable -> L2c2
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5     // Catch: java.lang.Throwable -> L2c2
            java.lang.String r7 = r5.getVideoUrlEncode()     // Catch: java.lang.Throwable -> L2c2
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L2c2
            if (r7 != 0) goto L258
            r14.add(r5)     // Catch: java.lang.Throwable -> L2c2
        L258:
            int r0 = r0 + 1
            goto L23f
        L25b:
            int r12 = r14.size()     // Catch: java.lang.Throwable -> L2c2
            if (r12 <= 0) goto L2c9
            java.lang.Class r12 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L2c2
            java.lang.String r0 = "com.mbridge.msdk.videocommon.listener.a"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L2c2
            java.lang.String r1 = "getInstance"
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L2c2
            java.lang.reflect.Method r1 = r12.getMethod(r1, r5)     // Catch: java.lang.Throwable -> L2c2
            java.lang.Object[] r5 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L2c2
            java.lang.Object r1 = r1.invoke(r13, r5)     // Catch: java.lang.Throwable -> L2c2
            java.lang.String r5 = "createUnitCache"
            r7 = 5
            java.lang.Class[] r8 = new java.lang.Class[r7]     // Catch: java.lang.Throwable -> L2c2
            java.lang.Class<android.content.Context> r9 = android.content.Context.class
            r8[r4] = r9     // Catch: java.lang.Throwable -> L2c2
            java.lang.Class<java.lang.String> r9 = java.lang.String.class
            r8[r2] = r9     // Catch: java.lang.Throwable -> L2c2
            java.lang.Class<java.util.concurrent.CopyOnWriteArrayList> r9 = java.util.concurrent.CopyOnWriteArrayList.class
            r8[r6] = r9     // Catch: java.lang.Throwable -> L2c2
            java.lang.Class r9 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L2c2
            r10 = 3
            r8[r10] = r9     // Catch: java.lang.Throwable -> L2c2
            r9 = 4
            r8[r9] = r0     // Catch: java.lang.Throwable -> L2c2
            java.lang.reflect.Method r0 = r12.getMethod(r5, r8)     // Catch: java.lang.Throwable -> L2c2
            java.lang.Object[] r5 = new java.lang.Object[r7]     // Catch: java.lang.Throwable -> L2c2
            r5[r4] = r15     // Catch: java.lang.Throwable -> L2c2
            java.lang.String r15 = r11.j     // Catch: java.lang.Throwable -> L2c2
            r5[r2] = r15     // Catch: java.lang.Throwable -> L2c2
            java.util.concurrent.CopyOnWriteArrayList r15 = new java.util.concurrent.CopyOnWriteArrayList     // Catch: java.lang.Throwable -> L2c2
            r15.<init>(r14)     // Catch: java.lang.Throwable -> L2c2
            r5[r6] = r15     // Catch: java.lang.Throwable -> L2c2
            r5[r10] = r3     // Catch: java.lang.Throwable -> L2c2
            r5[r9] = r13     // Catch: java.lang.Throwable -> L2c2
            r0.invoke(r1, r5)     // Catch: java.lang.Throwable -> L2c2
            java.lang.String r13 = "load"
            java.lang.Class[] r14 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L2c2
            java.lang.Class<java.lang.String> r15 = java.lang.String.class
            r14[r4] = r15     // Catch: java.lang.Throwable -> L2c2
            java.lang.reflect.Method r12 = r12.getMethod(r13, r14)     // Catch: java.lang.Throwable -> L2c2
            java.lang.Object[] r13 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L2c2
            java.lang.String r14 = r11.j     // Catch: java.lang.Throwable -> L2c2
            r13[r4] = r14     // Catch: java.lang.Throwable -> L2c2
            r12.invoke(r1, r13)     // Catch: java.lang.Throwable -> L2c2
            goto L2c9
        L2c2:
            java.lang.String r12 = com.mbridge.msdk.mbnative.controller.NativeController.e
            java.lang.String r13 = "please import the nativex aar"
            com.mbridge.msdk.foundation.tools.z.d(r12, r13)
        L2c9:
            return
    }

    static int a(com.mbridge.msdk.mbnative.controller.NativeController r0, int r1) {
            r0.Y = r1
            return r1
    }

    private int a(java.lang.String r6) {
            r5 = this;
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L2f
            r1.<init>(r6)     // Catch: java.lang.Exception -> L2f
            int r6 = r1.length()     // Catch: java.lang.Exception -> L2f
            if (r6 <= 0) goto L39
            r6 = r0
        L10:
            int r2 = r1.length()     // Catch: java.lang.Exception -> L2f
            if (r6 >= r2) goto L39
            java.lang.Object r2 = r1.opt(r6)     // Catch: java.lang.Exception -> L2f
            org.json.JSONObject r2 = (org.json.JSONObject) r2     // Catch: java.lang.Exception -> L2f
            java.lang.String r3 = "id"
            int r3 = r2.optInt(r3, r0)     // Catch: java.lang.Exception -> L2f
            r4 = 2
            if (r4 != r3) goto L2c
            java.lang.String r6 = "ad_num"
            int r6 = r2.optInt(r6)     // Catch: java.lang.Exception -> L2f
            return r6
        L2c:
            int r6 = r6 + 1
            goto L10
        L2f:
            r6 = move-exception
            java.lang.String r1 = com.mbridge.msdk.mbnative.controller.NativeController.e
            java.lang.String r6 = com.mbridge.msdk.mbnative.b.a.a(r6)
            com.mbridge.msdk.foundation.tools.z.d(r1, r6)
        L39:
            return r0
    }

    static com.mbridge.msdk.foundation.db.i a(com.mbridge.msdk.mbnative.controller.NativeController r0, com.mbridge.msdk.foundation.db.i r1) {
            r0.O = r1
            return r1
    }

    static com.mbridge.msdk.foundation.same.report.d a(com.mbridge.msdk.mbnative.controller.NativeController r0) {
            com.mbridge.msdk.foundation.same.report.d r0 = r0.p
            return r0
    }

    static java.lang.String a(com.mbridge.msdk.mbnative.controller.NativeController r0, java.lang.String r1) {
            r0.q = r1
            return r1
    }

    private java.util.List<com.mbridge.msdk.out.Campaign> a(int r3, java.util.List<com.mbridge.msdk.out.Campaign> r4) {
            r2 = this;
            r0 = 1
            if (r3 != r0) goto L45
            java.util.Map<java.lang.String, java.lang.Object> r3 = r2.d
            java.lang.String r1 = "native_info"
            boolean r3 = r3.containsKey(r1)
            if (r3 == 0) goto L45
            if (r4 == 0) goto L45
            int r3 = r4.size()
            if (r3 <= 0) goto L45
            r3 = 0
            java.lang.Object r1 = r4.get(r3)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1
            if (r1 == 0) goto L22
            int r0 = r1.getTemplate()
        L22:
            r1 = 2
            if (r0 != r1) goto L34
            if (r4 == 0) goto L45
            int r0 = r4.size()
            int r1 = r2.ab
            if (r0 < r1) goto L45
            java.util.List r4 = r4.subList(r3, r1)
            goto L45
        L34:
            r1 = 3
            if (r0 != r1) goto L45
            if (r4 == 0) goto L45
            int r0 = r4.size()
            int r1 = r2.ac
            if (r0 < r1) goto L45
            java.util.List r4 = r4.subList(r3, r1)
        L45:
            return r4
    }

    static java.util.List a(com.mbridge.msdk.mbnative.controller.NativeController r0, int r1, java.util.List r2) {
            java.util.List r0 = r0.a(r1, r2)
            return r0
    }

    static java.util.List a(com.mbridge.msdk.mbnative.controller.NativeController r6, java.util.List r7, boolean r8) {
            if (r7 == 0) goto Lab
            int r0 = r7.size()
            int r0 = r0 + (-1)
        L8:
            if (r0 < 0) goto Lab
            java.lang.Object r1 = r7.get(r0)
            com.mbridge.msdk.out.Campaign r1 = (com.mbridge.msdk.out.Campaign) r1
            java.lang.String r2 = r1.getId()
            boolean r3 = r1 instanceof com.mbridge.msdk.foundation.entity.CampaignEx
            if (r3 == 0) goto L35
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r2)
            r2 = r1
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2
            java.lang.String r5 = r2.getVideoUrlEncode()
            r4.append(r5)
            java.lang.String r2 = r2.getBidToken()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
        L35:
            com.mbridge.msdk.videocommon.download.b r4 = com.mbridge.msdk.videocommon.download.b.getInstance()
            java.lang.String r5 = r6.j
            com.mbridge.msdk.videocommon.download.a r2 = r4.a(r5, r2)
            if (r8 == 0) goto L68
            if (r2 == 0) goto L52
            com.mbridge.msdk.c.d r3 = r6.e()
            int r3 = r3.f()
            boolean r2 = com.mbridge.msdk.videocommon.download.d.a(r2, r3)
            if (r2 == 0) goto L52
            goto La7
        L52:
            java.lang.Object r2 = r7.remove(r0)
            com.mbridge.msdk.out.Campaign r2 = (com.mbridge.msdk.out.Campaign) r2
            int r1 = r1.getType()
            com.mbridge.msdk.mbnative.a.b r1 = com.mbridge.msdk.mbnative.a.f.a(r1)
            java.lang.String r3 = r6.j
            java.lang.String r4 = r6.V
            r1.a(r3, r2, r4)
            goto La7
        L68:
            if (r3 == 0) goto La7
            r3 = r1
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
            java.lang.String r4 = r3.getImageUrl()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto La7
            java.lang.String r3 = r3.getVideoUrlEncode()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto La7
            if (r2 == 0) goto L92
            com.mbridge.msdk.c.d r3 = r6.e()
            int r3 = r3.f()
            boolean r2 = com.mbridge.msdk.videocommon.download.d.a(r2, r3)
            if (r2 == 0) goto L92
            goto La7
        L92:
            java.lang.Object r2 = r7.remove(r0)
            com.mbridge.msdk.out.Campaign r2 = (com.mbridge.msdk.out.Campaign) r2
            int r1 = r1.getType()
            com.mbridge.msdk.mbnative.a.b r1 = com.mbridge.msdk.mbnative.a.f.a(r1)
            java.lang.String r3 = r6.j
            java.lang.String r4 = r6.V
            r1.a(r3, r2, r4)
        La7:
            int r0 = r0 + (-1)
            goto L8
        Lab:
            return r7
    }

    private void a(long r17, int r19, boolean r20, java.lang.String r21, java.lang.String r22) {
            r16 = this;
            r10 = r16
            r11 = r20
            r12 = r21
            java.util.UUID r13 = com.mbridge.msdk.foundation.tools.v.G()
            java.lang.String r0 = "_post"
            java.lang.String r1 = "_ttc"
            r2 = 0
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            java.lang.String r3 = "_"
            if (r13 != 0) goto L4c
            java.util.Map<java.lang.String, java.lang.Boolean> r4 = r10.H
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r12)
            r5.append(r3)
            r5.append(r11)
            r5.append(r1)
            java.lang.String r1 = r5.toString()
            r4.put(r1, r2)
            java.util.Map<java.lang.String, java.lang.Boolean> r1 = r10.H
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r12)
            r4.append(r3)
            r4.append(r11)
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            r1.put(r0, r2)
            goto L86
        L4c:
            java.util.Map<java.lang.String, java.lang.Boolean> r4 = r10.H
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r13)
            r5.append(r12)
            r5.append(r3)
            r5.append(r11)
            r5.append(r1)
            java.lang.String r1 = r5.toString()
            r4.put(r1, r2)
            java.util.Map<java.lang.String, java.lang.Boolean> r1 = r10.H
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r13)
            r4.append(r12)
            r4.append(r3)
            r4.append(r11)
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            r1.put(r0, r2)
        L86:
            com.mbridge.msdk.mbnative.controller.NativeController$3 r14 = new com.mbridge.msdk.mbnative.controller.NativeController$3
            r14.<init>(r10, r12, r13, r11)
            com.mbridge.msdk.mbnative.controller.NativeController$4 r15 = new com.mbridge.msdk.mbnative.controller.NativeController$4
            r0 = r15
            r1 = r16
            r2 = r21
            r3 = r20
            r4 = r13
            r5 = r14
            r6 = r17
            r8 = r19
            r9 = r22
            r0.<init>(r1, r2, r3, r4, r5, r6, r8, r9)
            com.mbridge.msdk.mbnative.controller.NativeController$e r0 = r10.o
            r1 = 90000(0x15f90, double:4.4466E-319)
            r0.postDelayed(r15, r1)
            com.mbridge.msdk.mbnative.controller.NativeController$5 r9 = new com.mbridge.msdk.mbnative.controller.NativeController$5
            r0 = r9
            r1 = r16
            r2 = r20
            r3 = r21
            r5 = r17
            r7 = r19
            r8 = r22
            r0.<init>(r1, r2, r3, r4, r5, r7, r8)
            com.mbridge.msdk.foundation.same.e.b r0 = r10.G
            if (r0 != 0) goto Lc6
            com.mbridge.msdk.foundation.same.e.b r0 = new com.mbridge.msdk.foundation.same.e.b
            android.content.Context r1 = r10.i
            r0.<init>(r1)
            r10.G = r0
        Lc6:
            com.mbridge.msdk.foundation.same.e.b r0 = r10.G
            if (r0 == 0) goto Lcd
            r0.a(r14, r9)
        Lcd:
            return
    }

    private void a(android.view.View r4, android.view.View.OnClickListener r5, java.lang.Class r6) {
            r3 = this;
            java.lang.String r0 = ""
            if (r4 == 0) goto L2a
            if (r5 != 0) goto L7
            goto L2a
        L7:
            if (r6 == 0) goto L10
            boolean r1 = r6.isInstance(r4)     // Catch: java.lang.Throwable -> L30
            if (r1 == 0) goto L10
            return
        L10:
            r4.setOnClickListener(r5)     // Catch: java.lang.Throwable -> L30
            boolean r1 = r4 instanceof android.view.ViewGroup     // Catch: java.lang.Throwable -> L30
            if (r1 == 0) goto L35
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4     // Catch: java.lang.Throwable -> L30
            r1 = 0
        L1a:
            int r2 = r4.getChildCount()     // Catch: java.lang.Throwable -> L30
            if (r1 >= r2) goto L35
            android.view.View r2 = r4.getChildAt(r1)     // Catch: java.lang.Throwable -> L30
            r3.a(r2, r5, r6)     // Catch: java.lang.Throwable -> L30
            int r1 = r1 + 1
            goto L1a
        L2a:
            java.lang.String r4 = "traverseView  subview or mOnClickListener is null"
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)     // Catch: java.lang.Throwable -> L30
            return
        L30:
            java.lang.String r4 = "traverseView  failed"
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
        L35:
            return
    }

    private void a(android.view.View r4, java.lang.Class r5) {
            r3 = this;
            java.lang.String r0 = ""
            if (r4 != 0) goto La
            java.lang.String r4 = "traverseView  subview  is null"
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)     // Catch: java.lang.Throwable -> L2e
            return
        La:
            if (r5 == 0) goto L13
            boolean r1 = r5.isInstance(r4)     // Catch: java.lang.Throwable -> L2e
            if (r1 == 0) goto L13
            return
        L13:
            r1 = 0
            r4.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L2e
            boolean r1 = r4 instanceof android.view.ViewGroup     // Catch: java.lang.Throwable -> L2e
            if (r1 == 0) goto L33
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4     // Catch: java.lang.Throwable -> L2e
            r1 = 0
        L1e:
            int r2 = r4.getChildCount()     // Catch: java.lang.Throwable -> L2e
            if (r1 >= r2) goto L33
            android.view.View r2 = r4.getChildAt(r1)     // Catch: java.lang.Throwable -> L2e
            r3.a(r2, r5)     // Catch: java.lang.Throwable -> L2e
            int r1 = r1 + 1
            goto L1e
        L2e:
            java.lang.String r4 = "traverseView  failed"
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
        L33:
            return
    }

    private void a(com.mbridge.msdk.foundation.entity.CampaignEx r8) {
            r7 = this;
            boolean r0 = r8.isReportClick()
            if (r0 != 0) goto L30
            r0 = 1
            r8.setReportClick(r0)
            if (r8 == 0) goto L30
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            if (r0 == 0) goto L30
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            java.lang.String[] r0 = r0.h()
            if (r0 == 0) goto L30
            android.content.Context r1 = r7.i
            java.lang.String r3 = r8.getCampaignUnitId()
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            java.lang.String[] r4 = r0.h()
            r5 = 0
            r6 = 0
            r2 = r8
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6)
        L30:
            return
    }

    private void a(com.mbridge.msdk.foundation.entity.CampaignEx r9, android.view.View r10, java.util.List<android.view.View> r11) {
            r8 = this;
            r0 = 0
            android.content.Context r1 = r8.i     // Catch: java.lang.Exception -> L4f
            if (r1 == 0) goto L13
            if (r9 == 0) goto L13
            com.iab.omid.library.mmadbridge.adsession.AdSession r0 = r8.b(r9)     // Catch: java.lang.Exception -> L4f
            if (r0 == 0) goto L13
            r0.registerAdView(r10)     // Catch: java.lang.Exception -> L4f
            r0.start()     // Catch: java.lang.Exception -> L4f
        L13:
            r5 = r0
            r0 = 0
            com.mbridge.msdk.c.d r1 = r8.W     // Catch: java.lang.Exception -> L4f
            if (r1 == 0) goto L1f
            com.mbridge.msdk.c.d r0 = r8.W     // Catch: java.lang.Exception -> L4f
            int r0 = r0.d()     // Catch: java.lang.Exception -> L4f
        L1f:
            r6 = r0
            com.mbridge.msdk.mbnative.controller.NativeController$f r7 = new com.mbridge.msdk.mbnative.controller.NativeController$f     // Catch: java.lang.Exception -> L4f
            r0 = r7
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r8
            r0.<init>(r1, r2, r3, r4, r5)     // Catch: java.lang.Exception -> L4f
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.same.e.a> r9 = r8.K     // Catch: java.lang.Exception -> L4f
            if (r9 != 0) goto L35
            java.util.concurrent.CopyOnWriteArrayList r9 = new java.util.concurrent.CopyOnWriteArrayList     // Catch: java.lang.Exception -> L4f
            r9.<init>()     // Catch: java.lang.Exception -> L4f
            r8.K = r9     // Catch: java.lang.Exception -> L4f
        L35:
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.same.e.a> r9 = r8.K     // Catch: java.lang.Exception -> L4f
            r9.add(r7)     // Catch: java.lang.Exception -> L4f
            com.mbridge.msdk.mbnative.controller.NativeController$11 r9 = new com.mbridge.msdk.mbnative.controller.NativeController$11     // Catch: java.lang.Exception -> L4f
            r9.<init>(r8, r7)     // Catch: java.lang.Exception -> L4f
            r7.setonStateChangeListener(r9)     // Catch: java.lang.Exception -> L4f
            com.mbridge.msdk.mbnative.controller.NativeController$e r9 = r8.o     // Catch: java.lang.Exception -> L4f
            if (r9 == 0) goto L59
            com.mbridge.msdk.mbnative.controller.NativeController$e r9 = r8.o     // Catch: java.lang.Exception -> L4f
            int r6 = r6 * 1000
            long r10 = (long) r6     // Catch: java.lang.Exception -> L4f
            r9.postDelayed(r7, r10)     // Catch: java.lang.Exception -> L4f
            goto L59
        L4f:
            r9 = move-exception
            java.lang.String r10 = com.mbridge.msdk.mbnative.controller.NativeController.e
            java.lang.String r9 = com.mbridge.msdk.mbnative.b.a.a(r9)
            com.mbridge.msdk.foundation.tools.z.d(r10, r9)
        L59:
            return
    }

    static void a(com.mbridge.msdk.mbnative.controller.NativeController r7, android.content.Context r8, com.mbridge.msdk.foundation.entity.CampaignEx r9) {
            if (r9 == 0) goto L42
            boolean r0 = r9.needShowIDialog()     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto L42
            com.mbridge.msdk.mbnative.controller.NativeController$9 r6 = new com.mbridge.msdk.mbnative.controller.NativeController$9     // Catch: java.lang.Throwable -> L38
            r6.<init>(r7, r9)     // Catch: java.lang.Throwable -> L38
            boolean r0 = com.mbridge.msdk.click.c.a(r9)     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto L42
            boolean r0 = r9.needShowIDialog()     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto L42
            com.mbridge.msdk.click.b r0 = r7.r     // Catch: java.lang.Throwable -> L38
            boolean r0 = r0.b(r9)     // Catch: java.lang.Throwable -> L38
            if (r0 != 0) goto L2f
            com.mbridge.msdk.mbjscommon.confirmation.e r1 = com.mbridge.msdk.mbjscommon.confirmation.e.a()     // Catch: java.lang.Throwable -> L38
            java.lang.String r2 = ""
            java.lang.String r5 = r7.j     // Catch: java.lang.Throwable -> L38
            r3 = r9
            r4 = r8
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L38
            goto L51
        L2f:
            r7.a(r9)     // Catch: java.lang.Throwable -> L38
            com.mbridge.msdk.mbnative.c.a r8 = r7.g     // Catch: java.lang.Throwable -> L38
            r8.onAdClick(r9)     // Catch: java.lang.Throwable -> L38
            goto L51
        L38:
            r8 = move-exception
            java.lang.String r0 = com.mbridge.msdk.mbnative.controller.NativeController.e
            java.lang.String r8 = r8.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)
        L42:
            com.mbridge.msdk.click.b r8 = r7.r
            r8 = 0
            com.mbridge.msdk.click.b.a = r8
            com.mbridge.msdk.click.b r8 = r7.r
            com.mbridge.msdk.mbnative.c.a r0 = r7.g
            r8.a(r9, r0)
            r7.a(r9)
        L51:
            return
    }

    static void a(com.mbridge.msdk.mbnative.controller.NativeController r0, com.mbridge.msdk.foundation.entity.CampaignEx r1) {
            r0.a(r1)
            return
    }

    static void a(com.mbridge.msdk.mbnative.controller.NativeController r3, com.mbridge.msdk.foundation.entity.CampaignEx r4, android.view.View r5, java.util.List r6, com.iab.omid.library.mmadbridge.adsession.AdSession r7) {
            java.lang.String r0 = com.mbridge.msdk.mbnative.controller.NativeController.e     // Catch: java.lang.Exception -> L38
            java.lang.String r1 = "trackView start"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Exception -> L38
            com.mbridge.msdk.mbnative.controller.NativeController$12 r0 = new com.mbridge.msdk.mbnative.controller.NativeController$12     // Catch: java.lang.Exception -> L38
            r0.<init>(r3, r4)     // Catch: java.lang.Exception -> L38
            com.mbridge.msdk.mbnative.controller.a r4 = new com.mbridge.msdk.mbnative.controller.a     // Catch: java.lang.Exception -> L38
            android.os.Handler r1 = new android.os.Handler     // Catch: java.lang.Exception -> L38
            android.os.Looper r2 = android.os.Looper.getMainLooper()     // Catch: java.lang.Exception -> L38
            r1.<init>(r2)     // Catch: java.lang.Exception -> L38
            r4.<init>(r6, r0, r1)     // Catch: java.lang.Exception -> L38
            r4.a(r5)     // Catch: java.lang.Exception -> L38
            java.util.List<com.mbridge.msdk.mbnative.controller.a> r5 = r3.I     // Catch: java.lang.Exception -> L38
            if (r5 == 0) goto L26
            java.util.List<com.mbridge.msdk.mbnative.controller.a> r5 = r3.I     // Catch: java.lang.Exception -> L38
            r5.add(r4)     // Catch: java.lang.Exception -> L38
        L26:
            java.util.List<com.mbridge.msdk.mbnative.controller.a$a> r4 = r3.J     // Catch: java.lang.Exception -> L38
            if (r4 == 0) goto L2f
            java.util.List<com.mbridge.msdk.mbnative.controller.a$a> r3 = r3.J     // Catch: java.lang.Exception -> L38
            r3.add(r0)     // Catch: java.lang.Exception -> L38
        L2f:
            if (r7 == 0) goto L38
            com.iab.omid.library.mmadbridge.adsession.AdEvents r3 = com.iab.omid.library.mmadbridge.adsession.AdEvents.createAdEvents(r7)     // Catch: java.lang.Exception -> L38
            r3.impressionOccurred()     // Catch: java.lang.Exception -> L38
        L38:
            return
    }

    static void a(com.mbridge.msdk.mbnative.controller.NativeController r0, com.mbridge.msdk.out.NativeListener.NativeAdListener r1, java.lang.String r2) {
            r0.a(r1, r2)
            return
    }

    static void a(com.mbridge.msdk.mbnative.controller.NativeController r0, java.util.List r1, int r2, com.mbridge.msdk.out.NativeListener.NativeAdListener r3) {
            r0.a(r1, r2, r3)
            return
    }

    private void a(com.mbridge.msdk.out.NativeListener.NativeAdListener r3, java.lang.String r4) {
            r2 = this;
            com.mbridge.msdk.mbnative.controller.NativeController$e r0 = r2.o
            com.mbridge.msdk.mbnative.controller.NativeController$2 r1 = new com.mbridge.msdk.mbnative.controller.NativeController$2
            r1.<init>(r2, r3, r4)
            r0.post(r1)
            return
    }

    private void a(java.util.List<com.mbridge.msdk.out.Campaign> r3, int r4, com.mbridge.msdk.out.NativeListener.NativeAdListener r5) {
            r2 = this;
            com.mbridge.msdk.mbnative.controller.NativeController$e r0 = r2.o
            com.mbridge.msdk.mbnative.controller.NativeController$15 r1 = new com.mbridge.msdk.mbnative.controller.NativeController$15
            r1.<init>(r2, r3, r5, r4)
            r0.post(r1)
            return
    }

    private void a(java.util.List<com.mbridge.msdk.out.Campaign> r11, com.mbridge.msdk.mbnative.controller.NativeController.b r12) {
            r10 = this;
            r10.f()
            long r2 = java.lang.System.currentTimeMillis()
            java.util.Timer r6 = new java.util.Timer
            r6.<init>()
            r10.U = r6
            com.mbridge.msdk.mbnative.controller.NativeController$7 r7 = new com.mbridge.msdk.mbnative.controller.NativeController$7
            r0 = r7
            r1 = r10
            r4 = r12
            r5 = r11
            r0.<init>(r1, r2, r4, r5)
            r11 = 0
            r8 = 1000(0x3e8, double:4.94E-321)
            r4 = r6
            r5 = r7
            r6 = r11
            r4.schedule(r5, r6, r8)
            return
    }

    private boolean a(int r13) {
            r12 = this;
            java.util.Map r0 = com.mbridge.msdk.mbnative.controller.b.b()
            java.lang.String r1 = r12.j
            boolean r0 = r0.containsKey(r1)
            r1 = 0
            if (r0 == 0) goto L21d
            java.util.Map r0 = com.mbridge.msdk.mbnative.controller.b.b()
            java.lang.String r2 = r12.j
            java.lang.Object r0 = r0.get(r2)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L21d
            java.util.Map r0 = com.mbridge.msdk.mbnative.controller.b.a()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r13)
            java.lang.String r3 = "_"
            r2.append(r3)
            java.lang.String r4 = r12.j
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            java.lang.Object r2 = r0.get(r2)
            java.util.Map r2 = (java.util.Map) r2
            java.util.Map r4 = com.mbridge.msdk.mbnative.controller.b.d()
            java.lang.String r5 = r12.j
            java.lang.Object r4 = r4.get(r5)
            java.lang.Integer r4 = (java.lang.Integer) r4
            com.mbridge.msdk.c.b r5 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r6 = r6.k()
            com.mbridge.msdk.c.a r5 = r5.b(r6)
            if (r4 == 0) goto L63
            int r4 = r4.intValue()
            r12.t = r4
        L63:
            if (r2 == 0) goto L21d
            int r4 = r2.size()
            if (r4 <= 0) goto L21d
            java.util.Set r4 = r2.keySet()
            java.util.Iterator r4 = r4.iterator()
            java.lang.Object r4 = r4.next()
            java.lang.Long r4 = (java.lang.Long) r4
            long r6 = java.lang.System.currentTimeMillis()
            if (r5 != 0) goto L87
            com.mbridge.msdk.c.b r5 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.a r5 = r5.b()
        L87:
            long r8 = r5.ag()
            r10 = 1000(0x3e8, double:4.94E-321)
            long r8 = r8 * r10
            long r10 = r4.longValue()
            long r6 = r6 - r10
            int r5 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r5 < 0) goto Lb0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r13)
            r2.append(r3)
            java.lang.String r13 = r12.j
            r2.append(r13)
            java.lang.String r13 = r2.toString()
            r0.remove(r13)
            goto L21d
        Lb0:
            r5 = 1
            if (r13 != r5) goto L13c
            java.lang.Object r6 = r2.get(r4)
            java.util.List r6 = (java.util.List) r6
            if (r6 == 0) goto L13b
            int r7 = r6.size()
            if (r7 <= 0) goto L13b
            com.mbridge.msdk.mbnative.c.a r7 = r12.g
            if (r7 != 0) goto Lc6
            return r1
        Lc6:
            int r8 = r12.E
            int r9 = r6.size()
            if (r8 < r9) goto Le9
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r13)
            r1.append(r3)
            java.lang.String r13 = r12.j
            r1.append(r13)
            java.lang.String r13 = r1.toString()
            r0.remove(r13)
            r7.onAdFramesLoaded(r6)
            return r5
        Le9:
            int r8 = r12.E
            if (r8 != 0) goto Lee
            return r1
        Lee:
            int r8 = r12.D
            java.util.List r8 = r6.subList(r1, r8)
            r7.onAdFramesLoaded(r6)
            r6.removeAll(r8)
            r2.put(r4, r8)
            java.util.ArrayList r9 = new java.util.ArrayList
            r9.<init>()
            java.util.Iterator r6 = r6.iterator()
        L106:
            boolean r10 = r6.hasNext()
            if (r10 == 0) goto L11d
            java.lang.Object r10 = r6.next()
            com.mbridge.msdk.out.Frame r10 = (com.mbridge.msdk.out.Frame) r10
            int r11 = r12.E
            if (r1 >= r11) goto L117
            goto L11a
        L117:
            r9.add(r10)
        L11a:
            int r1 = r1 + 1
            goto L106
        L11d:
            r2.put(r4, r9)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r13)
            r1.append(r3)
            java.lang.String r13 = r12.j
            r1.append(r13)
            java.lang.String r13 = r1.toString()
            r0.put(r13, r2)
            r7.onAdFramesLoaded(r8)
            return r5
        L13b:
            return r1
        L13c:
            java.lang.Object r13 = r2.get(r4)
            java.util.List r13 = (java.util.List) r13
            if (r13 == 0) goto L21d
            int r0 = r13.size()
            if (r0 <= 0) goto L21d
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.Object r2 = r13.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2
            int r2 = r2.getType()
            if (r2 != r5) goto L1ee
            java.lang.String r2 = r12.n
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L16e
            int r2 = r12.C
            int r3 = r13.size()
            int r2 = java.lang.Math.min(r2, r3)
            goto L1cc
        L16e:
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Exception -> L1c4
            java.lang.String r3 = r12.n     // Catch: java.lang.Exception -> L1c4
            r2.<init>(r3)     // Catch: java.lang.Exception -> L1c4
            int r3 = r2.length()     // Catch: java.lang.Exception -> L1c4
            r4 = 3
            if (r3 <= 0) goto L1a4
            r3 = r1
            r6 = r3
            r7 = r6
        L17f:
            int r8 = r2.length()     // Catch: java.lang.Exception -> L1c4
            if (r3 >= r8) goto L1a6
            java.lang.Object r8 = r2.opt(r3)     // Catch: java.lang.Exception -> L1c4
            org.json.JSONObject r8 = (org.json.JSONObject) r8     // Catch: java.lang.Exception -> L1c4
            java.lang.String r9 = "id"
            int r9 = r8.optInt(r9, r1)     // Catch: java.lang.Exception -> L1c4
            r10 = 2
            java.lang.String r11 = "ad_num"
            if (r10 != r9) goto L19b
            int r6 = r8.optInt(r11)     // Catch: java.lang.Exception -> L1c4
            goto L1a1
        L19b:
            if (r4 != r9) goto L1a1
            int r7 = r8.optInt(r11)     // Catch: java.lang.Exception -> L1c4
        L1a1:
            int r3 = r3 + 1
            goto L17f
        L1a4:
            r6 = r1
            r7 = r6
        L1a6:
            java.lang.Object r2 = r13.get(r1)     // Catch: java.lang.Exception -> L1c4
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2     // Catch: java.lang.Exception -> L1c4
            int r2 = r2.getTemplate()     // Catch: java.lang.Exception -> L1c4
            if (r4 != r2) goto L1bb
            int r2 = r13.size()     // Catch: java.lang.Exception -> L1c4
            int r2 = java.lang.Math.min(r7, r2)     // Catch: java.lang.Exception -> L1c4
            goto L1cc
        L1bb:
            int r2 = r13.size()     // Catch: java.lang.Exception -> L1c4
            int r2 = java.lang.Math.min(r6, r2)     // Catch: java.lang.Exception -> L1c4
            goto L1cc
        L1c4:
            java.lang.String r2 = com.mbridge.msdk.mbnative.controller.NativeController.e
            java.lang.String r3 = "load from catch error in get nativeinfo adnum"
            com.mbridge.msdk.foundation.tools.z.d(r2, r3)
            r2 = r1
        L1cc:
            if (r2 <= 0) goto L1ed
            java.util.Iterator r13 = r13.iterator()
        L1d2:
            boolean r3 = r13.hasNext()
            if (r3 == 0) goto L219
            if (r1 != r2) goto L1db
            goto L219
        L1db:
            java.lang.Object r3 = r13.next()
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
            r3.getTemplate()
            r0.add(r3)
            r13.remove()
            int r1 = r1 + 1
            goto L1d2
        L1ed:
            return r1
        L1ee:
            int r2 = r12.C
            int r3 = r13.size()
            int r2 = java.lang.Math.min(r2, r3)
            if (r2 <= 0) goto L21d
            java.util.Iterator r13 = r13.iterator()
        L1fe:
            boolean r3 = r13.hasNext()
            if (r3 == 0) goto L219
            if (r1 != r2) goto L207
            goto L219
        L207:
            java.lang.Object r3 = r13.next()
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
            r3.getTemplate()
            r0.add(r3)
            r13.remove()
            int r1 = r1 + 1
            goto L1fe
        L219:
            r12.a(r0)
            return r5
        L21d:
            return r1
    }

    static boolean a(com.mbridge.msdk.mbnative.controller.NativeController r0, java.util.List r1) {
            boolean r0 = r0.a(r1)
            return r0
    }

    static boolean a(com.mbridge.msdk.mbnative.controller.NativeController r0, boolean r1) {
            r0.z = r1
            return r1
    }

    private boolean a(java.util.List<com.mbridge.msdk.out.Campaign> r11) {
            r10 = this;
            java.lang.String r0 = r10.V
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            if (r0 != 0) goto L12
            if (r11 == 0) goto L12
            int r0 = r11.size()
            if (r0 != 0) goto L12
            return r1
        L12:
            if (r11 == 0) goto Lf5
            int r0 = r11.size()
            if (r0 <= 0) goto Lf5
            com.mbridge.msdk.mbnative.c.a r0 = r10.g
            if (r0 == 0) goto Lf3
            java.lang.Object r2 = r11.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2
            if (r2 == 0) goto L2b
            int r3 = r2.getTemplate()
            goto L2c
        L2b:
            r3 = 2
        L2c:
            android.content.Context r4 = r10.i
            com.mbridge.msdk.foundation.db.i r4 = com.mbridge.msdk.foundation.db.i.a(r4)
            com.mbridge.msdk.foundation.db.l r4 = com.mbridge.msdk.foundation.db.l.a(r4)
            r4.b()
            r5 = r1
        L3a:
            int r6 = r11.size()
            if (r5 >= r6) goto L7d
            java.lang.Object r6 = r11.get(r5)
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = (com.mbridge.msdk.foundation.entity.CampaignEx) r6
            java.lang.String r7 = r6.getId()
            boolean r7 = r4.a(r7)
            if (r7 != 0) goto L7a
            com.mbridge.msdk.foundation.entity.h r7 = new com.mbridge.msdk.foundation.entity.h
            r7.<init>()
            java.lang.String r8 = r6.getId()
            r7.a(r8)
            int r8 = r6.getFca()
            r7.a(r8)
            int r6 = r6.getFcb()
            r7.b(r6)
            r7.d(r1)
            r7.c(r1)
            long r8 = java.lang.System.currentTimeMillis()
            r7.a(r8)
            r4.a(r7)
        L7a:
            int r5 = r5 + 1
            goto L3a
        L7d:
            int r2 = r2.getType()
            boolean r4 = r10.S
            java.lang.String r5 = "has no ads"
            if (r4 == 0) goto Ld0
            boolean r4 = r10.R
            if (r4 == 0) goto Ld0
            r4 = 3
            if (r2 == r4) goto Ld0
            r6 = 6
            if (r2 == r6) goto Ld0
            r6 = 7
            if (r2 == r6) goto Ld0
            com.mbridge.msdk.c.d r1 = r10.e()
            int r1 = r1.h()
            if (r1 != r4) goto Lb7
            java.util.List r1 = r10.b(r11)
            if (r11 == 0) goto Lb3
            int r2 = r11.size()
            if (r2 <= 0) goto Lb3
            com.mbridge.msdk.mbnative.controller.NativeController$13 r2 = new com.mbridge.msdk.mbnative.controller.NativeController$13
            r2.<init>(r10, r1, r3, r0)
            r10.a(r11, r2)
            goto Lf3
        Lb3:
            r10.a(r0, r5)
            goto Lf3
        Lb7:
            java.util.List r1 = r10.c(r11)
            if (r1 == 0) goto Lcc
            int r2 = r1.size()
            if (r2 <= 0) goto Lcc
            com.mbridge.msdk.mbnative.controller.NativeController$14 r2 = new com.mbridge.msdk.mbnative.controller.NativeController$14
            r2.<init>(r10, r11, r3, r0)
            r10.a(r1, r2)
            goto Lf3
        Lcc:
            r10.a(r11, r3, r0)
            goto Lf3
        Ld0:
            if (r11 == 0) goto Lf0
            int r2 = r11.size()
            if (r2 <= 0) goto Lf0
            java.util.Iterator r2 = r11.iterator()
        Ldc:
            boolean r4 = r2.hasNext()
            if (r4 == 0) goto Lec
            java.lang.Object r4 = r2.next()
            com.mbridge.msdk.out.Campaign r4 = (com.mbridge.msdk.out.Campaign) r4
            r4.setVideoLength(r1)
            goto Ldc
        Lec:
            r10.a(r11, r3, r0)
            goto Lf3
        Lf0:
            r10.a(r0, r5)
        Lf3:
            r11 = 1
            return r11
        Lf5:
            return r1
    }

    public static boolean a(java.util.Map<java.lang.String, java.lang.Object> r2) {
            java.lang.String r0 = "key_word"
            if (r2 == 0) goto L33
            java.lang.String r1 = "app_id"
            boolean r1 = r2.containsKey(r1)     // Catch: java.lang.Exception -> L29
            if (r1 == 0) goto L33
            java.lang.String r1 = "app_key"
            boolean r1 = r2.containsKey(r1)     // Catch: java.lang.Exception -> L29
            if (r1 == 0) goto L33
            boolean r1 = r2.containsKey(r0)     // Catch: java.lang.Exception -> L29
            if (r1 == 0) goto L33
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Exception -> L29
            if (r2 == 0) goto L33
            java.lang.String r2 = com.mbridge.msdk.mbnative.controller.NativeController.e     // Catch: java.lang.Exception -> L29
            java.lang.String r0 = "有smart 参数"
            com.mbridge.msdk.foundation.tools.z.b(r2, r0)     // Catch: java.lang.Exception -> L29
            r2 = 1
            return r2
        L29:
            r2 = move-exception
            java.lang.String r0 = com.mbridge.msdk.mbnative.controller.NativeController.e
            java.lang.String r2 = com.mbridge.msdk.mbnative.b.a.a(r2)
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L33:
            java.lang.String r2 = com.mbridge.msdk.mbnative.controller.NativeController.e
            java.lang.String r0 = "木有smart 参数"
            com.mbridge.msdk.foundation.tools.z.b(r2, r0)
            r2 = 0
            return r2
    }

    static int b(com.mbridge.msdk.mbnative.controller.NativeController r0, int r1) {
            r0.v = r1
            return r1
    }

    private com.iab.omid.library.mmadbridge.adsession.AdSession b(com.mbridge.msdk.foundation.entity.CampaignEx r12) {
            r11 = this;
            java.util.Hashtable<java.lang.String, com.iab.omid.library.mmadbridge.adsession.AdSession> r0 = r11.L
            if (r0 != 0) goto Lb
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            r11.L = r0
        Lb:
            java.lang.String r0 = r12.getRequestIdNotice()
            java.util.Hashtable<java.lang.String, com.iab.omid.library.mmadbridge.adsession.AdSession> r1 = r11.L
            java.lang.Object r1 = r1.get(r0)
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = (com.iab.omid.library.mmadbridge.adsession.AdSession) r1
            if (r1 != 0) goto L3a
            boolean r2 = r12.isActiveOm()
            if (r2 == 0) goto L3a
            android.content.Context r3 = r11.i
            r4 = 1
            java.lang.String r5 = r12.getOmid()
            java.lang.String r6 = r12.getRequestId()
            java.lang.String r7 = r12.getId()
            java.lang.String r8 = r11.j
            java.lang.String r10 = r12.getRequestIdNotice()
            java.lang.String r9 = ""
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = com.mbridge.msdk.a.b.a(r3, r4, r5, r6, r7, r8, r9, r10)
        L3a:
            if (r1 == 0) goto L41
            java.util.Hashtable<java.lang.String, com.iab.omid.library.mmadbridge.adsession.AdSession> r12 = r11.L
            r12.put(r0, r1)
        L41:
            return r1
    }

    static java.lang.String b(com.mbridge.msdk.mbnative.controller.NativeController r0) {
            java.lang.String r0 = r0.j
            return r0
    }

    static java.lang.String b(com.mbridge.msdk.mbnative.controller.NativeController r0, java.lang.String r1) {
            r0.T = r1
            return r1
    }

    private java.util.List<com.mbridge.msdk.out.Campaign> b(java.util.List<com.mbridge.msdk.out.Campaign> r7) {
            r6 = this;
            if (r7 == 0) goto L51
            int r0 = r7.size()
            r1 = 0
            int r0 = r0 + (-1)
        L9:
            if (r0 < 0) goto L51
            java.lang.Object r2 = r7.get(r0)     // Catch: java.lang.Throwable -> L13
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2     // Catch: java.lang.Throwable -> L13
            r1 = r2
            goto L17
        L13:
            r2 = move-exception
            r2.printStackTrace()
        L17:
            if (r1 == 0) goto L4e
            java.lang.String r2 = r1.getVideoUrlEncode()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L4e
            java.lang.Object r2 = r7.remove(r0)
            com.mbridge.msdk.out.Campaign r2 = (com.mbridge.msdk.out.Campaign) r2
            int r3 = r1.getType()
            com.mbridge.msdk.mbnative.a.b r3 = com.mbridge.msdk.mbnative.a.f.a(r3)
            java.lang.String r4 = r6.j
            java.lang.String r5 = r6.V
            r3.a(r4, r2, r5)
            java.lang.String r3 = com.mbridge.msdk.mbnative.controller.NativeController.e
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "remove no videoURL ads:"
            r4.append(r5)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            com.mbridge.msdk.foundation.tools.z.a(r3, r2)
        L4e:
            int r0 = r0 + (-1)
            goto L9
        L51:
            return r7
    }

    public static java.util.List<java.lang.String> b(java.util.Map<java.lang.String, java.lang.Object> r4) {
            java.lang.String r0 = "key_word"
            r1 = 0
            java.lang.Object r2 = r4.get(r0)     // Catch: java.lang.Exception -> L4d
            boolean r2 = r2 instanceof java.lang.String     // Catch: java.lang.Exception -> L4d
            if (r2 == 0) goto L57
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Exception -> L4d
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L4d
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L4d
            if (r0 == 0) goto L18
            return r1
        L18:
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Exception -> L4d
            r0.<init>(r4)     // Catch: java.lang.Exception -> L4d
            int r4 = r0.length()     // Catch: java.lang.Exception -> L4d
            if (r4 != 0) goto L24
            return r1
        L24:
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Exception -> L4d
            r4.<init>()     // Catch: java.lang.Exception -> L4d
            r1 = 0
        L2a:
            int r2 = r0.length()     // Catch: java.lang.Exception -> L4a
            if (r1 >= r2) goto L48
            org.json.JSONObject r2 = r0.optJSONObject(r1)     // Catch: java.lang.Exception -> L4a
            if (r2 == 0) goto L45
            java.lang.String r3 = "p"
            java.lang.String r2 = r2.optString(r3)     // Catch: java.lang.Exception -> L4a
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L4a
            if (r3 != 0) goto L45
            r4.add(r2)     // Catch: java.lang.Exception -> L4a
        L45:
            int r1 = r1 + 1
            goto L2a
        L48:
            r1 = r4
            goto L57
        L4a:
            r0 = move-exception
            r1 = r4
            goto L4e
        L4d:
            r0 = move-exception
        L4e:
            java.lang.String r4 = com.mbridge.msdk.mbnative.controller.NativeController.e
            java.lang.String r0 = com.mbridge.msdk.mbnative.b.a.a(r0)
            com.mbridge.msdk.foundation.tools.z.d(r4, r0)
        L57:
            return r1
    }

    private void b(int r8, long r9, int r11, java.lang.String r12) {
            r7 = this;
            r1 = 2
            r2 = 1
            if (r11 != 0) goto L3a
            com.mbridge.msdk.mbnative.a.b r3 = com.mbridge.msdk.mbnative.a.f.a(r8)
            if (r3 == 0) goto L3a
            if (r8 == r2) goto Le
            if (r8 != r1) goto L1d
        Le:
            java.util.Map<java.lang.String, java.lang.Object> r4 = r7.d
            java.lang.String r5 = "native_info"
            boolean r4 = r4.containsKey(r5)
            if (r4 == 0) goto L1d
            int r4 = r7.M
            r7.t = r4
            goto L21
        L1d:
            int r4 = r7.s
            r7.t = r4
        L21:
            java.lang.String r4 = r7.j
            int r5 = r7.t
            java.lang.Object r3 = r3.b(r4, r5)
            java.util.List r3 = (java.util.List) r3
            java.util.List r3 = r7.d(r3)
            java.util.List r3 = r7.a(r8, r3)
            boolean r3 = r7.a(r3)
            if (r3 == 0) goto L3a
            return
        L3a:
            r3 = 0
            r7.x = r3
            if (r8 == r2) goto L4e
            if (r8 == r1) goto L45
            r7.a(r8, r9, r11, r12)
            goto L58
        L45:
            r1 = 2
            r0 = r7
            r2 = r9
            r4 = r11
            r5 = r12
            r0.a(r1, r2, r4, r5)
            goto L58
        L4e:
            r4 = 1
            java.lang.String r5 = r7.j
            r0 = r7
            r1 = r9
            r3 = r11
            r6 = r12
            r0.a(r1, r3, r4, r5, r6)
        L58:
            return
    }

    private void b(int r8, java.lang.String r9) {
            r7 = this;
            java.util.Queue<java.lang.Integer> r0 = r7.l
            if (r0 == 0) goto L52
            int r0 = r0.size()
            if (r0 <= 0) goto L52
            java.util.Queue<java.lang.Integer> r0 = r7.l
            java.lang.Object r0 = r0.poll()
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r2 = r0.intValue()
            int r0 = com.mbridge.msdk.MBridgeConstans.REQUEST_TIME_OUT
            long r0 = (long) r0
            r7.X = r0
            java.util.Queue<java.lang.Long> r0 = r7.m
            if (r0 == 0) goto L33
            int r0 = r0.size()
            if (r0 <= 0) goto L33
            java.util.Queue<java.lang.Long> r0 = r7.m
            java.lang.Object r0 = r0.poll()
            java.lang.Long r0 = (java.lang.Long) r0
            long r0 = r0.longValue()
            r7.X = r0
        L33:
            java.lang.String r0 = com.mbridge.msdk.mbnative.controller.NativeController.e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "start queue adsource = "
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            long r3 = r7.X
            r1 = r7
            r5 = r8
            r6 = r9
            r1.b(r2, r3, r5, r6)
            goto L6b
        L52:
            boolean r8 = r7.y
            if (r8 != 0) goto L6b
            com.mbridge.msdk.mbnative.c.a r8 = r7.g
            if (r8 == 0) goto L6b
            java.lang.String r8 = com.mbridge.msdk.mbnative.controller.NativeController.e
            java.lang.String r9 = "no ad source return"
            com.mbridge.msdk.foundation.tools.z.b(r8, r9)
            r8 = 1
            r7.y = r8
            com.mbridge.msdk.mbnative.c.a r8 = r7.g
            java.lang.String r9 = "no ad source"
            r8.onAdLoadError(r9)
        L6b:
            return
    }

    static void b(com.mbridge.msdk.mbnative.controller.NativeController r12, java.util.List r13) {
            java.lang.String r0 = "com.mbridge.msdk.videocommon.download.b"
            if (r13 == 0) goto L111
            int r1 = r13.size()     // Catch: java.lang.Throwable -> L119
            if (r1 <= 0) goto L111
            java.lang.String r1 = com.mbridge.msdk.mbnative.controller.NativeController.e     // Catch: java.lang.Throwable -> L119
            java.lang.String r2 = "===创建下载任务"
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Throwable -> L119
            java.lang.String r1 = "com.mbridge.msdk.nativex.view.MBMediaView"
            java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L109
            java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L109
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L109
            java.lang.String r1 = "com.mbridge.msdk.videocommon.listener.a"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L109
            java.lang.String r2 = "getInstance"
            r3 = 0
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L109
            java.lang.reflect.Method r2 = r0.getMethod(r2, r4)     // Catch: java.lang.Throwable -> L109
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L109
            r5 = 0
            java.lang.Object r2 = r2.invoke(r5, r4)     // Catch: java.lang.Throwable -> L109
            if (r2 == 0) goto L85
            java.lang.String r4 = "createUnitCache"
            r6 = 5
            java.lang.Class[] r7 = new java.lang.Class[r6]     // Catch: java.lang.Throwable -> L109
            java.lang.Class<android.content.Context> r8 = android.content.Context.class
            r7[r3] = r8     // Catch: java.lang.Throwable -> L109
            java.lang.Class<java.lang.String> r8 = java.lang.String.class
            r9 = 1
            r7[r9] = r8     // Catch: java.lang.Throwable -> L109
            java.lang.Class<java.util.concurrent.CopyOnWriteArrayList> r8 = java.util.concurrent.CopyOnWriteArrayList.class
            r10 = 2
            r7[r10] = r8     // Catch: java.lang.Throwable -> L109
            java.lang.Class r8 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L109
            r11 = 3
            r7[r11] = r8     // Catch: java.lang.Throwable -> L109
            r8 = 4
            r7[r8] = r1     // Catch: java.lang.Throwable -> L109
            java.lang.reflect.Method r1 = r0.getMethod(r4, r7)     // Catch: java.lang.Throwable -> L109
            java.lang.Object[] r4 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L109
            android.content.Context r6 = r12.i     // Catch: java.lang.Throwable -> L109
            r4[r3] = r6     // Catch: java.lang.Throwable -> L109
            java.lang.String r6 = r12.j     // Catch: java.lang.Throwable -> L109
            r4[r9] = r6     // Catch: java.lang.Throwable -> L109
            java.util.concurrent.CopyOnWriteArrayList r6 = new java.util.concurrent.CopyOnWriteArrayList     // Catch: java.lang.Throwable -> L109
            r6.<init>(r13)     // Catch: java.lang.Throwable -> L109
            r4[r10] = r6     // Catch: java.lang.Throwable -> L109
            java.lang.Integer r6 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L109
            r4[r11] = r6     // Catch: java.lang.Throwable -> L109
            r4[r8] = r5     // Catch: java.lang.Throwable -> L109
            r1.invoke(r2, r4)     // Catch: java.lang.Throwable -> L109
            java.lang.String r1 = "load"
            java.lang.Class[] r4 = new java.lang.Class[r9]     // Catch: java.lang.Throwable -> L109
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r4[r3] = r5     // Catch: java.lang.Throwable -> L109
            java.lang.reflect.Method r0 = r0.getMethod(r1, r4)     // Catch: java.lang.Throwable -> L109
            java.lang.Object[] r1 = new java.lang.Object[r9]     // Catch: java.lang.Throwable -> L109
            java.lang.String r4 = r12.j     // Catch: java.lang.Throwable -> L109
            r1[r3] = r4     // Catch: java.lang.Throwable -> L109
            r0.invoke(r2, r1)     // Catch: java.lang.Throwable -> L109
        L85:
            java.util.Iterator r13 = r13.iterator()     // Catch: java.lang.Throwable -> L109
        L89:
            boolean r0 = r13.hasNext()     // Catch: java.lang.Throwable -> L109
            if (r0 == 0) goto L121
            java.lang.Object r0 = r13.next()     // Catch: java.lang.Throwable -> L109
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0     // Catch: java.lang.Throwable -> L109
            if (r0 == 0) goto Lb9
            java.lang.String r1 = r0.getImageUrl()     // Catch: java.lang.Throwable -> L109
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L109
            if (r1 != 0) goto Lb9
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L109
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L109
            com.mbridge.msdk.foundation.same.c.b r1 = com.mbridge.msdk.foundation.same.c.b.a(r1)     // Catch: java.lang.Throwable -> L109
            java.lang.String r2 = r0.getImageUrl()     // Catch: java.lang.Throwable -> L109
            com.mbridge.msdk.mbnative.controller.NativeController$6 r3 = new com.mbridge.msdk.mbnative.controller.NativeController$6     // Catch: java.lang.Throwable -> L109
            r3.<init>(r12)     // Catch: java.lang.Throwable -> L109
            r1.a(r2, r3)     // Catch: java.lang.Throwable -> L109
        Lb9:
            java.lang.String r1 = r0.getendcard_url()     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L109
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L109
            if (r2 != 0) goto L89
            java.lang.String r2 = ".zip"
            boolean r2 = r1.contains(r2)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L109
            if (r2 == 0) goto Lee
            java.lang.String r2 = "md5filename"
            boolean r2 = r1.contains(r2)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L109
            if (r2 == 0) goto Lee
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r2 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L109
            java.lang.String r2 = r2.getH5ResAddress(r1)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L109
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L109
            com.mbridge.msdk.mbnative.controller.NativeController$g r3 = new com.mbridge.msdk.mbnative.controller.NativeController$g     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L109
            java.lang.String r4 = r12.j     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L109
            r3.<init>(r4, r0, r2)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L109
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r0 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L109
            r0.downloadH5Res(r1, r3)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L109
            goto L89
        Lee:
            com.mbridge.msdk.foundation.download.download.HTMLResourceManager r2 = com.mbridge.msdk.foundation.download.download.HTMLResourceManager.getInstance()     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L109
            java.lang.String r2 = r2.getHtmlContentFromUrl(r1)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L109
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L109
            com.mbridge.msdk.mbnative.controller.NativeController$d r3 = new com.mbridge.msdk.mbnative.controller.NativeController$d     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L109
            java.lang.String r4 = r12.j     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L109
            r3.<init>(r4, r0, r2)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L109
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r0 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L109
            r0.downloadH5Res(r1, r3)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L109
            goto L89
        L109:
            java.lang.String r12 = com.mbridge.msdk.mbnative.controller.NativeController.e     // Catch: java.lang.Throwable -> L119
            java.lang.String r13 = "please import the videocommon and nativex aar"
            com.mbridge.msdk.foundation.tools.z.d(r12, r13)     // Catch: java.lang.Throwable -> L119
            goto L121
        L111:
            java.lang.String r12 = com.mbridge.msdk.mbnative.controller.NativeController.e     // Catch: java.lang.Throwable -> L119
            java.lang.String r13 = "onload 不用下载视频素材 size为0"
            com.mbridge.msdk.foundation.tools.z.b(r12, r13)     // Catch: java.lang.Throwable -> L119
            goto L121
        L119:
            r12 = move-exception
            boolean r13 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r13 == 0) goto L121
            r12.printStackTrace()
        L121:
            return
    }

    static boolean b(com.mbridge.msdk.mbnative.controller.NativeController r0, boolean r1) {
            r0.aa = r1
            return r1
    }

    static int c(com.mbridge.msdk.mbnative.controller.NativeController r0) {
            int r0 = r0.t
            return r0
    }

    static java.lang.String c() {
            java.lang.String r0 = com.mbridge.msdk.mbnative.controller.NativeController.e
            return r0
    }

    static java.lang.String c(com.mbridge.msdk.mbnative.controller.NativeController r0, java.lang.String r1) {
            r0.N = r1
            return r1
    }

    static java.util.List c(com.mbridge.msdk.mbnative.controller.NativeController r0, java.util.List r1) {
            java.util.List r0 = r0.d(r1)
            return r0
    }

    private java.util.List<com.mbridge.msdk.out.Campaign> c(java.util.List<com.mbridge.msdk.out.Campaign> r5) {
            r4 = this;
            r0 = 0
            if (r5 == 0) goto L39
            java.util.Iterator r5 = r5.iterator()
        L7:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L39
            java.lang.Object r1 = r5.next()
            com.mbridge.msdk.out.Campaign r1 = (com.mbridge.msdk.out.Campaign) r1
            boolean r2 = r1 instanceof com.mbridge.msdk.foundation.entity.CampaignEx
            if (r2 == 0) goto L7
            r2 = r1
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2
            java.lang.String r3 = r2.getImageUrl()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L7
            java.lang.String r2 = r2.getVideoUrlEncode()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L7
            if (r0 != 0) goto L35
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
        L35:
            r0.add(r1)
            goto L7
        L39:
            return r0
    }

    static boolean c(com.mbridge.msdk.mbnative.controller.NativeController r0, boolean r1) {
            r0.y = r1
            return r1
    }

    static java.lang.String d(com.mbridge.msdk.mbnative.controller.NativeController r0) {
            java.lang.String r0 = r0.V
            return r0
    }

    private java.util.List<com.mbridge.msdk.out.Campaign> d(java.util.List<com.mbridge.msdk.out.Campaign> r6) {
            r5 = this;
            if (r6 != 0) goto L4
            r6 = 0
            return r6
        L4:
            java.util.ArrayList r0 = new java.util.ArrayList
            int r1 = r6.size()
            r0.<init>(r1)
            java.util.ArrayList r1 = new java.util.ArrayList
            int r2 = r6.size()
            r1.<init>(r2)
            java.util.Iterator r6 = r6.iterator()
        L1a:
            boolean r2 = r6.hasNext()
            if (r2 == 0) goto L65
            java.lang.Object r2 = r6.next()
            com.mbridge.msdk.out.Campaign r2 = (com.mbridge.msdk.out.Campaign) r2
            boolean r3 = r2 instanceof com.mbridge.msdk.foundation.entity.CampaignEx
            if (r3 == 0) goto L61
            r3 = r2
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
            java.lang.String r4 = r5.V
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto L49
            java.lang.String r4 = r3.getBidToken()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto L49
            boolean r4 = r3.isBidCampaign()
            if (r4 != 0) goto L49
            r1.add(r3)
            goto L1a
        L49:
            java.lang.String r4 = r5.V
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L1a
            java.lang.String r3 = r3.getBidToken()
            java.lang.String r4 = r5.V
            boolean r3 = android.text.TextUtils.equals(r3, r4)
            if (r3 == 0) goto L1a
            r0.add(r2)
            goto L1a
        L61:
            r1.add(r2)
            goto L1a
        L65:
            java.lang.String r6 = r5.V
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 == 0) goto L6e
            return r1
        L6e:
            return r0
    }

    static boolean d() {
            boolean r0 = com.mbridge.msdk.mbnative.controller.NativeController.B
            return r0
    }

    static boolean d(com.mbridge.msdk.mbnative.controller.NativeController r0, boolean r1) {
            r0.x = r1
            return r1
    }

    private com.mbridge.msdk.c.d e() {
            r3 = this;
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            java.lang.String r1 = r3.j
            java.lang.String r2 = ""
            com.mbridge.msdk.c.d r0 = r0.e(r2, r1)
            r3.W = r0
            if (r0 != 0) goto L18
            java.lang.String r0 = r3.j
            com.mbridge.msdk.c.d r0 = com.mbridge.msdk.c.d.d(r0)
            r3.W = r0
        L18:
            com.mbridge.msdk.c.d r0 = r3.W
            return r0
    }

    static boolean e(com.mbridge.msdk.mbnative.controller.NativeController r0) {
            boolean r0 = r0.y
            return r0
    }

    static com.mbridge.msdk.click.b f(com.mbridge.msdk.mbnative.controller.NativeController r0) {
            com.mbridge.msdk.click.b r0 = r0.r
            return r0
    }

    private void f() {
            r1 = this;
            java.util.Timer r0 = r1.U
            if (r0 == 0) goto La
            r0.cancel()
            r0 = 0
            r1.U = r0
        La:
            return
    }

    static com.mbridge.msdk.mbnative.c.a g(com.mbridge.msdk.mbnative.controller.NativeController r0) {
            com.mbridge.msdk.mbnative.c.a r0 = r0.g
            return r0
    }

    static java.util.concurrent.CopyOnWriteArrayList h(com.mbridge.msdk.mbnative.controller.NativeController r0) {
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.same.e.a> r0 = r0.K
            return r0
    }

    static android.content.Context i(com.mbridge.msdk.mbnative.controller.NativeController r0) {
            android.content.Context r0 = r0.i
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

    static boolean j(com.mbridge.msdk.mbnative.controller.NativeController r0) {
            boolean r0 = r0.x
            return r0
    }

    static com.mbridge.msdk.mbnative.controller.NativeController.e k(com.mbridge.msdk.mbnative.controller.NativeController r0) {
            com.mbridge.msdk.mbnative.controller.NativeController$e r0 = r0.o
            return r0
    }

    static int l(com.mbridge.msdk.mbnative.controller.NativeController r0) {
            int r0 = r0.Y
            return r0
    }

    static int m(com.mbridge.msdk.mbnative.controller.NativeController r0) {
            int r0 = r0.ab
            return r0
    }

    static int n(com.mbridge.msdk.mbnative.controller.NativeController r0) {
            int r0 = r0.ac
            return r0
    }

    static boolean o(com.mbridge.msdk.mbnative.controller.NativeController r0) {
            boolean r0 = r0.z
            return r0
    }

    static int p(com.mbridge.msdk.mbnative.controller.NativeController r0) {
            int r0 = r0.u
            return r0
    }

    static int q(com.mbridge.msdk.mbnative.controller.NativeController r0) {
            int r0 = r0.v
            return r0
    }

    static com.mbridge.msdk.foundation.db.i r(com.mbridge.msdk.mbnative.controller.NativeController r0) {
            com.mbridge.msdk.foundation.db.i r0 = r0.O
            return r0
    }

    static java.util.Map s(com.mbridge.msdk.mbnative.controller.NativeController r0) {
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r0.H
            return r0
    }

    static com.mbridge.msdk.foundation.same.e.b t(com.mbridge.msdk.mbnative.controller.NativeController r0) {
            com.mbridge.msdk.foundation.same.e.b r0 = r0.G
            return r0
    }

    static void u(com.mbridge.msdk.mbnative.controller.NativeController r0) {
            r0.f()
            return
    }

    static com.mbridge.msdk.c.d v(com.mbridge.msdk.mbnative.controller.NativeController r0) {
            com.mbridge.msdk.c.d r0 = r0.e()
            return r0
    }

    public final void a() {
            r3 = this;
            com.mbridge.msdk.foundation.same.e.b r0 = r3.G
            r1 = 0
            if (r0 == 0) goto La
            r0.a()
            r3.G = r1
        La:
            java.util.Hashtable<java.lang.String, com.iab.omid.library.mmadbridge.adsession.AdSession> r0 = r3.L
            if (r0 == 0) goto L2d
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        L16:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L28
            java.lang.Object r2 = r0.next()
            com.iab.omid.library.mmadbridge.adsession.AdSession r2 = (com.iab.omid.library.mmadbridge.adsession.AdSession) r2
            if (r2 == 0) goto L16
            r2.finish()
            goto L16
        L28:
            java.util.Hashtable<java.lang.String, com.iab.omid.library.mmadbridge.adsession.AdSession> r0 = r3.L
            r0.clear()
        L2d:
            com.mbridge.msdk.mbnative.controller.NativeController$e r0 = r3.o
            if (r0 == 0) goto L34
            r0.removeCallbacksAndMessages(r1)
        L34:
            r3.h = r1
            com.mbridge.msdk.click.b r0 = r3.r
            r0.a()
            android.content.Context r0 = r3.i     // Catch: java.lang.Exception -> Lc4
            if (r0 == 0) goto L48
            android.content.Context r0 = r3.i     // Catch: java.lang.Exception -> Lc4
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)     // Catch: java.lang.Exception -> Lc4
            r0.c()     // Catch: java.lang.Exception -> Lc4
        L48:
            java.util.List<com.mbridge.msdk.mbnative.controller.a> r0 = r3.I     // Catch: java.lang.Exception -> Lc4
            if (r0 == 0) goto L71
            java.util.List<com.mbridge.msdk.mbnative.controller.a> r0 = r3.I     // Catch: java.lang.Exception -> Lc4
            int r0 = r0.size()     // Catch: java.lang.Exception -> Lc4
            if (r0 <= 0) goto L71
            java.util.List<com.mbridge.msdk.mbnative.controller.a> r0 = r3.I     // Catch: java.lang.Exception -> Lc4
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> Lc4
        L5a:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Exception -> Lc4
            if (r2 == 0) goto L6a
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Exception -> Lc4
            com.mbridge.msdk.mbnative.controller.a r2 = (com.mbridge.msdk.mbnative.controller.a) r2     // Catch: java.lang.Exception -> Lc4
            r2.a()     // Catch: java.lang.Exception -> Lc4
            goto L5a
        L6a:
            java.util.List<com.mbridge.msdk.mbnative.controller.a> r0 = r3.I     // Catch: java.lang.Exception -> Lc4
            r0.clear()     // Catch: java.lang.Exception -> Lc4
            r3.I = r1     // Catch: java.lang.Exception -> Lc4
        L71:
            java.util.List<com.mbridge.msdk.mbnative.controller.a$a> r0 = r3.J     // Catch: java.lang.Exception -> Lc4
            if (r0 == 0) goto L97
            java.util.List<com.mbridge.msdk.mbnative.controller.a$a> r0 = r3.J     // Catch: java.lang.Exception -> Lc4
            int r0 = r0.size()     // Catch: java.lang.Exception -> Lc4
            if (r0 <= 0) goto L97
            java.util.List<com.mbridge.msdk.mbnative.controller.a$a> r0 = r3.J     // Catch: java.lang.Exception -> Lc4
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> Lc4
        L83:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Exception -> Lc4
            if (r2 == 0) goto L90
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Exception -> Lc4
            com.mbridge.msdk.mbnative.controller.a$a r2 = (com.mbridge.msdk.mbnative.controller.a.a) r2     // Catch: java.lang.Exception -> Lc4
            goto L83
        L90:
            java.util.List<com.mbridge.msdk.mbnative.controller.a$a> r0 = r3.J     // Catch: java.lang.Exception -> Lc4
            r0.clear()     // Catch: java.lang.Exception -> Lc4
            r3.J = r1     // Catch: java.lang.Exception -> Lc4
        L97:
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.same.e.a> r0 = r3.K     // Catch: java.lang.Exception -> Lc4
            if (r0 == 0) goto Lc4
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.same.e.a> r0 = r3.K     // Catch: java.lang.Exception -> Lc4
            int r0 = r0.size()     // Catch: java.lang.Exception -> Lc4
            if (r0 <= 0) goto Lc4
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.same.e.a> r0 = r3.K     // Catch: java.lang.Exception -> Lc4
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> Lc4
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> Lc4
            if (r1 == 0) goto Lbf
            java.lang.Object r0 = r0.next()     // Catch: java.lang.Exception -> Lc4
            com.mbridge.msdk.foundation.same.e.a r0 = (com.mbridge.msdk.foundation.same.e.a) r0     // Catch: java.lang.Exception -> Lc4
            if (r0 == 0) goto Lbf
            r0.cancel()     // Catch: java.lang.Exception -> Lc4
            com.mbridge.msdk.mbnative.controller.NativeController$e r1 = r3.o     // Catch: java.lang.Exception -> Lc4
            r1.removeCallbacks(r0)     // Catch: java.lang.Exception -> Lc4
        Lbf:
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.same.e.a> r0 = r3.K     // Catch: java.lang.Exception -> Lc4
            r0.clear()     // Catch: java.lang.Exception -> Lc4
        Lc4:
            return
    }

    public final synchronized void a(int r11, long r12, int r14, java.lang.String r15) {
            r10 = this;
            monitor-enter(r10)
            java.util.Map<java.lang.String, java.lang.Object> r0 = r10.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r1 = "native_info"
            boolean r0 = r0.containsKey(r1)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r0 == 0) goto L15
            int r0 = r10.ab     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            int r1 = r10.ac     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            int r0 = java.lang.Math.max(r0, r1)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r10.t = r0     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L15:
            r0 = 1
            if (r14 != 0) goto La3
            com.mbridge.msdk.mbnative.a.b r1 = com.mbridge.msdk.mbnative.a.f.a(r11)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            boolean r2 = r10.x     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r2 == 0) goto L85
            if (r1 == 0) goto L3c
            java.lang.String r2 = r10.j     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            int r3 = r10.t     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.Object r1 = r1.b(r2, r3)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.util.List r1 = (java.util.List) r1     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.util.List r1 = r10.d(r1)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.util.List r1 = r10.a(r0, r1)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            boolean r1 = r10.a(r1)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r1 == 0) goto L3c
            monitor-exit(r10)
            return
        L3c:
            java.lang.String r1 = com.mbridge.msdk.mbnative.controller.NativeController.e     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.<init>()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r3 = "isGetApiReulst = "
            r2.append(r3)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            boolean r3 = r10.aa     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.append(r3)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r3 = " isReturn = "
            r2.append(r3)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            boolean r3 = r10.y     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.append(r3)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            com.mbridge.msdk.mbnative.controller.NativeController$a r1 = r10.Q     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r1 == 0) goto L6b
            boolean r1 = r10.aa     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r1 != 0) goto L6b
            com.mbridge.msdk.mbnative.controller.NativeController$a r1 = r10.Q     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r1.b(r0)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L6b:
            boolean r1 = r10.aa     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r1 == 0) goto L7f
            boolean r1 = r10.y     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r1 != 0) goto L7f
            java.lang.String r1 = com.mbridge.msdk.mbnative.controller.NativeController.e     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r2 = "222222"
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r1 = "mb load failed"
            r10.a(r1, r14, r15)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L7f:
            boolean r1 = r10.ad     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r1 != 0) goto La3
            monitor-exit(r10)
            return
        L85:
            if (r11 == r0) goto La3
            if (r1 == 0) goto La3
            java.lang.String r2 = r10.j     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            int r3 = r10.t     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.Object r1 = r1.b(r2, r3)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.util.List r1 = (java.util.List) r1     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.util.List r1 = r10.d(r1)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.util.List r1 = r10.a(r11, r1)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            boolean r1 = r10.a(r1)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r1 == 0) goto La3
            monitor-exit(r10)
            return
        La3:
            int r1 = r10.u     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2 = -1
            r3 = 0
            if (r1 != r2) goto Lac
            r10.u = r11     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            goto Lb2
        Lac:
            int r1 = r10.u     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r1 == r11) goto Lb2
            r10.v = r3     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        Lb2:
            android.content.Context r1 = r10.i     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            com.mbridge.msdk.foundation.db.i r1 = com.mbridge.msdk.foundation.db.i.a(r1)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            com.mbridge.msdk.foundation.db.f r1 = com.mbridge.msdk.foundation.db.f.a(r1)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r1.a()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r1 = com.mbridge.msdk.mbnative.controller.NativeController.e     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r2 = "START LOAD MB MVNATIVE"
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            com.mbridge.msdk.mbnative.e.a.a r1 = new com.mbridge.msdk.mbnative.e.a.a     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            android.content.Context r2 = r10.i     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            com.mbridge.msdk.foundation.same.net.g.d r2 = new com.mbridge.msdk.foundation.same.net.g.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.<init>()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r4 = r4.k()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = r5.l()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.util.Map<java.lang.String, java.lang.Object> r6 = r10.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r6 == 0) goto L160
            java.util.Map<java.lang.String, java.lang.Object> r6 = r10.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r7 = "app_id"
            boolean r6 = r6.containsKey(r7)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r6 == 0) goto L160
            java.util.Map<java.lang.String, java.lang.Object> r6 = r10.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r7 = "app_key"
            boolean r6 = r6.containsKey(r7)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r6 == 0) goto L160
            java.util.Map<java.lang.String, java.lang.Object> r6 = r10.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r7 = "key_word"
            boolean r6 = r6.containsKey(r7)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r6 == 0) goto L160
            java.util.Map<java.lang.String, java.lang.Object> r6 = r10.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r7 = "key_word"
            java.lang.Object r6 = r6.get(r7)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r6 == 0) goto L160
            r6 = 0
            java.util.Map<java.lang.String, java.lang.Object> r7 = r10.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r8 = "app_id"
            java.lang.Object r7 = r7.get(r8)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            boolean r7 = r7 instanceof java.lang.String     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r7 == 0) goto L125
            java.util.Map<java.lang.String, java.lang.Object> r4 = r10.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r7 = "app_id"
            java.lang.Object r4 = r4.get(r7)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L125:
            java.util.Map<java.lang.String, java.lang.Object> r7 = r10.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r8 = "app_key"
            java.lang.Object r7 = r7.get(r8)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            boolean r7 = r7 instanceof java.lang.String     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r7 == 0) goto L13b
            java.util.Map<java.lang.String, java.lang.Object> r5 = r10.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r7 = "app_key"
            java.lang.Object r5 = r5.get(r7)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L13b:
            java.util.Map<java.lang.String, java.lang.Object> r7 = r10.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r8 = "key_word"
            java.lang.Object r7 = r7.get(r8)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            boolean r7 = r7 instanceof java.lang.String     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r7 == 0) goto L151
            java.util.Map<java.lang.String, java.lang.Object> r6 = r10.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r7 = "key_word"
            java.lang.Object r6 = r6.get(r7)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L151:
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r7 != 0) goto L160
            java.lang.String r7 = "smart"
            java.lang.String r6 = com.mbridge.msdk.foundation.tools.t.a(r6)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.a(r7, r6)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L160:
            java.lang.String r6 = "app_id"
            r2.a(r6, r4)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r6 = "unit_id"
            java.lang.String r7 = r10.j     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.a(r6, r7)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r6 = r10.k     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r6 != 0) goto L17b
            java.lang.String r6 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r7 = r10.k     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.a(r6, r7)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L17b:
            java.lang.String r6 = "req_type"
            java.lang.String r7 = "2"
            r2.a(r6, r7)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r6 = r10.w     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r6 != 0) goto L191
            java.lang.String r6 = "category"
            java.lang.String r7 = r10.w     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.a(r6, r7)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L191:
            java.lang.String r6 = "sign"
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r7.<init>()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r7.append(r4)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r7.append(r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r4 = r7.toString()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r4)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.a(r6, r4)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            int r4 = r10.Z     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r4 <= 0) goto L1c8
            if (r14 != 0) goto L1c8
            java.lang.String r4 = "ad_num"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r5.<init>()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            int r6 = r10.Z     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r5.append(r6)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r6 = ""
            r5.append(r6)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.a(r4, r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            goto L1e0
        L1c8:
            java.lang.String r4 = "ad_num"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r5.<init>()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            int r6 = r10.s     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r5.append(r6)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r6 = ""
            r5.append(r6)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.a(r4, r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L1e0:
            java.lang.String r4 = r10.j     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.ae.g(r4)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r5 != 0) goto L1f1
            java.lang.String r5 = "j"
            r2.a(r5, r4)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L1f1:
            java.lang.String r4 = "only_impression"
            java.lang.String r5 = "1"
            r2.a(r4, r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r4 = "ping_mode"
            java.lang.String r5 = "1"
            r2.a(r4, r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            int r4 = r10.E     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r4 == 0) goto L21b
            java.lang.String r4 = "frame_num"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r5.<init>()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            int r6 = r10.E     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r5.append(r6)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r6 = ""
            r5.append(r6)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.a(r4, r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L21b:
            java.lang.String r4 = r10.n     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r4 != 0) goto L249
            java.lang.String r4 = "native_info"
            java.lang.String r5 = r10.n     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.a(r4, r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r11 != r0) goto L267
            boolean r4 = com.mbridge.msdk.click.b.a     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r4 != 0) goto L267
            java.lang.String r4 = "tnum"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r5.<init>()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            int r6 = r10.M     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r5.append(r6)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r6 = ""
            r5.append(r6)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.a(r4, r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            goto L267
        L249:
            if (r11 != r0) goto L267
            boolean r4 = com.mbridge.msdk.click.b.a     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r4 != 0) goto L267
            java.lang.String r4 = "tnum"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r5.<init>()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            int r6 = r10.s     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r5.append(r6)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r6 = ""
            r5.append(r6)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.a(r4, r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L267:
            if (r11 != r0) goto L278
            java.lang.String r4 = r10.N     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r4 != 0) goto L278
            java.lang.String r4 = "ttc_ids"
            java.lang.String r5 = r10.N     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.a(r4, r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L278:
            java.lang.String r4 = r10.j     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = "native"
            java.lang.String r4 = com.mbridge.msdk.foundation.same.a.d.a(r4, r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r5 != 0) goto L28b
            java.lang.String r5 = com.mbridge.msdk.foundation.same.net.g.d.b     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.a(r5, r4)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L28b:
            int r4 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r5 = 14
            if (r4 < r5) goto L32f
            java.util.Map<java.lang.String, java.lang.Object> r4 = r10.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = "native_video_width"
            boolean r4 = r4.containsKey(r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r4 == 0) goto L2cb
            java.util.Map<java.lang.String, java.lang.Object> r4 = r10.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = "native_video_width"
            java.lang.Object r4 = r4.get(r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            boolean r4 = r4 instanceof java.lang.Integer     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r4 == 0) goto L2cb
            java.lang.String r4 = "video_width"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r5.<init>()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.util.Map<java.lang.String, java.lang.Object> r6 = r10.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r7 = "native_video_width"
            java.lang.Object r6 = r6.get(r7)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.Integer r6 = (java.lang.Integer) r6     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            int r6 = r6.intValue()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r5.append(r6)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r6 = ""
            r5.append(r6)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.a(r4, r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L2cb:
            java.util.Map<java.lang.String, java.lang.Object> r4 = r10.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = "native_video_height"
            boolean r4 = r4.containsKey(r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r4 == 0) goto L305
            java.util.Map<java.lang.String, java.lang.Object> r4 = r10.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = "native_video_height"
            java.lang.Object r4 = r4.get(r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            boolean r4 = r4 instanceof java.lang.Integer     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r4 == 0) goto L305
            java.lang.String r4 = "video_height"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r5.<init>()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.util.Map<java.lang.String, java.lang.Object> r6 = r10.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r7 = "native_video_height"
            java.lang.Object r6 = r6.get(r7)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.Integer r6 = (java.lang.Integer) r6     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            int r6 = r6.intValue()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r5.append(r6)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r6 = ""
            r5.append(r6)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.a(r4, r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L305:
            java.util.Map<java.lang.String, java.lang.Object> r4 = r10.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = "videoSupport"
            boolean r4 = r4.containsKey(r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r4 == 0) goto L328
            java.util.Map<java.lang.String, java.lang.Object> r4 = r10.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = "videoSupport"
            java.lang.Object r4 = r4.get(r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            boolean r4 = r4 instanceof java.lang.Boolean     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r4 == 0) goto L328
            java.util.Map<java.lang.String, java.lang.Object> r4 = r10.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = "videoSupport"
            java.lang.Object r4 = r4.get(r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.Boolean r4 = (java.lang.Boolean) r4     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r4.booleanValue()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L328:
            java.lang.String r4 = "video_version"
            java.lang.String r5 = "2.0"
            r2.a(r4, r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L32f:
            com.mbridge.msdk.c.b r4 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = r5.k()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            com.mbridge.msdk.c.a r4 = r4.b(r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r4 != 0) goto L348
            com.mbridge.msdk.c.b r4 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r4.b()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L348:
            java.util.Map<java.lang.String, java.lang.Object> r4 = r10.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            boolean r4 = a(r4)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r4 != 0) goto L36e
            java.lang.String r4 = com.mbridge.msdk.mbnative.controller.NativeController.e     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = "没有param 参数 要传fqci"
            com.mbridge.msdk.foundation.tools.z.b(r4, r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            android.content.Context r4 = r10.i     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = r10.j     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            org.json.JSONArray r4 = com.mbridge.msdk.foundation.tools.ae.a(r4, r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            int r5 = r4.length()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r5 <= 0) goto L36e
            java.lang.String r5 = com.mbridge.msdk.foundation.same.net.g.d.c     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.ae.a(r4)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.a(r5, r4)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L36e:
            org.json.JSONArray r4 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r4.<init>()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.util.List r5 = r5.i()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r5 == 0) goto L39b
            int r6 = r5.size()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r6 <= 0) goto L39b
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L387:
            boolean r6 = r5.hasNext()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r6 == 0) goto L39b
            java.lang.Object r6 = r5.next()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.Long r6 = (java.lang.Long) r6     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            long r6 = r6.longValue()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r4.put(r6)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            goto L387
        L39b:
            int r5 = r4.length()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r5 <= 0) goto L3aa
            java.lang.String r5 = "install_ids"
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.ae.a(r4)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.a(r5, r4)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L3aa:
            java.util.Map r4 = com.mbridge.msdk.mbnative.controller.b.b()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = r10.j     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            boolean r4 = r4.containsKey(r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r4 == 0) goto L3f4
            java.util.Map r4 = com.mbridge.msdk.mbnative.controller.b.b()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = r10.j     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.Object r4 = r4.get(r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.Boolean r4 = (java.lang.Boolean) r4     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            boolean r4 = r4.booleanValue()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r4 == 0) goto L3f4
            java.util.Map r4 = com.mbridge.msdk.mbnative.controller.b.c()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = r10.j     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.Object r4 = r4.get(r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r4 == 0) goto L3f4
            java.util.Map r4 = com.mbridge.msdk.mbnative.controller.b.c()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = r10.j     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.Object r4 = r4.get(r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            com.mbridge.msdk.foundation.entity.m r4 = (com.mbridge.msdk.foundation.entity.m) r4     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r4 == 0) goto L3f4
            if (r11 != r0) goto L3eb
            int r4 = r4.b()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r10.v = r4     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            goto L3f4
        L3eb:
            r5 = 2
            if (r11 != r5) goto L3f4
            int r4 = r4.a()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r10.v = r4     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L3f4:
            java.lang.String r4 = "offset"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r5.<init>()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            int r6 = r10.v     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r5.append(r6)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r6 = ""
            r5.append(r6)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.a(r4, r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r4 = "ad_type"
            java.lang.String r5 = "42"
            r2.a(r4, r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r4 = "ad_source_id"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r5.<init>()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r5.append(r11)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r6 = ""
            r5.append(r6)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.a(r4, r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r4 = r10.q     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r4 != 0) goto L438
            java.lang.String r4 = com.mbridge.msdk.foundation.same.net.g.d.a     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r5 = r10.q     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r2.a(r4, r5)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L438:
            com.mbridge.msdk.mbnative.controller.NativeController$a r9 = new com.mbridge.msdk.mbnative.controller.NativeController$a     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r9.<init>(r10)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.util.Map<java.lang.String, java.lang.Object> r4 = r10.d     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.util.List r4 = b(r4)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r9.a(r4)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r4 = r10.j     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r9.setUnitId(r4)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r4 = r10.k     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r9.setPlacementId(r4)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r4 = 42
            r9.setAdType(r4)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r11 != r0) goto L462
            boolean r11 = r10.x     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r11 == 0) goto L45c
            goto L462
        L45c:
            r10.Q = r9     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r9.b(r3)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            goto L465
        L462:
            r9.b(r0)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L465:
            com.mbridge.msdk.mbnative.controller.NativeController$c r11 = new com.mbridge.msdk.mbnative.controller.NativeController$c     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r5 = 1
            r3 = r11
            r4 = r10
            r6 = r9
            r7 = r14
            r8 = r15
            r3.<init>(r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r9.a(r11)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r9.e(r14)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r9.a(r15)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r14 != 0) goto L489
            boolean r3 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            if (r3 != 0) goto L486
            java.lang.String r3 = "token"
            r2.a(r3, r15)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L486:
            r1.choiceV3OrV5BySetting(r0, r2, r9, r15)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L489:
            if (r14 != r0) goto L494
            com.mbridge.msdk.foundation.same.net.f.d r14 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            java.lang.String r14 = r14.n     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r1.getLoadOrSetting(r0, r14, r2, r9)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
        L494:
            com.mbridge.msdk.mbnative.controller.NativeController$e r14 = r10.o     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            r14.postDelayed(r11, r12)     // Catch: java.lang.Throwable -> L49a java.lang.Exception -> L49c
            goto L4af
        L49a:
            r11 = move-exception
            goto L4b1
        L49c:
            r11 = move-exception
            java.lang.String r12 = com.mbridge.msdk.mbnative.controller.NativeController.e     // Catch: java.lang.Throwable -> L49a
            java.lang.String r13 = com.mbridge.msdk.mbnative.b.a.a(r11)     // Catch: java.lang.Throwable -> L49a
            com.mbridge.msdk.foundation.tools.z.d(r12, r13)     // Catch: java.lang.Throwable -> L49a
            java.lang.String r12 = com.mbridge.msdk.mbnative.controller.NativeController.e     // Catch: java.lang.Throwable -> L49a
            java.lang.String r11 = r11.getMessage()     // Catch: java.lang.Throwable -> L49a
            com.mbridge.msdk.foundation.tools.z.d(r12, r11)     // Catch: java.lang.Throwable -> L49a
        L4af:
            monitor-exit(r10)
            return
        L4b1:
            monitor-exit(r10)
            throw r11
    }

    public final void a(int r11, java.lang.String r12) {
            r10 = this;
            r0 = 0
            r10.y = r0
            r10.z = r0
            r10.A = r0
            r10.aa = r0
            r10.x = r0
            r10.V = r12
            com.mbridge.msdk.mbnative.c.a r1 = r10.g
            boolean r12 = android.text.TextUtils.isEmpty(r12)
            r2 = 1
            r12 = r12 ^ r2
            r1.a(r12)
            r12 = 0
            r10.Q = r12
            java.util.Map<java.lang.String, java.lang.Long> r1 = com.mbridge.msdk.mbnative.controller.NativeController.c
            if (r1 == 0) goto L2a
            int r1 = r1.size()
            if (r1 <= 0) goto L2a
            java.util.Map<java.lang.String, java.lang.Long> r1 = com.mbridge.msdk.mbnative.controller.NativeController.c
            r1.clear()
        L2a:
            java.util.Map r1 = com.mbridge.msdk.mbnative.controller.b.b()
            if (r1 == 0) goto L4d
            java.util.Map r1 = com.mbridge.msdk.mbnative.controller.b.b()
            java.lang.String r3 = r10.j
            boolean r1 = r1.containsKey(r3)
            if (r1 == 0) goto L4d
            java.util.Map r1 = com.mbridge.msdk.mbnative.controller.b.b()
            java.lang.String r3 = r10.j
            java.lang.Object r1 = r1.get(r3)
            java.lang.Boolean r1 = (java.lang.Boolean) r1
            boolean r1 = r1.booleanValue()
            goto L4e
        L4d:
            r1 = r0
        L4e:
            if (r1 == 0) goto L5a
            if (r11 != r2) goto L5a
            boolean r1 = r10.a(r11)
            if (r1 == 0) goto L5a
            goto L2d9
        L5a:
            java.util.Map<java.lang.String, java.lang.Object> r1 = r10.d
            java.lang.String r3 = "app_id"
            boolean r1 = r1.containsKey(r3)
            if (r1 == 0) goto L89
            java.util.Map<java.lang.String, java.lang.Object> r1 = r10.d
            java.lang.String r4 = "app_key"
            boolean r1 = r1.containsKey(r4)
            if (r1 == 0) goto L89
            java.util.Map<java.lang.String, java.lang.Object> r1 = r10.d
            java.lang.String r5 = "key_word"
            boolean r1 = r1.containsKey(r5)
            if (r1 == 0) goto L89
            java.util.Map<java.lang.String, java.lang.Object> r12 = r10.d
            java.lang.Object r12 = r12.get(r3)
            java.lang.String r12 = (java.lang.String) r12
            java.util.Map<java.lang.String, java.lang.Object> r1 = r10.d
            java.lang.Object r1 = r1.get(r4)
            java.lang.String r1 = (java.lang.String) r1
            goto L8a
        L89:
            r1 = r12
        L8a:
            com.mbridge.msdk.c.c r3 = r10.f
            android.content.Context r4 = r10.i
            java.lang.String r5 = r10.j
            r3.a(r4, r12, r1, r5)
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()
            java.lang.String r3 = r10.j
            com.mbridge.msdk.c.d r12 = r1.e(r12, r3)
            r10.W = r12
            if (r12 != 0) goto La9
            java.lang.String r12 = r10.j
            com.mbridge.msdk.c.d r12 = com.mbridge.msdk.c.d.d(r12)
            r10.W = r12
        La9:
            com.mbridge.msdk.c.d r12 = r10.W
            int r12 = r12.v()
            int r1 = r10.t
            int r12 = r12 * r1
            java.util.Map r1 = com.mbridge.msdk.mbnative.controller.b.e()
            java.lang.String r3 = r10.j
            java.lang.Integer r12 = java.lang.Integer.valueOf(r12)
            r1.put(r3, r12)
            com.mbridge.msdk.c.d r12 = r10.W
            java.util.List r12 = r12.r()
            r10.a = r12
            com.mbridge.msdk.c.d r12 = r10.W
            java.util.List r12 = r12.s()
            r10.b = r12
            com.mbridge.msdk.c.d r12 = r10.W
            int r12 = r12.p()
            r10.Z = r12
            com.mbridge.msdk.c.d r12 = r10.W
            int r12 = r12.q()
            r10.Y = r12
            int r12 = r10.s
            r10.t = r12
            java.util.List<java.lang.Integer> r12 = r10.a
            if (r12 == 0) goto L2ce
            int r12 = r12.size()
            if (r12 != 0) goto Lef
            goto L2ce
        Lef:
            com.mbridge.msdk.foundation.controller.a r12 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lfc
            android.content.Context r12 = r12.j()     // Catch: java.lang.Exception -> Lfc
            boolean r12 = com.mbridge.msdk.mbjscommon.webEnvCheck.a.a(r12)     // Catch: java.lang.Exception -> Lfc
            goto Lfd
        Lfc:
            r12 = r0
        Lfd:
            if (r12 != 0) goto L10a
            com.mbridge.msdk.mbnative.c.a r11 = r10.g
            if (r11 == 0) goto L2d9
            java.lang.String r12 = "webview is not available"
            r11.onAdLoadError(r12)
            goto L2d9
        L10a:
            java.util.Map<java.lang.String, java.lang.Object> r12 = r10.d
            java.lang.String r1 = "native_info"
            boolean r12 = r12.containsKey(r1)
            r3 = 2
            if (r12 == 0) goto L190
            java.lang.String r12 = r10.n
            if (r12 != 0) goto L190
            java.util.Map<java.lang.String, java.lang.Object> r12 = r10.d
            java.lang.Object r12 = r12.get(r1)
            java.lang.String r12 = (java.lang.String) r12
            r10.n = r12
            if (r12 != 0) goto L126
            goto L190
        L126:
            org.json.JSONArray r12 = new org.json.JSONArray     // Catch: org.json.JSONException -> L186
            java.lang.String r4 = r10.n     // Catch: org.json.JSONException -> L186
            r12.<init>(r4)     // Catch: org.json.JSONException -> L186
            int r4 = r12.length()     // Catch: org.json.JSONException -> L186
            if (r4 <= 0) goto L175
            r4 = r0
        L134:
            int r5 = r12.length()     // Catch: org.json.JSONException -> L186
            if (r4 >= r5) goto L175
            java.lang.Object r5 = r12.opt(r4)     // Catch: org.json.JSONException -> L186
            org.json.JSONObject r5 = (org.json.JSONObject) r5     // Catch: org.json.JSONException -> L186
            java.lang.String r6 = "id"
            int r6 = r5.optInt(r6, r0)     // Catch: org.json.JSONException -> L186
            java.lang.String r7 = "ad_num"
            if (r3 != r6) goto L15d
            int r6 = r5.optInt(r7)     // Catch: org.json.JSONException -> L186
            r10.ab = r6     // Catch: org.json.JSONException -> L186
            int r6 = r10.Z     // Catch: org.json.JSONException -> L186
            if (r6 <= 0) goto L172
            r5.remove(r7)     // Catch: org.json.JSONException -> L186
            int r6 = r10.Z     // Catch: org.json.JSONException -> L186
            r5.put(r7, r6)     // Catch: org.json.JSONException -> L186
            goto L172
        L15d:
            r8 = 3
            if (r8 != r6) goto L172
            int r6 = r5.optInt(r7)     // Catch: org.json.JSONException -> L186
            r10.ac = r6     // Catch: org.json.JSONException -> L186
            int r6 = r10.Z     // Catch: org.json.JSONException -> L186
            if (r6 <= 0) goto L172
            r5.remove(r7)     // Catch: org.json.JSONException -> L186
            int r6 = r10.Z     // Catch: org.json.JSONException -> L186
            r5.put(r7, r6)     // Catch: org.json.JSONException -> L186
        L172:
            int r4 = r4 + 1
            goto L134
        L175:
            int r4 = r10.ab     // Catch: org.json.JSONException -> L186
            int r5 = r10.ac     // Catch: org.json.JSONException -> L186
            int r4 = java.lang.Math.max(r4, r5)     // Catch: org.json.JSONException -> L186
            r10.M = r4     // Catch: org.json.JSONException -> L186
            java.lang.String r12 = r12.toString()     // Catch: org.json.JSONException -> L186
            r10.n = r12     // Catch: org.json.JSONException -> L186
            goto L190
        L186:
            r12 = move-exception
            java.lang.String r4 = com.mbridge.msdk.mbnative.controller.NativeController.e
            java.lang.String r12 = com.mbridge.msdk.mbnative.b.a.a(r12)
            com.mbridge.msdk.foundation.tools.z.d(r4, r12)
        L190:
            java.util.List<java.lang.Integer> r12 = r10.a
            java.lang.Integer r4 = java.lang.Integer.valueOf(r2)
            boolean r12 = r12.contains(r4)
            if (r12 == 0) goto L1aa
            java.util.List<java.lang.Integer> r12 = r10.a
            java.lang.Object r12 = r12.get(r0)
            java.lang.Integer r12 = (java.lang.Integer) r12
            int r12 = r12.intValue()
            if (r12 != r2) goto L1be
        L1aa:
            if (r11 != 0) goto L1be
            java.lang.String r12 = r10.j
            int r4 = r10.t
            java.lang.String r5 = r10.V
            java.util.List r12 = r10.b(r12, r4, r5)
            boolean r12 = r10.a(r12)
            if (r12 == 0) goto L1be
            goto L2d9
        L1be:
            r10.ad = r2
            java.util.List<java.lang.Integer> r12 = r10.a
            java.lang.Integer r4 = java.lang.Integer.valueOf(r2)
            boolean r12 = r12.contains(r4)
            if (r12 == 0) goto L242
            if (r11 != 0) goto L242
            java.util.List<java.lang.Integer> r12 = r10.a
            java.lang.Object r12 = r12.get(r0)
            java.lang.Integer r12 = (java.lang.Integer) r12
            int r12 = r12.intValue()
            if (r12 == r2) goto L242
            java.util.List<java.lang.Integer> r12 = r10.a
            java.lang.Object r12 = r12.get(r0)
            java.lang.Integer r12 = (java.lang.Integer) r12
            int r12 = r12.intValue()
            com.mbridge.msdk.mbnative.a.b r4 = com.mbridge.msdk.mbnative.a.f.a(r12)
            if (r12 != r3) goto L1fb
            java.util.Map<java.lang.String, java.lang.Object> r3 = r10.d
            boolean r1 = r3.containsKey(r1)
            if (r1 == 0) goto L1fb
            int r1 = r10.M
            r10.t = r1
            goto L1ff
        L1fb:
            int r1 = r10.s
            r10.t = r1
        L1ff:
            if (r4 == 0) goto L21b
            java.lang.String r1 = r10.j
            int r3 = r10.t
            java.lang.Object r1 = r4.b(r1, r3)
            java.util.List r1 = (java.util.List) r1
            java.util.List r1 = r10.d(r1)
            java.util.List r12 = r10.a(r12, r1)
            boolean r12 = r10.a(r12)
            if (r12 == 0) goto L21b
            goto L2d9
        L21b:
            r10.x = r0
            r10.ad = r0
            java.util.List<java.lang.Integer> r12 = r10.b     // Catch: java.lang.Exception -> L242
            java.util.List<java.lang.Integer> r0 = r10.a     // Catch: java.lang.Exception -> L242
            java.lang.Integer r1 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L242
            int r0 = r0.indexOf(r1)     // Catch: java.lang.Exception -> L242
            java.lang.Object r12 = r12.get(r0)     // Catch: java.lang.Exception -> L242
            java.lang.Integer r12 = (java.lang.Integer) r12     // Catch: java.lang.Exception -> L242
            int r12 = r12.intValue()     // Catch: java.lang.Exception -> L242
            int r12 = r12 * 1000
            long r4 = (long) r12     // Catch: java.lang.Exception -> L242
            r7 = 0
            java.lang.String r8 = r10.j     // Catch: java.lang.Exception -> L242
            java.lang.String r9 = r10.V     // Catch: java.lang.Exception -> L242
            r3 = r10
            r6 = r11
            r3.a(r4, r6, r7, r8, r9)     // Catch: java.lang.Exception -> L242
        L242:
            com.mbridge.msdk.mbnative.controller.NativeController$e r12 = r10.o
            com.mbridge.msdk.c.d r0 = r10.W
            int r0 = r0.m()
            int r0 = r0 * 1000
            long r0 = (long) r0
            r12.sendEmptyMessageDelayed(r2, r0)
            java.util.List<java.lang.Integer> r12 = r10.a
            if (r12 == 0) goto L28a
            int r12 = r12.size()
            if (r12 <= 0) goto L28a
            java.util.Queue<java.lang.Integer> r12 = r10.l
            if (r12 == 0) goto L270
            int r12 = r12.size()
            if (r12 <= 0) goto L270
            java.lang.String r12 = com.mbridge.msdk.mbnative.controller.NativeController.e
            java.lang.String r0 = "setRequestQueue clear requestqueue"
            com.mbridge.msdk.foundation.tools.z.b(r12, r0)
            java.util.Queue<java.lang.Integer> r12 = r10.l
            r12.clear()
        L270:
            java.util.List<java.lang.Integer> r12 = r10.a
            java.util.Iterator r12 = r12.iterator()
        L276:
            boolean r0 = r12.hasNext()
            if (r0 == 0) goto L28a
            java.lang.Object r0 = r12.next()
            java.lang.Integer r0 = (java.lang.Integer) r0
            java.util.Queue<java.lang.Integer> r1 = r10.l
            if (r1 == 0) goto L276
            r1.add(r0)
            goto L276
        L28a:
            java.util.List<java.lang.Integer> r12 = r10.b
            if (r12 == 0) goto L2c8
            int r12 = r12.size()
            if (r12 <= 0) goto L2c8
            java.util.Queue<java.lang.Long> r12 = r10.m
            if (r12 == 0) goto L2a3
            int r12 = r12.size()
            if (r12 <= 0) goto L2a3
            java.util.Queue<java.lang.Long> r12 = r10.m
            r12.clear()
        L2a3:
            java.util.List<java.lang.Integer> r12 = r10.b
            java.util.Iterator r12 = r12.iterator()
        L2a9:
            boolean r0 = r12.hasNext()
            if (r0 == 0) goto L2c8
            java.lang.Object r0 = r12.next()
            java.lang.Integer r0 = (java.lang.Integer) r0
            java.util.Queue<java.lang.Long> r1 = r10.m
            if (r1 == 0) goto L2a9
            int r0 = r0.intValue()
            int r0 = r0 * 1000
            long r2 = (long) r0
            java.lang.Long r0 = java.lang.Long.valueOf(r2)
            r1.add(r0)
            goto L2a9
        L2c8:
            java.lang.String r12 = r10.V
            r10.b(r11, r12)
            goto L2d9
        L2ce:
            com.mbridge.msdk.mbnative.c.a r11 = r10.g
            if (r11 == 0) goto L2d9
            r10.y = r2
            java.lang.String r12 = "don't have sorceList"
            r11.onAdLoadError(r12)
        L2d9:
            return
    }

    public final void a(com.mbridge.msdk.out.Campaign r4, android.view.View r5) {
            r3 = this;
            int r0 = r4.getType()     // Catch: java.lang.Exception -> L68
            r1 = 3
            if (r0 != r1) goto L8
            goto L6f
        L8:
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r0 = r3.h     // Catch: java.lang.Exception -> L68
            if (r0 == 0) goto L13
            com.mbridge.msdk.click.b r0 = r3.r     // Catch: java.lang.Exception -> L68
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r3.h     // Catch: java.lang.Exception -> L68
            r0.a(r1)     // Catch: java.lang.Exception -> L68
        L13:
            int r0 = r4.getType()     // Catch: java.lang.Exception -> L68
            com.mbridge.msdk.mbnative.a.b r0 = com.mbridge.msdk.mbnative.a.f.a(r0)     // Catch: java.lang.Exception -> L68
            java.lang.String r1 = r3.j     // Catch: java.lang.Exception -> L68
            java.lang.String r2 = r3.V     // Catch: java.lang.Exception -> L68
            r0.a(r1, r4, r2)     // Catch: java.lang.Exception -> L68
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4     // Catch: java.lang.Exception -> L68
            java.lang.String r0 = r3.j     // Catch: java.lang.Exception -> L68
            java.lang.String r1 = "native"
            com.mbridge.msdk.foundation.same.a.d.a(r0, r4, r1)     // Catch: java.lang.Exception -> L68
            if (r4 == 0) goto L6f
            com.mbridge.msdk.mbnative.controller.NativeController$10 r0 = new com.mbridge.msdk.mbnative.controller.NativeController$10     // Catch: java.lang.Exception -> L68
            r0.<init>(r3, r4)     // Catch: java.lang.Exception -> L68
            java.lang.String r1 = "com.mbridge.msdk.nativex.view.MBMediaView"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L3c
            r3.a(r5, r0, r1)     // Catch: java.lang.Throwable -> L3c
            goto L40
        L3c:
            r1 = 0
            r3.a(r5, r0, r1)     // Catch: java.lang.Exception -> L68
        L40:
            boolean r0 = r4.isReport()     // Catch: java.lang.Exception -> L68
            if (r0 != 0) goto L6f
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Exception -> L68
            r0.<init>()     // Catch: java.lang.Exception -> L68
            r0.add(r5)     // Catch: java.lang.Exception -> L68
            r3.a(r4, r5, r0)     // Catch: java.lang.Exception -> L68
            java.lang.String r5 = com.mbridge.msdk.mbnative.controller.NativeController.e     // Catch: java.lang.Exception -> L68
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L68
            r0.<init>()     // Catch: java.lang.Exception -> L68
            java.lang.String r1 = "sendImpression"
            r0.append(r1)     // Catch: java.lang.Exception -> L68
            r0.append(r4)     // Catch: java.lang.Exception -> L68
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Exception -> L68
            com.mbridge.msdk.foundation.tools.z.b(r5, r4)     // Catch: java.lang.Exception -> L68
            goto L6f
        L68:
            java.lang.String r4 = com.mbridge.msdk.mbnative.controller.NativeController.e
            java.lang.String r5 = "registerview exception!"
            com.mbridge.msdk.foundation.tools.z.d(r4, r5)
        L6f:
            return
    }

    public final void a(com.mbridge.msdk.out.Campaign r5, android.view.View r6, java.util.List<android.view.View> r7) {
            r4 = this;
            int r0 = r5.getType()     // Catch: java.lang.Exception -> L9a
            r1 = 3
            if (r0 != r1) goto L9
            goto La1
        L9:
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r0 = r4.h     // Catch: java.lang.Exception -> L9a
            if (r0 == 0) goto L14
            com.mbridge.msdk.click.b r0 = r4.r     // Catch: java.lang.Exception -> L9a
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r4.h     // Catch: java.lang.Exception -> L9a
            r0.a(r1)     // Catch: java.lang.Exception -> L9a
        L14:
            int r0 = r5.getType()     // Catch: java.lang.Exception -> L9a
            com.mbridge.msdk.mbnative.a.b r0 = com.mbridge.msdk.mbnative.a.f.a(r0)     // Catch: java.lang.Exception -> L9a
            java.lang.String r1 = r4.j     // Catch: java.lang.Exception -> L9a
            java.lang.String r2 = r4.V     // Catch: java.lang.Exception -> L9a
            r0.a(r1, r5, r2)     // Catch: java.lang.Exception -> L9a
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5     // Catch: java.lang.Exception -> L9a
            r0 = 0
            java.lang.String r1 = "com.mbridge.msdk.nativex.view.MBMediaView"
            java.lang.Class r0 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L2d
            goto L34
        L2d:
            java.lang.String r1 = ""
            java.lang.String r2 = "MBMediaView can't found"
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)     // Catch: java.lang.Exception -> L9a
        L34:
            java.lang.String r1 = r4.j     // Catch: java.lang.Exception -> L9a
            java.lang.String r2 = "native"
            com.mbridge.msdk.foundation.same.a.d.a(r1, r5, r2)     // Catch: java.lang.Exception -> L9a
            if (r5 == 0) goto La1
            if (r6 == 0) goto L50
            if (r0 == 0) goto L48
            boolean r1 = r0.isInstance(r6)     // Catch: java.lang.Exception -> L9a
            if (r1 == 0) goto L48
            return
        L48:
            com.mbridge.msdk.mbnative.controller.NativeController$1 r1 = new com.mbridge.msdk.mbnative.controller.NativeController$1     // Catch: java.lang.Exception -> L9a
            r1.<init>(r4, r5)     // Catch: java.lang.Exception -> L9a
            r6.setOnClickListener(r1)     // Catch: java.lang.Exception -> L9a
        L50:
            if (r7 == 0) goto L7a
            int r1 = r7.size()     // Catch: java.lang.Exception -> L9a
            if (r1 <= 0) goto L7a
            java.util.Iterator r1 = r7.iterator()     // Catch: java.lang.Exception -> L9a
        L5c:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L9a
            if (r2 == 0) goto L7a
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L9a
            android.view.View r2 = (android.view.View) r2     // Catch: java.lang.Exception -> L9a
            if (r0 == 0) goto L71
            boolean r3 = r0.isInstance(r2)     // Catch: java.lang.Exception -> L9a
            if (r3 == 0) goto L71
            goto L7a
        L71:
            com.mbridge.msdk.mbnative.controller.NativeController$8 r3 = new com.mbridge.msdk.mbnative.controller.NativeController$8     // Catch: java.lang.Exception -> L9a
            r3.<init>(r4, r5)     // Catch: java.lang.Exception -> L9a
            r2.setOnClickListener(r3)     // Catch: java.lang.Exception -> L9a
            goto L5c
        L7a:
            boolean r0 = r5.isReport()     // Catch: java.lang.Exception -> L9a
            if (r0 != 0) goto La1
            r4.a(r5, r6, r7)     // Catch: java.lang.Exception -> L9a
            java.lang.String r6 = com.mbridge.msdk.mbnative.controller.NativeController.e     // Catch: java.lang.Exception -> L9a
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L9a
            r7.<init>()     // Catch: java.lang.Exception -> L9a
            java.lang.String r0 = "sendImpression"
            r7.append(r0)     // Catch: java.lang.Exception -> L9a
            r7.append(r5)     // Catch: java.lang.Exception -> L9a
            java.lang.String r5 = r7.toString()     // Catch: java.lang.Exception -> L9a
            android.util.Log.e(r6, r5)     // Catch: java.lang.Exception -> L9a
            goto La1
        L9a:
            java.lang.String r5 = com.mbridge.msdk.mbnative.controller.NativeController.e
            java.lang.String r6 = "registerview exception!"
            com.mbridge.msdk.foundation.tools.z.d(r5, r6)
        La1:
            return
    }

    public final void a(java.lang.String r4, int r5, java.lang.String r6) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.mbnative.controller.NativeController.e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "request error msg = "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            java.util.Queue<java.lang.Integer> r0 = r3.l
            if (r0 == 0) goto L20
            int r0 = r0.size()
            if (r0 <= 0) goto L24
        L20:
            java.util.Queue<java.lang.Integer> r0 = r3.l
            if (r0 != 0) goto L4b
        L24:
            com.mbridge.msdk.mbnative.c.a r5 = r3.g
            if (r5 == 0) goto L55
            boolean r6 = r3.y
            if (r6 != 0) goto L55
            r6 = 1
            r3.y = r6
            r5.onAdLoadError(r4)
            java.lang.String r4 = com.mbridge.msdk.mbnative.controller.NativeController.e
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "requestError return listener isReturn = "
            r5.append(r6)
            boolean r6 = r3.y
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            com.mbridge.msdk.foundation.tools.z.b(r4, r5)
            goto L55
        L4b:
            java.lang.String r4 = com.mbridge.msdk.mbnative.controller.NativeController.e
            java.lang.String r0 = "request queue in request error"
            com.mbridge.msdk.foundation.tools.z.b(r4, r0)
            r3.b(r5, r6)
        L55:
            return
    }

    public final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.T
            return r0
    }

    public final java.util.List<com.mbridge.msdk.out.Campaign> b(java.lang.String r7, int r8, java.lang.String r9) {
            r6 = this;
            java.util.List<java.lang.Integer> r8 = r6.a
            r9 = 0
            if (r8 == 0) goto Lbc
            java.util.ArrayList r8 = new java.util.ArrayList
            java.util.List<java.lang.Integer> r0 = r6.a
            r8.<init>(r0)
            r0 = 0
            r1 = r0
        Le:
            int r2 = r8.size()
            r3 = 2
            java.lang.String r4 = "native_info"
            r5 = 1
            if (r1 >= r2) goto L67
            java.lang.Object r2 = r8.get(r1)
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            com.mbridge.msdk.mbnative.a.b r2 = com.mbridge.msdk.mbnative.a.f.a(r2)
            if (r2 == 0) goto L64
            java.lang.Object r9 = r8.get(r1)
            java.lang.Integer r9 = (java.lang.Integer) r9
            int r9 = r9.intValue()
            if (r9 == r5) goto L40
            java.lang.Object r9 = r8.get(r1)
            java.lang.Integer r9 = (java.lang.Integer) r9
            int r9 = r9.intValue()
            if (r9 != r3) goto L4b
        L40:
            java.util.Map<java.lang.String, java.lang.Object> r9 = r6.d
            boolean r9 = r9.containsKey(r4)
            if (r9 == 0) goto L4b
            int r9 = r6.M
            goto L4d
        L4b:
            int r9 = r6.s
        L4d:
            java.lang.Object r9 = r2.b(r7, r9)
            java.util.List r9 = (java.util.List) r9
            java.lang.Object r2 = r8.get(r1)
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            java.util.List r9 = r6.a(r2, r9)
            if (r9 == 0) goto L64
            goto L67
        L64:
            int r1 = r1 + 1
            goto Le
        L67:
            if (r9 != 0) goto Lbc
        L69:
            int r1 = r8.size()
            if (r0 >= r1) goto Lbc
            java.lang.Object r9 = r8.get(r0)
            java.lang.Integer r9 = (java.lang.Integer) r9
            int r9 = r9.intValue()
            com.mbridge.msdk.mbnative.a.b r9 = com.mbridge.msdk.mbnative.a.f.a(r9)
            java.lang.Object r1 = r8.get(r0)
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            if (r1 == r5) goto L95
            java.lang.Object r1 = r8.get(r0)
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            if (r1 != r3) goto La0
        L95:
            java.util.Map<java.lang.String, java.lang.Object> r1 = r6.d
            boolean r1 = r1.containsKey(r4)
            if (r1 == 0) goto La0
            int r1 = r6.M
            goto La2
        La0:
            int r1 = r6.s
        La2:
            java.lang.Object r9 = r9.a(r7, r1)
            java.util.List r9 = (java.util.List) r9
            java.lang.Object r1 = r8.get(r0)
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            java.util.List r9 = r6.a(r1, r9)
            if (r9 == 0) goto Lb9
            goto Lbc
        Lb9:
            int r0 = r0 + 1
            goto L69
        Lbc:
            java.util.List r7 = r6.d(r9)
            return r7
    }

    public final void b(com.mbridge.msdk.out.Campaign r2, android.view.View r3) {
            r1 = this;
            r0 = 0
            r1.b(r2, r3, r0)
            return
    }

    public final void b(com.mbridge.msdk.out.Campaign r2, android.view.View r3, java.util.List<android.view.View> r4) {
            r1 = this;
            if (r2 == 0) goto L35
            int r2 = r2.getType()
            r0 = 1
            if (r2 == r0) goto Ld
            r0 = 2
            if (r2 == r0) goto Ld
            goto L35
        Ld:
            r2 = 0
            java.lang.String r0 = "com.mbridge.msdk.nativex.view.MBMediaView"
            java.lang.Class r2 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L14
        L14:
            if (r4 == 0) goto L30
            int r0 = r4.size()
            if (r0 <= 0) goto L30
            java.util.Iterator r3 = r4.iterator()
        L20:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L35
            java.lang.Object r4 = r3.next()
            android.view.View r4 = (android.view.View) r4
            r1.a(r4, r2)
            goto L20
        L30:
            if (r3 == 0) goto L35
            r1.a(r3, r2)
        L35:
            return
    }
}
