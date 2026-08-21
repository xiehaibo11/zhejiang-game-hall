package okhttp3.internal.platform;

@kotlin.Metadata(d1 = {"\u0000J\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u0000 \u00172\u00020\u0001:\u0001\u0017B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J-\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\b2\b\u0010\t\u001a\u0004\u0018\u00010\n2\u0011\u0010\u000b\u001a\r\u0012\t\u0012\u00070\r¢\u0006\u0002\b\u000e0\fH\u0016J\u0012\u0010\u000f\u001a\u0004\u0018\u00010\n2\u0006\u0010\u0007\u001a\u00020\bH\u0016J\b\u0010\u0010\u001a\u00020\u0011H\u0016J\b\u0010\u0012\u001a\u00020\u0013H\u0016J\u0012\u0010\u0014\u001a\u0004\u0018\u00010\u00132\u0006\u0010\u0015\u001a\u00020\u0016H\u0016R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0018"}, d2 = {"Lokhttp3/internal/platform/BouncyCastlePlatform;", "Lokhttp3/internal/platform/Platform;", "()V", "provider", "Ljava/security/Provider;", "configureTlsExtensions", "", "sslSocket", "Ljavax/net/ssl/SSLSocket;", "hostname", "", "protocols", "", "Lokhttp3/Protocol;", "Lkotlin/jvm/JvmSuppressWildcards;", "getSelectedProtocol", "newSSLContext", "Ljavax/net/ssl/SSLContext;", "platformTrustManager", "Ljavax/net/ssl/X509TrustManager;", "trustManager", "sslSocketFactory", "Ljavax/net/ssl/SSLSocketFactory;", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class BouncyCastlePlatform extends okhttp3.internal.platform.Platform {
    public static final okhttp3.internal.platform.BouncyCastlePlatform.Companion Companion = null;
    private static final boolean isSupported = false;
    private final java.security.Provider provider;

    @kotlin.Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007R\u0011\u0010\u0003\u001a\u00020\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0003\u0010\u0005¨\u0006\b"}, d2 = {"Lokhttp3/internal/platform/BouncyCastlePlatform$Companion;", "", "()V", "isSupported", "", "()Z", "buildIfSupported", "Lokhttp3/internal/platform/BouncyCastlePlatform;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
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

        public final okhttp3.internal.platform.BouncyCastlePlatform buildIfSupported() {
                r2 = this;
                boolean r0 = r2.isSupported()
                r1 = 0
                if (r0 == 0) goto Ld
                okhttp3.internal.platform.BouncyCastlePlatform r0 = new okhttp3.internal.platform.BouncyCastlePlatform
                r0.<init>(r1)
                r1 = r0
            Ld:
                return r1
        }

        public final boolean isSupported() {
                r1 = this;
                boolean r0 = okhttp3.internal.platform.BouncyCastlePlatform.access$isSupported$cp()
                return r0
        }
    }

    static {
            okhttp3.internal.platform.BouncyCastlePlatform$Companion r0 = new okhttp3.internal.platform.BouncyCastlePlatform$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.internal.platform.BouncyCastlePlatform.Companion = r0
            r1 = 0
            java.lang.String r2 = "org.bouncycastle.jsse.provider.BouncyCastleJsseProvider"
            java.lang.Class r0 = r0.getClass()     // Catch: java.lang.ClassNotFoundException -> L17
            java.lang.ClassLoader r0 = r0.getClassLoader()     // Catch: java.lang.ClassNotFoundException -> L17
            java.lang.Class.forName(r2, r1, r0)     // Catch: java.lang.ClassNotFoundException -> L17
            r1 = 1
        L17:
            okhttp3.internal.platform.BouncyCastlePlatform.isSupported = r1
            return
    }

    private BouncyCastlePlatform() {
            r1 = this;
            r1.<init>()
            org.bouncycastle.jsse.provider.BouncyCastleJsseProvider r0 = new org.bouncycastle.jsse.provider.BouncyCastleJsseProvider
            r0.<init>()
            java.security.Provider r0 = (java.security.Provider) r0
            r1.provider = r0
            return
    }

    public BouncyCastlePlatform(kotlin.jvm.internal.DefaultConstructorMarker r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static final boolean access$isSupported$cp() {
            boolean r0 = okhttp3.internal.platform.BouncyCastlePlatform.isSupported
            return r0
    }

    @Override
    public void configureTlsExtensions(javax.net.ssl.SSLSocket r2, java.lang.String r3, java.util.List<okhttp3.Protocol> r4) {
            r1 = this;
            java.lang.String r0 = "sslSocket"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "protocols"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            boolean r0 = r2 instanceof org.bouncycastle.jsse.BCSSLSocket
            if (r0 == 0) goto L36
            org.bouncycastle.jsse.BCSSLSocket r2 = (org.bouncycastle.jsse.BCSSLSocket) r2
            org.bouncycastle.jsse.BCSSLParameters r3 = r2.getParameters()
            okhttp3.internal.platform.Platform$Companion r0 = okhttp3.internal.platform.Platform.Companion
            java.util.List r4 = r0.alpnProtocolNames(r4)
            java.util.Collection r4 = (java.util.Collection) r4
            r0 = 0
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.Object[] r4 = r4.toArray(r0)
            if (r4 == 0) goto L2e
            java.lang.String[] r4 = (java.lang.String[]) r4
            r3.setApplicationProtocols(r4)
            r2.setParameters(r3)
            goto L39
        L2e:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>"
            r2.<init>(r3)
            throw r2
        L36:
            super.configureTlsExtensions(r2, r3, r4)
        L39:
            return
    }

    @Override
    public java.lang.String getSelectedProtocol(javax.net.ssl.SSLSocket r2) {
            r1 = this;
            java.lang.String r0 = "sslSocket"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = r2 instanceof org.bouncycastle.jsse.BCSSLSocket
            if (r0 == 0) goto L1d
            org.bouncycastle.jsse.BCSSLSocket r2 = (org.bouncycastle.jsse.BCSSLSocket) r2
            java.lang.String r2 = r2.getApplicationProtocol()
            if (r2 != 0) goto L13
            r0 = 1
            goto L19
        L13:
            java.lang.String r0 = ""
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r2, r0)
        L19:
            if (r0 == 0) goto L21
            r2 = 0
            goto L21
        L1d:
            java.lang.String r2 = super.getSelectedProtocol(r2)
        L21:
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
    public javax.net.ssl.X509TrustManager platformTrustManager() {
            r4 = this;
            java.lang.String r0 = "PKIX"
            java.lang.String r1 = "BCJSSE"
            javax.net.ssl.TrustManagerFactory r0 = javax.net.ssl.TrustManagerFactory.getInstance(r0, r1)
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
            if (r2 == 0) goto L33
            r0 = r0[r3]
            if (r0 == 0) goto L2b
            javax.net.ssl.X509TrustManager r0 = (javax.net.ssl.X509TrustManager) r0
            return r0
        L2b:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            java.lang.String r1 = "null cannot be cast to non-null type javax.net.ssl.X509TrustManager"
            r0.<init>(r1)
            throw r0
        L33:
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
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "clientBuilder.sslSocketFactory(SSLSocketFactory) not supported with BouncyCastle"
            r2.<init>(r0)
            throw r2
    }
}
