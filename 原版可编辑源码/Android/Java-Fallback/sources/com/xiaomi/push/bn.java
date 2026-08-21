package com.xiaomi.push;

public class bn {
    public static java.lang.String a(java.lang.String r3) {
            java.lang.String r0 = "CloudCoder.hash4SHA1 "
            java.lang.String r1 = "SHA1"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.lang.Exception -> L1b java.io.UnsupportedEncodingException -> L1d java.security.NoSuchAlgorithmException -> L1f
            java.lang.String r2 = "UTF-8"
            byte[] r3 = r3.getBytes(r2)     // Catch: java.lang.Exception -> L1b java.io.UnsupportedEncodingException -> L1d java.security.NoSuchAlgorithmException -> L1f
            byte[] r3 = r1.digest(r3)     // Catch: java.lang.Exception -> L1b java.io.UnsupportedEncodingException -> L1d java.security.NoSuchAlgorithmException -> L1f
            char[] r3 = com.xiaomi.push.bm.a(r3)     // Catch: java.lang.Exception -> L1b java.io.UnsupportedEncodingException -> L1d java.security.NoSuchAlgorithmException -> L1f
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L1b java.io.UnsupportedEncodingException -> L1d java.security.NoSuchAlgorithmException -> L1f
            return r3
        L1b:
            r3 = move-exception
            goto L20
        L1d:
            r3 = move-exception
            goto L20
        L1f:
            r3 = move-exception
        L20:
            com.xiaomi.channel.commonutils.logger.b.a(r0, r3)
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r0 = "failed to SHA1"
            r3.<init>(r0)
            throw r3
    }

    public static java.lang.String a(java.lang.String r4, java.lang.String r5, java.util.Map<java.lang.String, java.lang.String> r6, java.lang.String r7) {
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 != 0) goto L8a
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            if (r4 == 0) goto L14
            java.lang.String r4 = r4.toUpperCase()
            r0.add(r4)
        L14:
            if (r5 == 0) goto L21
            android.net.Uri r4 = android.net.Uri.parse(r5)
            java.lang.String r4 = r4.getEncodedPath()
            r0.add(r4)
        L21:
            r4 = 0
            r5 = 1
            if (r6 == 0) goto L5d
            boolean r1 = r6.isEmpty()
            if (r1 != 0) goto L5d
            java.util.TreeMap r1 = new java.util.TreeMap
            r1.<init>(r6)
            java.util.Set r6 = r1.entrySet()
            java.util.Iterator r6 = r6.iterator()
        L38:
            boolean r1 = r6.hasNext()
            if (r1 == 0) goto L5d
            java.lang.Object r1 = r6.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.Object r3 = r1.getKey()
            r2[r4] = r3
            java.lang.Object r1 = r1.getValue()
            r2[r5] = r1
            java.lang.String r1 = "%s=%s"
            java.lang.String r1 = java.lang.String.format(r1, r2)
            r0.add(r1)
            goto L38
        L5d:
            r0.add(r7)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.util.Iterator r7 = r0.iterator()
        L69:
            boolean r0 = r7.hasNext()
            if (r0 == 0) goto L81
            java.lang.Object r0 = r7.next()
            java.lang.String r0 = (java.lang.String) r0
            if (r5 != 0) goto L7c
            r5 = 38
            r6.append(r5)
        L7c:
            r6.append(r0)
            r5 = r4
            goto L69
        L81:
            java.lang.String r4 = r6.toString()
            java.lang.String r4 = a(r4)
            return r4
        L8a:
            java.security.InvalidParameterException r4 = new java.security.InvalidParameterException
            java.lang.String r5 = "security is not nullable"
            r4.<init>(r5)
            throw r4
    }
}
