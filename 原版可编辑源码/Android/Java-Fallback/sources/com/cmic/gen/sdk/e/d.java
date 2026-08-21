package com.cmic.gen.sdk.e;

public class d {
    public static java.lang.String a(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            java.lang.String r0 = "utf-8"
            byte[] r2 = r2.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L14
            java.lang.String r2 = a(r2)
            return r2
        L14:
            return r1
    }

    public static java.lang.String a(byte[] r2) {
            java.lang.String r0 = ""
            if (r2 != 0) goto L5
            return r0
        L5:
            java.lang.String r1 = "MD5"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.lang.Exception -> L17
            r1.update(r2)     // Catch: java.lang.Exception -> L17
            byte[] r2 = r1.digest()
            java.lang.String r2 = com.cmic.gen.sdk.e.q.a(r2)
            return r2
        L17:
            return r0
    }
}
