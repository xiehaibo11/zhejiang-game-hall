package com.iab.omid.library.mmadbridge.internal;

public class b extends com.iab.omid.library.mmadbridge.internal.d {
    private static com.iab.omid.library.mmadbridge.internal.b d;

    static {
            com.iab.omid.library.mmadbridge.internal.b r0 = new com.iab.omid.library.mmadbridge.internal.b
            r0.<init>()
            com.iab.omid.library.mmadbridge.internal.b.d = r0
            return
    }

    private b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.iab.omid.library.mmadbridge.internal.b g() {
            com.iab.omid.library.mmadbridge.internal.b r0 = com.iab.omid.library.mmadbridge.internal.b.d
            return r0
    }

    @Override
    public void b(boolean r3) {
            r2 = this;
            com.iab.omid.library.mmadbridge.internal.c r0 = com.iab.omid.library.mmadbridge.internal.c.c()
            java.util.Collection r0 = r0.b()
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()
            com.iab.omid.library.mmadbridge.adsession.a r1 = (com.iab.omid.library.mmadbridge.adsession.a) r1
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r1 = r1.getAdSessionStatePublisher()
            r1.a(r3)
            goto Lc
        L20:
            return
    }

    @Override
    public boolean d() {
            r2 = this;
            com.iab.omid.library.mmadbridge.internal.c r0 = com.iab.omid.library.mmadbridge.internal.c.c()
            java.util.Collection r0 = r0.a()
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L26
            java.lang.Object r1 = r0.next()
            com.iab.omid.library.mmadbridge.adsession.a r1 = (com.iab.omid.library.mmadbridge.adsession.a) r1
            android.view.View r1 = r1.c()
            if (r1 == 0) goto Lc
            boolean r1 = r1.hasWindowFocus()
            if (r1 == 0) goto Lc
            r0 = 1
            return r0
        L26:
            r0 = 0
            return r0
    }
}
