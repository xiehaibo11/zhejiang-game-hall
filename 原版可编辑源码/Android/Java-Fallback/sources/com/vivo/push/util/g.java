package com.vivo.push.util;

public final class g {
    public static void a(java.lang.String r2) {
            boolean r0 = com.vivo.push.util.p.a()
            if (r0 == 0) goto L2d
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 != r1) goto L2d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Operation: "
            r0.<init>(r1)
            r0.append(r2)
            java.lang.String r2 = " in main thread!"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.Throwable r0 = new java.lang.Throwable
            r0.<init>()
            java.lang.String r1 = "DebugUtil"
            android.util.Log.w(r1, r2, r0)
        L2d:
            return
    }
}
