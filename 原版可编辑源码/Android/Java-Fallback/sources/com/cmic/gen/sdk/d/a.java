package com.cmic.gen.sdk.d;

public class a {
    private static com.cmic.gen.sdk.d.a.a<java.lang.String, java.lang.String> a;


    private static class a<K, V> extends java.util.HashMap<K, V> {
        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        a(com.cmic.gen.sdk.d.a.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public V a(java.lang.Object r2, V r3) {
                r1 = this;
                boolean r0 = r1.containsKey(r2)
                if (r0 == 0) goto L11
                java.lang.Object r0 = r1.get(r2)
                if (r0 == 0) goto L11
                java.lang.Object r2 = r1.get(r2)
                return r2
            L11:
                return r3
        }
    }

    static {
            com.cmic.gen.sdk.d.a$a r0 = new com.cmic.gen.sdk.d.a$a
            r1 = 0
            r0.<init>(r1)
            com.cmic.gen.sdk.d.a.a = r0
            return
    }

    public static void a() {
            r0 = 0
            java.lang.String r0 = java.lang.String.valueOf(r0)
            com.cmic.gen.sdk.d.a$a<java.lang.String, java.lang.String> r1 = com.cmic.gen.sdk.d.a.a
            java.lang.String r2 = "authPageIn"
            r1.put(r2, r0)
            com.cmic.gen.sdk.d.a$a<java.lang.String, java.lang.String> r1 = com.cmic.gen.sdk.d.a.a
            java.lang.String r2 = "authPageOut"
            r1.put(r2, r0)
            com.cmic.gen.sdk.d.a$a<java.lang.String, java.lang.String> r1 = com.cmic.gen.sdk.d.a.a
            java.lang.String r2 = "authClickFailed"
            r1.put(r2, r0)
            com.cmic.gen.sdk.d.a$a<java.lang.String, java.lang.String> r1 = com.cmic.gen.sdk.d.a.a
            java.lang.String r2 = "authClickSuccess"
            r1.put(r2, r0)
            com.cmic.gen.sdk.d.a$a<java.lang.String, java.lang.String> r1 = com.cmic.gen.sdk.d.a.a
            java.lang.String r2 = "timeOnAuthPage"
            r1.put(r2, r0)
            com.cmic.gen.sdk.d.a$a<java.lang.String, java.lang.String> r1 = com.cmic.gen.sdk.d.a.a
            java.lang.String r2 = "authPrivacyState"
            r1.put(r2, r0)
            return
    }

