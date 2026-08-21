package com.xiaomi.push;

public class ar {
    public static void a() {
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            java.lang.Thread r0 = r0.getThread()
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            if (r0 == r1) goto Lf
            return
        Lf:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "can't do this on ui thread"
            r0.<init>(r1)
            throw r0
    }
}
