package com.mbridge.msdk.foundation.same.net;

public class h {
    private static final java.lang.String a = null;
    private com.mbridge.msdk.foundation.same.net.stack.a b;
    private com.mbridge.msdk.foundation.same.net.g c;
    private com.mbridge.msdk.foundation.same.net.c d;

    static {
            java.lang.Class<com.mbridge.msdk.foundation.same.net.h> r0 = com.mbridge.msdk.foundation.same.net.h.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.foundation.same.net.h.a = r0
            return
    }

    public h(android.content.Context r1, javax.net.ssl.SSLSocketFactory r2, com.mbridge.msdk.foundation.same.net.c r3) {
            r0 = this;
            r0.<init>()
            com.mbridge.msdk.foundation.same.net.stack.OkHttpStack r1 = new com.mbridge.msdk.foundation.same.net.stack.OkHttpStack
            r1.<init>()
            r0.b = r1
            com.mbridge.msdk.foundation.same.net.e.a r1 = new com.mbridge.msdk.foundation.same.net.e.a
            com.mbridge.msdk.foundation.same.net.stack.a r2 = r0.b
            r1.<init>(r2, r3)
            r0.c = r1
            r0.d = r3
            return
    }

    public final void a(com.mbridge.msdk.foundation.same.net.i r5) {
            r4 = this;
            r0 = 10
            android.os.Process.setThreadPriority(r0)
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.h.a     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            r1.<init>()     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            java.lang.String r2 = "network-queue-take request="
            r1.append(r2)     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            java.lang.String r2 = r5.b()     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            r1.append(r2)     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            com.mbridge.msdk.foundation.same.net.c r0 = r4.d     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            r0.c(r5)     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            boolean r0 = r5.c()     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            if (r0 == 0) goto L3a
            java.lang.String r0 = "network-discard-cancelled"
            r5.a(r0)     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            com.mbridge.msdk.foundation.same.net.c r0 = r4.d     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            r0.b(r5)     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            com.mbridge.msdk.foundation.same.net.c r0 = r4.d     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            r0.a(r5)     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            goto Lad
        L3a:
            com.mbridge.msdk.foundation.same.net.c r0 = r4.d     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            r0.d(r5)     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            com.mbridge.msdk.foundation.same.net.g r0 = r4.c     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            com.mbridge.msdk.foundation.same.net.e.c r0 = r0.a(r5)     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            java.lang.String r1 = com.mbridge.msdk.foundation.same.net.h.a     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            r2.<init>()     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            java.lang.String r3 = "network-http-complete networkResponse="
            r2.append(r3)     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            int r3 = r0.a     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            r2.append(r3)     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            com.mbridge.msdk.foundation.same.net.k r0 = r5.a(r0)     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            java.lang.String r1 = com.mbridge.msdk.foundation.same.net.h.a     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            r2.<init>()     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            java.lang.String r3 = "network-parse-complete response="
            r2.append(r3)     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            T r3 = r0.a     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            r2.append(r3)     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            com.mbridge.msdk.foundation.same.net.c r1 = r4.d     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            r1.a(r5, r0)     // Catch: java.lang.Exception -> L7f com.mbridge.msdk.foundation.same.net.a.a -> La7
            goto Lad
        L7f:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.foundation.same.net.h.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Unhandled exception "
            r2.append(r3)
            java.lang.String r0 = r0.getMessage()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            com.mbridge.msdk.foundation.same.net.c r0 = r4.d
            com.mbridge.msdk.foundation.same.net.a.a r1 = new com.mbridge.msdk.foundation.same.net.a.a
            r2 = 4
            r3 = 0
            r1.<init>(r2, r3)
            r0.a(r5, r1)
            goto Lad
        La7:
            r0 = move-exception
            com.mbridge.msdk.foundation.same.net.c r1 = r4.d
            r1.a(r5, r0)
        Lad:
            return
    }
}
