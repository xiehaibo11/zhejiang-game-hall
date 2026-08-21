package com.kwad.sdk.core.network.idc;

public final class a {
    private final java.util.Map<java.lang.String, java.lang.String> apS;
    private final com.kwad.sdk.core.network.idc.a.a apT;
    private final java.util.Random apU;
    private final java.util.Map<java.lang.String, java.util.concurrent.atomic.AtomicBoolean> apV;
    private android.content.Context mContext;




    static final class a {
        private static final com.kwad.sdk.core.network.idc.a apX = null;

        static {
                com.kwad.sdk.core.network.idc.a r0 = new com.kwad.sdk.core.network.idc.a
                r1 = 0
                r0.<init>(r1)
                com.kwad.sdk.core.network.idc.a.a.apX = r0
                return
        }

        static com.kwad.sdk.core.network.idc.a Bq() {
                com.kwad.sdk.core.network.idc.a r0 = com.kwad.sdk.core.network.idc.a.a.apX
                return r0
        }
    }

    private a() {
            r4 = this;
            r4.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 8
            r0.<init>(r1)
            r4.apS = r0
            com.kwad.sdk.core.network.idc.a.a r0 = new com.kwad.sdk.core.network.idc.a.a
            r0.<init>()
            r4.apT = r0
            java.util.Random r0 = new java.util.Random
            long r1 = java.lang.System.currentTimeMillis()
            r0.<init>(r1)
            r4.apU = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r4.apV = r0
            java.util.concurrent.atomic.AtomicBoolean r1 = new java.util.concurrent.atomic.AtomicBoolean
            r2 = 0
            r1.<init>(r2)
            java.lang.String r3 = "api"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.util.concurrent.atomic.AtomicBoolean> r0 = r4.apV
            java.util.concurrent.atomic.AtomicBoolean r1 = new java.util.concurrent.atomic.AtomicBoolean
            r1.<init>(r2)
            java.lang.String r3 = "ulog"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.util.concurrent.atomic.AtomicBoolean> r0 = r4.apV
            java.util.concurrent.atomic.AtomicBoolean r1 = new java.util.concurrent.atomic.AtomicBoolean
            r1.<init>(r2)
            java.lang.String r3 = "zt"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.util.concurrent.atomic.AtomicBoolean> r0 = r4.apV
            java.util.concurrent.atomic.AtomicBoolean r1 = new java.util.concurrent.atomic.AtomicBoolean
            r1.<init>(r2)
            java.lang.String r2 = "cdn"
            r0.put(r2, r1)
            return
    }

