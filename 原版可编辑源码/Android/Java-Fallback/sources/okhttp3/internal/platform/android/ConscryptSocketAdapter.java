package okhttp3.internal.platform.android;

@kotlin.Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0003\u0018\u0000 \u00102\u00020\u0001:\u0001\u0010B\u0005¢\u0006\u0002\u0010\u0002J(\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\b\u0010\u0007\u001a\u0004\u0018\u00010\b2\f\u0010\t\u001a\b\u0012\u0004\u0012\u00020\u000b0\nH\u0016J\u0012\u0010\f\u001a\u0004\u0018\u00010\b2\u0006\u0010\u0005\u001a\u00020\u0006H\u0016J\b\u0010\r\u001a\u00020\u000eH\u0016J\u0010\u0010\u000f\u001a\u00020\u000e2\u0006\u0010\u0005\u001a\u00020\u0006H\u0016¨\u0006\u0011"}, d2 = {"Lokhttp3/internal/platform/android/ConscryptSocketAdapter;", "Lokhttp3/internal/platform/android/SocketAdapter;", "()V", "configureTlsExtensions", "", "sslSocket", "Ljavax/net/ssl/SSLSocket;", "hostname", "", "protocols", "", "Lokhttp3/Protocol;", "getSelectedProtocol", "isSupported", "", "matchesSocket", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class ConscryptSocketAdapter implements okhttp3.internal.platform.android.SocketAdapter {
    public static final okhttp3.internal.platform.android.ConscryptSocketAdapter.Companion Companion = null;
    private static final okhttp3.internal.platform.android.DeferredSocketAdapter.Factory factory = null;

    @kotlin.Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u0011\u0010\u0003\u001a\u00020\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006¨\u0006\u0007"}, d2 = {"Lokhttp3/internal/platform/android/ConscryptSocketAdapter$Companion;", "", "()V", "factory", "Lokhttp3/internal/platform/android/DeferredSocketAdapter$Factory;", "getFactory", "()Lokhttp3/internal/platform/android/DeferredSocketAdapter$Factory;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
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
                okhttp3.internal.platform.android.DeferredSocketAdapter$Factory r0 = okhttp3.internal.platform.android.ConscryptSocketAdapter.access$getFactory$cp()
                return r0
        }
    }

    static {
            okhttp3.internal.platform.android.ConscryptSocketAdapter$Companion r0 = new okhttp3.internal.platform.android.ConscryptSocketAdapter$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.internal.platform.android.ConscryptSocketAdapter.Companion = r0
            okhttp3.internal.platform.android.ConscryptSocketAdapter$Companion$factory$1 r0 = new okhttp3.internal.platform.android.ConscryptSocketAdapter$Companion$factory$1
            r0.<init>()
            okhttp3.internal.platform.android.DeferredSocketAdapter$Factory r0 = (okhttp3.internal.platform.android.DeferredSocketAdapter.Factory) r0
            okhttp3.internal.platform.android.ConscryptSocketAdapter.factory = r0
            return
    }

    public ConscryptSocketAdapter() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final okhttp3.internal.platform.android.DeferredSocketAdapter.Factory access$getFactory$cp() {
            okhttp3.internal.platform.android.DeferredSocketAdapter$Factory r0 = okhttp3.internal.platform.android.ConscryptSocketAdapter.factory
            return r0
    }

    @Override
    public void configureTlsExtensions(javax.net.ssl.SSLSocket r1, java.lang.String r2, java.util.List<? extends okhttp3.Protocol> r3) {
            r0 = this;
            java.lang.String r2 = "sslSocket"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r2)
            java.lang.String r2 = "protocols"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r2)
            boolean r2 = r0.matchesSocket(r1)
            if (r2 == 0) goto L33
            r2 = 1
            org.conscrypt.Conscrypt.setUseSessionTickets(r1, r2)
            okhttp3.internal.platform.Platform$Companion r2 = okhttp3.internal.platform.Platform.Companion
            java.util.List r2 = r2.alpnProtocolNames(r3)
            java.util.Collection r2 = (java.util.Collection) r2
            r3 = 0
            java.lang.String[] r3 = new java.lang.String[r3]
            java.lang.Object[] r2 = r2.toArray(r3)
            if (r2 == 0) goto L2b
            java.lang.String[] r2 = (java.lang.String[]) r2
            org.conscrypt.Conscrypt.setApplicationProtocols(r1, r2)
            goto L33
        L2b:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>"
            r1.<init>(r2)
            throw r1
        L33:
            return
    }

    @Override
    public java.lang.String getSelectedProtocol(javax.net.ssl.SSLSocket r2) {
            r1 = this;
            java.lang.String r0 = "sslSocket"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = r1.matchesSocket(r2)
            if (r0 == 0) goto L10
            java.lang.String r2 = org.conscrypt.Conscrypt.getApplicationProtocol(r2)
            goto L11
        L10:
            r2 = 0
        L11:
            return r2
    }

    @Override
    public boolean isSupported() {
            r1 = this;
            okhttp3.internal.platform.ConscryptPlatform$Companion r0 = okhttp3.internal.platform.ConscryptPlatform.Companion
            boolean r0 = r0.isSupported()
            return r0
    }

    @Override
    public boolean matchesSocket(javax.net.ssl.SSLSocket r2) {
            r1 = this;
            java.lang.String r0 = "sslSocket"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r2 = org.conscrypt.Conscrypt.isConscrypt(r2)
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
