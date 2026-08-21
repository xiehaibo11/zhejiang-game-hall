package com.mbridge.msdk.click.a;

public final class a {
    public static java.lang.String a = "mtg_retry_report=1";
    public static int b = 10000;
    public static int c = 3;
    public static int d = 50;
    public static int e = 600000;
    public static int f = 0;
    public static int g = 1;
    public static int h = 2;
    public static int i = 3;
    public static int j = 4;
    public static int k = 5;
    private static java.lang.String l = "RetryReportControl";
    private static int o;
    private static int p;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.click.a.b> m;
    private com.mbridge.msdk.click.a.c n;
    private android.content.BroadcastReceiver q;
    private final android.os.Handler r;



    private static class a {
        private static com.mbridge.msdk.click.a.a a;

        static {
                com.mbridge.msdk.click.a.a r0 = new com.mbridge.msdk.click.a.a
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.click.a.a.a.a = r0
                return
        }

        static com.mbridge.msdk.click.a.a a() {
                com.mbridge.msdk.click.a.a r0 = com.mbridge.msdk.click.a.a.a.a
                return r0
        }
    }

    private static class b extends android.os.Handler {
        public b(android.os.Looper r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void handleMessage(android.os.Message r3) {
                r2 = this;
                int r0 = r3.what
                r1 = 1
                if (r0 == r1) goto L11
                r3 = 2
                if (r0 == r3) goto L9
                goto L22
            L9:
                com.mbridge.msdk.click.a.a r3 = com.mbridge.msdk.click.a.a.a()
                com.mbridge.msdk.click.a.a.a(r3)
                goto L22
            L11:
                java.lang.Object r3 = r3.obj
                boolean r0 = r3 instanceof java.lang.String
                if (r0 == 0) goto L22
                java.lang.String r3 = (java.lang.String) r3
                com.mbridge.msdk.click.a.a r0 = com.mbridge.msdk.click.a.a.a()
                int r1 = com.mbridge.msdk.click.a.b.a
                com.mbridge.msdk.click.a.a.a(r0, r3, r1)
            L22:
                return
        }
    }

    static {
            return
    }

    private a() {
            r3 = this;
            r3.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r3.m = r0
            com.mbridge.msdk.click.a.c r0 = new com.mbridge.msdk.click.a.c
            int r1 = com.mbridge.msdk.click.a.a.d
            r0.<init>(r1)
            r3.n = r0
            com.mbridge.msdk.click.a.a$b r0 = new com.mbridge.msdk.click.a.a$b
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r3.r = r0
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            com.mbridge.msdk.c.a r0 = r0.g(r1)
            int r1 = r0.g()
            com.mbridge.msdk.click.a.a.c = r1
            int r1 = r0.i()
            int r1 = r1 * 1000
            com.mbridge.msdk.click.a.a.b = r1
            int r1 = r0.h()
            int r1 = r1 * 1000
            com.mbridge.msdk.click.a.a.e = r1
            int r1 = r0.f()
            com.mbridge.msdk.click.a.a.o = r1
            int r0 = r0.e()
            com.mbridge.msdk.click.a.a.p = r0
            android.content.BroadcastReceiver r0 = r3.q     // Catch: java.lang.Exception -> L72
            if (r0 != 0) goto L76
            com.mbridge.msdk.click.a.a$2 r0 = new com.mbridge.msdk.click.a.a$2     // Catch: java.lang.Exception -> L72
            r0.<init>(r3)     // Catch: java.lang.Exception -> L72
            r3.q = r0     // Catch: java.lang.Exception -> L72
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L72
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L72
            if (r0 == 0) goto L76
            android.content.IntentFilter r1 = new android.content.IntentFilter     // Catch: java.lang.Exception -> L72
            java.lang.String r2 = "android.net.conn.CONNECTIVITY_CHANGE"
            r1.<init>(r2)     // Catch: java.lang.Exception -> L72
            android.content.BroadcastReceiver r2 = r3.q     // Catch: java.lang.Exception -> L72
            r0.registerReceiver(r2, r1)     // Catch: java.lang.Exception -> L72
            goto L76
        L72:
            r0 = move-exception
            r0.printStackTrace()
        L76:
            return
    }

