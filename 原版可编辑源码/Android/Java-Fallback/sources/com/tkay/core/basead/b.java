package com.tkay.core.basead;

public class b {
    private static volatile com.tkay.core.basead.b a;

    private b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.core.basead.b a() {
            com.tkay.core.basead.b r0 = com.tkay.core.basead.b.a
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.basead.b> r0 = com.tkay.core.basead.b.class
            monitor-enter(r0)
            com.tkay.core.basead.b r1 = com.tkay.core.basead.b.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.basead.b r1 = new com.tkay.core.basead.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.basead.b.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.basead.b r0 = com.tkay.core.basead.b.a
            return r0
    }

    public static java.lang.String a(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "tkay_onlineapi_file"
            java.lang.String r1 = ""
            java.lang.String r2 = com.tkay.core.common.l.p.b(r2, r0, r3, r1)
            return r2
    }

    public static java.lang.String a(com.tkay.core.common.f.i r2) {
            if (r2 != 0) goto L5
            java.lang.String r2 = ""
            return r2
        L5:
            java.lang.String r0 = r2.b
            java.lang.String r1 = r2.c
            int r2 = r2.f
            java.lang.String r2 = a(r0, r1, r2)
            return r2
    }

    public static java.lang.String a(java.lang.String r1, java.lang.String r2, int r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = "_"
            r0.append(r1)
            r0.append(r2)
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static void a(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = "tkay_onlineapi_file"
            com.tkay.core.common.l.p.a(r1, r0, r2, r3)
            return
    }

    public static void b(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "tkay_onlineapi_file"
            com.tkay.core.common.l.p.a(r1, r0, r2)
            return
    }
}
