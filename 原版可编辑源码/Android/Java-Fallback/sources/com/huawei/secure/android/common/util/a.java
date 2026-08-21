package com.huawei.secure.android.common.util;

public class a {
    private java.lang.String a;
    private java.lang.Character b;
    private java.lang.Character c;
    private int d;
    private int e;

    public a(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.d = r0
            r1.e = r0
            r1.a = r2
            return
    }

    public static boolean b(java.lang.Character r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            char r2 = r2.charValue()
            r1 = 48
            if (r2 < r1) goto L10
            r1 = 57
            if (r2 <= r1) goto L20
        L10:
            r1 = 97
            if (r2 < r1) goto L18
            r1 = 102(0x66, float:1.43E-43)
            if (r2 <= r1) goto L20
        L18:
            r1 = 65
            if (r2 < r1) goto L21
            r1 = 70
            if (r2 > r1) goto L21
        L20:
            r0 = 1
        L21:
            return r0
    }

    public static boolean c(java.lang.Character r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            char r2 = r2.charValue()
            r1 = 48
            if (r2 < r1) goto L11
            r1 = 55
            if (r2 > r1) goto L11
            r0 = 1
        L11:
            return r0
    }

    public void a(java.lang.Character r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public boolean a() {
            r4 = this;
            java.lang.Character r0 = r4.b
            r1 = 1
            if (r0 == 0) goto L6
            return r1
        L6:
            java.lang.String r0 = r4.a
            r2 = 0
            if (r0 != 0) goto Lc
            return r2
        Lc:
            int r0 = r0.length()
            if (r0 != 0) goto L13
            return r2
        L13:
            int r0 = r4.d
            java.lang.String r3 = r4.a
            int r3 = r3.length()
            if (r0 < r3) goto L1e
            return r2
        L1e:
            return r1
    }

    public boolean a(char r5) {
            r4 = this;
            java.lang.Character r0 = r4.b
            r1 = 1
            if (r0 == 0) goto Lc
            char r0 = r0.charValue()
            if (r0 != r5) goto Lc
            return r1
        Lc:
            java.lang.String r0 = r4.a
            r2 = 0
            if (r0 != 0) goto L12
            return r2
        L12:
            int r0 = r0.length()
            if (r0 != 0) goto L19
            return r2
        L19:
            int r0 = r4.d
            java.lang.String r3 = r4.a
            int r3 = r3.length()
            if (r0 < r3) goto L24
            return r2
        L24:
            java.lang.String r0 = r4.a
            int r3 = r4.d
            char r0 = r0.charAt(r3)
            if (r0 != r5) goto L2f
            goto L30
        L2f:
            r1 = r2
        L30:
            return r1
    }

    public int b() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    public void c() {
            r1 = this;
            java.lang.Character r0 = r1.b
            r1.c = r0
            int r0 = r1.d
            r1.e = r0
            return
    }

    public java.lang.Character d() {
            r3 = this;
            java.lang.Character r0 = r3.b
            r1 = 0
            if (r0 == 0) goto L8
            r3.b = r1
            return r0
        L8:
            java.lang.String r0 = r3.a
            if (r0 != 0) goto Ld
            return r1
        Ld:
            int r0 = r0.length()
            if (r0 != 0) goto L14
            return r1
        L14:
            int r0 = r3.d
            java.lang.String r2 = r3.a
            int r2 = r2.length()
            if (r0 < r2) goto L1f
            return r1
        L1f:
            java.lang.String r0 = r3.a
            int r1 = r3.d
            int r2 = r1 + 1
            r3.d = r2
            char r0 = r0.charAt(r1)
            java.lang.Character r0 = java.lang.Character.valueOf(r0)
            return r0
    }

    public java.lang.Character e() {
            r3 = this;
            java.lang.Character r0 = r3.d()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            boolean r2 = b(r0)
            if (r2 == 0) goto Lf
            return r0
        Lf:
            return r1
    }

    public java.lang.Character f() {
            r3 = this;
            java.lang.Character r0 = r3.d()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            boolean r2 = c(r0)
            if (r2 == 0) goto Lf
            return r0
        Lf:
            return r1
    }

    public java.lang.Character g() {
            r3 = this;
            java.lang.Character r0 = r3.b
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.String r0 = r3.a
            r1 = 0
            if (r0 != 0) goto Lb
            return r1
        Lb:
            int r0 = r0.length()
            if (r0 != 0) goto L12
            return r1
        L12:
            int r0 = r3.d
            java.lang.String r2 = r3.a
            int r2 = r2.length()
            if (r0 < r2) goto L1d
            return r1
        L1d:
            java.lang.String r0 = r3.a
            int r1 = r3.d
            char r0 = r0.charAt(r1)
            java.lang.Character r0 = java.lang.Character.valueOf(r0)
            return r0
    }

    protected java.lang.String h() {
            r3 = this;
            java.lang.String r0 = r3.a
            int r1 = r3.d
            java.lang.String r0 = r0.substring(r1)
            java.lang.Character r1 = r3.b
            if (r1 == 0) goto L1d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.Character r2 = r3.b
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
        L1d:
            return r0
    }

    public void i() {
            r1 = this;
            java.lang.Character r0 = r1.c
            r1.b = r0
            int r0 = r1.e
            r1.d = r0
            return
    }
}