    a(com.mbridge.msdk.click.a.a.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.click.a.a a() {
            com.mbridge.msdk.click.a.a r0 = com.mbridge.msdk.click.a.a.a.a()
            return r0
    }

    private static void a(android.content.Context r5, java.lang.String r6) {
            if (r5 == 0) goto L2e
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 != 0) goto L2e
            com.mbridge.msdk.foundation.same.report.d.a r0 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L21
            r0.<init>(r5)     // Catch: java.lang.Exception -> L21
            com.mbridge.msdk.foundation.same.net.g.d r1 = com.mbridge.msdk.foundation.same.report.e.a(r6, r5)     // Catch: java.lang.Exception -> L21
            r2 = 0
            com.mbridge.msdk.foundation.same.net.f.d r3 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L21
            java.lang.String r3 = r3.a     // Catch: java.lang.Exception -> L21
            com.mbridge.msdk.click.a.a$1 r4 = new com.mbridge.msdk.click.a.a$1     // Catch: java.lang.Exception -> L21
            r4.<init>(r6, r5)     // Catch: java.lang.Exception -> L21
            r0.post(r2, r3, r1, r4)     // Catch: java.lang.Exception -> L21
            goto L2e
        L21:
            r5 = move-exception
            r5.printStackTrace()
            java.lang.String r6 = com.mbridge.msdk.click.a.a.l
            java.lang.String r5 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r6, r5)
        L2e:
            return
    }

    private static void a(android.content.Context r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, int r10) {
            java.lang.String r0 = "utf-8"
            java.lang.String r1 = "&"
            if (r5 == 0) goto Le6
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Le2
            if (r2 != 0) goto Le6
            java.lang.StringBuffer r2 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> Le2
            r2.<init>()     // Catch: java.lang.Throwable -> Le2
            java.lang.String r3 = "key=2000105&"
            r2.append(r3)     // Catch: java.lang.Throwable -> Le2
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le2
            r3.<init>()     // Catch: java.lang.Throwable -> Le2
            java.lang.String r4 = "url="
            r3.append(r4)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r7 = java.net.URLEncoder.encode(r7, r0)     // Catch: java.lang.Throwable -> Le2
            r3.append(r7)     // Catch: java.lang.Throwable -> Le2
            r3.append(r1)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r7 = r3.toString()     // Catch: java.lang.Throwable -> Le2
            r2.append(r7)     // Catch: java.lang.Throwable -> Le2
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le2
            r7.<init>()     // Catch: java.lang.Throwable -> Le2
            java.lang.String r3 = "type="
            r7.append(r3)     // Catch: java.lang.Throwable -> Le2
            r7.append(r10)     // Catch: java.lang.Throwable -> Le2
            r7.append(r1)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> Le2
            r2.append(r7)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r7 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> Le2
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Le2
            if (r7 != 0) goto L69
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le2
            r7.<init>()     // Catch: java.lang.Throwable -> Le2
            java.lang.String r10 = "b="
            r7.append(r10)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r10 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> Le2
            r7.append(r10)     // Catch: java.lang.Throwable -> Le2
            r7.append(r1)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> Le2
            r2.append(r7)     // Catch: java.lang.Throwable -> Le2
        L69:
            java.lang.String r7 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> Le2
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Le2
            if (r7 != 0) goto L8a
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le2
            r7.<init>()     // Catch: java.lang.Throwable -> Le2
            java.lang.String r10 = "c="
            r7.append(r10)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r10 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> Le2
            r7.append(r10)     // Catch: java.lang.Throwable -> Le2
            r7.append(r1)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> Le2
            r2.append(r7)     // Catch: java.lang.Throwable -> Le2
        L8a:
            boolean r7 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> Le2
            if (r7 != 0) goto L9b
            java.lang.String r7 = "rid="
            r2.append(r7)     // Catch: java.lang.Throwable -> Le2
            r2.append(r8)     // Catch: java.lang.Throwable -> Le2
            r2.append(r1)     // Catch: java.lang.Throwable -> Le2
        L9b:
            boolean r7 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> Le2
            if (r7 != 0) goto Lac
            java.lang.String r7 = "rid_n="
            r2.append(r7)     // Catch: java.lang.Throwable -> Le2
            r2.append(r9)     // Catch: java.lang.Throwable -> Le2
            r2.append(r1)     // Catch: java.lang.Throwable -> Le2
        Lac:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le2
            r7.<init>()     // Catch: java.lang.Throwable -> Le2
            java.lang.String r8 = "reason="
            r7.append(r8)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r6 = java.net.URLEncoder.encode(r6, r0)     // Catch: java.lang.Throwable -> Le2
            r7.append(r6)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r6 = r7.toString()     // Catch: java.lang.Throwable -> Le2
            r2.append(r6)     // Catch: java.lang.Throwable -> Le2
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> Le2
            boolean r6 = r6.c()     // Catch: java.lang.Throwable -> Le2
            if (r6 == 0) goto Lda
            com.mbridge.msdk.foundation.same.report.b r5 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> Le2
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> Le2
            r5.a(r6)     // Catch: java.lang.Throwable -> Le2
            goto Le6
        Lda:
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> Le2
            a(r5, r6)     // Catch: java.lang.Throwable -> Le2
            goto Le6
        Le2:
            r5 = move-exception
            r5.printStackTrace()
        Le6:
            return
    }

