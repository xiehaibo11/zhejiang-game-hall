package org.bouncycastle.x509;

public interface X509AttributeCertificate extends java.security.cert.X509Extension {
    void checkValidity() throws java.security.cert.CertificateExpiredException, java.security.cert.CertificateNotYetValidException;

    void checkValidity(java.util.Date r1) throws java.security.cert.CertificateExpiredException, java.security.cert.CertificateNotYetValidException;

    org.bouncycastle.x509.X509Attribute[] getAttributes();

    org.bouncycastle.x509.X509Attribute[] getAttributes(java.lang.String r1);

    byte[] getEncoded() throws java.io.IOException;

    org.bouncycastle.x509.AttributeCertificateHolder getHolder();

    org.bouncycastle.x509.AttributeCertificateIssuer getIssuer();

    boolean[] getIssuerUniqueID();

    java.util.Date getNotAfter();

    java.util.Date getNotBefore();

    java.math.BigInteger getSerialNumber();

    byte[] getSignature();

    int getVersion();

    void verify(java.security.PublicKey r1, java.lang.String r2) throws java.security.cert.CertificateException, java.security.NoSuchAlgorithmException, java.security.InvalidKeyException, java.security.NoSuchProviderException, java.security.SignatureException;
}
