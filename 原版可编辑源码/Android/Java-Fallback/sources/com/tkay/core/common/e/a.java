package com.tkay.core.common.e;

public class a {
    private static final java.lang.String a = "DomainManager";
    private static final java.lang.String b = "tkay_sdk";
    private static final java.lang.String c = "cdn_request_time_key";
    private static final java.lang.String d = "cur_using_domain_key";
    private static final java.lang.String e = "ru";
    private static final java.lang.String f = "api.";
    private static final int g = 24;
    private static final java.lang.String h = "api.anythinktech.com";
    private static final java.lang.String i = "api.toponadss.com";
    private static volatile com.tkay.core.common.e.a q;
    private final java.lang.Object j;
    private final java.util.List<java.lang.String> k;
    private volatile boolean l;
    private volatile boolean m;
    private volatile long n;
    private volatile java.lang.String o;
    private volatile java.lang.String p;


    private a() {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.j = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.List r0 = java.util.Collections.synchronizedList(r0)
            r1.k = r0
            java.lang.String r0 = ""
            r1.o = r0
            r1.p = r0
            return
    }

    public static com.tkay.core.common.e.a a() {
            com.tkay.core.common.e.a r0 = com.tkay.core.common.e.a.q
            if (r0 != 0) goto L13
            java.lang.Class<com.tkay.core.common.e.a> r0 = com.tkay.core.common.e.a.class
            monitor-enter(r0)
            com.tkay.core.common.e.a r1 = new com.tkay.core.common.e.a     // Catch: java.lang.Throwable -> L10
            r1.<init>()     // Catch: java.lang.Throwable -> L10
            com.tkay.core.common.e.a.q = r1     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            goto L13
        L10:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L13:
            com.tkay.core.common.e.a r0 = com.tkay.core.common.e.a.q
            return r0
    }

    static java.util.List a(com.tkay.core.common.e.a r0) {
            java.util.List<java.lang.String> r0 = r0.k
            return r0
    }

    static void a(com.tkay.core.common.e.a r3, android.content.Context r4) {
            long r0 = java.lang.System.currentTimeMillis()
            r3.n = r0
            java.lang.String r3 = "tkay_sdk"
            java.lang.String r2 = "cdn_request_time_key"
            com.tkay.core.common.l.p.a(r4, r3, r2, r0)
            return
    }

    static void a(com.tkay.core.common.e.a r0, java.util.List r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0.a(r1, r2, r3, r4)
            return
    }

