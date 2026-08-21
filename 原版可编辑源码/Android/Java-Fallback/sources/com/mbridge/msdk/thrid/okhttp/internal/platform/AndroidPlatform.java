package com.mbridge.msdk.thrid.okhttp.internal.platform;

class AndroidPlatform extends com.mbridge.msdk.thrid.okhttp.internal.platform.Platform {
    private static final int MAX_LOG_LENGTH = 4000;
    private final com.mbridge.msdk.thrid.okhttp.internal.platform.AndroidPlatform.CloseGuard closeGuard;
    private final com.mbridge.msdk.thrid.okhttp.internal.platform.OptionalMethod<java.net.Socket> getAlpnSelectedProtocol;
    private final com.mbridge.msdk.thrid.okhttp.internal.platform.OptionalMethod<java.net.Socket> setAlpnProtocols;
    private final com.mbridge.msdk.thrid.okhttp.internal.platform.OptionalMethod<java.net.Socket> setHostname;
    private final com.mbridge.msdk.thrid.okhttp.internal.platform.OptionalMethod<java.net.Socket> setUseSessionTickets;
    private final java.lang.Class<?> sslParametersClass;

    static final class AndroidCertificateChainCleaner extends com.mbridge.msdk.thrid.okhttp.internal.tls.CertificateChainCleaner {
        private final java.lang.reflect.Method checkServerTrusted;
        private final java.lang.Object x509TrustManagerExtensions;

        AndroidCertificateChainCleaner(java.lang.Object r1, java.lang.reflect.Method r2) {
                r0 = this;
                r0.<init>()
                r0.x509TrustManagerExtensions = r1
                r0.checkServerTrusted = r2
                return
        }

        @Override
        public java.util.List<java.security.cert.Certificate> clean(java.util.List<java.security.cert.Certificate> r5, java.lang.String r6) throws javax.net.ssl.SSLPeerUnverifiedException {
                r4 = this;
                int r0 = r5.size()     // Catch: java.lang.IllegalAccessException -> L25 java.lang.reflect.InvocationTargetException -> L2c
                java.security.cert.X509Certificate[] r0 = new java.security.cert.X509Certificate[r0]     // Catch: java.lang.IllegalAccessException -> L25 java.lang.reflect.InvocationTargetException -> L2c
                java.lang.Object[] r5 = r5.toArray(r0)     // Catch: java.lang.IllegalAccessException -> L25 java.lang.reflect.InvocationTargetException -> L2c
                java.security.cert.X509Certificate[] r5 = (java.security.cert.X509Certificate[]) r5     // Catch: java.lang.IllegalAccessException -> L25 java.lang.reflect.InvocationTargetException -> L2c
                java.lang.reflect.Method r0 = r4.checkServerTrusted     // Catch: java.lang.IllegalAccessException -> L25 java.lang.reflect.InvocationTargetException -> L2c
                java.lang.Object r1 = r4.x509TrustManagerExtensions     // Catch: java.lang.IllegalAccessException -> L25 java.lang.reflect.InvocationTargetException -> L2c
                r2 = 3
                java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.IllegalAccessException -> L25 java.lang.reflect.InvocationTargetException -> L2c
                r3 = 0
                r2[r3] = r5     // Catch: java.lang.IllegalAccessException -> L25 java.lang.reflect.InvocationTargetException -> L2c
                r5 = 1
                java.lang.String r3 = "RSA"
                r2[r5] = r3     // Catch: java.lang.IllegalAccessException -> L25 java.lang.reflect.InvocationTargetException -> L2c
                r5 = 2
                r2[r5] = r6     // Catch: java.lang.IllegalAccessException -> L25 java.lang.reflect.InvocationTargetException -> L2c
                java.lang.Object r5 = r0.invoke(r1, r2)     // Catch: java.lang.IllegalAccessException -> L25 java.lang.reflect.InvocationTargetException -> L2c
                java.util.List r5 = (java.util.List) r5     // Catch: java.lang.IllegalAccessException -> L25 java.lang.reflect.InvocationTargetException -> L2c
                return r5
            L25:
                r5 = move-exception
                java.lang.AssertionError r6 = new java.lang.AssertionError
                r6.<init>(r5)
                throw r6
            L2c:
                r5 = move-exception
                javax.net.ssl.SSLPeerUnverifiedException r6 = new javax.net.ssl.SSLPeerUnverifiedException
                java.lang.String r0 = r5.getMessage()
                r6.<init>(r0)
                r6.initCause(r5)
                throw r6
        }

