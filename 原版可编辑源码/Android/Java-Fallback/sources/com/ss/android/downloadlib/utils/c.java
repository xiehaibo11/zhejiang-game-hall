package com.ss.android.downloadlib.utils;

public class c {
    public static long rg(java.io.File r3) {
            if (r3 == 0) goto L13
            boolean r0 = r3.exists()
            if (r0 != 0) goto L9
            goto L13
        L9:
            long r0 = r3.lastModified()
            r2 = 0
            long r0 = rg(r3, r0, r2)
            return r0
        L13:
            r0 = 0
            return r0
    }

    private static long rg(java.io.File r4, long r5, int r7) {
            if (r4 == 0) goto L35
            boolean r0 = r4.exists()
            if (r0 != 0) goto L9
            goto L35
        L9:
            long r0 = r4.lastModified()
            long r5 = java.lang.Math.max(r5, r0)
            int r7 = r7 + 1
            r0 = 50
            if (r7 < r0) goto L18
            return r5
        L18:
            boolean r0 = r4.isDirectory()
            if (r0 == 0) goto L35
            java.io.File[] r4 = r4.listFiles()
            if (r4 == 0) goto L35
            int r0 = r4.length
            r1 = 0
        L26:
            if (r1 >= r0) goto L35
            r2 = r4[r1]
            long r2 = rg(r2, r5, r7)
            long r5 = java.lang.Math.max(r5, r2)
            int r1 = r1 + 1
            goto L26
        L35:
            return r5
    }
}
