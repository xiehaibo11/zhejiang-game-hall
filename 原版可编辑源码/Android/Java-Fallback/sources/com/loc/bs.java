package com.loc;

public final class bs extends javax.net.ssl.SSLSocketFactory {
    private javax.net.ssl.SSLSocketFactory a;
    private android.content.Context b;
    private javax.net.ssl.SSLContext c;

    public bs(android.content.Context r5, javax.net.ssl.SSLContext r6) {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = "<init3>"
            r1 = 9
            java.lang.String r2 = "<init2>"
            java.lang.String r3 = "myssl"
            if (r5 == 0) goto L13
            android.content.Context r5 = r5.getApplicationContext()     // Catch: java.lang.Throwable -> L42
            r4.b = r5     // Catch: java.lang.Throwable -> L42
        L13:
            r4.c = r6     // Catch: java.lang.Throwable -> L42
            if (r6 == 0) goto L1d
            javax.net.ssl.SSLSocketFactory r5 = r6.getSocketFactory()     // Catch: java.lang.Throwable -> L42
            r4.a = r5     // Catch: java.lang.Throwable -> L42
        L1d:
            javax.net.ssl.SSLContext r5 = r4.c     // Catch: java.lang.Throwable -> L2c
            if (r5 != 0) goto L30
            int r5 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L2c
            if (r5 < r1) goto L30
            javax.net.ssl.SSLContext r5 = javax.net.ssl.SSLContext.getDefault()     // Catch: java.lang.Throwable -> L2c
            r4.c = r5     // Catch: java.lang.Throwable -> L2c
            goto L30
        L2c:
            r5 = move-exception
            com.loc.av.b(r5, r3, r2)
        L30:
            javax.net.ssl.SSLSocketFactory r5 = r4.a     // Catch: java.lang.Throwable -> L3d
            if (r5 != 0) goto L3c
            javax.net.SocketFactory r5 = javax.net.ssl.SSLSocketFactory.getDefault()     // Catch: java.lang.Throwable -> L3d
            javax.net.ssl.SSLSocketFactory r5 = (javax.net.ssl.SSLSocketFactory) r5     // Catch: java.lang.Throwable -> L3d
            r4.a = r5     // Catch: java.lang.Throwable -> L3d
        L3c:
            return
        L3d:
            r5 = move-exception
            com.loc.av.b(r5, r3, r0)
            return
        L42:
            r5 = move-exception
            java.lang.String r6 = "<init>"
            com.loc.av.b(r5, r3, r6)     // Catch: java.lang.Throwable -> L6d
            javax.net.ssl.SSLContext r5 = r4.c     // Catch: java.lang.Throwable -> L57
            if (r5 != 0) goto L5b
            int r5 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L57
            if (r5 < r1) goto L5b
            javax.net.ssl.SSLContext r5 = javax.net.ssl.SSLContext.getDefault()     // Catch: java.lang.Throwable -> L57
            r4.c = r5     // Catch: java.lang.Throwable -> L57
            goto L5b
        L57:
            r5 = move-exception
            com.loc.av.b(r5, r3, r2)
        L5b:
            javax.net.ssl.SSLSocketFactory r5 = r4.a     // Catch: java.lang.Throwable -> L68
            if (r5 != 0) goto L67
            javax.net.SocketFactory r5 = javax.net.ssl.SSLSocketFactory.getDefault()     // Catch: java.lang.Throwable -> L68
            javax.net.ssl.SSLSocketFactory r5 = (javax.net.ssl.SSLSocketFactory) r5     // Catch: java.lang.Throwable -> L68
            r4.a = r5     // Catch: java.lang.Throwable -> L68
        L67:
            return
        L68:
            r5 = move-exception
            com.loc.av.b(r5, r3, r0)
            return
        L6d:
            r5 = move-exception
            javax.net.ssl.SSLContext r6 = r4.c     // Catch: java.lang.Throwable -> L7d
            if (r6 != 0) goto L81
            int r6 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L7d
            if (r6 < r1) goto L81
            javax.net.ssl.SSLContext r6 = javax.net.ssl.SSLContext.getDefault()     // Catch: java.lang.Throwable -> L7d
            r4.c = r6     // Catch: java.lang.Throwable -> L7d
            goto L81
        L7d:
            r6 = move-exception
            com.loc.av.b(r6, r3, r2)
        L81:
            javax.net.ssl.SSLSocketFactory r6 = r4.a     // Catch: java.lang.Throwable -> L8e
            if (r6 != 0) goto L92
            javax.net.SocketFactory r6 = javax.net.ssl.SSLSocketFactory.getDefault()     // Catch: java.lang.Throwable -> L8e
            javax.net.ssl.SSLSocketFactory r6 = (javax.net.ssl.SSLSocketFactory) r6     // Catch: java.lang.Throwable -> L8e
            r4.a = r6     // Catch: java.lang.Throwable -> L8e
            goto L92
        L8e:
            r6 = move-exception
            com.loc.av.b(r6, r3, r0)
        L92:
            throw r5
    }

