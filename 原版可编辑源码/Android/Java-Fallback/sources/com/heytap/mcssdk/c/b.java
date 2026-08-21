package com.heytap.mcssdk.c;

public class b extends com.heytap.msp.push.mode.BaseMode {
    private static final java.lang.String a = "&";
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private int f;
    private java.lang.String g;
    private int h;
    private java.lang.String i;

    public b() {
            r1 = this;
            r1.<init>()
            r0 = -2
            r1.h = r0
            return
    }

    public static <T> java.lang.String a(java.util.List<T> r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Iterator r2 = r2.iterator()
        L9:
            boolean r1 = r2.hasNext()
            if (r1 == 0) goto L1c
            java.lang.Object r1 = r2.next()
            r0.append(r1)
            java.lang.String r1 = "&"
            r0.append(r1)
            goto L9
        L1c:
            java.lang.String r2 = r0.toString()
            return r2
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public void a(int r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public void b(int r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public void c(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    public void d(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public int e() {
            r1 = this;
            int r0 = r1.f
            return r0
    }

    public void e(java.lang.String r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.g
            return r0
    }

    public void f(java.lang.String r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public int g() {
            r1 = this;
            int r0 = r1.h
            return r0
    }

    @Override
    public int getType() {
            r1 = this;
            r0 = 4105(0x1009, float:5.752E-42)
            return r0
    }

    public java.lang.String h() {
            r1 = this;
            java.lang.String r0 = r1.i
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "CallBackResult{, mRegisterID='"
            r0.append(r1)
            java.lang.String r1 = r3.d
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", mSdkVersion='"
            r0.append(r2)
            java.lang.String r2 = r3.e
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", mCommand="
            r0.append(r2)
            int r2 = r3.f
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", mContent='"
            r0.append(r2)
            java.lang.String r2 = r3.g
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", mAppPackage="
            r0.append(r2)
            java.lang.String r2 = r3.i
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = ", mResponseCode="
            r0.append(r1)
            int r1 = r3.h
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