    private void a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.Long r0 = r2.c(r0)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r1 = r2.p
            com.tkay.core.common.k.c.c(r1, r3, r4, r0)
            return
    }

    private void a(java.util.List<java.lang.String> r2) {
            r1 = this;
            if (r2 == 0) goto L17
            int r0 = r2.size()
            if (r0 != 0) goto L9
            goto L17
        L9:
            r0 = 0
            java.lang.Object r2 = r2.get(r0)
            java.lang.String r2 = (java.lang.String) r2
            r1.p = r2
            java.lang.String r2 = r1.p
            r1.c(r2)
        L17:
            return
    }

    private void a(java.util.List<java.lang.String> r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            if (r2 == 0) goto L38
            int r0 = r2.size()
            if (r0 != 0) goto L9
            goto L38
        L9:
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L12
            c(r2, r3)
        L12:
            r0 = 0
            java.lang.Object r2 = r2.get(r0)
            java.lang.String r2 = (java.lang.String) r2
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto L20
            return
        L20:
            r1.c(r2)
            c()
            r1.a(r2, r4)
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            android.content.Context r3 = r3.f()
            java.lang.String r4 = "tkay_sdk"
            java.lang.String r0 = "cur_using_domain_key"
            com.tkay.core.common.l.p.a(r3, r4, r0, r2)
        L38:
            return
    }

    private void a(java.util.List<java.lang.String> r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r3 = this;
            boolean r0 = a(r4, r6)
            java.lang.String r1 = java.lang.String.valueOf(r0)
            java.lang.String r2 = "handleSwitchDomain() >>> isCanSwitch = "
            java.lang.String r1 = r2.concat(r1)
            d(r1)
            if (r0 != 0) goto L14
            return
        L14:
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L1e
            r3.a(r4, r6, r7)
            return
        L1e:
            boolean r0 = r5.equals(r6)
            if (r0 == 0) goto L28
            c(r4, r6)
            goto L2b
        L28:
            b(r4, r5)
        L2b:
            r3.a(r4, r6, r7)
            return
    }

    private static boolean a(java.util.List<java.lang.String> r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 != 0) goto L31
            int r0 = r2.size()
            if (r0 <= 0) goto L31
            java.lang.Object r2 = r2.get(r1)
            java.lang.String r2 = (java.lang.String) r2
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "isCanSwitchDomain() >>> firstDomain = "
            r0.<init>(r1)
            r0.append(r2)
            java.lang.String r1 = " failedDomain = "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            d(r0)
            boolean r2 = r3.equals(r2)
            return r2
        L31:
            return r1
    }

    private void b(android.content.Context r5) {
            r4 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r4.n = r0
            java.lang.String r2 = "tkay_sdk"
            java.lang.String r3 = "cdn_request_time_key"
            com.tkay.core.common.l.p.a(r5, r2, r3, r0)
            return
    }

    private static void b(java.util.List<java.lang.String> r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L1c
            if (r2 != 0) goto L9
            goto L1c
        L9:
            int r0 = r2.indexOf(r3)
            r1 = 0
            if (r0 <= 0) goto L17
            r2.remove(r3)
            r2.add(r1, r3)
            return
        L17:
            if (r0 >= 0) goto L1c
            r2.add(r1, r3)
        L1c:
            return
    }

    private static boolean b() {
            java.util.Locale r0 = java.util.Locale.getDefault()     // Catch: java.lang.Exception -> L9
            java.lang.String r0 = r0.getLanguage()     // Catch: java.lang.Exception -> L9
            goto Lb
        L9:
            java.lang.String r0 = ""
        Lb:
            java.lang.String r1 = "ru"
            boolean r0 = r0.equalsIgnoreCase(r1)
            return r0
    }

    static boolean b(com.tkay.core.common.e.a r1) {
            r0 = 0
            r1.m = r0
            return r0
    }

    private java.lang.Long c(android.content.Context r6) {
            r5 = this;
            long r0 = r5.n
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 != 0) goto L18
            java.lang.Long r0 = java.lang.Long.valueOf(r2)
            java.lang.String r1 = "tkay_sdk"
            java.lang.String r2 = "cdn_request_time_key"
            java.lang.Long r6 = com.tkay.core.common.l.p.a(r6, r1, r2, r0)
            long r0 = r6.longValue()
        L18:
            java.lang.Long r6 = java.lang.Long.valueOf(r0)
            return r6
    }

    private static void c() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)
            r0.b()
            return
    }

    private void c(java.lang.String r2) {
            r1 = this;
            r1.o = r2
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r0 = "setCurrentDomain() >>> currentDomain = "
            java.lang.String r2 = r0.concat(r2)
            d(r2)
            return
    }

    private static void c(java.util.List<java.lang.String> r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L23
            if (r2 != 0) goto L9
            goto L23
        L9:
            int r0 = r2.indexOf(r3)
            if (r0 < 0) goto L1e
            int r1 = r2.size()
            int r1 = r1 + (-1)
            if (r0 >= r1) goto L1e
            r2.remove(r3)
            r2.add(r3)
            return
        L1e:
            if (r0 >= 0) goto L23
            r2.add(r3)
        L23:
            return
    }

    private static void d() {
            return
    }

    private static void d(java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = " threadId = "
            r0.append(r3)
            java.lang.Thread r3 = java.lang.Thread.currentThread()
            long r1 = r3.getId()
            r0.append(r1)
            return
    }

    public final java.lang.String a(java.lang.String r4) {
            r3 = this;
            boolean r0 = com.tkay.core.api.TYSDK.isCnSDK()
            if (r0 == 0) goto L7
            return r4
        L7:
            java.lang.String r0 = r3.o     // Catch: java.lang.Exception -> L1e
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L1e
            if (r1 == 0) goto L10
            return r4
        L10:
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Exception -> L1e
            r1.<init>(r4)     // Catch: java.lang.Exception -> L1e
            java.lang.String r1 = r1.getHost()     // Catch: java.lang.Exception -> L1e
            java.lang.String r4 = r4.replace(r1, r0)     // Catch: java.lang.Exception -> L1e
            return r4
        L1e:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "replaceUrlDomain() >> exception:"
            r1.<init>(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            d(r0)
            return r4
    }

    public final void a(android.content.Context r5) {
            r4 = this;
            boolean r0 = com.tkay.core.api.TYSDK.isCnSDK()
            if (r0 == 0) goto L7
            return
        L7:
            boolean r0 = r5 instanceof android.app.Activity
            if (r0 == 0) goto Lf
            android.content.Context r5 = r5.getApplicationContext()
        Lf:
            boolean r0 = r4.l
            if (r0 == 0) goto L14
            return
        L14:
            r0 = 1
            r4.l = r0
            java.util.List<java.lang.String> r0 = r4.k
            boolean r1 = b()
            if (r1 != 0) goto L24
            java.lang.String r1 = "api.anythinktech.com"
            r0.add(r1)
        L24:
            java.lang.String r1 = "api.toponadss.com"
            r0.add(r1)
            java.lang.String r1 = "tkay_sdk"
            java.lang.String r2 = "cur_using_domain_key"
            java.lang.String r3 = ""
            java.lang.String r5 = com.tkay.core.common.l.p.b(r5, r1, r2, r3)
            java.lang.String r1 = java.lang.String.valueOf(r5)
            java.lang.String r2 = "initDomain() >>> curUseDomain = "
            java.lang.String r1 = r2.concat(r1)
            d(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 != 0) goto L4d
            b(r0, r5)
            r4.a(r0)
            return
        L4d:
            r4.a(r0)
            return
    }

    public final void b(java.lang.String r10) {
            r9 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "tryGetDomainFromCdn() >>> start isTrying = "
            r0.<init>(r1)
            boolean r1 = r9.m
            r0.append(r1)
            java.lang.String r1 = " url = "
            r0.append(r1)
            r0.append(r10)
            java.lang.String r0 = r0.toString()
            d(r0)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            boolean r1 = android.text.TextUtils.isEmpty(r10)
            if (r1 != 0) goto Lb1
            boolean r1 = r9.m
            if (r1 != 0) goto Lb1
            boolean r1 = com.tkay.core.common.l.h.a(r0)
            if (r1 != 0) goto L35
            goto Lb1
        L35:
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Exception -> L3f
            r1.<init>(r10)     // Catch: java.lang.Exception -> L3f
            java.lang.String r1 = r1.getHost()     // Catch: java.lang.Exception -> L3f
            goto L57
        L3f:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "tryGetDomainFromCdn() >>> "
            r2.<init>(r3)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            d(r1)
            java.lang.String r1 = ""
        L57:
            java.lang.Object r2 = r9.j
            monitor-enter(r2)
            boolean r3 = r9.m     // Catch: java.lang.Throwable -> Lae
            if (r3 == 0) goto L60
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Lae
            return
        L60:
            r3 = 1
            r9.m = r3     // Catch: java.lang.Throwable -> Lae
            java.lang.Long r3 = r9.c(r0)     // Catch: java.lang.Throwable -> Lae
            long r3 = r3.longValue()     // Catch: java.lang.Throwable -> Lae
            r9.n = r3     // Catch: java.lang.Throwable -> Lae
            long r3 = r9.n     // Catch: java.lang.Throwable -> Lae
            r5 = 0
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            r4 = 0
            if (r3 <= 0) goto L9f
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lae
            long r7 = r9.n     // Catch: java.lang.Throwable -> Lae
            long r5 = r5 - r7
            r7 = 3600000(0x36ee80, double:1.7786363E-317)
            long r5 = r5 / r7
            r7 = 24
            int r3 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r3 >= 0) goto L9f
            java.lang.String r0 = "tryGetDomainFromCdn() >>> intervalTime = "
            java.lang.String r3 = java.lang.String.valueOf(r5)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r0 = r0.concat(r3)     // Catch: java.lang.Throwable -> Lae
            d(r0)     // Catch: java.lang.Throwable -> Lae
            java.util.List<java.lang.String> r0 = r9.k     // Catch: java.lang.Throwable -> Lae
            java.lang.String r3 = ""
            r9.a(r0, r3, r1, r10)     // Catch: java.lang.Throwable -> Lae
            r9.m = r4     // Catch: java.lang.Throwable -> Lae
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Lae
            return
        L9f:
            com.tkay.core.common.h.h r3 = new com.tkay.core.common.h.h     // Catch: java.lang.Throwable -> Lae
            r3.<init>()     // Catch: java.lang.Throwable -> Lae
            com.tkay.core.common.e.a$1 r5 = new com.tkay.core.common.e.a$1     // Catch: java.lang.Throwable -> Lae
            r5.<init>(r9, r0, r1, r10)     // Catch: java.lang.Throwable -> Lae
            r3.a(r4, r5)     // Catch: java.lang.Throwable -> Lae
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Lae
            return
        Lae:
            r10 = move-exception
            monitor-exit(r2)
            throw r10
        Lb1:
            return
    }
}
