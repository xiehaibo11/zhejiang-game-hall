package com.mbridge.msdk.foundation.same.net.e;

public final class c {
    public final int a;
    public final byte[] b;
    public final java.util.Map<java.lang.String, java.lang.String> c;
    public final java.util.List<com.mbridge.msdk.foundation.same.net.c.b> d;

    public c(int r2, byte[] r3, java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r4) {
            r1 = this;
            java.util.Map r0 = a(r4)
            r1.<init>(r2, r3, r0, r4)
            return
    }

    private c(int r1, byte[] r2, java.util.Map<java.lang.String, java.lang.String> r3, java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r4) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            if (r4 != 0) goto Lf
            r1 = 0
            r0.d = r1
            goto L15
        Lf:
            java.util.List r1 = java.util.Collections.unmodifiableList(r4)
            r0.d = r1
        L15:
            return
    }

    private static java.util.Map<java.lang.String, java.lang.String> a(java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r3) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            boolean r0 = r3.isEmpty()
            if (r0 == 0) goto Lf
            java.util.Map r3 = java.util.Collections.emptyMap()
            return r3
        Lf:
            java.util.TreeMap r0 = new java.util.TreeMap
            java.util.Comparator r1 = java.lang.String.CASE_INSENSITIVE_ORDER
            r0.<init>(r1)
            java.util.Iterator r3 = r3.iterator()
        L1a:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L32
            java.lang.Object r1 = r3.next()
            com.mbridge.msdk.foundation.same.net.c.b r1 = (com.mbridge.msdk.foundation.same.net.c.b) r1
            java.lang.String r2 = r1.a()
            java.lang.String r1 = r1.b()
            r0.put(r2, r1)
            goto L1a
        L32:
            return r0
    }
}
