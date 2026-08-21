package com.mbridge.msdk.foundation.download.utils;

public final class Utils {
    private Utils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int getDownloadRate(long r3, long r5) {
            r0 = 0
            int r2 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r2 == 0) goto L1e
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 != 0) goto Lb
            goto L1e
        Lb:
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 != 0) goto L12
            r3 = 100
            return r3
        L12:
            double r5 = (double) r5
            r0 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r5 = r5 * r0
            double r3 = (double) r3
            double r3 = r3 * r0
            double r5 = r5 / r3
            r3 = 4636737291354636288(0x4059000000000000, double:100.0)
            double r5 = r5 * r3
            int r3 = (int) r5
            return r3
        L1e:
            r3 = 0
            return r3
    }
}
