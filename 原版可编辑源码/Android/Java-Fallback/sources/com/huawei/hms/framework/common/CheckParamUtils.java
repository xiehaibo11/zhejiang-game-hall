package com.huawei.hms.framework.common;

public class CheckParamUtils {
    private static final java.lang.String TAG = "CheckParamUtils";

    public CheckParamUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static <T> T checkNotNull(T r0, java.lang.String r1) {
            if (r0 == 0) goto L3
            return r0
        L3:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            r0.<init>(r1)
            throw r0
    }

    public static int checkNumParam(int r0, int r1, int r2, int r3, java.lang.String r4) {
            if (r0 > r2) goto Lb
            if (r0 >= r1) goto L5
            goto Lb
        L5:
            java.lang.String r1 = "CheckParamUtils"
            com.huawei.hms.framework.common.Logger.d(r1, r4)
            return r0
        Lb:
            return r3
    }

    public static long checkNumParam(long r0, long r2, long r4, long r6, java.lang.String r8) {
            int r4 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r4 > 0) goto Lf
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 >= 0) goto L9
            goto Lf
        L9:
            java.lang.String r2 = "CheckParamUtils"
            com.huawei.hms.framework.common.Logger.d(r2, r8)
            return r0
        Lf:
            return r6
    }

    public static void checkOffsetAndCount(long r4, long r6, long r8) {
            long r0 = r6 | r8
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L12
            int r0 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r0 > 0) goto L12
            long r4 = r4 - r6
            int r4 = (r4 > r8 ? 1 : (r4 == r8 ? 0 : -1))
            if (r4 < 0) goto L12
            return
        L12:
            java.lang.ArrayIndexOutOfBoundsException r4 = new java.lang.ArrayIndexOutOfBoundsException
            r4.<init>()
            throw r4
    }
}
