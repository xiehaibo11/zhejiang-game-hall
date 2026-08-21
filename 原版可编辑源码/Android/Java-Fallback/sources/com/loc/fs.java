package com.loc;

public final class fs {
    private static long a(long r2) {
            long r0 = b(r2)
            long r2 = r2 - r0
            return r2
    }

    private static long a(long r6, long r8) {
            long r6 = a(r6)
            long r0 = b(r8)
            long r0 = r0 + r6
            long r6 = r0 - r8
            long r6 = java.lang.Math.abs(r6)
            java.util.Calendar r8 = java.util.Calendar.getInstance()
            java.util.Date r9 = new java.util.Date
            r9.<init>(r0)
            r8.setTime(r9)
            r9 = 11
            int r8 = r8.get(r9)
            r2 = 86400000(0x5265c00, double:4.2687272E-316)
            r4 = 82800000(0x4ef6d80, double:4.09086355E-316)
            r9 = 23
            if (r8 != r9) goto L30
            int r9 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r9 < 0) goto L30
            long r0 = r0 - r2
        L30:
            if (r8 != 0) goto L37
            int r8 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r8 < 0) goto L37
            long r0 = r0 + r2
        L37:
            return r0
    }

    public static long a(long r6, long r8, int r10) {
            if (r10 <= 0) goto L18
            long r0 = r6 - r8
            long r0 = java.lang.Math.abs(r0)     // Catch: java.lang.Throwable -> L18
            long r2 = (long) r10     // Catch: java.lang.Throwable -> L18
            r4 = 31536000000(0x757b12c00, double:1.55808542072E-313)
            long r2 = r2 * r4
            int r10 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r10 <= 0) goto L18
            long r6 = a(r6, r8)     // Catch: java.lang.Throwable -> L18
        L18:
            return r6
    }

    private static long b(long r2) {
            java.util.Calendar r0 = java.util.Calendar.getInstance()
            java.util.Date r1 = new java.util.Date
            r1.<init>(r2)
            r0.setTime(r1)
            r2 = 0
            r3 = 11
            r0.set(r3, r2)
            r3 = 12
            r0.set(r3, r2)
            r3 = 13
            r0.set(r3, r2)
            r3 = 14
            r0.set(r3, r2)
            long r2 = r0.getTimeInMillis()
            return r2
    }
}
