package com.cmic.gen.sdk.c.d;

public class b {
    private int a;
    private java.util.Map<java.lang.String, java.util.List<java.lang.String>> b;
    private java.lang.String c;

    public b(int r1, java.util.Map<java.lang.String, java.util.List<java.lang.String>> r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            return
    }

    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public java.util.Map<java.lang.String, java.util.List<java.lang.String>> b() {
            r1 = this;
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r0 = r1.b
            if (r0 != 0) goto L9
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
        L9:
            return r0
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.c
            if (r0 != 0) goto L6
            java.lang.String r0 = ""
        L6:
            return r0
    }

    public boolean d() {
            r2 = this;
            int r0 = r2.a
            r1 = 302(0x12e, float:4.23E-43)
            if (r0 == r1) goto Ld
            r1 = 301(0x12d, float:4.22E-43)
            if (r0 != r1) goto Lb
            goto Ld
        Lb:
            r0 = 0
            goto Le
        Ld:
            r0 = 1
        Le:
            return r0
    }
}
