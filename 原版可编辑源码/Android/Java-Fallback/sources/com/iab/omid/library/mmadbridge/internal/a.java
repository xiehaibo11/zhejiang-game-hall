package com.iab.omid.library.mmadbridge.internal;

public class a implements com.iab.omid.library.mmadbridge.internal.d.a {
    private static com.iab.omid.library.mmadbridge.internal.a f;
    protected com.iab.omid.library.mmadbridge.utils.f a;
    private java.util.Date b;
    private boolean c;
    private com.iab.omid.library.mmadbridge.internal.d d;
    private boolean e;

    static {
            com.iab.omid.library.mmadbridge.internal.a r0 = new com.iab.omid.library.mmadbridge.internal.a
            com.iab.omid.library.mmadbridge.internal.d r1 = new com.iab.omid.library.mmadbridge.internal.d
            r1.<init>()
            r0.<init>(r1)
            com.iab.omid.library.mmadbridge.internal.a.f = r0
            return
    }

    private a(com.iab.omid.library.mmadbridge.internal.d r2) {
            r1 = this;
            r1.<init>()
            com.iab.omid.library.mmadbridge.utils.f r0 = new com.iab.omid.library.mmadbridge.utils.f
            r0.<init>()
            r1.a = r0
            r1.d = r2
            return
    }

    public static com.iab.omid.library.mmadbridge.internal.a a() {
            com.iab.omid.library.mmadbridge.internal.a r0 = com.iab.omid.library.mmadbridge.internal.a.f
            return r0
    }

    private void c() {
            r3 = this;
            boolean r0 = r3.c
            if (r0 == 0) goto L2d
            java.util.Date r0 = r3.b
            if (r0 != 0) goto L9
            goto L2d
        L9:
            com.iab.omid.library.mmadbridge.internal.c r0 = com.iab.omid.library.mmadbridge.internal.c.c()
            java.util.Collection r0 = r0.a()
            java.util.Iterator r0 = r0.iterator()
        L15:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2d
            java.lang.Object r1 = r0.next()
            com.iab.omid.library.mmadbridge.adsession.a r1 = (com.iab.omid.library.mmadbridge.adsession.a) r1
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r1 = r1.getAdSessionStatePublisher()
            java.util.Date r2 = r3.b()
            r1.a(r2)
            goto L15
        L2d:
            return
    }

    public void a(android.content.Context r2) {
            r1 = this;
            boolean r0 = r1.c
            if (r0 != 0) goto L1e
            com.iab.omid.library.mmadbridge.internal.d r0 = r1.d
            r0.a(r2)
            com.iab.omid.library.mmadbridge.internal.d r2 = r1.d
            r2.a(r1)
            com.iab.omid.library.mmadbridge.internal.d r2 = r1.d
            r2.e()
            com.iab.omid.library.mmadbridge.internal.d r2 = r1.d
            boolean r2 = r2.c()
            r1.e = r2
            r2 = 1
            r1.c = r2
        L1e:
            return
    }

    @Override
    public void a(boolean r2) {
            r1 = this;
            boolean r0 = r1.e
            if (r0 != 0) goto L9
            if (r2 == 0) goto L9
            r1.d()
        L9:
            r1.e = r2
            return
    }

    public java.util.Date b() {
            r1 = this;
            java.util.Date r0 = r1.b
            if (r0 == 0) goto Lb
            java.lang.Object r0 = r0.clone()
            java.util.Date r0 = (java.util.Date) r0
            goto Lc
        Lb:
            r0 = 0
        Lc:
            return r0
    }

    public void d() {
            r2 = this;
            com.iab.omid.library.mmadbridge.utils.f r0 = r2.a
            java.util.Date r0 = r0.a()
            java.util.Date r1 = r2.b
            if (r1 == 0) goto L10
            boolean r1 = r0.after(r1)
            if (r1 == 0) goto L15
        L10:
            r2.b = r0
            r2.c()
        L15:
            return
    }
}
