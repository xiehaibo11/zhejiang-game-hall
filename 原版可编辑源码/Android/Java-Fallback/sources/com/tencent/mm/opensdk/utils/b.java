package com.tencent.mm.opensdk.utils;

public final class b {
    public static android.content.Context a;
    private static final int b = 0;
    private static final int c = 0;
    private static final int d = 0;
    public static java.util.concurrent.ThreadPoolExecutor e;

    static {
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()
            int r0 = r0.availableProcessors()
            com.tencent.mm.opensdk.utils.b.b = r0
            int r1 = r0 + 1
            com.tencent.mm.opensdk.utils.b.c = r1
            int r0 = r0 * 2
            int r0 = r0 + 1
            com.tencent.mm.opensdk.utils.b.d = r0
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            int r2 = com.tencent.mm.opensdk.utils.b.c
            int r3 = com.tencent.mm.opensdk.utils.b.d
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingDeque r7 = new java.util.concurrent.LinkedBlockingDeque
            r7.<init>()
            r4 = 1
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7)
            com.tencent.mm.opensdk.utils.b.e = r0
            return
    }

    public static int a(android.content.ContentResolver r4, android.net.Uri r5) {
            java.lang.String r0 = "MicroMsg.SDK.Util"
            java.lang.String r1 = "getFileSize with content url"
            com.tencent.mm.opensdk.utils.Log.i(r0, r1)
            r1 = 0
            if (r4 == 0) goto L49
            if (r5 != 0) goto Ld
            goto L49
        Ld:
            r2 = 0
            java.io.InputStream r2 = r4.openInputStream(r5)     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
            if (r2 != 0) goto L1a
            if (r2 == 0) goto L19
            r2.close()     // Catch: java.io.IOException -> L19
        L19:
            return r1
        L1a:
            int r4 = r2.available()     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
            r2.close()     // Catch: java.io.IOException -> L21
        L21:
            return r4
        L22:
            r4 = move-exception
            goto L43
        L24:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L22
            r5.<init>()     // Catch: java.lang.Throwable -> L22
            java.lang.String r3 = "getFileSize fail, "
            r5.append(r3)     // Catch: java.lang.Throwable -> L22
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L22
            r5.append(r4)     // Catch: java.lang.Throwable -> L22
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Throwable -> L22
            com.tencent.mm.opensdk.utils.Log.w(r0, r4)     // Catch: java.lang.Throwable -> L22
            if (r2 == 0) goto L42
            r2.close()     // Catch: java.io.IOException -> L42
        L42:
            return r1
        L43:
            if (r2 == 0) goto L48
            r2.close()     // Catch: java.io.IOException -> L48
        L48:
            throw r4
        L49:
            java.lang.String r4 = "getFileSize fail, resolver or uri is null"
            com.tencent.mm.opensdk.utils.Log.w(r0, r4)
            return r1
    }

    public static int a(java.lang.String r3) {
            r0 = 0
            if (r3 == 0) goto L37
            int r1 = r3.length()
            if (r1 != 0) goto La
            goto L37
        La:
            java.io.File r1 = new java.io.File
            r1.<init>(r3)
            boolean r2 = r1.exists()
            if (r2 != 0) goto L31
            android.content.Context r1 = com.tencent.mm.opensdk.utils.b.a
            if (r1 == 0) goto L30
            java.lang.String r1 = "content"
            boolean r1 = r3.startsWith(r1)
            if (r1 == 0) goto L30
            android.content.Context r1 = com.tencent.mm.opensdk.utils.b.a     // Catch: java.lang.Exception -> L30
            android.content.ContentResolver r1 = r1.getContentResolver()     // Catch: java.lang.Exception -> L30
            android.net.Uri r3 = android.net.Uri.parse(r3)     // Catch: java.lang.Exception -> L30
            int r3 = a(r1, r3)     // Catch: java.lang.Exception -> L30
            return r3
        L30:
            return r0
        L31:
            long r0 = r1.length()
            int r3 = (int) r0
            return r3
        L37:
            return r0
    }

    public static int a(java.lang.String r1, int r2) {
            if (r1 == 0) goto Le
            int r0 = r1.length()     // Catch: java.lang.Exception -> Le
            if (r0 > 0) goto L9
            goto Le
        L9:
            int r2 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Exception -> Le
        Le:
            return r2
    }

    public static boolean a(int r1) {
            r0 = 36
            if (r1 == r0) goto Lb
            r0 = 46
            if (r1 != r0) goto L9
            goto Lb
        L9:
            r1 = 0
            goto Lc
        Lb:
            r1 = 1
        Lc:
            return r1
    }

    public static boolean b(java.lang.String r0) {
            if (r0 == 0) goto Lb
            int r0 = r0.length()
            if (r0 > 0) goto L9
            goto Lb
        L9:
            r0 = 0
            return r0
        Lb:
            r0 = 1
            return r0
    }
}
