package org.bouncycastle.x509;

public class X509CertPairStoreSelector implements org.bouncycastle.util.Selector {
    private org.bouncycastle.x509.X509CertificatePair certPair;
    private org.bouncycastle.x509.X509CertStoreSelector forwardSelector;
    private org.bouncycastle.x509.X509CertStoreSelector reverseSelector;

    public X509CertPairStoreSelector() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.Object clone() {
            r2 = this;
            org.bouncycastle.x509.X509CertPairStoreSelector r0 = new org.bouncycastle.x509.X509CertPairStoreSelector
            r0.<init>()
            org.bouncycastle.x509.X509CertificatePair r1 = r2.certPair
            r0.certPair = r1
            org.bouncycastle.x509.X509CertStoreSelector r1 = r2.forwardSelector
            if (r1 == 0) goto L16
            java.lang.Object r1 = r1.clone()
            org.bouncycastle.x509.X509CertStoreSelector r1 = (org.bouncycastle.x509.X509CertStoreSelector) r1
            r0.setForwardSelector(r1)
        L16:
            org.bouncycastle.x509.X509CertStoreSelector r1 = r2.reverseSelector
            if (r1 == 0) goto L23
            java.lang.Object r1 = r1.clone()
            org.bouncycastle.x509.X509CertStoreSelector r1 = (org.bouncycastle.x509.X509CertStoreSelector) r1
            r0.setReverseSelector(r1)
        L23:
            return r0
    }

    public org.bouncycastle.x509.X509CertificatePair getCertPair() {
            r1 = this;
            org.bouncycastle.x509.X509CertificatePair r0 = r1.certPair
            return r0
    }

    public org.bouncycastle.x509.X509CertStoreSelector getForwardSelector() {
            r1 = this;
            org.bouncycastle.x509.X509CertStoreSelector r0 = r1.forwardSelector
            return r0
    }

    public org.bouncycastle.x509.X509CertStoreSelector getReverseSelector() {
            r1 = this;
            org.bouncycastle.x509.X509CertStoreSelector r0 = r1.reverseSelector
            return r0
    }

    @Override
    public boolean match(java.lang.Object r5) {
            r4 = this;
            r0 = 0
            boolean r1 = r5 instanceof org.bouncycastle.x509.X509CertificatePair     // Catch: java.lang.Exception -> L38
            if (r1 != 0) goto L6
            return r0
        L6:
            r1 = r5
            org.bouncycastle.x509.X509CertificatePair r1 = (org.bouncycastle.x509.X509CertificatePair) r1     // Catch: java.lang.Exception -> L38
            org.bouncycastle.x509.X509CertStoreSelector r2 = r4.forwardSelector     // Catch: java.lang.Exception -> L38
            if (r2 == 0) goto L1a
            org.bouncycastle.x509.X509CertStoreSelector r2 = r4.forwardSelector     // Catch: java.lang.Exception -> L38
            java.security.cert.X509Certificate r3 = r1.getForward()     // Catch: java.lang.Exception -> L38
            boolean r2 = r2.match(r3)     // Catch: java.lang.Exception -> L38
            if (r2 != 0) goto L1a
            return r0
        L1a:
            org.bouncycastle.x509.X509CertStoreSelector r2 = r4.reverseSelector     // Catch: java.lang.Exception -> L38
            if (r2 == 0) goto L2b
            org.bouncycastle.x509.X509CertStoreSelector r2 = r4.reverseSelector     // Catch: java.lang.Exception -> L38
            java.security.cert.X509Certificate r1 = r1.getReverse()     // Catch: java.lang.Exception -> L38
            boolean r1 = r2.match(r1)     // Catch: java.lang.Exception -> L38
            if (r1 != 0) goto L2b
            return r0
        L2b:
            org.bouncycastle.x509.X509CertificatePair r1 = r4.certPair     // Catch: java.lang.Exception -> L38
            if (r1 == 0) goto L36
            org.bouncycastle.x509.X509CertificatePair r1 = r4.certPair     // Catch: java.lang.Exception -> L38
            boolean r5 = r1.equals(r5)     // Catch: java.lang.Exception -> L38
            return r5
        L36:
            r5 = 1
            return r5
        L38:
            return r0
    }

    public void setCertPair(org.bouncycastle.x509.X509CertificatePair r1) {
            r0 = this;
            r0.certPair = r1
            return
    }

    public void setForwardSelector(org.bouncycastle.x509.X509CertStoreSelector r1) {
            r0 = this;
            r0.forwardSelector = r1
            return
    }

    public void setReverseSelector(org.bouncycastle.x509.X509CertStoreSelector r1) {
            r0 = this;
            r0.reverseSelector = r1
            return
    }
}
