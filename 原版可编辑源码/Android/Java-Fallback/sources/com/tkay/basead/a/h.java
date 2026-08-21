package com.tkay.basead.a;

public class h {
    private static volatile com.tkay.basead.a.h b;
    com.tkay.basead.a.g a;
    private android.content.Context c;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.h> d;

    private h(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap
            r1.<init>()
            r0.d = r1
            return
    }

    public static com.tkay.basead.a.h a(android.content.Context r2) {
            com.tkay.basead.a.h r0 = com.tkay.basead.a.h.b
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.basead.a.h> r0 = com.tkay.basead.a.h.class
            monitor-enter(r0)
            com.tkay.basead.a.h r1 = com.tkay.basead.a.h.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.basead.a.h r1 = new com.tkay.basead.a.h     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.basead.a.h.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.basead.a.h r2 = com.tkay.basead.a.h.b
            return r2
    }

    private void b() {
            r2 = this;
            com.tkay.basead.a.g r0 = r2.a
            if (r0 == 0) goto L12
            android.content.Context r0 = r2.c
            com.tkay.core.common.m r0 = com.tkay.core.common.m.a(r0)
            com.tkay.basead.a.g r1 = r2.a
            r0.a(r1)
            r0 = 0
            r2.a = r0
        L12:
            return
    }

    public final void a() {
            r3 = this;
            android.content.Context r0 = r3.c
            if (r0 != 0) goto L5
            return
        L5:
            com.tkay.basead.a.g r0 = r3.a
            if (r0 != 0) goto L34
            com.tkay.basead.a.g r0 = new com.tkay.basead.a.g
            r0.<init>()
            r3.a = r0
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            java.lang.String r1 = "action_offer_download_start"
            r0.addAction(r1)
            java.lang.String r1 = "action_offer_download_end"
            r0.addAction(r1)
            java.lang.String r1 = "action_offer_install_start"
            r0.addAction(r1)
            java.lang.String r1 = "action_offer_install_successful"
            r0.addAction(r1)
            android.content.Context r1 = r3.c
            com.tkay.core.common.m r1 = com.tkay.core.common.m.a(r1)
            com.tkay.basead.a.g r2 = r3.a
            r1.a(r2, r0)
        L34:
            return
    }

    public final void a(java.lang.String r2, com.tkay.core.common.f.h r3) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.h> r0 = r1.d
            r0.put(r2, r3)
            return
    }

    public final void a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.h> r0 = r2.d
            java.lang.Object r3 = r0.get(r3)
            com.tkay.core.common.f.h r3 = (com.tkay.core.common.f.h) r3
            if (r3 == 0) goto L21
            com.tkay.basead.c.i r0 = new com.tkay.basead.c.i
            java.lang.String r1 = ""
            r0.<init>(r1, r1)
            com.tkay.basead.c.b r1 = new com.tkay.basead.c.b
            r1.<init>()
            r0.i = r1
            com.tkay.basead.c.b r1 = r0.i
            r1.a = r4
            r4 = 18
            com.tkay.basead.a.b.a(r4, r3, r0)
        L21:
            return
    }

    public final void b(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.h> r0 = r2.d
            java.lang.Object r3 = r0.get(r3)
            com.tkay.core.common.f.h r3 = (com.tkay.core.common.f.h) r3
            if (r3 == 0) goto L21
            com.tkay.basead.c.i r0 = new com.tkay.basead.c.i
            java.lang.String r1 = ""
            r0.<init>(r1, r1)
            com.tkay.basead.c.b r1 = new com.tkay.basead.c.b
            r1.<init>()
            r0.i = r1
            com.tkay.basead.c.b r1 = r0.i
            r1.a = r4
            r4 = 19
            com.tkay.basead.a.b.a(r4, r3, r0)
        L21:
            return
    }

    public final void c(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.h> r0 = r2.d
            java.lang.Object r3 = r0.get(r3)
            com.tkay.core.common.f.h r3 = (com.tkay.core.common.f.h) r3
            if (r3 == 0) goto L21
            com.tkay.basead.c.i r0 = new com.tkay.basead.c.i
            java.lang.String r1 = ""
            r0.<init>(r1, r1)
            com.tkay.basead.c.b r1 = new com.tkay.basead.c.b
            r1.<init>()
            r0.i = r1
            com.tkay.basead.c.b r1 = r0.i
            r1.a = r4
            r4 = 20
            com.tkay.basead.a.b.a(r4, r3, r0)
        L21:
            return
    }

    public final void d(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.h> r0 = r2.d
            java.lang.Object r3 = r0.remove(r3)
            com.tkay.core.common.f.h r3 = (com.tkay.core.common.f.h) r3
            if (r3 == 0) goto L21
            com.tkay.basead.c.i r0 = new com.tkay.basead.c.i
            java.lang.String r1 = ""
            r0.<init>(r1, r1)
            com.tkay.basead.c.b r1 = new com.tkay.basead.c.b
            r1.<init>()
            r0.i = r1
            com.tkay.basead.c.b r1 = r0.i
            r1.a = r4
            r4 = 21
            com.tkay.basead.a.b.a(r4, r3, r0)
        L21:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.h> r3 = r2.d
            int r3 = r3.size()
            if (r3 != 0) goto L3b
            com.tkay.basead.a.g r3 = r2.a
            if (r3 == 0) goto L3b
            android.content.Context r3 = r2.c
            com.tkay.core.common.m r3 = com.tkay.core.common.m.a(r3)
            com.tkay.basead.a.g r4 = r2.a
            r3.a(r4)
            r3 = 0
            r2.a = r3
        L3b:
            return
    }
}
