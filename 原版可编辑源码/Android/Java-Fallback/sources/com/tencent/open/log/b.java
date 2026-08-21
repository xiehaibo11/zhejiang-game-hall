package com.tencent.open.log;

public class b {
    private static java.text.SimpleDateFormat a;
    private java.lang.String b;
    private int c;
    private int d;
    private int e;
    private long f;
    private java.io.File g;
    private int h;
    private java.lang.String i;
    private long j;

    static {
            java.lang.String r0 = "yy.MM.dd.HH"
            java.text.SimpleDateFormat r0 = com.tencent.open.log.d.d.a(r0)
            com.tencent.open.log.b.a = r0
            return
    }

    public b(java.io.File r3, int r4, int r5, int r6, java.lang.String r7, long r8, int r10, java.lang.String r11, long r12) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "Tracer.File"
            r2.b = r0
            r0 = 2147483647(0x7fffffff, float:NaN)
            r2.c = r0
            r2.d = r0
            r0 = 4096(0x1000, float:5.74E-42)
            r2.e = r0
            r0 = 10000(0x2710, double:4.9407E-320)
            r2.f = r0
            r0 = 10
            r2.h = r0
            java.lang.String r0 = ".log"
            r2.i = r0
            r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r2.j = r0
            r2.a(r3)
            r2.b(r4)
            r2.a(r5)
            r2.c(r6)
            r2.a(r7)
            r2.b(r8)
            r2.d(r10)
            r2.b(r11)
            r2.c(r12)
            return
    }

    public static java.lang.String a(long r1) {
            java.util.Calendar r0 = java.util.Calendar.getInstance()
            r0.setTimeInMillis(r1)
            java.text.SimpleDateFormat r1 = new java.text.SimpleDateFormat
            java.lang.String r2 = "yy.MM.dd.HH"
            r1.<init>(r2)
            java.util.Date r2 = r0.getTime()
            java.lang.String r1 = r1.format(r2)
            return r1
    }

    private java.lang.String c(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "com.tencent.mobileqq_connectSdk."
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = ".log"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
    }

    private java.io.File d(long r3) {
            r2 = this;
            java.lang.String r3 = a(r3)
            java.lang.String r3 = r2.c(r3)
            java.lang.String r4 = com.tencent.open.utils.m.b()
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L14
            if (r4 == 0) goto L32
        L14:
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L2a
            java.lang.String r1 = com.tencent.open.log.c.o     // Catch: java.lang.Exception -> L2a
            r0.<init>(r4, r1)     // Catch: java.lang.Exception -> L2a
            boolean r4 = r0.exists()     // Catch: java.lang.Exception -> L2a
            if (r4 != 0) goto L24
            r0.mkdirs()     // Catch: java.lang.Exception -> L2a
        L24:
            java.io.File r4 = new java.io.File     // Catch: java.lang.Exception -> L2a
            r4.<init>(r0, r3)     // Catch: java.lang.Exception -> L2a
            goto L33
        L2a:
            r3 = move-exception
            java.lang.String r4 = "openSDK_LOG"
            java.lang.String r0 = "getWorkFile,get app specific file exception:"
            com.tencent.open.log.SLog.e(r4, r0, r3)
        L32:
            r4 = 0
        L33:
            return r4
    }

    public java.io.File a() {
            r2 = this;
            long r0 = java.lang.System.currentTimeMillis()
            java.io.File r0 = r2.d(r0)
            return r0
    }

    public void a(int r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void a(java.io.File r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public void b(int r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void b(long r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public int c() {
            r1 = this;
            int r0 = r1.e
            return r0
    }

    public void c(int r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void c(long r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public int d() {
            r1 = this;
            int r0 = r1.h
            return r0
    }

    public void d(int r1) {
            r0 = this;
            r0.h = r1
            return
    }
}
