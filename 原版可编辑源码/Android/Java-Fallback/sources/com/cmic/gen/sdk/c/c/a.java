package com.cmic.gen.sdk.c.c;

public class a {
    private static com.cmic.gen.sdk.c.c.a a;


    static {
            return
    }

    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.cmic.gen.sdk.c.c.a a() {
            com.cmic.gen.sdk.c.c.a r0 = com.cmic.gen.sdk.c.c.a.a
            if (r0 != 0) goto L17
            java.lang.Class<com.cmic.gen.sdk.c.c.a> r0 = com.cmic.gen.sdk.c.c.a.class
            monitor-enter(r0)
            com.cmic.gen.sdk.c.c.a r1 = com.cmic.gen.sdk.c.c.a.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.cmic.gen.sdk.c.c.a r1 = new com.cmic.gen.sdk.c.c.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.cmic.gen.sdk.c.c.a.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.cmic.gen.sdk.c.c.a r0 = com.cmic.gen.sdk.c.c.a.a
            return r0
    }

    private void a(com.cmic.gen.sdk.c.c.c r4, com.cmic.gen.sdk.c.c.d r5, com.cmic.gen.sdk.a r6) {
            r3 = this;
            com.cmic.gen.sdk.c.a.d r0 = new com.cmic.gen.sdk.c.a.d
            r0.<init>()
            com.cmic.gen.sdk.c.a.c r1 = new com.cmic.gen.sdk.c.a.c
            r1.<init>()
            com.cmic.gen.sdk.c.a.a r2 = new com.cmic.gen.sdk.c.a.a
            r2.<init>()
            r0.a(r1)
            r1.a(r2)
            long r1 = android.os.SystemClock.elapsedRealtime()
            r4.a(r1)
            com.cmic.gen.sdk.c.c.a$1 r1 = new com.cmic.gen.sdk.c.c.a$1
            r1.<init>(r3, r4, r6, r5)
            r0.a(r4, r1, r6)
            return
    }

