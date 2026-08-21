package com.iab.omid.library.mmadbridge.internal;

public class c {
    private static com.iab.omid.library.mmadbridge.internal.c c;
    private final java.util.ArrayList<com.iab.omid.library.mmadbridge.adsession.a> a;
    private final java.util.ArrayList<com.iab.omid.library.mmadbridge.adsession.a> b;

    static {
            com.iab.omid.library.mmadbridge.internal.c r0 = new com.iab.omid.library.mmadbridge.internal.c
            r0.<init>()
            com.iab.omid.library.mmadbridge.internal.c.c = r0
            return
    }

    private c() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.b = r0
            return
    }

    public static com.iab.omid.library.mmadbridge.internal.c c() {
            com.iab.omid.library.mmadbridge.internal.c r0 = com.iab.omid.library.mmadbridge.internal.c.c
            return r0
    }

    public java.util.Collection<com.iab.omid.library.mmadbridge.adsession.a> a() {
            r1 = this;
            java.util.ArrayList<com.iab.omid.library.mmadbridge.adsession.a> r0 = r1.b
            java.util.Collection r0 = java.util.Collections.unmodifiableCollection(r0)
            return r0
    }

    public void a(com.iab.omid.library.mmadbridge.adsession.a r2) {
            r1 = this;
            java.util.ArrayList<com.iab.omid.library.mmadbridge.adsession.a> r0 = r1.a
            r0.add(r2)
            return
    }

    public java.util.Collection<com.iab.omid.library.mmadbridge.adsession.a> b() {
            r1 = this;
            java.util.ArrayList<com.iab.omid.library.mmadbridge.adsession.a> r0 = r1.a
            java.util.Collection r0 = java.util.Collections.unmodifiableCollection(r0)
            return r0
    }

    public void b(com.iab.omid.library.mmadbridge.adsession.a r3) {
            r2 = this;
            boolean r0 = r2.d()
            java.util.ArrayList<com.iab.omid.library.mmadbridge.adsession.a> r1 = r2.a
            r1.remove(r3)
            java.util.ArrayList<com.iab.omid.library.mmadbridge.adsession.a> r1 = r2.b
            r1.remove(r3)
            if (r0 == 0) goto L1d
            boolean r3 = r2.d()
            if (r3 != 0) goto L1d
            com.iab.omid.library.mmadbridge.internal.h r3 = com.iab.omid.library.mmadbridge.internal.h.c()
            r3.e()
        L1d:
            return
    }

    public void c(com.iab.omid.library.mmadbridge.adsession.a r3) {
            r2 = this;
            boolean r0 = r2.d()
            java.util.ArrayList<com.iab.omid.library.mmadbridge.adsession.a> r1 = r2.b
            r1.add(r3)
            if (r0 != 0) goto L12
            com.iab.omid.library.mmadbridge.internal.h r3 = com.iab.omid.library.mmadbridge.internal.h.c()
            r3.d()
        L12:
            return
    }

    public boolean d() {
            r1 = this;
            java.util.ArrayList<com.iab.omid.library.mmadbridge.adsession.a> r0 = r1.b
            int r0 = r0.size()
            if (r0 <= 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }
}
