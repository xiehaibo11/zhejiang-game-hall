package com.tkay.core.a;

public final class a {
    private static com.tkay.core.a.a e;
    com.tkay.core.common.c.l a;
    java.text.SimpleDateFormat b;
    java.text.SimpleDateFormat c;
    android.content.Context d;


    private a(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            com.tkay.core.common.c.c r0 = com.tkay.core.common.c.c.a(r2)
            com.tkay.core.common.c.l r0 = com.tkay.core.common.c.l.a(r0)
            r1.a = r0
            r1.d = r2
            java.text.SimpleDateFormat r2 = new java.text.SimpleDateFormat
            java.lang.String r0 = "yyyyMMdd"
            r2.<init>(r0)
            r1.b = r2
            java.text.SimpleDateFormat r2 = new java.text.SimpleDateFormat
            java.lang.String r0 = "yyyyMMddHH"
            r2.<init>(r0)
            r1.c = r2
            return
    }

    public static com.tkay.core.a.a a(android.content.Context r1) {
            com.tkay.core.a.a r0 = com.tkay.core.a.a.e
            if (r0 != 0) goto Lb
            com.tkay.core.a.a r0 = new com.tkay.core.a.a
            r0.<init>(r1)
            com.tkay.core.a.a.e = r0
        Lb:
            com.tkay.core.a.a r1 = com.tkay.core.a.a.e
            return r1
    }

    public final com.tkay.core.common.f.ad.a a(java.lang.String r6, java.lang.String r7) {
            r5 = this;
            long r0 = java.lang.System.currentTimeMillis()
            java.text.SimpleDateFormat r2 = r5.b
            java.util.Date r3 = new java.util.Date
            r3.<init>(r0)
            java.lang.String r2 = r2.format(r3)
            java.text.SimpleDateFormat r3 = r5.c
            java.util.Date r4 = new java.util.Date
            r4.<init>(r0)
            java.lang.String r0 = r3.format(r4)
            com.tkay.core.common.c.l r1 = r5.a
            com.tkay.core.common.f.ad$a r6 = r1.a(r6, r7, r2, r0)
            return r6
    }

    public final com.tkay.core.common.f.ad a(java.lang.String r6) {
            r5 = this;
            long r0 = java.lang.System.currentTimeMillis()
            java.text.SimpleDateFormat r2 = r5.b
            java.util.Date r3 = new java.util.Date
            r3.<init>(r0)
            java.lang.String r2 = r2.format(r3)
            java.text.SimpleDateFormat r3 = r5.c
            java.util.Date r4 = new java.util.Date
            r4.<init>(r0)
            java.lang.String r0 = r3.format(r4)
            com.tkay.core.common.c.l r1 = r5.a
            com.tkay.core.common.f.ad r6 = r1.a(r6, r2, r0)
            return r6
    }

    public final java.util.Map<java.lang.String, com.tkay.core.common.f.ad> a(int r6) {
            r5 = this;
            long r0 = java.lang.System.currentTimeMillis()
            java.text.SimpleDateFormat r2 = r5.b
            java.util.Date r3 = new java.util.Date
            r3.<init>(r0)
            java.lang.String r2 = r2.format(r3)
            java.text.SimpleDateFormat r3 = r5.c
            java.util.Date r4 = new java.util.Date
            r4.<init>(r0)
            java.lang.String r0 = r3.format(r4)
            com.tkay.core.common.c.l r1 = r5.a
            java.util.Map r6 = r1.a(r6, r2, r0)
            return r6
    }

    public final void a() {
            r2 = this;
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.a.a$1 r1 = new com.tkay.core.a.a$1
            r1.<init>(r2)
            r0.a(r1)
            return
    }

