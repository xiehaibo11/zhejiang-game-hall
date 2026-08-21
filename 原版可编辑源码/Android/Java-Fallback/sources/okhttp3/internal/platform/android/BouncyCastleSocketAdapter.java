package okhttp3.internal.platform.android;

@kotlin.Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0003\u0018\u0000 \u00102\u00020\u0001:\u0001\u0010B\u0005¢\u0006\u0002\u0010\u0002J(\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\b\u0010\u0007\u001a\u0004\u0018\u00010\b2\f\u0010\t\u001a\b\u0012\u0004\u0012\u00020\u000b0\nH\u0016J\u0012\u0010\f\u001a\u0004\u0018\u00010\b2\u0006\u0010\u0005\u001a\u00020\u0006H\u0016J\b\u0010\r\u001a\u00020\u000eH\u0016J\u0010\u0010\u000f\u001a\u00020\u000e2\u0006\u0010\u0005\u001a\u00020\u0006H\u0016¨\u0006\u0011"}, d2 = {"Lokhttp3/internal/platform/android/BouncyCastleSocketAdapter;", "Lokhttp3/internal/platform/android/SocketAdapter;", "()V", "configureTlsExtensions", "", "sslSocket", "Ljavax/net/ssl/SSLSocket;", "hostname", "", "protocols", "", "Lokhttp3/Protocol;", "getSelectedProtocol", "isSupported", "", "matchesSocket", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class BouncyCastleSocketAdapter implements okhttp3.internal.platform.android.SocketAdapter {
    public static final okhttp3.internal.platform.android.BouncyCastleSocketAdapter.Companion Companion = null;
    private static final okhttp3.internal.platform.android.DeferredSocketAdapter.Factory factory = null;

    @kotlin.Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u0011\u0010\u0003\u001a\u00020\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006¨\u0006\u0007"}, d2 = {"Lokhttp3/internal/platform/android/BouncyCastleSocketAdapter$Companion;", "", "()V", "factory", "Lokhttp3/internal/platform/android/DeferredSocketAdapter$Factory;", "getFactory", "()Lokhttp3/internal/platform/android/DeferredSocketAdapter$Factory;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
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

        public final okhttp3.internal.platform.android.DeferredSocketAdapter.Factory getFactory() {
                r1 = this;
                okhttp3.internal.platform.android.DeferredSocketAdapter$Factory r0 = okhttp3.internal.platform.android.BouncyCastleSocketAdapter.access$getFactory$cp()
                return r0
        }
    }

    static {
            okhttp3.internal.platform.android.BouncyCastleSocketAdapter$Companion r0 = new okhttp3.internal.platform.android.BouncyCastleSocketAdapter$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.internal.platform.android.BouncyCastleSocketAdapter.Companion = r0
            okhttp3.internal.platform.android.BouncyCastleSocketAdapter$Companion$factory$1 r0 = new okhttp3.internal.platform.android.BouncyCastleSocketAdapter$Companion$factory$1
            r0.<init>()
            okhttp3.internal.platform.android.DeferredSocketAdapter$Factory r0 = (okhttp3.internal.platform.android.DeferredSocketAdapter.Factory) r0
            okhttp3.internal.platform.android.BouncyCastleSocketAdapter.factory = r0
            return
    }

    public BouncyCastleSocketAdapter() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final okhttp3.internal.platform.android.DeferredSocketAdapter.Factory access$getFactory$cp() {
            okhttp3.internal.platform.android.DeferredSocketAdapter$Factory r0 = okhttp3.internal.platform.android.BouncyCastleSocketAdapter.factory
            return r0
    }

    @Override
    public void configureTlsExtensions(javax.net.ssl.SSLSocket r2, java.lang.String r3, java.util.List<? extends okhttp3.Protocol> r4) {
            r1 = this;
            java.lang.String r3 = "sslSocket"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r3)
            java.lang.String r3 = "protocols"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r3)
            boolean r3 = r1.matchesSocket(r2)
            if (r3 == 0) goto L38
            org.bouncycastle.jsse.BCSSLSocket r2 = (org.bouncycastle.jsse.BCSSLSocket) r2
            org.bouncycastle.jsse.BCSSLParameters r3 = r2.getParameters()
            okhttp3.internal.platform.Platform$Companion r0 = okhttp3.internal.platform.Platform.Companion
            java.util.List r4 = r0.alpnProtocolNames(r4)
            java.util.Collection r4 = (java.util.Collection) r4
            r0 = 0
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.Object[] r4 = r4.toArray(r0)
            if (r4 == 0) goto L30
            java.lang.String[] r4 = (java.lang.String[]) r4
            r3.setApplicationProtocols(r4)
            r2.setParameters(r3)
            goto L38
        L30:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>"
            r2.<init>(r3)
            throw r2
        L38:
            return
    }

    @Override
    public java.lang.String getSelectedProtocol(javax.net.ssl.SSLSocket r2) {
            r1 = this;
            java.lang.String r0 = "sslSocket"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            org.bouncycastle.jsse.BCSSLSocket r2 = (org.bouncycastle.jsse.BCSSLSocket) r2
            java.lang.String r2 = r2.getApplicationProtocol()
            if (r2 != 0) goto Lf
            r0 = 1
            goto L15
        Lf:
            java.lang.String r0 = ""
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r2, r0)
        L15:
            if (r0 == 0) goto L18
            r2 = 0
        L18:
            return r2
    }

    @Override
    public boolean isSupported() {
            r1 = this;
            okhttp3.internal.platform.BouncyCastlePlatform$Companion r0 = okhttp3.internal.platform.BouncyCastlePlatform.Companion
            boolean r0 = r0.isSupported()
            return r0
    }

    @Override
    public boolean matchesSocket(javax.net.ssl.SSLSocket r2) {
            r1 = this;
            java.lang.String r0 = "sslSocket"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r2 = r2 instanceof org.bouncycastle.jsse.BCSSLSocket
            return r2
    }

    @Override
    public boolean matchesSocketFactory(javax.net.ssl.SSLSocketFactory r2) {
            r1 = this;
            r0 = r1
            okhttp3.internal.platform.android.SocketAdapter r0 = (okhttp3.internal.platform.android.SocketAdapter) r0
            boolean r2 = okhttp3.internal.platform.android.SocketAdapter.DefaultImpls.matchesSocketFactory(r0, r2)
            return r2
    }

    @Override
    public javax.net.ssl.X509TrustManager trustManager(javax.net.ssl.SSLSocketFactory r2) {
            r1 = this;
            r0 = r1
            okhttp3.internal.platform.android.SocketAdapter r0 = (okhttp3.internal.platform.android.SocketAdapter) r0
            javax.net.ssl.X509TrustManager r2 = okhttp3.internal.platform.android.SocketAdapter.DefaultImpls.trustManager(r0, r2)
            return r2
    }
}
