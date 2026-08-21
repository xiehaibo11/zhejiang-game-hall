package com.sigmob.sdk.nativead;

public class e implements com.sigmob.sdk.base.common.ab {
    private final java.util.HashSet<com.sigmob.sdk.nativead.d> a;
    private int b;
    private com.sigmob.sdk.base.models.BaseAdUnit c;
    private boolean d;
    private int e;
    private int f;

    public e() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.b = r0
            r1 = 0
            r2.c = r1
            r2.f = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r2.a = r0
            com.sigmob.sdk.nativead.d r1 = new com.sigmob.sdk.nativead.d
            r1.<init>()
            r0.add(r1)
            return
    }

    @Override
    public void a() {
            r3 = this;
            java.util.HashSet<com.sigmob.sdk.nativead.d> r0 = r3.a
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()
            com.sigmob.sdk.nativead.d r1 = (com.sigmob.sdk.nativead.d) r1
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r3.c
            r1.b(r2)
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r3.c
            r2 = 0
            r1.setSessionManager(r2)
            r3.c = r2
            goto L6
        L20:
            return
    }

    @Override
    public void a(com.sigmob.sdk.base.common.a r4, int r5) {
            r3 = this;
            java.util.HashSet<com.sigmob.sdk.nativead.d> r0 = r3.a
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L18
            java.lang.Object r1 = r0.next()
            com.sigmob.sdk.nativead.d r1 = (com.sigmob.sdk.nativead.d) r1
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r3.c
            r1.a(r2, r4, r5)
            goto L6
        L18:
            return
    }

    @Override
    public void a(com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r2 = this;
            java.util.HashSet<com.sigmob.sdk.nativead.d> r0 = r2.a
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1b
            java.lang.Object r1 = r0.next()
            com.sigmob.sdk.nativead.d r1 = (com.sigmob.sdk.nativead.d) r1
            r1.a(r3)
            r2.c = r3
            r3.setSessionManager(r2)
            goto L6
        L1b:
            return
    }
}
