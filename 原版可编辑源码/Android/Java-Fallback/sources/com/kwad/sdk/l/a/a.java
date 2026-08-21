package com.kwad.sdk.l.a;

public final class a {
    private final java.util.List<com.kwad.sdk.l.a.b> aGy;

    public a() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.aGy = r0
            return
    }

    public final void addBackPressable(com.kwad.sdk.l.a.b r2) {
            r1 = this;
            if (r2 == 0) goto L7
            java.util.List<com.kwad.sdk.l.a.b> r0 = r1.aGy
            r0.add(r2)
        L7:
            return
    }

    public final void addBackPressable(com.kwad.sdk.l.a.b r2, int r3) {
            r1 = this;
            if (r2 == 0) goto L7
            java.util.List<com.kwad.sdk.l.a.b> r0 = r1.aGy
            r0.add(r3, r2)
        L7:
            return
    }

    public final boolean bP() {
            r2 = this;
            java.util.List<com.kwad.sdk.l.a.b> r0 = r2.aGy
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1a
            java.lang.Object r1 = r0.next()
            com.kwad.sdk.l.a.b r1 = (com.kwad.sdk.l.a.b) r1
            boolean r1 = r1.bP()
            if (r1 == 0) goto L6
            r0 = 1
            return r0
        L1a:
            r0 = 0
            return r0
    }

    public final void removeBackPressable(com.kwad.sdk.l.a.b r2) {
            r1 = this;
            if (r2 == 0) goto L7
            java.util.List<com.kwad.sdk.l.a.b> r0 = r1.aGy
            r0.remove(r2)
        L7:
            return
    }
}
