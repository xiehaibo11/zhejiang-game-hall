package okhttp3.internal.platform;

@kotlin.Metadata(d1 = {"\u0000H\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\u0018\u0000 \u00182\u00020\u0001:\u0002\u0018\u0019B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J-\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\b2\b\u0010\t\u001a\u0004\u0018\u00010\n2\u0011\u0010\u000b\u001a\r\u0012\t\u0012\u00070\r¢\u0006\u0002\b\u000e0\fH\u0016J\u0012\u0010\u000f\u001a\u0004\u0018\u00010\n2\u0006\u0010\u0007\u001a\u00020\bH\u0016J\b\u0010\u0010\u001a\u00020\u0011H\u0016J\u0010\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u0015H\u0016J\b\u0010\u0016\u001a\u00020\u0015H\u0016J\u0012\u0010\u0014\u001a\u0004\u0018\u00010\u00152\u0006\u0010\u0017\u001a\u00020\u0013H\u0016R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001a"}, d2 = {"Lokhttp3/internal/platform/ConscryptPlatform;", "Lokhttp3/internal/platform/Platform;", "()V", "provider", "Ljava/security/Provider;", "configureTlsExtensions", "", "sslSocket", "Ljavax/net/ssl/SSLSocket;", "hostname", "", "protocols", "", "Lokhttp3/Protocol;", "Lkotlin/jvm/JvmSuppressWildcards;", "getSelectedProtocol", "newSSLContext", "Ljavax/net/ssl/SSLContext;", "newSslSocketFactory", "Ljavax/net/ssl/SSLSocketFactory;", "trustManager", "Ljavax/net/ssl/X509TrustManager;", "platformTrustManager", "sslSocketFactory", "Companion", "DisabledHostnameVerifier", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class ConscryptPlatform extends okhttp3.internal.platform.Platform {
    public static final okhttp3.internal.platform.ConscryptPlatform.Companion Companion = null;
    private static final boolean isSupported = false;
    private final java.security.Provider provider;

    @kotlin.Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\"\u0010\u0006\u001a\u00020\u00042\u0006\u0010\u0007\u001a\u00020\b2\b\b\u0002\u0010\t\u001a\u00020\b2\b\b\u0002\u0010\n\u001a\u00020\bJ\b\u0010\u000b\u001a\u0004\u0018\u00010\fR\u0011\u0010\u0003\u001a\u00020\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0003\u0010\u0005¨\u0006\r"}, d2 = {"Lokhttp3/internal/platform/ConscryptPlatform$Companion;", "", "()V", "isSupported", "", "()Z", "atLeastVersion", "major", "", "minor", "patch", "buildIfSupported", "Lokhttp3/internal/platform/ConscryptPlatform;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
                r0 = this;
                r0.<init>()
                return
        }

        public Companion(kotlin.jvm.internal.DefaultConstructorMarker r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public static boolean atLeastVersion$default(okhttp3.internal.platform.ConscryptPlatform.Companion r1, int r2, int r3, int r4, int r5, java.lang.Object r6) {
                r6 = r5 & 2
                r0 = 0
                if (r6 == 0) goto L6
                r3 = r0
            L6:
                r5 = r5 & 4
                if (r5 == 0) goto Lb
                r4 = r0
            Lb:
                boolean r1 = r1.atLeastVersion(r2, r3, r4)
                return r1
        }

        public final boolean atLeastVersion(int r5, int r6, int r7) {
                r4 = this;
                org.conscrypt.Conscrypt$Version r0 = org.conscrypt.Conscrypt.version()
                int r1 = r0.major()
                r2 = 1
                r3 = 0
                if (r1 == r5) goto L15
                int r6 = r0.major()
                if (r6 <= r5) goto L13
                goto L14
            L13:
                r2 = r3
            L14:
                return r2
            L15:
                int r5 = r0.minor()
                if (r5 == r6) goto L24
                int r5 = r0.minor()
                if (r5 <= r6) goto L22
                goto L23
            L22:
                r2 = r3
            L23:
                return r2
            L24:
                int r5 = r0.patch()
                if (r5 < r7) goto L2b
                goto L2c
            L2b:
                r2 = r3
            L2c:
                return r2
        }

        public final okhttp3.internal.platform.ConscryptPlatform buildIfSupported() {
                r2 = this;
                boolean r0 = r2.isSupported()
                r1 = 0
                if (r0 == 0) goto Ld
                okhttp3.internal.platform.ConscryptPlatform r0 = new okhttp3.internal.platform.ConscryptPlatform
                r0.<init>(r1)
                r1 = r0
            Ld:
                return r1
        }

        public final boolean isSupported() {
                r1 = this;
                boolean r0 = okhttp3.internal.platform.ConscryptPlatform.access$isSupported$cp()
                return r0
        }
    }

    @kotlin.Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\bÀ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J3\u0010\u0003\u001a\u00020\u00042\u0010\u0010\u0005\u001a\f\u0012\u0006\b\u0001\u0012\u00020\u0007\u0018\u00010\u00062\b\u0010\b\u001a\u0004\u0018\u00010\t2\b\u0010\n\u001a\u0004\u0018\u00010\u000bH\u0016¢\u0006\u0002\u0010\fJ\u001a\u0010\u0003\u001a\u00020\u00042\b\u0010\b\u001a\u0004\u0018\u00010\t2\b\u0010\n\u001a\u0004\u0018\u00010\u000b¨\u0006\r"}, d2 = {"Lokhttp3/internal/platform/ConscryptPlatform$DisabledHostnameVerifier;", "Lorg/conscrypt/ConscryptHostnameVerifier;", "()V", "verify", "", "certs", "", "Ljava/security/cert/X509Certificate;", "hostname", "", "session", "Ljavax/net/ssl/SSLSession;", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLSession;)Z", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class DisabledHostnameVerifier implements org.conscrypt.ConscryptHostnameVerifier {
        public static final okhttp3.internal.platform.ConscryptPlatform.DisabledHostnameVerifier INSTANCE = null;

        static {
                okhttp3.internal.platform.ConscryptPlatform$DisabledHostnameVerifier r0 = new okhttp3.internal.platform.ConscryptPlatform$DisabledHostnameVerifier
                r0.<init>()
                okhttp3.internal.platform.ConscryptPlatform.DisabledHostnameVerifier.INSTANCE = r0
                return
        }

        private DisabledHostnameVerifier() {
                r0 = this;
                r0.<init>()
                return
        }

        public final boolean verify(java.lang.String r1, javax.net.ssl.SSLSession r2) {
                r0 = this;
                r1 = 1
                return r1
        }

        public boolean verify(java.security.cert.X509Certificate[] r1, java.lang.String r2, javax.net.ssl.SSLSession r3) {
                r0 = this;
                r1 = 1
                return r1
        }
    }

    static {
            okhttp3.internal.platform.ConscryptPlatform$Companion r0 = new okhttp3.internal.platform.ConscryptPlatform$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.internal.platform.ConscryptPlatform.Companion = r0
            r1 = 0
            java.lang.String r2 = "org.conscrypt.Conscrypt$Version"
            java.lang.Class r0 = r0.getClass()     // Catch: java.lang.Throwable -> L27
            java.lang.ClassLoader r0 = r0.getClassLoader()     // Catch: java.lang.Throwable -> L27
            java.lang.Class.forName(r2, r1, r0)     // Catch: java.lang.Throwable -> L27
            boolean r0 = org.conscrypt.Conscrypt.isAvailable()     // Catch: java.lang.Throwable -> L27
            r2 = 1
            if (r0 == 0) goto L27
            okhttp3.internal.platform.ConscryptPlatform$Companion r0 = okhttp3.internal.platform.ConscryptPlatform.Companion     // Catch: java.lang.Throwable -> L27
            r3 = 2
            boolean r0 = r0.atLeastVersion(r3, r2, r1)     // Catch: java.lang.Throwable -> L27
            if (r0 == 0) goto L27
            r1 = r2
        L27:
            okhttp3.internal.platform.ConscryptPlatform.isSupported = r1
            return
    }

    private ConscryptPlatform() {
            r2 = this;
            r2.<init>()
            java.security.Provider r0 = org.conscrypt.Conscrypt.newProvider()
            java.lang.String r1 = "newProvider()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            r2.provider = r0
            return
    }

    public ConscryptPlatform(kotlin.jvm.internal.DefaultConstructorMarker r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static final boolean access$isSupported$cp() {
            boolean r0 = okhttp3.internal.platform.ConscryptPlatform.isSupported
            return r0
    }

    @Override
    public void configureTlsExtensions(javax.net.ssl.SSLSocket r2, java.lang.String r3, java.util.List<okhttp3.Protocol> r4) {
            r1 = this;
            java.lang.String r0 = "sslSocket"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "protocols"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            boolean r0 = org.conscrypt.Conscrypt.isConscrypt(r2)
            if (r0 == 0) goto L33
            r3 = 1
            org.conscrypt.Conscrypt.setUseSessionTickets(r2, r3)
            okhttp3.internal.platform.Platform$Companion r3 = okhttp3.internal.platform.Platform.Companion
            java.util.List r3 = r3.alpnProtocolNames(r4)
            java.util.Collection r3 = (java.util.Collection) r3
            r4 = 0
            java.lang.String[] r4 = new java.lang.String[r4]
            java.lang.Object[] r3 = r3.toArray(r4)
            if (r3 == 0) goto L2b
            java.lang.String[] r3 = (java.lang.String[]) r3
            org.conscrypt.Conscrypt.setApplicationProtocols(r2, r3)
            goto L36
        L2b:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>"
            r2.<init>(r3)
            throw r2
        L33:
            super.configureTlsExtensions(r2, r3, r4)
        L36:
            return
    }

    @Override
    public java.lang.String getSelectedProtocol(javax.net.ssl.SSLSocket r2) {
            r1 = this;
            java.lang.String r0 = "sslSocket"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = org.conscrypt.Conscrypt.isConscrypt(r2)
            if (r0 == 0) goto L10
            java.lang.String r2 = org.conscrypt.Conscrypt.getApplicationProtocol(r2)
            goto L14
        L10:
            java.lang.String r2 = super.getSelectedProtocol(r2)
        L14:
            return r2
    }

    @Override
    public javax.net.ssl.SSLContext newSSLContext() {
            r2 = this;
            java.security.Provider r0 = r2.provider
            java.lang.String r1 = "TLS"
            javax.net.ssl.SSLContext r0 = javax.net.ssl.SSLContext.getInstance(r1, r0)
            java.lang.String r1 = "getInstance(\"TLS\", provider)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
    }

    @Override
    public javax.net.ssl.SSLSocketFactory newSslSocketFactory(javax.net.ssl.X509TrustManager r4) {
            r3 = this;
            java.lang.String r0 = "trustManager"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            javax.net.ssl.SSLContext r0 = r3.newSSLContext()
            r1 = 1
            javax.net.ssl.TrustManager[] r1 = new javax.net.ssl.TrustManager[r1]
            javax.net.ssl.TrustManager r4 = (javax.net.ssl.TrustManager) r4
            r2 = 0
            r1[r2] = r4
            r4 = 0
            r0.init(r4, r1, r4)
            javax.net.ssl.SSLSocketFactory r4 = r0.getSocketFactory()
            java.lang.String r0 = "newSSLContext().apply {\n…null)\n    }.socketFactory"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r4, r0)
            return r4
    }

    @Override
    public javax.net.ssl.X509TrustManager platformTrustManager() {
            r4 = this;
            java.lang.String r0 = javax.net.ssl.TrustManagerFactory.getDefaultAlgorithm()
            javax.net.ssl.TrustManagerFactory r0 = javax.net.ssl.TrustManagerFactory.getInstance(r0)
            r1 = 0
            java.security.KeyStore r1 = (java.security.KeyStore) r1
            r0.init(r1)
            javax.net.ssl.TrustManager[] r0 = r0.getTrustManagers()
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            int r1 = r0.length
            r2 = 1
            r3 = 0
            if (r1 != r2) goto L21
            r1 = r0[r3]
            boolean r1 = r1 instanceof javax.net.ssl.X509TrustManager
            if (r1 == 0) goto L21
            goto L22
        L21:
            r2 = r3
        L22:
            if (r2 == 0) goto L3d
            r0 = r0[r3]
            if (r0 == 0) goto L35
            javax.net.ssl.X509TrustManager r0 = (javax.net.ssl.X509TrustManager) r0
            r1 = r0
            javax.net.ssl.TrustManager r1 = (javax.net.ssl.TrustManager) r1
            okhttp3.internal.platform.ConscryptPlatform$DisabledHostnameVerifier r2 = okhttp3.internal.platform.ConscryptPlatform.DisabledHostnameVerifier.INSTANCE
            org.conscrypt.ConscryptHostnameVerifier r2 = (org.conscrypt.ConscryptHostnameVerifier) r2
            org.conscrypt.Conscrypt.setHostnameVerifier(r1, r2)
            return r0
        L35:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            java.lang.String r1 = "null cannot be cast to non-null type javax.net.ssl.X509TrustManager"
            r0.<init>(r1)
            throw r0
        L3d:
            java.lang.String r0 = java.util.Arrays.toString(r0)
            java.lang.String r1 = "toString(this)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            java.lang.String r1 = "Unexpected default trust managers: "
            java.lang.String r0 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r0)
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            throw r1
    }

    @Override
    public javax.net.ssl.X509TrustManager trustManager(javax.net.ssl.SSLSocketFactory r2) {
            r1 = this;
            java.lang.String r0 = "sslSocketFactory"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r2 = 0
            return r2
    }
}
