package com.loc;

public final class q {
    private volatile com.loc.q.b a;
    private com.loc.bd b;

    private static class a {
        static com.loc.q a;

        static {
                com.loc.q r0 = new com.loc.q
                r0.<init>()
                com.loc.q.a.a = r0
                return
        }
    }

    private static class b {
        protected boolean a;
        private int b;
        private final boolean c;
        private boolean d;

        private b() {
                r2 = this;
                r2.<init>()
                r0 = 0
                r2.b = r0
                r1 = 1
                r2.a = r1
                r2.c = r1
                r2.d = r0
                return
        }

        b(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public final void a(android.content.Context r3) {
                r2 = this;
                if (r3 != 0) goto L3
                return
            L3:
                int r0 = r2.b
                if (r0 > 0) goto L18
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 4
                if (r0 < r1) goto L18
                android.content.Context r3 = r3.getApplicationContext()
                android.content.pm.ApplicationInfo r3 = r3.getApplicationInfo()
                int r3 = r3.targetSdkVersion
                r2.b = r3
            L18:
                return
        }

        public final void a(boolean r1) {
                r0 = this;
                r0.a = r1
                return
        }

        public final boolean a() {
                r5 = this;
                boolean r0 = r5.d
                r1 = 1
                if (r0 != 0) goto L2f
                int r0 = android.os.Build.VERSION.SDK_INT
                r2 = 28
                r3 = 0
                if (r0 < r2) goto Le
                r0 = 1
                goto Lf
            Le:
                r0 = 0
            Lf:
                boolean r4 = r5.a
                if (r4 == 0) goto L23
                int r4 = r5.b
                if (r4 > 0) goto L19
                r4 = 28
            L19:
                if (r4 < r2) goto L1d
                r2 = 1
                goto L1e
            L1d:
                r2 = 0
            L1e:
                if (r2 == 0) goto L21
                goto L23
            L21:
                r2 = 0
                goto L24
            L23:
                r2 = 1
            L24:
                if (r0 == 0) goto L2a
                if (r2 == 0) goto L2a
                r0 = 1
                goto L2b
            L2a:
                r0 = 0
            L2b:
                if (r0 == 0) goto L2e
                goto L2f
            L2e:
                return r3
            L2f:
                return r1
        }
    }

    public q() {
            r2 = this;
            r2.<init>()
            com.loc.q$b r0 = new com.loc.q$b
            r1 = 0
            r0.<init>(r1)
            r2.a = r0
            com.loc.bd r0 = new com.loc.bd
            java.lang.String r1 = "HttpsDecisionUtil"
            r0.<init>(r1)
            r2.b = r0
            return
    }

    public static com.loc.q a() {
            com.loc.q r0 = com.loc.q.a.a
            return r0
    }

    public static java.lang.String a(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L22
            java.lang.String r0 = "https"
            boolean r1 = r2.startsWith(r0)
            if (r1 == 0) goto Lf
            goto L22
        Lf:
            android.net.Uri r1 = android.net.Uri.parse(r2)     // Catch: java.lang.Throwable -> L22
            android.net.Uri$Builder r1 = r1.buildUpon()     // Catch: java.lang.Throwable -> L22
            r1.scheme(r0)     // Catch: java.lang.Throwable -> L22
            android.net.Uri r0 = r1.build()     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Throwable -> L22
        L22:
            return r2
    }

    public static void b(android.content.Context r1) {
            r0 = 1
            b(r1, r0)
            return
    }

    private static void b(android.content.Context r1, boolean r2) {
            java.lang.String r0 = "open_common"
            android.content.SharedPreferences$Editor r1 = com.loc.bd.a(r1, r0)
            java.lang.String r0 = "a3"
            com.loc.bd.a(r1, r0, r2)
            com.loc.bd.a(r1)
            return
    }

    private static boolean c() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 != r1) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public final void a(android.content.Context r5) {
            r4 = this;
            com.loc.q$b r0 = r4.a
            if (r0 != 0) goto Lc
            com.loc.q$b r0 = new com.loc.q$b
            r1 = 0
            r0.<init>(r1)
            r4.a = r0
        Lc:
            com.loc.q$b r0 = r4.a
            r1 = 1
            java.lang.String r2 = "open_common"
            java.lang.String r3 = "a3"
            boolean r1 = com.loc.bd.a(r5, r2, r3, r1)
            r0.a(r1)
            com.loc.q$b r0 = r4.a
            r0.a(r5)
            com.loc.ah r5 = com.loc.ah.a(r5)
            r5.a()
            return
    }

    final void a(android.content.Context r3, boolean r4) {
            r2 = this;
            com.loc.q$b r0 = r2.a
            if (r0 != 0) goto Lc
            com.loc.q$b r0 = new com.loc.q$b
            r1 = 0
            r0.<init>(r1)
            r2.a = r0
        Lc:
            b(r3, r4)
            com.loc.q$b r3 = r2.a
            r3.a(r4)
            return
    }

    public final boolean a(boolean r3) {
            r2 = this;
            boolean r0 = c()
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            if (r3 != 0) goto L12
            boolean r3 = r2.b()
            if (r3 == 0) goto L11
            goto L12
        L11:
            return r1
        L12:
            r3 = 1
            return r3
    }

    public final boolean b() {
            r2 = this;
            com.loc.q$b r0 = r2.a
            if (r0 != 0) goto Lc
            com.loc.q$b r0 = new com.loc.q$b
            r1 = 0
            r0.<init>(r1)
            r2.a = r0
        Lc:
            com.loc.q$b r0 = r2.a
            boolean r0 = r0.a()
            return r0
    }
}
