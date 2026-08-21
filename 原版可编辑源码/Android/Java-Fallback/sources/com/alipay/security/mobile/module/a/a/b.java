package com.alipay.security.mobile.module.a.a;

public final class b {
    public static java.lang.String a(java.lang.String r7) {
            r0 = 0
            boolean r1 = com.alipay.security.mobile.module.a.a.a(r7)     // Catch: java.lang.Exception -> L41
            if (r1 == 0) goto L8
            return r0
        L8:
            java.lang.String r1 = "SHA-1"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.lang.Exception -> L41
            java.lang.String r2 = "UTF-8"
            byte[] r7 = r7.getBytes(r2)     // Catch: java.lang.Exception -> L41
            r1.update(r7)     // Catch: java.lang.Exception -> L41
            byte[] r7 = r1.digest()     // Catch: java.lang.Exception -> L41
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L41
            r1.<init>()     // Catch: java.lang.Exception -> L41
            r2 = 0
            r3 = 0
        L22:
            int r4 = r7.length     // Catch: java.lang.Exception -> L41
            if (r3 >= r4) goto L3c
            java.lang.String r4 = "%02x"
            r5 = 1
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Exception -> L41
            r6 = r7[r3]     // Catch: java.lang.Exception -> L41
            java.lang.Byte r6 = java.lang.Byte.valueOf(r6)     // Catch: java.lang.Exception -> L41
            r5[r2] = r6     // Catch: java.lang.Exception -> L41
            java.lang.String r4 = java.lang.String.format(r4, r5)     // Catch: java.lang.Exception -> L41
            r1.append(r4)     // Catch: java.lang.Exception -> L41
            int r3 = r3 + 1
            goto L22
        L3c:
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Exception -> L41
            return r7
        L41:
            return r0
    }
}
