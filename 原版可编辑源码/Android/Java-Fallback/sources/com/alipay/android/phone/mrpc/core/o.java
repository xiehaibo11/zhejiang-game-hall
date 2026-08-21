package com.alipay.android.phone.mrpc.core;

public final class o extends com.alipay.android.phone.mrpc.core.t {
    public java.lang.String b;
    public byte[] c;
    public java.lang.String d;
    public java.util.ArrayList<org.apache.http.Header> e;
    public java.util.Map<java.lang.String, java.lang.String> f;
    public boolean g;

    public o(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.e = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.f = r1
            java.lang.String r1 = "application/x-www-form-urlencoded"
            r0.d = r1
            return
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.f
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.f = r0
        Lb:
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.f
            r0.put(r2, r3)
            return
    }

    public final void a(org.apache.http.Header r2) {
            r1 = this;
            java.util.ArrayList<org.apache.http.Header> r0 = r1.e
            r0.add(r2)
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public final void a(byte[] r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final java.lang.String b(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.f
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    public final byte[] b() {
            r1 = this;
            byte[] r0 = r1.c
            return r0
    }

    public final java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public final java.util.ArrayList<org.apache.http.Header> d() {
            r1 = this;
            java.util.ArrayList<org.apache.http.Header> r0 = r1.e
            return r0
    }

    public final boolean e() {
            r1 = this;
            boolean r0 = r1.g
            return r0
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 != 0) goto L8
            return r1
        L8:
            java.lang.Class r2 = r5.getClass()
            java.lang.Class<com.alipay.android.phone.mrpc.core.o> r3 = com.alipay.android.phone.mrpc.core.o.class
            if (r3 == r2) goto L11
            return r1
        L11:
            com.alipay.android.phone.mrpc.core.o r5 = (com.alipay.android.phone.mrpc.core.o) r5
            byte[] r2 = r4.c
            if (r2 != 0) goto L1c
            byte[] r2 = r5.c
            if (r2 == 0) goto L25
            return r1
        L1c:
            byte[] r3 = r5.c
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L25
            return r1
        L25:
            java.lang.String r2 = r4.b
            java.lang.String r5 = r5.b
            if (r2 != 0) goto L2e
            if (r5 == 0) goto L35
            return r1
        L2e:
            boolean r5 = r2.equals(r5)
            if (r5 != 0) goto L35
            return r1
        L35:
            return r0
    }

    public final int hashCode() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.f
            if (r0 == 0) goto L1b
            java.lang.String r1 = "id"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L1b
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.f
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            int r0 = r0.hashCode()
            int r0 = r0 + 31
            goto L1c
        L1b:
            r0 = 1
        L1c:
            int r0 = r0 * 31
            java.lang.String r1 = r2.b
            if (r1 != 0) goto L24
            r1 = 0
            goto L28
        L24:
            int r1 = r1.hashCode()
        L28:
            int r0 = r0 + r1
            return r0
    }

    public final java.lang.String toString() {
            r3 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = r3.b
            r2 = 0
            r0[r2] = r1
            java.util.ArrayList<org.apache.http.Header> r1 = r3.e
            r2 = 1
            r0[r2] = r1
            java.lang.String r1 = "Url : %s,HttpHeader: %s"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            return r0
    }
}
