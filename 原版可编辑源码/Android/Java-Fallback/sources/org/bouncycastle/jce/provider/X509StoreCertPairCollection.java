package org.bouncycastle.jce.provider;

public class X509StoreCertPairCollection extends org.bouncycastle.x509.X509StoreSpi {
    private org.bouncycastle.util.CollectionStore _store;

    public X509StoreCertPairCollection() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.util.Collection engineGetMatches(org.bouncycastle.util.Selector r2) {
            r1 = this;
            org.bouncycastle.util.CollectionStore r0 = r1._store
            java.util.Collection r2 = r0.getMatches(r2)
            return r2
    }

    @Override
    public void engineInit(org.bouncycastle.x509.X509StoreParameters r3) {
            r2 = this;
            boolean r0 = r3 instanceof org.bouncycastle.x509.X509CollectionStoreParameters
            if (r0 == 0) goto L12
            org.bouncycastle.util.CollectionStore r0 = new org.bouncycastle.util.CollectionStore
            org.bouncycastle.x509.X509CollectionStoreParameters r3 = (org.bouncycastle.x509.X509CollectionStoreParameters) r3
            java.util.Collection r3 = r3.getCollection()
            r0.<init>(r3)
            r2._store = r0
            return
        L12:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Initialization parameters must be an instance of "
            r0.append(r1)
            java.lang.Class<org.bouncycastle.x509.X509CollectionStoreParameters> r1 = org.bouncycastle.x509.X509CollectionStoreParameters.class
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = "."
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
    }
}
