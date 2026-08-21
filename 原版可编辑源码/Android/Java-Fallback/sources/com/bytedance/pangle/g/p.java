package com.bytedance.pangle.g;

final class p extends com.bytedance.pangle.g.r {
    private final byte[] a;
    private int b;

    p(java.security.cert.X509Certificate r1, byte[] r2) {
            r0 = this;
            r0.<init>(r1)
            r1 = -1
            r0.b = r1
            r0.a = r2
            return
    }

    @Override
    public final boolean equals(java.lang.Object r3) {
            r2 = this;
            if (r2 != r3) goto L4
            r3 = 1
            return r3
        L4:
            boolean r0 = r3 instanceof com.bytedance.pangle.g.p
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            byte[] r0 = r2.getEncoded()     // Catch: java.security.cert.CertificateEncodingException -> L19
            com.bytedance.pangle.g.p r3 = (com.bytedance.pangle.g.p) r3     // Catch: java.security.cert.CertificateEncodingException -> L19
            byte[] r3 = r3.getEncoded()     // Catch: java.security.cert.CertificateEncodingException -> L19
            boolean r3 = java.util.Arrays.equals(r0, r3)     // Catch: java.security.cert.CertificateEncodingException -> L19
            return r3
        L19:
            return r1
    }

    @Override
    public final byte[] getEncoded() {
            r1 = this;
            byte[] r0 = r1.a
            return r0
    }

    @Override
    public final int hashCode() {
            r2 = this;
            int r0 = r2.b
            r1 = -1
            if (r0 != r1) goto L13
            byte[] r0 = r2.getEncoded()     // Catch: java.security.cert.CertificateEncodingException -> L10
            int r0 = java.util.Arrays.hashCode(r0)     // Catch: java.security.cert.CertificateEncodingException -> L10
            r2.b = r0     // Catch: java.security.cert.CertificateEncodingException -> L10
            goto L13
        L10:
            r0 = 0
            r2.b = r0
        L13:
            int r0 = r2.b
            return r0
    }
}
