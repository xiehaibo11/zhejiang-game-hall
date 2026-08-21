package com.cmic.gen.sdk.c;

public class b {
    private java.lang.String a;
    private java.lang.String b;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    private com.cmic.gen.sdk.c.c.c a(java.lang.String r2, java.lang.String r3, java.lang.String r4, com.cmic.gen.sdk.c.b.g r5) {
            r1 = this;
            com.cmic.gen.sdk.c.c.c r0 = new com.cmic.gen.sdk.c.c.c
            r0.<init>(r2, r5, r4, r3)
            java.lang.String r2 = "GET"
            boolean r2 = r4.equals(r2)
            if (r2 == 0) goto L14
            java.lang.String r2 = "Content-Type"
            java.lang.String r3 = "application/x-www-form-urlencoded"
            r0.a(r2, r3)
        L14:
            return r0
    }

    public com.cmic.gen.sdk.c.c.c a(com.cmic.gen.sdk.c.c.c r5, com.cmic.gen.sdk.c.d.b r6, com.cmic.gen.sdk.a r7) {
            r4 = this;
            java.util.Map r0 = r6.b()
            java.lang.String r1 = r4.a
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            r2 = 0
            if (r1 == 0) goto L25
            java.lang.String r1 = "pplocation"
            java.lang.Object r1 = r0.get(r1)
            java.util.List r1 = (java.util.List) r1
            if (r1 == 0) goto L25
            int r3 = r1.size()
            if (r3 <= 0) goto L25
            java.lang.Object r1 = r1.get(r2)
            java.lang.String r1 = (java.lang.String) r1
            r4.a = r1
        L25:
            int r6 = r6.a()
            java.lang.String r6 = java.lang.String.valueOf(r6)
            com.cmic.gen.sdk.e.q.b(r7, r6)
            java.lang.String r6 = "Location"
            java.lang.Object r1 = r0.get(r6)
            java.util.List r1 = (java.util.List) r1
            if (r1 == 0) goto L40
            boolean r3 = r1.isEmpty()
            if (r3 == 0) goto L4b
        L40:
            java.lang.String r1 = r6.toLowerCase()
            java.lang.Object r0 = r0.get(r1)
            r1 = r0
            java.util.List r1 = (java.util.List) r1
        L4b:
            if (r1 == 0) goto L8a
            int r0 = r1.size()
            if (r0 <= 0) goto L8a
            java.lang.Object r0 = r1.get(r2)
            java.lang.String r0 = (java.lang.String) r0
            r4.b = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L8a
            java.lang.String r0 = "operatortype"
            java.lang.String r1 = "0"
            java.lang.String r0 = r7.b(r0, r1)
            java.lang.String r1 = "2"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L77
            java.lang.String r0 = "getUnicomMobile"
            com.cmic.gen.sdk.e.q.a(r7, r0)
            goto L8a
        L77:
            java.lang.String r1 = "3"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L85
            java.lang.String r0 = "getTelecomMobile"
            com.cmic.gen.sdk.e.q.a(r7, r0)
            goto L8a
        L85:
            java.lang.String r0 = "NONE"
            com.cmic.gen.sdk.e.q.a(r7, r0)
        L8a:
            java.lang.String r7 = r4.b
            com.cmic.gen.sdk.e.c.b(r6, r7)
            com.cmic.gen.sdk.c.b.c r6 = new com.cmic.gen.sdk.c.b.c
            com.cmic.gen.sdk.c.b.g r7 = r5.k()
            java.lang.String r7 = r7.a()
            r6.<init>(r7)
            java.lang.String r7 = r4.b
            java.lang.String r0 = r5.f()
            java.lang.String r1 = "GET"
            com.cmic.gen.sdk.c.c.c r6 = r4.a(r7, r0, r1, r6)
            android.net.Network r5 = r5.h()
            r6.a(r5)
            return r6
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public com.cmic.gen.sdk.c.c.c b(com.cmic.gen.sdk.c.c.c r4, com.cmic.gen.sdk.c.d.b r5, com.cmic.gen.sdk.a r6) {
            r3 = this;
            java.lang.String r0 = "operatortype"
            java.lang.String r1 = "0"
            java.lang.String r0 = r6.b(r0, r1)
            java.lang.String r1 = "2"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L16
            java.lang.String r0 = "getNewUnicomPhoneNumberNotify"
            com.cmic.gen.sdk.e.q.a(r6, r0)
            goto L29
        L16:
            java.lang.String r1 = "3"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L24
            java.lang.String r0 = "getNewTelecomPhoneNumberNotify"
            com.cmic.gen.sdk.e.q.a(r6, r0)
            goto L29
        L24:
            java.lang.String r0 = "NONE"
            com.cmic.gen.sdk.e.q.a(r6, r0)
        L29:
            int r0 = r5.a()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            com.cmic.gen.sdk.e.q.b(r6, r0)
            com.cmic.gen.sdk.c.b.d r0 = new com.cmic.gen.sdk.c.b.d
            com.cmic.gen.sdk.c.b.g r1 = r4.k()
            java.lang.String r1 = r1.a()
            java.lang.String r5 = r5.c()
            java.lang.String r2 = "1.0"
            r0.<init>(r1, r2, r5)
            java.lang.String r5 = "userCapaid"
            java.lang.String r5 = r6.b(r5)
            r0.c(r5)
            java.lang.String r5 = "logintype"
            int r5 = r6.c(r5)
            r1 = 3
            java.lang.String r2 = "pre"
            if (r5 == r1) goto L6e
            r5 = 0
            java.lang.String r1 = "isRisk"
            boolean r5 = r6.b(r1, r5)
            if (r5 == 0) goto L68
            r0.b(r2)
            goto L71
        L68:
            java.lang.String r5 = "authz"
            r0.b(r5)
            goto L71
        L6e:
            r0.b(r2)
        L71:
            java.lang.String r5 = r3.a
            java.lang.String r6 = r4.f()
            java.lang.String r1 = "POST"
            com.cmic.gen.sdk.c.c.c r5 = r3.a(r5, r6, r1, r0)
            android.net.Network r4 = r4.h()
            r5.a(r4)
            r4 = 0
            r3.a = r4
            return r5
    }
}
