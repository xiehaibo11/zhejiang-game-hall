package org.bouncycastle.x509;

public class X509CertStoreSelector extends java.security.cert.X509CertSelector implements org.bouncycastle.util.Selector {
    public X509CertStoreSelector() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.bouncycastle.x509.X509CertStoreSelector getInstance(java.security.cert.X509CertSelector r3) {
            if (r3 == 0) goto L97
            org.bouncycastle.x509.X509CertStoreSelector r0 = new org.bouncycastle.x509.X509CertStoreSelector
            r0.<init>()
            byte[] r1 = r3.getAuthorityKeyIdentifier()
            r0.setAuthorityKeyIdentifier(r1)
            int r1 = r3.getBasicConstraints()
            r0.setBasicConstraints(r1)
            java.security.cert.X509Certificate r1 = r3.getCertificate()
            r0.setCertificate(r1)
            java.util.Date r1 = r3.getCertificateValid()
            r0.setCertificateValid(r1)
            boolean r1 = r3.getMatchAllSubjectAltNames()
            r0.setMatchAllSubjectAltNames(r1)
            java.util.Collection r1 = r3.getPathToNames()     // Catch: java.io.IOException -> L7f
            r0.setPathToNames(r1)     // Catch: java.io.IOException -> L7f
            java.util.Set r1 = r3.getExtendedKeyUsage()     // Catch: java.io.IOException -> L7f
            r0.setExtendedKeyUsage(r1)     // Catch: java.io.IOException -> L7f
            byte[] r1 = r3.getNameConstraints()     // Catch: java.io.IOException -> L7f
            r0.setNameConstraints(r1)     // Catch: java.io.IOException -> L7f
            java.util.Set r1 = r3.getPolicy()     // Catch: java.io.IOException -> L7f
            r0.setPolicy(r1)     // Catch: java.io.IOException -> L7f
            java.lang.String r1 = r3.getSubjectPublicKeyAlgID()     // Catch: java.io.IOException -> L7f
            r0.setSubjectPublicKeyAlgID(r1)     // Catch: java.io.IOException -> L7f
            javax.security.auth.x500.X500Principal r1 = r3.getIssuer()
            r0.setIssuer(r1)
            boolean[] r1 = r3.getKeyUsage()
            r0.setKeyUsage(r1)
            java.util.Date r1 = r3.getPrivateKeyValid()
            r0.setPrivateKeyValid(r1)
            java.math.BigInteger r1 = r3.getSerialNumber()
            r0.setSerialNumber(r1)
            javax.security.auth.x500.X500Principal r1 = r3.getSubject()
            r0.setSubject(r1)
            byte[] r1 = r3.getSubjectKeyIdentifier()
            r0.setSubjectKeyIdentifier(r1)
            java.security.PublicKey r3 = r3.getSubjectPublicKey()
            r0.setSubjectPublicKey(r3)
            return r0
        L7f:
            r3 = move-exception
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "error in passed in selector: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L97:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "cannot create from null selector"
            r3.<init>(r0)
            throw r3
    }

    @Override
    public java.lang.Object clone() {
            r1 = this;
            java.lang.Object r0 = super.clone()
            org.bouncycastle.x509.X509CertStoreSelector r0 = (org.bouncycastle.x509.X509CertStoreSelector) r0
            return r0
    }

    @Override
    public boolean match(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof java.security.cert.X509Certificate
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            java.security.cert.X509Certificate r2 = (java.security.cert.X509Certificate) r2
            boolean r2 = super.match(r2)
            return r2
    }

    @Override
    public boolean match(java.security.cert.Certificate r1) {
            r0 = this;
            boolean r1 = r0.match(r1)
            return r1
    }
}
