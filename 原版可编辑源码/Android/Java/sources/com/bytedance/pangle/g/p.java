package com.bytedance.pangle.g;

import java.security.cert.CertificateEncodingException;
import java.security.cert.X509Certificate;
import java.util.Arrays;

final class p extends r {
    private final byte[] a;
    private int b;

    p(X509Certificate x509Certificate, byte[] bArr) {
        super(x509Certificate);
        this.b = -1;
        this.a = bArr;
    }

    @Override
    public final byte[] getEncoded() {
        return this.a;
    }

    @Override
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof p)) {
            return false;
        }
        try {
            return Arrays.equals(getEncoded(), ((p) obj).getEncoded());
        } catch (CertificateEncodingException unused) {
            return false;
        }
    }

    @Override
    public final int hashCode() {
        if (this.b == -1) {
            try {
                this.b = Arrays.hashCode(getEncoded());
            } catch (CertificateEncodingException unused) {
                this.b = 0;
            }
        }
        return this.b;
    }
}
