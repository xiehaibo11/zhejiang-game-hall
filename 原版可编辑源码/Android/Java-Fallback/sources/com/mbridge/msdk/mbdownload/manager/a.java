package com.mbridge.msdk.mbdownload.manager;

public final class a extends java.util.Observable {
    private java.lang.String a;
    private volatile int b;
    private volatile int c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;
    private com.mbridge.msdk.mbdownload.manager.c j;
    private com.mbridge.msdk.foundation.download.core.DownloadRequest k;
    private com.mbridge.msdk.foundation.db.e l;
    private com.mbridge.msdk.foundation.download.OnDownloadStateListener m;
    private com.mbridge.msdk.foundation.download.OnProgressStateListener n;
    private java.lang.String o;
    private com.mbridge.msdk.foundation.download.DownloadMessage<java.lang.Object> p;
    private int q;



    public a(java.lang.String r8, java.lang.String r9) {
            r7 = this;
            r7.<init>()
            java.lang.Class r0 = r7.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r7.a = r0
            r0 = -1
            r7.b = r0
            r1 = 0
            r7.c = r1
            java.lang.String r1 = ""
            r7.d = r1
            r7.e = r1
            r7.f = r1
            r7.g = r1
            com.mbridge.msdk.foundation.same.b.c r2 = com.mbridge.msdk.foundation.same.b.c.h
            java.lang.String r2 = com.mbridge.msdk.foundation.same.b.e.b(r2)
            r7.i = r2
            com.mbridge.msdk.mbdownload.manager.c r2 = new com.mbridge.msdk.mbdownload.manager.c
            r2.<init>()
            r7.j = r2
            com.mbridge.msdk.mbdownload.manager.a$1 r2 = new com.mbridge.msdk.mbdownload.manager.a$1
            r2.<init>(r7)
            r7.m = r2
            com.mbridge.msdk.mbdownload.manager.a$2 r2 = new com.mbridge.msdk.mbdownload.manager.a$2
            r2.<init>(r7)
            r7.n = r2
            r7.o = r1
            r7.q = r0
            boolean r0 = android.text.TextUtils.isEmpty(r9)
            if (r0 == 0) goto L45
            return
        L45:
            r7.d = r8
            r7.e = r9
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r7.i
            r0.append(r1)
            java.lang.String r1 = "/"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r7.o = r0
            r7.f = r8
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 == 0) goto L70
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ak.a(r9)
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r0)
            r7.f = r0
        L70:
            com.mbridge.msdk.foundation.download.DownloadMessage r0 = new com.mbridge.msdk.foundation.download.DownloadMessage
            java.lang.Object r2 = new java.lang.Object
            r2.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = r7.f
            r1.append(r3)
            java.lang.String r3 = ".apk"
            r1.append(r3)
            java.lang.String r4 = r1.toString()
            r5 = 100
            com.mbridge.msdk.foundation.download.DownloadResourceType r6 = com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_APK
            r1 = r0
            r3 = r9
            r1.<init>(r2, r3, r4, r5, r6)
            r7.p = r0
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)
            com.mbridge.msdk.foundation.db.e r0 = com.mbridge.msdk.foundation.db.e.a(r0)
            r7.l = r0
            r0.a(r8, r9)
            return
    }

    static int a(com.mbridge.msdk.mbdownload.manager.a r0, int r1) {
            r0.b = r1
            return r1
    }

    static java.lang.String a(com.mbridge.msdk.mbdownload.manager.a r0, java.lang.String r1) {
            r0.h = r1
            return r1
    }

    private void a(int r3) {
            r2 = this;
            com.mbridge.msdk.foundation.db.e r0 = r2.l
            if (r0 == 0) goto L9
            java.lang.String r1 = r2.d
            r0.a(r1, r3)
        L9:
            return
    }

    static void a(com.mbridge.msdk.mbdownload.manager.a r0) {
            r0.setChanged()
            return
    }

    static int b(com.mbridge.msdk.mbdownload.manager.a r0) {
            int r0 = r0.b
            return r0
    }

    static void b(com.mbridge.msdk.mbdownload.manager.a r0, int r1) {
            r0.a(r1)
            return
    }

    static void b(com.mbridge.msdk.mbdownload.manager.a r1, java.lang.String r2) {
            com.mbridge.msdk.foundation.db.e r0 = r1.l
            if (r0 == 0) goto L9
            java.lang.String r1 = r1.d
            r0.b(r1, r2)
        L9:
            return
    }

    static int c(com.mbridge.msdk.mbdownload.manager.a r0, int r1) {
            r0.c = r1
            return r1
    }

    static com.mbridge.msdk.mbdownload.manager.c c(com.mbridge.msdk.mbdownload.manager.a r0) {
            com.mbridge.msdk.mbdownload.manager.c r0 = r0.j
            return r0
    }

    static void d(com.mbridge.msdk.mbdownload.manager.a r0) {
            r0.setChanged()
            return
    }

    static void d(com.mbridge.msdk.mbdownload.manager.a r2, int r3) {
            com.mbridge.msdk.foundation.db.e r0 = r2.l
            if (r0 == 0) goto Lf
            int r1 = r2.q
            if (r3 <= r1) goto Lf
            r2.q = r3
            java.lang.String r2 = r2.d
            r0.b(r2, r3)
        Lf:
            return
    }

    static void e(com.mbridge.msdk.mbdownload.manager.a r0) {
            r0.setChanged()
            return
    }

    static java.lang.String f(com.mbridge.msdk.mbdownload.manager.a r0) {
            java.lang.String r0 = r0.h
            return r0
    }

    static void g(com.mbridge.msdk.mbdownload.manager.a r0) {
            r0.setChanged()
            return
    }

    static int h(com.mbridge.msdk.mbdownload.manager.a r0) {
            int r0 = r0.c
            return r0
    }

    static void i(com.mbridge.msdk.mbdownload.manager.a r0) {
            r0.setChanged()
            return
    }

    public final void a() {
            r3 = this;
            com.mbridge.msdk.foundation.download.MBDownloadManager r0 = com.mbridge.msdk.foundation.download.MBDownloadManager.getInstance()
            com.mbridge.msdk.foundation.download.DownloadMessage<java.lang.Object> r1 = r3.p
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r0 = r0.download(r1)
            r1 = 30000(0x7530, double:1.4822E-319)
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r0 = r0.withReadTimeout(r1)
            r1 = 20000(0x4e20, double:9.8813E-320)
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r0 = r0.withConnectTimeout(r1)
            com.mbridge.msdk.foundation.download.DownloadPriority r1 = com.mbridge.msdk.foundation.download.DownloadPriority.HIGH
            com.mbridge.msdk.foundation.download.core.RequestBuilder r0 = r0.withDownloadPriority(r1)
            r1 = 1
            com.mbridge.msdk.foundation.download.core.RequestBuilder r0 = r0.withHttpRetryCounter(r1)
            java.lang.String r1 = r3.o
            com.mbridge.msdk.foundation.download.core.RequestBuilder r0 = r0.withDirectoryPathInternal(r1)
            com.mbridge.msdk.foundation.download.OnDownloadStateListener r1 = r3.m
            com.mbridge.msdk.foundation.download.core.RequestBuilder r0 = r0.withDownloadStateListener(r1)
            com.mbridge.msdk.foundation.download.OnProgressStateListener r1 = r3.n
            com.mbridge.msdk.foundation.download.core.RequestBuilder r0 = r0.withProgressStateListener(r1)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r0.build()
            r3.k = r0
            r0.start()
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r3.k
            java.lang.String r0 = r0.getDownloadId()
            r3.g = r0
            return
    }

    public final void b() {
            r2 = this;
            com.mbridge.msdk.foundation.download.MBDownloadManager r0 = com.mbridge.msdk.foundation.download.MBDownloadManager.getInstance()
            java.lang.String r1 = r2.g
            r0.cancel(r1)
            return
    }

    public final void c() {
            r2 = this;
            r0 = 9
            r2.b = r0
            r2.setChanged()
            com.mbridge.msdk.mbdownload.manager.c r0 = r2.j
            int r1 = r2.b
            r0.a(r1)
            int r0 = r2.b
            r2.a(r0)
            com.mbridge.msdk.mbdownload.manager.c r0 = r2.j
            r2.notifyObservers(r0)
            return
    }

    public final int d() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    public final int e() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    public final java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }
}