    private static java.net.Socket a(java.net.Socket r3) {
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L1c
            r1 = 21
            if (r0 >= r1) goto L7
            return r3
        L7:
            boolean r0 = com.loc.m.f.b     // Catch: java.lang.Throwable -> L1c
            if (r0 == 0) goto L24
            boolean r0 = r3 instanceof javax.net.ssl.SSLSocket     // Catch: java.lang.Throwable -> L1c
            if (r0 == 0) goto L24
            r0 = r3
            javax.net.ssl.SSLSocket r0 = (javax.net.ssl.SSLSocket) r0     // Catch: java.lang.Throwable -> L1c
            java.lang.String r1 = "TLSv1.2"
            java.lang.String[] r1 = new java.lang.String[]{r1}     // Catch: java.lang.Throwable -> L1c
            r0.setEnabledProtocols(r1)     // Catch: java.lang.Throwable -> L1c
            goto L24
        L1c:
            r0 = move-exception
            java.lang.String r1 = "myssl"
            java.lang.String r2 = "stlv2"
            com.loc.av.b(r0, r1, r2)
        L24:
            return r3
    }

    private void a(android.net.SSLSessionCache r10) {
            r9 = this;
            javax.net.ssl.SSLContext r0 = r9.c
            if (r0 != 0) goto L5
            return
        L5:
            javax.net.ssl.SSLSessionContext r0 = r0.getClientSessionContext()     // Catch: java.lang.Throwable -> L4a
            java.lang.Class r1 = r10.getClass()     // Catch: java.lang.Throwable -> L4a
            java.lang.String r2 = "UbVNlc3Npb25DYWNoZQ"
            java.lang.String r2 = com.loc.x.c(r2)     // Catch: java.lang.Throwable -> L4a
            java.lang.reflect.Field r1 = r1.getDeclaredField(r2)     // Catch: java.lang.Throwable -> L4a
            r2 = 1
            r1.setAccessible(r2)     // Catch: java.lang.Throwable -> L4a
            java.lang.Object r10 = r1.get(r10)     // Catch: java.lang.Throwable -> L4a
            java.lang.Class r1 = r0.getClass()     // Catch: java.lang.Throwable -> L4a
            java.lang.reflect.Method[] r1 = r1.getMethods()     // Catch: java.lang.Throwable -> L4a
            java.lang.String r3 = "Yc2V0UGVyc2lzdGVudENhY2hl"
            java.lang.String r3 = com.loc.x.c(r3)     // Catch: java.lang.Throwable -> L4a
            int r4 = r1.length     // Catch: java.lang.Throwable -> L4a
            r5 = 0
            r6 = 0
        L30:
            if (r6 >= r4) goto L49
            r7 = r1[r6]     // Catch: java.lang.Throwable -> L4a
            java.lang.String r8 = r7.getName()     // Catch: java.lang.Throwable -> L4a
            boolean r8 = r8.equals(r3)     // Catch: java.lang.Throwable -> L4a
            if (r8 == 0) goto L46
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L4a
            r1[r5] = r10     // Catch: java.lang.Throwable -> L4a
            r7.invoke(r0, r1)     // Catch: java.lang.Throwable -> L4a
            return
        L46:
            int r6 = r6 + 1
            goto L30
        L49:
            return
        L4a:
            r10 = move-exception
            java.lang.String r0 = "myssl"
            java.lang.String r1 = "isc2"
            com.loc.av.b(r10, r0, r1)
            return
    }

