package com.bianfeng.datafunsdk;

public class u {
    public static android.os.Handler a;

    static {
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.bianfeng.datafunsdk.u.a = r0
            return
    }

    public static void a(java.lang.Runnable r1) {
            android.os.Handler r0 = com.bianfeng.datafunsdk.u.a
            r0.post(r1)
            return
    }
}