    a(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.sdk.core.network.idc.a Bo() {
            com.kwad.sdk.core.network.idc.a r0 = com.kwad.sdk.core.network.idc.a.a.Bq()
            return r0
    }

    private void Bp() {
            r2 = this;
            android.content.Context r0 = r2.mContext
            com.kwad.sdk.core.network.idc.a.a r0 = com.kwad.sdk.core.network.idc.b.aY(r0)
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto L12
            android.content.Context r0 = r2.mContext
            com.kwad.sdk.core.network.idc.a.a r0 = com.kwad.sdk.core.network.idc.b.aX(r0)
        L12:
            com.kwad.sdk.core.network.idc.a.a r1 = r2.apT
            r1.b(r0)
            return
    }

    private void O(java.lang.String r12, java.lang.String r13) {
            r11 = this;
            java.lang.String r0 = "<<< switchHost end, type = "
            com.kwad.sdk.core.network.idc.a.a r1 = r11.apT
            java.util.List r1 = r1.dd(r13)
            boolean r2 = r1.isEmpty()
            if (r2 == 0) goto Lf
            return
        Lf:
            android.net.Uri r12 = android.net.Uri.parse(r12)
            java.lang.String r12 = r12.getHost()
            if (r12 == 0) goto L100
            boolean r2 = r12.isEmpty()
            if (r2 == 0) goto L21
            goto L100
        L21:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = ">>> switchHost start, type = "
            r2.<init>(r3)
            r2.append(r13)
            java.lang.String r3 = ", old host = "
            r2.append(r3)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            java.lang.String r4 = "IdcManager"
            com.kwad.sdk.core.e.c.d(r4, r2)
            java.util.Map<java.lang.String, java.util.concurrent.atomic.AtomicBoolean> r2 = r11.apV
            java.lang.Object r2 = r2.get(r13)
            java.util.concurrent.atomic.AtomicBoolean r2 = (java.util.concurrent.atomic.AtomicBoolean) r2
            r5 = 1
            r6 = 0
            boolean r7 = r2.compareAndSet(r6, r5)
            if (r7 == 0) goto L100
            java.lang.String r7 = r11.db(r13)     // Catch: java.lang.Throwable -> Le6
            boolean r8 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Le6
            if (r8 != 0) goto L5e
            boolean r7 = r12.equals(r7)     // Catch: java.lang.Throwable -> Le6
            if (r7 != 0) goto L5e
            r7 = r5
            goto L5f
        L5e:
            r7 = r6
        L5f:
            if (r7 == 0) goto L7a
            r2.set(r6)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
        L69:
            r1.append(r13)
            r1.append(r3)
            r1.append(r12)
            java.lang.String r12 = r1.toString()
            com.kwad.sdk.core.e.c.d(r4, r12)
            return
        L7a:
            int r7 = r1.size()     // Catch: java.lang.Throwable -> Le6
            int r8 = r1.indexOf(r12)     // Catch: java.lang.Throwable -> Le6
            if (r8 < 0) goto L86
            r9 = r5
            goto L87
        L86:
            r9 = r6
        L87:
            if (r9 == 0) goto L8b
            int r7 = r7 + (-1)
        L8b:
            if (r7 > 0) goto L96
            r2.set(r6)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
            goto L69
        L96:
            java.util.Random r10 = r11.apU     // Catch: java.lang.Throwable -> Le6
            int r7 = r10.nextInt(r7)     // Catch: java.lang.Throwable -> Le6
            int r7 = r7 + r5
            if (r9 == 0) goto La0
            int r7 = r7 + r8
        La0:
            int r5 = r1.size()     // Catch: java.lang.Throwable -> Le6
            int r7 = r7 % r5
            java.lang.Object r5 = r1.get(r7)     // Catch: java.lang.Throwable -> Le6
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> Le6
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le6
            java.lang.String r9 = "switchHost success, type = "
            r8.<init>(r9)     // Catch: java.lang.Throwable -> Le6
            r8.append(r13)     // Catch: java.lang.Throwable -> Le6
            r8.append(r3)     // Catch: java.lang.Throwable -> Le6
            r8.append(r12)     // Catch: java.lang.Throwable -> Le6
            java.lang.String r9 = ",new host = "
            r8.append(r9)     // Catch: java.lang.Throwable -> Le6
            r8.append(r5)     // Catch: java.lang.Throwable -> Le6
            java.lang.String r9 = ",hostList = "
            r8.append(r9)     // Catch: java.lang.Throwable -> Le6
            r8.append(r1)     // Catch: java.lang.Throwable -> Le6
            java.lang.String r1 = ", key = "
            r8.append(r1)     // Catch: java.lang.Throwable -> Le6
            r8.append(r7)     // Catch: java.lang.Throwable -> Le6
            java.lang.String r1 = r8.toString()     // Catch: java.lang.Throwable -> Le6
            com.kwad.sdk.core.e.c.d(r4, r1)     // Catch: java.lang.Throwable -> Le6
            r11.Q(r13, r5)     // Catch: java.lang.Throwable -> Le6
            r2.set(r6)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
            goto L69
        Le6:
            r1 = move-exception
            r2.set(r6)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r0)
            r2.append(r13)
            r2.append(r3)
            r2.append(r12)
            java.lang.String r12 = r2.toString()
            com.kwad.sdk.core.e.c.d(r4, r12)
            throw r1
        L100:
            return
    }

    private void Q(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.apS
            r0.put(r2, r3)
            com.kwad.sdk.core.network.idc.a$3 r2 = new com.kwad.sdk.core.network.idc.a$3
            r2.<init>(r1)
            com.kwad.sdk.utils.g.execute(r2)
            return
    }

    static java.util.Map a(com.kwad.sdk.core.network.idc.a r0) {
            java.util.Map<java.lang.String, java.lang.String> r0 = r0.apS
            return r0
    }

    static void a(com.kwad.sdk.core.network.idc.a r0, java.lang.String r1) {
            r0.da(r1)
            return
    }

    private static boolean a(com.kwad.sdk.core.network.idc.DomainException r2) {
            int r0 = r2.getHttpCode()
            r1 = 500(0x1f4, float:7.0E-43)
            if (r0 < r1) goto La
            r2 = 1
            return r2
        La:
            boolean r2 = r2.isConnectException()
            return r2
    }

    static void b(com.kwad.sdk.core.network.idc.a r0) {
            r0.Bp()
            return
    }

