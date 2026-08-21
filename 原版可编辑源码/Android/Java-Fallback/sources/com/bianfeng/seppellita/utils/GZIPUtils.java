package com.bianfeng.seppellita.utils;

public class GZIPUtils {
    public GZIPUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String compress(java.lang.String r3) {
            r0 = 0
            if (r3 == 0) goto L49
            int r1 = r3.length()
            if (r1 != 0) goto La
            goto L49
        La:
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream
            r1.<init>()
            java.util.zip.GZIPOutputStream r2 = new java.util.zip.GZIPOutputStream     // Catch: java.lang.Throwable -> L25 java.lang.Exception -> L27
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L25 java.lang.Exception -> L27
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L22
            r2.write(r3)     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L22
            r2.close()     // Catch: java.io.IOException -> L31
            goto L35
        L1f:
            r3 = move-exception
            r0 = r2
            goto L3e
        L22:
            r3 = move-exception
            r0 = r2
            goto L28
        L25:
            r3 = move-exception
            goto L3e
        L27:
            r3 = move-exception
        L28:
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L25
            if (r0 == 0) goto L35
            r0.close()     // Catch: java.io.IOException -> L31
            goto L35
        L31:
            r3 = move-exception
            r3.printStackTrace()
        L35:
            byte[] r3 = r1.toByteArray()
            java.lang.String r3 = com.bianfeng.ymnsdk.utilslib.security.Base64.encode(r3)
            return r3
        L3e:
            if (r0 == 0) goto L48
            r0.close()     // Catch: java.io.IOException -> L44
            goto L48
        L44:
            r0 = move-exception
            r0.printStackTrace()
        L48:
            throw r3
        L49:
            return r0
    }
}
