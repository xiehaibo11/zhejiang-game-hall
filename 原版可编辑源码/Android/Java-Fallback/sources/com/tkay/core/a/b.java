package com.tkay.core.a;

public class b {
    private static volatile com.tkay.core.a.b c;
    final java.lang.String a;
    java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.b> b;

    public b() {
            r1 = this;
            r1.<init>()
            java.lang.Class<com.tkay.core.a.b> r0 = com.tkay.core.a.b.class
            java.lang.String r0 = r0.getSimpleName()
            r1.a = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.b = r0
            return
    }

    public static com.tkay.core.a.b a() {
            com.tkay.core.a.b r0 = com.tkay.core.a.b.c
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.a.b> r0 = com.tkay.core.a.b.class
            monitor-enter(r0)
            com.tkay.core.a.b r1 = com.tkay.core.a.b.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.a.b r1 = new com.tkay.core.a.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.a.b.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.a.b r0 = com.tkay.core.a.b.c
            return r0
    }

    public final boolean a(android.content.Context r5, java.lang.String r6, com.tkay.core.c.d r7) {
            r4 = this;
            int r0 = r7.al()
            r1 = 0
            if (r0 > 0) goto L8
            return r1
        L8:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.b> r0 = r4.b
            java.lang.Object r0 = r0.get(r6)
            com.tkay.core.common.f.b r0 = (com.tkay.core.common.f.b) r0
            if (r0 != 0) goto L2d
            java.lang.String r0 = "tkay_placement_load"
            java.lang.String r2 = ""
            java.lang.String r5 = com.tkay.core.common.l.p.b(r5, r0, r6, r2)
            com.tkay.core.common.f.b r0 = new com.tkay.core.common.f.b
            r0.<init>()
            boolean r2 = android.text.TextUtils.isEmpty(r5)
            if (r2 != 0) goto L28
            r0.a(r5)
        L28:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.b> r5 = r4.b
            r5.put(r6, r0)
        L2d:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r2 = "Load Cap info:"
            r5.<init>(r2)
            r5.append(r6)
            java.lang.String r6 = ":"
            r5.append(r6)
            java.lang.String r6 = r0.toString()
            r5.append(r6)
            int r5 = r0.a
            int r6 = r7.al()
            if (r5 < r6) goto L5c
            long r5 = java.lang.System.currentTimeMillis()
            long r2 = r0.b
            long r5 = r5 - r2
            long r2 = r7.am()
            int r5 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r5 > 0) goto L5c
            r5 = 1
            return r5
        L5c:
            return r1
    }

    public final void b(android.content.Context r7, java.lang.String r8, com.tkay.core.c.d r9) {
            r6 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.b> r0 = r6.b
            java.lang.Object r0 = r0.get(r8)
            com.tkay.core.common.f.b r0 = (com.tkay.core.common.f.b) r0
            java.lang.String r1 = "tkay_placement_load"
            if (r0 != 0) goto L26
            java.lang.String r0 = ""
            java.lang.String r0 = com.tkay.core.common.l.p.b(r7, r1, r8, r0)
            com.tkay.core.common.f.b r2 = new com.tkay.core.common.f.b
            r2.<init>()
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 != 0) goto L20
            r2.a(r0)
        L20:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.b> r0 = r6.b
            r0.put(r8, r2)
            r0 = r2
        L26:
            long r2 = java.lang.System.currentTimeMillis()
            long r4 = r0.b
            long r2 = r2 - r4
            long r4 = r9.am()
            int r9 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r9 <= 0) goto L3e
            long r2 = java.lang.System.currentTimeMillis()
            r0.b = r2
            r9 = 0
            r0.a = r9
        L3e:
            int r9 = r0.a
            int r9 = r9 + 1
            r0.a = r9
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            java.lang.String r2 = "After save load cap:"
            r9.<init>(r2)
            r9.append(r8)
            java.lang.String r2 = ":"
            r9.append(r2)
            java.lang.String r2 = r0.toString()
            r9.append(r2)
            java.lang.String r9 = r0.toString()
            com.tkay.core.common.l.p.a(r7, r1, r8, r9)
            return
    }
}
