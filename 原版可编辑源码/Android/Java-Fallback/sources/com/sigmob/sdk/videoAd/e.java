package com.sigmob.sdk.videoAd;

public class e {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String title;

    public e(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r0.<init>()
            r0.title = r1
            r0.a = r2
            r0.b = r3
            r0.c = r4
            return
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.title
            return r0
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.title = r1
            return
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public void c(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public void d(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "DialogConfig{title='"
            r0.append(r1)
            java.lang.String r1 = r3.title
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", context='"
            r0.append(r2)
            java.lang.String r2 = r3.a
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", cancelTxt='"
            r0.append(r2)
            java.lang.String r2 = r3.b
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", closeTxtl='"
            r0.append(r2)
            java.lang.String r2 = r3.c
            r0.append(r2)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
