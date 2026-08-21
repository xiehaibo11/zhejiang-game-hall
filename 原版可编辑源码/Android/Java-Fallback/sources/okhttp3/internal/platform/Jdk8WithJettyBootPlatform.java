package okhttp3.internal.platform;

@kotlin.Metadata(d1 = {"\u0000:\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0004\u0018\u0000 \u00162\u00020\u0001:\u0002\u0015\u0016B5\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\n\u0010\u0006\u001a\u0006\u0012\u0002\b\u00030\u0007\u0012\n\u0010\b\u001a\u0006\u0012\u0002\b\u00030\u0007¢\u0006\u0002\u0010\tJ\u0010\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\rH\u0016J(\u0010\u000e\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\b\u0010\u000f\u001a\u0004\u0018\u00010\u00102\f\u0010\u0011\u001a\b\u0012\u0004\u0012\u00020\u00130\u0012H\u0016J\u0012\u0010\u0014\u001a\u0004\u0018\u00010\u00102\u0006\u0010\f\u001a\u00020\rH\u0016R\u0012\u0010\u0006\u001a\u0006\u0012\u0002\b\u00030\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0012\u0010\b\u001a\u0006\u0012\u0002\b\u00030\u0007X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0017"}, d2 = {"Lokhttp3/internal/platform/Jdk8WithJettyBootPlatform;", "Lokhttp3/internal/platform/Platform;", "putMethod", "Ljava/lang/reflect/Method;", "getMethod", "removeMethod", "clientProviderClass", "Ljava/lang/Class;", "serverProviderClass", "(Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;Ljava/lang/Class;Ljava/lang/Class;)V", "afterHandshake", "", "sslSocket", "Ljavax/net/ssl/SSLSocket;", "configureTlsExtensions", "hostname", "", "protocols", "", "Lokhttp3/Protocol;", "getSelectedProtocol", "AlpnProvider", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class Jdk8WithJettyBootPlatform extends okhttp3.internal.platform.Platform {
    public static final okhttp3.internal.platform.Jdk8WithJettyBootPlatform.Companion Companion = null;
    private final java.lang.Class<?> clientProviderClass;
    private final java.lang.reflect.Method getMethod;
    private final java.lang.reflect.Method putMethod;
    private final java.lang.reflect.Method removeMethod;
    private final java.lang.Class<?> serverProviderClass;

    @kotlin.Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0010\u000e\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0011\n\u0002\b\u0002\b\u0002\u0018\u00002\u00020\u0001B\u0013\u0012\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\u0002\u0010\u0005J0\u0010\u0011\u001a\u0004\u0018\u00010\u00122\u0006\u0010\u0013\u001a\u00020\u00122\u0006\u0010\u0014\u001a\u00020\u00152\u000e\u0010\u0016\u001a\n\u0012\u0004\u0012\u00020\u0012\u0018\u00010\u0017H\u0096\u0002¢\u0006\u0002\u0010\u0018R\u0014\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u001c\u0010\u0006\u001a\u0004\u0018\u00010\u0004X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0007\u0010\b\"\u0004\b\t\u0010\nR\u001a\u0010\u000b\u001a\u00020\fX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\r\u0010\u000e\"\u0004\b\u000f\u0010\u0010¨\u0006\u0019"}, d2 = {"Lokhttp3/internal/platform/Jdk8WithJettyBootPlatform$AlpnProvider;", "Ljava/lang/reflect/InvocationHandler;", "protocols", "", "", "(Ljava/util/List;)V", "selected", "getSelected", "()Ljava/lang/String;", "setSelected", "(Ljava/lang/String;)V", "unsupported", "", "getUnsupported", "()Z", "setUnsupported", "(Z)V", "invoke", "", "proxy", "method", "Ljava/lang/reflect/Method;", "args", "", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    private static final class AlpnProvider implements java.lang.reflect.InvocationHandler {
        private final java.util.List<java.lang.String> protocols;
        private java.lang.String selected;
        private boolean unsupported;

        public AlpnProvider(java.util.List<java.lang.String> r2) {
                r1 = this;
                java.lang.String r0 = "protocols"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.<init>()
                r1.protocols = r2
                return
        }

        public final java.lang.String getSelected() {
                r1 = this;
                java.lang.String r0 = r1.selected
                return r0
        }

        public final boolean getUnsupported() {
                r1 = this;
                boolean r0 = r1.unsupported
                return r0
        }

        @Override
        public java.lang.Object invoke(java.lang.Object r7, java.lang.reflect.Method r8, java.lang.Object[] r9) throws java.lang.Throwable {
                r6 = this;
                java.lang.String r0 = "proxy"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
                java.lang.String r7 = "method"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r7)
                r7 = 0
                if (r9 != 0) goto Lf
                java.lang.Object[] r9 = new java.lang.Object[r7]
            Lf:
                java.lang.String r0 = r8.getName()
                java.lang.Class r1 = r8.getReturnType()
                java.lang.String r2 = "supports"
                boolean r2 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r2)
                r3 = 1
                if (r2 == 0) goto L2d
                java.lang.Class r2 = java.lang.Boolean.TYPE
                boolean r2 = kotlin.jvm.internal.Intrinsics.areEqual(r2, r1)
                if (r2 == 0) goto L2d
                java.lang.Boolean r7 = java.lang.Boolean.valueOf(r3)
                return r7
            L2d:
                java.lang.String r2 = "unsupported"
                boolean r2 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r2)
                r4 = 0
                if (r2 == 0) goto L41
                java.lang.Class r2 = java.lang.Void.TYPE
                boolean r2 = kotlin.jvm.internal.Intrinsics.areEqual(r2, r1)
                if (r2 == 0) goto L41
                r6.unsupported = r3
                return r4
            L41:
                java.lang.String r2 = "protocols"
                boolean r2 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r2)
                if (r2 == 0) goto L54
                int r2 = r9.length
                if (r2 != 0) goto L4e
                r2 = r3
                goto L4f
            L4e:
                r2 = r7
            L4f:
                if (r2 == 0) goto L54
                java.util.List<java.lang.String> r7 = r6.protocols
                return r7
            L54:
                java.lang.String r2 = "selectProtocol"
                boolean r2 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r2)
                java.lang.String r5 = "null cannot be cast to non-null type kotlin.String"
                if (r2 != 0) goto L66
                java.lang.String r2 = "select"
                boolean r2 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r2)
                if (r2 == 0) goto Lb7
            L66:
                java.lang.Class<java.lang.String> r2 = java.lang.String.class
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r2, r1)
                if (r1 == 0) goto Lb7
                int r1 = r9.length
                if (r1 != r3) goto Lb7
                r1 = r9[r7]
                boolean r1 = r1 instanceof java.util.List
                if (r1 == 0) goto Lb7
                r8 = r9[r7]
                if (r8 == 0) goto Laf
                java.util.List r8 = (java.util.List) r8
                int r9 = r8.size()
                if (r9 < 0) goto La4
                r0 = r7
            L84:
                int r1 = r0 + 1
                java.lang.Object r2 = r8.get(r0)
                if (r2 == 0) goto L9e
                java.lang.String r2 = (java.lang.String) r2
                java.util.List<java.lang.String> r3 = r6.protocols
                boolean r3 = r3.contains(r2)
                if (r3 == 0) goto L99
                r6.selected = r2
                return r2
            L99:
                if (r0 != r9) goto L9c
                goto La4
            L9c:
                r0 = r1
                goto L84
            L9e:
                java.lang.NullPointerException r7 = new java.lang.NullPointerException
                r7.<init>(r5)
                throw r7
            La4:
                java.util.List<java.lang.String> r8 = r6.protocols
                java.lang.Object r7 = r8.get(r7)
                java.lang.String r7 = (java.lang.String) r7
                r6.selected = r7
                return r7
            Laf:
                java.lang.NullPointerException r7 = new java.lang.NullPointerException
                java.lang.String r8 = "null cannot be cast to non-null type kotlin.collections.List<*>"
                r7.<init>(r8)
                throw r7
            Lb7:
                java.lang.String r1 = "protocolSelected"
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
                if (r1 != 0) goto Lc7
                java.lang.String r1 = "selected"
                boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
                if (r0 == 0) goto Ld9
            Lc7:
                int r0 = r9.length
                if (r0 != r3) goto Ld9
                r7 = r9[r7]
                if (r7 == 0) goto Ld3
                java.lang.String r7 = (java.lang.String) r7
                r6.selected = r7
                return r4
            Ld3:
                java.lang.NullPointerException r7 = new java.lang.NullPointerException
                r7.<init>(r5)
                throw r7
            Ld9:
                int r7 = r9.length
                java.lang.Object[] r7 = java.util.Arrays.copyOf(r9, r7)
                java.lang.Object r7 = r8.invoke(r6, r7)
                return r7
        }

        public final void setSelected(java.lang.String r1) {
                r0 = this;
                r0.selected = r1
                return
        }

        public final void setUnsupported(boolean r1) {
                r0 = this;
                r0.unsupported = r1
                return
        }
    }

    @kotlin.Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\b\u0010\u0003\u001a\u0004\u0018\u00010\u0004¨\u0006\u0005"}, d2 = {"Lokhttp3/internal/platform/Jdk8WithJettyBootPlatform$Companion;", "", "()V", "buildIfSupported", "Lokhttp3/internal/platform/Platform;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
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

        public final okhttp3.internal.platform.Platform buildIfSupported() {
                r12 = this;
                java.lang.String r0 = "java.specification.version"
                java.lang.String r1 = "unknown"
                java.lang.String r0 = java.lang.System.getProperty(r0, r1)
                r1 = 0
                java.lang.String r2 = "jvmVersion"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r2)     // Catch: java.lang.NumberFormatException -> L17
                int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.NumberFormatException -> L17
                r2 = 9
                if (r0 < r2) goto L17
                return r1
            L17:
                java.lang.String r0 = "org.eclipse.jetty.alpn.ALPN"
                r2 = 1
                java.lang.Class r3 = java.lang.Class.forName(r0, r2, r1)     // Catch: java.lang.Throwable -> L87
                java.lang.String r4 = "$Provider"
                java.lang.String r4 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r4)     // Catch: java.lang.Throwable -> L87
                java.lang.Class r4 = java.lang.Class.forName(r4, r2, r1)     // Catch: java.lang.Throwable -> L87
                java.lang.String r5 = "$ClientProvider"
                java.lang.String r5 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r5)     // Catch: java.lang.Throwable -> L87
                java.lang.Class r10 = java.lang.Class.forName(r5, r2, r1)     // Catch: java.lang.Throwable -> L87
                java.lang.String r5 = "$ServerProvider"
                java.lang.String r0 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r5)     // Catch: java.lang.Throwable -> L87
                java.lang.Class r11 = java.lang.Class.forName(r0, r2, r1)     // Catch: java.lang.Throwable -> L87
                java.lang.String r0 = "put"
                r5 = 2
                java.lang.Class[] r5 = new java.lang.Class[r5]     // Catch: java.lang.Throwable -> L87
                java.lang.Class<javax.net.ssl.SSLSocket> r6 = javax.net.ssl.SSLSocket.class
                r7 = 0
                r5[r7] = r6     // Catch: java.lang.Throwable -> L87
                r5[r2] = r4     // Catch: java.lang.Throwable -> L87
                java.lang.reflect.Method r0 = r3.getMethod(r0, r5)     // Catch: java.lang.Throwable -> L87
                java.lang.String r4 = "get"
                java.lang.Class[] r5 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L87
                java.lang.Class<javax.net.ssl.SSLSocket> r6 = javax.net.ssl.SSLSocket.class
                r5[r7] = r6     // Catch: java.lang.Throwable -> L87
                java.lang.reflect.Method r8 = r3.getMethod(r4, r5)     // Catch: java.lang.Throwable -> L87
                java.lang.String r4 = "remove"
                java.lang.Class[] r2 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L87
                java.lang.Class<javax.net.ssl.SSLSocket> r5 = javax.net.ssl.SSLSocket.class
                r2[r7] = r5     // Catch: java.lang.Throwable -> L87
                java.lang.reflect.Method r9 = r3.getMethod(r4, r2)     // Catch: java.lang.Throwable -> L87
                okhttp3.internal.platform.Jdk8WithJettyBootPlatform r2 = new okhttp3.internal.platform.Jdk8WithJettyBootPlatform     // Catch: java.lang.Throwable -> L87
                java.lang.String r3 = "putMethod"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r3)     // Catch: java.lang.Throwable -> L87
                java.lang.String r3 = "getMethod"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r8, r3)     // Catch: java.lang.Throwable -> L87
                java.lang.String r3 = "removeMethod"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r9, r3)     // Catch: java.lang.Throwable -> L87
                java.lang.String r3 = "clientProviderClass"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r10, r3)     // Catch: java.lang.Throwable -> L87
                java.lang.String r3 = "serverProviderClass"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r11, r3)     // Catch: java.lang.Throwable -> L87
                r6 = r2
                r7 = r0
                r6.<init>(r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L87
                okhttp3.internal.platform.Platform r2 = (okhttp3.internal.platform.Platform) r2     // Catch: java.lang.Throwable -> L87
                return r2
            L87:
                return r1
        }
    }

    static {
            okhttp3.internal.platform.Jdk8WithJettyBootPlatform$Companion r0 = new okhttp3.internal.platform.Jdk8WithJettyBootPlatform$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.internal.platform.Jdk8WithJettyBootPlatform.Companion = r0
            return
    }

    public Jdk8WithJettyBootPlatform(java.lang.reflect.Method r2, java.lang.reflect.Method r3, java.lang.reflect.Method r4, java.lang.Class<?> r5, java.lang.Class<?> r6) {
            r1 = this;
            java.lang.String r0 = "putMethod"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "getMethod"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "removeMethod"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "clientProviderClass"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.lang.String r0 = "serverProviderClass"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            r1.<init>()
            r1.putMethod = r2
            r1.getMethod = r3
            r1.removeMethod = r4
            r1.clientProviderClass = r5
            r1.serverProviderClass = r6
            return
    }

    @Override
    public void afterHandshake(javax.net.ssl.SSLSocket r6) {
            r5 = this;
            java.lang.String r0 = "failed to remove ALPN"
            java.lang.String r1 = "sslSocket"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r1)
            java.lang.reflect.Method r1 = r5.removeMethod     // Catch: java.lang.reflect.InvocationTargetException -> L14 java.lang.IllegalAccessException -> L1d
            r2 = 0
            r3 = 1
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.reflect.InvocationTargetException -> L14 java.lang.IllegalAccessException -> L1d
            r4 = 0
            r3[r4] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L14 java.lang.IllegalAccessException -> L1d
            r1.invoke(r2, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L14 java.lang.IllegalAccessException -> L1d
            return
        L14:
            r6 = move-exception
            java.lang.AssertionError r1 = new java.lang.AssertionError
            java.lang.Throwable r6 = (java.lang.Throwable) r6
            r1.<init>(r0, r6)
            throw r1
        L1d:
            r6 = move-exception
            java.lang.AssertionError r1 = new java.lang.AssertionError
            java.lang.Throwable r6 = (java.lang.Throwable) r6
            r1.<init>(r0, r6)
            throw r1
    }

    @Override
    public void configureTlsExtensions(javax.net.ssl.SSLSocket r7, java.lang.String r8, java.util.List<? extends okhttp3.Protocol> r9) {
            r6 = this;
            java.lang.String r8 = "failed to set ALPN"
            java.lang.String r0 = "sslSocket"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            java.lang.String r0 = "protocols"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            okhttp3.internal.platform.Platform$Companion r0 = okhttp3.internal.platform.Platform.Companion
            java.util.List r9 = r0.alpnProtocolNames(r9)
            java.lang.Class<okhttp3.internal.platform.Platform> r0 = okhttp3.internal.platform.Platform.class
            java.lang.ClassLoader r0 = r0.getClassLoader()     // Catch: java.lang.IllegalAccessException -> L3d java.lang.reflect.InvocationTargetException -> L46
            r1 = 2
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.IllegalAccessException -> L3d java.lang.reflect.InvocationTargetException -> L46
            java.lang.Class<?> r3 = r6.clientProviderClass     // Catch: java.lang.IllegalAccessException -> L3d java.lang.reflect.InvocationTargetException -> L46
            r4 = 0
            r2[r4] = r3     // Catch: java.lang.IllegalAccessException -> L3d java.lang.reflect.InvocationTargetException -> L46
            java.lang.Class<?> r3 = r6.serverProviderClass     // Catch: java.lang.IllegalAccessException -> L3d java.lang.reflect.InvocationTargetException -> L46
            r5 = 1
            r2[r5] = r3     // Catch: java.lang.IllegalAccessException -> L3d java.lang.reflect.InvocationTargetException -> L46
            okhttp3.internal.platform.Jdk8WithJettyBootPlatform$AlpnProvider r3 = new okhttp3.internal.platform.Jdk8WithJettyBootPlatform$AlpnProvider     // Catch: java.lang.IllegalAccessException -> L3d java.lang.reflect.InvocationTargetException -> L46
            r3.<init>(r9)     // Catch: java.lang.IllegalAccessException -> L3d java.lang.reflect.InvocationTargetException -> L46
            java.lang.reflect.InvocationHandler r3 = (java.lang.reflect.InvocationHandler) r3     // Catch: java.lang.IllegalAccessException -> L3d java.lang.reflect.InvocationTargetException -> L46
            java.lang.Object r9 = java.lang.reflect.Proxy.newProxyInstance(r0, r2, r3)     // Catch: java.lang.IllegalAccessException -> L3d java.lang.reflect.InvocationTargetException -> L46
            java.lang.reflect.Method r0 = r6.putMethod     // Catch: java.lang.IllegalAccessException -> L3d java.lang.reflect.InvocationTargetException -> L46
            r2 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.IllegalAccessException -> L3d java.lang.reflect.InvocationTargetException -> L46
            r1[r4] = r7     // Catch: java.lang.IllegalAccessException -> L3d java.lang.reflect.InvocationTargetException -> L46
            r1[r5] = r9     // Catch: java.lang.IllegalAccessException -> L3d java.lang.reflect.InvocationTargetException -> L46
            r0.invoke(r2, r1)     // Catch: java.lang.IllegalAccessException -> L3d java.lang.reflect.InvocationTargetException -> L46
            return
        L3d:
            r7 = move-exception
            java.lang.AssertionError r9 = new java.lang.AssertionError
            java.lang.Throwable r7 = (java.lang.Throwable) r7
            r9.<init>(r8, r7)
            throw r9
        L46:
            r7 = move-exception
            java.lang.AssertionError r9 = new java.lang.AssertionError
            java.lang.Throwable r7 = (java.lang.Throwable) r7
            r9.<init>(r8, r7)
            throw r9
    }

    @Override
    public java.lang.String getSelectedProtocol(javax.net.ssl.SSLSocket r10) {
            r9 = this;
            java.lang.String r0 = "failed to get ALPN selected protocol"
            java.lang.String r1 = "sslSocket"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r1)
            java.lang.reflect.Method r1 = r9.getMethod     // Catch: java.lang.IllegalAccessException -> L49 java.lang.reflect.InvocationTargetException -> L52
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.IllegalAccessException -> L49 java.lang.reflect.InvocationTargetException -> L52
            r3 = 0
            r2[r3] = r10     // Catch: java.lang.IllegalAccessException -> L49 java.lang.reflect.InvocationTargetException -> L52
            r10 = 0
            java.lang.Object r1 = r1.invoke(r10, r2)     // Catch: java.lang.IllegalAccessException -> L49 java.lang.reflect.InvocationTargetException -> L52
            java.lang.reflect.InvocationHandler r1 = java.lang.reflect.Proxy.getInvocationHandler(r1)     // Catch: java.lang.IllegalAccessException -> L49 java.lang.reflect.InvocationTargetException -> L52
            if (r1 == 0) goto L41
            okhttp3.internal.platform.Jdk8WithJettyBootPlatform$AlpnProvider r1 = (okhttp3.internal.platform.Jdk8WithJettyBootPlatform.AlpnProvider) r1     // Catch: java.lang.IllegalAccessException -> L49 java.lang.reflect.InvocationTargetException -> L52
            boolean r2 = r1.getUnsupported()     // Catch: java.lang.IllegalAccessException -> L49 java.lang.reflect.InvocationTargetException -> L52
            if (r2 != 0) goto L35
            java.lang.String r2 = r1.getSelected()     // Catch: java.lang.IllegalAccessException -> L49 java.lang.reflect.InvocationTargetException -> L52
            if (r2 != 0) goto L35
            r3 = r9
            okhttp3.internal.platform.Platform r3 = (okhttp3.internal.platform.Platform) r3     // Catch: java.lang.IllegalAccessException -> L49 java.lang.reflect.InvocationTargetException -> L52
            java.lang.String r4 = "ALPN callback dropped: HTTP/2 is disabled. Is alpn-boot on the boot class path?"
            r5 = 0
            r6 = 0
            r7 = 6
            r8 = 0
            okhttp3.internal.platform.Platform.log$default(r3, r4, r5, r6, r7, r8)     // Catch: java.lang.IllegalAccessException -> L49 java.lang.reflect.InvocationTargetException -> L52
            return r10
        L35:
            boolean r2 = r1.getUnsupported()     // Catch: java.lang.IllegalAccessException -> L49 java.lang.reflect.InvocationTargetException -> L52
            if (r2 == 0) goto L3c
            goto L40
        L3c:
            java.lang.String r10 = r1.getSelected()     // Catch: java.lang.IllegalAccessException -> L49 java.lang.reflect.InvocationTargetException -> L52
        L40:
            return r10
        L41:
            java.lang.NullPointerException r10 = new java.lang.NullPointerException     // Catch: java.lang.IllegalAccessException -> L49 java.lang.reflect.InvocationTargetException -> L52
            java.lang.String r1 = "null cannot be cast to non-null type okhttp3.internal.platform.Jdk8WithJettyBootPlatform.AlpnProvider"
            r10.<init>(r1)     // Catch: java.lang.IllegalAccessException -> L49 java.lang.reflect.InvocationTargetException -> L52
            throw r10     // Catch: java.lang.IllegalAccessException -> L49 java.lang.reflect.InvocationTargetException -> L52
        L49:
            r10 = move-exception
            java.lang.AssertionError r1 = new java.lang.AssertionError
            java.lang.Throwable r10 = (java.lang.Throwable) r10
            r1.<init>(r0, r10)
            throw r1
        L52:
            r10 = move-exception
            java.lang.AssertionError r1 = new java.lang.AssertionError
            java.lang.Throwable r10 = (java.lang.Throwable) r10
            r1.<init>(r0, r10)
            throw r1
    }
}
