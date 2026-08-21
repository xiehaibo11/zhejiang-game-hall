package com.igexin.push.util;

public class i {
    public static boolean a(java.lang.Class r2, java.lang.Class r3, int r4) {
            r0 = 0
            if (r2 == 0) goto L1e
            if (r3 == 0) goto L1e
            if (r4 > 0) goto L8
            goto L1e
        L8:
            if (r2 == r3) goto L1c
            java.lang.Class r1 = r2.getSuperclass()
            if (r1 == 0) goto L1b
            java.lang.Class r2 = r2.getSuperclass()
            int r4 = r4 + (-1)
            boolean r2 = a(r2, r3, r4)
            return r2
        L1b:
            return r0
        L1c:
            r2 = 1
            return r2
        L1e:
            return r0
    }
}
