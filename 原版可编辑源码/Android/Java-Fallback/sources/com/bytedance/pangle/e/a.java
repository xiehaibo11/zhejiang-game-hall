package com.bytedance.pangle.e;

public final class a {


    private static void a(java.io.InputStream r1) {
            com.bytedance.pangle.e.a$1 r0 = new com.bytedance.pangle.e.a$1
            r0.<init>(r1)
            com.bytedance.pangle.d.e.a(r0)
            return
    }

    public static boolean a(java.lang.String[] r4) {
            int r0 = r4.length
            r1 = 0
            if (r0 > 0) goto L5
            return r1
        L5:
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()     // Catch: java.lang.InterruptedException -> L3b java.io.IOException -> L40
            java.lang.Process r0 = r0.exec(r4)     // Catch: java.lang.InterruptedException -> L3b java.io.IOException -> L40
            java.io.InputStream r2 = r0.getErrorStream()     // Catch: java.lang.InterruptedException -> L3b java.io.IOException -> L40
            java.io.InputStream r3 = r0.getInputStream()     // Catch: java.lang.InterruptedException -> L3b java.io.IOException -> L40
            a(r2)     // Catch: java.lang.InterruptedException -> L3b java.io.IOException -> L40
            a(r3)     // Catch: java.lang.InterruptedException -> L3b java.io.IOException -> L40
            int r0 = r0.waitFor()     // Catch: java.lang.InterruptedException -> L3b java.io.IOException -> L40
            if (r0 == 0) goto L39
            java.lang.String r0 = "Zeus/install_pangle"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.InterruptedException -> L3b java.io.IOException -> L40
            java.lang.String r3 = "exec dex2oat failed : "
            r2.<init>(r3)     // Catch: java.lang.InterruptedException -> L3b java.io.IOException -> L40
            java.lang.String r4 = r4.toString()     // Catch: java.lang.InterruptedException -> L3b java.io.IOException -> L40
            r2.append(r4)     // Catch: java.lang.InterruptedException -> L3b java.io.IOException -> L40
            java.lang.String r4 = r2.toString()     // Catch: java.lang.InterruptedException -> L3b java.io.IOException -> L40
            com.bytedance.pangle.log.ZeusLogger.errReport(r0, r4)     // Catch: java.lang.InterruptedException -> L3b java.io.IOException -> L40
            return r1
        L39:
            r4 = 1
            return r4
        L3b:
            r4 = move-exception
            r4.printStackTrace()
            return r1
        L40:
            r4 = move-exception
            r4.printStackTrace()
            return r1
    }
}