    static void a(com.mbridge.msdk.click.a.a r3) {
            com.mbridge.msdk.click.a.c r0 = r3.n
            if (r0 == 0) goto L1e
            java.util.Collection r0 = r0.a()
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1e
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            int r2 = com.mbridge.msdk.click.a.b.b
            r3.a(r1, r2)
            goto Lc
        L1e:
            return
    }

    static void a(com.mbridge.msdk.click.a.a r0, java.lang.String r1, int r2) {
            r0.a(r1, r2)
            return
    }

    private void a(com.mbridge.msdk.click.a.b r7) {
            r6 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.f()     // Catch: java.lang.Exception -> L31
            java.lang.String r1 = ""
            if (r0 == 0) goto L13
            java.lang.String r1 = r0.getRequestId()     // Catch: java.lang.Exception -> L31
            java.lang.String r0 = r0.getRequestIdNotice()     // Catch: java.lang.Exception -> L31
            r4 = r0
            r3 = r1
            goto L15
        L13:
            r3 = r1
            r4 = r3
        L15:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L31
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L31
            java.util.HashSet r1 = r7.i()     // Catch: java.lang.Exception -> L31
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L31
            java.lang.String r2 = r7.g()     // Catch: java.lang.Exception -> L31
            int r5 = r7.d()     // Catch: java.lang.Exception -> L31
            a(r0, r1, r2, r3, r4, r5)     // Catch: java.lang.Exception -> L31
            goto L35
        L31:
            r7 = move-exception
            r7.printStackTrace()
        L35:
            return
    }

    private void a(java.lang.String r4) {
            r3 = this;
            android.os.Handler r0 = r3.r
            android.os.Message r0 = r0.obtainMessage()
            r1 = 1
            r0.what = r1
            r0.obj = r4
            android.os.Handler r4 = r3.r
            int r1 = com.mbridge.msdk.click.a.a.b
            long r1 = (long) r1
            r4.sendMessageDelayed(r0, r1)
            return
    }

