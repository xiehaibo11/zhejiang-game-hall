package com.meizu.cloud.pushsdk.platform;

public class b {
    public static java.lang.String a(java.lang.String r6) {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L32
            byte[] r6 = r6.getBytes()     // Catch: java.security.NoSuchAlgorithmException -> L32
            byte[] r6 = r0.digest(r6)     // Catch: java.security.NoSuchAlgorithmException -> L32
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.security.NoSuchAlgorithmException -> L32
            r0.<init>()     // Catch: java.security.NoSuchAlgorithmException -> L32
            int r1 = r6.length     // Catch: java.security.NoSuchAlgorithmException -> L32
            r2 = 0
            r3 = r2
        L16:
            if (r3 >= r1) goto L2d
            r4 = r6[r3]     // Catch: java.security.NoSuchAlgorithmException -> L32
            r4 = r4 & 255(0xff, float:3.57E-43)
            r5 = 16
            if (r4 >= r5) goto L23
            r0.append(r2)     // Catch: java.security.NoSuchAlgorithmException -> L32
        L23:
            java.lang.String r4 = java.lang.Integer.toHexString(r4)     // Catch: java.security.NoSuchAlgorithmException -> L32
            r0.append(r4)     // Catch: java.security.NoSuchAlgorithmException -> L32
            int r3 = r3 + 1
            goto L16
        L2d:
            java.lang.String r6 = r0.toString()     // Catch: java.security.NoSuchAlgorithmException -> L32
            goto L37
        L32:
            r6 = move-exception
            r6.printStackTrace()
            r6 = 0
        L37:
            return r6
    }

    public static java.lang.String a(java.util.Map<java.lang.String, java.lang.String> r3, java.lang.String r4) {
            java.util.TreeMap r0 = new java.util.TreeMap
            r0.<init>(r3)
            java.util.Set r3 = r0.entrySet()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Iterator r3 = r3.iterator()
        L12:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L36
            java.lang.Object r1 = r3.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            r0.append(r2)
            java.lang.String r2 = "="
            r0.append(r2)
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            r0.append(r1)
            goto L12
        L36:
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            java.lang.String r3 = a(r3)
            return r3
    }
}
