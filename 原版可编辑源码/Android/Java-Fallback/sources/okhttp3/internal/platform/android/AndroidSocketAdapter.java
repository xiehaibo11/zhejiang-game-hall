package okhttp3.internal.platform.android;

@kotlin.Metadata(d1 = {"\u0000@\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0003\b\u0016\u0018\u0000 \u00182\u00020\u0001:\u0001\u0018B\u0015\u0012\u000e\u0010\u0002\u001a\n\u0012\u0006\b\u0000\u0012\u00020\u00040\u0003¢\u0006\u0002\u0010\u0005J(\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u00042\b\u0010\u000f\u001a\u0004\u0018\u00010\u00102\f\u0010\u0011\u001a\b\u0012\u0004\u0012\u00020\u00130\u0012H\u0016J\u0012\u0010\u0014\u001a\u0004\u0018\u00010\u00102\u0006\u0010\u000e\u001a\u00020\u0004H\u0016J\b\u0010\u0015\u001a\u00020\u0016H\u0016J\u0010\u0010\u0017\u001a\u00020\u00162\u0006\u0010\u000e\u001a\u00020\u0004H\u0016R\u0016\u0010\u0006\u001a\n \b*\u0004\u0018\u00010\u00070\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u0016\u0010\t\u001a\n \b*\u0004\u0018\u00010\u00070\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u0016\u0010\n\u001a\n \b*\u0004\u0018\u00010\u00070\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u0016\u0010\u0002\u001a\n\u0012\u0006\b\u0000\u0012\u00020\u00040\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0019"}, d2 = {"Lokhttp3/internal/platform/android/AndroidSocketAdapter;", "Lokhttp3/internal/platform/android/SocketAdapter;", "sslSocketClass", "Ljava/lang/Class;", "Ljavax/net/ssl/SSLSocket;", "(Ljava/lang/Class;)V", "getAlpnSelectedProtocol", "Ljava/lang/reflect/Method;", "kotlin.jvm.PlatformType", "setAlpnProtocols", "setHostname", "setUseSessionTickets", "configureTlsExtensions", "", "sslSocket", "hostname", "", "protocols", "", "Lokhttp3/Protocol;", "getSelectedProtocol", "isSupported", "", "matchesSocket", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public class AndroidSocketAdapter implements okhttp3.internal.platform.android.SocketAdapter {
    public static final okhttp3.internal.platform.android.AndroidSocketAdapter.Companion Companion = null;
    private static final okhttp3.internal.platform.android.DeferredSocketAdapter.Factory playProviderFactory = null;
    private final java.lang.reflect.Method getAlpnSelectedProtocol;
    private final java.lang.reflect.Method setAlpnProtocols;
    private final java.lang.reflect.Method setHostname;
    private final java.lang.reflect.Method setUseSessionTickets;
    private final java.lang.Class<? super javax.net.ssl.SSLSocket> sslSocketClass;

    @kotlin.Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0018\u0010\u0007\u001a\u00020\b2\u000e\u0010\t\u001a\n\u0012\u0006\b\u0000\u0012\u00020\u000b0\nH\u0002J\u000e\u0010\f\u001a\u00020\u00042\u0006\u0010\r\u001a\u00020\u000eR\u0011\u0010\u0003\u001a\u00020\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006¨\u0006\u000f"}, d2 = {"Lokhttp3/internal/platform/android/AndroidSocketAdapter$Companion;", "", "()V", "playProviderFactory", "Lokhttp3/internal/platform/android/DeferredSocketAdapter$Factory;", "getPlayProviderFactory", "()Lokhttp3/internal/platform/android/DeferredSocketAdapter$Factory;", "build", "Lokhttp3/internal/platform/android/AndroidSocketAdapter;", "actualSSLSocketClass", "Ljava/lang/Class;", "Ljavax/net/ssl/SSLSocket;", "factory", "packageName", "", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
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

        public static final okhttp3.internal.platform.android.AndroidSocketAdapter access$build(okhttp3.internal.platform.android.AndroidSocketAdapter.Companion r0, java.lang.Class r1) {
                okhttp3.internal.platform.android.AndroidSocketAdapter r0 = r0.build(r1)
                return r0
        }

        private final okhttp3.internal.platform.android.AndroidSocketAdapter build(java.lang.Class<? super javax.net.ssl.SSLSocket> r4) {
                r3 = this;
                r0 = r4
            L1:
                if (r0 == 0) goto L22
                java.lang.String r1 = r0.getSimpleName()
                java.lang.String r2 = "OpenSSLSocketImpl"
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r1, r2)
                if (r1 != 0) goto L22
                java.lang.Class r0 = r0.getSuperclass()
                if (r0 == 0) goto L16
                goto L1
            L16:
                java.lang.AssertionError r0 = new java.lang.AssertionError
                java.lang.String r1 = "No OpenSSLSocketImpl superclass of socket of type "
                java.lang.String r4 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r4)
                r0.<init>(r4)
                throw r0
            L22:
                okhttp3.internal.platform.android.AndroidSocketAdapter r4 = new okhttp3.internal.platform.android.AndroidSocketAdapter
                kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
                r4.<init>(r0)
                return r4
        }

        public final okhttp3.internal.platform.android.DeferredSocketAdapter.Factory factory(java.lang.String r2) {
                r1 = this;
                java.lang.String r0 = "packageName"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                okhttp3.internal.platform.android.AndroidSocketAdapter$Companion$factory$1 r0 = new okhttp3.internal.platform.android.AndroidSocketAdapter$Companion$factory$1
                r0.<init>(r2)
                okhttp3.internal.platform.android.DeferredSocketAdapter$Factory r0 = (okhttp3.internal.platform.android.DeferredSocketAdapter.Factory) r0
                return r0
        }

        public final okhttp3.internal.platform.android.DeferredSocketAdapter.Factory getPlayProviderFactory() {
                r1 = this;
                okhttp3.internal.platform.android.DeferredSocketAdapter$Factory r0 = okhttp3.internal.platform.android.AndroidSocketAdapter.access$getPlayProviderFactory$cp()
                return r0
        }
    }

    static {
            okhttp3.internal.platform.android.AndroidSocketAdapter$Companion r0 = new okhttp3.internal.platform.android.AndroidSocketAdapter$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.internal.platform.android.AndroidSocketAdapter.Companion = r0
            java.lang.String r1 = "com.google.android.gms.org.conscrypt"
            okhttp3.internal.platform.android.DeferredSocketAdapter$Factory r0 = r0.factory(r1)
            okhttp3.internal.platform.android.AndroidSocketAdapter.playProviderFactory = r0
            return
    }

    public AndroidSocketAdapter(java.lang.Class<? super javax.net.ssl.SSLSocket> r5) {
            r4 = this;
            java.lang.String r0 = "sslSocketClass"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            r4.<init>()
            r4.sslSocketClass = r5
            r0 = 1
            java.lang.Class[] r1 = new java.lang.Class[r0]
            java.lang.Class r2 = java.lang.Boolean.TYPE
            r3 = 0
            r1[r3] = r2
            java.lang.String r2 = "setUseSessionTickets"
            java.lang.reflect.Method r5 = r5.getDeclaredMethod(r2, r1)
            java.lang.String r1 = "sslSocketClass.getDeclar…:class.javaPrimitiveType)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, r1)
            r4.setUseSessionTickets = r5
            java.lang.Class<? super javax.net.ssl.SSLSocket> r5 = r4.sslSocketClass
            java.lang.Class[] r1 = new java.lang.Class[r0]
            java.lang.Class<java.lang.String> r2 = java.lang.String.class
            r1[r3] = r2
            java.lang.String r2 = "setHostname"
            java.lang.reflect.Method r5 = r5.getMethod(r2, r1)
            r4.setHostname = r5
            java.lang.Class<? super javax.net.ssl.SSLSocket> r5 = r4.sslSocketClass
            java.lang.Class[] r1 = new java.lang.Class[r3]
            java.lang.String r2 = "getAlpnSelectedProtocol"
            java.lang.reflect.Method r5 = r5.getMethod(r2, r1)
            r4.getAlpnSelectedProtocol = r5
            java.lang.Class<? super javax.net.ssl.SSLSocket> r5 = r4.sslSocketClass
            java.lang.Class[] r0 = new java.lang.Class[r0]
            java.lang.Class<byte[]> r1 = byte[].class
            r0[r3] = r1
            java.lang.String r1 = "setAlpnProtocols"
            java.lang.reflect.Method r5 = r5.getMethod(r1, r0)
            r4.setAlpnProtocols = r5
            return
    }

    public static final okhttp3.internal.platform.android.DeferredSocketAdapter.Factory access$getPlayProviderFactory$cp() {
            okhttp3.internal.platform.android.DeferredSocketAdapter$Factory r0 = okhttp3.internal.platform.android.AndroidSocketAdapter.playProviderFactory
            return r0
    }

    @Override
    public void configureTlsExtensions(javax.net.ssl.SSLSocket r6, java.lang.String r7, java.util.List<? extends okhttp3.Protocol> r8) {
            r5 = this;
            java.lang.String r0 = "sslSocket"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            java.lang.String r0 = "protocols"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            boolean r0 = r5.matchesSocket(r6)
            if (r0 == 0) goto L48
            java.lang.reflect.Method r0 = r5.setUseSessionTickets     // Catch: java.lang.reflect.InvocationTargetException -> L3a java.lang.IllegalAccessException -> L41
            r1 = 1
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.reflect.InvocationTargetException -> L3a java.lang.IllegalAccessException -> L41
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r1)     // Catch: java.lang.reflect.InvocationTargetException -> L3a java.lang.IllegalAccessException -> L41
            r4 = 0
            r2[r4] = r3     // Catch: java.lang.reflect.InvocationTargetException -> L3a java.lang.IllegalAccessException -> L41
            r0.invoke(r6, r2)     // Catch: java.lang.reflect.InvocationTargetException -> L3a java.lang.IllegalAccessException -> L41
            if (r7 == 0) goto L2a
            java.lang.reflect.Method r0 = r5.setHostname     // Catch: java.lang.reflect.InvocationTargetException -> L3a java.lang.IllegalAccessException -> L41
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.reflect.InvocationTargetException -> L3a java.lang.IllegalAccessException -> L41
            r2[r4] = r7     // Catch: java.lang.reflect.InvocationTargetException -> L3a java.lang.IllegalAccessException -> L41
            r0.invoke(r6, r2)     // Catch: java.lang.reflect.InvocationTargetException -> L3a java.lang.IllegalAccessException -> L41
        L2a:
            java.lang.reflect.Method r7 = r5.setAlpnProtocols     // Catch: java.lang.reflect.InvocationTargetException -> L3a java.lang.IllegalAccessException -> L41
            java.lang.Object[] r0 = new java.lang.Object[r1]     // Catch: java.lang.reflect.InvocationTargetException -> L3a java.lang.IllegalAccessException -> L41
            okhttp3.internal.platform.Platform$Companion r1 = okhttp3.internal.platform.Platform.Companion     // Catch: java.lang.reflect.InvocationTargetException -> L3a java.lang.IllegalAccessException -> L41
            byte[] r8 = r1.concatLengthPrefixed(r8)     // Catch: java.lang.reflect.InvocationTargetException -> L3a java.lang.IllegalAccessException -> L41
            r0[r4] = r8     // Catch: java.lang.reflect.InvocationTargetException -> L3a java.lang.IllegalAccessException -> L41
            r7.invoke(r6, r0)     // Catch: java.lang.reflect.InvocationTargetException -> L3a java.lang.IllegalAccessException -> L41
            goto L48
        L3a:
            r6 = move-exception
            java.lang.AssertionError r7 = new java.lang.AssertionError
            r7.<init>(r6)
            throw r7
        L41:
            r6 = move-exception
            java.lang.AssertionError r7 = new java.lang.AssertionError
            r7.<init>(r6)
            throw r7
        L48:
            return
    }

    @Override
    public java.lang.String getSelectedProtocol(javax.net.ssl.SSLSocket r4) {
            r3 = this;
            java.lang.String r0 = "sslSocket"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            boolean r0 = r3.matchesSocket(r4)
            r1 = 0
            if (r0 != 0) goto Ld
            return r1
        Ld:
            java.lang.reflect.Method r0 = r3.getAlpnSelectedProtocol     // Catch: java.lang.reflect.InvocationTargetException -> L24 java.lang.IllegalAccessException -> L44
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L24 java.lang.IllegalAccessException -> L44
            java.lang.Object r4 = r0.invoke(r4, r2)     // Catch: java.lang.reflect.InvocationTargetException -> L24 java.lang.IllegalAccessException -> L44
            byte[] r4 = (byte[]) r4     // Catch: java.lang.reflect.InvocationTargetException -> L24 java.lang.IllegalAccessException -> L44
            if (r4 != 0) goto L1b
            goto L3d
        L1b:
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.reflect.InvocationTargetException -> L24 java.lang.IllegalAccessException -> L44
            java.nio.charset.Charset r2 = kotlin.text.Charsets.UTF_8     // Catch: java.lang.reflect.InvocationTargetException -> L24 java.lang.IllegalAccessException -> L44
            r0.<init>(r4, r2)     // Catch: java.lang.reflect.InvocationTargetException -> L24 java.lang.IllegalAccessException -> L44
            r1 = r0
            goto L3d
        L24:
            r4 = move-exception
            java.lang.Throwable r0 = r4.getCause()
            boolean r2 = r0 instanceof java.lang.NullPointerException
            if (r2 == 0) goto L3e
            java.lang.NullPointerException r0 = (java.lang.NullPointerException) r0
            java.lang.String r0 = r0.getMessage()
            java.lang.String r2 = "ssl == null"
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r2)
            if (r0 == 0) goto L3e
            java.lang.String r1 = (java.lang.String) r1
        L3d:
            return r1
        L3e:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            r0.<init>(r4)
            throw r0
        L44:
            r4 = move-exception
            java.lang.AssertionError r0 = new java.lang.AssertionError
            r0.<init>(r4)
            throw r0
    }

    @Override
    public boolean isSupported() {
            r1 = this;
            okhttp3.internal.platform.AndroidPlatform$Companion r0 = okhttp3.internal.platform.AndroidPlatform.Companion
            boolean r0 = r0.isSupported()
            return r0
    }

    @Override
    public boolean matchesSocket(javax.net.ssl.SSLSocket r2) {
            r1 = this;
            java.lang.String r0 = "sslSocket"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.Class<? super javax.net.ssl.SSLSocket> r0 = r1.sslSocketClass
            boolean r2 = r0.isInstance(r2)
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
