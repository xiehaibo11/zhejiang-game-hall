package com.alipay.security.mobile.module.a;

/* JADX INFO: loaded from: classes.dex */
public final class b {
    /* JADX WARN: Can't wrap try/catch for region: R(2:(3:31|7|(1:9)(0))|27) */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.lang.String a(java.lang.String r4, java.lang.String r5) throws java.lang.Throwable {
        /*
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L3d
            r2.<init>(r4, r5)     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L3d
            boolean r4 = r2.exists()     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L3d
            if (r4 != 0) goto L12
            return r1
        L12:
            java.io.BufferedReader r4 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L3d
            java.io.InputStreamReader r5 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L3d
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L3d
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L3d
            java.lang.String r2 = "UTF-8"
            r5.<init>(r3, r2)     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L3d
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L3d
        L23:
            java.lang.String r5 = r4.readLine()     // Catch: java.lang.Throwable -> L31 java.io.IOException -> L34
            if (r5 == 0) goto L2d
            r0.append(r5)     // Catch: java.lang.Throwable -> L31 java.io.IOException -> L34
            goto L23
        L2d:
            r4.close()     // Catch: java.lang.Throwable -> L41
            goto L41
        L31:
            r5 = move-exception
            r1 = r4
            goto L37
        L34:
            goto L3e
        L36:
            r5 = move-exception
        L37:
            if (r1 == 0) goto L3c
            r1.close()     // Catch: java.lang.Throwable -> L3c
        L3c:
            throw r5
        L3d:
            r4 = r1
        L3e:
            if (r4 == 0) goto L41
            goto L2d
        L41:
            java.lang.String r4 = r0.toString()
            return r4
        */
        throw new UnsupportedOperationException("Method not decompiled: com.alipay.security.mobile.module.a.b.a(java.lang.String, java.lang.String):java.lang.String");
    }
}
