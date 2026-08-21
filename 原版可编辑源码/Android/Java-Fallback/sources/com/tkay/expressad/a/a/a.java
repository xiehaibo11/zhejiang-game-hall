package com.tkay.expressad.a.a;

public final class a {
    public static java.lang.String a = "mtg_retry_report=1";
    public static int b = 10000;
    public static final int c = 1;
    public static final int d = 2;
    public static int e = 3;
    public static int f = 50;
    public static int g = 600000;
    public static int h = 0;
    public static int i = 1;
    public static int j = 2;
    public static int k = 3;
    public static int l = 4;
    public static int m = 5;
    private static java.lang.String n = "RetryReportControl";
    private static int q;
    private static int r;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.a.a.b> o;
    private com.tkay.expressad.a.a.c p;
    private android.content.BroadcastReceiver s;
    private final android.os.Handler t;

    final class 1 extends android.content.BroadcastReceiver {
        final com.tkay.expressad.a.a.a a;

        1(com.tkay.expressad.a.a.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onReceive(android.content.Context r1, android.content.Intent r2) {
                r0 = this;
                java.lang.String r1 = r2.getAction()
                java.lang.String r2 = "android.net.conn.CONNECTIVITY_CHANGE"
                boolean r1 = r2.equals(r1)
                if (r1 == 0) goto L16
                com.tkay.expressad.a.a.a r1 = r0.a
                android.os.Handler r1 = com.tkay.expressad.a.a.a.b(r1)
                r2 = 2
                r1.sendEmptyMessage(r2)
            L16:
                return
        }
    }

    private static class a {
        private static com.tkay.expressad.a.a.a a;

        static {
                com.tkay.expressad.a.a.a r0 = new com.tkay.expressad.a.a.a
                r1 = 0
                r0.<init>(r1)
                com.tkay.expressad.a.a.a.a.a = r0
                return
        }

        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.tkay.expressad.a.a.a a() {
                com.tkay.expressad.a.a.a r0 = com.tkay.expressad.a.a.a.a.a
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
                com.tkay.expressad.a.a.a r3 = com.tkay.expressad.a.a.a.a()
                com.tkay.expressad.a.a.a.a(r3)
                goto L22
            L11:
                java.lang.Object r3 = r3.obj
                boolean r0 = r3 instanceof java.lang.String
                if (r0 == 0) goto L22
                java.lang.String r3 = (java.lang.String) r3
                com.tkay.expressad.a.a.a r0 = com.tkay.expressad.a.a.a.a()
                int r1 = com.tkay.expressad.a.a.b.a
                com.tkay.expressad.a.a.a.a(r0, r3, r1)
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
            r3.o = r0
            com.tkay.expressad.a.a.c r0 = new com.tkay.expressad.a.a.c
            int r1 = com.tkay.expressad.a.a.a.f
            r0.<init>(r1)
            r3.p = r0
            com.tkay.expressad.a.a.a$b r0 = new com.tkay.expressad.a.a.a$b
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r3.t = r0
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            r0.e()
            com.tkay.expressad.d.a r0 = com.tkay.expressad.d.b.b()
            int r1 = r0.U()
            com.tkay.expressad.a.a.a.e = r1
            int r1 = r0.W()
            int r1 = r1 * 1000
            com.tkay.expressad.a.a.a.b = r1
            int r1 = r0.V()
            int r1 = r1 * 1000
            com.tkay.expressad.a.a.a.g = r1
            int r1 = r0.T()
            com.tkay.expressad.a.a.a.q = r1
            int r0 = r0.S()
            com.tkay.expressad.a.a.a.r = r0
            android.content.BroadcastReceiver r0 = r3.s     // Catch: java.lang.Exception -> L70
            if (r0 != 0) goto L6f
            com.tkay.expressad.a.a.a$1 r0 = new com.tkay.expressad.a.a.a$1     // Catch: java.lang.Exception -> L70
            r0.<init>(r3)     // Catch: java.lang.Exception -> L70
            r3.s = r0     // Catch: java.lang.Exception -> L70
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L70
            android.content.Context r0 = r0.f()     // Catch: java.lang.Exception -> L70
            if (r0 == 0) goto L6f
            android.content.IntentFilter r1 = new android.content.IntentFilter     // Catch: java.lang.Exception -> L70
            java.lang.String r2 = "android.net.conn.CONNECTIVITY_CHANGE"
            r1.<init>(r2)     // Catch: java.lang.Exception -> L70
            android.content.BroadcastReceiver r2 = r3.s     // Catch: java.lang.Exception -> L70
            r0.registerReceiver(r2, r1)     // Catch: java.lang.Exception -> L70
        L6f:
            return
        L70:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    a(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.expressad.a.a.a a() {
            com.tkay.expressad.a.a.a r0 = com.tkay.expressad.a.a.a.a.a()
            return r0
    }

    static void a(com.tkay.expressad.a.a.a r3) {
            com.tkay.expressad.a.a.c r0 = r3.p
            if (r0 == 0) goto L1e
            java.util.Collection r0 = r0.a()
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1e
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            int r2 = com.tkay.expressad.a.a.b.b
            r3.a(r1, r2)
            goto Lc
        L1e:
            return
    }

    static void a(com.tkay.expressad.a.a.a r0, java.lang.String r1, int r2) {
            r0.a(r1, r2)
            return
    }

    private void a(java.lang.String r4) {
            r3 = this;
            android.os.Handler r0 = r3.t
            android.os.Message r0 = r0.obtainMessage()
            r1 = 1
            r0.what = r1
            r0.obj = r4
            android.os.Handler r4 = r3.t
            int r1 = com.tkay.expressad.a.a.a.b
            long r1 = (long) r1
            r4.sendMessageDelayed(r0, r1)
            return
    }

    private void a(java.lang.String r9, int r10) {
            r8 = this;
            com.tkay.expressad.a.a.c r0 = r8.p
            if (r0 == 0) goto La9
            com.tkay.expressad.a.a.b r0 = r0.a(r9)
            com.tkay.expressad.a.a.c r1 = r8.p
            r1.b(r9)
            if (r0 == 0) goto L80
            long r1 = java.lang.System.currentTimeMillis()
            long r3 = r0.h()
            int r5 = com.tkay.expressad.a.a.a.g
            long r5 = (long) r5
            long r3 = r3 + r5
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 > 0) goto L7b
            r0.a(r10)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.a.a.b> r10 = r8.o
            r10.put(r9, r0)
            int r10 = com.tkay.expressad.foundation.h.x.b(r9)
            if (r10 != 0) goto L44
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            r10.append(r9)
            java.lang.String r9 = "?"
            r10.append(r9)
            java.lang.String r9 = com.tkay.expressad.a.a.a.a
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            goto L5a
        L44:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            r10.append(r9)
            java.lang.String r9 = "&"
            r10.append(r9)
            java.lang.String r9 = com.tkay.expressad.a.a.a.a
            r10.append(r9)
            java.lang.String r9 = r10.toString()
        L5a:
            r4 = r9
            com.tkay.expressad.foundation.d.c r2 = r0.f()
            com.tkay.core.common.b.m r9 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r9.f()
            java.lang.String r3 = r0.e()
            boolean r5 = r0.a()
            boolean r6 = r0.b()
            int r7 = r0.d()
            com.tkay.expressad.a.a.a(r1, r2, r3, r4, r5, r6, r7)
            return
        L7b:
            int r9 = com.tkay.expressad.a.a.b.b
            if (r10 == r9) goto La9
            return
        L80:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.a.a.b> r0 = r8.o
            java.lang.Object r0 = r0.get(r9)
            com.tkay.expressad.a.a.b r0 = (com.tkay.expressad.a.a.b) r0
            if (r0 == 0) goto La9
            long r1 = java.lang.System.currentTimeMillis()
            long r3 = r0.h()
            int r5 = com.tkay.expressad.a.a.a.g
            long r5 = (long) r5
            long r3 = r3 + r5
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 > 0) goto La9
            int r0 = r0.g()
            int r1 = com.tkay.expressad.a.a.a.e
            if (r0 >= r1) goto La9
            int r0 = com.tkay.expressad.a.a.b.b
            if (r10 == r0) goto La9
            r8.a(r9)
        La9:
            return
    }

