package com.huawei.hms.framework.common;

public class Utils {
    public Utils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static long getCurrentTime(boolean r2) {
            if (r2 == 0) goto L7
            long r0 = android.os.SystemClock.elapsedRealtime()
            return r0
        L7:
            long r0 = java.lang.System.currentTimeMillis()
            return r0
    }
}
