package com.mbridge.msdk.foundation.same.report;

public final class g {
    private final java.lang.String a;
    private final java.util.Map<java.lang.String, java.lang.String> b;

    static class 1 {
    }

    public static class a {
        private final java.lang.String a;
        private final java.util.Map<java.lang.String, java.lang.String> b;

        public a(java.lang.String r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                java.util.HashMap r1 = new java.util.HashMap
                r1.<init>()
                r0.b = r1
                return
        }

        static java.lang.String a(com.mbridge.msdk.foundation.same.report.g.a r0) {
                java.lang.String r0 = r0.a
                return r0
        }

        static java.util.Map b(com.mbridge.msdk.foundation.same.report.g.a r0) {
                java.util.Map<java.lang.String, java.lang.String> r0 = r0.b
                return r0
        }

        public final com.mbridge.msdk.foundation.same.report.g.a a(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                boolean r0 = android.text.TextUtils.isEmpty(r2)
                if (r0 != 0) goto L1a
                java.util.Map<java.lang.String, java.lang.String> r0 = r1.b     // Catch: java.lang.Exception -> Lc
                r0.put(r2, r3)     // Catch: java.lang.Exception -> Lc
                goto L1a
            Lc:
                r2 = move-exception
                boolean r3 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r3 == 0) goto L1a
                java.lang.String r2 = r2.getMessage()
                java.lang.String r3 = "SameCommonReporter"
                com.mbridge.msdk.foundation.tools.z.d(r3, r2)
            L1a:
                return r1
        }

        public final com.mbridge.msdk.foundation.same.report.g a() {
                r2 = this;
                com.mbridge.msdk.foundation.same.report.g r0 = new com.mbridge.msdk.foundation.same.report.g
                r1 = 0
                r0.<init>(r2, r1)
                return r0
        }
    }

    private static final class b extends com.mbridge.msdk.foundation.same.report.d.b {
        public b() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final void onFailed(java.lang.String r3) {
                r2 = this;
                boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r0 == 0) goto L1a
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "report failed for： "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                java.lang.String r0 = "SameCommonReporter"
                com.mbridge.msdk.foundation.tools.z.a(r0, r3)
            L1a:
                return
        }

        @Override
        public final void onSuccess(java.lang.String r3) {
                r2 = this;
                boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r0 == 0) goto L1a
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "report success for： "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                java.lang.String r0 = "SameCommonReporter"
                com.mbridge.msdk.foundation.tools.z.a(r0, r3)
            L1a:
                return
        }
    }

    private g(com.mbridge.msdk.foundation.same.report.g.a r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = com.mbridge.msdk.foundation.same.report.g.a.a(r2)
            r1.a = r0
            java.util.Map r2 = com.mbridge.msdk.foundation.same.report.g.a.b(r2)
            r1.b = r2
            return
    }

    g(com.mbridge.msdk.foundation.same.report.g.a r1, com.mbridge.msdk.foundation.same.report.g.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private java.lang.String a(java.util.Map<java.lang.String, java.lang.String> r9) {
            r8 = this;
            java.lang.String r0 = "SameCommonReporter"
            r1 = 0
            if (r9 == 0) goto L76
            int r2 = r9.size()
            if (r2 != 0) goto Lc
            goto L76
        Lc:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.util.Set r3 = r9.keySet()     // Catch: java.lang.Exception -> L5c
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Exception -> L5c
        L19:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Exception -> L5c
            if (r4 == 0) goto L69
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Exception -> L5c
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L5c
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L5c
            if (r5 != 0) goto L19
            java.lang.Object r5 = r9.get(r4)     // Catch: java.lang.Exception -> L5c
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> L5c
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L5c
            if (r6 == 0) goto L38
            goto L19
        L38:
            java.lang.String r6 = "utf-8"
            java.lang.String r5 = java.net.URLEncoder.encode(r5, r6)     // Catch: java.lang.Exception -> L3f
            goto L4b
        L3f:
            r6 = move-exception
            boolean r7 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> L5c
            if (r7 == 0) goto L4b
            java.lang.String r6 = r6.getMessage()     // Catch: java.lang.Exception -> L5c
            com.mbridge.msdk.foundation.tools.z.d(r0, r6)     // Catch: java.lang.Exception -> L5c
        L4b:
            java.lang.String r6 = "&"
            r2.append(r6)     // Catch: java.lang.Exception -> L5c
            r2.append(r4)     // Catch: java.lang.Exception -> L5c
            java.lang.String r4 = "="
            r2.append(r4)     // Catch: java.lang.Exception -> L5c
            r2.append(r5)     // Catch: java.lang.Exception -> L5c
            goto L19
        L5c:
            r9 = move-exception
            boolean r2 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r2 == 0) goto L68
            java.lang.String r9 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r9)
        L68:
            r2 = r1
        L69:
            if (r2 == 0) goto L76
            int r9 = r2.length()
            if (r9 <= 0) goto L76
            java.lang.String r9 = r2.toString()
            return r9
        L76:
            return r1
    }

    public final void a(java.lang.String r6) {
            r5 = this;
            java.lang.String r0 = "SameCommonReporter"
            java.lang.String r1 = r5.a
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto Lb
            return
        Lb:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "key="
            r1.append(r2)
            java.lang.String r2 = r5.a
            r1.append(r2)
            r2 = 0
            java.util.Map<java.lang.String, java.lang.String> r3 = r5.b     // Catch: java.lang.Exception -> L22
            java.lang.String r3 = r5.a(r3)     // Catch: java.lang.Exception -> L22
            goto L2f
        L22:
            r3 = move-exception
            boolean r4 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r4 == 0) goto L2e
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
        L2e:
            r3 = r2
        L2f:
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L38
            r1.append(r3)
        L38:
            com.mbridge.msdk.foundation.same.report.b r3 = com.mbridge.msdk.foundation.same.report.b.a()
            boolean r3 = r3.c()
            if (r3 == 0) goto L4e
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()
            java.lang.String r0 = r1.toString()
            r6.a(r0)
            goto L99
        L4e:
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L5f
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L5f
            android.content.Context r3 = r3.j()     // Catch: java.lang.Exception -> L5f
            com.mbridge.msdk.foundation.same.net.g.d r2 = com.mbridge.msdk.foundation.same.report.e.a(r1, r3, r6)     // Catch: java.lang.Exception -> L5f
            goto L6b
        L5f:
            r6 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L6b
            java.lang.String r6 = r6.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r6)
        L6b:
            if (r2 == 0) goto L99
            if (r2 != 0) goto L70
            goto L99
        L70:
            com.mbridge.msdk.foundation.same.report.d.a r6 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L8d
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L8d
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L8d
            r6.<init>(r1)     // Catch: java.lang.Exception -> L8d
            r1 = 0
            com.mbridge.msdk.foundation.same.net.f.d r3 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L8d
            java.lang.String r3 = r3.a     // Catch: java.lang.Exception -> L8d
            com.mbridge.msdk.foundation.same.report.g$b r4 = new com.mbridge.msdk.foundation.same.report.g$b     // Catch: java.lang.Exception -> L8d
            r4.<init>()     // Catch: java.lang.Exception -> L8d
            r6.post(r1, r3, r2, r4)     // Catch: java.lang.Exception -> L8d
            goto L99
        L8d:
            r6 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L99
            java.lang.String r6 = r6.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r6)
        L99:
            return
    }
}
