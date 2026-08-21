package com.mbridge.msdk.mbnative.controller;

public class b {
    private static final java.lang.String d = null;
    private static java.util.Map<java.lang.String, java.util.Map<java.lang.Long, java.lang.Object>> e;
    private static java.util.Map<java.lang.String, java.lang.Boolean> f;
    private static java.util.Map<java.lang.String, com.mbridge.msdk.foundation.entity.m> g;
    private static java.util.Map<java.lang.String, java.lang.Integer> h;
    private static java.util.Map<java.lang.String, java.lang.Integer> i;
    private static com.mbridge.msdk.mbnative.controller.b j;
    private static int w;
    private static int x;
    private int A;
    private com.mbridge.msdk.foundation.same.e.b B;
    private java.util.Map<java.lang.String, java.lang.Boolean> C;
    java.util.Queue<java.lang.Integer> a;
    java.util.Queue<java.lang.Long> b;
    protected java.util.List<java.lang.Integer> c;
    private com.mbridge.msdk.c.c k;
    private com.mbridge.msdk.click.b l;
    private com.mbridge.msdk.c.d m;
    private java.lang.String n;
    private android.os.Handler o;
    private int p;
    private java.lang.String q;
    private com.mbridge.msdk.foundation.db.i r;
    private java.util.Map<java.lang.String, java.lang.Object> s;
    private java.util.List<java.lang.Integer> t;
    private java.util.List<java.lang.Integer> u;
    private boolean v;
    private boolean y;
    private int z;





    public class a extends com.mbridge.msdk.mbnative.e.a.b implements com.mbridge.msdk.foundation.same.e.d {
        final com.mbridge.msdk.mbnative.controller.b a;
        private int b;
        private int c;
        private int d;
        private int e;
        private int f;
        private com.mbridge.msdk.out.AdMobClickListener g;
        private java.util.List<java.lang.String> h;
        private boolean i;
        private java.lang.Runnable j;
        private boolean k;
        private com.mbridge.msdk.b.a.a l;




        public a(com.mbridge.msdk.mbnative.controller.b r1, int r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r1 = 0
                r0.h = r1
                r1 = 0
                r0.i = r1
                r1 = 1
                r0.k = r1
                r0.b = r2
                return
        }

        static int a(com.mbridge.msdk.mbnative.controller.b.a r0, int r1) {
                r0.c = r1
                return r1
        }

        static java.lang.Runnable a(com.mbridge.msdk.mbnative.controller.b.a r0) {
                java.lang.Runnable r0 = r0.j
                return r0
        }

        static int b(com.mbridge.msdk.mbnative.controller.b.a r0) {
                int r0 = r0.f
                return r0
        }

        static int c(com.mbridge.msdk.mbnative.controller.b.a r0) {
                int r0 = r0.e
                return r0
        }

        static int d(com.mbridge.msdk.mbnative.controller.b.a r0) {
                int r0 = r0.d
                return r0
        }

        static int e(com.mbridge.msdk.mbnative.controller.b.a r0) {
                int r0 = r0.c
                return r0
        }

        static int f(com.mbridge.msdk.mbnative.controller.b.a r0) {
                int r0 = r0.b
                return r0
        }

        static boolean g(com.mbridge.msdk.mbnative.controller.b.a r0) {
                boolean r0 = r0.i
                return r0
        }

        static boolean h(com.mbridge.msdk.mbnative.controller.b.a r0) {
                boolean r0 = r0.k
                return r0
        }

        static com.mbridge.msdk.b.a.a i(com.mbridge.msdk.mbnative.controller.b.a r0) {
                com.mbridge.msdk.b.a.a r0 = r0.l
                return r0
        }

        static com.mbridge.msdk.out.AdMobClickListener j(com.mbridge.msdk.mbnative.controller.b.a r0) {
                com.mbridge.msdk.out.AdMobClickListener r0 = r0.g
                return r0
        }

        public final void a(int r1) {
                r0 = this;
                r0.f = r1
                return
        }

        @Override
        public final void a(int r3, java.lang.String r4) {
                r2 = this;
                java.lang.Thread r0 = new java.lang.Thread
                com.mbridge.msdk.mbnative.controller.b$a$2 r1 = new com.mbridge.msdk.mbnative.controller.b$a$2
                r1.<init>(r2, r4, r3)
                r0.<init>(r1)
                com.mbridge.msdk.mbnative.controller.b r3 = r2.a
                r3.a(r0)
                return
        }

        public final void a(com.mbridge.msdk.b.a.a r1) {
                r0 = this;
                r0.l = r1
                return
        }

        public final void a(com.mbridge.msdk.out.AdMobClickListener r1) {
                r0 = this;
                r0.g = r1
                return
        }

        public final void a(java.lang.Runnable r1) {
                r0 = this;
                r0.j = r1
                return
        }

        public final void a(java.util.List<java.lang.String> r1) {
                r0 = this;
                r0.h = r1
                return
        }

        @Override
        public final void a(java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r4, com.mbridge.msdk.foundation.entity.CampaignUnit r5) {
                r3 = this;
                com.mbridge.msdk.mbnative.controller.b r4 = r3.a
                r0 = 1
                com.mbridge.msdk.mbnative.controller.b.a(r4, r0)
                com.mbridge.msdk.mbnative.controller.b r4 = r3.a
                com.mbridge.msdk.b.a.a r1 = r3.l
                r2 = 0
                r4.a(r0, r1, r2)
                java.lang.Thread r4 = new java.lang.Thread
                com.mbridge.msdk.mbnative.controller.b$a$1 r0 = new com.mbridge.msdk.mbnative.controller.b$a$1
                r0.<init>(r3, r5)
                r4.<init>(r0)
                com.mbridge.msdk.mbnative.controller.b r5 = r3.a
                r5.a(r4)
                return
        }

        @Override
        public final void a(boolean r1) {
                r0 = this;
                r0.i = r1
                return
        }

        public final void b(int r1) {
                r0 = this;
                r0.d = r1
                return
        }

        @Override
        public final void b(java.util.List<com.mbridge.msdk.out.Frame> r3) {
                r2 = this;
                java.lang.Thread r0 = new java.lang.Thread
                com.mbridge.msdk.mbnative.controller.b$a$3 r1 = new com.mbridge.msdk.mbnative.controller.b$a$3
                r1.<init>(r2, r3)
                r0.<init>(r1)
                com.mbridge.msdk.mbnative.controller.b r3 = r2.a
                r3.a(r0)
                return
        }

        public final void b(boolean r1) {
                r0 = this;
                r0.k = r1
                return
        }

        public final void c(int r1) {
                r0 = this;
                r0.e = r1
                return
        }

        public final void d(int r1) {
                r0 = this;
                r0.c = r1
                return
        }
    }

    public class b implements java.lang.Runnable {
        final com.mbridge.msdk.mbnative.controller.b a;
        private int b;
        private com.mbridge.msdk.foundation.same.e.d c;
        private int d;
        private java.lang.String e;
        private java.lang.String f;
        private com.mbridge.msdk.b.a.a g;
        private boolean h;
        private com.mbridge.msdk.out.AdMobClickListener i;

        public b(com.mbridge.msdk.mbnative.controller.b r1, int r2, com.mbridge.msdk.foundation.same.e.d r3, int r4, java.lang.String r5, java.lang.String r6) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r1 = 0
                r0.h = r1
                r0.b = r2
                r0.c = r3
                r0.d = r4
                r0.e = r5
                r0.f = r6
                return
        }

        public final void a(com.mbridge.msdk.b.a.a r1) {
                r0 = this;
                r0.g = r1
                return
        }

        public final void a(com.mbridge.msdk.out.AdMobClickListener r1) {
                r0 = this;
                r0.i = r1
                return
        }

        public final void a(java.lang.String r1) {
                r0 = this;
                r0.e = r1
                return
        }

        public final void a(boolean r1) {
                r0 = this;
                r0.h = r1
                return
        }

