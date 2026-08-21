package okhttp3.internal.platform.android;

@kotlin.Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u0000 \u000e2\u00020\u0001:\u0001\u000eB1\u0012\u000e\u0010\u0002\u001a\n\u0012\u0006\b\u0000\u0012\u00020\u00040\u0003\u0012\u000e\u0010\u0005\u001a\n\u0012\u0006\b\u0000\u0012\u00020\u00060\u0003\u0012\n\u0010\u0007\u001a\u0006\u0012\u0002\b\u00030\u0003¢\u0006\u0002\u0010\bJ\u0010\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\u0006H\u0016J\u0012\u0010\f\u001a\u0004\u0018\u00010\r2\u0006\u0010\u000b\u001a\u00020\u0006H\u0016R\u0012\u0010\u0007\u001a\u0006\u0012\u0002\b\u00030\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0016\u0010\u0005\u001a\n\u0012\u0006\b\u0000\u0012\u00020\u00060\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000f"}, d2 = {"Lokhttp3/internal/platform/android/StandardAndroidSocketAdapter;", "Lokhttp3/internal/platform/android/AndroidSocketAdapter;", "sslSocketClass", "Ljava/lang/Class;", "Ljavax/net/ssl/SSLSocket;", "sslSocketFactoryClass", "Ljavax/net/ssl/SSLSocketFactory;", "paramClass", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V", "matchesSocketFactory", "", "sslSocketFactory", "trustManager", "Ljavax/net/ssl/X509TrustManager;", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class StandardAndroidSocketAdapter extends okhttp3.internal.platform.android.AndroidSocketAdapter {
    public static final okhttp3.internal.platform.android.StandardAndroidSocketAdapter.Companion Companion = null;
    private final java.lang.Class<?> paramClass;
    private final java.lang.Class<? super javax.net.ssl.SSLSocketFactory> sslSocketFactoryClass;

    @kotlin.Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0012\u0010\u0003\u001a\u0004\u0018\u00010\u00042\b\b\u0002\u0010\u0005\u001a\u00020\u0006¨\u0006\u0007"}, d2 = {"Lokhttp3/internal/platform/android/StandardAndroidSocketAdapter$Companion;", "", "()V", "buildIfSupported", "Lokhttp3/internal/platform/android/SocketAdapter;", "packageName", "", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
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

        public static okhttp3.internal.platform.android.SocketAdapter buildIfSupported$default(okhttp3.internal.platform.android.StandardAndroidSocketAdapter.Companion r0, java.lang.String r1, int r2, java.lang.Object r3) {
                r2 = r2 & 1
                if (r2 == 0) goto L6
                java.lang.String r1 = "com.android.org.conscrypt"
            L6:
                okhttp3.internal.platform.android.SocketAdapter r0 = r0.buildIfSupported(r1)
                return r0
        }

        public final okhttp3.internal.platform.android.SocketAdapter buildIfSupported(java.lang.String r5) {
                r4 = this;
                java.lang.String r0 = "packageName"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                java.lang.String r0 = ".OpenSSLSocketImpl"
                java.lang.String r0 = kotlin.jvm.internal.Intrinsics.stringPlus(r5, r0)     // Catch: java.lang.Exception -> L44
                java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L44
                if (r0 == 0) goto L3c
                java.lang.String r1 = ".OpenSSLSocketFactoryImpl"
                java.lang.String r1 = kotlin.jvm.internal.Intrinsics.stringPlus(r5, r1)     // Catch: java.lang.Exception -> L44
                java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L44
                if (r1 == 0) goto L34
                java.lang.String r2 = ".SSLParametersImpl"
                java.lang.String r5 = kotlin.jvm.internal.Intrinsics.stringPlus(r5, r2)     // Catch: java.lang.Exception -> L44
                java.lang.Class r5 = java.lang.Class.forName(r5)     // Catch: java.lang.Exception -> L44
                okhttp3.internal.platform.android.StandardAndroidSocketAdapter r2 = new okhttp3.internal.platform.android.StandardAndroidSocketAdapter     // Catch: java.lang.Exception -> L44
                java.lang.String r3 = "paramsClass"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, r3)     // Catch: java.lang.Exception -> L44
                r2.<init>(r0, r1, r5)     // Catch: java.lang.Exception -> L44
                okhttp3.internal.platform.android.SocketAdapter r2 = (okhttp3.internal.platform.android.SocketAdapter) r2     // Catch: java.lang.Exception -> L44
                goto L57
            L34:
                java.lang.NullPointerException r5 = new java.lang.NullPointerException     // Catch: java.lang.Exception -> L44
                java.lang.String r0 = "null cannot be cast to non-null type java.lang.Class<in javax.net.ssl.SSLSocketFactory>"
                r5.<init>(r0)     // Catch: java.lang.Exception -> L44
                throw r5     // Catch: java.lang.Exception -> L44
            L3c:
                java.lang.NullPointerException r5 = new java.lang.NullPointerException     // Catch: java.lang.Exception -> L44
                java.lang.String r0 = "null cannot be cast to non-null type java.lang.Class<in javax.net.ssl.SSLSocket>"
                r5.<init>(r0)     // Catch: java.lang.Exception -> L44
                throw r5     // Catch: java.lang.Exception -> L44
            L44:
                r5 = move-exception
                okhttp3.internal.platform.Platform$Companion r0 = okhttp3.internal.platform.Platform.Companion
                okhttp3.internal.platform.Platform r0 = r0.get()
                r1 = 5
                java.lang.Throwable r5 = (java.lang.Throwable) r5
                java.lang.String r2 = "unable to load android socket classes"
                r0.log(r2, r1, r5)
                r5 = 0
                r2 = r5
                okhttp3.internal.platform.android.SocketAdapter r2 = (okhttp3.internal.platform.android.SocketAdapter) r2
            L57:
                return r2
        }
    }

    static {
            okhttp3.internal.platform.android.StandardAndroidSocketAdapter$Companion r0 = new okhttp3.internal.platform.android.StandardAndroidSocketAdapter$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.internal.platform.android.StandardAndroidSocketAdapter.Companion = r0
            return
    }

    public StandardAndroidSocketAdapter(java.lang.Class<? super javax.net.ssl.SSLSocket> r2, java.lang.Class<? super javax.net.ssl.SSLSocketFactory> r3, java.lang.Class<?> r4) {
            r1 = this;
            java.lang.String r0 = "sslSocketClass"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "sslSocketFactoryClass"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "paramClass"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r1.<init>(r2)
            r1.sslSocketFactoryClass = r3
            r1.paramClass = r4
            return
    }

    @Override
    public boolean matchesSocketFactory(javax.net.ssl.SSLSocketFactory r2) {
            r1 = this;
            java.lang.String r0 = "sslSocketFactory"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.Class<? super javax.net.ssl.SSLSocketFactory> r0 = r1.sslSocketFactoryClass
            boolean r2 = r0.isInstance(r2)
            return r2
    }

    @Override
    public javax.net.ssl.X509TrustManager trustManager(javax.net.ssl.SSLSocketFactory r3) {
            r2 = this;
            java.lang.String r0 = "sslSocketFactory"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.Class<?> r0 = r2.paramClass
            java.lang.String r1 = "sslParameters"
            java.lang.Object r3 = okhttp3.internal.Util.readFieldOrNull(r3, r0, r1)
            kotlin.jvm.internal.Intrinsics.checkNotNull(r3)
            java.lang.Class<javax.net.ssl.X509TrustManager> r0 = javax.net.ssl.X509TrustManager.class
            java.lang.String r1 = "x509TrustManager"
            java.lang.Object r0 = okhttp3.internal.Util.readFieldOrNull(r3, r0, r1)
            javax.net.ssl.X509TrustManager r0 = (javax.net.ssl.X509TrustManager) r0
            if (r0 != 0) goto L27
            java.lang.Class<javax.net.ssl.X509TrustManager> r0 = javax.net.ssl.X509TrustManager.class
            java.lang.String r1 = "trustManager"
            java.lang.Object r3 = okhttp3.internal.Util.readFieldOrNull(r3, r0, r1)
            r0 = r3
            javax.net.ssl.X509TrustManager r0 = (javax.net.ssl.X509TrustManager) r0
        L27:
            return r0
    }
}
