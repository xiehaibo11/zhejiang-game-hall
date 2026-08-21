package cz.msebera.android.httpclient.ssl;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class SSLContextBuilder {
    static final java.lang.String TLS = "TLS";
    private final java.util.Set<javax.net.ssl.KeyManager> keymanagers;
    private java.lang.String protocol;
    private java.security.SecureRandom secureRandom;
    private final java.util.Set<javax.net.ssl.TrustManager> trustmanagers;

    static class KeyManagerDelegate extends javax.net.ssl.X509ExtendedKeyManager {
        private final cz.msebera.android.httpclient.ssl.PrivateKeyStrategy aliasStrategy;
        private final javax.net.ssl.X509ExtendedKeyManager keyManager;

        KeyManagerDelegate(javax.net.ssl.X509ExtendedKeyManager r1, cz.msebera.android.httpclient.ssl.PrivateKeyStrategy r2) {
                r0 = this;
                r0.<init>()
                r0.keyManager = r1
                r0.aliasStrategy = r2
                return
        }

        @Override
        public java.lang.String chooseClientAlias(java.lang.String[] r1, java.security.Principal[] r2, java.net.Socket r3) {
                r0 = this;
                java.util.Map r1 = r0.getClientAliasMap(r1, r2)
                cz.msebera.android.httpclient.ssl.PrivateKeyStrategy r2 = r0.aliasStrategy
                java.lang.String r1 = r2.chooseAlias(r1, r3)
                return r1
        }

        @Override
        public java.lang.String chooseEngineClientAlias(java.lang.String[] r1, java.security.Principal[] r2, javax.net.ssl.SSLEngine r3) {
                r0 = this;
                java.util.Map r1 = r0.getClientAliasMap(r1, r2)
                cz.msebera.android.httpclient.ssl.PrivateKeyStrategy r2 = r0.aliasStrategy
                r3 = 0
                java.lang.String r1 = r2.chooseAlias(r1, r3)
                return r1
        }

        @Override
        public java.lang.String chooseEngineServerAlias(java.lang.String r1, java.security.Principal[] r2, javax.net.ssl.SSLEngine r3) {
                r0 = this;
                java.util.Map r1 = r0.getServerAliasMap(r1, r2)
                cz.msebera.android.httpclient.ssl.PrivateKeyStrategy r2 = r0.aliasStrategy
                r3 = 0
                java.lang.String r1 = r2.chooseAlias(r1, r3)
                return r1
        }

        @Override
        public java.lang.String chooseServerAlias(java.lang.String r1, java.security.Principal[] r2, java.net.Socket r3) {
                r0 = this;
                java.util.Map r1 = r0.getServerAliasMap(r1, r2)
                cz.msebera.android.httpclient.ssl.PrivateKeyStrategy r2 = r0.aliasStrategy
                java.lang.String r1 = r2.chooseAlias(r1, r3)
                return r1
        }

        @Override
        public java.security.cert.X509Certificate[] getCertificateChain(java.lang.String r2) {
                r1 = this;
                javax.net.ssl.X509ExtendedKeyManager r0 = r1.keyManager
                java.security.cert.X509Certificate[] r2 = r0.getCertificateChain(r2)
                return r2
        }

        public java.util.Map<java.lang.String, cz.msebera.android.httpclient.ssl.PrivateKeyDetails> getClientAliasMap(java.lang.String[] r12, java.security.Principal[] r13) {
                r11 = this;
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                int r1 = r12.length
                r2 = 0
                r3 = 0
            L8:
                if (r3 >= r1) goto L2e
                r4 = r12[r3]
                javax.net.ssl.X509ExtendedKeyManager r5 = r11.keyManager
                java.lang.String[] r5 = r5.getClientAliases(r4, r13)
                if (r5 == 0) goto L2b
                int r6 = r5.length
                r7 = 0
            L16:
                if (r7 >= r6) goto L2b
                r8 = r5[r7]
                cz.msebera.android.httpclient.ssl.PrivateKeyDetails r9 = new cz.msebera.android.httpclient.ssl.PrivateKeyDetails
                javax.net.ssl.X509ExtendedKeyManager r10 = r11.keyManager
                java.security.cert.X509Certificate[] r10 = r10.getCertificateChain(r8)
                r9.<init>(r4, r10)
                r0.put(r8, r9)
                int r7 = r7 + 1
                goto L16
            L2b:
                int r3 = r3 + 1
                goto L8
            L2e:
                return r0
        }

        @Override
        public java.lang.String[] getClientAliases(java.lang.String r2, java.security.Principal[] r3) {
                r1 = this;
                javax.net.ssl.X509ExtendedKeyManager r0 = r1.keyManager
                java.lang.String[] r2 = r0.getClientAliases(r2, r3)
                return r2
        }

        @Override
        public java.security.PrivateKey getPrivateKey(java.lang.String r2) {
                r1 = this;
                javax.net.ssl.X509ExtendedKeyManager r0 = r1.keyManager
                java.security.PrivateKey r2 = r0.getPrivateKey(r2)
                return r2
        }

        public java.util.Map<java.lang.String, cz.msebera.android.httpclient.ssl.PrivateKeyDetails> getServerAliasMap(java.lang.String r7, java.security.Principal[] r8) {
                r6 = this;
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                javax.net.ssl.X509ExtendedKeyManager r1 = r6.keyManager
                java.lang.String[] r8 = r1.getServerAliases(r7, r8)
                if (r8 == 0) goto L24
                int r1 = r8.length
                r2 = 0
            Lf:
                if (r2 >= r1) goto L24
                r3 = r8[r2]
                cz.msebera.android.httpclient.ssl.PrivateKeyDetails r4 = new cz.msebera.android.httpclient.ssl.PrivateKeyDetails
                javax.net.ssl.X509ExtendedKeyManager r5 = r6.keyManager
                java.security.cert.X509Certificate[] r5 = r5.getCertificateChain(r3)
                r4.<init>(r7, r5)
                r0.put(r3, r4)
                int r2 = r2 + 1
                goto Lf
            L24:
                return r0
        }

        @Override
        public java.lang.String[] getServerAliases(java.lang.String r2, java.security.Principal[] r3) {
                r1 = this;
                javax.net.ssl.X509ExtendedKeyManager r0 = r1.keyManager
                java.lang.String[] r2 = r0.getServerAliases(r2, r3)
                return r2
        }
    }

    static class TrustManagerDelegate implements javax.net.ssl.X509TrustManager {
        private final javax.net.ssl.X509TrustManager trustManager;
        private final cz.msebera.android.httpclient.ssl.TrustStrategy trustStrategy;

        TrustManagerDelegate(javax.net.ssl.X509TrustManager r1, cz.msebera.android.httpclient.ssl.TrustStrategy r2) {
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
                cz.msebera.android.httpclient.ssl.TrustStrategy r0 = r1.trustStrategy
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

    public static cz.msebera.android.httpclient.ssl.SSLContextBuilder create() {
            cz.msebera.android.httpclient.ssl.SSLContextBuilder r0 = new cz.msebera.android.httpclient.ssl.SSLContextBuilder
            r0.<init>()
            return r0
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
            java.util.Set<javax.net.ssl.TrustManager> r2 = r4.trustmanagers
            java.security.SecureRandom r3 = r4.secureRandom
            r4.initSSLContext(r0, r1, r2, r3)
            return r0
    }

    protected void initSSLContext(javax.net.ssl.SSLContext r3, java.util.Collection<javax.net.ssl.KeyManager> r4, java.util.Collection<javax.net.ssl.TrustManager> r5, java.security.SecureRandom r6) throws java.security.KeyManagementException {
            r2 = this;
            boolean r0 = r4.isEmpty()
            r1 = 0
            if (r0 != 0) goto L14
            int r0 = r4.size()
            javax.net.ssl.KeyManager[] r0 = new javax.net.ssl.KeyManager[r0]
            java.lang.Object[] r4 = r4.toArray(r0)
            javax.net.ssl.KeyManager[] r4 = (javax.net.ssl.KeyManager[]) r4
            goto L15
        L14:
            r4 = r1
        L15:
            boolean r0 = r5.isEmpty()
            if (r0 != 0) goto L28
            int r0 = r5.size()
            javax.net.ssl.TrustManager[] r0 = new javax.net.ssl.TrustManager[r0]
            java.lang.Object[] r5 = r5.toArray(r0)
            r1 = r5
            javax.net.ssl.TrustManager[] r1 = (javax.net.ssl.TrustManager[]) r1
        L28:
            r3.init(r4, r1, r6)
            return
    }

    public cz.msebera.android.httpclient.ssl.SSLContextBuilder loadKeyMaterial(java.io.File r2, char[] r3, char[] r4) throws java.security.NoSuchAlgorithmException, java.security.KeyStoreException, java.security.UnrecoverableKeyException, java.security.cert.CertificateException, java.io.IOException {
            r1 = this;
            r0 = 0
            cz.msebera.android.httpclient.ssl.SSLContextBuilder r2 = r1.loadKeyMaterial(r2, r3, r4, r0)
            return r2
    }

    public cz.msebera.android.httpclient.ssl.SSLContextBuilder loadKeyMaterial(java.io.File r3, char[] r4, char[] r5, cz.msebera.android.httpclient.ssl.PrivateKeyStrategy r6) throws java.security.NoSuchAlgorithmException, java.security.KeyStoreException, java.security.UnrecoverableKeyException, java.security.cert.CertificateException, java.io.IOException {
            r2 = this;
            java.lang.String r0 = "Keystore file"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = java.security.KeyStore.getDefaultType()
            java.security.KeyStore r0 = java.security.KeyStore.getInstance(r0)
            java.io.FileInputStream r1 = new java.io.FileInputStream
            r1.<init>(r3)
            r0.load(r1, r4)     // Catch: java.lang.Throwable -> L1d
            r1.close()
            cz.msebera.android.httpclient.ssl.SSLContextBuilder r3 = r2.loadKeyMaterial(r0, r5, r6)
            return r3
        L1d:
            r3 = move-exception
            r1.close()
            throw r3
    }

    public cz.msebera.android.httpclient.ssl.SSLContextBuilder loadKeyMaterial(java.net.URL r2, char[] r3, char[] r4) throws java.security.NoSuchAlgorithmException, java.security.KeyStoreException, java.security.UnrecoverableKeyException, java.security.cert.CertificateException, java.io.IOException {
            r1 = this;
            r0 = 0
            cz.msebera.android.httpclient.ssl.SSLContextBuilder r2 = r1.loadKeyMaterial(r2, r3, r4, r0)
            return r2
    }

    public cz.msebera.android.httpclient.ssl.SSLContextBuilder loadKeyMaterial(java.net.URL r2, char[] r3, char[] r4, cz.msebera.android.httpclient.ssl.PrivateKeyStrategy r5) throws java.security.NoSuchAlgorithmException, java.security.KeyStoreException, java.security.UnrecoverableKeyException, java.security.cert.CertificateException, java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Keystore URL"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = java.security.KeyStore.getDefaultType()
            java.security.KeyStore r0 = java.security.KeyStore.getInstance(r0)
            java.io.InputStream r2 = r2.openStream()
            r0.load(r2, r3)     // Catch: java.lang.Throwable -> L1c
            r2.close()
            cz.msebera.android.httpclient.ssl.SSLContextBuilder r2 = r1.loadKeyMaterial(r0, r4, r5)
            return r2
        L1c:
            r3 = move-exception
            r2.close()
            throw r3
    }

    public cz.msebera.android.httpclient.ssl.SSLContextBuilder loadKeyMaterial(java.security.KeyStore r2, char[] r3) throws java.security.NoSuchAlgorithmException, java.security.KeyStoreException, java.security.UnrecoverableKeyException {
            r1 = this;
            r0 = 0
            cz.msebera.android.httpclient.ssl.SSLContextBuilder r2 = r1.loadKeyMaterial(r2, r3, r0)
            return r2
    }

    public cz.msebera.android.httpclient.ssl.SSLContextBuilder loadKeyMaterial(java.security.KeyStore r4, char[] r5, cz.msebera.android.httpclient.ssl.PrivateKeyStrategy r6) throws java.security.NoSuchAlgorithmException, java.security.KeyStoreException, java.security.UnrecoverableKeyException {
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
            boolean r2 = r1 instanceof javax.net.ssl.X509ExtendedKeyManager
            if (r2 == 0) goto L27
            cz.msebera.android.httpclient.ssl.SSLContextBuilder$KeyManagerDelegate r2 = new cz.msebera.android.httpclient.ssl.SSLContextBuilder$KeyManagerDelegate
            javax.net.ssl.X509ExtendedKeyManager r1 = (javax.net.ssl.X509ExtendedKeyManager) r1
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

    public cz.msebera.android.httpclient.ssl.SSLContextBuilder loadTrustMaterial(cz.msebera.android.httpclient.ssl.TrustStrategy r2) throws java.security.NoSuchAlgorithmException, java.security.KeyStoreException {
            r1 = this;
            r0 = 0
            cz.msebera.android.httpclient.ssl.SSLContextBuilder r2 = r1.loadTrustMaterial(r0, r2)
            return r2
    }

    public cz.msebera.android.httpclient.ssl.SSLContextBuilder loadTrustMaterial(java.io.File r2) throws java.security.NoSuchAlgorithmException, java.security.KeyStoreException, java.security.cert.CertificateException, java.io.IOException {
            r1 = this;
            r0 = 0
            cz.msebera.android.httpclient.ssl.SSLContextBuilder r2 = r1.loadTrustMaterial(r2, r0)
            return r2
    }

    public cz.msebera.android.httpclient.ssl.SSLContextBuilder loadTrustMaterial(java.io.File r2, char[] r3) throws java.security.NoSuchAlgorithmException, java.security.KeyStoreException, java.security.cert.CertificateException, java.io.IOException {
            r1 = this;
            r0 = 0
            cz.msebera.android.httpclient.ssl.SSLContextBuilder r2 = r1.loadTrustMaterial(r2, r3, r0)
            return r2
    }

    public cz.msebera.android.httpclient.ssl.SSLContextBuilder loadTrustMaterial(java.io.File r3, char[] r4, cz.msebera.android.httpclient.ssl.TrustStrategy r5) throws java.security.NoSuchAlgorithmException, java.security.KeyStoreException, java.security.cert.CertificateException, java.io.IOException {
            r2 = this;
            java.lang.String r0 = "Truststore file"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = java.security.KeyStore.getDefaultType()
            java.security.KeyStore r0 = java.security.KeyStore.getInstance(r0)
            java.io.FileInputStream r1 = new java.io.FileInputStream
            r1.<init>(r3)
            r0.load(r1, r4)     // Catch: java.lang.Throwable -> L1d
            r1.close()
            cz.msebera.android.httpclient.ssl.SSLContextBuilder r3 = r2.loadTrustMaterial(r0, r5)
            return r3
        L1d:
            r3 = move-exception
            r1.close()
            throw r3
    }

    public cz.msebera.android.httpclient.ssl.SSLContextBuilder loadTrustMaterial(java.net.URL r2, char[] r3) throws java.security.NoSuchAlgorithmException, java.security.KeyStoreException, java.security.cert.CertificateException, java.io.IOException {
            r1 = this;
            r0 = 0
            cz.msebera.android.httpclient.ssl.SSLContextBuilder r2 = r1.loadTrustMaterial(r2, r3, r0)
            return r2
    }

    public cz.msebera.android.httpclient.ssl.SSLContextBuilder loadTrustMaterial(java.net.URL r2, char[] r3, cz.msebera.android.httpclient.ssl.TrustStrategy r4) throws java.security.NoSuchAlgorithmException, java.security.KeyStoreException, java.security.cert.CertificateException, java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Truststore URL"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = java.security.KeyStore.getDefaultType()
            java.security.KeyStore r0 = java.security.KeyStore.getInstance(r0)
            java.io.InputStream r2 = r2.openStream()
            r0.load(r2, r3)     // Catch: java.lang.Throwable -> L1c
            r2.close()
            cz.msebera.android.httpclient.ssl.SSLContextBuilder r2 = r1.loadTrustMaterial(r0, r4)
            return r2
        L1c:
            r3 = move-exception
            r2.close()
            throw r3
    }

    public cz.msebera.android.httpclient.ssl.SSLContextBuilder loadTrustMaterial(java.security.KeyStore r5, cz.msebera.android.httpclient.ssl.TrustStrategy r6) throws java.security.NoSuchAlgorithmException, java.security.KeyStoreException {
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
            cz.msebera.android.httpclient.ssl.SSLContextBuilder$TrustManagerDelegate r3 = new cz.msebera.android.httpclient.ssl.SSLContextBuilder$TrustManagerDelegate
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

    public cz.msebera.android.httpclient.ssl.SSLContextBuilder setSecureRandom(java.security.SecureRandom r1) {
            r0 = this;
            r0.secureRandom = r1
            return r0
    }

    public cz.msebera.android.httpclient.ssl.SSLContextBuilder useProtocol(java.lang.String r1) {
            r0 = this;
            r0.protocol = r1
            return r0
    }
}
