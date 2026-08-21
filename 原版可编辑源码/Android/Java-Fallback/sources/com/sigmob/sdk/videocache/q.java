package com.sigmob.sdk.videocache;

public class q {
    static final int a = 8192;
    static final int b = 16;

    public q() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String a(java.lang.String r2) {
            android.webkit.MimeTypeMap r0 = android.webkit.MimeTypeMap.getSingleton()
            java.lang.String r2 = android.webkit.MimeTypeMap.getFileExtensionFromUrl(r2)
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 == 0) goto L10
            r2 = 0
            goto L14
        L10:
            java.lang.String r2 = r0.getMimeTypeFromExtension(r2)
        L14:
            return r2
    }

    private static java.lang.String a(byte[] r6) {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            int r1 = r6.length
            r2 = 0
            r3 = r2
        L8:
            if (r3 >= r1) goto L21
            r4 = r6[r3]
            r5 = 1
            java.lang.Object[] r5 = new java.lang.Object[r5]
            java.lang.Byte r4 = java.lang.Byte.valueOf(r4)
            r5[r2] = r4
            java.lang.String r4 = "%02x"
            java.lang.String r4 = java.lang.String.format(r4, r5)
            r0.append(r4)
            int r3 = r3 + 1
            goto L8
        L21:
            java.lang.String r6 = r0.toString()
            return r6
    }

    static java.lang.String a(byte[] r3, int r4) {
            r0 = 0
            int r1 = java.lang.Math.max(r4, r0)
            r2 = 16
            int r1 = java.lang.Math.min(r2, r1)
            byte[] r3 = java.util.Arrays.copyOfRange(r3, r0, r1)
            java.lang.String r3 = java.util.Arrays.toString(r3)
            if (r1 >= r4) goto L30
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            int r1 = r3.length()
            int r1 = r1 + (-1)
            java.lang.String r3 = r3.substring(r0, r1)
            r4.append(r3)
            java.lang.String r3 = ", ...]"
            r4.append(r3)
            java.lang.String r3 = r4.toString()
        L30:
            return r3
    }

    static void a(java.io.Closeable r1) {
            if (r1 == 0) goto Lc
            r1.close()     // Catch: java.io.IOException -> L6
            goto Lc
        L6:
            r1 = move-exception
            java.lang.String r0 = "Error closing resource"
            com.czhj.sdk.logger.SigmobLog.e(r0, r1)
        Lc:
            return
    }

    static void a(byte[] r2, long r3, int r5) {
            java.lang.String r0 = "Buffer must be not null!"
            com.sigmob.sdk.videocache.n.a(r2, r0)
            r0 = 0
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            r4 = 1
            r0 = 0
            if (r3 < 0) goto Lf
            r3 = r4
            goto L10
        Lf:
            r3 = r0
        L10:
            java.lang.String r1 = "Data offset must be positive!"
            com.sigmob.sdk.videocache.n.a(r3, r1)
            if (r5 < 0) goto L1b
            int r2 = r2.length
            if (r5 > r2) goto L1b
            goto L1c
        L1b:
            r4 = r0
        L1c:
            java.lang.String r2 = "Length must be in range [0..buffer.length]"
            com.sigmob.sdk.videocache.n.a(r4, r2)
            return
    }

    static java.lang.String b(java.lang.String r2) {
            java.lang.String r0 = "utf-8"
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r0)     // Catch: java.io.UnsupportedEncodingException -> L7
            return r2
        L7:
            r2 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "Error encoding url"
            r0.<init>(r1, r2)
            throw r0
    }

    static java.lang.String c(java.lang.String r2) {
            java.lang.String r0 = "utf-8"
            java.lang.String r2 = java.net.URLDecoder.decode(r2, r0)     // Catch: java.io.UnsupportedEncodingException -> L7
            return r2
        L7:
            r2 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "Error decoding url"
            r0.<init>(r1, r2)
            throw r0
    }

    public static java.lang.String d(java.lang.String r1) {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L13
            byte[] r1 = r1.getBytes()     // Catch: java.security.NoSuchAlgorithmException -> L13
            byte[] r1 = r0.digest(r1)     // Catch: java.security.NoSuchAlgorithmException -> L13
            java.lang.String r1 = a(r1)     // Catch: java.security.NoSuchAlgorithmException -> L13
            return r1
        L13:
            r1 = move-exception
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>(r1)
            throw r0
    }
}
