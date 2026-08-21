package com.tkay.expressad.exoplayer.h;

public abstract class c implements com.tkay.expressad.exoplayer.h.s {
    private final java.util.ArrayList<com.tkay.expressad.exoplayer.h.s.b> a;
    private final com.tkay.expressad.exoplayer.h.t.a b;
    private com.tkay.expressad.exoplayer.h c;
    private com.tkay.expressad.exoplayer.ae d;
    private java.lang.Object e;

    public c() {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 1
            r0.<init>(r1)
            r2.a = r0
            com.tkay.expressad.exoplayer.h.t$a r0 = new com.tkay.expressad.exoplayer.h.t$a
            r0.<init>()
            r2.b = r0
            return
    }

    private com.tkay.expressad.exoplayer.h.t.a a(com.tkay.expressad.exoplayer.h.s.a r3, long r4) {
            r2 = this;
            r0 = 0
            if (r3 == 0) goto L5
            r1 = 1
            goto L6
        L5:
            r1 = r0
        L6:
            com.tkay.expressad.exoplayer.k.a.a(r1)
            com.tkay.expressad.exoplayer.h.t$a r1 = r2.b
            com.tkay.expressad.exoplayer.h.t$a r3 = r1.a(r0, r3, r4)
            return r3
    }

    protected final com.tkay.expressad.exoplayer.h.t.a a(int r4, com.tkay.expressad.exoplayer.h.s.a r5) {
            r3 = this;
            com.tkay.expressad.exoplayer.h.t$a r0 = r3.b
            r1 = 0
            com.tkay.expressad.exoplayer.h.t$a r4 = r0.a(r4, r5, r1)
            return r4
    }

    protected final com.tkay.expressad.exoplayer.h.t.a a(com.tkay.expressad.exoplayer.h.s.a r5) {
            r4 = this;
            com.tkay.expressad.exoplayer.h.t$a r0 = r4.b
            r1 = 0
            r2 = 0
            com.tkay.expressad.exoplayer.h.t$a r5 = r0.a(r1, r5, r2)
            return r5
    }

    protected abstract void a();

    @Override
    public final void a(android.os.Handler r2, com.tkay.expressad.exoplayer.h.t r3) {
            r1 = this;
            com.tkay.expressad.exoplayer.h.t$a r0 = r1.b
            r0.a(r2, r3)
            return
    }

    protected final void a(com.tkay.expressad.exoplayer.ae r3, java.lang.Object r4) {
            r2 = this;
            r2.d = r3
            r2.e = r4
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.s$b> r0 = r2.a
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1a
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.exoplayer.h.s$b r1 = (com.tkay.expressad.exoplayer.h.s.b) r1
            r1.a(r2, r3, r4)
            goto La
        L1a:
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.s.b r2) {
            r1 = this;
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.s$b> r0 = r1.a
            r0.remove(r2)
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.s$b> r2 = r1.a
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L17
            r2 = 0
            r1.c = r2
            r1.d = r2
            r1.e = r2
            r1.a()
        L17:
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.t r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h.t$a r0 = r1.b
            r0.a(r2)
            return
    }

    protected abstract void a(com.tkay.expressad.exoplayer.h r1, boolean r2);

    @Override
    public final void a(com.tkay.expressad.exoplayer.h r2, boolean r3, com.tkay.expressad.exoplayer.h.s.b r4) {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.c
            if (r0 == 0) goto L9
            if (r0 != r2) goto L7
            goto L9
        L7:
            r0 = 0
            goto La
        L9:
            r0 = 1
        La:
            com.tkay.expressad.exoplayer.k.a.a(r0)
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.s$b> r0 = r1.a
            r0.add(r4)
            com.tkay.expressad.exoplayer.h r0 = r1.c
            if (r0 != 0) goto L1c
            r1.c = r2
            r1.a(r2, r3)
            return
        L1c:
            com.tkay.expressad.exoplayer.ae r2 = r1.d
            if (r2 == 0) goto L25
            java.lang.Object r3 = r1.e
            r4.a(r1, r2, r3)
        L25:
            return
    }
}
