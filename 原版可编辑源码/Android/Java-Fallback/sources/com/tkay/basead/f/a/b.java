package com.tkay.basead.f.a;

public final class b {
    private static com.tkay.basead.f.a.b a;
    private android.content.Context b;
    private java.text.SimpleDateFormat c;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.basead.c.c> d;


    private b(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.d = r0
            android.content.Context r2 = r2.getApplicationContext()
            r1.b = r2
            java.text.SimpleDateFormat r2 = new java.text.SimpleDateFormat
            java.lang.String r0 = "yyyyMMdd"
            r2.<init>(r0)
            r1.c = r2
            return
    }

    static android.content.Context a(com.tkay.basead.f.a.b r0) {
            android.content.Context r0 = r0.b
            return r0
    }

    public static com.tkay.basead.f.a.b a(android.content.Context r1) {
            com.tkay.basead.f.a.b r0 = com.tkay.basead.f.a.b.a
            if (r0 != 0) goto Lb
            com.tkay.basead.f.a.b r0 = new com.tkay.basead.f.a.b
            r0.<init>(r1)
            com.tkay.basead.f.a.b.a = r0
        Lb:
            com.tkay.basead.f.a.b r1 = com.tkay.basead.f.a.b.a
            return r1
    }

    public final java.lang.String a() {
            r4 = this;
            long r0 = java.lang.System.currentTimeMillis()
            java.text.SimpleDateFormat r2 = r4.c
            java.util.Date r3 = new java.util.Date
            r3.<init>(r0)
            java.lang.String r0 = r2.format(r3)
            android.content.Context r1 = r4.b
            com.tkay.basead.b.c r1 = com.tkay.basead.b.c.a(r1)
            java.util.List r0 = r1.b(r0)
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>()
            if (r0 == 0) goto L36
            java.util.Iterator r0 = r0.iterator()
        L24:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L36
            java.lang.Object r2 = r0.next()
            com.tkay.basead.c.c r2 = (com.tkay.basead.c.c) r2
            java.lang.String r2 = r2.a
            r1.put(r2)
            goto L24
        L36:
            java.lang.String r0 = r1.toString()
            return r0
    }

    public final void a(com.tkay.core.common.f.r r6) {
            r5 = this;
            long r0 = java.lang.System.currentTimeMillis()
            java.text.SimpleDateFormat r2 = r5.c
            java.util.Date r3 = new java.util.Date
            r3.<init>(r0)
            java.lang.String r2 = r2.format(r3)
            com.tkay.basead.c.c r6 = r5.d(r6)
            java.lang.String r3 = r6.f
            boolean r3 = r3.equals(r2)
            r4 = 1
            if (r3 == 0) goto L22
            int r2 = r6.d
            int r2 = r2 + r4
            r6.d = r2
            goto L26
        L22:
            r6.d = r4
            r6.f = r2
        L26:
            r6.e = r0
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.basead.f.a.b$1 r1 = new com.tkay.basead.f.a.b$1
            r1.<init>(r5, r6)
            r0.a(r1)
            return
    }

    public final boolean a(java.lang.String r3) {
            r2 = this;
            android.content.Context r0 = r2.b
            com.tkay.core.c.e r0 = com.tkay.core.c.e.a(r0)
            com.tkay.core.c.d r3 = r0.a(r3)
            r0 = 0
            if (r3 != 0) goto Le
            return r0
        Le:
            java.util.List r3 = r3.F()
            if (r3 == 0) goto L33
            int r1 = r3.size()
            if (r1 > 0) goto L1b
            goto L33
        L1b:
            java.util.Iterator r3 = r3.iterator()
        L1f:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L32
            java.lang.Object r1 = r3.next()
            com.tkay.core.common.f.r r1 = (com.tkay.core.common.f.r) r1
            boolean r1 = r2.b(r1)
            if (r1 != 0) goto L1f
            goto L33
        L32:
            r0 = 1
        L33:
            return r0
    }

    public final boolean b(com.tkay.core.common.f.r r5) {
            r4 = this;
            com.tkay.basead.c.c r0 = r4.d(r5)
            int r1 = r5.R
            r2 = 0
            r3 = -1
            if (r1 != r3) goto Lb
            return r2
        Lb:
            int r0 = r0.d
            int r5 = r5.R
            if (r0 < r5) goto L13
            r5 = 1
            return r5
        L13:
            return r2
    }

    public final boolean c(com.tkay.core.common.f.r r5) {
            r4 = this;
            long r0 = java.lang.System.currentTimeMillis()
            com.tkay.basead.c.c r2 = r4.d(r5)
            long r2 = r2.e
            long r0 = r0 - r2
            long r2 = r5.S
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 > 0) goto L13
            r5 = 1
            return r5
        L13:
            r5 = 0
            return r5
    }

    public final com.tkay.basead.c.c d(com.tkay.core.common.f.r r6) {
            r5 = this;
            long r0 = java.lang.System.currentTimeMillis()
            java.text.SimpleDateFormat r2 = r5.c
            java.util.Date r3 = new java.util.Date
            r3.<init>(r0)
            java.lang.String r0 = r2.format(r3)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.basead.c.c> r1 = r5.d
            java.lang.String r2 = r6.p()
            java.lang.Object r1 = r1.get(r2)
            com.tkay.basead.c.c r1 = (com.tkay.basead.c.c) r1
            r2 = 0
            if (r1 != 0) goto L52
            android.content.Context r1 = r5.b
            com.tkay.basead.b.c r1 = com.tkay.basead.b.c.a(r1)
            java.lang.String r3 = r6.p()
            com.tkay.basead.c.c r1 = r1.a(r3)
            if (r1 != 0) goto L49
            com.tkay.basead.c.c r1 = new com.tkay.basead.c.c
            r1.<init>()
            java.lang.String r3 = r6.p()
            r1.a = r3
            int r3 = r6.R
            r1.b = r3
            long r3 = r6.S
            r1.c = r3
            r3 = 0
            r1.e = r3
            r1.d = r2
            r1.f = r0
        L49:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.basead.c.c> r3 = r5.d
            java.lang.String r6 = r6.p()
            r3.put(r6, r1)
        L52:
            java.lang.String r6 = r1.f
            boolean r6 = android.text.TextUtils.equals(r0, r6)
            if (r6 != 0) goto L5e
            r1.f = r0
            r1.d = r2
        L5e:
            return r1
    }
}
