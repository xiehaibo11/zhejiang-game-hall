package com.loc;

public abstract class bh {
    com.loc.bh a;

    bh() {
            r0 = this;
            r0.<init>()
            return
    }

    bh(com.loc.bh r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    protected abstract byte[] a(byte[] r1) throws java.security.cert.CertificateException, java.security.NoSuchAlgorithmException, java.io.IOException, javax.crypto.BadPaddingException, javax.crypto.IllegalBlockSizeException, javax.crypto.NoSuchPaddingException, java.security.InvalidKeyException, java.security.spec.InvalidKeySpecException;

    public final byte[] b(byte[] r2) throws java.security.cert.CertificateException, java.security.NoSuchAlgorithmException, java.io.IOException, javax.crypto.BadPaddingException, javax.crypto.IllegalBlockSizeException, javax.crypto.NoSuchPaddingException, java.security.InvalidKeyException, java.security.spec.InvalidKeySpecException {
            r1 = this;
            com.loc.bh r0 = r1.a
            if (r0 == 0) goto L8
            byte[] r2 = r0.b(r2)
        L8:
            byte[] r2 = r1.a(r2)
            return r2
    }
}