    private void a(java.lang.String r3, com.tkay.expressad.a.a.b r4) {
            r2 = this;
            com.tkay.expressad.a.a.c r0 = r2.p
            if (r0 != 0) goto Ld
            com.tkay.expressad.a.a.c r0 = new com.tkay.expressad.a.a.c
            int r1 = com.tkay.expressad.a.a.a.f
            r0.<init>(r1)
            r2.p = r0
        Ld:
            com.tkay.expressad.a.a.c r0 = r2.p
            r0.a(r3, r4)
            return
    }

    private static boolean a(int r1) {
            int r0 = com.tkay.expressad.a.a.a.l
            if (r1 == r0) goto Lb
            int r0 = com.tkay.expressad.a.a.a.k
            if (r1 != r0) goto L9
            goto Lb
        L9:
            r1 = 0
            return r1
        Lb:
            r1 = 1
            return r1
    }

    static android.os.Handler b(com.tkay.expressad.a.a.a r0) {
            android.os.Handler r0 = r0.t
            return r0
    }

    private void b() {
            r3 = this;
            com.tkay.expressad.a.a.c r0 = r3.p
            if (r0 == 0) goto L1e
            java.util.Collection r0 = r0.a()
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1e
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            int r2 = com.tkay.expressad.a.a.b.b
            r3.a(r1, r2)
            goto Lc
        L1e:
            return
    }

    private static boolean b(int r1) {
            int r0 = com.tkay.expressad.a.a.a.i
            if (r1 == r0) goto Lb
            int r0 = com.tkay.expressad.a.a.a.j
            if (r1 != r0) goto L9
            goto Lb
        L9:
            r1 = 0
            return r1
        Lb:
            r1 = 1
            return r1
    }

