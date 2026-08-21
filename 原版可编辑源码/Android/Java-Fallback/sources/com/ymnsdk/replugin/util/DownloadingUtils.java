package com.ymnsdk.replugin.util;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class DownloadingUtils {
    public static long[] processArray;

    static {
            r0 = 10
            long[] r0 = new long[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [0, 1, 2, 4, 8, 16, 32, 64, 99, 100} // fill-array
            com.ymnsdk.replugin.util.DownloadingUtils.processArray = r0
            return
    }

    public DownloadingUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean inProcessArray(long r5) {
            r0 = 0
            r1 = r0
        L2:
            long[] r2 = com.ymnsdk.replugin.util.DownloadingUtils.processArray
            int r3 = r2.length
            if (r1 >= r3) goto L12
            r3 = r2[r1]
            int r2 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r2 != 0) goto Lf
            r5 = 1
            return r5
        Lf:
            int r1 = r1 + 1
            goto L2
        L12:
            return r0
    }
}