        @Override
        public final void run() {
                r9 = this;
                java.lang.String r0 = com.mbridge.msdk.mbnative.controller.b.f()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "cancel task adsource is = "
                r1.append(r2)
                int r2 = r9.b
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                com.mbridge.msdk.foundation.tools.z.b(r0, r1)
                com.mbridge.msdk.foundation.same.e.d r0 = r9.c
                r1 = 1
                r0.a(r1)
                int r0 = r9.b
                if (r0 == r1) goto L3a
                r1 = 2
                if (r0 == r1) goto L28
                goto L58
            L28:
                com.mbridge.msdk.mbnative.controller.b r2 = r9.a
                int r4 = r9.d
                java.lang.String r5 = r9.e
                java.lang.String r6 = r9.f
                com.mbridge.msdk.b.a.a r7 = r9.g
                com.mbridge.msdk.out.AdMobClickListener r8 = r9.i
                java.lang.String r3 = "REQUEST_TIMEOUT"
                r2.a(r3, r4, r5, r6, r7, r8)
                goto L58
            L3a:
                com.mbridge.msdk.mbnative.controller.b r0 = r9.a
                com.mbridge.msdk.mbnative.controller.b.a(r0, r1)
                boolean r0 = r9.h
                if (r0 != 0) goto L47
                int r0 = r9.d
                if (r0 != r1) goto L58
            L47:
                com.mbridge.msdk.mbnative.controller.b r2 = r9.a
                int r4 = r9.d
                java.lang.String r5 = r9.e
                java.lang.String r6 = r9.f
                com.mbridge.msdk.b.a.a r7 = r9.g
                com.mbridge.msdk.out.AdMobClickListener r8 = r9.i
                java.lang.String r3 = "REQUEST_TIMEOUT"
                r2.a(r3, r4, r5, r6, r7, r8)
            L58:
                return
        }
    }

    static {
            java.lang.Class<com.mbridge.msdk.mbnative.controller.b> r0 = com.mbridge.msdk.mbnative.controller.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.mbnative.controller.b.d = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.mbnative.controller.b.e = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.mbnative.controller.b.f = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.mbnative.controller.b.g = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.mbnative.controller.b.h = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.mbnative.controller.b.i = r0
            r0 = 0
            com.mbridge.msdk.mbnative.controller.b.j = r0
            r0 = -1
            com.mbridge.msdk.mbnative.controller.b.w = r0
            r0 = -2
            com.mbridge.msdk.mbnative.controller.b.x = r0
            return
    }

    public b() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            r2.b = r0
            r0 = 0
            r2.p = r0
            java.lang.String r0 = ""
            r2.q = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.C = r0
            com.mbridge.msdk.foundation.same.e.b r0 = new com.mbridge.msdk.foundation.same.e.b
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            r0.<init>(r1)
            r2.B = r0
            android.os.Looper r0 = android.os.Looper.myLooper()
            if (r0 != 0) goto L2e
            android.os.Looper.prepare()
        L2e:
            com.mbridge.msdk.mbnative.controller.b$1 r0 = new com.mbridge.msdk.mbnative.controller.b$1
            r0.<init>(r2)
            r2.o = r0
            return
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
            java.lang.String r1 = com.mbridge.msdk.mbnative.controller.b.d
            java.lang.String r6 = com.mbridge.msdk.mbnative.b.a.a(r6)
            com.mbridge.msdk.foundation.tools.z.d(r1, r6)
        L39:
            return r0
    }

    static android.os.Handler a(com.mbridge.msdk.mbnative.controller.b r0) {
            android.os.Handler r0 = r0.o
            return r0
    }

    static com.mbridge.msdk.foundation.db.i a(com.mbridge.msdk.mbnative.controller.b r0, com.mbridge.msdk.foundation.db.i r1) {
            r0.r = r1
            return r1
    }

    static java.lang.String a(com.mbridge.msdk.mbnative.controller.b r0, java.lang.String r1) {
            r0.q = r1
            return r1
    }

    public static java.util.Map<java.lang.String, java.util.Map<java.lang.Long, java.lang.Object>> a() {
            java.util.Map<java.lang.String, java.util.Map<java.lang.Long, java.lang.Object>> r0 = com.mbridge.msdk.mbnative.controller.b.e
            return r0
    }

    private void a(int r18, long r19, int r21, java.lang.String r22, java.lang.String r23, boolean r24, com.mbridge.msdk.b.a.a r25, com.mbridge.msdk.out.AdMobClickListener r26) {
            r17 = this;
            r13 = r17
            r14 = r22
            r15 = r24
            java.util.UUID r12 = com.mbridge.msdk.foundation.tools.v.G()
            java.lang.String r0 = "_post"
            java.lang.String r1 = "_ttc"
            r2 = 0
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            java.lang.String r3 = "_"
            if (r12 != 0) goto L4c
            java.util.Map<java.lang.String, java.lang.Boolean> r4 = r13.C
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r14)
            r5.append(r3)
            r5.append(r15)
            r5.append(r1)
            java.lang.String r1 = r5.toString()
            r4.put(r1, r2)
            java.util.Map<java.lang.String, java.lang.Boolean> r1 = r13.C
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r14)
            r4.append(r3)
            r4.append(r15)
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            r1.put(r0, r2)
            goto L86
        L4c:
            java.util.Map<java.lang.String, java.lang.Boolean> r4 = r13.C
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r12)
            r5.append(r14)
            r5.append(r3)
            r5.append(r15)
            r5.append(r1)
            java.lang.String r1 = r5.toString()
            r4.put(r1, r2)
            java.util.Map<java.lang.String, java.lang.Boolean> r1 = r13.C
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r12)
            r4.append(r14)
            r4.append(r3)
            r4.append(r15)
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            r1.put(r0, r2)
        L86:
            com.mbridge.msdk.mbnative.controller.b$2 r11 = new com.mbridge.msdk.mbnative.controller.b$2
            r11.<init>(r13, r14, r12, r15)
            com.mbridge.msdk.mbnative.controller.b$3 r10 = new com.mbridge.msdk.mbnative.controller.b$3
            r0 = r10
            r1 = r17
            r2 = r22
            r3 = r24
            r4 = r12
            r5 = r11
            r6 = r18
            r7 = r19
            r9 = r21
            r14 = r10
            r10 = r23
            r15 = r11
            r11 = r25
            r16 = r12
            r12 = r26
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r9, r10, r11, r12)
            android.os.Handler r0 = r13.o
            r1 = 90000(0x15f90, double:4.4466E-319)
            r0.postDelayed(r14, r1)
            com.mbridge.msdk.mbnative.controller.b$4 r12 = new com.mbridge.msdk.mbnative.controller.b$4
            r0 = r12
            r1 = r17
            r2 = r22
            r4 = r16
            r5 = r18
            r6 = r19
            r8 = r21
            r9 = r23
            r10 = r25
            r11 = r26
            r0.<init>(r1, r2, r3, r4, r5, r6, r8, r9, r10, r11)
            com.mbridge.msdk.foundation.same.e.b r0 = r13.B
            if (r0 != 0) goto Ldc
            com.mbridge.msdk.foundation.same.e.b r0 = new com.mbridge.msdk.foundation.same.e.b
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            r0.<init>(r1)
            r13.B = r0
        Ldc:
            com.mbridge.msdk.foundation.same.e.b r0 = r13.B
            if (r0 == 0) goto Le3
            r0.a(r15, r12)
        Le3:
            return
    }

    private void a(int r13, long r14, java.lang.String r16, java.lang.String r17, java.util.Map<java.lang.String, java.lang.Object> r18, int r19, com.mbridge.msdk.c.d r20, com.mbridge.msdk.b.a.a r21, com.mbridge.msdk.out.AdMobClickListener r22) {
            r12 = this;
            r11 = r12
            r1 = r13
            r0 = 1
            if (r1 == r0) goto L24
            com.mbridge.msdk.mbnative.a.b r2 = com.mbridge.msdk.mbnative.a.f.a(r13)
            if (r2 == 0) goto L24
            int r3 = r11.A
            r6 = r16
            java.lang.Object r2 = r2.b(r6, r3)
            java.util.List r2 = (java.util.List) r2
            if (r2 == 0) goto L26
            int r2 = r2.size()
            if (r2 <= 0) goto L26
            r1 = 0
            r8 = r21
            r12.a(r0, r8, r1)
            return
        L24:
            r6 = r16
        L26:
            r8 = r21
            if (r1 == r0) goto L55
            r0 = 2
            if (r1 == r0) goto L41
            r9 = 0
            r0 = r12
            r1 = r13
            r2 = r14
            r4 = r19
            r5 = r20
            r6 = r16
            r7 = r17
            r8 = r21
            r10 = r22
            r0.a(r1, r2, r4, r5, r6, r7, r8, r9, r10)
            goto L66
        L41:
            r1 = 2
            r9 = 0
            r0 = r12
            r2 = r14
            r4 = r19
            r5 = r20
            r6 = r16
            r7 = r17
            r8 = r21
            r10 = r22
            r0.a(r1, r2, r4, r5, r6, r7, r8, r9, r10)
            goto L66
        L55:
            r7 = 1
            r0 = r12
            r1 = r13
            r2 = r14
            r4 = r19
            r5 = r16
            r6 = r17
            r8 = r21
            r9 = r22
            r0.a(r1, r2, r4, r5, r6, r7, r8, r9)
        L66:
            return
    }

    private void a(int r13, com.mbridge.msdk.c.d r14, java.lang.String r15, java.lang.String r16, com.mbridge.msdk.b.a.a r17, com.mbridge.msdk.out.AdMobClickListener r18) {
            r12 = this;
            r11 = r12
            java.util.Queue<java.lang.Integer> r0 = r11.a
            if (r0 == 0) goto L5f
            int r0 = r0.size()
            if (r0 <= 0) goto L5f
            java.util.Queue<java.lang.Integer> r0 = r11.a     // Catch: java.lang.Throwable -> L58
            java.lang.Object r0 = r0.poll()     // Catch: java.lang.Throwable -> L58
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Throwable -> L58
            int r1 = r0.intValue()     // Catch: java.lang.Throwable -> L58
            int r0 = com.mbridge.msdk.MBridgeConstans.REQUEST_TIME_OUT     // Catch: java.lang.Throwable -> L58
            long r2 = (long) r0     // Catch: java.lang.Throwable -> L58
            java.util.Queue<java.lang.Long> r0 = r11.b     // Catch: java.lang.Throwable -> L58
            if (r0 == 0) goto L32
            java.util.Queue<java.lang.Long> r0 = r11.b     // Catch: java.lang.Throwable -> L58
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L58
            if (r0 <= 0) goto L32
            java.util.Queue<java.lang.Long> r0 = r11.b     // Catch: java.lang.Throwable -> L58
            java.lang.Object r0 = r0.poll()     // Catch: java.lang.Throwable -> L58
            java.lang.Long r0 = (java.lang.Long) r0     // Catch: java.lang.Throwable -> L58
            long r2 = r0.longValue()     // Catch: java.lang.Throwable -> L58
        L32:
            java.lang.String r0 = com.mbridge.msdk.mbnative.controller.b.d     // Catch: java.lang.Throwable -> L58
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L58
            r4.<init>()     // Catch: java.lang.Throwable -> L58
            java.lang.String r5 = "preload start queue adsource = "
            r4.append(r5)     // Catch: java.lang.Throwable -> L58
            r4.append(r1)     // Catch: java.lang.Throwable -> L58
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L58
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)     // Catch: java.lang.Throwable -> L58
            java.util.Map<java.lang.String, java.lang.Object> r6 = r11.s     // Catch: java.lang.Throwable -> L58
            r0 = r12
            r4 = r15
            r5 = r16
            r7 = r13
            r8 = r14
            r9 = r17
            r10 = r18
            r0.a(r1, r2, r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L58
            goto L5f
        L58:
            java.lang.String r0 = com.mbridge.msdk.mbnative.controller.b.d
            java.lang.String r1 = "queue poll exception"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L5f:
            return
    }

    public static void a(int r5, java.lang.String r6) {
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.entity.m> r0 = com.mbridge.msdk.mbnative.controller.b.g
            boolean r0 = r0.containsKey(r6)
            if (r0 == 0) goto L11
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.entity.m> r0 = com.mbridge.msdk.mbnative.controller.b.g
            java.lang.Object r0 = r0.get(r6)
            com.mbridge.msdk.foundation.entity.m r0 = (com.mbridge.msdk.foundation.entity.m) r0
            goto L16
        L11:
            com.mbridge.msdk.foundation.entity.m r0 = new com.mbridge.msdk.foundation.entity.m
            r0.<init>()
        L16:
            java.util.Map<java.lang.String, java.lang.Integer> r1 = com.mbridge.msdk.mbnative.controller.b.h
            java.lang.Object r1 = r1.get(r6)
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            java.util.Map<java.lang.String, java.lang.Integer> r2 = com.mbridge.msdk.mbnative.controller.b.i
            boolean r2 = r2.containsKey(r6)
            r3 = 1
            if (r2 == 0) goto L38
            java.util.Map<java.lang.String, java.lang.Integer> r2 = com.mbridge.msdk.mbnative.controller.b.i
            java.lang.Object r2 = r2.get(r6)
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            goto L39
        L38:
            r2 = r3
        L39:
            r4 = 0
            if (r5 == r3) goto L4d
            r3 = 2
            if (r5 == r3) goto L40
            goto L59
        L40:
            int r5 = r0.a()
            int r1 = r1 + r5
            if (r1 <= r2) goto L48
            goto L49
        L48:
            r4 = r1
        L49:
            r0.a(r4)
            goto L59
        L4d:
            int r5 = r0.b()
            int r1 = r1 + r5
            if (r1 <= r2) goto L55
            goto L56
        L55:
            r4 = r1
        L56:
            r0.b(r4)
        L59:
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.entity.m> r5 = com.mbridge.msdk.mbnative.controller.b.g
            r5.put(r6, r0)
            return
    }

    static void a(com.mbridge.msdk.mbnative.controller.b r11, java.util.List r12, java.lang.String r13) {
            java.lang.String r11 = "com.mbridge.msdk.videocommon.download.b"
            if (r12 == 0) goto L89
            int r0 = r12.size()     // Catch: java.lang.Exception -> L91
            if (r0 <= 0) goto L89
            java.lang.String r0 = "com.mbridge.msdk.nativex.view.MBMediaView"
            java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L81
            java.lang.Class.forName(r11)     // Catch: java.lang.Exception -> L81
            java.lang.Class r11 = java.lang.Class.forName(r11)     // Catch: java.lang.Exception -> L81
            java.lang.String r0 = "getInstance"
            r1 = 0
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L81
            java.lang.reflect.Method r0 = r11.getMethod(r0, r2)     // Catch: java.lang.Exception -> L81
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L81
            r3 = 0
            java.lang.Object r0 = r0.invoke(r3, r2)     // Catch: java.lang.Exception -> L81
            if (r0 == 0) goto L9b
            java.lang.String r2 = "com.mbridge.msdk.videocommon.listener.a"
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Exception -> L81
            java.lang.String r4 = "createUnitCache"
            r5 = 5
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.Exception -> L81
            java.lang.Class<android.content.Context> r7 = android.content.Context.class
            r6[r1] = r7     // Catch: java.lang.Exception -> L81
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r8 = 1
            r6[r8] = r7     // Catch: java.lang.Exception -> L81
            java.lang.Class<java.util.concurrent.CopyOnWriteArrayList> r7 = java.util.concurrent.CopyOnWriteArrayList.class
            r9 = 2
            r6[r9] = r7     // Catch: java.lang.Exception -> L81
            java.lang.Class r7 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L81
            r10 = 3
            r6[r10] = r7     // Catch: java.lang.Exception -> L81
            r7 = 4
            r6[r7] = r2     // Catch: java.lang.Exception -> L81
            java.lang.reflect.Method r2 = r11.getMethod(r4, r6)     // Catch: java.lang.Exception -> L81
            java.lang.Object[] r4 = new java.lang.Object[r5]     // Catch: java.lang.Exception -> L81
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L81
            android.content.Context r5 = r5.j()     // Catch: java.lang.Exception -> L81
            r4[r1] = r5     // Catch: java.lang.Exception -> L81
            r4[r8] = r13     // Catch: java.lang.Exception -> L81
            java.util.concurrent.CopyOnWriteArrayList r5 = new java.util.concurrent.CopyOnWriteArrayList     // Catch: java.lang.Exception -> L81
            r5.<init>(r12)     // Catch: java.lang.Exception -> L81
            r4[r9] = r5     // Catch: java.lang.Exception -> L81
            java.lang.Integer r12 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Exception -> L81
            r4[r10] = r12     // Catch: java.lang.Exception -> L81
            r4[r7] = r3     // Catch: java.lang.Exception -> L81
            r2.invoke(r0, r4)     // Catch: java.lang.Exception -> L81
            java.lang.String r12 = "load"
            java.lang.Class[] r2 = new java.lang.Class[r8]     // Catch: java.lang.Exception -> L81
            java.lang.Class<java.lang.String> r3 = java.lang.String.class
            r2[r1] = r3     // Catch: java.lang.Exception -> L81
            java.lang.reflect.Method r11 = r11.getMethod(r12, r2)     // Catch: java.lang.Exception -> L81
            java.lang.Object[] r12 = new java.lang.Object[r8]     // Catch: java.lang.Exception -> L81
            r12[r1] = r13     // Catch: java.lang.Exception -> L81
            r11.invoke(r0, r12)     // Catch: java.lang.Exception -> L81
            goto L9b
        L81:
            java.lang.String r11 = com.mbridge.msdk.mbnative.controller.b.d     // Catch: java.lang.Exception -> L91
            java.lang.String r12 = "please import the videocommon aar"
            com.mbridge.msdk.foundation.tools.z.d(r11, r12)     // Catch: java.lang.Exception -> L91
            goto L9b
        L89:
            java.lang.String r11 = com.mbridge.msdk.mbnative.controller.b.d     // Catch: java.lang.Exception -> L91
            java.lang.String r12 = "onload 不用下载视频素材 size为0"
            com.mbridge.msdk.foundation.tools.z.b(r11, r12)     // Catch: java.lang.Exception -> L91
            goto L9b
        L91:
            r11 = move-exception
            java.lang.String r12 = com.mbridge.msdk.mbnative.controller.b.d
            java.lang.String r11 = com.mbridge.msdk.mbnative.b.a.a(r11)
            com.mbridge.msdk.foundation.tools.z.d(r12, r11)
        L9b:
            return
    }

    static boolean a(com.mbridge.msdk.mbnative.controller.b r0, boolean r1) {
            r0.y = r1
            return r1
    }

    public static java.util.Map<java.lang.String, java.lang.Boolean> b() {
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = com.mbridge.msdk.mbnative.controller.b.f
            return r0
    }

    public static void b(int r3, java.lang.String r4) {
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.entity.m> r0 = com.mbridge.msdk.mbnative.controller.b.g
            boolean r0 = r0.containsKey(r4)
            if (r0 == 0) goto L24
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.entity.m> r0 = com.mbridge.msdk.mbnative.controller.b.g
            java.lang.Object r0 = r0.get(r4)
            com.mbridge.msdk.foundation.entity.m r0 = (com.mbridge.msdk.foundation.entity.m) r0
            r1 = 1
            r2 = 0
            if (r3 == r1) goto L1c
            r1 = 2
            if (r3 == r1) goto L18
            goto L1f
        L18:
            r0.a(r2)
            goto L1f
        L1c:
            r0.b(r2)
        L1f:
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.entity.m> r3 = com.mbridge.msdk.mbnative.controller.b.g
            r3.put(r4, r0)
        L24:
            return
    }

    static boolean b(com.mbridge.msdk.mbnative.controller.b r0) {
            boolean r0 = r0.v
            return r0
    }

    static com.mbridge.msdk.foundation.db.i c(com.mbridge.msdk.mbnative.controller.b r0) {
            com.mbridge.msdk.foundation.db.i r0 = r0.r
            return r0
    }

    public static java.util.Map<java.lang.String, com.mbridge.msdk.foundation.entity.m> c() {
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.entity.m> r0 = com.mbridge.msdk.mbnative.controller.b.g
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.Integer> d() {
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.mbnative.controller.b.h
            return r0
    }

    static java.util.Map d(com.mbridge.msdk.mbnative.controller.b r0) {
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r0.C
            return r0
    }

    static com.mbridge.msdk.foundation.same.e.b e(com.mbridge.msdk.mbnative.controller.b r0) {
            com.mbridge.msdk.foundation.same.e.b r0 = r0.B
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.Integer> e() {
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.mbnative.controller.b.i
            return r0
    }

    static com.mbridge.msdk.c.d f(com.mbridge.msdk.mbnative.controller.b r0) {
            com.mbridge.msdk.c.d r0 = r0.m
            return r0
    }

    static java.lang.String f() {
            java.lang.String r0 = com.mbridge.msdk.mbnative.controller.b.d
            return r0
    }

    static java.util.Map g() {
            java.util.Map<java.lang.String, java.util.Map<java.lang.Long, java.lang.Object>> r0 = com.mbridge.msdk.mbnative.controller.b.e
            return r0
    }

    static java.util.Map h() {
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.mbnative.controller.b.h
            return r0
    }

    public final void a(int r25, long r26, int r28, com.mbridge.msdk.c.d r29, java.lang.String r30, java.lang.String r31, com.mbridge.msdk.b.a.a r32, boolean r33, com.mbridge.msdk.out.AdMobClickListener r34) {
            r24 = this;
            r8 = r24
            r1 = r25
            r9 = r28
            r10 = r30
            r7 = r31
            r11 = r32
            r12 = r33
            r13 = r34
            java.lang.String r2 = "native_video_height"
            java.lang.String r3 = "native_video_width"
            java.lang.String r0 = "app_key"
            java.lang.String r4 = "1"
            java.lang.String r5 = "native_info"
            java.lang.String r6 = "key_word"
            com.mbridge.msdk.foundation.controller.a r14 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L4e8
            android.content.Context r14 = r14.j()     // Catch: java.lang.Exception -> L4e8
            com.mbridge.msdk.foundation.db.i r14 = com.mbridge.msdk.foundation.db.i.a(r14)     // Catch: java.lang.Exception -> L4e8
            com.mbridge.msdk.foundation.db.f r14 = com.mbridge.msdk.foundation.db.f.a(r14)     // Catch: java.lang.Exception -> L4e8
            r14.a()     // Catch: java.lang.Exception -> L4e8
            com.mbridge.msdk.c.d r14 = r8.m     // Catch: java.lang.Exception -> L4e8
            int r14 = r14.p()     // Catch: java.lang.Exception -> L4e8
            com.mbridge.msdk.c.d r15 = r8.m     // Catch: java.lang.Exception -> L4e8
            int r15 = r15.q()     // Catch: java.lang.Exception -> L4e8
            java.lang.String r13 = com.mbridge.msdk.mbnative.controller.b.d     // Catch: java.lang.Exception -> L4e8
            r29 = r15
            java.lang.String r15 = "START LOAD MB MVNATIVE"
            com.mbridge.msdk.foundation.tools.z.b(r13, r15)     // Catch: java.lang.Exception -> L4e8
            com.mbridge.msdk.mbnative.e.a.a r13 = new com.mbridge.msdk.mbnative.e.a.a     // Catch: java.lang.Exception -> L4e8
            com.mbridge.msdk.foundation.controller.a r15 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L4e8
            android.content.Context r15 = r15.j()     // Catch: java.lang.Exception -> L4e8
            r13.<init>(r15)     // Catch: java.lang.Exception -> L4e8
            com.mbridge.msdk.foundation.same.net.g.d r15 = new com.mbridge.msdk.foundation.same.net.g.d     // Catch: java.lang.Exception -> L4e8
            r15.<init>()     // Catch: java.lang.Exception -> L4e8
            com.mbridge.msdk.foundation.controller.a r16 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L4e8
            java.lang.String r16 = r16.k()     // Catch: java.lang.Exception -> L4e8
            com.mbridge.msdk.foundation.controller.a r17 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L4e8
            java.lang.String r17 = r17.l()     // Catch: java.lang.Exception -> L4e8
            r18 = r13
            java.util.Map<java.lang.String, java.lang.Object> r13 = r8.s     // Catch: java.lang.Exception -> L4e8
            r19 = r2
            java.lang.String r2 = "app_id"
            if (r13 == 0) goto Ldb
            java.util.Map<java.lang.String, java.lang.Object> r13 = r8.s     // Catch: java.lang.Exception -> L4e8
            boolean r13 = r13.containsKey(r2)     // Catch: java.lang.Exception -> L4e8
            if (r13 == 0) goto Ldb
            java.util.Map<java.lang.String, java.lang.Object> r13 = r8.s     // Catch: java.lang.Exception -> L4e8
            boolean r13 = r13.containsKey(r0)     // Catch: java.lang.Exception -> L4e8
            if (r13 == 0) goto Ldb
            java.util.Map<java.lang.String, java.lang.Object> r13 = r8.s     // Catch: java.lang.Exception -> L4e8
            boolean r13 = r13.containsKey(r6)     // Catch: java.lang.Exception -> L4e8
            if (r13 == 0) goto Ldb
            java.util.Map<java.lang.String, java.lang.Object> r13 = r8.s     // Catch: java.lang.Exception -> L4e8
            java.lang.Object r13 = r13.get(r6)     // Catch: java.lang.Exception -> L4e8
            if (r13 == 0) goto Ldb
            java.util.Map<java.lang.String, java.lang.Object> r13 = r8.s     // Catch: java.lang.Exception -> L4e8
            java.lang.Object r13 = r13.get(r2)     // Catch: java.lang.Exception -> L4e8
            boolean r13 = r13 instanceof java.lang.String     // Catch: java.lang.Exception -> L4e8
            if (r13 == 0) goto La4
            java.util.Map<java.lang.String, java.lang.Object> r13 = r8.s     // Catch: java.lang.Exception -> L4e8
            java.lang.Object r13 = r13.get(r2)     // Catch: java.lang.Exception -> L4e8
            r16 = r13
            java.lang.String r16 = (java.lang.String) r16     // Catch: java.lang.Exception -> L4e8
        La4:
            java.util.Map<java.lang.String, java.lang.Object> r13 = r8.s     // Catch: java.lang.Exception -> L4e8
            java.lang.Object r13 = r13.get(r0)     // Catch: java.lang.Exception -> L4e8
            boolean r13 = r13 instanceof java.lang.String     // Catch: java.lang.Exception -> L4e8
            if (r13 == 0) goto Lb8
            java.util.Map<java.lang.String, java.lang.Object> r13 = r8.s     // Catch: java.lang.Exception -> L4e8
            java.lang.Object r0 = r13.get(r0)     // Catch: java.lang.Exception -> L4e8
            r17 = r0
            java.lang.String r17 = (java.lang.String) r17     // Catch: java.lang.Exception -> L4e8
        Lb8:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r8.s     // Catch: java.lang.Exception -> L4e8
            java.lang.Object r0 = r0.get(r6)     // Catch: java.lang.Exception -> L4e8
            boolean r0 = r0 instanceof java.lang.String     // Catch: java.lang.Exception -> L4e8
            if (r0 == 0) goto Lcb
            java.util.Map<java.lang.String, java.lang.Object> r0 = r8.s     // Catch: java.lang.Exception -> L4e8
            java.lang.Object r0 = r0.get(r6)     // Catch: java.lang.Exception -> L4e8
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L4e8
            goto Lcc
        Lcb:
            r0 = 0
        Lcc:
            boolean r6 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L4e8
            if (r6 != 0) goto Ldb
            java.lang.String r6 = "smart"
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.t.a(r0)     // Catch: java.lang.Exception -> L4e8
            r15.a(r6, r0)     // Catch: java.lang.Exception -> L4e8
        Ldb:
            r0 = r16
            r6 = r17
            r15.a(r2, r0)     // Catch: java.lang.Exception -> L4e8
            java.lang.String r2 = "unit_id"
            r15.a(r2, r10)     // Catch: java.lang.Exception -> L4e8
            java.lang.String r2 = "req_type"
            r15.a(r2, r4)     // Catch: java.lang.Exception -> L4e8
            java.lang.String r2 = r8.n     // Catch: java.lang.Exception -> L4e8
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L4e8
            if (r2 != 0) goto Lfb
            java.lang.String r2 = "category"
            java.lang.String r13 = r8.n     // Catch: java.lang.Exception -> L4e8
            r15.a(r2, r13)     // Catch: java.lang.Exception -> L4e8
        Lfb:
            boolean r2 = android.text.TextUtils.isEmpty(r31)     // Catch: java.lang.Exception -> L4e8
            if (r2 != 0) goto L106
            java.lang.String r2 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID     // Catch: java.lang.Exception -> L4e8
            r15.a(r2, r7)     // Catch: java.lang.Exception -> L4e8
        L106:
            java.lang.String r2 = "sign"
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4e8
            r13.<init>()     // Catch: java.lang.Exception -> L4e8
            r13.append(r0)     // Catch: java.lang.Exception -> L4e8
            r13.append(r6)     // Catch: java.lang.Exception -> L4e8
            java.lang.String r0 = r13.toString()     // Catch: java.lang.Exception -> L4e8
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r0)     // Catch: java.lang.Exception -> L4e8
            r15.a(r2, r0)     // Catch: java.lang.Exception -> L4e8
            java.lang.String r0 = "only_impression"
            r15.a(r0, r4)     // Catch: java.lang.Exception -> L4e8
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ae.g(r30)     // Catch: java.lang.Exception -> L4e8
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L4e8
            if (r2 != 0) goto L132
            java.lang.String r2 = "j"
            r15.a(r2, r0)     // Catch: java.lang.Exception -> L4e8
        L132:
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.mbnative.controller.b.h     // Catch: java.lang.Exception -> L4e8
            java.lang.Object r0 = r0.get(r10)     // Catch: java.lang.Exception -> L4e8
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Exception -> L4e8
            int r2 = r0.intValue()     // Catch: java.lang.Exception -> L4e8
            int r0 = com.mbridge.msdk.mbnative.controller.b.w     // Catch: java.lang.Exception -> L4e8
            if (r14 == r0) goto L4d3
            if (r14 == 0) goto L4d3
            if (r2 != 0) goto L148
            goto L4d3
        L148:
            r13 = 1
            if (r9 != 0) goto L193
            com.mbridge.msdk.mbnative.a.b r0 = com.mbridge.msdk.mbnative.a.f.a(r25)     // Catch: java.lang.Exception -> L4e8
            if (r12 == 0) goto L17c
            if (r0 == 0) goto L166
            java.lang.Object r0 = r0.b(r10, r2)     // Catch: java.lang.Exception -> L4e8
            java.util.List r0 = (java.util.List) r0     // Catch: java.lang.Exception -> L4e8
            if (r0 == 0) goto L166
            int r0 = r0.size()     // Catch: java.lang.Exception -> L4e8
            if (r0 <= 0) goto L166
            r0 = 0
            r8.a(r13, r11, r0)     // Catch: java.lang.Exception -> L4e8
            return
        L166:
            boolean r0 = r8.y     // Catch: java.lang.Exception -> L4e8
            if (r0 == 0) goto L17b
            java.lang.String r2 = ""
            r1 = r24
            r3 = r28
            r4 = r30
            r5 = r31
            r6 = r32
            r7 = r34
            r1.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L4e8
        L17b:
            return
        L17c:
            if (r1 == r13) goto L193
            if (r0 == 0) goto L193
            java.lang.Object r0 = r0.b(r10, r2)     // Catch: java.lang.Exception -> L4e8
            java.util.List r0 = (java.util.List) r0     // Catch: java.lang.Exception -> L4e8
            if (r0 == 0) goto L193
            int r0 = r0.size()     // Catch: java.lang.Exception -> L4e8
            if (r0 <= 0) goto L193
            r0 = 0
            r8.a(r13, r11, r0)     // Catch: java.lang.Exception -> L4e8
            return
        L193:
            java.lang.String r6 = "ad_num"
            java.lang.String r13 = ""
            if (r2 == 0) goto L1ab
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4e8
            r0.<init>()     // Catch: java.lang.Exception -> L4e8
            r0.append(r2)     // Catch: java.lang.Exception -> L4e8
            r0.append(r13)     // Catch: java.lang.Exception -> L4e8
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L4e8
            r15.a(r6, r0)     // Catch: java.lang.Exception -> L4e8
        L1ab:
            int r0 = r8.p     // Catch: java.lang.Exception -> L4e8
            if (r0 == 0) goto L1c5
            java.lang.String r0 = "frame_num"
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4e8
            r9.<init>()     // Catch: java.lang.Exception -> L4e8
            int r12 = r8.p     // Catch: java.lang.Exception -> L4e8
            r9.append(r12)     // Catch: java.lang.Exception -> L4e8
            r9.append(r13)     // Catch: java.lang.Exception -> L4e8
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L4e8
            r15.a(r0, r9)     // Catch: java.lang.Exception -> L4e8
        L1c5:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r8.s     // Catch: java.lang.Exception -> L4e8
            boolean r0 = r0.containsKey(r5)     // Catch: java.lang.Exception -> L4e8
            if (r0 == 0) goto L286
            java.util.Map<java.lang.String, java.lang.Object> r0 = r8.s     // Catch: java.lang.Exception -> L4e8
            java.lang.Object r0 = r0.get(r5)     // Catch: java.lang.Exception -> L4e8
            r9 = r0
            java.lang.String r9 = (java.lang.String) r9     // Catch: java.lang.Exception -> L4e8
            boolean r0 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> L4e8
            if (r0 != 0) goto L27f
            java.lang.String r0 = com.mbridge.msdk.mbnative.controller.b.d     // Catch: java.lang.Exception -> L4e8
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4e8
            r12.<init>()     // Catch: java.lang.Exception -> L4e8
            java.lang.String r11 = "nativeinfo"
            r12.append(r11)     // Catch: java.lang.Exception -> L4e8
            r12.append(r9)     // Catch: java.lang.Exception -> L4e8
            java.lang.String r11 = r12.toString()     // Catch: java.lang.Exception -> L4e8
            com.mbridge.msdk.foundation.tools.z.d(r0, r11)     // Catch: java.lang.Exception -> L4e8
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: org.json.JSONException -> L266 java.lang.Exception -> L4e8
            r0.<init>(r9)     // Catch: org.json.JSONException -> L266 java.lang.Exception -> L4e8
            int r11 = r0.length()     // Catch: org.json.JSONException -> L266 java.lang.Exception -> L4e8
            if (r11 <= 0) goto L251
            r21 = r9
            r11 = 0
            r12 = 0
            r20 = 0
        L203:
            int r9 = r0.length()     // Catch: org.json.JSONException -> L24b java.lang.Exception -> L4e8
            if (r11 >= r9) goto L244
            java.lang.Object r9 = r0.opt(r11)     // Catch: org.json.JSONException -> L24b java.lang.Exception -> L4e8
            org.json.JSONObject r9 = (org.json.JSONObject) r9     // Catch: org.json.JSONException -> L24b java.lang.Exception -> L4e8
            r22 = r12
            java.lang.String r12 = "id"
            r23 = r2
            r2 = 0
            int r12 = r9.optInt(r12, r2)     // Catch: org.json.JSONException -> L23c java.lang.Exception -> L4e8
            r2 = 2
            if (r2 != r12) goto L229
            int r12 = r9.optInt(r6)     // Catch: org.json.JSONException -> L23c java.lang.Exception -> L4e8
            if (r14 <= 0) goto L237
            r9.put(r6, r14)     // Catch: org.json.JSONException -> L227 java.lang.Exception -> L4e8
            goto L237
        L227:
            r0 = move-exception
            goto L26e
        L229:
            r2 = 3
            if (r2 != r12) goto L235
            int r20 = r9.optInt(r6)     // Catch: org.json.JSONException -> L23c java.lang.Exception -> L4e8
            if (r14 <= 0) goto L235
            r9.put(r6, r14)     // Catch: org.json.JSONException -> L23c java.lang.Exception -> L4e8
        L235:
            r12 = r22
        L237:
            int r11 = r11 + 1
            r2 = r23
            goto L203
        L23c:
            r0 = move-exception
            goto L241
        L23e:
            r0 = move-exception
            r23 = r2
        L241:
            r12 = r22
            goto L26e
        L244:
            r23 = r2
            r22 = r12
            r2 = r20
            goto L257
        L24b:
            r0 = move-exception
            r23 = r2
            r22 = r12
            goto L26e
        L251:
            r23 = r2
            r21 = r9
            r2 = 0
            r12 = 0
        L257:
            int r9 = java.lang.Math.max(r12, r2)     // Catch: org.json.JSONException -> L262 java.lang.Exception -> L4e8
            r8.z = r9     // Catch: org.json.JSONException -> L262 java.lang.Exception -> L4e8
            java.lang.String r9 = r0.toString()     // Catch: org.json.JSONException -> L262 java.lang.Exception -> L4e8
            goto L27b
        L262:
            r0 = move-exception
            r20 = r2
            goto L26e
        L266:
            r0 = move-exception
            r23 = r2
            r21 = r9
            r12 = 0
            r20 = 0
        L26e:
            java.lang.String r2 = com.mbridge.msdk.mbnative.controller.b.d     // Catch: java.lang.Exception -> L4e8
            java.lang.String r0 = com.mbridge.msdk.mbnative.b.a.a(r0)     // Catch: java.lang.Exception -> L4e8
            com.mbridge.msdk.foundation.tools.z.d(r2, r0)     // Catch: java.lang.Exception -> L4e8
            r2 = r20
            r9 = r21
        L27b:
            r15.a(r5, r9)     // Catch: java.lang.Exception -> L4e8
            goto L283
        L27f:
            r23 = r2
            r2 = 0
            r12 = 0
        L283:
            r14 = r23
            goto L293
        L286:
            r23 = r2
            int r0 = com.mbridge.msdk.mbnative.controller.b.x     // Catch: java.lang.Exception -> L4e8
            if (r14 == r0) goto L28f
            if (r14 == 0) goto L28f
            goto L291
        L28f:
            r14 = r23
        L291:
            r2 = 0
            r12 = 0
        L293:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4e8
            r0.<init>()     // Catch: java.lang.Exception -> L4e8
            r0.append(r14)     // Catch: java.lang.Exception -> L4e8
            r0.append(r13)     // Catch: java.lang.Exception -> L4e8
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L4e8
            r15.a(r6, r0)     // Catch: java.lang.Exception -> L4e8
            java.lang.String r0 = "ping_mode"
            r15.a(r0, r4)     // Catch: java.lang.Exception -> L4e8
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L4e8
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L4e8
            java.lang.String r4 = r4.k()     // Catch: java.lang.Exception -> L4e8
            com.mbridge.msdk.c.a r0 = r0.b(r4)     // Catch: java.lang.Exception -> L4e8
            if (r0 != 0) goto L2c3
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L4e8
            r0.b()     // Catch: java.lang.Exception -> L4e8
        L2c3:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r8.s     // Catch: java.lang.Exception -> L4e8
            boolean r0 = com.mbridge.msdk.mbnative.controller.NativeController.a(r0)     // Catch: java.lang.Exception -> L4e8
            if (r0 != 0) goto L2ed
            java.lang.String r0 = com.mbridge.msdk.mbnative.controller.b.d     // Catch: java.lang.Exception -> L4e8
            java.lang.String r4 = "没有param 参数 要传fqci"
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)     // Catch: java.lang.Exception -> L4e8
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L4e8
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L4e8
            org.json.JSONArray r0 = com.mbridge.msdk.foundation.tools.ae.a(r0, r10)     // Catch: java.lang.Exception -> L4e8
            int r4 = r0.length()     // Catch: java.lang.Exception -> L4e8
            if (r4 <= 0) goto L2ed
            java.lang.String r4 = com.mbridge.msdk.foundation.same.net.g.d.c     // Catch: java.lang.Exception -> L4e8
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ae.a(r0)     // Catch: java.lang.Exception -> L4e8
            r15.a(r4, r0)     // Catch: java.lang.Exception -> L4e8
        L2ed:
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Exception -> L4e8
            r0.<init>()     // Catch: java.lang.Exception -> L4e8
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L4e8
            java.util.List r4 = r4.i()     // Catch: java.lang.Exception -> L4e8
            if (r4 == 0) goto L31c
            int r6 = r4.size()     // Catch: java.lang.Exception -> L4e8
            if (r6 <= 0) goto L31c
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Exception -> L4e8
        L306:
            boolean r6 = r4.hasNext()     // Catch: java.lang.Exception -> L4e8
            if (r6 == 0) goto L31c
            java.lang.Object r6 = r4.next()     // Catch: java.lang.Exception -> L4e8
            java.lang.Long r6 = (java.lang.Long) r6     // Catch: java.lang.Exception -> L4e8
            r9 = r12
            long r11 = r6.longValue()     // Catch: java.lang.Exception -> L4e8
            r0.put(r11)     // Catch: java.lang.Exception -> L4e8
            r12 = r9
            goto L306
        L31c:
            r9 = r12
            int r4 = r0.length()     // Catch: java.lang.Exception -> L4e8
            if (r4 <= 0) goto L32c
            java.lang.String r4 = "install_ids"
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ae.a(r0)     // Catch: java.lang.Exception -> L4e8
            r15.a(r4, r0)     // Catch: java.lang.Exception -> L4e8
        L32c:
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.entity.m> r0 = com.mbridge.msdk.mbnative.controller.b.g     // Catch: java.lang.Exception -> L4e8
            boolean r0 = r0.containsKey(r10)     // Catch: java.lang.Exception -> L4e8
            if (r0 == 0) goto L354
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.entity.m> r0 = com.mbridge.msdk.mbnative.controller.b.g     // Catch: java.lang.Exception -> L4e8
            java.lang.Object r0 = r0.get(r10)     // Catch: java.lang.Exception -> L4e8
            com.mbridge.msdk.foundation.entity.m r0 = (com.mbridge.msdk.foundation.entity.m) r0     // Catch: java.lang.Exception -> L4e8
            if (r0 == 0) goto L354
            r4 = 1
            if (r1 == r4) goto L34e
            r4 = 2
            if (r1 == r4) goto L349
            int r12 = r0.b()     // Catch: java.lang.Exception -> L4e8
            goto L352
        L349:
            int r12 = r0.a()     // Catch: java.lang.Exception -> L4e8
            goto L352
        L34e:
            int r12 = r0.b()     // Catch: java.lang.Exception -> L4e8
        L352:
            r4 = 1
            goto L356
        L354:
            r4 = 1
            r12 = 0
        L356:
            if (r1 != r4) goto L367
            java.lang.String r0 = r8.q     // Catch: java.lang.Exception -> L4e8
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L4e8
            if (r0 != 0) goto L367
            java.lang.String r0 = "ttc_ids"
            java.lang.String r4 = r8.q     // Catch: java.lang.Exception -> L4e8
            r15.a(r0, r4)     // Catch: java.lang.Exception -> L4e8
        L367:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r8.s     // Catch: java.lang.Exception -> L4e8
            boolean r0 = r0.containsKey(r5)     // Catch: java.lang.Exception -> L4e8
            java.lang.String r4 = "tnum"
            r5 = 1
            if (r0 == 0) goto L389
            if (r1 != r5) goto L389
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4e8
            r0.<init>()     // Catch: java.lang.Exception -> L4e8
            int r5 = r8.z     // Catch: java.lang.Exception -> L4e8
            r0.append(r5)     // Catch: java.lang.Exception -> L4e8
            r0.append(r13)     // Catch: java.lang.Exception -> L4e8
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L4e8
            r15.a(r4, r0)     // Catch: java.lang.Exception -> L4e8
            goto L39f
        L389:
            if (r1 != r5) goto L39f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4e8
            r0.<init>()     // Catch: java.lang.Exception -> L4e8
            int r5 = r8.A     // Catch: java.lang.Exception -> L4e8
            r0.append(r5)     // Catch: java.lang.Exception -> L4e8
            r0.append(r13)     // Catch: java.lang.Exception -> L4e8
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L4e8
            r15.a(r4, r0)     // Catch: java.lang.Exception -> L4e8
        L39f:
            java.lang.String r0 = "offset"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4e8
            r4.<init>()     // Catch: java.lang.Exception -> L4e8
            r4.append(r12)     // Catch: java.lang.Exception -> L4e8
            r4.append(r13)     // Catch: java.lang.Exception -> L4e8
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L4e8
            r15.a(r0, r4)     // Catch: java.lang.Exception -> L4e8
            java.lang.String r0 = "ad_type"
            java.lang.String r4 = "42"
            r15.a(r0, r4)     // Catch: java.lang.Exception -> L4e8
            java.lang.String r0 = "ad_source_id"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4e8
            r4.<init>()     // Catch: java.lang.Exception -> L4e8
            r4.append(r1)     // Catch: java.lang.Exception -> L4e8
            r4.append(r13)     // Catch: java.lang.Exception -> L4e8
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L4e8
            r15.a(r0, r4)     // Catch: java.lang.Exception -> L4e8
            java.lang.String r0 = "native"
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.d.a(r10, r0)     // Catch: java.lang.Exception -> L4e8
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L4e8
            if (r4 != 0) goto L3df
            java.lang.String r4 = com.mbridge.msdk.foundation.same.net.g.d.b     // Catch: java.lang.Exception -> L4e8
            r15.a(r4, r0)     // Catch: java.lang.Exception -> L4e8
        L3df:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L4e8
            r4 = 14
            if (r0 < r4) goto L452
            java.util.Map<java.lang.String, java.lang.Object> r0 = r8.s     // Catch: java.lang.Exception -> L4e8
            boolean r0 = r0.containsKey(r3)     // Catch: java.lang.Exception -> L4e8
            if (r0 == 0) goto L417
            java.util.Map<java.lang.String, java.lang.Object> r0 = r8.s     // Catch: java.lang.Exception -> L4e8
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Exception -> L4e8
            boolean r0 = r0 instanceof java.lang.Integer     // Catch: java.lang.Exception -> L4e8
            if (r0 == 0) goto L417
            java.lang.String r0 = "video_width"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4e8
            r4.<init>()     // Catch: java.lang.Exception -> L4e8
            java.util.Map<java.lang.String, java.lang.Object> r5 = r8.s     // Catch: java.lang.Exception -> L4e8
            java.lang.Object r3 = r5.get(r3)     // Catch: java.lang.Exception -> L4e8
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Exception -> L4e8
            int r3 = r3.intValue()     // Catch: java.lang.Exception -> L4e8
            r4.append(r3)     // Catch: java.lang.Exception -> L4e8
            r4.append(r13)     // Catch: java.lang.Exception -> L4e8
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Exception -> L4e8
            r15.a(r0, r3)     // Catch: java.lang.Exception -> L4e8
        L417:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r8.s     // Catch: java.lang.Exception -> L4e8
            r3 = r19
            boolean r0 = r0.containsKey(r3)     // Catch: java.lang.Exception -> L4e8
            if (r0 == 0) goto L44b
            java.util.Map<java.lang.String, java.lang.Object> r0 = r8.s     // Catch: java.lang.Exception -> L4e8
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Exception -> L4e8
            boolean r0 = r0 instanceof java.lang.Integer     // Catch: java.lang.Exception -> L4e8
            if (r0 == 0) goto L44b
            java.lang.String r0 = "video_height"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4e8
            r4.<init>()     // Catch: java.lang.Exception -> L4e8
            java.util.Map<java.lang.String, java.lang.Object> r5 = r8.s     // Catch: java.lang.Exception -> L4e8
            java.lang.Object r3 = r5.get(r3)     // Catch: java.lang.Exception -> L4e8
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Exception -> L4e8
            int r3 = r3.intValue()     // Catch: java.lang.Exception -> L4e8
            r4.append(r3)     // Catch: java.lang.Exception -> L4e8
            r4.append(r13)     // Catch: java.lang.Exception -> L4e8
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Exception -> L4e8
            r15.a(r0, r3)     // Catch: java.lang.Exception -> L4e8
        L44b:
            java.lang.String r0 = "video_version"
            java.lang.String r3 = "2.0"
            r15.a(r0, r3)     // Catch: java.lang.Exception -> L4e8
        L452:
            com.mbridge.msdk.mbnative.controller.b$a r0 = new com.mbridge.msdk.mbnative.controller.b$a     // Catch: java.lang.Exception -> L4e8
            r0.<init>(r8, r1)     // Catch: java.lang.Exception -> L4e8
            r0.setUnitId(r10)     // Catch: java.lang.Exception -> L4e8
            r0.setPlacementId(r7)     // Catch: java.lang.Exception -> L4e8
            r3 = 42
            r0.setAdType(r3)     // Catch: java.lang.Exception -> L4e8
            r3 = r23
            r0.d(r3)     // Catch: java.lang.Exception -> L4e8
            r12 = r9
            r0.b(r12)     // Catch: java.lang.Exception -> L4e8
            r0.c(r2)     // Catch: java.lang.Exception -> L4e8
            r2 = r29
            r0.a(r2)     // Catch: java.lang.Exception -> L4e8
            r9 = r34
            r0.a(r9)     // Catch: java.lang.Exception -> L4e8
            r11 = r32
            r0.a(r11)     // Catch: java.lang.Exception -> L4e8
            r2 = 1
            r12 = r33
            if (r1 != r2) goto L484
            if (r12 == 0) goto L487
        L484:
            r0.b(r2)     // Catch: java.lang.Exception -> L4e8
        L487:
            java.util.Map<java.lang.String, java.lang.Object> r1 = r8.s     // Catch: java.lang.Exception -> L4e8
            java.util.List r1 = com.mbridge.msdk.mbnative.controller.NativeController.b(r1)     // Catch: java.lang.Exception -> L4e8
            r0.a(r1)     // Catch: java.lang.Exception -> L4e8
            com.mbridge.msdk.mbnative.controller.b$b r14 = new com.mbridge.msdk.mbnative.controller.b$b     // Catch: java.lang.Exception -> L4e8
            r3 = 1
            r1 = r14
            r2 = r24
            r4 = r0
            r5 = r28
            r6 = r30
            r7 = r31
            r1.<init>(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L4e8
            r0.a(r14)     // Catch: java.lang.Exception -> L4e8
            r3 = r28
            r0.e(r3)     // Catch: java.lang.Exception -> L4e8
            r14.a(r11)     // Catch: java.lang.Exception -> L4e8
            r14.a(r9)     // Catch: java.lang.Exception -> L4e8
            r14.a(r12)     // Catch: java.lang.Exception -> L4e8
            r14.a(r10)     // Catch: java.lang.Exception -> L4e8
            if (r3 != 0) goto L4bd
            r1 = r18
            r2 = 1
            r1.choiceV3OrV5BySetting(r2, r15, r0, r13)     // Catch: java.lang.Exception -> L4e8
            goto L4cb
        L4bd:
            r1 = r18
            r2 = 1
            if (r3 != r2) goto L4cb
            com.mbridge.msdk.foundation.same.net.f.d r3 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L4e8
            java.lang.String r3 = r3.n     // Catch: java.lang.Exception -> L4e8
            r1.getLoadOrSetting(r2, r3, r15, r0)     // Catch: java.lang.Exception -> L4e8
        L4cb:
            android.os.Handler r0 = r8.o     // Catch: java.lang.Exception -> L4e8
            r1 = r26
            r0.postDelayed(r14, r1)     // Catch: java.lang.Exception -> L4e8
            goto L4fb
        L4d3:
            r3 = r9
            r9 = r34
            java.lang.String r2 = "The request was refused"
            r1 = r24
            r3 = r28
            r4 = r30
            r5 = r31
            r6 = r32
            r7 = r34
            r1.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L4e8
            return
        L4e8:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.mbnative.controller.b.d
            java.lang.String r2 = com.mbridge.msdk.mbnative.b.a.a(r0)
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)
            java.lang.String r1 = com.mbridge.msdk.mbnative.controller.b.d
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L4fb:
            return
    }

    public final void a(java.lang.String r8, int r9, java.lang.String r10, java.lang.String r11, com.mbridge.msdk.b.a.a r12, com.mbridge.msdk.out.AdMobClickListener r13) {
            r7 = this;
            java.lang.String r0 = com.mbridge.msdk.mbnative.controller.b.d
            android.util.Log.e(r0, r8)
            java.util.Queue<java.lang.Integer> r0 = r7.a     // Catch: java.lang.Exception -> L26
            if (r0 == 0) goto L11
            java.util.Queue<java.lang.Integer> r0 = r7.a     // Catch: java.lang.Exception -> L26
            int r0 = r0.size()     // Catch: java.lang.Exception -> L26
            if (r0 <= 0) goto L15
        L11:
            java.util.Queue<java.lang.Integer> r0 = r7.a     // Catch: java.lang.Exception -> L26
            if (r0 != 0) goto L1a
        L15:
            r9 = 0
            r7.a(r9, r12, r8)     // Catch: java.lang.Exception -> L26
            goto L2e
        L1a:
            com.mbridge.msdk.c.d r2 = r7.m     // Catch: java.lang.Exception -> L26
            r0 = r7
            r1 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r0.a(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L26
            goto L2e
        L26:
            r8 = move-exception
            boolean r9 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r9 == 0) goto L2e
            r8.printStackTrace()
        L2e:
            return
    }

    public final void a(java.lang.Thread r2) {
            r1 = this;
            boolean r0 = com.mbridge.msdk.MBridgeConstans.PRELOAD_RESULT_IN_SUBTHREAD
            if (r0 != 0) goto L8
            r2.run()
            goto Lb
        L8:
            r2.start()
        Lb:
            return
    }

    public final void a(java.util.Map<java.lang.String, java.lang.Object> r24, int r25, com.mbridge.msdk.out.AdMobClickListener r26) {
            r23 = this;
            r11 = r23
            r0 = r24
            r12 = r25
            java.lang.String r13 = "native_info"
            java.lang.String r14 = "com.mbridge.msdk.videocommon.download.b"
            java.lang.String r1 = "app_key"
            java.lang.String r2 = "app_id"
            java.lang.String r3 = "preload_result_listener"
            java.lang.String r4 = "ad_num"
            java.lang.String r5 = "catetory"
            java.lang.String r6 = "ad_frame_num"
            java.lang.String r7 = "isPreloadImg"
            java.lang.String r8 = "unit_id"
            java.lang.String r9 = "_"
            r11.s = r0     // Catch: java.lang.Exception -> L443
            r15 = 0
            r11.y = r15     // Catch: java.lang.Exception -> L443
            boolean r10 = r0.containsKey(r8)     // Catch: java.lang.Exception -> L443
            if (r10 != 0) goto L2f
            java.lang.String r0 = com.mbridge.msdk.mbnative.controller.b.d     // Catch: java.lang.Exception -> L443
            java.lang.String r1 = "preload error,make sure you have unitid"
            com.mbridge.msdk.foundation.tools.z.c(r0, r1)     // Catch: java.lang.Exception -> L443
            return
        L2f:
            java.lang.Object r8 = r0.get(r8)     // Catch: java.lang.Exception -> L443
            r10 = r8
            java.lang.String r10 = (java.lang.String) r10     // Catch: java.lang.Exception -> L443
            int r8 = r12 + 1
            r16 = 2
            int r8 = r8 % 2
            java.util.Map<java.lang.String, java.util.Map<java.lang.Long, java.lang.Object>> r15 = com.mbridge.msdk.mbnative.controller.b.e     // Catch: java.lang.Exception -> L443
            r17 = r13
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L443
            r13.<init>()     // Catch: java.lang.Exception -> L443
            r13.append(r8)     // Catch: java.lang.Exception -> L443
            r13.append(r9)     // Catch: java.lang.Exception -> L443
            r13.append(r10)     // Catch: java.lang.Exception -> L443
            java.lang.String r8 = r13.toString()     // Catch: java.lang.Exception -> L443
            boolean r8 = r15.containsKey(r8)     // Catch: java.lang.Exception -> L443
            if (r8 == 0) goto L7a
            java.util.Map<java.lang.String, java.util.Map<java.lang.Long, java.lang.Object>> r8 = com.mbridge.msdk.mbnative.controller.b.e     // Catch: java.lang.Exception -> L443
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L443
            r13.<init>()     // Catch: java.lang.Exception -> L443
            r13.append(r12)     // Catch: java.lang.Exception -> L443
            r13.append(r9)     // Catch: java.lang.Exception -> L443
            r13.append(r10)     // Catch: java.lang.Exception -> L443
            java.lang.String r13 = r13.toString()     // Catch: java.lang.Exception -> L443
            boolean r8 = r8.containsKey(r13)     // Catch: java.lang.Exception -> L443
            if (r8 != 0) goto L7a
            java.lang.String r0 = com.mbridge.msdk.mbnative.controller.b.d     // Catch: java.lang.Exception -> L443
            java.lang.String r1 = "An id can have only one AD form"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Exception -> L443
            return
        L7a:
            boolean r8 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Exception -> L443
            if (r8 == 0) goto L88
            java.lang.String r0 = com.mbridge.msdk.mbnative.controller.b.d     // Catch: java.lang.Exception -> L443
            java.lang.String r1 = "preload error,make sure you have correct unitid"
            com.mbridge.msdk.foundation.tools.z.c(r0, r1)     // Catch: java.lang.Exception -> L443
            return
        L88:
            boolean r8 = r0.containsKey(r7)     // Catch: java.lang.Exception -> L443
            if (r8 == 0) goto L9a
            java.lang.Object r7 = r0.get(r7)     // Catch: java.lang.Exception -> L443
            java.lang.Boolean r7 = (java.lang.Boolean) r7     // Catch: java.lang.Exception -> L443
            boolean r7 = r7.booleanValue()     // Catch: java.lang.Exception -> L443
            r11.v = r7     // Catch: java.lang.Exception -> L443
        L9a:
            com.mbridge.msdk.click.b r7 = r11.l     // Catch: java.lang.Exception -> L443
            if (r7 != 0) goto Lae
            com.mbridge.msdk.click.b r7 = new com.mbridge.msdk.click.b     // Catch: java.lang.Exception -> L443
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L443
            android.content.Context r8 = r8.j()     // Catch: java.lang.Exception -> L443
            r7.<init>(r8, r10)     // Catch: java.lang.Exception -> L443
            r11.l = r7     // Catch: java.lang.Exception -> L443
            goto Lb3
        Lae:
            com.mbridge.msdk.click.b r7 = r11.l     // Catch: java.lang.Exception -> L443
            r7.a(r10)     // Catch: java.lang.Exception -> L443
        Lb3:
            boolean r7 = r0.containsKey(r6)     // Catch: java.lang.Exception -> L443
            if (r7 == 0) goto Lc5
            java.lang.Object r6 = r0.get(r6)     // Catch: java.lang.Exception -> L443
            java.lang.Integer r6 = (java.lang.Integer) r6     // Catch: java.lang.Exception -> L443
            int r6 = r6.intValue()     // Catch: java.lang.Exception -> L443
            r11.p = r6     // Catch: java.lang.Exception -> L443
        Lc5:
            boolean r6 = r0.containsKey(r5)     // Catch: java.lang.Exception -> L443
            if (r6 == 0) goto Ld3
            java.lang.Object r5 = r0.get(r5)     // Catch: java.lang.Exception -> L443
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> L443
            r11.n = r5     // Catch: java.lang.Exception -> L443
        Ld3:
            java.util.Map<java.lang.String, java.lang.Boolean> r5 = com.mbridge.msdk.mbnative.controller.b.f     // Catch: java.lang.Exception -> L443
            boolean r5 = r5.containsKey(r10)     // Catch: java.lang.Exception -> L443
            r13 = 1
            if (r5 == 0) goto L150
            java.util.Map<java.lang.String, java.lang.Boolean> r5 = com.mbridge.msdk.mbnative.controller.b.f     // Catch: java.lang.Exception -> L443
            java.lang.Object r5 = r5.get(r10)     // Catch: java.lang.Exception -> L443
            java.lang.Boolean r5 = (java.lang.Boolean) r5     // Catch: java.lang.Exception -> L443
            boolean r5 = r5.booleanValue()     // Catch: java.lang.Exception -> L443
            if (r5 == 0) goto L150
            java.util.Map<java.lang.String, java.util.Map<java.lang.Long, java.lang.Object>> r5 = com.mbridge.msdk.mbnative.controller.b.e     // Catch: java.lang.Exception -> L443
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L443
            r6.<init>()     // Catch: java.lang.Exception -> L443
            r6.append(r12)     // Catch: java.lang.Exception -> L443
            r6.append(r9)     // Catch: java.lang.Exception -> L443
            r6.append(r10)     // Catch: java.lang.Exception -> L443
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L443
            java.lang.Object r6 = r5.get(r6)     // Catch: java.lang.Exception -> L443
            java.util.Map r6 = (java.util.Map) r6     // Catch: java.lang.Exception -> L443
            com.mbridge.msdk.c.b r7 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L443
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L443
            java.lang.String r8 = r8.k()     // Catch: java.lang.Exception -> L443
            com.mbridge.msdk.c.a r7 = r7.b(r8)     // Catch: java.lang.Exception -> L443
            if (r6 == 0) goto L150
            int r8 = r6.size()     // Catch: java.lang.Exception -> L443
            if (r8 <= 0) goto L150
            java.util.Set r6 = r6.keySet()     // Catch: java.lang.Exception -> L443
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Exception -> L443
            java.lang.Object r6 = r6.next()     // Catch: java.lang.Exception -> L443
            java.lang.Long r6 = (java.lang.Long) r6     // Catch: java.lang.Exception -> L443
            long r8 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L443
            if (r7 != 0) goto L138
            com.mbridge.msdk.c.b r7 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L443
            com.mbridge.msdk.c.a r7 = r7.b()     // Catch: java.lang.Exception -> L443
        L138:
            long r18 = r7.ag()     // Catch: java.lang.Exception -> L443
            r20 = 1000(0x3e8, double:4.94E-321)
            long r18 = r18 * r20
            long r6 = r6.longValue()     // Catch: java.lang.Exception -> L443
            long r8 = r8 - r6
            int r6 = (r8 > r18 ? 1 : (r8 == r18 ? 0 : -1))
            if (r6 < 0) goto L14d
            r5.remove(r10)     // Catch: java.lang.Exception -> L443
            goto L150
        L14d:
            if (r12 != r13) goto L150
            return
        L150:
            java.util.Map<java.lang.String, java.lang.Boolean> r5 = com.mbridge.msdk.mbnative.controller.b.f     // Catch: java.lang.Exception -> L443
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r13)     // Catch: java.lang.Exception -> L443
            r5.put(r10, r6)     // Catch: java.lang.Exception -> L443
            r11.A = r13     // Catch: java.lang.Exception -> L443
            boolean r5 = r0.containsKey(r4)     // Catch: java.lang.Exception -> L17a
            if (r5 == 0) goto L181
            java.lang.Object r4 = r0.get(r4)     // Catch: java.lang.Exception -> L17a
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.Exception -> L17a
            int r4 = r4.intValue()     // Catch: java.lang.Exception -> L17a
            r11.A = r4     // Catch: java.lang.Exception -> L17a
            if (r4 >= r13) goto L171
            r11.A = r13     // Catch: java.lang.Exception -> L17a
        L171:
            int r4 = r11.A     // Catch: java.lang.Exception -> L17a
            r5 = 10
            if (r4 <= r5) goto L181
            r11.A = r5     // Catch: java.lang.Exception -> L17a
            goto L181
        L17a:
            java.lang.String r4 = com.mbridge.msdk.mbnative.controller.b.d     // Catch: java.lang.Exception -> L443
            java.lang.String r5 = "ADNUM MUST BE INTEGER"
            com.mbridge.msdk.foundation.tools.z.d(r4, r5)     // Catch: java.lang.Exception -> L443
        L181:
            java.util.Map<java.lang.String, java.lang.Integer> r4 = com.mbridge.msdk.mbnative.controller.b.h     // Catch: java.lang.Exception -> L443
            int r5 = r11.A     // Catch: java.lang.Exception -> L443
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L443
            r4.put(r10, r5)     // Catch: java.lang.Exception -> L443
            boolean r4 = r0.containsKey(r3)     // Catch: java.lang.Exception -> L443
            if (r4 == 0) goto L1a1
            java.lang.Object r3 = r0.get(r3)     // Catch: java.lang.Exception -> L443
            if (r3 == 0) goto L1a1
            com.mbridge.msdk.out.PreloadListener r3 = (com.mbridge.msdk.out.PreloadListener) r3     // Catch: java.lang.Exception -> L443
            com.mbridge.msdk.b.a.a r4 = new com.mbridge.msdk.b.a.a     // Catch: java.lang.Exception -> L443
            r4.<init>(r3)     // Catch: java.lang.Exception -> L443
            r9 = r4
            goto L1a2
        L1a1:
            r9 = 0
        L1a2:
            boolean r3 = r0.containsKey(r2)     // Catch: java.lang.Exception -> L443
            if (r3 == 0) goto L1c3
            boolean r3 = r0.containsKey(r1)     // Catch: java.lang.Exception -> L443
            if (r3 == 0) goto L1c3
            java.lang.String r3 = "key_word"
            boolean r3 = r0.containsKey(r3)     // Catch: java.lang.Exception -> L443
            if (r3 == 0) goto L1c3
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Exception -> L443
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L443
            java.lang.Object r1 = r0.get(r1)     // Catch: java.lang.Exception -> L443
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L443
            goto L1c5
        L1c3:
            r1 = 0
            r2 = 0
        L1c5:
            com.mbridge.msdk.c.c r3 = r11.k     // Catch: java.lang.Exception -> L443
            if (r3 != 0) goto L1d0
            com.mbridge.msdk.c.c r3 = new com.mbridge.msdk.c.c     // Catch: java.lang.Exception -> L443
            r3.<init>()     // Catch: java.lang.Exception -> L443
            r11.k = r3     // Catch: java.lang.Exception -> L443
        L1d0:
            com.mbridge.msdk.c.c r3 = r11.k     // Catch: java.lang.Exception -> L443
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L443
            android.content.Context r4 = r4.j()     // Catch: java.lang.Exception -> L443
            r3.a(r4, r2, r1, r10)     // Catch: java.lang.Exception -> L443
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L443
            com.mbridge.msdk.c.d r1 = r1.e(r2, r10)     // Catch: java.lang.Exception -> L443
            r11.m = r1     // Catch: java.lang.Exception -> L443
            if (r1 != 0) goto L1ef
            com.mbridge.msdk.c.d r1 = com.mbridge.msdk.c.d.d(r10)     // Catch: java.lang.Exception -> L443
            r11.m = r1     // Catch: java.lang.Exception -> L443
        L1ef:
            java.lang.String r1 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID     // Catch: java.lang.Exception -> L443
            boolean r1 = r0.containsKey(r1)     // Catch: java.lang.Exception -> L443
            java.lang.String r8 = ""
            if (r1 == 0) goto L213
            java.lang.String r1 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID     // Catch: java.lang.Exception -> L443
            java.lang.Object r1 = r0.get(r1)     // Catch: java.lang.Exception -> L443
            if (r1 == 0) goto L213
            java.lang.String r1 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID     // Catch: java.lang.Exception -> L443
            java.lang.Object r1 = r0.get(r1)     // Catch: java.lang.Exception -> L443
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L443
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L443
            if (r2 == 0) goto L210
            goto L213
        L210:
            r18 = r1
            goto L215
        L213:
            r18 = r8
        L215:
            com.mbridge.msdk.c.d r1 = r11.m     // Catch: java.lang.Exception -> L443
            java.util.List r1 = r1.r()     // Catch: java.lang.Exception -> L443
            r11.t = r1     // Catch: java.lang.Exception -> L443
            com.mbridge.msdk.c.d r1 = r11.m     // Catch: java.lang.Exception -> L443
            java.util.List r1 = r1.s()     // Catch: java.lang.Exception -> L443
            r11.c = r1     // Catch: java.lang.Exception -> L443
            com.mbridge.msdk.c.d r1 = r11.m     // Catch: java.lang.Exception -> L443
            java.util.List r1 = r1.s()     // Catch: java.lang.Exception -> L443
            r11.u = r1     // Catch: java.lang.Exception -> L443
            java.util.List<java.lang.Integer> r1 = r11.t     // Catch: java.lang.Exception -> L443
            if (r1 == 0) goto L43a
            java.util.List<java.lang.Integer> r1 = r11.t     // Catch: java.lang.Exception -> L443
            int r1 = r1.size()     // Catch: java.lang.Exception -> L443
            if (r1 <= 0) goto L43a
            java.util.LinkedList r1 = new java.util.LinkedList     // Catch: java.lang.Exception -> L443
            r1.<init>()     // Catch: java.lang.Exception -> L443
            r11.a = r1     // Catch: java.lang.Exception -> L443
            java.util.List<java.lang.Integer> r1 = r11.t     // Catch: java.lang.Exception -> L443
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L443
        L246:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L443
            if (r2 == 0) goto L258
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L443
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Exception -> L443
            java.util.Queue<java.lang.Integer> r3 = r11.a     // Catch: java.lang.Exception -> L443
            r3.add(r2)     // Catch: java.lang.Exception -> L443
            goto L246
        L258:
            java.util.List<java.lang.Integer> r1 = r11.u     // Catch: java.lang.Exception -> L443
            if (r1 == 0) goto L28e
            java.util.List<java.lang.Integer> r1 = r11.u     // Catch: java.lang.Exception -> L443
            int r1 = r1.size()     // Catch: java.lang.Exception -> L443
            if (r1 <= 0) goto L28e
            java.util.LinkedList r1 = new java.util.LinkedList     // Catch: java.lang.Exception -> L443
            r1.<init>()     // Catch: java.lang.Exception -> L443
            r11.b = r1     // Catch: java.lang.Exception -> L443
            java.util.List<java.lang.Integer> r1 = r11.u     // Catch: java.lang.Exception -> L443
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L443
        L271:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L443
            if (r2 == 0) goto L28e
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L443
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Exception -> L443
            java.util.Queue<java.lang.Long> r3 = r11.b     // Catch: java.lang.Exception -> L443
            int r2 = r2.intValue()     // Catch: java.lang.Exception -> L443
            int r2 = r2 * 1000
            long r4 = (long) r2     // Catch: java.lang.Exception -> L443
            java.lang.Long r2 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Exception -> L443
            r3.add(r2)     // Catch: java.lang.Exception -> L443
            goto L271
        L28e:
            java.util.List<java.lang.Integer> r1 = r11.t     // Catch: java.lang.Exception -> L443
            java.lang.Integer r2 = java.lang.Integer.valueOf(r13)     // Catch: java.lang.Exception -> L443
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Exception -> L443
            if (r1 == 0) goto L2ea
            if (r12 != 0) goto L2ea
            java.util.List<java.lang.Integer> r1 = r11.c     // Catch: java.lang.Exception -> L2ea
            java.util.List<java.lang.Integer> r2 = r11.t     // Catch: java.lang.Exception -> L2ea
            java.lang.Integer r3 = java.lang.Integer.valueOf(r13)     // Catch: java.lang.Exception -> L2ea
            int r2 = r2.indexOf(r3)     // Catch: java.lang.Exception -> L2ea
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Exception -> L2ea
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Exception -> L2ea
            int r1 = r1.intValue()     // Catch: java.lang.Exception -> L2ea
            int r1 = r1 * 1000
            long r3 = (long) r1
            r2 = 1
            r19 = 0
            r1 = r23
            r5 = r25
            r6 = r10
            r7 = r18
            r22 = r8
            r8 = r19
            r19 = r9
            r15 = r10
            r10 = r26
            r1.a(r2, r3, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Exception -> L2e7
            com.mbridge.msdk.mbnative.a.b r1 = com.mbridge.msdk.mbnative.a.f.a(r13)     // Catch: java.lang.Exception -> L2e7
            if (r1 == 0) goto L2e7
            r2 = 0
            java.lang.Object r1 = r1.b(r15, r2)     // Catch: java.lang.Exception -> L2e7
            java.util.List r1 = (java.util.List) r1     // Catch: java.lang.Exception -> L2e7
            if (r1 == 0) goto L2e7
            int r1 = r1.size()     // Catch: java.lang.Exception -> L2e7
            if (r1 <= 0) goto L2e7
            r6 = r19
            r1 = 0
            r11.a(r13, r6, r1)     // Catch: java.lang.Exception -> L2ee
            goto L2ee
        L2e7:
            r6 = r19
            goto L2ee
        L2ea:
            r22 = r8
            r6 = r9
            r15 = r10
        L2ee:
            com.mbridge.msdk.c.d r3 = r11.m     // Catch: java.lang.Exception -> L443
            r1 = r23
            r2 = r25
            r4 = r15
            r5 = r18
            r7 = r26
            r1.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L443
            com.mbridge.msdk.c.d r1 = r11.m     // Catch: java.lang.Exception -> L443
            if (r1 == 0) goto L30a
            com.mbridge.msdk.c.d r1 = r11.m     // Catch: java.lang.Exception -> L443
            int r1 = r1.v()     // Catch: java.lang.Exception -> L443
            int r2 = r11.A     // Catch: java.lang.Exception -> L443
            int r1 = r1 * r2
            goto L30b
        L30a:
            r1 = r13
        L30b:
            java.util.Map<java.lang.String, java.lang.Integer> r2 = com.mbridge.msdk.mbnative.controller.b.i     // Catch: java.lang.Exception -> L443
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L443
            r2.put(r15, r1)     // Catch: java.lang.Exception -> L443
            java.lang.String r1 = "com.mbridge.msdk.nativex.view.MBMediaView"
            java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L432
            java.lang.Class.forName(r14)     // Catch: java.lang.Throwable -> L432
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L432
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L432
            com.mbridge.msdk.mbnative.controller.c.a(r1, r15)     // Catch: java.lang.Throwable -> L432
            com.mbridge.msdk.foundation.tools.x.b()     // Catch: java.lang.Throwable -> L432
            boolean r1 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L432
            if (r1 != 0) goto L44d
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L432
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L432
            com.mbridge.msdk.foundation.db.i r1 = com.mbridge.msdk.foundation.db.i.a(r1)     // Catch: java.lang.Throwable -> L432
            com.mbridge.msdk.foundation.db.f r1 = com.mbridge.msdk.foundation.db.f.a(r1)     // Catch: java.lang.Throwable -> L432
            r1.a()     // Catch: java.lang.Throwable -> L432
            r1 = r17
            boolean r2 = r0.containsKey(r1)     // Catch: java.lang.Throwable -> L432
            if (r2 == 0) goto L352
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L432
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L432
            goto L353
        L352:
            r0 = 0
        L353:
            int r0 = r11.a(r0)     // Catch: java.lang.Throwable -> L432
            if (r0 > 0) goto L35b
            int r0 = r11.A     // Catch: java.lang.Throwable -> L432
        L35b:
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L432
            r2 = r22
            com.mbridge.msdk.c.d r1 = r1.e(r2, r15)     // Catch: java.lang.Throwable -> L432
            r11.m = r1     // Catch: java.lang.Throwable -> L432
            if (r1 != 0) goto L36f
            com.mbridge.msdk.c.d r1 = com.mbridge.msdk.c.d.d(r15)     // Catch: java.lang.Throwable -> L432
            r11.m = r1     // Catch: java.lang.Throwable -> L432
        L36f:
            com.mbridge.msdk.c.d r1 = r11.m     // Catch: java.lang.Throwable -> L432
            java.util.List r1 = r1.r()     // Catch: java.lang.Throwable -> L432
            r11.t = r1     // Catch: java.lang.Throwable -> L432
            if (r1 == 0) goto L398
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L432
            if (r1 <= 0) goto L398
            java.util.List<java.lang.Integer> r1 = r11.t     // Catch: java.lang.Throwable -> L432
            java.lang.Integer r2 = java.lang.Integer.valueOf(r13)     // Catch: java.lang.Throwable -> L432
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Throwable -> L432
            if (r1 == 0) goto L398
            com.mbridge.msdk.mbnative.a.b r1 = com.mbridge.msdk.mbnative.a.f.a(r13)     // Catch: java.lang.Throwable -> L432
            if (r1 == 0) goto L398
            java.lang.Object r0 = r1.b(r15, r0)     // Catch: java.lang.Throwable -> L432
            java.util.List r0 = (java.util.List) r0     // Catch: java.lang.Throwable -> L432
            goto L399
        L398:
            r0 = 0
        L399:
            if (r0 == 0) goto L44d
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L432
            r1.<init>()     // Catch: java.lang.Throwable -> L432
            r2 = 0
        L3a1:
            int r3 = r0.size()     // Catch: java.lang.Throwable -> L432
            if (r2 >= r3) goto L3bd
            java.lang.Object r3 = r0.get(r2)     // Catch: java.lang.Throwable -> L432
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3     // Catch: java.lang.Throwable -> L432
            java.lang.String r4 = r3.getVideoUrlEncode()     // Catch: java.lang.Throwable -> L432
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L432
            if (r4 != 0) goto L3ba
            r1.add(r3)     // Catch: java.lang.Throwable -> L432
        L3ba:
            int r2 = r2 + 1
            goto L3a1
        L3bd:
            int r0 = r1.size()     // Catch: java.lang.Throwable -> L432
            if (r0 <= 0) goto L44d
            java.lang.Class r0 = java.lang.Class.forName(r14)     // Catch: java.lang.Throwable -> L432
            java.lang.String r2 = "getInstance"
            r3 = 0
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L432
            java.lang.reflect.Method r2 = r0.getMethod(r2, r4)     // Catch: java.lang.Throwable -> L432
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L432
            r3 = 0
            java.lang.Object r2 = r2.invoke(r3, r4)     // Catch: java.lang.Throwable -> L432
            java.lang.String r3 = "com.mbridge.msdk.videocommon.listener.a"
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Throwable -> L432
            java.lang.String r4 = "createUnitCache"
            r5 = 5
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.Throwable -> L432
            java.lang.Class<android.content.Context> r7 = android.content.Context.class
            r8 = 0
            r6[r8] = r7     // Catch: java.lang.Throwable -> L432
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r6[r13] = r7     // Catch: java.lang.Throwable -> L432
            java.lang.Class<java.util.concurrent.CopyOnWriteArrayList> r7 = java.util.concurrent.CopyOnWriteArrayList.class
            r6[r16] = r7     // Catch: java.lang.Throwable -> L432
            java.lang.Class r7 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L432
            r8 = 3
            r6[r8] = r7     // Catch: java.lang.Throwable -> L432
            r7 = 4
            r6[r7] = r3     // Catch: java.lang.Throwable -> L432
            java.lang.reflect.Method r3 = r0.getMethod(r4, r6)     // Catch: java.lang.Throwable -> L432
            java.lang.Object[] r4 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L432
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L432
            android.content.Context r5 = r5.j()     // Catch: java.lang.Throwable -> L432
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Throwable -> L432
            r4[r13] = r15     // Catch: java.lang.Throwable -> L432
            java.util.concurrent.CopyOnWriteArrayList r5 = new java.util.concurrent.CopyOnWriteArrayList     // Catch: java.lang.Throwable -> L432
            r5.<init>(r1)     // Catch: java.lang.Throwable -> L432
            r4[r16] = r5     // Catch: java.lang.Throwable -> L432
            java.lang.Integer r1 = java.lang.Integer.valueOf(r13)     // Catch: java.lang.Throwable -> L432
            r4[r8] = r1     // Catch: java.lang.Throwable -> L432
            r1 = 0
            r4[r7] = r1     // Catch: java.lang.Throwable -> L432
            r3.invoke(r2, r4)     // Catch: java.lang.Throwable -> L432
            java.lang.String r1 = "load"
            java.lang.Class[] r3 = new java.lang.Class[r13]     // Catch: java.lang.Throwable -> L432
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Throwable -> L432
            java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.Throwable -> L432
            java.lang.Object[] r1 = new java.lang.Object[r13]     // Catch: java.lang.Throwable -> L432
            r1[r5] = r15     // Catch: java.lang.Throwable -> L432
            r0.invoke(r2, r1)     // Catch: java.lang.Throwable -> L432
            goto L44d
        L432:
            java.lang.String r0 = com.mbridge.msdk.mbnative.controller.b.d     // Catch: java.lang.Exception -> L443
            java.lang.String r1 = "init cam cache failed"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Exception -> L443
            goto L44d
        L43a:
            r6 = r9
            if (r6 == 0) goto L442
            java.lang.String r0 = "don't have sorceList"
            r6.onPreloadFaild(r0)     // Catch: java.lang.Exception -> L443
        L442:
            return
        L443:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.mbnative.controller.b.d
            java.lang.String r0 = com.mbridge.msdk.mbnative.b.a.a(r0)
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L44d:
            return
    }

    public final void a(boolean r2, com.mbridge.msdk.b.a.a r3, java.lang.String r4) {
            r1 = this;
            r0 = 1
            if (r2 == 0) goto L12
            if (r3 == 0) goto L20
            boolean r2 = r3.a()
            if (r2 != 0) goto L20
            r3.a(r0)
            r3.onPreloadSucceed()
            goto L20
        L12:
            if (r3 == 0) goto L20
            boolean r2 = r3.a()
            if (r2 != 0) goto L20
            r3.a(r0)
            r3.onPreloadFaild(r4)
        L20:
            return
    }

    public final void a(boolean r3, com.mbridge.msdk.out.Campaign r4) {
            r2 = this;
            if (r4 != 0) goto L3
            return
        L3:
            r0 = 0
            if (r3 == 0) goto Lf
            android.graphics.drawable.Drawable r1 = r4.getIconDrawable()
            if (r1 != 0) goto Lf
            r4.loadIconUrlAsyncWithBlock(r0)
        Lf:
            if (r3 == 0) goto L1a
            android.graphics.drawable.Drawable r3 = r4.getBigDrawable()
            if (r3 != 0) goto L1a
            r4.loadImageUrlAsyncWithBlock(r0)
        L1a:
            return
    }
}
