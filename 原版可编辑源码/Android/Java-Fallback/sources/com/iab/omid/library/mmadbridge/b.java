package com.iab.omid.library.mmadbridge;

public class b {
    private boolean a;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    private void b(android.content.Context r2) {
            r1 = this;
            java.lang.String r0 = "Application Context cannot be null"
            com.iab.omid.library.mmadbridge.utils.g.a(r2, r0)
            return
    }

    java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "1.4.2-Mmadbridge"
            return r0
    }

    void a(android.content.Context r2) {
            r1 = this;
            r1.b(r2)
            boolean r0 = r1.b()
            if (r0 != 0) goto L32
            r0 = 1
            r1.a(r0)
            com.iab.omid.library.mmadbridge.internal.h r0 = com.iab.omid.library.mmadbridge.internal.h.c()
            r0.a(r2)
            com.iab.omid.library.mmadbridge.internal.b r0 = com.iab.omid.library.mmadbridge.internal.b.g()
            r0.a(r2)
            com.iab.omid.library.mmadbridge.utils.a.a(r2)
            com.iab.omid.library.mmadbridge.utils.c.a(r2)
            com.iab.omid.library.mmadbridge.utils.e.a(r2)
            com.iab.omid.library.mmadbridge.internal.f r0 = com.iab.omid.library.mmadbridge.internal.f.b()
            r0.a(r2)
            com.iab.omid.library.mmadbridge.internal.a r0 = com.iab.omid.library.mmadbridge.internal.a.a()
            r0.a(r2)
        L32:
            return
    }

    void a(boolean r1) {
            r0 = this;
            r0.a = r1
            return
    }

    boolean b() {
            r1 = this;
            boolean r0 = r1.a
            return r0
    }

    void c() {
            r1 = this;
            com.iab.omid.library.mmadbridge.utils.g.a()
            com.iab.omid.library.mmadbridge.internal.a r0 = com.iab.omid.library.mmadbridge.internal.a.a()
            r0.d()
            return
    }
}
