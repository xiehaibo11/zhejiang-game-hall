package com.cmic.gen.sdk.d;

public class d {
    private com.cmic.gen.sdk.a a;


    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.cmic.gen.sdk.a a(com.cmic.gen.sdk.d.d r0) {
            com.cmic.gen.sdk.a r0 = r0.a
            return r0
    }

    private static void a(com.cmic.gen.sdk.d.b r8, com.cmic.gen.sdk.a r9) {
            if (r8 == 0) goto Lde
            if (r9 != 0) goto L6
            goto Lde
        L6:
            java.lang.String r0 = "appid"
            java.lang.String r1 = ""
            java.lang.String r0 = r9.b(r0, r1)
            r8.b(r0)
            java.lang.String r0 = com.cmic.gen.sdk.e.m.a()
            r8.e(r0)
            java.lang.String r0 = "interfaceType"
            java.lang.String r0 = r9.b(r0, r1)
            r8.h(r0)
            java.lang.String r0 = "interfaceCode"
            java.lang.String r0 = r9.b(r0, r1)
            r8.g(r0)
            java.lang.String r0 = "interfaceElasped"
            java.lang.String r0 = r9.b(r0, r1)
            r8.f(r0)
            java.lang.String r0 = "timeOut"
            java.lang.String r0 = r9.b(r0)
            r8.k(r0)
            java.lang.String r0 = "traceId"
            java.lang.String r2 = r9.b(r0)
            r8.r(r2)
            java.lang.String r2 = "simCardNum"
            java.lang.String r2 = r9.b(r2)
            r8.m(r2)
            java.lang.String r2 = "operatortype"
            java.lang.String r3 = r9.b(r2)
            r8.n(r3)
            java.lang.String r3 = com.cmic.gen.sdk.e.m.b()
            r8.o(r3)
            java.lang.String r3 = com.cmic.gen.sdk.e.m.c()
            r8.p(r3)
            r3 = 0
            java.lang.String r4 = "networktype"
            int r3 = r9.b(r4, r3)
            java.lang.String r3 = java.lang.String.valueOf(r3)
            r8.w(r3)
            java.lang.String r3 = "starttime"
            java.lang.String r3 = r9.b(r3)
            r8.s(r3)
            java.lang.String r3 = "endtime"
            java.lang.String r3 = r9.b(r3)
            r8.t(r3)
            java.lang.String r3 = "systemEndTime"
            r4 = 0
            long r6 = r9.b(r3, r4)
            java.lang.String r3 = "systemStartTime"
            long r3 = r9.b(r3, r4)
            long r6 = r6 - r3
            java.lang.String r3 = java.lang.String.valueOf(r6)
            r8.l(r3)
            java.lang.String r3 = "imsiState"
            java.lang.String r3 = r9.b(r3)
            r8.c(r3)
            java.lang.String r3 = "AID"
            java.lang.String r1 = com.cmic.gen.sdk.e.k.b(r3, r1)
            r8.x(r1)
            java.lang.String r1 = r9.b(r2)
            r8.y(r1)
            java.lang.String r1 = "scripType"
            java.lang.String r1 = r9.b(r1)
            r8.z(r1)
            java.lang.String r1 = "networkTypeByAPI"
            java.lang.String r1 = r9.b(r1)
            r8.A(r1)
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            r8.append(r0)
            java.lang.String r9 = r9.b(r0)
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            java.lang.String r9 = "SendLog"
            com.cmic.gen.sdk.e.c.a(r9, r8)
        Lde:
            return
    }

    private void a(org.json.JSONObject r4) {
            r3 = this;
            com.cmic.gen.sdk.c.c.a r0 = com.cmic.gen.sdk.c.c.a.a()
            com.cmic.gen.sdk.a r1 = r3.a
            com.cmic.gen.sdk.d.d$1 r2 = new com.cmic.gen.sdk.d.d$1
            r2.<init>(r3)
            r0.a(r4, r1, r2)
            return
    }

