package com.tkay.core.common;

public class y {
    private static final java.lang.String c = null;
    private static volatile com.tkay.core.common.y d;
    java.util.Map<java.lang.String, com.tkay.core.common.f.am> a;
    android.content.Context b;

    static {
            java.lang.Class<com.tkay.core.common.y> r0 = com.tkay.core.common.y.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.core.common.y.c = r0
            return
    }

    private y(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            android.content.Context r1 = r1.getApplicationContext()
            r0.b = r1
            r0.a()
            return
    }

    public static com.tkay.core.common.y a(android.content.Context r2) {
            com.tkay.core.common.y r0 = com.tkay.core.common.y.d
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.y> r0 = com.tkay.core.common.y.class
            monitor-enter(r0)
            com.tkay.core.common.y r1 = com.tkay.core.common.y.d     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.y r1 = new com.tkay.core.common.y     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.y.d = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.core.common.y r2 = com.tkay.core.common.y.d
            return r2
    }

    private void a() {
            r4 = this;
            java.util.Map<java.lang.String, com.tkay.core.common.f.am> r0 = r4.a
            if (r0 != 0) goto L44
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 5
            r0.<init>(r1)
            r4.a = r0
            android.content.Context r0 = r4.b     // Catch: java.lang.Throwable -> L44
            java.lang.String r1 = "tkay_wt_cache_info"
            java.util.Map r0 = com.tkay.core.common.l.p.a(r0, r1)     // Catch: java.lang.Throwable -> L44
            if (r0 == 0) goto L44
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L44
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L44
        L1e:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L44
            if (r1 == 0) goto L44
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L44
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L44
            java.lang.Object r2 = r1.getKey()     // Catch: java.lang.Throwable -> L44
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L44
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Throwable -> L44
            boolean r3 = r1 instanceof java.lang.String     // Catch: java.lang.Throwable -> L44
            if (r3 == 0) goto L1e
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L44
            com.tkay.core.common.f.am r1 = com.tkay.core.common.f.am.a(r1)     // Catch: java.lang.Throwable -> L44
            java.util.Map<java.lang.String, com.tkay.core.common.f.am> r3 = r4.a     // Catch: java.lang.Throwable -> L44
            r3.put(r2, r1)     // Catch: java.lang.Throwable -> L44
            goto L1e
        L44:
            return
    }

    private com.tkay.core.common.f.am b(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, com.tkay.core.common.f.am> r0 = r1.a
            if (r0 == 0) goto Lb
            java.lang.Object r2 = r0.remove(r2)
            com.tkay.core.common.f.am r2 = (com.tkay.core.common.f.am) r2
            return r2
        Lb:
            r2 = 0
            return r2
    }

    private static void b() {
            return
    }

    public final void a(java.lang.String r4) {
            r3 = this;
            java.util.Map<java.lang.String, com.tkay.core.common.f.am> r0 = r3.a
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.Object r0 = r0.get(r4)     // Catch: java.lang.Throwable -> L1d
            com.tkay.core.common.f.am r0 = (com.tkay.core.common.f.am) r0     // Catch: java.lang.Throwable -> L1d
            if (r0 == 0) goto L1c
            org.json.JSONObject r0 = r0.a()     // Catch: java.lang.Throwable -> L1d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L1d
            android.content.Context r1 = r3.b     // Catch: java.lang.Throwable -> L1d
            java.lang.String r2 = "tkay_wt_cache_info"
            com.tkay.core.common.l.p.a(r1, r2, r4, r0)     // Catch: java.lang.Throwable -> L1d
        L1c:
            return
        L1d:
            r4 = move-exception
            r4.printStackTrace()
            return
    }

    public final void a(java.lang.String r3, java.lang.String r4, com.tkay.core.common.f.am.a r5, com.tkay.core.common.f.am.a r6) {
            r2 = this;
            java.util.Map<java.lang.String, com.tkay.core.common.f.am> r0 = r2.a
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.Object r0 = r0.get(r3)
            com.tkay.core.common.f.am r0 = (com.tkay.core.common.f.am) r0
            if (r0 != 0) goto L2a
            monitor-enter(r2)
            java.util.Map<java.lang.String, com.tkay.core.common.f.am> r0 = r2.a     // Catch: java.lang.Throwable -> L27
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> L27
            com.tkay.core.common.f.am r0 = (com.tkay.core.common.f.am) r0     // Catch: java.lang.Throwable -> L27
            if (r0 != 0) goto L25
            com.tkay.core.common.f.am r0 = new com.tkay.core.common.f.am     // Catch: java.lang.Throwable -> L27
            r0.<init>()     // Catch: java.lang.Throwable -> L27
            r0.b(r4)     // Catch: java.lang.Throwable -> L27
            java.util.Map<java.lang.String, com.tkay.core.common.f.am> r1 = r2.a     // Catch: java.lang.Throwable -> L27
            r1.put(r3, r0)     // Catch: java.lang.Throwable -> L27
        L25:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L27
            goto L2a
        L27:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
        L2a:
            java.lang.String r3 = r0.b()
            boolean r3 = android.text.TextUtils.equals(r4, r3)
            if (r3 != 0) goto L35
            return
        L35:
            if (r5 == 0) goto L41
            r0.a(r5)
            long r3 = java.lang.System.currentTimeMillis()
            r0.a(r3)
        L41:
            if (r6 == 0) goto L46
            r0.b(r6)
        L46:
            return
    }
}