    public static void a(android.content.Context r12, com.cmic.gen.sdk.a r13) {
            java.lang.String r0 = "appid"
            java.lang.String r1 = "timeOnAuthPage"
            java.lang.String r2 = "authClickFailed"
            java.lang.String r3 = "authClickSuccess"
            java.lang.String r4 = "authPageOut"
            java.lang.String r5 = "authPageIn"
            java.lang.String r6 = ""
            com.cmic.gen.sdk.a.a r7 = r13.b()
            boolean r7 = r7.j()     // Catch: java.lang.Exception -> L182
            if (r7 == 0) goto L19
            return
        L19:
            com.cmic.gen.sdk.view.a r7 = new com.cmic.gen.sdk.view.a     // Catch: java.lang.Exception -> L182
            r7.<init>()     // Catch: java.lang.Exception -> L182
            r8 = 0
            java.lang.String r9 = java.lang.String.valueOf(r8)     // Catch: java.lang.Exception -> L182
            com.cmic.gen.sdk.d.a$a<java.lang.String, java.lang.String> r10 = com.cmic.gen.sdk.d.a.a     // Catch: java.lang.Exception -> L182
            java.lang.Object r10 = r10.a(r5, r9)     // Catch: java.lang.Exception -> L182
            java.lang.String r10 = (java.lang.String) r10     // Catch: java.lang.Exception -> L182
            boolean r10 = r10.equals(r9)     // Catch: java.lang.Exception -> L182
            r11 = 0
            if (r10 != 0) goto L3b
            com.cmic.gen.sdk.d.a$a<java.lang.String, java.lang.String> r10 = com.cmic.gen.sdk.d.a.a     // Catch: java.lang.Exception -> L182
            java.lang.Object r5 = r10.get(r5)     // Catch: java.lang.Exception -> L182
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> L182
            goto L3c
        L3b:
            r5 = r11
        L3c:
            r7.e(r5)     // Catch: java.lang.Exception -> L182
            com.cmic.gen.sdk.d.a$a<java.lang.String, java.lang.String> r5 = com.cmic.gen.sdk.d.a.a     // Catch: java.lang.Exception -> L182
            java.lang.Object r5 = r5.a(r4, r9)     // Catch: java.lang.Exception -> L182
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> L182
            boolean r5 = r5.equals(r9)     // Catch: java.lang.Exception -> L182
            if (r5 != 0) goto L56
            com.cmic.gen.sdk.d.a$a<java.lang.String, java.lang.String> r5 = com.cmic.gen.sdk.d.a.a     // Catch: java.lang.Exception -> L182
            java.lang.Object r4 = r5.get(r4)     // Catch: java.lang.Exception -> L182
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L182
            goto L57
        L56:
            r4 = r11
        L57:
            r7.f(r4)     // Catch: java.lang.Exception -> L182
            com.cmic.gen.sdk.d.a$a<java.lang.String, java.lang.String> r4 = com.cmic.gen.sdk.d.a.a     // Catch: java.lang.Exception -> L182
            java.lang.Object r4 = r4.a(r3, r9)     // Catch: java.lang.Exception -> L182
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L182
            boolean r4 = r4.equals(r9)     // Catch: java.lang.Exception -> L182
            if (r4 != 0) goto L71
            com.cmic.gen.sdk.d.a$a<java.lang.String, java.lang.String> r4 = com.cmic.gen.sdk.d.a.a     // Catch: java.lang.Exception -> L182
            java.lang.Object r3 = r4.get(r3)     // Catch: java.lang.Exception -> L182
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L182
            goto L72
        L71:
            r3 = r11
        L72:
            r7.c(r3)     // Catch: java.lang.Exception -> L182
            com.cmic.gen.sdk.d.a$a<java.lang.String, java.lang.String> r3 = com.cmic.gen.sdk.d.a.a     // Catch: java.lang.Exception -> L182
            java.lang.Object r3 = r3.a(r2, r9)     // Catch: java.lang.Exception -> L182
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L182
            boolean r3 = r3.equals(r9)     // Catch: java.lang.Exception -> L182
            if (r3 != 0) goto L8c
            com.cmic.gen.sdk.d.a$a<java.lang.String, java.lang.String> r3 = com.cmic.gen.sdk.d.a.a     // Catch: java.lang.Exception -> L182
            java.lang.Object r2 = r3.get(r2)     // Catch: java.lang.Exception -> L182
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L182
            goto L8d
        L8c:
            r2 = r11
        L8d:
            r7.b(r2)     // Catch: java.lang.Exception -> L182
            com.cmic.gen.sdk.d.a$a<java.lang.String, java.lang.String> r2 = com.cmic.gen.sdk.d.a.a     // Catch: java.lang.Exception -> L182
            java.lang.Object r2 = r2.a(r1, r9)     // Catch: java.lang.Exception -> L182
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L182
            boolean r2 = r2.equals(r9)     // Catch: java.lang.Exception -> L182
            if (r2 != 0) goto La7
            com.cmic.gen.sdk.d.a$a<java.lang.String, java.lang.String> r2 = com.cmic.gen.sdk.d.a.a     // Catch: java.lang.Exception -> L182
            java.lang.Object r1 = r2.get(r1)     // Catch: java.lang.Exception -> L182
            r11 = r1
            java.lang.String r11 = (java.lang.String) r11     // Catch: java.lang.Exception -> L182
        La7:
            r7.d(r11)     // Catch: java.lang.Exception -> L182
            com.cmic.gen.sdk.d.a$a<java.lang.String, java.lang.String> r1 = com.cmic.gen.sdk.d.a.a     // Catch: java.lang.Exception -> L182
            java.lang.String r2 = "authPrivacyState"
            java.lang.Object r1 = r1.a(r2, r9)     // Catch: java.lang.Exception -> L182
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L182
            r7.a(r1)     // Catch: java.lang.Exception -> L182
            org.json.JSONObject r1 = r7.a()     // Catch: java.lang.Exception -> L182
            com.cmic.gen.sdk.d.c r2 = new com.cmic.gen.sdk.d.c     // Catch: java.lang.Exception -> L182
            r2.<init>()     // Catch: java.lang.Exception -> L182
            java.lang.String r3 = r13.b(r0, r6)     // Catch: java.lang.Exception -> L182
            r2.b(r3)     // Catch: java.lang.Exception -> L182
            java.lang.String r3 = "traceId"
            java.lang.String r3 = r13.b(r3)     // Catch: java.lang.Exception -> L182
            r2.r(r3)     // Catch: java.lang.Exception -> L182
            java.lang.String r0 = r13.b(r0)     // Catch: java.lang.Exception -> L182
            r2.b(r0)     // Catch: java.lang.Exception -> L182
            java.lang.String r0 = com.cmic.gen.sdk.e.f.a(r12)     // Catch: java.lang.Exception -> L182
            r2.i(r0)     // Catch: java.lang.Exception -> L182
            java.lang.String r12 = com.cmic.gen.sdk.e.f.b(r12)     // Catch: java.lang.Exception -> L182
            r2.j(r12)     // Catch: java.lang.Exception -> L182
            java.lang.String r12 = "timeOut"
            java.lang.String r12 = r13.b(r12)     // Catch: java.lang.Exception -> L182
            r2.k(r12)     // Catch: java.lang.Exception -> L182
            com.cmic.gen.sdk.d.a$a<java.lang.String, java.lang.String> r12 = com.cmic.gen.sdk.d.a.a     // Catch: java.lang.Exception -> L182
            java.lang.String r0 = "authPageInTime"
            java.lang.Object r12 = r12.a(r0, r6)     // Catch: java.lang.Exception -> L182
            java.lang.String r12 = (java.lang.String) r12     // Catch: java.lang.Exception -> L182
            r2.s(r12)     // Catch: java.lang.Exception -> L182
            com.cmic.gen.sdk.d.a$a<java.lang.String, java.lang.String> r12 = com.cmic.gen.sdk.d.a.a     // Catch: java.lang.Exception -> L182
            java.lang.String r0 = "authPageOutTime"
            java.lang.Object r12 = r12.a(r0, r6)     // Catch: java.lang.Exception -> L182
            java.lang.String r12 = (java.lang.String) r12     // Catch: java.lang.Exception -> L182
            r2.t(r12)     // Catch: java.lang.Exception -> L182
            java.lang.String r12 = "eventTracking5"
            r2.u(r12)     // Catch: java.lang.Exception -> L182
            java.lang.String r12 = "operatortype"
            java.lang.String r12 = r13.b(r12, r6)     // Catch: java.lang.Exception -> L182
            r2.n(r12)     // Catch: java.lang.Exception -> L182
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L182
            r12.<init>()     // Catch: java.lang.Exception -> L182
            java.lang.String r0 = "networktype"
            int r0 = r13.b(r0, r8)     // Catch: java.lang.Exception -> L182
            r12.append(r0)     // Catch: java.lang.Exception -> L182
            r12.append(r6)     // Catch: java.lang.Exception -> L182
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Exception -> L182
            r2.w(r12)     // Catch: java.lang.Exception -> L182
            java.lang.String r12 = com.cmic.gen.sdk.e.m.a()     // Catch: java.lang.Exception -> L182
            r2.e(r12)     // Catch: java.lang.Exception -> L182
            java.lang.String r12 = com.cmic.gen.sdk.e.m.b()     // Catch: java.lang.Exception -> L182
            r2.o(r12)     // Catch: java.lang.Exception -> L182
            java.lang.String r12 = com.cmic.gen.sdk.e.m.c()     // Catch: java.lang.Exception -> L182
            r2.p(r12)     // Catch: java.lang.Exception -> L182
            java.lang.String r12 = "simCardNum"
            java.lang.String r12 = r13.b(r12)     // Catch: java.lang.Exception -> L182
            r2.m(r12)     // Catch: java.lang.Exception -> L182
            r2.a(r1)     // Catch: java.lang.Exception -> L182
            java.lang.String r12 = "imsiState"
            java.lang.String r0 = "0"
            java.lang.String r12 = r13.b(r12, r0)     // Catch: java.lang.Exception -> L182
            r2.c(r12)     // Catch: java.lang.Exception -> L182
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L182
            r12.<init>()     // Catch: java.lang.Exception -> L182
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L182
            java.lang.String r3 = "methodTimes"
            r4 = 0
            long r3 = r13.b(r3, r4)     // Catch: java.lang.Exception -> L182
            long r0 = r0 - r3
            r12.append(r0)     // Catch: java.lang.Exception -> L182
            r12.append(r6)     // Catch: java.lang.Exception -> L182
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Exception -> L182
            r2.l(r12)     // Catch: java.lang.Exception -> L182
            com.cmic.gen.sdk.d.a$1 r12 = new com.cmic.gen.sdk.d.a$1     // Catch: java.lang.Exception -> L182
            r12.<init>(r2, r13)     // Catch: java.lang.Exception -> L182
            com.cmic.gen.sdk.e.n.a(r12)     // Catch: java.lang.Exception -> L182
            goto L186
        L182:
            r12 = move-exception
            r12.printStackTrace()
        L186:
            return
    }

