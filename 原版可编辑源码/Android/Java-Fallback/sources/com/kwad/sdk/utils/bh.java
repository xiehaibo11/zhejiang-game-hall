package com.kwad.sdk.utils;

public final class bh {
    public static java.lang.String V(long r10) {
            r0 = 0
            int r2 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r2 <= 0) goto L70
            r2 = 86400000(0x5265c00, double:4.2687272E-316)
            int r2 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            if (r2 < 0) goto Le
            goto L70
        Le:
            r2 = 1000(0x3e8, double:4.94E-321)
            long r10 = r10 / r2
            r2 = 60
            long r4 = r10 % r2
            long r6 = r10 / r2
            long r6 = r6 % r2
            r2 = 3600(0xe10, double:1.7786E-320)
            long r10 = r10 / r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L69
            r2.<init>()     // Catch: java.lang.Exception -> L69
            java.util.Formatter r3 = new java.util.Formatter     // Catch: java.lang.Exception -> L69
            java.util.Locale r8 = java.util.Locale.getDefault()     // Catch: java.lang.Exception -> L69
            r3.<init>(r2, r8)     // Catch: java.lang.Exception -> L69
            int r0 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            r1 = 1
            r2 = 0
            r8 = 2
            if (r0 <= 0) goto L50
            java.lang.String r0 = "%d:%02d:%02d"
            r9 = 3
            java.lang.Object[] r9 = new java.lang.Object[r9]     // Catch: java.lang.Exception -> L69
            java.lang.Long r10 = java.lang.Long.valueOf(r10)     // Catch: java.lang.Exception -> L69
            r9[r2] = r10     // Catch: java.lang.Exception -> L69
            java.lang.Long r10 = java.lang.Long.valueOf(r6)     // Catch: java.lang.Exception -> L69
            r9[r1] = r10     // Catch: java.lang.Exception -> L69
            java.lang.Long r10 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Exception -> L69
            r9[r8] = r10     // Catch: java.lang.Exception -> L69
            java.util.Formatter r10 = r3.format(r0, r9)     // Catch: java.lang.Exception -> L69
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Exception -> L69
            return r10
        L50:
            java.lang.String r10 = "%02d:%02d"
            java.lang.Object[] r11 = new java.lang.Object[r8]     // Catch: java.lang.Exception -> L69
            java.lang.Long r0 = java.lang.Long.valueOf(r6)     // Catch: java.lang.Exception -> L69
            r11[r2] = r0     // Catch: java.lang.Exception -> L69
            java.lang.Long r0 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Exception -> L69
            r11[r1] = r0     // Catch: java.lang.Exception -> L69
            java.util.Formatter r10 = r3.format(r10, r11)     // Catch: java.lang.Exception -> L69
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Exception -> L69
            return r10
        L69:
            r10 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r10)
            java.lang.String r10 = ""
            return r10
        L70:
            java.lang.String r10 = "00:00"
            return r10
    }
}
