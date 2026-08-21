package org.bouncycastle.jce.provider;

public class X509StoreLDAPCertPairs extends org.bouncycastle.x509.X509StoreSpi {
    private org.bouncycastle.x509.util.LDAPStoreHelper helper;

    public X509StoreLDAPCertPairs() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.util.Collection engineGetMatches(org.bouncycastle.util.Selector r3) throws org.bouncycastle.util.StoreException {
            r2 = this;
            boolean r0 = r3 instanceof org.bouncycastle.x509.X509CertPairStoreSelector
            if (r0 != 0) goto L7
            java.util.Set r3 = java.util.Collections.EMPTY_SET
            return r3
        L7:
            org.bouncycastle.x509.X509CertPairStoreSelector r3 = (org.bouncycastle.x509.X509CertPairStoreSelector) r3
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            org.bouncycastle.x509.util.LDAPStoreHelper r1 = r2.helper
            java.util.Collection r3 = r1.getCrossCertificatePairs(r3)
            r0.addAll(r3)
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