        public boolean equals(java.lang.Object r1) {
                r0 = this;
                boolean r1 = r1 instanceof com.mbridge.msdk.thrid.okhttp.internal.platform.AndroidPlatform.AndroidCertificateChainCleaner
                return r1
        }

        public int hashCode() {
                r1 = this;
                r0 = 0
                return r0
        }
    }

    static final class AndroidTrustRootIndex implements com.mbridge.msdk.thrid.okhttp.internal.tls.TrustRootIndex {
        private final java.lang.reflect.Method findByIssuerAndSignatureMethod;
        private final javax.net.ssl.X509TrustManager trustManager;

        AndroidTrustRootIndex(javax.net.ssl.X509TrustManager r1, java.lang.reflect.Method r2) {
                r0 = this;
                r0.<init>()
                r0.findByIssuerAndSignatureMethod = r2
                r0.trustManager = r1
                return
        }

        public boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r5 != r4) goto L4
                return r0
            L4:
                boolean r1 = r5 instanceof com.mbridge.msdk.thrid.okhttp.internal.platform.AndroidPlatform.AndroidTrustRootIndex
                r2 = 0
                if (r1 != 0) goto La
                return r2
            La:
                com.mbridge.msdk.thrid.okhttp.internal.platform.AndroidPlatform$AndroidTrustRootIndex r5 = (com.mbridge.msdk.thrid.okhttp.internal.platform.AndroidPlatform.AndroidTrustRootIndex) r5
                javax.net.ssl.X509TrustManager r1 = r4.trustManager
                javax.net.ssl.X509TrustManager r3 = r5.trustManager
                boolean r1 = r1.equals(r3)
                if (r1 == 0) goto L21
                java.lang.reflect.Method r1 = r4.findByIssuerAndSignatureMethod
                java.lang.reflect.Method r5 = r5.findByIssuerAndSignatureMethod
                boolean r5 = r1.equals(r5)
                if (r5 == 0) goto L21
                goto L22
            L21:
                r0 = r2
            L22:
                return r0
        }

        @Override
        public java.security.cert.X509Certificate findByIssuerAndSignature(java.security.cert.X509Certificate r6) {
                r5 = this;
                r0 = 0
                java.lang.reflect.Method r1 = r5.findByIssuerAndSignatureMethod     // Catch: java.lang.reflect.InvocationTargetException -> L17 java.lang.IllegalAccessException -> L18
                javax.net.ssl.X509TrustManager r2 = r5.trustManager     // Catch: java.lang.reflect.InvocationTargetException -> L17 java.lang.IllegalAccessException -> L18
                r3 = 1
                java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.reflect.InvocationTargetException -> L17 java.lang.IllegalAccessException -> L18
                r4 = 0
                r3[r4] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L17 java.lang.IllegalAccessException -> L18
                java.lang.Object r6 = r1.invoke(r2, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L17 java.lang.IllegalAccessException -> L18
                java.security.cert.TrustAnchor r6 = (java.security.cert.TrustAnchor) r6     // Catch: java.lang.reflect.InvocationTargetException -> L17 java.lang.IllegalAccessException -> L18
                if (r6 == 0) goto L17
                java.security.cert.X509Certificate r0 = r6.getTrustedCert()     // Catch: java.lang.reflect.InvocationTargetException -> L17 java.lang.IllegalAccessException -> L18
            L17:
                return r0
            L18:
                r6 = move-exception
                java.lang.String r0 = "unable to get issues and signature"
                java.lang.AssertionError r6 = com.mbridge.msdk.thrid.okhttp.internal.Util.assertionError(r0, r6)
                throw r6
        }

        public int hashCode() {
                r2 = this;
                javax.net.ssl.X509TrustManager r0 = r2.trustManager
                int r0 = r0.hashCode()
                java.lang.reflect.Method r1 = r2.findByIssuerAndSignatureMethod
                int r1 = r1.hashCode()
                int r1 = r1 * 31
                int r0 = r0 + r1
                return r0
        }
    }

    static final class CloseGuard {
        private final java.lang.reflect.Method getMethod;
        private final java.lang.reflect.Method openMethod;
        private final java.lang.reflect.Method warnIfOpenMethod;

        CloseGuard(java.lang.reflect.Method r1, java.lang.reflect.Method r2, java.lang.reflect.Method r3) {
                r0 = this;
                r0.<init>()
                r0.getMethod = r1
                r0.openMethod = r2
                r0.warnIfOpenMethod = r3
                return
        }

        static com.mbridge.msdk.thrid.okhttp.internal.platform.AndroidPlatform.CloseGuard get() {
                r0 = 0
                java.lang.String r1 = "dalvik.system.CloseGuard"
                java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L28
                java.lang.String r2 = "get"
                r3 = 0
                java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L28
                java.lang.reflect.Method r2 = r1.getMethod(r2, r4)     // Catch: java.lang.Exception -> L28
                java.lang.String r4 = "open"
                r5 = 1
                java.lang.Class[] r5 = new java.lang.Class[r5]     // Catch: java.lang.Exception -> L28
                java.lang.Class<java.lang.String> r6 = java.lang.String.class
                r5[r3] = r6     // Catch: java.lang.Exception -> L28
                java.lang.reflect.Method r4 = r1.getMethod(r4, r5)     // Catch: java.lang.Exception -> L28
                java.lang.String r5 = "warnIfOpen"
                java.lang.Class[] r3 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L28
                java.lang.reflect.Method r0 = r1.getMethod(r5, r3)     // Catch: java.lang.Exception -> L28
                r1 = r0
                r0 = r2
                goto L2a
            L28:
                r1 = r0
                r4 = r1
            L2a:
                com.mbridge.msdk.thrid.okhttp.internal.platform.AndroidPlatform$CloseGuard r2 = new com.mbridge.msdk.thrid.okhttp.internal.platform.AndroidPlatform$CloseGuard
                r2.<init>(r0, r4, r1)
                return r2
        }

        java.lang.Object createAndOpen(java.lang.String r6) {
                r5 = this;
                java.lang.reflect.Method r0 = r5.getMethod
                r1 = 0
                if (r0 == 0) goto L17
                r2 = 0
                java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L17
                java.lang.Object r0 = r0.invoke(r1, r3)     // Catch: java.lang.Exception -> L17
                java.lang.reflect.Method r3 = r5.openMethod     // Catch: java.lang.Exception -> L17
                r4 = 1
                java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L17
                r4[r2] = r6     // Catch: java.lang.Exception -> L17
                r3.invoke(r0, r4)     // Catch: java.lang.Exception -> L17
                return r0
            L17:
                return r1
        }

        boolean warnIfOpen(java.lang.Object r4) {
                r3 = this;
                r0 = 0
                if (r4 == 0) goto Lb
                java.lang.reflect.Method r1 = r3.warnIfOpenMethod     // Catch: java.lang.Exception -> Lb
                java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> Lb
                r1.invoke(r4, r2)     // Catch: java.lang.Exception -> Lb
                r0 = 1
            Lb:
                return r0
        }
    }

    AndroidPlatform(java.lang.Class<?> r2, com.mbridge.msdk.thrid.okhttp.internal.platform.OptionalMethod<java.net.Socket> r3, com.mbridge.msdk.thrid.okhttp.internal.platform.OptionalMethod<java.net.Socket> r4, com.mbridge.msdk.thrid.okhttp.internal.platform.OptionalMethod<java.net.Socket> r5, com.mbridge.msdk.thrid.okhttp.internal.platform.OptionalMethod<java.net.Socket> r6) {
            r1 = this;
            r1.<init>()
            com.mbridge.msdk.thrid.okhttp.internal.platform.AndroidPlatform$CloseGuard r0 = com.mbridge.msdk.thrid.okhttp.internal.platform.AndroidPlatform.CloseGuard.get()
            r1.closeGuard = r0
            r1.sslParametersClass = r2
            r1.setUseSessionTickets = r3
            r1.setHostname = r4
            r1.getAlpnSelectedProtocol = r5
            r1.setAlpnProtocols = r6
            return
    }

    private boolean api23IsCleartextTrafficPermitted(java.lang.String r4, java.lang.Class<?> r5, java.lang.Object r6) throws java.lang.reflect.InvocationTargetException, java.lang.IllegalAccessException {
            r3 = this;
            java.lang.String r0 = "isCleartextTrafficPermitted"
            r1 = 0
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.NoSuchMethodException -> L16
            java.lang.reflect.Method r5 = r5.getMethod(r0, r2)     // Catch: java.lang.NoSuchMethodException -> L16
            java.lang.Object[] r0 = new java.lang.Object[r1]     // Catch: java.lang.NoSuchMethodException -> L16
            java.lang.Object r5 = r5.invoke(r6, r0)     // Catch: java.lang.NoSuchMethodException -> L16
            java.lang.Boolean r5 = (java.lang.Boolean) r5     // Catch: java.lang.NoSuchMethodException -> L16
            boolean r4 = r5.booleanValue()     // Catch: java.lang.NoSuchMethodException -> L16
            return r4
        L16:
            boolean r4 = super.isCleartextTrafficPermitted(r4)
            return r4
    }

    private boolean api24IsCleartextTrafficPermitted(java.lang.String r6, java.lang.Class<?> r7, java.lang.Object r8) throws java.lang.reflect.InvocationTargetException, java.lang.IllegalAccessException {
            r5 = this;
            java.lang.String r0 = "isCleartextTrafficPermitted"
            r1 = 1
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.NoSuchMethodException -> L1d
            java.lang.Class<java.lang.String> r3 = java.lang.String.class
            r4 = 0
            r2[r4] = r3     // Catch: java.lang.NoSuchMethodException -> L1d
            java.lang.reflect.Method r0 = r7.getMethod(r0, r2)     // Catch: java.lang.NoSuchMethodException -> L1d
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.NoSuchMethodException -> L1d
            r1[r4] = r6     // Catch: java.lang.NoSuchMethodException -> L1d
            java.lang.Object r0 = r0.invoke(r8, r1)     // Catch: java.lang.NoSuchMethodException -> L1d
            java.lang.Boolean r0 = (java.lang.Boolean) r0     // Catch: java.lang.NoSuchMethodException -> L1d
            boolean r6 = r0.booleanValue()     // Catch: java.lang.NoSuchMethodException -> L1d
            return r6
        L1d:
            boolean r6 = r5.api23IsCleartextTrafficPermitted(r6, r7, r8)
            return r6
    }

    public static com.mbridge.msdk.thrid.okhttp.internal.platform.Platform buildIfSupported() {
            java.lang.Class<byte[]> r0 = byte[].class
            boolean r1 = com.mbridge.msdk.thrid.okhttp.internal.platform.Platform.isAndroid()
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            java.lang.String r1 = "com.android.org.conscrypt.SSLParametersImpl"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> L12
        L10:
            r4 = r1
            goto L19
        L12:
            java.lang.String r1 = "org.apache.harmony.xnet.provider.jsse.SSLParametersImpl"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> L5b
            goto L10
        L19:
            com.mbridge.msdk.thrid.okhttp.internal.platform.OptionalMethod r5 = new com.mbridge.msdk.thrid.okhttp.internal.platform.OptionalMethod     // Catch: java.lang.ClassNotFoundException -> L5b
            java.lang.String r1 = "setUseSessionTickets"
            r3 = 1
            java.lang.Class[] r6 = new java.lang.Class[r3]     // Catch: java.lang.ClassNotFoundException -> L5b
            java.lang.Class r7 = java.lang.Boolean.TYPE     // Catch: java.lang.ClassNotFoundException -> L5b
            r8 = 0
            r6[r8] = r7     // Catch: java.lang.ClassNotFoundException -> L5b
            r5.<init>(r2, r1, r6)     // Catch: java.lang.ClassNotFoundException -> L5b
            com.mbridge.msdk.thrid.okhttp.internal.platform.OptionalMethod r6 = new com.mbridge.msdk.thrid.okhttp.internal.platform.OptionalMethod     // Catch: java.lang.ClassNotFoundException -> L5b
            java.lang.String r1 = "setHostname"
            java.lang.Class[] r7 = new java.lang.Class[r3]     // Catch: java.lang.ClassNotFoundException -> L5b
            java.lang.Class<java.lang.String> r9 = java.lang.String.class
            r7[r8] = r9     // Catch: java.lang.ClassNotFoundException -> L5b
            r6.<init>(r2, r1, r7)     // Catch: java.lang.ClassNotFoundException -> L5b
            boolean r1 = supportsAlpn()     // Catch: java.lang.ClassNotFoundException -> L5b
            if (r1 == 0) goto L52
            com.mbridge.msdk.thrid.okhttp.internal.platform.OptionalMethod r1 = new com.mbridge.msdk.thrid.okhttp.internal.platform.OptionalMethod     // Catch: java.lang.ClassNotFoundException -> L5b
            java.lang.String r7 = "getAlpnSelectedProtocol"
            java.lang.Class[] r9 = new java.lang.Class[r8]     // Catch: java.lang.ClassNotFoundException -> L5b
            r1.<init>(r0, r7, r9)     // Catch: java.lang.ClassNotFoundException -> L5b
            com.mbridge.msdk.thrid.okhttp.internal.platform.OptionalMethod r7 = new com.mbridge.msdk.thrid.okhttp.internal.platform.OptionalMethod     // Catch: java.lang.ClassNotFoundException -> L5b
            java.lang.String r9 = "setAlpnProtocols"
            java.lang.Class[] r3 = new java.lang.Class[r3]     // Catch: java.lang.ClassNotFoundException -> L5b
            r3[r8] = r0     // Catch: java.lang.ClassNotFoundException -> L5b
            r7.<init>(r2, r9, r3)     // Catch: java.lang.ClassNotFoundException -> L5b
            r8 = r7
            r7 = r1
            goto L54
        L52:
            r7 = r2
            r8 = r7
        L54:
            com.mbridge.msdk.thrid.okhttp.internal.platform.AndroidPlatform r0 = new com.mbridge.msdk.thrid.okhttp.internal.platform.AndroidPlatform     // Catch: java.lang.ClassNotFoundException -> L5b
            r3 = r0
            r3.<init>(r4, r5, r6, r7, r8)     // Catch: java.lang.ClassNotFoundException -> L5b
            return r0
        L5b:
            return r2
    }

    static int getSdkInt() {
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.NoClassDefFoundError -> L3
            return r0
        L3:
            r0 = 0
            return r0
    }

    private static boolean supportsAlpn() {
            java.lang.String r0 = "GMSCore_OpenSSL"
            java.security.Provider r0 = java.security.Security.getProvider(r0)
            r1 = 1
            if (r0 == 0) goto La
            return r1
        La:
            java.lang.String r0 = "android.net.Network"
            java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L10
            return r1
        L10:
            r0 = 0
            return r0
    }

    @Override
    public com.mbridge.msdk.thrid.okhttp.internal.tls.CertificateChainCleaner buildCertificateChainCleaner(javax.net.ssl.X509TrustManager r8) {
            r7 = this;
            java.lang.String r0 = "android.net.http.X509TrustManagerExtensions"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L36
            r1 = 1
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L36
            java.lang.Class<javax.net.ssl.X509TrustManager> r3 = javax.net.ssl.X509TrustManager.class
            r4 = 0
            r2[r4] = r3     // Catch: java.lang.Exception -> L36
            java.lang.reflect.Constructor r2 = r0.getConstructor(r2)     // Catch: java.lang.Exception -> L36
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L36
            r3[r4] = r8     // Catch: java.lang.Exception -> L36
            java.lang.Object r2 = r2.newInstance(r3)     // Catch: java.lang.Exception -> L36
            java.lang.String r3 = "checkServerTrusted"
            r5 = 3
            java.lang.Class[] r5 = new java.lang.Class[r5]     // Catch: java.lang.Exception -> L36
            java.lang.Class<java.security.cert.X509Certificate[]> r6 = java.security.cert.X509Certificate[].class
            r5[r4] = r6     // Catch: java.lang.Exception -> L36
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5[r1] = r4     // Catch: java.lang.Exception -> L36
            r1 = 2
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5[r1] = r4     // Catch: java.lang.Exception -> L36
            java.lang.reflect.Method r0 = r0.getMethod(r3, r5)     // Catch: java.lang.Exception -> L36
            com.mbridge.msdk.thrid.okhttp.internal.platform.AndroidPlatform$AndroidCertificateChainCleaner r1 = new com.mbridge.msdk.thrid.okhttp.internal.platform.AndroidPlatform$AndroidCertificateChainCleaner     // Catch: java.lang.Exception -> L36
            r1.<init>(r2, r0)     // Catch: java.lang.Exception -> L36
            return r1
        L36:
            com.mbridge.msdk.thrid.okhttp.internal.tls.CertificateChainCleaner r8 = super.buildCertificateChainCleaner(r8)
            return r8
    }

    @Override
    public com.mbridge.msdk.thrid.okhttp.internal.tls.TrustRootIndex buildTrustRootIndex(javax.net.ssl.X509TrustManager r7) {
            r6 = this;
            java.lang.Class r0 = r7.getClass()     // Catch: java.lang.NoSuchMethodException -> L1b
            java.lang.String r1 = "findTrustAnchorByIssuerAndSignature"
            r2 = 1
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> L1b
            r4 = 0
            java.lang.Class<java.security.cert.X509Certificate> r5 = java.security.cert.X509Certificate.class
            r3[r4] = r5     // Catch: java.lang.NoSuchMethodException -> L1b
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.NoSuchMethodException -> L1b
            r0.setAccessible(r2)     // Catch: java.lang.NoSuchMethodException -> L1b
            com.mbridge.msdk.thrid.okhttp.internal.platform.AndroidPlatform$AndroidTrustRootIndex r1 = new com.mbridge.msdk.thrid.okhttp.internal.platform.AndroidPlatform$AndroidTrustRootIndex     // Catch: java.lang.NoSuchMethodException -> L1b
            r1.<init>(r7, r0)     // Catch: java.lang.NoSuchMethodException -> L1b
            return r1
        L1b:
            com.mbridge.msdk.thrid.okhttp.internal.tls.TrustRootIndex r7 = super.buildTrustRootIndex(r7)
            return r7
    }

    @Override
    public void configureTlsExtensions(javax.net.ssl.SSLSocket r6, java.lang.String r7, java.util.List<com.mbridge.msdk.thrid.okhttp.Protocol> r8) throws java.io.IOException {
            r5 = this;
            r0 = 0
            r1 = 1
            if (r7 == 0) goto L1a
            com.mbridge.msdk.thrid.okhttp.internal.platform.OptionalMethod<java.net.Socket> r2 = r5.setUseSessionTickets
            java.lang.Object[] r3 = new java.lang.Object[r1]
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r1)
            r3[r0] = r4
            r2.invokeOptionalWithoutCheckedException(r6, r3)
            com.mbridge.msdk.thrid.okhttp.internal.platform.OptionalMethod<java.net.Socket> r2 = r5.setHostname
            java.lang.Object[] r3 = new java.lang.Object[r1]
            r3[r0] = r7
            r2.invokeOptionalWithoutCheckedException(r6, r3)
        L1a:
            com.mbridge.msdk.thrid.okhttp.internal.platform.OptionalMethod<java.net.Socket> r7 = r5.setAlpnProtocols
            if (r7 == 0) goto L31
            boolean r7 = r7.isSupported(r6)
            if (r7 == 0) goto L31
            java.lang.Object[] r7 = new java.lang.Object[r1]
            byte[] r8 = concatLengthPrefixed(r8)
            r7[r0] = r8
            com.mbridge.msdk.thrid.okhttp.internal.platform.OptionalMethod<java.net.Socket> r8 = r5.setAlpnProtocols
            r8.invokeWithoutCheckedException(r6, r7)
        L31:
            return
    }

    @Override
    public void connectSocket(java.net.Socket r2, java.net.InetSocketAddress r3, int r4) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Exception in connect"
            r2.connect(r3, r4)     // Catch: java.lang.ClassCastException -> L6 java.lang.SecurityException -> L17 java.lang.AssertionError -> L21
            return
        L6:
            r2 = move-exception
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 26
            if (r3 != r4) goto L16
            java.io.IOException r3 = new java.io.IOException
            r3.<init>(r0)
            r3.initCause(r2)
            throw r3
        L16:
            throw r2
        L17:
            r2 = move-exception
            java.io.IOException r3 = new java.io.IOException
            r3.<init>(r0)
            r3.initCause(r2)
            throw r3
        L21:
            r2 = move-exception
            boolean r3 = com.mbridge.msdk.thrid.okhttp.internal.Util.isAndroidGetsocknameError(r2)
            if (r3 == 0) goto L2e
            java.io.IOException r3 = new java.io.IOException
            r3.<init>(r2)
            throw r3
        L2e:
            throw r2
    }

    @Override
    public javax.net.ssl.SSLContext getSSLContext() {
            r3 = this;
            r0 = 1
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.NoClassDefFoundError -> Lf
            r2 = 16
            if (r1 < r2) goto Le
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.NoClassDefFoundError -> Lf
            r2 = 22
            if (r1 >= r2) goto Le
            goto Lf
        Le:
            r0 = 0
        Lf:
            if (r0 == 0) goto L18
            java.lang.String r0 = "TLSv1.2"
            javax.net.ssl.SSLContext r0 = javax.net.ssl.SSLContext.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L18
            return r0
        L18:
            java.lang.String r0 = "TLS"
            javax.net.ssl.SSLContext r0 = javax.net.ssl.SSLContext.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L1f
            return r0
        L1f:
            r0 = move-exception
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "No TLS provider"
            r1.<init>(r2, r0)
            throw r1
    }

    @Override
    @javax.annotation.Nullable
    public java.lang.String getSelectedProtocol(javax.net.ssl.SSLSocket r4) {
            r3 = this;
            com.mbridge.msdk.thrid.okhttp.internal.platform.OptionalMethod<java.net.Socket> r0 = r3.getAlpnSelectedProtocol
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            boolean r0 = r0.isSupported(r4)
            if (r0 != 0) goto Ld
            return r1
        Ld:
            com.mbridge.msdk.thrid.okhttp.internal.platform.OptionalMethod<java.net.Socket> r0 = r3.getAlpnSelectedProtocol
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.Object r4 = r0.invokeWithoutCheckedException(r4, r2)
            byte[] r4 = (byte[]) r4
            byte[] r4 = (byte[]) r4
            if (r4 == 0) goto L23
            java.lang.String r1 = new java.lang.String
            java.nio.charset.Charset r0 = com.mbridge.msdk.thrid.okhttp.internal.Util.UTF_8
            r1.<init>(r4, r0)
        L23:
            return r1
    }

    @Override
    public java.lang.Object getStackTraceForCloseable(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.internal.platform.AndroidPlatform$CloseGuard r0 = r1.closeGuard
            java.lang.Object r2 = r0.createAndOpen(r2)
            return r2
    }

    @Override
    public boolean isCleartextTrafficPermitted(java.lang.String r5) {
            r4 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 >= r1) goto Lb
            boolean r5 = super.isCleartextTrafficPermitted(r5)
            return r5
        Lb:
            java.lang.String r0 = "android.security.NetworkSecurityPolicy"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.reflect.InvocationTargetException -> L26 java.lang.IllegalArgumentException -> L28 java.lang.IllegalAccessException -> L2a java.lang.Throwable -> L32
            java.lang.String r1 = "getInstance"
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L26 java.lang.IllegalArgumentException -> L28 java.lang.IllegalAccessException -> L2a java.lang.Throwable -> L32
            java.lang.reflect.Method r1 = r0.getMethod(r1, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L26 java.lang.IllegalArgumentException -> L28 java.lang.IllegalAccessException -> L2a java.lang.Throwable -> L32
            r3 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L26 java.lang.IllegalArgumentException -> L28 java.lang.IllegalAccessException -> L2a java.lang.Throwable -> L32
            java.lang.Object r1 = r1.invoke(r3, r2)     // Catch: java.lang.reflect.InvocationTargetException -> L26 java.lang.IllegalArgumentException -> L28 java.lang.IllegalAccessException -> L2a java.lang.Throwable -> L32
            boolean r5 = r4.api24IsCleartextTrafficPermitted(r5, r0, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L26 java.lang.IllegalArgumentException -> L28 java.lang.IllegalAccessException -> L2a java.lang.Throwable -> L32
            return r5
        L26:
            r5 = move-exception
            goto L2b
        L28:
            r5 = move-exception
            goto L2b
        L2a:
            r5 = move-exception
        L2b:
            java.lang.String r0 = "unable to determine cleartext support"
            java.lang.AssertionError r5 = com.mbridge.msdk.thrid.okhttp.internal.Util.assertionError(r0, r5)
            throw r5
        L32:
            boolean r5 = super.isCleartextTrafficPermitted(r5)
            return r5
    }

    @Override
    public void log(int r6, java.lang.String r7, @javax.annotation.Nullable java.lang.Throwable r8) {
            r5 = this;
            r0 = 5
            if (r6 != r0) goto L4
            goto L5
        L4:
            r0 = 3
        L5:
            r6 = 10
            if (r8 == 0) goto L1f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r7)
            r1.append(r6)
            java.lang.String r7 = android.util.Log.getStackTraceString(r8)
            r1.append(r7)
            java.lang.String r7 = r1.toString()
        L1f:
            r8 = 0
            int r1 = r7.length()
        L24:
            if (r8 >= r1) goto L45
            int r2 = r7.indexOf(r6, r8)
            r3 = -1
            if (r2 == r3) goto L2e
            goto L2f
        L2e:
            r2 = r1
        L2f:
            int r3 = r8 + 4000
            int r3 = java.lang.Math.min(r2, r3)
            java.lang.String r8 = r7.substring(r8, r3)
            java.lang.String r4 = "OkHttp"
            android.util.Log.println(r0, r4, r8)
            if (r3 < r2) goto L43
            int r8 = r3 + 1
            goto L24
        L43:
            r8 = r3
            goto L2f
        L45:
            return
    }

    @Override
    public void logCloseableLeak(java.lang.String r2, java.lang.Object r3) {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.internal.platform.AndroidPlatform$CloseGuard r0 = r1.closeGuard
            boolean r3 = r0.warnIfOpen(r3)
            if (r3 != 0) goto Ld
            r3 = 5
            r0 = 0
            r1.log(r3, r2, r0)
        Ld:
            return
    }

    @Override
    @javax.annotation.Nullable
    protected javax.net.ssl.X509TrustManager trustManager(javax.net.ssl.SSLSocketFactory r5) {
            r4 = this;
            java.lang.Class<?> r0 = r4.sslParametersClass
            java.lang.String r1 = "sslParameters"
            java.lang.Object r0 = readFieldOrNull(r5, r0, r1)
            if (r0 != 0) goto L23
            java.lang.String r0 = "com.google.android.gms.org.conscrypt.SSLParametersImpl"
            r2 = 0
            java.lang.Class r3 = r5.getClass()     // Catch: java.lang.ClassNotFoundException -> L1e
            java.lang.ClassLoader r3 = r3.getClassLoader()     // Catch: java.lang.ClassNotFoundException -> L1e
            java.lang.Class r0 = java.lang.Class.forName(r0, r2, r3)     // Catch: java.lang.ClassNotFoundException -> L1e
            java.lang.Object r0 = readFieldOrNull(r5, r0, r1)     // Catch: java.lang.ClassNotFoundException -> L1e
            goto L23
        L1e:
            javax.net.ssl.X509TrustManager r5 = super.trustManager(r5)
            return r5
        L23:
            java.lang.Class<javax.net.ssl.X509TrustManager> r5 = javax.net.ssl.X509TrustManager.class
            java.lang.String r1 = "x509TrustManager"
            java.lang.Object r5 = readFieldOrNull(r0, r5, r1)
            javax.net.ssl.X509TrustManager r5 = (javax.net.ssl.X509TrustManager) r5
            if (r5 == 0) goto L30
            return r5
        L30:
            java.lang.Class<javax.net.ssl.X509TrustManager> r5 = javax.net.ssl.X509TrustManager.class
            java.lang.String r1 = "trustManager"
            java.lang.Object r5 = readFieldOrNull(r0, r5, r1)
            javax.net.ssl.X509TrustManager r5 = (javax.net.ssl.X509TrustManager) r5
            return r5
    }
}
