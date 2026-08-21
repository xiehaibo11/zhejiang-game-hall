package com.mbridge.msdk.foundation.same.net;

public final class n {
    private static com.mbridge.msdk.foundation.same.net.n c;
    private com.mbridge.msdk.foundation.same.net.j a;
    private com.mbridge.msdk.foundation.same.net.d.b b;

    private n() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.foundation.same.net.d.b a() {
            com.mbridge.msdk.foundation.same.net.n r0 = com.mbridge.msdk.foundation.same.net.n.c
            r1 = 3
            if (r0 == 0) goto L1a
            com.mbridge.msdk.foundation.same.net.d.b r2 = r0.b
            if (r2 == 0) goto La
            return r2
        La:
            com.mbridge.msdk.foundation.same.net.d.b r2 = new com.mbridge.msdk.foundation.same.net.d.b
            com.mbridge.msdk.foundation.same.net.j r3 = b()
            r2.<init>(r3, r1)
            r0.b = r2
            com.mbridge.msdk.foundation.same.net.n r0 = com.mbridge.msdk.foundation.same.net.n.c
            com.mbridge.msdk.foundation.same.net.d.b r0 = r0.b
            return r0
        L1a:
            com.mbridge.msdk.foundation.same.net.n r0 = new com.mbridge.msdk.foundation.same.net.n
            r0.<init>()
            com.mbridge.msdk.foundation.same.net.n.c = r0
            com.mbridge.msdk.foundation.same.net.d.b r2 = r0.b
            if (r2 != 0) goto L30
            com.mbridge.msdk.foundation.same.net.d.b r2 = new com.mbridge.msdk.foundation.same.net.d.b
            com.mbridge.msdk.foundation.same.net.j r3 = b()
            r2.<init>(r3, r1)
            r0.b = r2
        L30:
            com.mbridge.msdk.foundation.same.net.n r0 = com.mbridge.msdk.foundation.same.net.n.c
            com.mbridge.msdk.foundation.same.net.d.b r0 = r0.b
            return r0
    }

    public static void a(android.content.Context r3) {
            com.mbridge.msdk.foundation.same.net.n r0 = com.mbridge.msdk.foundation.same.net.n.c
            if (r0 != 0) goto L24
            com.mbridge.msdk.foundation.same.net.n r0 = new com.mbridge.msdk.foundation.same.net.n
            r0.<init>()
            com.mbridge.msdk.foundation.same.net.n.c = r0
            com.mbridge.msdk.foundation.same.net.j r1 = new com.mbridge.msdk.foundation.same.net.j
            android.content.Context r3 = r3.getApplicationContext()
            r1.<init>(r3)
            r0.a = r1
            com.mbridge.msdk.foundation.same.net.n r3 = com.mbridge.msdk.foundation.same.net.n.c
            com.mbridge.msdk.foundation.same.net.d.b r0 = new com.mbridge.msdk.foundation.same.net.d.b
            com.mbridge.msdk.foundation.same.net.j r1 = b()
            r2 = 3
            r0.<init>(r1, r2)
            r3.b = r0
        L24:
            return
    }

    public static void a(com.mbridge.msdk.foundation.same.net.i r1) {
            com.mbridge.msdk.foundation.same.net.j r0 = b()
            r0.a(r1)
            return
    }

    private static com.mbridge.msdk.foundation.same.net.j b() {
            com.mbridge.msdk.foundation.same.net.n r0 = com.mbridge.msdk.foundation.same.net.n.c
            if (r0 == 0) goto L1d
            com.mbridge.msdk.foundation.same.net.j r1 = r0.a
            if (r1 == 0) goto L9
            return r1
        L9:
            com.mbridge.msdk.foundation.same.net.j r1 = new com.mbridge.msdk.foundation.same.net.j
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r2.j()
            r1.<init>(r2)
            r0.a = r1
            com.mbridge.msdk.foundation.same.net.n r0 = com.mbridge.msdk.foundation.same.net.n.c
            com.mbridge.msdk.foundation.same.net.j r0 = r0.a
            return r0
        L1d:
            com.mbridge.msdk.foundation.same.net.n r0 = new com.mbridge.msdk.foundation.same.net.n
            r0.<init>()
            com.mbridge.msdk.foundation.same.net.n.c = r0
            com.mbridge.msdk.foundation.same.net.j r1 = r0.a
            if (r1 != 0) goto L37
            com.mbridge.msdk.foundation.same.net.j r1 = new com.mbridge.msdk.foundation.same.net.j
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r2.j()
            r1.<init>(r2)
            r0.a = r1
        L37:
            com.mbridge.msdk.foundation.same.net.n r0 = com.mbridge.msdk.foundation.same.net.n.c
            com.mbridge.msdk.foundation.same.net.j r0 = r0.a
            return r0
    }
}
