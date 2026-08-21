package com.kwad.sdk.core.report;

public class i extends com.kwad.sdk.core.report.c<com.kwad.sdk.core.report.r, com.kwad.sdk.core.report.h> {
    private static volatile boolean PE;
    private static volatile com.kwad.sdk.core.report.i aqU;
    private static com.kwad.sdk.core.report.v<com.kwad.sdk.core.report.r, com.kwad.sdk.core.report.h> aqV;



    static {
            return
    }

    private i() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.kwad.sdk.core.report.i BY() {
            com.kwad.sdk.core.report.i r0 = com.kwad.sdk.core.report.i.aqU
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.sdk.core.report.i> r0 = com.kwad.sdk.core.report.i.class
            monitor-enter(r0)
            com.kwad.sdk.core.report.i r1 = com.kwad.sdk.core.report.i.aqU     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.sdk.core.report.i r1 = new com.kwad.sdk.core.report.i     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.core.report.i.aqU = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.sdk.core.report.i r0 = com.kwad.sdk.core.report.i.aqU
            r0.checkInit()
            com.kwad.sdk.core.report.i r0 = com.kwad.sdk.core.report.i.aqU
            return r0
    }

    private static boolean Q(long r1) {
            java.lang.Class<com.kwad.sdk.core.report.w> r0 = com.kwad.sdk.core.report.w.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.core.report.w r0 = (com.kwad.sdk.core.report.w) r0
            if (r0 == 0) goto L12
            boolean r1 = r0.Q(r1)
            if (r1 == 0) goto L12
            r1 = 1
            return r1
        L12:
            r1 = 0
            return r1
    }

    public static void a(com.kwad.sdk.core.report.r r1) {
            r0 = 0
            a(r1, r0)
            return
    }

    public static void a(com.kwad.sdk.core.report.r r1, boolean r2) {
            com.kwad.sdk.core.report.i r0 = BY()
            r0.b(r1, r2)
            return
    }

    private com.kwad.sdk.core.report.h b(com.kwad.sdk.core.report.r r2) {
            r1 = this;
            com.kwad.sdk.core.report.v<com.kwad.sdk.core.report.r, com.kwad.sdk.core.report.h> r0 = com.kwad.sdk.core.report.i.aqV
            if (r0 == 0) goto Lb
            com.kwad.sdk.core.network.g r2 = r0.Ci()
        L8:
            com.kwad.sdk.core.report.h r2 = (com.kwad.sdk.core.report.h) r2
            return r2
        Lb:
            com.kwad.sdk.core.network.g r2 = super.a(r2)
            goto L8
    }

    private void b(com.kwad.sdk.core.report.r r3, boolean r4) {
            r2 = this;
            if (r3 == 0) goto L27
            boolean r0 = com.kwad.sdk.core.report.i.PE
            if (r0 != 0) goto L7
            goto L27
        L7:
            if (r4 != 0) goto L1d
            long r0 = r3.arp
            boolean r4 = Q(r0)
            if (r4 == 0) goto L12
            goto L1d
        L12:
            com.kwad.sdk.core.report.i r4 = com.kwad.sdk.core.report.i.aqU
            com.kwad.sdk.core.report.i$2 r0 = new com.kwad.sdk.core.report.i$2
            r0.<init>(r2, r3)
            r4.a(r0)
            return
        L1d:
            com.kwad.sdk.core.report.i r4 = com.kwad.sdk.core.report.i.aqU
            com.kwad.sdk.core.report.i$1 r0 = new com.kwad.sdk.core.report.i$1
            r0.<init>(r2, r3)
            r4.b(r0)
        L27:
            return
    }

