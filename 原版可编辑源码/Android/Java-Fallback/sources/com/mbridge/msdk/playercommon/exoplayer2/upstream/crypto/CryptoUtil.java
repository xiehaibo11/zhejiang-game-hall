package com.mbridge.msdk.playercommon.exoplayer2.upstream.crypto;

final class CryptoUtil {
    private CryptoUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static long getFNV64Hash(java.lang.String r7) {
            r0 = 0
            if (r7 != 0) goto L5
            return r0
        L5:
            r2 = 0
        L6:
            int r3 = r7.length()
            if (r2 >= r3) goto L2f
            char r3 = r7.charAt(r2)
            long r3 = (long) r3
            long r0 = r0 ^ r3
            r3 = 1
            long r3 = r0 << r3
            r5 = 4
            long r5 = r0 << r5
            long r3 = r3 + r5
            r5 = 5
            long r5 = r0 << r5
            long r3 = r3 + r5
            r5 = 7
            long r5 = r0 << r5
            long r3 = r3 + r5
            r5 = 8
            long r5 = r0 << r5
            long r3 = r3 + r5
            r5 = 40
            long r5 = r0 << r5
            long r3 = r3 + r5
            long r0 = r0 + r3
            int r2 = r2 + 1
            goto L6
        L2f:
            return r0
    }
}
