package com.tkay.basead.d.c;

public class c {
    private static volatile com.tkay.basead.d.c.c b;
    java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.ArrayList<java.lang.String>> a;

    private c() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.a = r0
            return
    }

    public static com.tkay.basead.d.c.c a() {
            com.tkay.basead.d.c.c r0 = com.tkay.basead.d.c.c.b
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.basead.d.c.c> r0 = com.tkay.basead.d.c.c.class
            monitor-enter(r0)
            com.tkay.basead.d.c.c r1 = com.tkay.basead.d.c.c.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.basead.d.c.c r1 = new com.tkay.basead.d.c.c     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.basead.d.c.c.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.basead.d.c.c r0 = com.tkay.basead.d.c.c.b
            return r0
    }

    public static java.lang.String a(java.lang.String r1, java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public final synchronized void a(android.content.Context r6, java.lang.String r7, com.tkay.core.common.f.h r8, com.tkay.core.common.f.j r9) {
            r5 = this;
            monitor-enter(r5)
            int r0 = r8.d()     // Catch: java.lang.Throwable -> L7c
            r1 = 3
            if (r0 != r1) goto L7a
            boolean r0 = r9 instanceof com.tkay.core.common.f.aa     // Catch: java.lang.Throwable -> L7c
            if (r0 == 0) goto L7a
            r0 = r9
            com.tkay.core.common.f.aa r0 = (com.tkay.core.common.f.aa) r0     // Catch: java.lang.Throwable -> L7c
            int r0 = r0.X()     // Catch: java.lang.Throwable -> L7c
            if (r0 > 0) goto L17
            monitor-exit(r5)
            return
        L17:
            com.tkay.core.common.f.aa r9 = (com.tkay.core.common.f.aa) r9     // Catch: java.lang.Throwable -> L7c
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.ArrayList<java.lang.String>> r0 = r5.a     // Catch: java.lang.Throwable -> L7c
            java.lang.Object r0 = r0.get(r7)     // Catch: java.lang.Throwable -> L7c
            java.util.ArrayList r0 = (java.util.ArrayList) r0     // Catch: java.lang.Throwable -> L7c
            r1 = 0
            if (r0 != 0) goto L52
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L7c
            r0.<init>()     // Catch: java.lang.Throwable -> L7c
            java.lang.String r2 = "tkayown_offerid_impression"
            java.lang.String r3 = ""
            java.lang.String r2 = com.tkay.core.common.l.p.b(r6, r2, r7, r3)     // Catch: java.lang.Throwable -> L7c
            org.json.JSONArray r3 = new org.json.JSONArray     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L7c
            r3.<init>(r2)     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L7c
            int r2 = r3.length()     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L7c
            if (r2 <= 0) goto L4d
            r2 = r1
        L3d:
            int r4 = r3.length()     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L7c
            if (r2 >= r4) goto L4d
            java.lang.String r4 = r3.optString(r2)     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L7c
            r0.add(r4)     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L7c
            int r2 = r2 + 1
            goto L3d
        L4d:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.ArrayList<java.lang.String>> r2 = r5.a     // Catch: java.lang.Throwable -> L7c
            r2.put(r7, r0)     // Catch: java.lang.Throwable -> L7c
        L52:
            int r2 = r0.size()     // Catch: java.lang.Throwable -> L7c
            int r9 = r9.X()     // Catch: java.lang.Throwable -> L7c
            if (r2 < r9) goto L65
            int r9 = r0.size()     // Catch: java.lang.Throwable -> L7c
            int r9 = r9 + (-1)
            r0.remove(r9)     // Catch: java.lang.Throwable -> L7c
        L65:
            java.lang.String r8 = r8.p()     // Catch: java.lang.Throwable -> L7c
            r0.add(r1, r8)     // Catch: java.lang.Throwable -> L7c
            org.json.JSONArray r8 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L7c
            r8.<init>(r0)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r9 = "tkayown_offerid_impression"
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L7c
            com.tkay.core.common.l.p.a(r6, r9, r7, r8)     // Catch: java.lang.Throwable -> L7c
        L7a:
            monitor-exit(r5)
            return
        L7c:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public final java.lang.String[] a(android.content.Context r4, java.lang.String r5) {
            r3 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.ArrayList<java.lang.String>> r0 = r3.a
            java.lang.Object r0 = r0.get(r5)
            java.util.ArrayList r0 = (java.util.ArrayList) r0
            if (r0 != 0) goto L34
            java.lang.String r1 = "tkayown_offerid_impression"
            java.lang.String r2 = ""
            java.lang.String r4 = com.tkay.core.common.l.p.b(r4, r1, r5, r2)
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L34
            r1.<init>(r4)     // Catch: java.lang.Exception -> L34
            int r4 = r1.length()     // Catch: java.lang.Exception -> L34
            if (r4 <= 0) goto L34
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Exception -> L34
            r4.<init>()     // Catch: java.lang.Exception -> L34
            r0 = 0
        L23:
            int r2 = r1.length()     // Catch: java.lang.Exception -> L33
            if (r0 >= r2) goto L33
            java.lang.String r2 = r1.optString(r0)     // Catch: java.lang.Exception -> L33
            r4.add(r2)     // Catch: java.lang.Exception -> L33
            int r0 = r0 + 1
            goto L23
        L33:
            r0 = r4
        L34:
            if (r0 == 0) goto L45
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.ArrayList<java.lang.String>> r4 = r3.a
            r4.put(r5, r0)
            int r4 = r0.size()
            java.lang.String[] r4 = new java.lang.String[r4]
            r0.toArray(r4)
            return r4
        L45:
            r4 = 0
            return r4
    }
}
