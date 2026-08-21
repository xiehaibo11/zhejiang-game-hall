package cz.msebera.android.httpclient.ssl;

public interface TrustStrategy {
    boolean isTrusted(java.security.cert.X509Certificate[] r1, java.lang.String r2) throws java.security.cert.CertificateException;
}
