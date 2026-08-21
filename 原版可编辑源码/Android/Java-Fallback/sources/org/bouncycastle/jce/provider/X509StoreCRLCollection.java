package org.bouncycastle.jce.provider;

public class X509StoreCRLCollection extends org.bouncycastle.x509.X509StoreSpi {
    private org.bouncycastle.util.CollectionStore _store;

    public X509StoreCRLCollection() {
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
    public void engineInit(org.bouncycastle.x509.X509StoreParameters r2) {
            r1 = this;
            boolean r0 = r2 instanceof org.bouncycastle.x509.X509CollectionStoreParameters
            if (r0 == 0) goto L12
            org.bouncycastle.util.CollectionStore r0 = new org.bouncycastle.util.CollectionStore
            org.bouncycastle.x509.X509CollectionStoreParameters r2 = (org.bouncycastle.x509.X509CollectionStoreParameters) r2
            java.util.Collection r2 = r2.getCollection()
            r0.<init>(r2)
            r1._store = r0
            return
        L12:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r2 = r2.toString()
            r0.<init>(r2)
            throw r0
    }
}
