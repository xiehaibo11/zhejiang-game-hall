package org.cocos2dx.okhttp3.internal.tls;

public abstract class CertificateChainCleaner {
    public CertificateChainCleaner() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.cocos2dx.okhttp3.internal.tls.CertificateChainCleaner get(javax.net.ssl.X509TrustManager r1) {
            org.cocos2dx.okhttp3.internal.platform.Platform r0 = org.cocos2dx.okhttp3.internal.platform.Platform.get()
            org.cocos2dx.okhttp3.internal.tls.CertificateChainCleaner r1 = r0.buildCertificateChainCleaner(r1)
            return r1
    }

    public static org.cocos2dx.okhttp3.internal.tls.CertificateChainCleaner get(java.security.cert.X509Certificate... r2) {
            org.cocos2dx.okhttp3.internal.tls.BasicCertificateChainCleaner r0 = new org.cocos2dx.okhttp3.internal.tls.BasicCertificateChainCleaner
            org.cocos2dx.okhttp3.internal.tls.BasicTrustRootIndex r1 = new org.cocos2dx.okhttp3.internal.tls.BasicTrustRootIndex
            r1.<init>(r2)
            r0.<init>(r1)
            return r0
    }

    public abstract java.util.List<java.security.cert.Certificate> clean(java.util.List<java.security.cert.Certificate> r1, java.lang.String r2) throws javax.net.ssl.SSLPeerUnverifiedException;
}
