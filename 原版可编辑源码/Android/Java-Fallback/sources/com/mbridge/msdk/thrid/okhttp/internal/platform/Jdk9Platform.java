package com.mbridge.msdk.thrid.okhttp.internal.platform;

final class Jdk9Platform extends com.mbridge.msdk.thrid.okhttp.internal.platform.Platform {
    final java.lang.reflect.Method getProtocolMethod;
    final java.lang.reflect.Method setProtocolMethod;

    Jdk9Platform(java.lang.reflect.Method r1, java.lang.reflect.Method r2) {
            r0 = this;
            r0.<init>()
            r0.setProtocolMethod = r1
            r0.getProtocolMethod = r2
            return
    }

    public static com.mbridge.msdk.thrid.okhttp.internal.platform.Jdk9Platform buildIfSupported() {
            java.lang.Class<javax.net.ssl.SSLParameters> r0 = javax.net.ssl.SSLParameters.class
            java.lang.String r1 = "setApplicationProtocols"
            r2 = 1
            java.lang.Class[] r2 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> L20
            java.lang.Class<java.lang.String[]> r3 = java.lang.String[].class
            r4 = 0
            r2[r4] = r3     // Catch: java.lang.NoSuchMethodException -> L20
            java.lang.reflect.Method r0 = r0.getMethod(r1, r2)     // Catch: java.lang.NoSuchMethodException -> L20
            java.lang.Class<javax.net.ssl.SSLSocket> r1 = javax.net.ssl.SSLSocket.class
            java.lang.String r2 = "getApplicationProtocol"
            java.lang.Class[] r3 = new java.lang.Class[r4]     // Catch: java.lang.NoSuchMethodException -> L20
            java.lang.reflect.Method r1 = r1.getMethod(r2, r3)     // Catch: java.lang.NoSuchMethodException -> L20
            com.mbridge.msdk.thrid.okhttp.internal.platform.Jdk9Platform r2 = new com.mbridge.msdk.thrid.okhttp.internal.platform.Jdk9Platform     // Catch: java.lang.NoSuchMethodException -> L20
            r2.<init>(r0, r1)     // Catch: java.lang.NoSuchMethodException -> L20
            return r2
        L20:
            r0 = 0
            return r0
    }

    @Override
    public void configureTlsExtensions(javax.net.ssl.SSLSocket r5, java.lang.String r6, java.util.List<com.mbridge.msdk.thrid.okhttp.Protocol> r7) {
            r4 = this;
            javax.net.ssl.SSLParameters r6 = r5.getSSLParameters()     // Catch: java.lang.reflect.InvocationTargetException -> L21 java.lang.IllegalAccessException -> L23
            java.util.List r7 = alpnProtocolNames(r7)     // Catch: java.lang.reflect.InvocationTargetException -> L21 java.lang.IllegalAccessException -> L23
            java.lang.reflect.Method r0 = r4.setProtocolMethod     // Catch: java.lang.reflect.InvocationTargetException -> L21 java.lang.IllegalAccessException -> L23
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.reflect.InvocationTargetException -> L21 java.lang.IllegalAccessException -> L23
            r2 = 0
            int r3 = r7.size()     // Catch: java.lang.reflect.InvocationTargetException -> L21 java.lang.IllegalAccessException -> L23
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.reflect.InvocationTargetException -> L21 java.lang.IllegalAccessException -> L23
            java.lang.Object[] r7 = r7.toArray(r3)     // Catch: java.lang.reflect.InvocationTargetException -> L21 java.lang.IllegalAccessException -> L23
            r1[r2] = r7     // Catch: java.lang.reflect.InvocationTargetException -> L21 java.lang.IllegalAccessException -> L23
            r0.invoke(r6, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L21 java.lang.IllegalAccessException -> L23
            r5.setSSLParameters(r6)     // Catch: java.lang.reflect.InvocationTargetException -> L21 java.lang.IllegalAccessException -> L23
            return
        L21:
            r5 = move-exception
            goto L24
        L23:
            r5 = move-exception
        L24:
            java.lang.String r6 = "unable to set ssl parameters"
            java.lang.AssertionError r5 = com.mbridge.msdk.thrid.okhttp.internal.Util.assertionError(r6, r5)
            throw r5
    }

    @Override
    @javax.annotation.Nullable
    public java.lang.String getSelectedProtocol(javax.net.ssl.SSLSocket r5) {
            r4 = this;
            java.lang.String r0 = "failed to get ALPN selected protocol"
            r1 = 0
            java.lang.reflect.Method r2 = r4.getProtocolMethod     // Catch: java.lang.IllegalAccessException -> L1b java.lang.reflect.InvocationTargetException -> L21
            r3 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.IllegalAccessException -> L1b java.lang.reflect.InvocationTargetException -> L21
            java.lang.Object r5 = r2.invoke(r5, r3)     // Catch: java.lang.IllegalAccessException -> L1b java.lang.reflect.InvocationTargetException -> L21
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.IllegalAccessException -> L1b java.lang.reflect.InvocationTargetException -> L21
            if (r5 == 0) goto L1a
            java.lang.String r2 = ""
            boolean r0 = r5.equals(r2)     // Catch: java.lang.IllegalAccessException -> L1b java.lang.reflect.InvocationTargetException -> L21
            if (r0 == 0) goto L19
            goto L1a
        L19:
            return r5
        L1a:
            return r1
        L1b:
            r5 = move-exception
            java.lang.AssertionError r5 = com.mbridge.msdk.thrid.okhttp.internal.Util.assertionError(r0, r5)
            throw r5
        L21:
            r5 = move-exception
            java.lang.Throwable r2 = r5.getCause()
            boolean r2 = r2 instanceof java.lang.UnsupportedOperationException
            if (r2 == 0) goto L2b
            return r1
        L2b:
            java.lang.AssertionError r5 = com.mbridge.msdk.thrid.okhttp.internal.Util.assertionError(r0, r5)
            throw r5
    }

    @Override
    public javax.net.ssl.X509TrustManager trustManager(javax.net.ssl.SSLSocketFactory r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "clientBuilder.sslSocketFactory(SSLSocketFactory) not supported on JDK 9+"
            r2.<init>(r0)
            throw r2
    }
}
