package com.loc;

public class ah {
    private static com.loc.ah a;
    private final android.content.Context b;
    private final java.lang.String c;

    private ah(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            android.content.Context r1 = r1.getApplicationContext()
            r0.b = r1
            java.lang.String r1 = "RYW1hcF9kZXZpY2VfYWRpdQ"
            java.lang.String r1 = com.loc.x.c(r1)
            java.lang.String r1 = com.loc.ao.a(r1)
            r0.c = r1
            return
    }

    public static com.loc.ah a(android.content.Context r2) {
            com.loc.ah r0 = com.loc.ah.a
            if (r0 != 0) goto L17
            java.lang.Class<com.loc.ah> r0 = com.loc.ah.class
            monitor-enter(r0)
            com.loc.ah r1 = com.loc.ah.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.loc.ah r1 = new com.loc.ah     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.loc.ah.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.loc.ah r2 = com.loc.ah.a
            return r2
    }

    public final synchronized void a() {
            r1 = this;
            monitor-enter(r1)
            com.loc.o$a r0 = com.loc.o.c()     // Catch: java.lang.Throwable -> L10
            if (r0 != 0) goto Le
            com.loc.o$a r0 = com.loc.al.a()     // Catch: java.lang.Throwable -> L10
            com.loc.o.a(r0)     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r1)
            return
        L10:
            monitor-exit(r1)
            return
    }

    public final void a(java.lang.String r3) {
            r2 = this;
            android.content.Context r0 = r2.b
            com.loc.ai r0 = com.loc.ai.a(r0)
            java.lang.String r1 = r2.c
            r0.a(r1)
            android.content.Context r0 = r2.b
            com.loc.ai r0 = com.loc.ai.a(r0)
            r0.b(r3)
            return
    }
}
