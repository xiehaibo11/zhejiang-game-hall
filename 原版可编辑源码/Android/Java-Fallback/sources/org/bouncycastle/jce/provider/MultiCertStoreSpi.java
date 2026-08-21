package org.bouncycastle.jce.provider;

public class MultiCertStoreSpi extends java.security.cert.CertStoreSpi {
    private org.bouncycastle.jce.MultiCertStoreParameters params;

    public MultiCertStoreSpi(java.security.cert.CertStoreParameters r4) throws java.security.InvalidAlgorithmParameterException {
            r3 = this;
            r3.<init>(r4)
            boolean r0 = r4 instanceof org.bouncycastle.jce.MultiCertStoreParameters
            if (r0 == 0) goto Lc
            org.bouncycastle.jce.MultiCertStoreParameters r4 = (org.bouncycastle.jce.MultiCertStoreParameters) r4
            r3.params = r4
            return
        Lc:
            java.security.InvalidAlgorithmParameterException r0 = new java.security.InvalidAlgorithmParameterException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "org.bouncycastle.jce.provider.MultiCertStoreSpi: parameter must be a MultiCertStoreParameters object\n"
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    public java.util.Collection engineGetCRLs(java.security.cert.CRLSelector r6) throws java.security.cert.CertStoreException {
            r5 = this;
            org.bouncycastle.jce.MultiCertStoreParameters r0 = r5.params
            boolean r0 = r0.getSearchAllStores()
            org.bouncycastle.jce.MultiCertStoreParameters r1 = r5.params
            java.util.Collection r1 = r1.getCertStores()
            java.util.Iterator r1 = r1.iterator()
            if (r0 == 0) goto L18
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            goto L1a
        L18:
            java.util.List r2 = java.util.Collections.EMPTY_LIST
        L1a:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto L37
            java.lang.Object r3 = r1.next()
            java.security.cert.CertStore r3 = (java.security.cert.CertStore) r3
            java.util.Collection r3 = r3.getCRLs(r6)
            if (r0 == 0) goto L30
            r2.addAll(r3)
            goto L1a
        L30:
            boolean r4 = r3.isEmpty()
            if (r4 != 0) goto L1a
            return r3
        L37:
            return r2
    }

    @Override
    public java.util.Collection engineGetCertificates(java.security.cert.CertSelector r6) throws java.security.cert.CertStoreException {
            r5 = this;
            org.bouncycastle.jce.MultiCertStoreParameters r0 = r5.params
            boolean r0 = r0.getSearchAllStores()
            org.bouncycastle.jce.MultiCertStoreParameters r1 = r5.params
            java.util.Collection r1 = r1.getCertStores()
            java.util.Iterator r1 = r1.iterator()
            if (r0 == 0) goto L18
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            goto L1a
        L18:
            java.util.List r2 = java.util.Collections.EMPTY_LIST
        L1a:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto L37
            java.lang.Object r3 = r1.next()
            java.security.cert.CertStore r3 = (java.security.cert.CertStore) r3
            java.util.Collection r3 = r3.getCertificates(r6)
            if (r0 == 0) goto L30
            r2.addAll(r3)
            goto L1a
        L30:
            boolean r4 = r3.isEmpty()
            if (r4 != 0) goto L1a
            return r3
        L37:
            return r2
    }
}