    private static void b(java.net.Socket r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 >= r1) goto L7
            return
        L7:
            boolean r0 = com.loc.m.f.c
            if (r0 == 0) goto L4f
            boolean r0 = com.loc.m.f.e
            if (r0 != 0) goto L10
            goto L4f
        L10:
            boolean r0 = r6 instanceof javax.net.ssl.SSLSocket
            if (r0 != 0) goto L15
            return
        L15:
            int r0 = com.loc.m.f.f
            int r2 = com.loc.m.f.d
            if (r0 <= r2) goto L1e
            int r0 = com.loc.m.f.d
            goto L20
        L1e:
            int r0 = com.loc.m.f.f
        L20:
            if (r0 <= r1) goto L27
            int r1 = android.os.Build.VERSION.SDK_INT
            if (r1 <= r0) goto L27
            return
        L27:
            java.lang.Class r0 = r6.getClass()
            java.lang.String r1 = "Cc2V0VXNlU2Vzc2lvblRpY2tldHM"
            java.lang.String r1 = com.loc.x.c(r1)     // Catch: java.lang.Throwable -> L47
            r2 = 1
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L47
            java.lang.Class r4 = java.lang.Boolean.TYPE     // Catch: java.lang.Throwable -> L47
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Throwable -> L47
            java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.Throwable -> L47
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L47
            java.lang.Boolean r2 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L47
            r1[r5] = r2     // Catch: java.lang.Throwable -> L47
            r0.invoke(r6, r1)     // Catch: java.lang.Throwable -> L47
            return
        L47:
            r6 = move-exception
            java.lang.String r0 = "myssl"
            java.lang.String r1 = "sust"
            com.loc.av.b(r6, r0, r1)
        L4f:
            return
    }

    public final void a() {
            r8 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 >= r1) goto L7
            return
        L7:
            boolean r0 = com.loc.m.f.c
            if (r0 != 0) goto Lc
            return
        Lc:
            android.content.Context r0 = r8.b
            if (r0 == 0) goto L67
            javax.net.ssl.SSLContext r0 = r8.c
            if (r0 != 0) goto L15
            goto L67
        L15:
            int r0 = com.loc.m.f.d
            if (r0 <= r1) goto L1e
            int r1 = android.os.Build.VERSION.SDK_INT
            if (r1 <= r0) goto L1e
            return
        L1e:
            android.net.SSLSessionCache r0 = new android.net.SSLSessionCache
            android.content.Context r1 = r8.b
            r0.<init>(r1)
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 20
            if (r1 <= r2) goto L64
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 28
            if (r1 >= r2) goto L64
            java.lang.Class r1 = r0.getClass()     // Catch: java.lang.Throwable -> L58
            java.lang.String r2 = "MaW5zdGFsbA"
            java.lang.String r2 = com.loc.x.c(r2)     // Catch: java.lang.Throwable -> L58
            r3 = 2
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L58
            java.lang.Class<android.net.SSLSessionCache> r5 = android.net.SSLSessionCache.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Throwable -> L58
            java.lang.Class<javax.net.ssl.SSLContext> r5 = javax.net.ssl.SSLContext.class
            r7 = 1
            r4[r7] = r5     // Catch: java.lang.Throwable -> L58
            java.lang.reflect.Method r1 = r1.getMethod(r2, r4)     // Catch: java.lang.Throwable -> L58
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L58
            r2[r6] = r0     // Catch: java.lang.Throwable -> L58
            javax.net.ssl.SSLContext r3 = r8.c     // Catch: java.lang.Throwable -> L58
            r2[r7] = r3     // Catch: java.lang.Throwable -> L58
            r1.invoke(r0, r2)     // Catch: java.lang.Throwable -> L58
            return
        L58:
            r1 = move-exception
            java.lang.String r2 = "myssl"
            java.lang.String r3 = "isc1"
            com.loc.av.b(r1, r2, r3)
            r8.a(r0)
            return
        L64:
            r8.a(r0)
        L67:
            return
    }

    @Override
    public final java.net.Socket createSocket() throws java.io.IOException {
            r3 = this;
            javax.net.ssl.SSLSocketFactory r0 = r3.a     // Catch: java.lang.Throwable -> L12
            if (r0 == 0) goto L1e
            javax.net.ssl.SSLSocketFactory r0 = r3.a     // Catch: java.lang.Throwable -> L12
            java.net.Socket r0 = r0.createSocket()     // Catch: java.lang.Throwable -> L12
            java.net.Socket r0 = a(r0)     // Catch: java.lang.Throwable -> L12
            b(r0)     // Catch: java.lang.Throwable -> L12
            return r0
        L12:
            r0 = move-exception
            java.lang.String r1 = "myssl"
            java.lang.String r2 = "cs1"
            com.loc.av.b(r0, r1, r2)
            boolean r1 = r0 instanceof java.io.IOException
            if (r1 != 0) goto L20
        L1e:
            r0 = 0
            return r0
        L20:
            java.io.IOException r0 = (java.io.IOException) r0
            throw r0
    }

    @Override
    public final java.net.Socket createSocket(java.lang.String r2, int r3) throws java.io.IOException, java.net.UnknownHostException {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.a     // Catch: java.lang.Throwable -> L12
            if (r0 == 0) goto L22
            javax.net.ssl.SSLSocketFactory r0 = r1.a     // Catch: java.lang.Throwable -> L12
            java.net.Socket r2 = r0.createSocket(r2, r3)     // Catch: java.lang.Throwable -> L12
            java.net.Socket r2 = a(r2)     // Catch: java.lang.Throwable -> L12
            b(r2)     // Catch: java.lang.Throwable -> L12
            return r2
        L12:
            r2 = move-exception
            java.lang.String r3 = "myssl"
            java.lang.String r0 = "cs3"
            com.loc.av.b(r2, r3, r0)
            boolean r3 = r2 instanceof java.net.UnknownHostException
            if (r3 != 0) goto L27
            boolean r3 = r2 instanceof java.io.IOException
            if (r3 != 0) goto L24
        L22:
            r2 = 0
            return r2
        L24:
            java.io.IOException r2 = (java.io.IOException) r2
            throw r2
        L27:
            java.net.UnknownHostException r2 = (java.net.UnknownHostException) r2
            throw r2
    }

    @Override
    public final java.net.Socket createSocket(java.lang.String r2, int r3, java.net.InetAddress r4, int r5) throws java.io.IOException, java.net.UnknownHostException {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.a     // Catch: java.lang.Throwable -> L12
            if (r0 == 0) goto L22
            javax.net.ssl.SSLSocketFactory r0 = r1.a     // Catch: java.lang.Throwable -> L12
            java.net.Socket r2 = r0.createSocket(r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L12
            java.net.Socket r2 = a(r2)     // Catch: java.lang.Throwable -> L12
            b(r2)     // Catch: java.lang.Throwable -> L12
            return r2
        L12:
            r2 = move-exception
            java.lang.String r3 = "myssl"
            java.lang.String r4 = "cs4"
            com.loc.av.b(r2, r3, r4)
            boolean r3 = r2 instanceof java.net.UnknownHostException
            if (r3 != 0) goto L27
            boolean r3 = r2 instanceof java.io.IOException
            if (r3 != 0) goto L24
        L22:
            r2 = 0
            return r2
        L24:
            java.io.IOException r2 = (java.io.IOException) r2
            throw r2
        L27:
            java.net.UnknownHostException r2 = (java.net.UnknownHostException) r2
            throw r2
    }

    @Override
    public final java.net.Socket createSocket(java.net.InetAddress r2, int r3) throws java.io.IOException {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.a     // Catch: java.lang.Throwable -> L12
            if (r0 == 0) goto L1e
            javax.net.ssl.SSLSocketFactory r0 = r1.a     // Catch: java.lang.Throwable -> L12
            java.net.Socket r2 = r0.createSocket(r2, r3)     // Catch: java.lang.Throwable -> L12
            java.net.Socket r2 = a(r2)     // Catch: java.lang.Throwable -> L12
            b(r2)     // Catch: java.lang.Throwable -> L12
            return r2
        L12:
            r2 = move-exception
            java.lang.String r3 = "myssl"
            java.lang.String r0 = "cs5"
            com.loc.av.b(r2, r3, r0)
            boolean r3 = r2 instanceof java.io.IOException
            if (r3 != 0) goto L20
        L1e:
            r2 = 0
            return r2
        L20:
            java.io.IOException r2 = (java.io.IOException) r2
            throw r2
    }

    @Override
    public final java.net.Socket createSocket(java.net.InetAddress r2, int r3, java.net.InetAddress r4, int r5) throws java.io.IOException {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.a     // Catch: java.lang.Throwable -> L12
            if (r0 == 0) goto L1e
            javax.net.ssl.SSLSocketFactory r0 = r1.a     // Catch: java.lang.Throwable -> L12
            java.net.Socket r2 = r0.createSocket(r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L12
            java.net.Socket r2 = a(r2)     // Catch: java.lang.Throwable -> L12
            b(r2)     // Catch: java.lang.Throwable -> L12
            return r2
        L12:
            r2 = move-exception
            java.lang.String r3 = "myssl"
            java.lang.String r4 = "cs6"
            com.loc.av.b(r2, r3, r4)
            boolean r3 = r2 instanceof java.io.IOException
            if (r3 != 0) goto L20
        L1e:
            r2 = 0
            return r2
        L20:
            java.io.IOException r2 = (java.io.IOException) r2
            throw r2
    }

    @Override
    public final java.net.Socket createSocket(java.net.Socket r2, java.lang.String r3, int r4, boolean r5) throws java.io.IOException {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.a     // Catch: java.lang.Throwable -> L12
            if (r0 == 0) goto L1e
            javax.net.ssl.SSLSocketFactory r0 = r1.a     // Catch: java.lang.Throwable -> L12
            java.net.Socket r2 = r0.createSocket(r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L12
            java.net.Socket r2 = a(r2)     // Catch: java.lang.Throwable -> L12
            b(r2)     // Catch: java.lang.Throwable -> L12
            return r2
        L12:
            r2 = move-exception
            java.lang.String r3 = "myssl"
            java.lang.String r4 = "cs2"
            com.loc.av.b(r2, r3, r4)
            boolean r3 = r2 instanceof java.io.IOException
            if (r3 != 0) goto L20
        L1e:
            r2 = 0
            return r2
        L20:
            java.io.IOException r2 = (java.io.IOException) r2
            throw r2
    }

    @Override
    public final java.lang.String[] getDefaultCipherSuites() {
            r3 = this;
            javax.net.ssl.SSLSocketFactory r0 = r3.a     // Catch: java.lang.Throwable -> Lb
            if (r0 == 0) goto L13
            javax.net.ssl.SSLSocketFactory r0 = r3.a     // Catch: java.lang.Throwable -> Lb
            java.lang.String[] r0 = r0.getDefaultCipherSuites()     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = move-exception
            java.lang.String r1 = "myssl"
            java.lang.String r2 = "gdcs"
            com.loc.av.b(r0, r1, r2)
        L13:
            r0 = 0
            java.lang.String[] r0 = new java.lang.String[r0]
            return r0
    }

    @Override
    public final java.lang.String[] getSupportedCipherSuites() {
            r3 = this;
            javax.net.ssl.SSLSocketFactory r0 = r3.a     // Catch: java.lang.Throwable -> Lb
            if (r0 == 0) goto L13
            javax.net.ssl.SSLSocketFactory r0 = r3.a     // Catch: java.lang.Throwable -> Lb
            java.lang.String[] r0 = r0.getSupportedCipherSuites()     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = move-exception
            java.lang.String r1 = "myssl"
            java.lang.String r2 = "gscs"
            com.loc.av.b(r0, r1, r2)
        L13:
            r0 = 0
            java.lang.String[] r0 = new java.lang.String[r0]
            return r0
    }
}
