package org.bouncycastle.jce;

public class MultiCertStoreParameters implements java.security.cert.CertStoreParameters {
    private java.util.Collection certStores;
    private boolean searchAllStores;

    public MultiCertStoreParameters(java.util.Collection r2) {
            r1 = this;
            r0 = 1
            r1.<init>(r2, r0)
            return
    }

    public MultiCertStoreParameters(java.util.Collection r1, boolean r2) {
            r0 = this;
            r0.<init>()
            r0.certStores = r1
            r0.searchAllStores = r2
            return
    }

    @Override
    public java.lang.Object clone() {
            r0 = this;
            return r0
    }

    public java.util.Collection getCertStores() {
            r1 = this;
            java.util.Collection r0 = r1.certStores
            return r0
    }

    public boolean getSearchAllStores() {
            r1 = this;
            boolean r0 = r1.searchAllStores
            return r0
    }
}
