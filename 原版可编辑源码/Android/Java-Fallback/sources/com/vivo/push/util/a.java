package com.vivo.push.util;

public class a {
    private static volatile com.vivo.push.util.a c;
    private byte[] a;
    private byte[] b;

    private a(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            com.vivo.push.util.w r0 = com.vivo.push.util.w.b()
            android.content.Context r2 = com.vivo.push.util.ContextDelegate.getContext(r2)
            r0.a(r2)
            com.vivo.push.util.w r2 = com.vivo.push.util.w.b()
            byte[] r0 = r2.c()
            r1.a = r0
            byte[] r2 = r2.d()
            r1.b = r2
            return
    }

    public static com.vivo.push.util.a a(android.content.Context r2) {
            com.vivo.push.util.a r0 = com.vivo.push.util.a.c
            if (r0 != 0) goto L1b
            java.lang.Class<com.vivo.push.util.a> r0 = com.vivo.push.util.a.class
            monitor-enter(r0)
            com.vivo.push.util.a r1 = com.vivo.push.util.a.c     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L16
            com.vivo.push.util.a r1 = new com.vivo.push.util.a     // Catch: java.lang.Throwable -> L18
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L18
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L18
            com.vivo.push.util.a.c = r1     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            goto L1b
        L18:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            throw r2
        L1b:
            com.vivo.push.util.a r2 = com.vivo.push.util.a.c
            return r2
    }

    private byte[] a() {
            r2 = this;
            byte[] r0 = r2.a
            if (r0 == 0) goto L8
            int r1 = r0.length
            if (r1 <= 0) goto L8
            return r0
        L8:
            com.vivo.push.util.w r0 = com.vivo.push.util.w.b()
            byte[] r0 = r0.c()
            return r0
    }

    private byte[] b() {
            r2 = this;
            byte[] r0 = r2.b
            if (r0 == 0) goto L8
            int r1 = r0.length
            if (r1 <= 0) goto L8
            return r0
        L8:
            com.vivo.push.util.w r0 = com.vivo.push.util.w.b()
            byte[] r0 = r0.d()
            return r0
    }

    public final java.lang.String a(java.lang.String r6) {
            r5 = this;
            byte[] r0 = r5.a()
            java.lang.String r0 = com.vivo.push.util.f.a(r0)
            byte[] r1 = r5.b()
            java.lang.String r1 = com.vivo.push.util.f.a(r1)
            java.lang.String r2 = "utf-8"
            byte[] r6 = r6.getBytes(r2)
            javax.crypto.spec.SecretKeySpec r3 = new javax.crypto.spec.SecretKeySpec
            byte[] r1 = r1.getBytes(r2)
            java.lang.String r4 = "AES"
            r3.<init>(r1, r4)
            java.lang.String r1 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r1 = javax.crypto.Cipher.getInstance(r1)
            javax.crypto.spec.IvParameterSpec r4 = new javax.crypto.spec.IvParameterSpec
            byte[] r0 = r0.getBytes(r2)
            r4.<init>(r0)
            r0 = 1
            r1.init(r0, r3, r4)
            byte[] r6 = r1.doFinal(r6)
            r0 = 2
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r0)
            return r6
    }

    public final java.lang.String b(java.lang.String r5) {
            r4 = this;
            java.lang.String r0 = new java.lang.String
            byte[] r1 = r4.a()
            java.lang.String r1 = com.vivo.push.util.f.a(r1)
            byte[] r2 = r4.b()
            java.lang.String r2 = com.vivo.push.util.f.a(r2)
            r3 = 2
            byte[] r5 = android.util.Base64.decode(r5, r3)
            byte[] r5 = com.vivo.push.util.f.a(r1, r2, r5)
            java.lang.String r1 = "utf-8"
            r0.<init>(r5, r1)
            return r0
    }
}
