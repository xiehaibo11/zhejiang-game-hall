package com.tkay.core.common;

public class w {
    private static final java.lang.String b = null;
    private static volatile com.tkay.core.common.w f;
    android.content.Context a;
    private final java.util.Map<java.lang.String, java.lang.Integer> c;
    private final java.util.Map<java.lang.String, com.tkay.core.common.f.ae> d;
    private final java.util.Map<java.lang.String, java.lang.Boolean> e;

    static {
            java.lang.Class<com.tkay.core.common.w> r0 = com.tkay.core.common.w.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.core.common.w.b = r0
            return
    }

    private w(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            android.content.Context r2 = r2.getApplicationContext()
            r1.a = r2
            java.util.concurrent.ConcurrentHashMap r2 = new java.util.concurrent.ConcurrentHashMap
            r0 = 8
            r2.<init>(r0)
            r1.c = r2
            java.util.concurrent.ConcurrentHashMap r2 = new java.util.concurrent.ConcurrentHashMap
            r2.<init>(r0)
            r1.d = r2
            java.util.concurrent.ConcurrentHashMap r2 = new java.util.concurrent.ConcurrentHashMap
            r2.<init>(r0)
            r1.e = r2
            return
    }

    public static com.tkay.core.common.w a(android.content.Context r2) {
            com.tkay.core.common.w r0 = com.tkay.core.common.w.f
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.w> r0 = com.tkay.core.common.w.class
            monitor-enter(r0)
            com.tkay.core.common.w r1 = com.tkay.core.common.w.f     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.w r1 = new com.tkay.core.common.w     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.w.f = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.core.common.w r2 = com.tkay.core.common.w.f
            return r2
    }

    private boolean c(java.lang.String r6) {
            r5 = this;
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r5.e
            java.lang.Object r0 = r0.get(r6)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            java.lang.String r1 = "checkFirstLoadAfterInstall: "
            if (r0 != 0) goto L37
            android.content.Context r0 = r5.a
            java.lang.String r2 = "tkay_wf_first_load"
            boolean r0 = com.tkay.core.common.l.p.c(r0, r2, r6)
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r3 = r0.booleanValue()
            if (r3 == 0) goto L30
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r1)
            r3.append(r6)
            java.lang.String r4 = ",  update to false"
            r3.append(r4)
            android.content.Context r3 = r5.a
            com.tkay.core.common.l.p.b(r3, r2, r6)
        L30:
            java.util.Map<java.lang.String, java.lang.Boolean> r2 = r5.e
            java.lang.Boolean r3 = java.lang.Boolean.FALSE
            r2.put(r6, r3)
        L37:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r1)
            r2.append(r6)
            java.lang.String r6 = ", is first load after install: "
            r2.append(r6)
            r2.append(r0)
            boolean r6 = r0.booleanValue()
            return r6
    }

    public final com.tkay.core.common.f.ae a(java.lang.String r6, java.lang.String r7) {
            r5 = this;
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r5.e
            java.lang.Object r0 = r0.get(r6)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            java.lang.String r1 = "checkFirstLoadAfterInstall: "
            if (r0 != 0) goto L37
            android.content.Context r0 = r5.a
            java.lang.String r2 = "tkay_wf_first_load"
            boolean r0 = com.tkay.core.common.l.p.c(r0, r2, r6)
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r3 = r0.booleanValue()
            if (r3 == 0) goto L30
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r1)
            r3.append(r6)
            java.lang.String r4 = ",  update to false"
            r3.append(r4)
            android.content.Context r3 = r5.a
            com.tkay.core.common.l.p.b(r3, r2, r6)
        L30:
            java.util.Map<java.lang.String, java.lang.Boolean> r2 = r5.e
            java.lang.Boolean r3 = java.lang.Boolean.FALSE
            r2.put(r6, r3)
        L37:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r1)
            r2.append(r6)
            java.lang.String r1 = ", is first load after install: "
            r2.append(r1)
            r2.append(r0)
            boolean r0 = r0.booleanValue()
            java.util.Map<java.lang.String, com.tkay.core.common.f.ae> r1 = r5.d
            java.lang.Object r1 = r1.remove(r6)
            com.tkay.core.common.f.ae r1 = (com.tkay.core.common.f.ae) r1
            java.lang.String r2 = "placementId: "
            if (r1 != 0) goto L6c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r2)
            r1.append(r6)
            java.lang.String r2 = ", first request after boot"
            r1.append(r2)
            com.tkay.core.common.f.ae r1 = new com.tkay.core.common.f.ae
            java.lang.String r2 = ""
            r1.<init>(r2, r0)
            goto L79
        L6c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r2)
            r0.append(r6)
            java.lang.String r2 = ", not first request after boot"
            r0.append(r2)
        L79:
            com.tkay.core.common.f.ae r0 = new com.tkay.core.common.f.ae
            r2 = 0
            r0.<init>(r7, r2)
            java.util.Map<java.lang.String, com.tkay.core.common.f.ae> r7 = r5.d
            r7.put(r6, r0)
            return r1
    }

    public final void a(java.lang.String r5) {
            r4 = this;
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r4.c
            java.lang.Object r0 = r0.get(r5)
            java.lang.Integer r0 = (java.lang.Integer) r0
            java.lang.String r1 = "updateBidCount: "
            r2 = 1
            if (r0 != 0) goto L24
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r1)
            r0.append(r5)
            java.lang.String r1 = ", it is first bid"
            r0.append(r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r4.c
            java.lang.Integer r1 = java.lang.Integer.valueOf(r2)
            r0.put(r5, r1)
            return
        L24:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r1)
            r3.append(r5)
            java.lang.String r1 = ", bid count: "
            r3.append(r1)
            int r1 = r0.intValue()
            int r1 = r1 + r2
            r3.append(r1)
            java.util.Map<java.lang.String, java.lang.Integer> r1 = r4.c
            int r0 = r0.intValue()
            int r0 = r0 + r2
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r1.put(r5, r0)
            return
    }

    public final void a(java.lang.String r4, java.lang.String r5, boolean r6) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L7
            return
        L7:
            java.util.Map<java.lang.String, com.tkay.core.common.f.ae> r0 = r3.d
            java.lang.Object r0 = r0.get(r4)
            com.tkay.core.common.f.ae r0 = (com.tkay.core.common.f.ae) r0
            if (r0 == 0) goto L38
            java.lang.String r1 = r0.a()
            boolean r1 = android.text.TextUtils.equals(r5, r1)
            if (r1 == 0) goto L38
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "recordLoadResult: "
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = ", requestId: "
            r1.append(r4)
            r1.append(r5)
            java.lang.String r4 = ", load result: "
            r1.append(r4)
            r1.append(r6)
            r0.a(r6)
        L38:
            return
    }

    public final int b(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r1.c
            java.lang.Object r2 = r0.get(r2)
            java.lang.Integer r2 = (java.lang.Integer) r2
            if (r2 != 0) goto Lc
            r2 = 1
            return r2
        Lc:
            int r2 = r2.intValue()
            return r2
    }
}
