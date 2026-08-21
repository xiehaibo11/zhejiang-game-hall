package org.bouncycastle.jce.provider;

public class CertStoreCollectionSpi extends java.security.cert.CertStoreSpi {
    private java.security.cert.CollectionCertStoreParameters params;

    public CertStoreCollectionSpi(java.security.cert.CertStoreParameters r4) throws java.security.InvalidAlgorithmParameterException {
            r3 = this;
            r3.<init>(r4)
            boolean r0 = r4 instanceof java.security.cert.CollectionCertStoreParameters
            if (r0 == 0) goto Lc
            java.security.cert.CollectionCertStoreParameters r4 = (java.security.cert.CollectionCertStoreParameters) r4
            r3.params = r4
            return
        Lc:
            java.security.InvalidAlgorithmParameterException r0 = new java.security.InvalidAlgorithmParameterException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "org.bouncycastle.jce.provider.CertStoreCollectionSpi: parameter must be a CollectionCertStoreParameters object\n"
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    public java.util.Collection engineGetCRLs(java.security.cert.CRLSelector r5) throws java.security.cert.CertStoreException {
            r4 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.security.cert.CollectionCertStoreParameters r1 = r4.params
            java.util.Collection r1 = r1.getCollection()
            java.util.Iterator r1 = r1.iterator()
            if (r5 != 0) goto L23
        L11:
            boolean r5 = r1.hasNext()
            if (r5 == 0) goto L3e
            java.lang.Object r5 = r1.next()
            boolean r2 = r5 instanceof java.security.cert.CRL
            if (r2 == 0) goto L11
            r0.add(r5)
            goto L11
        L23:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L3e
            java.lang.Object r2 = r1.next()
            boolean r3 = r2 instanceof java.security.cert.CRL
            if (r3 == 0) goto L23
            r3 = r2
            java.security.cert.CRL r3 = (java.security.cert.CRL) r3
            boolean r3 = r5.match(r3)
            if (r3 == 0) goto L23
            r0.add(r2)
            goto L23
        L3e:
            return r0
    }

    @Override
    public java.util.Collection engineGetCertificates(java.security.cert.CertSelector r5) throws java.security.cert.CertStoreException {
            r4 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.security.cert.CollectionCertStoreParameters r1 = r4.params
            java.util.Collection r1 = r1.getCollection()
            java.util.Iterator r1 = r1.iterator()
            if (r5 != 0) goto L23
        L11:
            boolean r5 = r1.hasNext()
            if (r5 == 0) goto L3e
            java.lang.Object r5 = r1.next()
            boolean r2 = r5 instanceof java.security.cert.Certificate
            if (r2 == 0) goto L11
            r0.add(r5)
            goto L11
        L23:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L3e
            java.lang.Object r2 = r1.next()
            boolean r3 = r2 instanceof java.security.cert.Certificate
            if (r3 == 0) goto L23
            r3 = r2
            java.security.cert.Certificate r3 = (java.security.cert.Certificate) r3
            boolean r3 = r5.match(r3)
            if (r3 == 0) goto L23
            r0.add(r2)
            goto L23
        L3e:
            return r0
    }
}
