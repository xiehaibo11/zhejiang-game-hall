package org.bouncycastle.x509;

public abstract class PKIXAttrCertChecker implements java.lang.Cloneable {
    public PKIXAttrCertChecker() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void check(org.bouncycastle.x509.X509AttributeCertificate r1, java.security.cert.CertPath r2, java.security.cert.CertPath r3, java.util.Collection r4) throws java.security.cert.CertPathValidatorException;

    public abstract java.lang.Object clone();

    public abstract java.util.Set getSupportedExtensions();
}
