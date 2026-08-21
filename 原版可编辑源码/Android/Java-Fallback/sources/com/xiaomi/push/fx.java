package com.xiaomi.push;

public class fx implements java.lang.Cloneable {
    public static java.lang.String a = "wcc-ml-test10.bj";
    public static final java.lang.String b = null;
    public static java.lang.String c;
    private int a;
    private com.xiaomi.push.ga a;
    private boolean a;
    private boolean b;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;

    static {
            java.lang.String r0 = com.xiaomi.push.ah.a
            com.xiaomi.push.fx.b = r0
            r0 = 0
            com.xiaomi.push.fx.c = r0
            return
    }

    public fx(java.util.Map<java.lang.String, java.lang.Integer> r2, int r3, java.lang.String r4, com.xiaomi.push.ga r5) {
            r1 = this;
            r1.<init>()
            boolean r0 = com.xiaomi.push.fw.a
            r1.a = r0
            r0 = 1
            r1.b = r0
            r1.a(r2, r3, r4, r5)
            return
    }

    public static final java.lang.String a() {
            java.lang.String r0 = com.xiaomi.push.fx.c
            if (r0 == 0) goto L5
            return r0
        L5:
            boolean r0 = com.xiaomi.push.ae.a()
            if (r0 == 0) goto Le
            java.lang.String r0 = "sandbox.xmpush.xiaomi.com"
            return r0
        Le:
            boolean r0 = com.xiaomi.push.ae.b()
            if (r0 == 0) goto L17
            java.lang.String r0 = com.xiaomi.push.fx.b
            return r0
        L17:
            java.lang.String r0 = "app.chat.xiaomi.net"
            return r0
    }

    public static final void a(java.lang.String r1) {
            android.content.Context r0 = com.xiaomi.push.v.a()
            boolean r0 = com.xiaomi.push.m.a(r0)
            if (r0 == 0) goto L11
            boolean r0 = com.xiaomi.push.ae.b()
            if (r0 == 0) goto L11
            return
        L11:
            com.xiaomi.push.fx.c = r1
            return
    }

    private void a(java.util.Map<java.lang.String, java.lang.Integer> r1, int r2, java.lang.String r3, com.xiaomi.push.ga r4) {
            r0 = this;
            r0.a = r2
            r0.d = r3
            r0.a = r4
            return
    }

    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public void a(boolean r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public boolean a() {
            r1 = this;
            boolean r0 = r1.a
            return r0
    }

    public byte[] a() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.e
            if (r0 != 0) goto La
            java.lang.String r0 = a()
            r1.e = r0
        La:
            java.lang.String r0 = r1.e
            return r0
    }

    public void c(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }
}
