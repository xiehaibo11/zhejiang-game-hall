package org.bouncycastle.jce.provider;

public class X509StoreLDAPCerts extends org.bouncycastle.x509.X509StoreSpi {
    private org.bouncycastle.x509.util.LDAPStoreHelper helper;

    public X509StoreLDAPCerts() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.util.Collection getCertificatesFromCrossCertificatePairs(org.bouncycastle.x509.X509CertStoreSelector r6) throws org.bouncycastle.util.StoreException {
            r5 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            org.bouncycastle.x509.X509CertPairStoreSelector r1 = new org.bouncycastle.x509.X509CertPairStoreSelector
            r1.<init>()
            r1.setForwardSelector(r6)
            org.bouncycastle.x509.X509CertStoreSelector r6 = new org.bouncycastle.x509.X509CertStoreSelector
            r6.<init>()
            r1.setReverseSelector(r6)
            java.util.HashSet r6 = new java.util.HashSet
            org.bouncycastle.x509.util.LDAPStoreHelper r2 = r5.helper
            java.util.Collection r1 = r2.getCrossCertificatePairs(r1)
            r6.<init>(r1)
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            java.util.HashSet r2 = new java.util.HashSet
            r2.<init>()
            java.util.Iterator r6 = r6.iterator()
        L2e:
            boolean r3 = r6.hasNext()
            if (r3 == 0) goto L55
            java.lang.Object r3 = r6.next()
            org.bouncycastle.x509.X509CertificatePair r3 = (org.bouncycastle.x509.X509CertificatePair) r3
            java.security.cert.X509Certificate r4 = r3.getForward()
            if (r4 == 0) goto L47
            java.security.cert.X509Certificate r4 = r3.getForward()
            r1.add(r4)
        L47:
            java.security.cert.X509Certificate r4 = r3.getReverse()
            if (r4 == 0) goto L2e
            java.security.cert.X509Certificate r3 = r3.getReverse()
            r2.add(r3)
            goto L2e
        L55:
            r0.addAll(r1)
            r0.addAll(r2)
            return r0
    }

    @Override
    public java.util.Collection engineGetMatches(org.bouncycastle.util.Selector r4) throws org.bouncycastle.util.StoreException {
            r3 = this;
            boolean r0 = r4 instanceof org.bouncycastle.x509.X509CertStoreSelector
            if (r0 != 0) goto L7
            java.util.Set r4 = java.util.Collections.EMPTY_SET
            return r4
        L7:
            org.bouncycastle.x509.X509CertStoreSelector r4 = (org.bouncycastle.x509.X509CertStoreSelector) r4
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            int r1 = r4.getBasicConstraints()
            if (r1 <= 0) goto L25
        L14:
            org.bouncycastle.x509.util.LDAPStoreHelper r1 = r3.helper
            java.util.Collection r1 = r1.getCACertificates(r4)
            r0.addAll(r1)
            java.util.Collection r4 = r3.getCertificatesFromCrossCertificatePairs(r4)
        L21:
            r0.addAll(r4)
            goto L3d
        L25:
            int r1 = r4.getBasicConstraints()
            r2 = -2
            if (r1 != r2) goto L33
            org.bouncycastle.x509.util.LDAPStoreHelper r1 = r3.helper
            java.util.Collection r4 = r1.getUserCertificates(r4)
            goto L21
        L33:
            org.bouncycastle.x509.util.LDAPStoreHelper r1 = r3.helper
            java.util.Collection r1 = r1.getUserCertificates(r4)
            r0.addAll(r1)
            goto L14
        L3d:
            return r0
    }

    @Override
    public void engineInit(org.bouncycastle.x509.X509StoreParameters r3) {
            r2 = this;
            boolean r0 = r3 instanceof org.bouncycastle.jce.X509LDAPCertStoreParameters
            if (r0 == 0) goto Le
            org.bouncycastle.x509.util.LDAPStoreHelper r0 = new org.bouncycastle.x509.util.LDAPStoreHelper
            org.bouncycastle.jce.X509LDAPCertStoreParameters r3 = (org.bouncycastle.jce.X509LDAPCertStoreParameters) r3
            r0.<init>(r3)
            r2.helper = r0
            return
        Le:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Initialization parameters must be an instance of "
            r0.append(r1)
            java.lang.Class<org.bouncycastle.jce.X509LDAPCertStoreParameters> r1 = org.bouncycastle.jce.X509LDAPCertStoreParameters.class
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = "."
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
    }
}