    private synchronized void checkInit() {
            r5 = this;
            monitor-enter(r5)
            boolean r0 = com.kwad.sdk.core.report.i.PE     // Catch: java.lang.Throwable -> L56
            if (r0 == 0) goto L7
            monitor-exit(r5)
            return
        L7:
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)     // Catch: java.lang.Throwable -> L56
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0     // Catch: java.lang.Throwable -> L56
            if (r0 != 0) goto L13
            monitor-exit(r5)
            return
        L13:
            java.lang.Class<com.kwad.sdk.service.a.f> r1 = com.kwad.sdk.service.a.f.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)     // Catch: java.lang.Throwable -> L56
            com.kwad.sdk.service.a.f r1 = (com.kwad.sdk.service.a.f) r1     // Catch: java.lang.Throwable -> L56
            if (r1 != 0) goto L1f
            monitor-exit(r5)
            return
        L1f:
            android.content.Context r0 = r0.getContext()     // Catch: java.lang.Throwable -> L56
            if (r0 != 0) goto L27
            monitor-exit(r5)
            return
        L27:
            int r1 = r1.av(r0)     // Catch: java.lang.Throwable -> L56
            r5.i(r0, r1)     // Catch: java.lang.Throwable -> L56
            com.kwad.sdk.core.report.x.init(r0)     // Catch: java.lang.Throwable -> L56
            com.kwad.sdk.core.report.x.Ck()     // Catch: java.lang.Throwable -> L56
            java.lang.String r2 = "BatchReporter"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L56
            java.lang.String r4 = "cache type = "
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L56
            r3.append(r1)     // Catch: java.lang.Throwable -> L56
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L56
            com.kwad.sdk.core.e.c.d(r2, r3)     // Catch: java.lang.Throwable -> L56
            r2 = 2
            if (r1 != r2) goto L51
            com.kwad.sdk.core.report.u r0 = com.kwad.sdk.core.report.u.bd(r0)     // Catch: java.lang.Throwable -> L56
            r5.a(r0)     // Catch: java.lang.Throwable -> L56
        L51:
            r0 = 1
            com.kwad.sdk.core.report.i.PE = r0     // Catch: java.lang.Throwable -> L56
            monitor-exit(r5)
            return
        L56:
            r0 = move-exception
            monitor-exit(r5)
            throw r0
    }

    private com.kwad.sdk.core.report.h u(java.util.List<com.kwad.sdk.core.report.r> r3) {
            r2 = this;
            com.kwad.sdk.core.report.v<com.kwad.sdk.core.report.r, com.kwad.sdk.core.report.h> r0 = com.kwad.sdk.core.report.i.aqV
            if (r0 == 0) goto Lb
            com.kwad.sdk.core.network.g r3 = r0.Cj()
            com.kwad.sdk.core.report.h r3 = (com.kwad.sdk.core.report.h) r3
            return r3
        Lb:
            java.lang.String r0 = v(r3)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L1b
            com.kwad.sdk.core.report.h r3 = new com.kwad.sdk.core.report.h
            r3.<init>(r0)
            return r3
        L1b:
            com.kwad.sdk.core.report.h r0 = new com.kwad.sdk.core.report.h
            r0.<init>(r3)
            return r0
    }

    private static java.lang.String v(java.util.List<com.kwad.sdk.core.report.r> r3) {
            r0 = 0
            java.lang.Object r1 = r3.get(r0)
            if (r1 == 0) goto L47
            java.lang.Object r0 = r3.get(r0)
            com.kwad.sdk.core.report.r r0 = (com.kwad.sdk.core.report.r) r0
            java.lang.String r0 = r0.asx
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L47
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = ",\"actionList\":["
            r0.<init>(r1)
            java.util.Iterator r3 = r3.iterator()
        L20:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L37
            java.lang.Object r1 = r3.next()
            com.kwad.sdk.core.report.r r1 = (com.kwad.sdk.core.report.r) r1
            java.lang.String r1 = r1.asx
            r0.append(r1)
            r1 = 44
            r0.append(r1)
            goto L20
        L37:
            int r3 = r0.length()
            int r1 = r3 + (-1)
            java.lang.String r2 = "]"
            r0.replace(r1, r3, r2)
            java.lang.String r3 = r0.toString()
            return r3
        L47:
            java.lang.String r3 = ""
            return r3
    }

    @Override
    protected final com.kwad.sdk.core.network.g a(com.kwad.sdk.core.report.g r1) {
            r0 = this;
            com.kwad.sdk.core.report.r r1 = (com.kwad.sdk.core.report.r) r1
            com.kwad.sdk.core.report.h r1 = r0.b(r1)
            return r1
    }

    @Override
    protected final java.lang.Runnable a(android.content.Context r2, com.kwad.sdk.core.report.o<com.kwad.sdk.core.report.r> r3, java.util.concurrent.atomic.AtomicInteger r4) {
            r1 = this;
            com.kwad.sdk.core.report.v<com.kwad.sdk.core.report.r, com.kwad.sdk.core.report.h> r0 = com.kwad.sdk.core.report.i.aqV
            if (r0 == 0) goto Lb
            com.kwad.sdk.core.report.aa r0 = r0.Ch()
            if (r0 == 0) goto Lb
            return r0
        Lb:
            java.lang.Runnable r2 = super.a(r2, r3, r4)
            return r2
    }

    @Override
    protected final com.kwad.sdk.core.network.g s(java.util.List r1) {
            r0 = this;
            com.kwad.sdk.core.report.h r1 = r0.u(r1)
            return r1
    }
}
