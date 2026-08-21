package com.kwad.sdk.k.a;

public abstract class a implements com.kwad.sdk.k.a.c {
    protected java.util.List<com.kwad.sdk.k.a.c> aGk;
    protected boolean enabled;

    public a() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.enabled = r0
            return
    }

    public a(boolean r1) {
            r0 = this;
            r0.<init>()
            r0.enabled = r1
            return
    }

    private java.util.List<com.kwad.sdk.k.a.c> getChildren() {
            r1 = this;
            java.util.List<com.kwad.sdk.k.a.c> r0 = r1.aGk
            return r0
    }

    @Override
    public final boolean bA(android.content.Context r4) {
            r3 = this;
            boolean r0 = r3.enabled
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.util.List r0 = r3.getChildren()
            if (r0 == 0) goto L2b
            int r2 = r0.size()
            if (r2 <= 0) goto L2b
            java.util.Iterator r0 = r0.iterator()
        L16:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L2a
            java.lang.Object r2 = r0.next()
            com.kwad.sdk.k.a.c r2 = (com.kwad.sdk.k.a.c) r2
            boolean r2 = r2.bA(r4)
            if (r2 == 0) goto L16
            r4 = 1
            return r4
        L2a:
            return r1
        L2b:
            boolean r4 = r3.bB(r4)     // Catch: java.lang.Throwable -> L30
            return r4
        L30:
            return r1
    }

    protected boolean bB(android.content.Context r1) {
            r0 = this;
            r1 = 0
            return r1
    }
}
