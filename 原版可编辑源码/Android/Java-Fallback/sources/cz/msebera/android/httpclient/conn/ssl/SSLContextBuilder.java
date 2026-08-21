package cz.msebera.android.httpclient.conn.ssl;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public class SSLContextBuilder {
    static final java.lang.String SSL = "SSL";
    static final java.lang.String TLS = "TLS";
    private java.util.Set<javax.net.ssl.KeyManager> keymanagers;
    private java.lang.String protocol;
    private java.security.SecureRandom secureRandom;
    private java.util.Set<javax.net.ssl.TrustManager> trustmanagers;

    static class KeyManagerDelegate implements javax.net.ssl.X509KeyManager {
        private final cz.msebera.android.httpclient.conn.ssl.PrivateKeyStrategy aliasStrategy;
        private final javax.net.ssl.X509KeyManager keyManager;

        KeyManagerDelegate(javax.net.ssl.X509KeyManager r1, cz.msebera.android.httpclient.conn.ssl.PrivateKeyStrategy r2) {
                r0 = this;
                r0.<init>()
                r0.keyManager = r1
                r0.aliasStrategy = r2
                return
        }

        @Override
        public java.lang.String chooseClientAlias(java.lang.String[] r12, java.security.Principal[] r13, java.net.Socket r14) {
                r11 = this;
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                int r1 = r12.length
                r2 = 0
                r3 = 0
            L8:
                if (r3 >= r1) goto L2e
                r4 = r12[r3]
                javax.net.ssl.X509KeyManager r5 = r11.keyManager
                java.lang.String[] r5 = r5.getClientAliases(r4, r13)
                if (r5 == 0) goto L2b
                int r6 = r5.length
                r7 = 0
            L16:
                if (r7 >= r6) goto L2b
                r8 = r5[r7]
                cz.msebera.android.httpclient.conn.ssl.PrivateKeyDetails r9 = new cz.msebera.android.httpclient.conn.ssl.PrivateKeyDetails
                javax.net.ssl.X509KeyManager r10 = r11.keyManager
                java.security.cert.X509Certificate[] r10 = r10.getCertificateChain(r8)
                r9.<init>(r4, r10)
                r0.put(r8, r9)
                int r7 = r7 + 1
                goto L16
            L2b:
                int r3 = r3 + 1
                goto L8
            L2e:
                cz.msebera.android.httpclient.conn.ssl.PrivateKeyStrategy r12 = r11.aliasStrategy
                java.lang.String r12 = r12.chooseAlias(r0, r14)
                return r12
        }

        @Override
        public java.lang.String chooseServerAlias(java.lang.String r7, java.security.Principal[] r8, java.net.Socket r9) {
                r6 = this;
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                javax.net.ssl.X509KeyManager r1 = r6.keyManager
                java.lang.String[] r8 = r1.getServerAliases(r7, r8)
                if (r8 == 0) goto L24
                int r1 = r8.length
                r2 = 0
            Lf:
                if (r2 >= r1) goto L24
                r3 = r8[r2]
                cz.msebera.android.httpclient.conn.ssl.PrivateKeyDetails r4 = new cz.msebera.android.httpclient.conn.ssl.PrivateKeyDetails
                javax.net.ssl.X509KeyManager r5 = r6.keyManager
                java.security.cert.X509Certificate[] r5 = r5.getCertificateChain(r3)
                r4.<init>(r7, r5)
                r0.put(r3, r4)
                int r2 = r2 + 1
                goto Lf
            L24:
                cz.msebera.android.httpclient.conn.ssl.PrivateKeyStrategy r7 = r6.aliasStrategy
                java.lang.String r7 = r7.chooseAlias(r0, r9)
                return r7
        }

        @Override
        public java.security.cert.X509Certificate[] getCertificateChain(java.lang.String r2) {
                r1 = this;
                javax.net.ssl.X509KeyManager r0 = r1.keyManager
                java.security.cert.X509Certificate[] r2 = r0.getCertificateChain(r2)
                return r2
        }

        @Override
        public java.lang.String[] getClientAliases(java.lang.String r2, java.security.Principal[] r3) {
                r1 = this;
                javax.net.ssl.X509KeyManager r0 = r1.keyManager
                java.lang.String[] r2 = r0.getClientAliases(r2, r3)
                return r2
        }

        @Override
        public java.security.PrivateKey getPrivateKey(java.lang.String r2) {
                r1 = this;
                javax.net.ssl.X509KeyManager r0 = r1.keyManager
                java.security.PrivateKey r2 = r0.getPrivateKey(r2)
                return r2
        }

        @Override
        public java.lang.String[] getServerAliases(java.lang.String r2, java.security.Principal[] r3) {
                r1 = this;
                javax.net.ssl.X509KeyManager r0 = r1.keyManager
                java.lang.String[] r2 = r0.getServerAliases(r2, r3)
                return r2
        }
    }

    static class TrustManagerDelegate implements javax.net.ssl.X509TrustManager {
        private final javax.net.ssl.X509TrustManager trustManager;
        private final cz.msebera.android.httpclient.conn.ssl.TrustStrategy trustStrategy;

        TrustManagerDelegate(javax.net.ssl.X509TrustManager r1, cz.msebera.android.httpclient.conn.ssl.TrustStrategy r2) {
                r0 = this;
                r0.<init>()
                r0.trustManager = r1
                r0.trustStrategy = r2
                return
        }

        @Override
        public void checkClientTrusted(java.security.cert.X509Certificate[] r2, java.lang.String r3) throws java.security.cert.CertificateException {
                r1 = this;
                javax.net.ssl.X509TrustManager r0 = r1.trustManager
                r0.checkClientTrusted(r2, r3)
                return
        }

        @Override
        public void checkServerTrusted(java.security.cert.X509Certificate[] r2, java.lang.String r3) throws java.security.cert.CertificateException {
                r1 = this;
                cz.msebera.android.httpclient.conn.ssl.TrustStrategy r0 = r1.trustStrategy
                boolean r0 = r0.isTrusted(r2, r3)
                if (r0 != 0) goto Ld
                javax.net.ssl.X509TrustManager r0 = r1.trustManager
                r0.checkServerTrusted(r2, r3)
            Ld:
                return
        }

        @Override
        public java.security.cert.X509Certificate[] getAcceptedIssuers() {
                r1 = this;
                javax.net.ssl.X509TrustManager r0 = r1.trustManager
                java.security.cert.X509Certificate[] r0 = r0.getAcceptedIssuers()
                return r0
        }
    }

    public SSLContextBuilder() {
            r1 = this;
            r1.<init>()
            java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
            r0.<init>()
            r1.keymanagers = r0
            java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
            r0.<init>()
            r1.trustmanagers = r0
            return
    }

    public javax.net.ssl.SSLContext build() throws java.security.NoSuchAlgorithmException, java.security.KeyManagementException {
            r4 = this;
            java.lang.String r0 = r4.protocol
            if (r0 == 0) goto L5
            goto L7
        L5:
            java.lang.String r0 = "TLS"
        L7:
            javax.net.ssl.SSLContext r0 = javax.net.ssl.SSLContext.getInstance(r0)
            java.util.Set<javax.net.ssl.KeyManager> r1 = r4.keymanagers
            boolean r1 = r1.isEmpty()
            r2 = 0
            if (r1 != 0) goto L23
            java.util.Set<javax.net.ssl.KeyManager> r1 = r4.keymanagers
            int r3 = r1.size()
            javax.net.ssl.KeyManager[] r3 = new javax.net.ssl.KeyManager[r3]
            java.lang.Object[] r1 = r1.toArray(r3)
            javax.net.ssl.KeyManager[] r1 = (javax.net.ssl.KeyManager[]) r1
            goto L24
        L23:
            r1 = r2
        L24:
            java.util.Set<javax.net.ssl.TrustManager> r3 = r4.trustmanagers
            boolean r3 = r3.isEmpty()
            if (r3 != 0) goto L3a
            java.util.Set<javax.net.ssl.TrustManager> r2 = r4.trustmanagers
            int r3 = r2.size()
            javax.net.ssl.TrustManager[] r3 = new javax.net.ssl.TrustManager[r3]
            java.lang.Object[] r2 = r2.toArray(r3)
            javax.net.ssl.TrustManager[] r2 = (javax.net.ssl.TrustManager[]) r2
        L3a:
            java.security.SecureRandom r3 = r4.secureRandom
            r0.init(r1, r2, r3)
            return r0
    }

    public cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder loadKeyMaterial(java.security.KeyStore r2, char[] r3) throws java.security.NoSuchAlgorithmException, java.security.KeyStoreException, java.security.UnrecoverableKeyException {
            r1 = this;
            r0 = 0
            r1.loadKeyMaterial(r2, r3, r0)
            return r1
    }

    public cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder loadKeyMaterial(java.security.KeyStore r4, char[] r5, cz.msebera.android.httpclient.conn.ssl.PrivateKeyStrategy r6) throws java.security.NoSuchAlgorithmException, java.security.KeyStoreException, java.security.UnrecoverableKeyException {
            r3 = this;
            java.lang.String r0 = javax.net.ssl.KeyManagerFactory.getDefaultAlgorithm()
            javax.net.ssl.KeyManagerFactory r0 = javax.net.ssl.KeyManagerFactory.getInstance(r0)
            r0.init(r4, r5)
            javax.net.ssl.KeyManager[] r4 = r0.getKeyManagers()
            if (r4 == 0) goto L37
            r5 = 0
            if (r6 == 0) goto L2a
            r0 = 0
        L15:
            int r1 = r4.length
            if (r0 >= r1) goto L2a
            r1 = r4[r0]
            boolean r2 = r1 instanceof javax.net.ssl.X509KeyManager
            if (r2 == 0) goto L27
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder$KeyManagerDelegate r2 = new cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder$KeyManagerDelegate
            javax.net.ssl.X509KeyManager r1 = (javax.net.ssl.X509KeyManager) r1
            r2.<init>(r1, r6)
            r4[r0] = r2
        L27:
            int r0 = r0 + 1
            goto L15
        L2a:
            int r6 = r4.length
        L2b:
            if (r5 >= r6) goto L37
            r0 = r4[r5]
            java.util.Set<javax.net.ssl.KeyManager> r1 = r3.keymanagers
            r1.add(r0)
            int r5 = r5 + 1
            goto L2b
        L37:
            return r3
    }

    public cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder loadTrustMaterial(java.security.KeyStore r2) throws java.security.NoSuchAlgorithmException, java.security.KeyStoreException {
            r1 = this;
            r0 = 0
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r2 = r1.loadTrustMaterial(r2, r0)
            return r2
    }

    public cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder loadTrustMaterial(java.security.KeyStore r5, cz.msebera.android.httpclient.conn.ssl.TrustStrategy r6) throws java.security.NoSuchAlgorithmException, java.security.KeyStoreException {
            r4 = this;
            java.lang.String r0 = javax.net.ssl.TrustManagerFactory.getDefaultAlgorithm()
            javax.net.ssl.TrustManagerFactory r0 = javax.net.ssl.TrustManagerFactory.getInstance(r0)
            r0.init(r5)
            javax.net.ssl.TrustManager[] r5 = r0.getTrustManagers()
            if (r5 == 0) goto L37
            r0 = 0
            if (r6 == 0) goto L2a
            r1 = 0
        L15:
            int r2 = r5.length
            if (r1 >= r2) goto L2a
            r2 = r5[r1]
            boolean r3 = r2 instanceof javax.net.ssl.X509TrustManager
            if (r3 == 0) goto L27
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder$TrustManagerDelegate r3 = new cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder$TrustManagerDelegate
            javax.net.ssl.X509TrustManager r2 = (javax.net.ssl.X509TrustManager) r2
            r3.<init>(r2, r6)
            r5[r1] = r3
        L27:
            int r1 = r1 + 1
            goto L15
        L2a:
            int r6 = r5.length
        L2b:
            if (r0 >= r6) goto L37
            r1 = r5[r0]
            java.util.Set<javax.net.ssl.TrustManager> r2 = r4.trustmanagers
            r2.add(r1)
            int r0 = r0 + 1
            goto L2b
        L37:
            return r4
    }

    public cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder setSecureRandom(java.security.SecureRandom r1) {
            r0 = this;
            r0.secureRandom = r1
            return r0
    }

    public cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder useProtocol(java.lang.String r1) {
            r0 = this;
            r0.protocol = r1
            return r0
    }

    public cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder useSSL() {
            r1 = this;
            java.lang.String r0 = "SSL"
            r1.protocol = r0
            return r1
    }

    public cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder useTLS() {
            r1 = this;
            java.lang.String r0 = "TLS"
            r1.protocol = r0
            return r1
    }
}
