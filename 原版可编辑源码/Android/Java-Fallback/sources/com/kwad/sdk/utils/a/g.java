package com.kwad.sdk.utils.a;

final class g implements com.kwad.sdk.utils.a.c.b<java.util.Set<java.lang.String>> {
    static final com.kwad.sdk.utils.a.g aLz = null;

    static {
            com.kwad.sdk.utils.a.g r0 = new com.kwad.sdk.utils.a.g
            r0.<init>()
            com.kwad.sdk.utils.a.g.aLz = r0
            return
    }

    private g() {
            r0 = this;
            r0.<init>()
            return
    }

    private static byte[] e(java.util.Set<java.lang.String> r8) {
            boolean r0 = r8.isEmpty()
            r1 = 0
            if (r0 == 0) goto La
            byte[] r8 = new byte[r1]
            return r8
        La:
            int r0 = r8.size()
            int[] r2 = new int[r0]
            java.lang.String[] r3 = new java.lang.String[r0]
            java.util.Iterator r8 = r8.iterator()
            r4 = r1
            r5 = r4
        L18:
            boolean r6 = r8.hasNext()
            if (r6 == 0) goto L3d
            java.lang.Object r6 = r8.next()
            java.lang.String r6 = (java.lang.String) r6
            if (r6 != 0) goto L2c
            int r4 = r4 + 5
            r6 = -1
            r2[r5] = r6
            goto L3a
        L2c:
            int r7 = com.kwad.sdk.utils.a.b.fS(r6)
            r3[r5] = r6
            r2[r5] = r7
            int r6 = com.kwad.sdk.utils.a.b.dh(r7)
            int r6 = r6 + r7
            int r4 = r4 + r6
        L3a:
            int r5 = r5 + 1
            goto L18
        L3d:
            com.kwad.sdk.utils.a.b r8 = new com.kwad.sdk.utils.a.b
            r8.<init>(r4)
        L42:
            if (r1 >= r0) goto L53
            r4 = r2[r1]
            r8.dg(r4)
            if (r4 < 0) goto L50
            r4 = r3[r1]
            r8.fR(r4)
        L50:
            int r1 = r1 + 1
            goto L42
        L53:
            byte[] r8 = r8.aKG
            return r8
    }

    private static java.util.Set<java.lang.String> h(byte[] r2, int r3, int r4) {
            java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
            r0.<init>()
            if (r4 <= 0) goto L2a
            com.kwad.sdk.utils.a.b r1 = new com.kwad.sdk.utils.a.b
            r1.<init>(r2, r3)
            int r3 = r3 + r4
        Ld:
            int r2 = r1.position
            if (r2 >= r3) goto L1d
            int r2 = r1.Kg()
            java.lang.String r2 = r1.getString(r2)
            r0.add(r2)
            goto Ld
        L1d:
            int r2 = r1.position
            if (r2 != r3) goto L22
            goto L2a
        L22:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "Invalid String set"
            r2.<init>(r3)
            throw r2
        L2a:
            return r0
    }

    @Override
    public final java.lang.String KA() {
            r1 = this;
            java.lang.String r0 = "StringSet"
            return r0
    }

    @Override
    public final java.util.Set<java.lang.String> g(byte[] r1, int r2, int r3) {
            r0 = this;
            java.util.Set r1 = h(r1, r2, r3)
            return r1
    }

    @Override
    public final byte[] o(java.util.Set<java.lang.String> r1) {
            r0 = this;
            java.util.Set r1 = (java.util.Set) r1
            byte[] r1 = e(r1)
            return r1
    }
}
