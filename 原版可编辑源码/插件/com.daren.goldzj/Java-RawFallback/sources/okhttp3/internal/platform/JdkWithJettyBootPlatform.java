package okhttp3.internal.platform;

class JdkWithJettyBootPlatform extends okhttp3.internal.platform.Platform {
    private final java.lang.Class<?> clientProviderClass;
    private final java.lang.reflect.Method getMethod;
    private final java.lang.reflect.Method putMethod;
    private final java.lang.reflect.Method removeMethod;
    private final java.lang.Class<?> serverProviderClass;

    private static class JettyNegoProvider implements java.lang.reflect.InvocationHandler {
        private final java.util.List<java.lang.String> protocols;
        java.lang.String selected;
        boolean unsupported;

        JettyNegoProvider(java.util.List<java.lang.String> r1) {
                r0 = this;
                r0.<init>()
                r0.protocols = r1
                return
        }

        @Override
        public java.lang.Object invoke(java.lang.Object r6, java.lang.reflect.Method r7, java.lang.Object[] r8) throws java.lang.Throwable {
                r5 = this;
                java.lang.String r6 = r7.getName()
                java.lang.Class r0 = r7.getReturnType()
                if (r8 != 0) goto Lc
                java.lang.String[] r8 = okhttp3.internal.Util.EMPTY_STRING_ARRAY
            Lc:
                java.lang.String r1 = "supports"
                boolean r1 = r6.equals(r1)
                r2 = 1
                if (r1 == 0) goto L1e
                java.lang.Class r1 = java.lang.Boolean.TYPE
                if (r1 != r0) goto L1e
                java.lang.Boolean r6 = java.lang.Boolean.valueOf(r2)
                return r6
            L1e:
                java.lang.String r1 = "unsupported"
                boolean r1 = r6.equals(r1)
                r3 = 0
                if (r1 == 0) goto L2e
                java.lang.Class r1 = java.lang.Void.TYPE
                if (r1 != r0) goto L2e
                r5.unsupported = r2
                return r3
            L2e:
                java.lang.String r1 = "protocols"
                boolean r1 = r6.equals(r1)
                if (r1 == 0) goto L3c
                int r1 = r8.length
                if (r1 != 0) goto L3c
                java.util.List<java.lang.String> r6 = r5.protocols
                return r6
            L3c:
                java.lang.String r1 = "selectProtocol"
                boolean r1 = r6.equals(r1)
                r4 = 0
                if (r1 != 0) goto L4d
                java.lang.String r1 = "select"
                boolean r1 = r6.equals(r1)
                if (r1 == 0) goto L88
            L4d:
                java.lang.Class<java.lang.String> r1 = java.lang.String.class
                if (r1 != r0) goto L88
                int r0 = r8.length
                if (r0 != r2) goto L88
                r0 = r8[r4]
                boolean r0 = r0 instanceof java.util.List
                if (r0 == 0) goto L88
                r6 = r8[r4]
                java.util.List r6 = (java.util.List) r6
                int r7 = r6.size()
                r8 = 0
            L63:
                if (r8 >= r7) goto L7d
                java.util.List<java.lang.String> r0 = r5.protocols
                java.lang.Object r1 = r6.get(r8)
                boolean r0 = r0.contains(r1)
                if (r0 == 0) goto L7a
                java.lang.Object r6 = r6.get(r8)
                java.lang.String r6 = (java.lang.String) r6
                r5.selected = r6
                return r6
            L7a:
                int r8 = r8 + 1
                goto L63
            L7d:
                java.util.List<java.lang.String> r6 = r5.protocols
                java.lang.Object r6 = r6.get(r4)
                java.lang.String r6 = (java.lang.String) r6
                r5.selected = r6
                return r6
            L88:
                java.lang.String r0 = "protocolSelected"
                boolean r0 = r6.equals(r0)
                if (r0 != 0) goto L98
                java.lang.String r0 = "selected"
                boolean r6 = r6.equals(r0)
                if (r6 == 0) goto La2
            L98:
                int r6 = r8.length
                if (r6 != r2) goto La2
                r6 = r8[r4]
                java.lang.String r6 = (java.lang.String) r6
                r5.selected = r6
                return r3
            La2:
                java.lang.Object r6 = r7.invoke(r5, r8)
                return r6
        }
    }

    JdkWithJettyBootPlatform(java.lang.reflect.Method r1, java.lang.reflect.Method r2, java.lang.reflect.Method r3, java.lang.Class<?> r4, java.lang.Class<?> r5) {
            r0 = this;
            r0.<init>()
            r0.putMethod = r1
            r0.getMethod = r2
            r0.removeMethod = r3
            r0.clientProviderClass = r4
            r0.serverProviderClass = r5
            return
    }