    public static void a(java.lang.String r3) {
            com.cmic.gen.sdk.d.a$a<java.lang.String, java.lang.String> r0 = com.cmic.gen.sdk.d.a.a     // Catch: java.lang.Exception -> L39
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Exception -> L39
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L39
            r1 = 0
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L39
            if (r2 != 0) goto L13
            int r1 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L39
        L13:
            int r1 = r1 + 1
            com.cmic.gen.sdk.d.a$a<java.lang.String, java.lang.String> r0 = com.cmic.gen.sdk.d.a.a     // Catch: java.lang.Exception -> L39
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Exception -> L39
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L39
            com.cmic.gen.sdk.d.a$a<java.lang.String, java.lang.String> r0 = com.cmic.gen.sdk.d.a.a     // Catch: java.lang.Exception -> L39
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L39
            r1.<init>()     // Catch: java.lang.Exception -> L39
            r1.append(r3)     // Catch: java.lang.Exception -> L39
            java.lang.String r3 = "Time"
            r1.append(r3)     // Catch: java.lang.Exception -> L39
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Exception -> L39
            java.lang.String r1 = com.cmic.gen.sdk.e.o.a()     // Catch: java.lang.Exception -> L39
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L39
            goto L3d
        L39:
            r3 = move-exception
            r3.printStackTrace()
        L3d:
            return
    }

    public static void a(java.lang.String r1, java.lang.String r2) {
            com.cmic.gen.sdk.d.a$a<java.lang.String, java.lang.String> r0 = com.cmic.gen.sdk.d.a.a
            r0.put(r1, r2)
            return
    }
}
