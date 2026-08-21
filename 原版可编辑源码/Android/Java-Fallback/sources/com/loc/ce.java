package com.loc;

public final class ce extends com.loc.ci {
    private android.content.Context a;
    private java.lang.String b;
    private com.loc.bh e;
    private java.lang.Object[] f;

    public ce(android.content.Context r1, com.loc.ci r2, com.loc.bh r3, java.lang.String r4, java.lang.Object... r5) {
            r0 = this;
            r0.<init>(r2)
            r0.a = r1
            r0.b = r4
            r0.e = r3
            r0.f = r5
            return
    }

    private java.lang.String b() {
            r3 = this;
            java.lang.String r0 = r3.b     // Catch: java.lang.Throwable -> Ld
            java.lang.String r0 = com.loc.x.c(r0)     // Catch: java.lang.Throwable -> Ld
            java.lang.Object[] r1 = r3.f     // Catch: java.lang.Throwable -> Ld
            java.lang.String r0 = java.lang.String.format(r0, r1)     // Catch: java.lang.Throwable -> Ld
            goto L1a
        Ld:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r1 = "ofm"
            java.lang.String r2 = "gpj"
            com.loc.av.b(r0, r1, r2)
            java.lang.String r0 = ""
        L1a:
            return r0
    }

    @Override
    protected final byte[] a(byte[] r4) throws java.security.cert.CertificateException, java.security.NoSuchAlgorithmException, java.io.IOException, javax.crypto.BadPaddingException, javax.crypto.IllegalBlockSizeException, javax.crypto.NoSuchPaddingException, java.security.InvalidKeyException, java.security.spec.InvalidKeySpecException {
            r3 = this;
            java.lang.String r4 = com.loc.x.a(r4)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto Lc
            r4 = 0
            return r4
        Lc:
            java.lang.String r0 = r3.b()
            com.loc.bh r1 = r3.e
            byte[] r0 = com.loc.x.a(r0)
            byte[] r0 = r1.b(r0)
            java.lang.String r0 = com.loc.x.a(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "{\"pinfo\":\""
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = "\",\"els\":["
            r1.append(r0)
            r1.append(r4)
            java.lang.String r4 = "]}"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            byte[] r4 = com.loc.x.a(r4)
            return r4
    }
}
