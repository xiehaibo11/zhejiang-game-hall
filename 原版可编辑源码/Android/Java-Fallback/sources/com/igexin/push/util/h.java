package com.igexin.push.util;

public class h {
    public static void a(java.io.Closeable r0) {
            if (r0 == 0) goto L5
            r0.close()     // Catch: java.io.IOException -> L5
        L5:
            return
    }
}
