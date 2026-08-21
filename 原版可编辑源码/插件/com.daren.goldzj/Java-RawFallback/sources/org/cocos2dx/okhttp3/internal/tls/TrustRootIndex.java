package org.cocos2dx.okhttp3.internal.tls;

public interface TrustRootIndex {
    java.security.cert.X509Certificate findByIssuerAndSignature(java.security.cert.X509Certificate r1);
}
