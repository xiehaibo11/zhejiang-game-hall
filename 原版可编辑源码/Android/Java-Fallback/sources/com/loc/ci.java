package com.loc;

public abstract class ci {
    com.loc.ci c;
    byte[] d;

    ci() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.d = r0
            return
    }

    ci(com.loc.ci r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.d = r0
            r1.c = r2
            return
    }

    public final byte[] a() throws java.security.cert.CertificateException, java.security.NoSuchAlgorithmException, java.io.IOException, javax.crypto.BadPaddingException, javax.crypto.IllegalBlockSizeException, javax.crypto.NoSuchPaddingException, java.security.InvalidKeyException, java.security.spec.InvalidKeySpecException {
            r2 = this;
            byte[] r0 = r2.d
            byte[] r0 = r2.a(r0)
            com.loc.ci r1 = r2.c
            if (r1 == 0) goto L10
            r1.d = r0
            byte[] r0 = r1.a()
        L10:
            return r0
    }

    protected abstract byte[] a(byte[] r1) throws java.security.cert.CertificateException, java.security.NoSuchAlgorithmException, java.io.IOException, javax.crypto.BadPaddingException, javax.crypto.IllegalBlockSizeException, javax.crypto.NoSuchPaddingException, java.security.InvalidKeyException, java.security.spec.InvalidKeySpecException;

    public void b(byte[] r1) {
            r0 = this;
            return
    }
}