    static com.kwad.sdk.core.network.idc.a.a c(com.kwad.sdk.core.network.idc.a r0) {
            com.kwad.sdk.core.network.idc.a.a r0 = r0.apT
            return r0
    }

    static android.content.Context d(com.kwad.sdk.core.network.idc.a r0) {
            android.content.Context r0 = r0.mContext
            return r0
    }

    private void da(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = r3.db(r4)
            com.kwad.sdk.core.network.idc.a.a r1 = r3.apT
            java.util.List r1 = r1.dd(r4)
            boolean r2 = r1.isEmpty()
            if (r2 == 0) goto L11
            return
        L11:
            r2 = 0
            java.lang.Object r1 = r1.get(r2)
            java.lang.String r1 = (java.lang.String) r1
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            if (r0 == 0) goto L1f
            return
        L1f:
            boolean r0 = com.kwad.sdk.utils.ag.fB(r1)
            if (r0 == 0) goto L28
            r3.Q(r4, r1)
        L28:
            return
    }

    private java.lang.String db(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.apS
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    public final java.lang.String P(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.apS
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Lf
            return r3
        Lf:
            return r2
    }

    public final java.lang.String R(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L9
            java.lang.String r3 = ""
            return r3
        L9:
            java.lang.String r4 = r2.db(r4)
            if (r4 == 0) goto L70
            boolean r0 = r4.isEmpty()
            if (r0 == 0) goto L16
            goto L70
        L16:
            android.net.Uri r0 = android.net.Uri.parse(r3)
            java.lang.String r1 = r0.getPath()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L25
            return r3
        L25:
            java.lang.String r1 = r0.getHost()
            boolean r1 = r4.equals(r1)
            if (r1 == 0) goto L30
            return r3
        L30:
            android.net.Uri$Builder r3 = new android.net.Uri$Builder
            r3.<init>()
            r3.authority(r4)
            java.lang.String r4 = r0.getScheme()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto L45
            java.lang.String r4 = "https"
            goto L49
        L45:
            java.lang.String r4 = r0.getScheme()
        L49:
            r3.scheme(r4)
            java.lang.String r4 = r0.getPath()
            r3.path(r4)
            java.lang.String r4 = r0.getQuery()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L64
            java.lang.String r4 = r0.getQuery()
            r3.query(r4)
        L64:
            android.net.Uri r3 = r3.build()
            java.lang.String r3 = r3.toString()
            java.lang.String r3 = java.net.URLDecoder.decode(r3)
        L70:
            return r3
    }

    public final void a(com.kwad.sdk.core.network.idc.a.a r2) {
            r1 = this;
            com.kwad.sdk.core.network.idc.a.a r0 = r1.apT
            r0.b(r2)
            com.kwad.sdk.core.network.idc.a$2 r2 = new com.kwad.sdk.core.network.idc.a$2
            r2.<init>(r1)
            com.kwad.sdk.utils.g.execute(r2)
            return
    }

    public final void a(java.lang.String r2, int r3, java.lang.Throwable r4) {
            r1 = this;
            com.kwad.sdk.core.network.idc.DomainException r0 = new com.kwad.sdk.core.network.idc.DomainException
            r0.<init>(r3, r4)
            java.lang.String r3 = "ulog"
            r1.a(r2, r3, r0)
            return
    }

    public final void a(java.lang.String r1, java.lang.String r2, com.kwad.sdk.core.network.idc.DomainException r3) {
            r0 = this;
            if (r1 != 0) goto L3
            return
        L3:
            boolean r3 = a(r3)
            if (r3 == 0) goto Lc
            r0.O(r1, r2)
        Lc:
            return
    }

    public final void d(java.lang.String r2, java.lang.Throwable r3) {
            r1 = this;
            com.kwad.sdk.core.network.idc.DomainException r0 = new com.kwad.sdk.core.network.idc.DomainException
            r0.<init>(r3)
            java.lang.String r3 = "cdn"
            r1.a(r2, r3, r0)
            return
    }

    public final java.lang.String dc(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "cdn"
            java.lang.String r2 = r1.R(r2, r0)
            return r2
    }

    public final void init(android.content.Context r2) {
            r1 = this;
            android.content.Context r0 = r2.getApplicationContext()
            r1.mContext = r0
            com.kwad.sdk.core.network.idc.a$1 r0 = new com.kwad.sdk.core.network.idc.a$1
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.g.execute(r0)
            return
    }
}
