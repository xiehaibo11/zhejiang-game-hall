package com.mbridge.msdk.thrid.okhttp.internal.tls;

public interface TrustRootIndex {
    java.security.cert.X509Certificate findByIssuerAndSignature(java.security.cert.X509Certificate r1);
}
