package com.igexin.push.core.bean;

public class k extends com.igexin.push.core.bean.BaseAction {
    private java.lang.String a;
    private boolean b;
    private boolean c;
    private java.lang.String d;

    public k() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.lang.String d() {
            r4 = this;
            r0 = 0
            android.content.Context r1 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L26
            java.lang.String r2 = "connectivity"
            java.lang.Object r1 = r1.getSystemService(r2)     // Catch: java.lang.Throwable -> L26
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1     // Catch: java.lang.Throwable -> L26
            if (r1 != 0) goto Le
            return r0
        Le:
            android.net.NetworkInfo r1 = r1.getActiveNetworkInfo()     // Catch: java.lang.Throwable -> L26
            if (r1 == 0) goto L26
            int r2 = r1.getType()     // Catch: java.lang.Throwable -> L26
            r3 = 1
            if (r2 != r3) goto L1e
            java.lang.String r0 = "wifi"
            return r0
        L1e:
            int r1 = r1.getType()     // Catch: java.lang.Throwable -> L26
            if (r1 != 0) goto L26
            java.lang.String r0 = "mobile"
        L26:
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void a(boolean r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void b(boolean r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public java.lang.String c() {
            r3 = this;
            java.lang.String r0 = r3.a
            boolean r1 = r3.b
            java.lang.String r2 = "?"
            if (r1 == 0) goto L2f
            int r1 = r0.indexOf(r2)
            if (r1 <= 0) goto L19
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "&cid="
            goto L23
        L19:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "?cid="
        L23:
            r1.append(r0)
            java.lang.String r0 = com.igexin.push.core.d.u
            r1.append(r0)
            java.lang.String r0 = r1.toString()
        L2f:
            boolean r1 = r3.c
            if (r1 == 0) goto L5e
            java.lang.String r1 = r3.d()
            if (r1 == 0) goto L5e
            int r2 = r0.indexOf(r2)
            if (r2 <= 0) goto L4a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = "&nettype="
            goto L54
        L4a:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = "?nettype="
        L54:
            r2.append(r0)
            r2.append(r1)
            java.lang.String r0 = r2.toString()
        L5e:
            return r0
    }
}
