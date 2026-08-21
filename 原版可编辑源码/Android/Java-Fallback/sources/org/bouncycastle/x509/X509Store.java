package org.bouncycastle.x509;

public class X509Store implements org.bouncycastle.util.Store {
    private java.security.Provider _provider;
    private org.bouncycastle.x509.X509StoreSpi _spi;

    private X509Store(java.security.Provider r1, org.bouncycastle.x509.X509StoreSpi r2) {
            r0 = this;
            r0.<init>()
            r0._provider = r1
            r0._spi = r2
            return
    }

    private static org.bouncycastle.x509.X509Store createStore(org.bouncycastle.x509.X509Util.Implementation r1, org.bouncycastle.x509.X509StoreParameters r2) {
            java.lang.Object r0 = r1.getEngine()
            org.bouncycastle.x509.X509StoreSpi r0 = (org.bouncycastle.x509.X509StoreSpi) r0
            r0.engineInit(r2)
            org.bouncycastle.x509.X509Store r2 = new org.bouncycastle.x509.X509Store
            java.security.Provider r1 = r1.getProvider()
            r2.<init>(r1, r0)
            return r2
    }

    public static org.bouncycastle.x509.X509Store getInstance(java.lang.String r1, org.bouncycastle.x509.X509StoreParameters r2) throws org.bouncycastle.x509.NoSuchStoreException {
            java.lang.String r0 = "X509Store"
            org.bouncycastle.x509.X509Util$Implementation r1 = org.bouncycastle.x509.X509Util.getImplementation(r0, r1)     // Catch: java.security.NoSuchAlgorithmException -> Lb
            org.bouncycastle.x509.X509Store r1 = createStore(r1, r2)     // Catch: java.security.NoSuchAlgorithmException -> Lb
            return r1
        Lb:
            r1 = move-exception
            org.bouncycastle.x509.NoSuchStoreException r2 = new org.bouncycastle.x509.NoSuchStoreException
            java.lang.String r1 = r1.getMessage()
            r2.<init>(r1)
            throw r2
    }

    public static org.bouncycastle.x509.X509Store getInstance(java.lang.String r0, org.bouncycastle.x509.X509StoreParameters r1, java.lang.String r2) throws org.bouncycastle.x509.NoSuchStoreException, java.security.NoSuchProviderException {
            java.security.Provider r2 = org.bouncycastle.x509.X509Util.getProvider(r2)
            org.bouncycastle.x509.X509Store r0 = getInstance(r0, r1, r2)
            return r0
    }

    public static org.bouncycastle.x509.X509Store getInstance(java.lang.String r1, org.bouncycastle.x509.X509StoreParameters r2, java.security.Provider r3) throws org.bouncycastle.x509.NoSuchStoreException, java.security.NoSuchProviderException {
            java.lang.String r0 = "X509Store"
            org.bouncycastle.x509.X509Util$Implementation r1 = org.bouncycastle.x509.X509Util.getImplementation(r0, r1, r3)     // Catch: java.security.NoSuchAlgorithmException -> Lb
            org.bouncycastle.x509.X509Store r1 = createStore(r1, r2)     // Catch: java.security.NoSuchAlgorithmException -> Lb
            return r1
        Lb:
            r1 = move-exception
            org.bouncycastle.x509.NoSuchStoreException r2 = new org.bouncycastle.x509.NoSuchStoreException
            java.lang.String r1 = r1.getMessage()
            r2.<init>(r1)
            throw r2
    }

    @Override
    public java.util.Collection getMatches(org.bouncycastle.util.Selector r2) {
            r1 = this;
            org.bouncycastle.x509.X509StoreSpi r0 = r1._spi
            java.util.Collection r2 = r0.engineGetMatches(r2)
            return r2
    }

    public java.security.Provider getProvider() {
            r1 = this;
            java.security.Provider r0 = r1._provider
            return r0
    }
}