    private void a(java.lang.String r9, int r10) {
            r8 = this;
            com.mbridge.msdk.click.a.c r0 = r8.n
            if (r0 == 0) goto Lac
            com.mbridge.msdk.click.a.b r0 = r0.a(r9)
            com.mbridge.msdk.click.a.c r1 = r8.n
            r1.b(r9)
            if (r0 == 0) goto L83
            long r1 = java.lang.System.currentTimeMillis()
            long r3 = r0.j()
            int r5 = com.mbridge.msdk.click.a.a.e
            long r5 = (long) r5
            long r3 = r3 + r5
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 > 0) goto L7b
            r0.a(r10)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.click.a.b> r10 = r8.m
            r10.put(r9, r0)
            int r10 = com.mbridge.msdk.foundation.tools.ak.b(r9)
            if (r10 != 0) goto L44
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            r10.append(r9)
            java.lang.String r9 = "?"
            r10.append(r9)
            java.lang.String r9 = com.mbridge.msdk.click.a.a.a
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            goto L5a
        L44:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            r10.append(r9)
            java.lang.String r9 = "&"
            r10.append(r9)
            java.lang.String r9 = com.mbridge.msdk.click.a.a.a
            r10.append(r9)
            java.lang.String r9 = r10.toString()
        L5a:
            r4 = r9
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r0.f()
            com.mbridge.msdk.foundation.controller.a r9 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r9.j()
            java.lang.String r3 = r0.e()
            boolean r5 = r0.a()
            boolean r6 = r0.b()
            int r7 = r0.d()
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6, r7)
            goto Lac
        L7b:
            int r9 = com.mbridge.msdk.click.a.b.b
            if (r10 == r9) goto Lac
            r8.a(r0)
            goto Lac
        L83:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.click.a.b> r0 = r8.m
            java.lang.Object r0 = r0.get(r9)
            com.mbridge.msdk.click.a.b r0 = (com.mbridge.msdk.click.a.b) r0
            if (r0 == 0) goto Lac
            long r1 = java.lang.System.currentTimeMillis()
            long r3 = r0.j()
            int r5 = com.mbridge.msdk.click.a.a.e
            long r5 = (long) r5
            long r3 = r3 + r5
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 > 0) goto Lac
            int r0 = r0.h()
            int r1 = com.mbridge.msdk.click.a.a.c
            if (r0 >= r1) goto Lac
            int r0 = com.mbridge.msdk.click.a.b.b
            if (r10 == r0) goto Lac
            r8.a(r9)
        Lac:
            return
    }

    private boolean a(int r2) {
            r1 = this;
            int r0 = com.mbridge.msdk.click.a.a.j
            if (r2 == r0) goto Lb
            int r0 = com.mbridge.msdk.click.a.a.i
            if (r2 != r0) goto L9
            goto Lb
        L9:
            r2 = 0
            goto Lc
        Lb:
            r2 = 1
        Lc:
            return r2
    }

    static android.os.Handler b(com.mbridge.msdk.click.a.a r0) {
            android.os.Handler r0 = r0.r
            return r0
    }

    static java.lang.String b() {
            java.lang.String r0 = com.mbridge.msdk.click.a.a.l
            return r0
    }

    private boolean b(int r2) {
            r1 = this;
            int r0 = com.mbridge.msdk.click.a.a.g
            if (r2 == r0) goto Lb
            int r0 = com.mbridge.msdk.click.a.a.h
            if (r2 != r0) goto L9
            goto Lb
        L9:
            r2 = 0
            goto Lc
        Lb:
            r2 = 1
        Lc:
            return r2
    }

    public final void a(java.lang.String r7, java.lang.String r8, com.mbridge.msdk.foundation.entity.CampaignEx r9, java.lang.String r10, boolean r11, boolean r12, int r13) {
            r6 = this;
            boolean r0 = r6.a(r13)
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L15
            boolean r0 = r6.b(r13)
            if (r0 != 0) goto L15
            int r0 = com.mbridge.msdk.click.a.a.k
            if (r13 != r0) goto L13
            goto L15
        L13:
            r0 = r1
            goto L16
        L15:
            r0 = r2
        L16:
            if (r0 == 0) goto Le9
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 == 0) goto L20
            goto Le9
        L20:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "?"
            r0.append(r3)
            java.lang.String r3 = com.mbridge.msdk.click.a.a.a
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = ""
            java.lang.String r0 = r7.replace(r0, r3)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "&"
            r4.append(r5)
            java.lang.String r5 = com.mbridge.msdk.click.a.a.a
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.String r0 = r0.replace(r4, r3)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.click.a.b> r3 = r6.m
            if (r3 != 0) goto L5b
            java.util.concurrent.ConcurrentHashMap r3 = new java.util.concurrent.ConcurrentHashMap
            r3.<init>()
            r6.m = r3
        L5b:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.click.a.b> r3 = r6.m
            java.lang.Object r3 = r3.remove(r0)
            com.mbridge.msdk.click.a.b r3 = (com.mbridge.msdk.click.a.b) r3
            if (r3 != 0) goto L7a
            com.mbridge.msdk.click.a.b r3 = new com.mbridge.msdk.click.a.b
            r3.<init>(r7, r8)
            r3.b(r13)
            r3.a(r11)
            r3.b(r12)
            r3.a(r9)
            r3.a(r10)
            goto L85
        L7a:
            int r7 = r3.c()
            int r9 = com.mbridge.msdk.click.a.b.b
            if (r7 == r9) goto L85
            r3.b(r8)
        L85:
            boolean r7 = r6.a(r13)
            if (r7 == 0) goto L8f
            int r7 = com.mbridge.msdk.click.a.a.o
            if (r7 != 0) goto L9d
        L8f:
            boolean r7 = r6.b(r13)
            if (r7 == 0) goto L99
            int r7 = com.mbridge.msdk.click.a.a.p
            if (r7 != 0) goto L9d
        L99:
            int r7 = com.mbridge.msdk.click.a.a.k
            if (r13 != r7) goto L9e
        L9d:
            r1 = r2
        L9e:
            if (r1 == 0) goto Le6
            long r7 = java.lang.System.currentTimeMillis()
            long r9 = r3.j()
            int r11 = com.mbridge.msdk.click.a.a.e
            long r11 = (long) r11
            long r9 = r9 + r11
            int r7 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r7 >= 0) goto Lda
            com.mbridge.msdk.click.a.c r7 = r6.n
            if (r7 != 0) goto Lbd
            com.mbridge.msdk.click.a.c r7 = new com.mbridge.msdk.click.a.c
            int r8 = com.mbridge.msdk.click.a.a.d
            r7.<init>(r8)
            r6.n = r7
        Lbd:
            com.mbridge.msdk.click.a.c r7 = r6.n
            r7.a(r0, r3)
            int r7 = r3.c()
            int r8 = com.mbridge.msdk.click.a.b.a
            if (r7 != r8) goto Le9
            int r7 = r3.h()
            int r8 = com.mbridge.msdk.click.a.a.c
            if (r7 > r8) goto Ld6
            r6.a(r0)
            goto Le9
        Ld6:
            r6.a(r3)
            goto Le9
        Lda:
            int r7 = r3.c()
            int r8 = com.mbridge.msdk.click.a.b.a
            if (r7 != r8) goto Le9
            r6.a(r3)
            goto Le9
        Le6:
            r6.a(r3)
        Le9:
            return
    }
}
