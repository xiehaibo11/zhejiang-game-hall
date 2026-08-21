package com.tkay.expressad.foundation.d;

public final class l {
    public static final java.lang.String a = "key";
    public static final java.lang.String b = "time";
    public static final java.lang.String c = "ad_source_id";
    public static final java.lang.String d = "num";
    public static final java.lang.String e = "unit_id";
    public static final java.lang.String f = "fb";
    public static final java.lang.String g = "timeout";
    public static final java.lang.String h = "network_type";
    public static final java.lang.String i = "network_str";
    public static final java.lang.String j = "2000006";
    public static final java.lang.String k = "hb";
    private int l;
    private java.lang.String m;
    private int n;
    private java.lang.String o;
    private int p;
    private int q;
    private int r;
    private java.lang.String s;
    private int t;
    private java.lang.String u;

    public l() {
            r0 = this;
            r0.<init>()
            return
    }

    private l(int r1, java.lang.String r2, int r3, java.lang.String r4, int r5, int r6, int r7) {
            r0 = this;
            r0.<init>()
            r0.l = r1
            r0.m = r2
            r0.n = r3
            r0.o = r4
            r0.p = r5
            r0.q = r6
            r0.r = r7
            return
    }

    private int a() {
            r1 = this;
            int r0 = r1.t
            return r0
    }

    private static java.lang.String a(java.util.List<com.tkay.expressad.foundation.d.l> r4) {
            if (r4 == 0) goto Laa
            int r0 = r4.size()
            if (r0 <= 0) goto Laa
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.util.Iterator r4 = r4.iterator()
        L11:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto La5
            java.lang.Object r1 = r4.next()
            com.tkay.expressad.foundation.d.l r1 = (com.tkay.expressad.foundation.d.l) r1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "ad_source_id="
            r2.<init>(r3)
            int r3 = r1.l
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "&time="
            r2.<init>(r3)
            java.lang.String r3 = r1.m
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "&num="
            r2.<init>(r3)
            int r3 = r1.n
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "&unit_id="
            r2.<init>(r3)
            java.lang.String r3 = r1.o
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.String r2 = "&key=2000006"
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "&fb="
            r2.<init>(r3)
            int r3 = r1.p
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            int r2 = r1.t
            r3 = 1
            if (r2 != r3) goto L8b
            java.lang.String r2 = "&hb=1"
            r0.append(r2)
        L8b:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "&timeout="
            r2.<init>(r3)
            int r1 = r1.q
            r2.append(r1)
            java.lang.String r1 = "\n"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.append(r1)
            goto L11
        La5:
            java.lang.String r4 = r0.toString()
            return r4
        Laa:
            r4 = 0
            return r4
    }

    private void a(int r1) {
            r0 = this;
            r0.t = r1
            return
    }

    private void a(java.lang.String r1) {
            r0 = this;
            r0.m = r1
            return
    }

    private int b() {
            r1 = this;
            int r0 = r1.l
            return r0
    }

    private void b(int r1) {
            r0 = this;
            r0.l = r1
            return
    }

    private void b(java.lang.String r1) {
            r0 = this;
            r0.u = r1
            return
    }

    private java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.m
            return r0
    }

    private void c(int r1) {
            r0 = this;
            r0.n = r1
            return
    }

    private void c(java.lang.String r1) {
            r0 = this;
            r0.o = r1
            return
    }

    private java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.u
            return r0
    }

    private void d(int r1) {
            r0 = this;
            r0.p = r1
            return
    }

    private void d(java.lang.String r1) {
            r0 = this;
            r0.s = r1
            return
    }

    private int e() {
            r1 = this;
            int r0 = r1.n
            return r0
    }

    private void e(int r1) {
            r0 = this;
            r0.q = r1
            return
    }

    private java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.o
            return r0
    }

    private void f(int r1) {
            r0 = this;
            r0.r = r1
            return
    }

    private int g() {
            r1 = this;
            int r0 = r1.p
            return r0
    }

    private int h() {
            r1 = this;
            int r0 = r1.q
            return r0
    }

    private int i() {
            r1 = this;
            int r0 = r1.r
            return r0
    }

    private java.lang.String j() {
            r1 = this;
            java.lang.String r0 = r1.s
            return r0
    }
}
