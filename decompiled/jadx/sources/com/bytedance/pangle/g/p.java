package com.bytedance.pangle.g;

import java.security.cert.CertificateEncodingException;
import java.security.cert.X509Certificate;
import java.util.Arrays;

/* JADX INFO: loaded from: classes.dex */
final class p extends r {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final byte[] f1547a;
    private int b;

    p(X509Certificate x509Certificate, byte[] bArr) {
        super(x509Certificate);
        this.b = -1;
        this.f1547a = bArr;
    }

    @Override // com.bytedance.pangle.g.r, java.security.cert.Certificate
    public final byte[] getEncoded() {
        return this.f1547a;
    }

    @Override // java.security.cert.Certificate
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

    @Override // java.security.cert.Certificate
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
