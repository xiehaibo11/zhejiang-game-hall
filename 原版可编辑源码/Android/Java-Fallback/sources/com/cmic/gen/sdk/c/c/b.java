package com.cmic.gen.sdk.c.c;

public class b extends com.cmic.gen.sdk.c.c.c {
    private final com.cmic.gen.sdk.c.b.e b;
    private boolean c;

    b(java.lang.String r1, com.cmic.gen.sdk.c.b.e r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            r1 = 0
            r0.c = r1
            r0.b = r2
            return
    }

    public void a(com.cmic.gen.sdk.a r6) {
            r5 = this;
            com.cmic.gen.sdk.c.b.e r0 = r5.b
            com.cmic.gen.sdk.c.b.a r0 = r0.c()
            java.lang.String r1 = "socketip"
            java.lang.String r2 = r6.b(r1)
            r0.u(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "socket socketip = "
            r2.append(r3)
            java.lang.String r1 = r6.b(r1)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "GetPrePhonescripParam"
            com.cmic.gen.sdk.e.c.b(r2, r1)
            boolean r1 = r5.c
            r2 = 1
            if (r1 != 0) goto L56
            r1 = 0
            java.lang.String r3 = "isCloseIpv4"
            r4 = 0
            boolean r3 = r6.b(r3, r4)
            if (r3 != 0) goto L41
            java.lang.String[] r1 = com.cmic.gen.sdk.e.p.a(r2)
            r3 = r1[r4]
            r0.q(r3)
        L41:
            java.lang.String r3 = "isCloseIpv6"
            boolean r3 = r6.b(r3, r4)
            if (r3 != 0) goto L54
            if (r1 != 0) goto L4f
            java.lang.String[] r1 = com.cmic.gen.sdk.e.p.a(r2)
        L4f:
            r1 = r1[r2]
            r0.r(r1)
        L54:
            r5.c = r2
        L56:
            java.lang.String r1 = "appkey"
            java.lang.String r6 = r6.b(r1)
            java.lang.String r6 = r0.v(r6)
            r0.n(r6)
            com.cmic.gen.sdk.c.b.e r6 = r5.b
            r6.a(r0)
            com.cmic.gen.sdk.c.b.e r6 = r5.b
            r6.a(r2)
            com.cmic.gen.sdk.c.b.e r6 = r5.b
            org.json.JSONObject r6 = r6.b()
            java.lang.String r6 = r6.toString()
            r5.a = r6
            return
    }
}
