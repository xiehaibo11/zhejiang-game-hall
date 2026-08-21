package okhttp3;

public final class Handshake {
    private final okhttp3.CipherSuite cipherSuite;
    private final java.util.List<java.security.cert.Certificate> localCertificates;
    private final java.util.List<java.security.cert.Certificate> peerCertificates;
    private final okhttp3.TlsVersion tlsVersion;

    private Handshake(okhttp3.TlsVersion r1, okhttp3.CipherSuite r2, java.util.List<java.security.cert.Certificate> r3, java.util.List<java.security.cert.Certificate> r4) {
            r0 = this;
            r0.<init>()
            r0.tlsVersion = r1
            r0.cipherSuite = r2
            r0.peerCertificates = r3
            r0.localCertificates = r4
            return
    }

    public static okhttp3.Handshake get(javax.net.ssl.SSLSession r4) throws java.io.IOException {
            java.lang.String r0 = r4.getCipherSuite()
            if (r0 == 0) goto L62
            java.lang.String r1 = "SSL_NULL_WITH_NULL_NULL"
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L5a
            okhttp3.CipherSuite r0 = okhttp3.CipherSuite.forJavaName(r0)
            java.lang.String r1 = r4.getProtocol()
            if (r1 == 0) goto L52
            java.lang.String r2 = "NONE"
            boolean r2 = r2.equals(r1)
            if (r2 != 0) goto L4a
            okhttp3.TlsVersion r1 = okhttp3.TlsVersion.forJavaName(r1)
            java.security.cert.Certificate[] r2 = r4.getPeerCertificates()     // Catch: javax.net.ssl.SSLPeerUnverifiedException -> L29
            goto L2a
        L29:
            r2 = 0
        L2a:
            if (r2 == 0) goto L31
            java.util.List r2 = okhttp3.internal.Util.immutableList(r2)
            goto L35
        L31:
            java.util.List r2 = java.util.Collections.emptyList()
        L35:
            java.security.cert.Certificate[] r4 = r4.getLocalCertificates()
            if (r4 == 0) goto L40
            java.util.List r4 = okhttp3.internal.Util.immutableList(r4)
            goto L44
        L40:
            java.util.List r4 = java.util.Collections.emptyList()
        L44:
            okhttp3.Handshake r3 = new okhttp3.Handshake
            r3.<init>(r1, r0, r2, r4)
            return r3
        L4a:
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r0 = "tlsVersion == NONE"
            r4.<init>(r0)
            throw r4
        L52:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r0 = "tlsVersion == null"
            r4.<init>(r0)
            throw r4
        L5a:
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r0 = "cipherSuite == SSL_NULL_WITH_NULL_NULL"
            r4.<init>(r0)
            throw r4
        L62:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r0 = "cipherSuite == null"
            r4.<init>(r0)
            throw r4
    }

    public static okhttp3.Handshake get(okhttp3.TlsVersion r1, okhttp3.CipherSuite r2, java.util.List<java.security.cert.Certificate> r3, java.util.List<java.security.cert.Certificate> r4) {
            if (r1 == 0) goto L1a
            if (r2 == 0) goto L12
            okhttp3.Handshake r0 = new okhttp3.Handshake
            java.util.List r3 = okhttp3.internal.Util.immutableList(r3)
            java.util.List r4 = okhttp3.internal.Util.immutableList(r4)
            r0.<init>(r1, r2, r3, r4)
            return r0
        L12:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "cipherSuite == null"
            r1.<init>(r2)
            throw r1
        L1a:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "tlsVersion == null"
            r1.<init>(r2)
            throw r1
    }

    public okhttp3.CipherSuite cipherSuite() {
            r1 = this;
            okhttp3.CipherSuite r0 = r1.cipherSuite
            return r0
    }

    public boolean equals(@javax.annotation.Nullable java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof okhttp3.Handshake
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            okhttp3.Handshake r4 = (okhttp3.Handshake) r4
            okhttp3.TlsVersion r0 = r3.tlsVersion
            okhttp3.TlsVersion r2 = r4.tlsVersion
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L31
            okhttp3.CipherSuite r0 = r3.cipherSuite
            okhttp3.CipherSuite r2 = r4.cipherSuite
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L31
            java.util.List<java.security.cert.Certificate> r0 = r3.peerCertificates
            java.util.List<java.security.cert.Certificate> r2 = r4.peerCertificates
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L31
            java.util.List<java.security.cert.Certificate> r0 = r3.localCertificates
            java.util.List<java.security.cert.Certificate> r4 = r4.localCertificates
            boolean r4 = r0.equals(r4)
            if (r4 == 0) goto L31
            r1 = 1
        L31:
            return r1
    }

    public int hashCode() {
            r2 = this;
            okhttp3.TlsVersion r0 = r2.tlsVersion
            int r0 = r0.hashCode()
            r1 = 527(0x20f, float:7.38E-43)
            int r1 = r1 + r0
            int r1 = r1 * 31
            okhttp3.CipherSuite r0 = r2.cipherSuite
            int r0 = r0.hashCode()
            int r1 = r1 + r0
            int r1 = r1 * 31
            java.util.List<java.security.cert.Certificate> r0 = r2.peerCertificates
            int r0 = r0.hashCode()
            int r1 = r1 + r0
            int r1 = r1 * 31
            java.util.List<java.security.cert.Certificate> r0 = r2.localCertificates
            int r0 = r0.hashCode()
            int r1 = r1 + r0
            return r1
    }

    public java.util.List<java.security.cert.Certificate> localCertificates() {
            r1 = this;
            java.util.List<java.security.cert.Certificate> r0 = r1.localCertificates
            return r0
    }

    @javax.annotation.Nullable
    public java.security.Principal localPrincipal() {
            r2 = this;
            java.util.List<java.security.cert.Certificate> r0 = r2.localCertificates
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L16
            java.util.List<java.security.cert.Certificate> r0 = r2.localCertificates
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            java.security.cert.X509Certificate r0 = (java.security.cert.X509Certificate) r0
            javax.security.auth.x500.X500Principal r0 = r0.getSubjectX500Principal()
            goto L17
        L16:
            r0 = 0
        L17:
            return r0
    }

    public java.util.List<java.security.cert.Certificate> peerCertificates() {
            r1 = this;
            java.util.List<java.security.cert.Certificate> r0 = r1.peerCertificates
            return r0
    }

    @javax.annotation.Nullable
    public java.security.Principal peerPrincipal() {
            r2 = this;
            java.util.List<java.security.cert.Certificate> r0 = r2.peerCertificates
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L16
            java.util.List<java.security.cert.Certificate> r0 = r2.peerCertificates
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            java.security.cert.X509Certificate r0 = (java.security.cert.X509Certificate) r0
            javax.security.auth.x500.X500Principal r0 = r0.getSubjectX500Principal()
            goto L17
        L16:
            r0 = 0
        L17:
            return r0
    }

    public okhttp3.TlsVersion tlsVersion() {
            r1 = this;
            okhttp3.TlsVersion r0 = r1.tlsVersion
            return r0
    }
}