    public void a(com.cmic.gen.sdk.a r17, com.cmic.gen.sdk.c.c.d r18) {
            r16 = this;
            r0 = r17
            java.lang.String r1 = "networktype"
            int r1 = r0.c(r1)
            com.cmic.gen.sdk.c.b.h r2 = new com.cmic.gen.sdk.c.b.h
            r2.<init>()
            java.lang.String r3 = "1.0"
            r2.b(r3)
            java.lang.String r3 = "quick_login_android_5.9.6"
            r2.c(r3)
            java.lang.String r3 = "appid"
            java.lang.String r3 = r0.b(r3)
            r2.d(r3)
            java.lang.String r3 = "operatortype"
            java.lang.String r3 = r0.b(r3)
            r2.e(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            java.lang.String r4 = ""
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.f(r3)
            java.lang.String r3 = com.cmic.gen.sdk.e.m.a()
            r2.g(r3)
            java.lang.String r3 = com.cmic.gen.sdk.e.m.b()
            r2.h(r3)
            java.lang.String r3 = com.cmic.gen.sdk.e.m.c()
            r2.i(r3)
            java.lang.String r3 = "0"
            r2.j(r3)
            java.lang.String r5 = "3.0"
            r2.k(r5)
            java.lang.String r6 = com.cmic.gen.sdk.e.q.b()
            r2.l(r6)
            java.lang.String r6 = com.cmic.gen.sdk.e.o.a()
            r2.m(r6)
            java.lang.String r6 = "apppackage"
            java.lang.String r6 = r0.b(r6)
            r2.o(r6)
            java.lang.String r6 = "appsign"
            java.lang.String r6 = r0.b(r6)
            r2.p(r6)
            java.lang.String r6 = "AID"
            java.lang.String r4 = com.cmic.gen.sdk.e.k.b(r6, r4)
            r2.a(r4)
            java.lang.String r4 = "logintype"
            int r6 = r0.c(r4)
            r7 = 3
            r8 = 1
            r9 = 0
            if (r6 == r7) goto Lb9
            java.lang.String r6 = "isRisk"
            boolean r6 = r0.b(r6, r9)
            if (r6 == 0) goto L99
            goto Lb9
        L99:
            java.lang.String r6 = "userCapaid"
            java.lang.String r6 = r0.b(r6)
            r2.x(r6)
            int r6 = r0.c(r4)
            if (r6 != r8) goto Lae
            java.lang.String r6 = "200"
            r2.x(r6)
            goto Lb3
        Lae:
            java.lang.String r6 = "50"
            r2.x(r6)
        Lb3:
            java.lang.String r6 = "authz"
            r2.s(r6)
            goto Lbe
        Lb9:
            java.lang.String r6 = "pre"
            r2.s(r6)
        Lbe:
            java.lang.String r6 = "scripAndTokenForHttps"
            com.cmic.gen.sdk.e.q.a(r0, r6)
            com.cmic.gen.sdk.a.a r6 = r17.b()
            java.lang.String r10 = "isCacheScrip"
            boolean r10 = r0.b(r10, r9)
            java.lang.String r11 = "defendEOF"
            java.lang.String r12 = "traceId"
            java.lang.String r13 = "POST"
            java.lang.String r14 = "/unisdk/rs/scripAndTokenForHttps"
            java.lang.String r15 = "https://"
            if (r10 != 0) goto L182
            int r4 = r0.c(r4)
            if (r4 == r8) goto L182
            java.lang.String r4 = "isGotScrip"
            boolean r4 = r0.b(r4, r9)
            if (r4 == 0) goto Le9
            goto L182
        Le9:
            com.cmic.gen.sdk.c.b.e r3 = new com.cmic.gen.sdk.c.b.e
            r3.<init>()
            java.lang.String r4 = com.cmic.gen.sdk.b.a.a
            byte[] r4 = r0.a(r4)
            r3.a(r4)
            java.lang.String r4 = com.cmic.gen.sdk.b.a.b
            byte[] r4 = r0.a(r4)
            r3.b(r4)
            r3.a(r2)
            r3.a(r9)
            boolean r2 = r6.h()
            java.lang.String r4 = "isCloseIpv4"
            r0.a(r4, r2)
            boolean r2 = r6.i()
            java.lang.String r4 = "isCloseIpv6"
            r0.a(r4, r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r15)
            java.lang.String r4 = r6.b()
            r2.append(r4)
            r2.append(r14)
            java.lang.String r2 = r2.toString()
            java.lang.String r4 = "use2048PublicKey"
            boolean r4 = r0.b(r4, r9)
            if (r4 == 0) goto L151
            java.lang.String r4 = "BaseRequest"
            java.lang.String r6 = "使用2对应的编码"
            com.cmic.gen.sdk.e.c.a(r4, r6)
            java.lang.String r4 = "2"
            r3.b(r4)
            com.cmic.gen.sdk.e.i r4 = com.cmic.gen.sdk.e.i.a()
            java.lang.String r6 = com.cmic.gen.sdk.b.a.a
            byte[] r6 = r0.a(r6)
            java.lang.String r4 = r4.b(r6)
            goto L15f
        L151:
            com.cmic.gen.sdk.e.i r4 = com.cmic.gen.sdk.e.i.a()
            java.lang.String r6 = com.cmic.gen.sdk.b.a.a
            byte[] r6 = r0.a(r6)
            java.lang.String r4 = r4.a(r6)
        L15f:
            r3.c(r4)
            com.cmic.gen.sdk.c.c.b r4 = new com.cmic.gen.sdk.c.c.b
            java.lang.String r6 = r0.b(r12)
            r4.<init>(r2, r3, r13, r6)
            java.lang.String r2 = "1"
            r4.a(r11, r2)
            java.lang.String r2 = "doNetworkSwitch"
            if (r1 != r7) goto L17b
            r4.a(r8)
            r0.a(r2, r8)
            goto L1ba
        L17b:
            r4.a(r9)
            r0.a(r2, r9)
            goto L1ba
        L182:
            java.lang.String r1 = "phonescrip"
            java.lang.String r1 = r0.b(r1)
            r2.w(r1)
            java.lang.String r1 = "appkey"
            java.lang.String r1 = r0.b(r1)
            java.lang.String r1 = r2.v(r1)
            r2.n(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r15)
            java.lang.String r4 = r6.a()
            r1.append(r4)
            r1.append(r14)
            java.lang.String r1 = r1.toString()
            com.cmic.gen.sdk.c.c.c r4 = new com.cmic.gen.sdk.c.c.c
            java.lang.String r6 = r0.b(r12)
            r4.<init>(r1, r2, r13, r6)
            r4.a(r11, r3)
        L1ba:
            java.lang.String r1 = "interfaceVersion"
            r4.a(r1, r5)
            r1 = r16
            r2 = r18
            r1.a(r4, r2, r0)
            return
    }

    public void a(org.json.JSONObject r6, com.cmic.gen.sdk.a r7, com.cmic.gen.sdk.c.c.d r8) {
            r5 = this;
            com.cmic.gen.sdk.c.b.f r0 = new com.cmic.gen.sdk.c.b.f
            r0.<init>()
            com.cmic.gen.sdk.c.b.f$a r1 = new com.cmic.gen.sdk.c.b.f$a
            r1.<init>()
            com.cmic.gen.sdk.c.b.f$b r2 = new com.cmic.gen.sdk.c.b.f$b
            r2.<init>()
            java.lang.String r3 = com.cmic.gen.sdk.e.q.b()
            r2.e(r3)
            java.lang.String r3 = com.cmic.gen.sdk.e.o.a()
            r2.f(r3)
            java.lang.String r3 = "2.0"
            r2.b(r3)
            java.lang.String r3 = "appid"
            java.lang.String r4 = ""
            java.lang.String r3 = r7.b(r3, r4)
            r2.c(r3)
            java.lang.String r3 = r2.v(r4)
            r2.d(r3)
            r1.a(r6)
            r0.a(r1)
            r0.a(r2)
            com.cmic.gen.sdk.a.a r6 = r7.b()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "https://"
            r1.append(r2)
            java.lang.String r6 = r6.d()
            r1.append(r6)
            java.lang.String r6 = "/log/logReport"
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            com.cmic.gen.sdk.c.c.c r1 = new com.cmic.gen.sdk.c.c.c
            java.lang.String r2 = "traceId"
            java.lang.String r2 = r7.b(r2)
            java.lang.String r3 = "POST"
            r1.<init>(r6, r0, r3, r2)
            r5.a(r1, r8, r7)
            return
    }

    public void a(boolean r5, com.cmic.gen.sdk.a r6, com.cmic.gen.sdk.c.c.d r7) {
            r4 = this;
            com.cmic.gen.sdk.c.b.b r0 = new com.cmic.gen.sdk.c.b.b
            r0.<init>()
            java.lang.String r1 = "1.0"
            r0.b(r1)
            java.lang.String r1 = "Android"
            r0.c(r1)
            java.lang.String r1 = "AID"
            java.lang.String r2 = ""
            java.lang.String r1 = com.cmic.gen.sdk.e.k.b(r1, r2)
            r0.d(r1)
            if (r5 == 0) goto L1f
            java.lang.String r5 = "1"
            goto L21
        L1f:
            java.lang.String r5 = "0"
        L21:
            r0.e(r5)
            java.lang.String r5 = "quick_login_android_5.9.6"
            r0.f(r5)
            java.lang.String r5 = "appid"
            java.lang.String r5 = r6.b(r5)
            r0.g(r5)
            java.lang.String r5 = "iYm0HAnkxQtpvN44"
            java.lang.String r5 = r0.v(r5)
            r0.h(r5)
            com.cmic.gen.sdk.a.a r5 = r6.b()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "https://"
            r1.append(r2)
            java.lang.String r5 = r5.c()
            r1.append(r5)
            java.lang.String r5 = "/client/uniConfig"
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            com.cmic.gen.sdk.c.c.c r1 = new com.cmic.gen.sdk.c.c.c
            java.lang.String r2 = "traceId"
            java.lang.String r2 = r6.b(r2)
            java.lang.String r3 = "POST"
            r1.<init>(r5, r0, r3, r2)
            r4.a(r1, r7, r6)
            return
    }
}