    public final void a(java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            r7 = this;
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            java.lang.Object r0 = r0.a(r9)
            monitor-enter(r0)
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L62
            java.text.SimpleDateFormat r3 = r7.b     // Catch: java.lang.Throwable -> L62
            java.util.Date r4 = new java.util.Date     // Catch: java.lang.Throwable -> L62
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L62
            java.lang.String r3 = r3.format(r4)     // Catch: java.lang.Throwable -> L62
            java.text.SimpleDateFormat r4 = r7.c     // Catch: java.lang.Throwable -> L62
            java.util.Date r5 = new java.util.Date     // Catch: java.lang.Throwable -> L62
            r5.<init>(r1)     // Catch: java.lang.Throwable -> L62
            java.lang.String r4 = r4.format(r5)     // Catch: java.lang.Throwable -> L62
            int r8 = java.lang.Integer.parseInt(r8)     // Catch: java.lang.Throwable -> L62
            com.tkay.core.common.f.ad$a r5 = r7.a(r9, r10)     // Catch: java.lang.Throwable -> L62
            if (r5 != 0) goto L34
            com.tkay.core.common.f.ad$a r5 = new com.tkay.core.common.f.ad$a     // Catch: java.lang.Throwable -> L62
            r5.<init>()     // Catch: java.lang.Throwable -> L62
            r5.a = r10     // Catch: java.lang.Throwable -> L62
        L34:
            java.lang.String r10 = r5.c     // Catch: java.lang.Throwable -> L62
            boolean r10 = android.text.TextUtils.equals(r3, r10)     // Catch: java.lang.Throwable -> L62
            r6 = 1
            if (r10 != 0) goto L42
            r5.d = r6     // Catch: java.lang.Throwable -> L62
            r5.c = r3     // Catch: java.lang.Throwable -> L62
            goto L47
        L42:
            int r10 = r5.d     // Catch: java.lang.Throwable -> L62
            int r10 = r10 + r6
            r5.d = r10     // Catch: java.lang.Throwable -> L62
        L47:
            java.lang.String r10 = r5.b     // Catch: java.lang.Throwable -> L62
            boolean r10 = android.text.TextUtils.equals(r4, r10)     // Catch: java.lang.Throwable -> L62
            if (r10 != 0) goto L54
            r5.e = r6     // Catch: java.lang.Throwable -> L62
            r5.b = r4     // Catch: java.lang.Throwable -> L62
            goto L59
        L54:
            int r10 = r5.e     // Catch: java.lang.Throwable -> L62
            int r10 = r10 + r6
            r5.e = r10     // Catch: java.lang.Throwable -> L62
        L59:
            r5.f = r1     // Catch: java.lang.Throwable -> L62
            com.tkay.core.common.c.l r10 = r7.a     // Catch: java.lang.Throwable -> L62
            r10.a(r8, r9, r5)     // Catch: java.lang.Throwable -> L62
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L62
            return
        L62:
            r8 = move-exception
            monitor-exit(r0)
            throw r8
    }

    public final boolean a(com.tkay.core.c.d r9, java.lang.String r10) {
            r8 = this;
            long r0 = r9.ac()
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 0
            if (r0 != 0) goto L14
            long r4 = r9.ad()
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 != 0) goto L14
            return r1
        L14:
            long r4 = java.lang.System.currentTimeMillis()
            java.text.SimpleDateFormat r0 = r8.b
            java.util.Date r6 = new java.util.Date
            r6.<init>(r4)
            java.lang.String r0 = r0.format(r6)
            java.text.SimpleDateFormat r6 = r8.c
            java.util.Date r7 = new java.util.Date
            r7.<init>(r4)
            java.lang.String r4 = r6.format(r7)
            com.tkay.core.common.c.l r5 = r8.a
            com.tkay.core.common.f.ad r10 = r5.a(r10, r0, r4)
            if (r10 == 0) goto L39
            int r0 = r10.c
            goto L3a
        L39:
            r0 = r1
        L3a:
            if (r10 == 0) goto L3f
            int r10 = r10.d
            goto L40
        L3f:
            r10 = r1
        L40:
            long r4 = r9.ac()
            int r4 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r4 == 0) goto L51
            long r4 = (long) r0
            long r6 = r9.ac()
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 >= 0) goto L63
        L51:
            long r4 = r9.ad()
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L65
            long r2 = (long) r10
            long r9 = r9.ad()
            int r9 = (r2 > r9 ? 1 : (r2 == r9 ? 0 : -1))
            if (r9 >= 0) goto L63
            goto L65
        L63:
            r9 = 1
            return r9
        L65:
            return r1
    }

    public final boolean a(java.lang.String r8, com.tkay.core.common.f.aj r9) {
            r7 = this;
            int r0 = r9.f()
            r1 = 0
            r2 = -1
            if (r0 != r2) goto Lf
            int r0 = r9.e()
            if (r0 != r2) goto Lf
            return r1
        Lf:
            long r3 = java.lang.System.currentTimeMillis()
            java.text.SimpleDateFormat r0 = r7.b
            java.util.Date r5 = new java.util.Date
            r5.<init>(r3)
            java.lang.String r0 = r0.format(r5)
            java.text.SimpleDateFormat r5 = r7.c
            java.util.Date r6 = new java.util.Date
            r6.<init>(r3)
            java.lang.String r3 = r5.format(r6)
            com.tkay.core.common.c.l r4 = r7.a
            java.lang.String r5 = r9.t()
            com.tkay.core.common.f.ad$a r8 = r4.a(r8, r5, r0, r3)
            if (r8 != 0) goto L3a
            com.tkay.core.common.f.ad$a r8 = new com.tkay.core.common.f.ad$a
            r8.<init>()
        L3a:
            int r0 = r9.f()
            if (r0 == r2) goto L48
            int r0 = r8.e
            int r3 = r9.f()
            if (r0 >= r3) goto L57
        L48:
            int r0 = r9.e()
            if (r0 == r2) goto L59
            int r8 = r8.d
            int r9 = r9.e()
            if (r8 >= r9) goto L57
            goto L59
        L57:
            r8 = 1
            return r8
        L59:
            return r1
    }
}
