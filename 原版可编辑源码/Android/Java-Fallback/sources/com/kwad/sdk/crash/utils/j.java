package com.kwad.sdk.crash.utils;

public final class j {
    public static java.lang.String am(long r6) {
            r0 = 60000(0xea60, double:2.9644E-319)
            long r2 = r6 / r0
            long r0 = r0 * r2
            long r6 = r6 - r0
            r0 = 1000(0x3e8, double:4.94E-321)
            long r6 = r6 / r0
            r0 = 10
            int r4 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            java.lang.String r5 = "0"
            if (r4 >= 0) goto L1f
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>(r5)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            goto L23
        L1f:
            java.lang.String r2 = java.lang.String.valueOf(r2)
        L23:
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 >= 0) goto L34
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r5)
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            goto L38
        L34:
            java.lang.String r6 = java.lang.String.valueOf(r6)
        L38:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r2)
            java.lang.String r0 = ":"
            r7.append(r0)
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            return r6
    }
}
