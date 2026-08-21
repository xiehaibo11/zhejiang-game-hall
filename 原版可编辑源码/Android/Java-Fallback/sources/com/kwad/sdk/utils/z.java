package com.kwad.sdk.utils;

public final class z {
    public static <T> java.util.List<java.util.List<T>> d(java.util.List<T> r3, int r4) {
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            if (r3 != 0) goto L8
            return r4
        L8:
            r0 = 0
        L9:
            int r1 = r3.size()
            if (r0 >= r1) goto L26
            int r1 = r0 + 200
            int r2 = r3.size()
            if (r1 <= r2) goto L1c
            int r2 = r3.size()
            goto L1d
        L1c:
            r2 = r1
        L1d:
            java.util.List r0 = r3.subList(r0, r2)
            r4.add(r0)
            r0 = r1
            goto L9
        L26:
            return r4
    }
}