    public void a(android.content.Context r11, java.lang.String r12, com.cmic.gen.sdk.a r13) {
            r10 = this;
            java.lang.String r0 = ""
            com.cmic.gen.sdk.d.b r1 = r13.a()     // Catch: java.lang.Exception -> Lb7
            java.lang.String r2 = com.cmic.gen.sdk.e.f.b(r11)     // Catch: java.lang.Exception -> Lb7
            r1.d(r12)     // Catch: java.lang.Exception -> Lb7
            java.lang.String r12 = "loginMethod"
            java.lang.String r12 = r13.b(r12, r0)     // Catch: java.lang.Exception -> Lb7
            r1.u(r12)     // Catch: java.lang.Exception -> Lb7
            java.lang.String r12 = "isCacheScrip"
            r3 = 0
            boolean r12 = r13.b(r12, r3)     // Catch: java.lang.Exception -> Lb7
            if (r12 == 0) goto L25
            java.lang.String r12 = "scrip"
            r1.q(r12)     // Catch: java.lang.Exception -> Lb7
            goto L2a
        L25:
            java.lang.String r12 = "pgw"
            r1.q(r12)     // Catch: java.lang.Exception -> Lb7
        L2a:
            java.lang.String r11 = com.cmic.gen.sdk.e.f.a(r11)     // Catch: java.lang.Exception -> Lb7
            r1.i(r11)     // Catch: java.lang.Exception -> Lb7
            boolean r11 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Lb7
            if (r11 == 0) goto L38
            goto L39
        L38:
            r0 = r2
        L39:
            r1.j(r0)     // Catch: java.lang.Exception -> Lb7
            a(r1, r13)     // Catch: java.lang.Exception -> Lb7
            r11 = 0
            java.util.concurrent.CopyOnWriteArrayList<java.lang.Throwable> r12 = r1.a     // Catch: java.lang.Exception -> Lb7
            int r12 = r12.size()     // Catch: java.lang.Exception -> Lb7
            if (r12 <= 0) goto L9d
            org.json.JSONArray r11 = new org.json.JSONArray     // Catch: java.lang.Exception -> Lb7
            r11.<init>()     // Catch: java.lang.Exception -> Lb7
            java.util.concurrent.CopyOnWriteArrayList<java.lang.Throwable> r12 = r1.a     // Catch: java.lang.Exception -> Lb7
            java.util.Iterator r12 = r12.iterator()     // Catch: java.lang.Exception -> Lb7
        L53:
            boolean r0 = r12.hasNext()     // Catch: java.lang.Exception -> Lb7
            if (r0 == 0) goto L98
            java.lang.Object r0 = r12.next()     // Catch: java.lang.Exception -> Lb7
            java.lang.Throwable r0 = (java.lang.Throwable) r0     // Catch: java.lang.Exception -> Lb7
            java.lang.StringBuffer r2 = new java.lang.StringBuffer     // Catch: java.lang.Exception -> Lb7
            r2.<init>()     // Catch: java.lang.Exception -> Lb7
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> Lb7
            r4.<init>()     // Catch: java.lang.Exception -> Lb7
            java.lang.StackTraceElement[] r5 = r0.getStackTrace()     // Catch: java.lang.Exception -> Lb7
            int r6 = r5.length     // Catch: java.lang.Exception -> Lb7
            r7 = 0
        L6f:
            if (r7 >= r6) goto L82
            r8 = r5[r7]     // Catch: java.lang.Exception -> Lb7
            java.lang.String r9 = "\n"
            r2.append(r9)     // Catch: java.lang.Exception -> Lb7
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> Lb7
            r2.append(r8)     // Catch: java.lang.Exception -> Lb7
            int r7 = r7 + 1
            goto L6f
        L82:
            java.lang.String r5 = "message"
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> Lb7
            r4.put(r5, r0)     // Catch: java.lang.Exception -> Lb7
            java.lang.String r0 = "stack"
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lb7
            r4.put(r0, r2)     // Catch: java.lang.Exception -> Lb7
            r11.put(r4)     // Catch: java.lang.Exception -> Lb7
            goto L53
        L98:
            java.util.concurrent.CopyOnWriteArrayList<java.lang.Throwable> r12 = r1.a     // Catch: java.lang.Exception -> Lb7
            r12.clear()     // Catch: java.lang.Exception -> Lb7
        L9d:
            if (r11 == 0) goto La8
            int r12 = r11.length()     // Catch: java.lang.Exception -> Lb7
            if (r12 <= 0) goto La8
            r1.a(r11)     // Catch: java.lang.Exception -> Lb7
        La8:
            java.lang.String r11 = "SendLog"
            java.lang.String r12 = "登录日志"
            com.cmic.gen.sdk.e.c.a(r11, r12)     // Catch: java.lang.Exception -> Lb7
            org.json.JSONObject r11 = r1.b()     // Catch: java.lang.Exception -> Lb7
            r10.a(r11, r13)     // Catch: java.lang.Exception -> Lb7
            goto Lbb
        Lb7:
            r11 = move-exception
            r11.printStackTrace()
        Lbb:
            return
    }

    protected void a(org.json.JSONObject r1, com.cmic.gen.sdk.a r2) {
            r0 = this;
            r0.a = r2
            r0.a(r1)
            return
    }
}
