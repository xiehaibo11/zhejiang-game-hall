package com.igexin.push.c;

public class j {
    private static final java.lang.String a = null;
    private java.lang.String b;
    private java.lang.String c;
    private int d;
    private long e;
    private long f;
    private boolean g;
    private int h;
    private int i;
    private final int j;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "DT_"
            r0.append(r1)
            java.lang.Class<com.igexin.push.c.j> r1 = com.igexin.push.c.j.class
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.igexin.push.c.j.a = r0
            return
    }

    public j() {
            r2 = this;
            r2.<init>()
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            r2.e = r0
            r0 = -1
            r2.f = r0
            r0 = 1
            r2.g = r0
            r2.j = r0
            return
    }

    public j(java.lang.String r3, int r4) {
            r2 = this;
            r2.<init>()
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            r2.e = r0
            r0 = -1
            r2.f = r0
            r0 = 1
            r2.g = r0
            r2.j = r0
            r2.b = r3
            r2.d = r4
            return
    }

    private void i() {
            r1 = this;
            r0 = 0
            r1.c = r0
            r0 = 0
            r1.h = r0
            r0 = 1
            r1.g = r0
            return
    }

    private boolean j() {
            r6 = this;
            java.lang.String r0 = r6.c
            r1 = 0
            if (r0 == 0) goto L19
            long r2 = java.lang.System.currentTimeMillis()
            long r4 = r6.f
            long r2 = r2 - r4
            long r4 = com.igexin.push.c.f.b
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 <= 0) goto L13
            goto L19
        L13:
            int r0 = r6.h
            r2 = 1
            if (r0 >= r2) goto L19
            r1 = r2
        L19:
            return r1
    }

    public synchronized java.lang.String a() {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = r1.b     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public void a(int r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void a(long r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public synchronized void a(java.lang.String r1) {
            r0 = this;
            monitor-enter(r0)
            r0.b = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized void a(java.lang.String r1, long r2, long r4) {
            r0 = this;
            monitor-enter(r0)
            r0.c = r1     // Catch: java.lang.Throwable -> L10
            r0.e = r2     // Catch: java.lang.Throwable -> L10
            r0.f = r4     // Catch: java.lang.Throwable -> L10
            r1 = 0
            r0.h = r1     // Catch: java.lang.Throwable -> L10
            r0.i = r1     // Catch: java.lang.Throwable -> L10
            r0.g = r1     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)
            return
        L10:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public void a(boolean r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public synchronized java.lang.String b(boolean r4) {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = r3.j()     // Catch: java.lang.Throwable -> L42
            r1 = 0
            if (r0 == 0) goto L16
            if (r4 == 0) goto L10
            int r4 = r3.h     // Catch: java.lang.Throwable -> L42
            int r4 = r4 + 1
            r3.h = r4     // Catch: java.lang.Throwable -> L42
        L10:
            r3.g = r1     // Catch: java.lang.Throwable -> L42
            java.lang.String r4 = r3.c     // Catch: java.lang.Throwable -> L42
            monitor-exit(r3)
            return r4
        L16:
            r3.i()     // Catch: java.lang.Throwable -> L42
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L42
            r0.<init>()     // Catch: java.lang.Throwable -> L42
            java.lang.String r2 = com.igexin.push.c.j.a     // Catch: java.lang.Throwable -> L42
            r0.append(r2)     // Catch: java.lang.Throwable -> L42
            java.lang.String r2 = "|disc, ip is invalid, use domain = "
            r0.append(r2)     // Catch: java.lang.Throwable -> L42
            java.lang.String r2 = r3.b     // Catch: java.lang.Throwable -> L42
            r0.append(r2)     // Catch: java.lang.Throwable -> L42
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L42
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L42
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Throwable -> L42
            if (r4 == 0) goto L3e
            int r4 = r3.i     // Catch: java.lang.Throwable -> L42
            int r4 = r4 + 1
            r3.i = r4     // Catch: java.lang.Throwable -> L42
        L3e:
            java.lang.String r4 = r3.b     // Catch: java.lang.Throwable -> L42
            monitor-exit(r3)
            return r4
        L42:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public synchronized void b() {
            r2 = this;
            monitor-enter(r2)
            r0 = 0
            r2.c = r0     // Catch: java.lang.Throwable -> L15
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            r2.e = r0     // Catch: java.lang.Throwable -> L15
            r0 = -1
            r2.f = r0     // Catch: java.lang.Throwable -> L15
            r0 = 1
            r2.g = r0     // Catch: java.lang.Throwable -> L15
            r0 = 0
            r2.h = r0     // Catch: java.lang.Throwable -> L15
            monitor-exit(r2)
            return
        L15:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public void b(long r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public int d() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    public synchronized long e() {
            r2 = this;
            monitor-enter(r2)
            long r0 = r2.e     // Catch: java.lang.Throwable -> L5
            monitor-exit(r2)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public synchronized boolean f() {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.j()     // Catch: java.lang.Throwable -> L15
            r1 = 1
            if (r0 == 0) goto La
            monitor-exit(r2)
            return r1
        La:
            int r0 = r2.i     // Catch: java.lang.Throwable -> L15
            if (r0 >= r1) goto L10
            monitor-exit(r2)
            return r1
        L10:
            r0 = 0
            r2.i = r0     // Catch: java.lang.Throwable -> L15
            monitor-exit(r2)
            return r0
        L15:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public synchronized void g() {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            r1.h = r0     // Catch: java.lang.Throwable -> L8
            r1.i = r0     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public org.json.JSONObject h() {
            r6 = this;
            java.lang.String r0 = r6.b
            r1 = 0
            if (r0 == 0) goto L51
            java.lang.String r0 = r6.c
            if (r0 != 0) goto La
            goto L51
        La:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L51
            r0.<init>()     // Catch: org.json.JSONException -> L51
            java.lang.String r2 = "domain"
            java.lang.String r3 = r6.b     // Catch: org.json.JSONException -> L51
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L51
            java.lang.String r2 = "ip"
            java.lang.String r3 = r6.c     // Catch: org.json.JSONException -> L51
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L51
            long r2 = r6.e     // Catch: org.json.JSONException -> L51
            r4 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 == 0) goto L2d
            java.lang.String r2 = "consumeTime"
            long r3 = r6.e     // Catch: org.json.JSONException -> L51
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L51
        L2d:
            java.lang.String r2 = "port"
            int r3 = r6.d     // Catch: org.json.JSONException -> L51
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L51
            long r2 = r6.f     // Catch: org.json.JSONException -> L51
            r4 = -1
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 == 0) goto L43
            java.lang.String r2 = "detectSuccessTime"
            long r3 = r6.f     // Catch: org.json.JSONException -> L51
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L51
        L43:
            java.lang.String r2 = "isDomain"
            boolean r3 = r6.g     // Catch: org.json.JSONException -> L51
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L51
            java.lang.String r2 = "connectTryCnt"
            r3 = 1
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L51
            return r0
        L51:
            return r1
    }
}
