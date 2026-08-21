package com.bytedance.pangle.g;

class r extends java.security.cert.X509Certificate {
    private final java.security.cert.X509Certificate a;

    r(java.security.cert.X509Certificate r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public void checkValidity() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            r0.checkValidity()
            return
    }

    @Override
    public void checkValidity(java.util.Date r2) {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            r0.checkValidity(r2)
            return
    }

    @Override
    public int getBasicConstraints() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            int r0 = r0.getBasicConstraints()
            return r0
    }

    @Override
    public java.util.Set<java.lang.String> getCriticalExtensionOIDs() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            java.util.Set r0 = r0.getCriticalExtensionOIDs()
            return r0
    }

    @Override
    public byte[] getEncoded() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            byte[] r0 = r0.getEncoded()
            return r0
    }

    @Override
    public byte[] getExtensionValue(java.lang.String r2) {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            byte[] r2 = r0.getExtensionValue(r2)
            return r2
    }

    @Override
    public java.security.Principal getIssuerDN() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            java.security.Principal r0 = r0.getIssuerDN()
            return r0
    }

    @Override
    public boolean[] getIssuerUniqueID() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            boolean[] r0 = r0.getIssuerUniqueID()
            return r0
    }

    @Override
    public boolean[] getKeyUsage() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            boolean[] r0 = r0.getKeyUsage()
            return r0
    }

    @Override
    public java.util.Set<java.lang.String> getNonCriticalExtensionOIDs() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            java.util.Set r0 = r0.getNonCriticalExtensionOIDs()
            return r0
    }

    @Override
    public java.util.Date getNotAfter() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            java.util.Date r0 = r0.getNotAfter()
            return r0
    }

    @Override
    public java.util.Date getNotBefore() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            java.util.Date r0 = r0.getNotBefore()
            return r0
    }

    @Override
    public java.security.PublicKey getPublicKey() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            java.security.PublicKey r0 = r0.getPublicKey()
            return r0
    }

    @Override
    public java.math.BigInteger getSerialNumber() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            java.math.BigInteger r0 = r0.getSerialNumber()
            return r0
    }

    @Override
    public java.lang.String getSigAlgName() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            java.lang.String r0 = r0.getSigAlgName()
            return r0
    }

    @Override
    public java.lang.String getSigAlgOID() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            java.lang.String r0 = r0.getSigAlgOID()
            return r0
    }

    @Override
    public byte[] getSigAlgParams() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            byte[] r0 = r0.getSigAlgParams()
            return r0
    }

    @Override
    public byte[] getSignature() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            byte[] r0 = r0.getSignature()
            return r0
    }

    @Override
    public java.security.Principal getSubjectDN() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            java.security.Principal r0 = r0.getSubjectDN()
            return r0
    }

    @Override
    public boolean[] getSubjectUniqueID() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            boolean[] r0 = r0.getSubjectUniqueID()
            return r0
    }

    @Override
    public byte[] getTBSCertificate() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            byte[] r0 = r0.getTBSCertificate()
            return r0
    }

    @Override
    public int getVersion() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            int r0 = r0.getVersion()
            return r0
    }

    @Override
    public boolean hasUnsupportedCriticalExtension() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            boolean r0 = r0.hasUnsupportedCriticalExtension()
            return r0
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void verify(java.security.PublicKey r2) {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            r0.verify(r2)
            return
    }

    @Override
    public void verify(java.security.PublicKey r2, java.lang.String r3) {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.a
            r0.verify(r2, r3)
            return
    }
}
