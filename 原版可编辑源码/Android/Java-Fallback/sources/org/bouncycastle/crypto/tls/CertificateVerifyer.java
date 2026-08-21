package org.bouncycastle.crypto.tls;

public interface CertificateVerifyer {
    boolean isValid(org.bouncycastle.asn1.x509.X509CertificateStructure[] r1);
}