    private void c() {
            r3 = this;
            android.content.BroadcastReceiver r0 = r3.s     // Catch: java.lang.Exception -> L22
            if (r0 != 0) goto L21
            com.tkay.expressad.a.a.a$1 r0 = new com.tkay.expressad.a.a.a$1     // Catch: java.lang.Exception -> L22
            r0.<init>(r3)     // Catch: java.lang.Exception -> L22
            r3.s = r0     // Catch: java.lang.Exception -> L22
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L22
            android.content.Context r0 = r0.f()     // Catch: java.lang.Exception -> L22
            if (r0 == 0) goto L21
            android.content.IntentFilter r1 = new android.content.IntentFilter     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = "android.net.conn.CONNECTIVITY_CHANGE"
            r1.<init>(r2)     // Catch: java.lang.Exception -> L22
            android.content.BroadcastReceiver r2 = r3.s     // Catch: java.lang.Exception -> L22
            r0.registerReceiver(r2, r1)     // Catch: java.lang.Exception -> L22
        L21:
            return
        L22:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    private static boolean c(int r1) {
            boolean r0 = a(r1)
            if (r0 != 0) goto L13
            boolean r0 = b(r1)
            if (r0 != 0) goto L13
            int r0 = com.tkay.expressad.a.a.a.m
            if (r1 != r0) goto L11
            goto L13
        L11:
            r1 = 0
            return r1
        L13:
            r1 = 1
            return r1
    }

    private void d() {
            r2 = this;
            android.content.BroadcastReceiver r0 = r2.s
            if (r0 == 0) goto L13
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            if (r0 == 0) goto L13
            android.content.BroadcastReceiver r1 = r2.s
            r0.unregisterReceiver(r1)
        L13:
            return
    }

    public final void a(java.lang.String r7, java.lang.String r8, com.tkay.expressad.foundation.d.c r9, java.lang.String r10, boolean r11, boolean r12, int r13) {
            r6 = this;
            boolean r0 = a(r13)
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L15
            boolean r0 = b(r13)
            if (r0 != 0) goto L15
            int r0 = com.tkay.expressad.a.a.a.m
            if (r13 != r0) goto L13
            goto L15
        L13:
            r0 = r1
            goto L16
        L15:
            r0 = r2
        L16:
            if (r0 == 0) goto Ld5
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 == 0) goto L20
            goto Ld5
        L20:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r3 = "?"
            r0.<init>(r3)
            java.lang.String r3 = com.tkay.expressad.a.a.a.a
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = ""
            java.lang.String r0 = r7.replace(r0, r3)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "&"
            r4.<init>(r5)
            java.lang.String r5 = com.tkay.expressad.a.a.a.a
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.String r0 = r0.replace(r4, r3)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.a.a.b> r3 = r6.o
            if (r3 != 0) goto L55
            java.util.concurrent.ConcurrentHashMap r3 = new java.util.concurrent.ConcurrentHashMap
            r3.<init>()
            r6.o = r3
        L55:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.a.a.b> r3 = r6.o
            java.lang.Object r3 = r3.remove(r0)
            com.tkay.expressad.a.a.b r3 = (com.tkay.expressad.a.a.b) r3
            if (r3 != 0) goto L74
            com.tkay.expressad.a.a.b r3 = new com.tkay.expressad.a.a.b
            r3.<init>(r7, r8)
            r3.b(r13)
            r3.a(r11)
            r3.b(r12)
            r3.a(r9)
            r3.a(r10)
            goto L7f
        L74:
            int r7 = r3.c()
            int r9 = com.tkay.expressad.a.a.b.b
            if (r7 == r9) goto L7f
            r3.b(r8)
        L7f:
            boolean r7 = a(r13)
            if (r7 == 0) goto L89
            int r7 = com.tkay.expressad.a.a.a.q
            if (r7 != 0) goto L97
        L89:
            boolean r7 = b(r13)
            if (r7 == 0) goto L93
            int r7 = com.tkay.expressad.a.a.a.r
            if (r7 != 0) goto L97
        L93:
            int r7 = com.tkay.expressad.a.a.a.m
            if (r13 != r7) goto L98
        L97:
            r1 = r2
        L98:
            if (r1 == 0) goto Ld5
            long r7 = java.lang.System.currentTimeMillis()
            long r9 = r3.h()
            int r11 = com.tkay.expressad.a.a.a.g
            long r11 = (long) r11
            long r9 = r9 + r11
            int r7 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r7 >= 0) goto Ld0
            com.tkay.expressad.a.a.c r7 = r6.p
            if (r7 != 0) goto Lb7
            com.tkay.expressad.a.a.c r7 = new com.tkay.expressad.a.a.c
            int r8 = com.tkay.expressad.a.a.a.f
            r7.<init>(r8)
            r6.p = r7
        Lb7:
            com.tkay.expressad.a.a.c r7 = r6.p
            r7.a(r0, r3)
            int r7 = r3.c()
            int r8 = com.tkay.expressad.a.a.b.a
            if (r7 != r8) goto Ld5
            int r7 = r3.g()
            int r8 = com.tkay.expressad.a.a.a.e
            if (r7 > r8) goto Ld5
            r6.a(r0)
            return
        Ld0:
            r3.c()
            int r7 = com.tkay.expressad.a.a.b.a
        Ld5:
            return
    }
}
