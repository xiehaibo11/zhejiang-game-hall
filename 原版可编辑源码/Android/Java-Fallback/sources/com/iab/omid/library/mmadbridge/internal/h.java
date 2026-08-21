package com.iab.omid.library.mmadbridge.internal;

public class h implements com.iab.omid.library.mmadbridge.internal.d.a, com.iab.omid.library.mmadbridge.devicevolume.c {
    private static com.iab.omid.library.mmadbridge.internal.h f;
    private float a;
    private final com.iab.omid.library.mmadbridge.devicevolume.e b;
    private final com.iab.omid.library.mmadbridge.devicevolume.b c;
    private com.iab.omid.library.mmadbridge.devicevolume.d d;
    private com.iab.omid.library.mmadbridge.internal.c e;

    public h(com.iab.omid.library.mmadbridge.devicevolume.e r2, com.iab.omid.library.mmadbridge.devicevolume.b r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.b = r2
            r1.c = r3
            return
    }

    private com.iab.omid.library.mmadbridge.internal.c a() {
            r1 = this;
            com.iab.omid.library.mmadbridge.internal.c r0 = r1.e
            if (r0 != 0) goto La
            com.iab.omid.library.mmadbridge.internal.c r0 = com.iab.omid.library.mmadbridge.internal.c.c()
            r1.e = r0
        La:
            com.iab.omid.library.mmadbridge.internal.c r0 = r1.e
            return r0
    }

    public static com.iab.omid.library.mmadbridge.internal.h c() {
            com.iab.omid.library.mmadbridge.internal.h r0 = com.iab.omid.library.mmadbridge.internal.h.f
            if (r0 != 0) goto L15
            com.iab.omid.library.mmadbridge.devicevolume.b r0 = new com.iab.omid.library.mmadbridge.devicevolume.b
            r0.<init>()
            com.iab.omid.library.mmadbridge.devicevolume.e r1 = new com.iab.omid.library.mmadbridge.devicevolume.e
            r1.<init>()
            com.iab.omid.library.mmadbridge.internal.h r2 = new com.iab.omid.library.mmadbridge.internal.h
            r2.<init>(r1, r0)
            com.iab.omid.library.mmadbridge.internal.h.f = r2
        L15:
            com.iab.omid.library.mmadbridge.internal.h r0 = com.iab.omid.library.mmadbridge.internal.h.f
            return r0
    }

    @Override
    public void a(float r3) {
            r2 = this;
            r2.a = r3
            com.iab.omid.library.mmadbridge.internal.c r0 = r2.a()
            java.util.Collection r0 = r0.a()
            java.util.Iterator r0 = r0.iterator()
        Le:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L22
            java.lang.Object r1 = r0.next()
            com.iab.omid.library.mmadbridge.adsession.a r1 = (com.iab.omid.library.mmadbridge.adsession.a) r1
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r1 = r1.getAdSessionStatePublisher()
            r1.a(r3)
            goto Le
        L22:
            return
    }

    public void a(android.content.Context r4) {
            r3 = this;
            com.iab.omid.library.mmadbridge.devicevolume.b r0 = r3.c
            com.iab.omid.library.mmadbridge.devicevolume.a r0 = r0.a()
            com.iab.omid.library.mmadbridge.devicevolume.e r1 = r3.b
            android.os.Handler r2 = new android.os.Handler
            r2.<init>()
            com.iab.omid.library.mmadbridge.devicevolume.d r4 = r1.a(r2, r4, r0, r3)
            r3.d = r4
            return
    }

    @Override
    public void a(boolean r1) {
            r0 = this;
            if (r1 == 0) goto La
            com.iab.omid.library.mmadbridge.walking.TreeWalker r1 = com.iab.omid.library.mmadbridge.walking.TreeWalker.getInstance()
            r1.h()
            goto L11
        La:
            com.iab.omid.library.mmadbridge.walking.TreeWalker r1 = com.iab.omid.library.mmadbridge.walking.TreeWalker.getInstance()
            r1.g()
        L11:
            return
    }

    public float b() {
            r1 = this;
            float r0 = r1.a
            return r0
    }

    public void d() {
            r1 = this;
            com.iab.omid.library.mmadbridge.internal.b r0 = com.iab.omid.library.mmadbridge.internal.b.g()
            r0.a(r1)
            com.iab.omid.library.mmadbridge.internal.b r0 = com.iab.omid.library.mmadbridge.internal.b.g()
            r0.e()
            com.iab.omid.library.mmadbridge.walking.TreeWalker r0 = com.iab.omid.library.mmadbridge.walking.TreeWalker.getInstance()
            r0.h()
            com.iab.omid.library.mmadbridge.devicevolume.d r0 = r1.d
            r0.c()
            return
    }

    public void e() {
            r1 = this;
            com.iab.omid.library.mmadbridge.walking.TreeWalker r0 = com.iab.omid.library.mmadbridge.walking.TreeWalker.getInstance()
            r0.j()
            com.iab.omid.library.mmadbridge.internal.b r0 = com.iab.omid.library.mmadbridge.internal.b.g()
            r0.f()
            com.iab.omid.library.mmadbridge.devicevolume.d r0 = r1.d
            r0.d()
            return
    }
}
