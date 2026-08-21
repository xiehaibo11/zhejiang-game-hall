package com.alipay.android.phone.mrpc.core;

public final class r {
    public static void a(java.io.Closeable r0) {
            if (r0 == 0) goto L6
            r0.close()     // Catch: java.io.IOException -> L6
        L6:
            return
    }
}
