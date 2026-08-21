package com.tkay.expressad.reward.a;

public final class e implements com.tkay.expressad.e.a {
    private static final java.lang.String a = "RewardUnitCacheManager";
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.e.d> b;

    static class 1 {
    }

    private static final class a {
        private static final com.tkay.expressad.reward.a.e a = null;

        static {
                com.tkay.expressad.reward.a.e r0 = new com.tkay.expressad.reward.a.e
                r1 = 0
                r0.<init>(r1)
                com.tkay.expressad.reward.a.e.a.a = r0
                return
        }

        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.tkay.expressad.reward.a.e a() {
                com.tkay.expressad.reward.a.e r0 = com.tkay.expressad.reward.a.e.a.a
                return r0
        }
    }

    private e() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.b = r0
            return
    }

    e(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.expressad.reward.a.e a() {
            com.tkay.expressad.reward.a.e r0 = com.tkay.expressad.reward.a.e.a.a()
            return r0
    }

    public final com.tkay.expressad.videocommon.e.d a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            r0 = 0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1e java.lang.Throwable -> L22
            r1.<init>()     // Catch: java.lang.Exception -> L1e java.lang.Throwable -> L22
            r1.append(r3)     // Catch: java.lang.Exception -> L1e java.lang.Throwable -> L22
            java.lang.String r3 = "_"
            r1.append(r3)     // Catch: java.lang.Exception -> L1e java.lang.Throwable -> L22
            r1.append(r4)     // Catch: java.lang.Exception -> L1e java.lang.Throwable -> L22
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Exception -> L1e java.lang.Throwable -> L22
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.e.d> r4 = r2.b     // Catch: java.lang.Exception -> L1e java.lang.Throwable -> L22
            java.lang.Object r3 = r4.remove(r3)     // Catch: java.lang.Exception -> L1e java.lang.Throwable -> L22
            com.tkay.expressad.videocommon.e.d r3 = (com.tkay.expressad.videocommon.e.d) r3     // Catch: java.lang.Exception -> L1e java.lang.Throwable -> L22
            return r3
        L1e:
            r3 = move-exception
            r3.getMessage()     // Catch: java.lang.Throwable -> L22
        L22:
            return r0
    }

    public final void a(java.lang.String r2, java.lang.String r3, com.tkay.expressad.videocommon.e.d r4) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L29
            r0.<init>()     // Catch: java.lang.Exception -> L29
            r0.append(r2)     // Catch: java.lang.Exception -> L29
            java.lang.String r2 = "_"
            r0.append(r2)     // Catch: java.lang.Exception -> L29
            r0.append(r3)     // Catch: java.lang.Exception -> L29
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Exception -> L29
            if (r4 == 0) goto L23
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.e.d> r3 = r1.b     // Catch: java.lang.Exception -> L29
            boolean r3 = r3.containsKey(r2)     // Catch: java.lang.Exception -> L29
            if (r3 == 0) goto L23
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.e.d> r3 = r1.b     // Catch: java.lang.Exception -> L29
            r3.remove(r2)     // Catch: java.lang.Exception -> L29
        L23:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.e.d> r3 = r1.b     // Catch: java.lang.Exception -> L29
            r3.put(r2, r4)     // Catch: java.lang.Exception -> L29
            return
        L29:
            r2 = move-exception
            r2.getMessage()
            return
    }
}