    public static okhttp3.internal.platform.Platform buildIfSupported() {
            java.lang.String r0 = "org.eclipse.jetty.alpn.ALPN"
            java.lang.Class r1 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L76
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L76
            r2.<init>()     // Catch: java.lang.Throwable -> L76
            r2.append(r0)     // Catch: java.lang.Throwable -> L76
            java.lang.String r3 = "$Provider"
            r2.append(r3)     // Catch: java.lang.Throwable -> L76
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L76
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Throwable -> L76
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L76
            r3.<init>()     // Catch: java.lang.Throwable -> L76
            r3.append(r0)     // Catch: java.lang.Throwable -> L76
            java.lang.String r4 = "$ClientProvider"
            r3.append(r4)     // Catch: java.lang.Throwable -> L76
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L76
            java.lang.Class r8 = java.lang.Class.forName(r3)     // Catch: java.lang.Throwable -> L76
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L76
            r3.<init>()     // Catch: java.lang.Throwable -> L76
            r3.append(r0)     // Catch: java.lang.Throwable -> L76
            java.lang.String r0 = "$ServerProvider"
            r3.append(r0)     // Catch: java.lang.Throwable -> L76
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L76
            java.lang.Class r9 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L76
            java.lang.String r0 = "put"
            r3 = 2
            java.lang.Class[] r3 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L76
            java.lang.Class<javax.net.ssl.SSLSocket> r4 = javax.net.ssl.SSLSocket.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Throwable -> L76
            r4 = 1
            r3[r4] = r2     // Catch: java.lang.Throwable -> L76
            java.lang.reflect.Method r0 = r1.getMethod(r0, r3)     // Catch: java.lang.Throwable -> L76
            java.lang.String r2 = "get"
            java.lang.Class[] r3 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L76
            java.lang.Class<javax.net.ssl.SSLSocket> r6 = javax.net.ssl.SSLSocket.class
            r3[r5] = r6     // Catch: java.lang.Throwable -> L76
            java.lang.reflect.Method r6 = r1.getMethod(r2, r3)     // Catch: java.lang.Throwable -> L76
            java.lang.String r2 = "remove"
            java.lang.Class[] r3 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L76
            java.lang.Class<javax.net.ssl.SSLSocket> r4 = javax.net.ssl.SSLSocket.class
            r3[r5] = r4     // Catch: java.lang.Throwable -> L76
            java.lang.reflect.Method r7 = r1.getMethod(r2, r3)     // Catch: java.lang.Throwable -> L76
            okhttp3.internal.platform.JdkWithJettyBootPlatform r1 = new okhttp3.internal.platform.JdkWithJettyBootPlatform     // Catch: java.lang.Throwable -> L76
            r4 = r1
            r5 = r0
            r4.<init>(r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L76
            return r1
        L76:
            r0 = 0
            return r0
    }

    @Override
    public void afterHandshake(javax.net.ssl.SSLSocket r5) {
            r4 = this;
            java.lang.reflect.Method r0 = r4.removeMethod     // Catch: java.lang.reflect.InvocationTargetException -> Ld java.lang.IllegalAccessException -> Lf
            r1 = 0
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.reflect.InvocationTargetException -> Ld java.lang.IllegalAccessException -> Lf
            r3 = 0
            r2[r3] = r5     // Catch: java.lang.reflect.InvocationTargetException -> Ld java.lang.IllegalAccessException -> Lf
            r0.invoke(r1, r2)     // Catch: java.lang.reflect.InvocationTargetException -> Ld java.lang.IllegalAccessException -> Lf
            return
        Ld:
            r5 = move-exception
            goto L10
        Lf:
            r5 = move-exception
        L10:
            java.lang.String r0 = "unable to remove alpn"
            java.lang.AssertionError r5 = okhttp3.internal.Util.assertionError(r0, r5)
            throw r5
    }

    @Override
    public void configureTlsExtensions(javax.net.ssl.SSLSocket r6, java.lang.String r7, java.util.List<okhttp3.Protocol> r8) {
            r5 = this;
            java.util.List r7 = alpnProtocolNames(r8)
            java.lang.Class<okhttp3.internal.platform.Platform> r8 = okhttp3.internal.platform.Platform.class
            java.lang.ClassLoader r8 = r8.getClassLoader()     // Catch: java.lang.IllegalAccessException -> L2d java.lang.reflect.InvocationTargetException -> L2f
            r0 = 2
            java.lang.Class[] r1 = new java.lang.Class[r0]     // Catch: java.lang.IllegalAccessException -> L2d java.lang.reflect.InvocationTargetException -> L2f
            java.lang.Class<?> r2 = r5.clientProviderClass     // Catch: java.lang.IllegalAccessException -> L2d java.lang.reflect.InvocationTargetException -> L2f
            r3 = 0
            r1[r3] = r2     // Catch: java.lang.IllegalAccessException -> L2d java.lang.reflect.InvocationTargetException -> L2f
            java.lang.Class<?> r2 = r5.serverProviderClass     // Catch: java.lang.IllegalAccessException -> L2d java.lang.reflect.InvocationTargetException -> L2f
            r4 = 1
            r1[r4] = r2     // Catch: java.lang.IllegalAccessException -> L2d java.lang.reflect.InvocationTargetException -> L2f
            okhttp3.internal.platform.JdkWithJettyBootPlatform$JettyNegoProvider r2 = new okhttp3.internal.platform.JdkWithJettyBootPlatform$JettyNegoProvider     // Catch: java.lang.IllegalAccessException -> L2d java.lang.reflect.InvocationTargetException -> L2f
            r2.<init>(r7)     // Catch: java.lang.IllegalAccessException -> L2d java.lang.reflect.InvocationTargetException -> L2f
            java.lang.Object r7 = java.lang.reflect.Proxy.newProxyInstance(r8, r1, r2)     // Catch: java.lang.IllegalAccessException -> L2d java.lang.reflect.InvocationTargetException -> L2f
            java.lang.reflect.Method r8 = r5.putMethod     // Catch: java.lang.IllegalAccessException -> L2d java.lang.reflect.InvocationTargetException -> L2f
            r1 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.IllegalAccessException -> L2d java.lang.reflect.InvocationTargetException -> L2f
            r0[r3] = r6     // Catch: java.lang.IllegalAccessException -> L2d java.lang.reflect.InvocationTargetException -> L2f
            r0[r4] = r7     // Catch: java.lang.IllegalAccessException -> L2d java.lang.reflect.InvocationTargetException -> L2f
            r8.invoke(r1, r0)     // Catch: java.lang.IllegalAccessException -> L2d java.lang.reflect.InvocationTargetException -> L2f
            return
        L2d:
            r6 = move-exception
            goto L30
        L2f:
            r6 = move-exception
        L30:
            java.lang.String r7 = "unable to set alpn"
            java.lang.AssertionError r6 = okhttp3.internal.Util.assertionError(r7, r6)
            throw r6
    }

    @Override
    @javax.annotation.Nullable
    public java.lang.String getSelectedProtocol(javax.net.ssl.SSLSocket r4) {
            r3 = this;
            java.lang.reflect.Method r0 = r3.getMethod     // Catch: java.lang.IllegalAccessException -> L2e java.lang.reflect.InvocationTargetException -> L30
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.IllegalAccessException -> L2e java.lang.reflect.InvocationTargetException -> L30
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.IllegalAccessException -> L2e java.lang.reflect.InvocationTargetException -> L30
            r4 = 0
            java.lang.Object r0 = r0.invoke(r4, r1)     // Catch: java.lang.IllegalAccessException -> L2e java.lang.reflect.InvocationTargetException -> L30
            java.lang.reflect.InvocationHandler r0 = java.lang.reflect.Proxy.getInvocationHandler(r0)     // Catch: java.lang.IllegalAccessException -> L2e java.lang.reflect.InvocationTargetException -> L30
            okhttp3.internal.platform.JdkWithJettyBootPlatform$JettyNegoProvider r0 = (okhttp3.internal.platform.JdkWithJettyBootPlatform.JettyNegoProvider) r0     // Catch: java.lang.IllegalAccessException -> L2e java.lang.reflect.InvocationTargetException -> L30
            boolean r1 = r0.unsupported     // Catch: java.lang.IllegalAccessException -> L2e java.lang.reflect.InvocationTargetException -> L30
            if (r1 != 0) goto L26
            java.lang.String r1 = r0.selected     // Catch: java.lang.IllegalAccessException -> L2e java.lang.reflect.InvocationTargetException -> L30
            if (r1 != 0) goto L26
            okhttp3.internal.platform.Platform r0 = okhttp3.internal.platform.Platform.get()     // Catch: java.lang.IllegalAccessException -> L2e java.lang.reflect.InvocationTargetException -> L30
            r1 = 4
            java.lang.String r2 = "ALPN callback dropped: HTTP/2 is disabled. Is alpn-boot on the boot class path?"
            r0.log(r1, r2, r4)     // Catch: java.lang.IllegalAccessException -> L2e java.lang.reflect.InvocationTargetException -> L30
            return r4
        L26:
            boolean r1 = r0.unsupported     // Catch: java.lang.IllegalAccessException -> L2e java.lang.reflect.InvocationTargetException -> L30
            if (r1 == 0) goto L2b
            goto L2d
        L2b:
            java.lang.String r4 = r0.selected     // Catch: java.lang.IllegalAccessException -> L2e java.lang.reflect.InvocationTargetException -> L30
        L2d:
            return r4
        L2e:
            r4 = move-exception
            goto L31
        L30:
            r4 = move-exception
        L31:
            java.lang.String r0 = "unable to get selected protocol"
            java.lang.AssertionError r4 = okhttp3.internal.Util.assertionError(r0, r4)
            throw r4
    }
}
