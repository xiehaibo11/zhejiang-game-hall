package com.tkay.expressad.foundation.g.f.e;

public final class b implements com.tkay.expressad.foundation.g.f.e.a {
    private static final int a = 100;
    private com.tkay.expressad.foundation.g.f.c.a b;
    private javax.net.ssl.SSLSocketFactory c;

    static class a extends java.io.FilterInputStream {
        private final java.net.HttpURLConnection a;

        a(java.net.HttpURLConnection r2) {
                r1 = this;
                java.io.InputStream r0 = com.tkay.expressad.foundation.g.f.e.b.a(r2)
                r1.<init>(r0)
                r1.a = r2
                return
        }

        @Override
        public final void close() {
                r1 = this;
                super.close()
                java.net.HttpURLConnection r0 = r1.a
                r0.disconnect()
                return
        }
    }

    public b(javax.net.ssl.SSLSocketFactory r1, com.tkay.expressad.foundation.g.f.c.a r2) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            r0.b = r2
            return
    }

    static java.io.InputStream a(java.net.HttpURLConnection r0) {
            java.io.InputStream r0 = b(r0)
            return r0
    }

    private java.net.HttpURLConnection a(java.net.URL r6) {
            r5 = this;
            com.tkay.expressad.foundation.g.f.c.a r0 = r5.b
            if (r0 == 0) goto L39
            java.lang.String r0 = r0.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L39
            com.tkay.expressad.foundation.g.f.c.a r0 = r5.b
            java.lang.String r0 = r0.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L39
            java.net.Proxy r0 = new java.net.Proxy
            java.net.Proxy$Type r1 = java.net.Proxy.Type.HTTP
            java.net.InetSocketAddress r2 = new java.net.InetSocketAddress
            com.tkay.expressad.foundation.g.f.c.a r3 = r5.b
            java.lang.String r3 = r3.b
            com.tkay.expressad.foundation.g.f.c.a r4 = r5.b
            java.lang.String r4 = r4.c
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            int r4 = r4.intValue()
            r2.<init>(r3, r4)
            r0.<init>(r1, r2)
            java.net.URLConnection r6 = r6.openConnection(r0)
            java.net.HttpURLConnection r6 = (java.net.HttpURLConnection) r6
            goto L3f
        L39:
            java.net.URLConnection r6 = r6.openConnection()
            java.net.HttpURLConnection r6 = (java.net.HttpURLConnection) r6
        L3f:
            r0 = 0
            r6.setInstanceFollowRedirects(r0)
            return r6
    }

    private java.net.HttpURLConnection a(java.net.URL r6, com.tkay.expressad.foundation.g.f.i<?> r7) {
            r5 = this;
            com.tkay.expressad.foundation.g.f.c.a r0 = r5.b
            if (r0 == 0) goto L39
            java.lang.String r0 = r0.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L39
            com.tkay.expressad.foundation.g.f.c.a r0 = r5.b
            java.lang.String r0 = r0.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L39
            java.net.Proxy r0 = new java.net.Proxy
            java.net.Proxy$Type r1 = java.net.Proxy.Type.HTTP
            java.net.InetSocketAddress r2 = new java.net.InetSocketAddress
            com.tkay.expressad.foundation.g.f.c.a r3 = r5.b
            java.lang.String r3 = r3.b
            com.tkay.expressad.foundation.g.f.c.a r4 = r5.b
            java.lang.String r4 = r4.c
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            int r4 = r4.intValue()
            r2.<init>(r3, r4)
            r0.<init>(r1, r2)
            java.net.URLConnection r0 = r6.openConnection(r0)
            java.net.HttpURLConnection r0 = (java.net.HttpURLConnection) r0
            goto L3f
        L39:
            java.net.URLConnection r0 = r6.openConnection()
            java.net.HttpURLConnection r0 = (java.net.HttpURLConnection) r0
        L3f:
            r1 = 0
            r0.setInstanceFollowRedirects(r1)
            int r7 = r7.k()
            r0.setConnectTimeout(r7)
            r0.setReadTimeout(r7)
            r0.setUseCaches(r1)
            r7 = 1
            r0.setDoInput(r7)
            java.lang.String r6 = r6.getProtocol()
            java.lang.String r7 = "https"
            boolean r6 = r7.equals(r6)
            if (r6 == 0) goto L6a
            javax.net.ssl.SSLSocketFactory r6 = r5.c
            if (r6 == 0) goto L6a
            r7 = r0
            javax.net.ssl.HttpsURLConnection r7 = (javax.net.ssl.HttpsURLConnection) r7
            r7.setSSLSocketFactory(r6)
        L6a:
            return r0
    }

    private static java.util.List<com.tkay.expressad.foundation.g.f.c.c> a(java.util.Map<java.lang.String, java.util.List<java.lang.String>> r6) {
            java.util.ArrayList r0 = new java.util.ArrayList
            int r1 = r6.size()
            r0.<init>(r1)
            java.util.Set r6 = r6.entrySet()
            java.util.Iterator r6 = r6.iterator()
        L11:
            boolean r1 = r6.hasNext()
            if (r1 == 0) goto L48
            java.lang.Object r1 = r6.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            if (r2 == 0) goto L11
            java.lang.Object r2 = r1.getValue()
            java.util.List r2 = (java.util.List) r2
            java.util.Iterator r2 = r2.iterator()
        L2d:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L11
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            com.tkay.expressad.foundation.g.f.c.c r4 = new com.tkay.expressad.foundation.g.f.c.c
            java.lang.Object r5 = r1.getKey()
            java.lang.String r5 = (java.lang.String) r5
            r4.<init>(r5, r3)
            r0.add(r4)
            goto L2d
        L48:
            return r0
    }

    private static void a(java.net.HttpURLConnection r1, com.tkay.expressad.foundation.g.f.i<?> r2) {
            int r0 = r2.a()
            switch(r0) {
                case 0: goto L42;
                case 1: goto L39;
                case 2: goto L30;
                case 3: goto L2a;
                case 4: goto L24;
                case 5: goto L1e;
                case 6: goto L18;
                case 7: goto Lf;
                default: goto L7;
            }
        L7:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "Unknown method type."
            r1.<init>(r2)
            throw r1
        Lf:
            b(r1, r2)
            java.lang.String r2 = "PATCH"
            r1.setRequestMethod(r2)
            return
        L18:
            java.lang.String r2 = "TRACE"
            r1.setRequestMethod(r2)
            return
        L1e:
            java.lang.String r2 = "OPTIONS"
            r1.setRequestMethod(r2)
            return
        L24:
            java.lang.String r2 = "HEAD"
            r1.setRequestMethod(r2)
            return
        L2a:
            java.lang.String r2 = "DELETE"
            r1.setRequestMethod(r2)
            return
        L30:
            java.lang.String r0 = "PUT"
            r1.setRequestMethod(r0)
            b(r1, r2)
            return
        L39:
            java.lang.String r0 = "POST"
            r1.setRequestMethod(r0)
            b(r1, r2)
            return
        L42:
            java.lang.String r2 = "GET"
            r1.setRequestMethod(r2)
            return
    }

    private static boolean a(int r1, int r2) {
            r0 = 4
            if (r1 == r0) goto L15
            r1 = 100
            if (r1 > r2) goto Lb
            r1 = 200(0xc8, float:2.8E-43)
            if (r2 < r1) goto L15
        Lb:
            r1 = 204(0xcc, float:2.86E-43)
            if (r2 == r1) goto L15
            r1 = 304(0x130, float:4.26E-43)
            if (r2 == r1) goto L15
            r1 = 1
            return r1
        L15:
            r1 = 0
            return r1
    }

    private static java.io.InputStream b(java.net.HttpURLConnection r0) {
            java.io.InputStream r0 = r0.getInputStream()     // Catch: java.io.IOException -> L5
            goto L9
        L5:
            java.io.InputStream r0 = r0.getErrorStream()
        L9:
            return r0
    }

    private static void b(java.net.HttpURLConnection r3, com.tkay.expressad.foundation.g.f.i<?> r4) {
            byte[] r0 = r4.h()
            if (r0 == 0) goto L27
            boolean r1 = r4 instanceof com.tkay.expressad.foundation.g.f.d.f
            if (r1 == 0) goto Lf
            r2 = 2048(0x800, float:2.87E-42)
            r3.setChunkedStreamingMode(r2)
        Lf:
            r2 = 1
            r3.setDoOutput(r2)
            java.io.DataOutputStream r2 = new java.io.DataOutputStream
            java.io.OutputStream r3 = r3.getOutputStream()
            r2.<init>(r3)
            r2.write(r0)
            if (r1 == 0) goto L24
            r4.a(r2)
        L24:
            r2.close()
        L27:
            return
    }

    @Override
    public final com.tkay.expressad.foundation.g.f.f.b a(com.tkay.expressad.foundation.g.f.i<?> r7) {
            r6 = this;
            java.net.URL r0 = new java.net.URL
            java.lang.String r1 = r7.d()
            r0.<init>(r1)
            com.tkay.expressad.foundation.g.f.c.a r1 = r6.b
            if (r1 == 0) goto L42
            java.lang.String r1 = r1.b
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L42
            com.tkay.expressad.foundation.g.f.c.a r1 = r6.b
            java.lang.String r1 = r1.c
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L42
            java.net.Proxy r1 = new java.net.Proxy
            java.net.Proxy$Type r2 = java.net.Proxy.Type.HTTP
            java.net.InetSocketAddress r3 = new java.net.InetSocketAddress
            com.tkay.expressad.foundation.g.f.c.a r4 = r6.b
            java.lang.String r4 = r4.b
            com.tkay.expressad.foundation.g.f.c.a r5 = r6.b
            java.lang.String r5 = r5.c
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            int r5 = r5.intValue()
            r3.<init>(r4, r5)
            r1.<init>(r2, r3)
            java.net.URLConnection r1 = r0.openConnection(r1)
            java.net.HttpURLConnection r1 = (java.net.HttpURLConnection) r1
            goto L48
        L42:
            java.net.URLConnection r1 = r0.openConnection()
            java.net.HttpURLConnection r1 = (java.net.HttpURLConnection) r1
        L48:
            r2 = 0
            r1.setInstanceFollowRedirects(r2)
            int r3 = r7.k()
            r1.setConnectTimeout(r3)
            r1.setReadTimeout(r3)
            r1.setUseCaches(r2)
            r3 = 1
            r1.setDoInput(r3)
            java.lang.String r0 = r0.getProtocol()
            java.lang.String r4 = "https"
            boolean r0 = r4.equals(r0)
            if (r0 == 0) goto L73
            javax.net.ssl.SSLSocketFactory r0 = r6.c
            if (r0 == 0) goto L73
            r4 = r1
            javax.net.ssl.HttpsURLConnection r4 = (javax.net.ssl.HttpsURLConnection) r4
            r4.setSSLSocketFactory(r0)
        L73:
            java.util.Map r0 = r7.g()     // Catch: java.lang.Throwable -> L136
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L136
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L136
        L7f:
            boolean r4 = r0.hasNext()     // Catch: java.lang.Throwable -> L136
            if (r4 == 0) goto L9b
            java.lang.Object r4 = r0.next()     // Catch: java.lang.Throwable -> L136
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4     // Catch: java.lang.Throwable -> L136
            java.lang.Object r5 = r4.getKey()     // Catch: java.lang.Throwable -> L136
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L136
            java.lang.Object r4 = r4.getValue()     // Catch: java.lang.Throwable -> L136
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L136
            r1.setRequestProperty(r5, r4)     // Catch: java.lang.Throwable -> L136
            goto L7f
        L9b:
            int r0 = r7.a()     // Catch: java.lang.Throwable -> L136
            switch(r0) {
                case 0: goto Ld9;
                case 1: goto Ld0;
                case 2: goto Lc7;
                case 3: goto Lc1;
                case 4: goto Lbb;
                case 5: goto Lb5;
                case 6: goto Laf;
                case 7: goto La6;
                default: goto La2;
            }     // Catch: java.lang.Throwable -> L136
        La2:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L136
            goto L130
        La6:
            b(r1, r7)     // Catch: java.lang.Throwable -> L136
            java.lang.String r0 = "PATCH"
            r1.setRequestMethod(r0)     // Catch: java.lang.Throwable -> L136
            goto Lde
        Laf:
            java.lang.String r0 = "TRACE"
            r1.setRequestMethod(r0)     // Catch: java.lang.Throwable -> L136
            goto Lde
        Lb5:
            java.lang.String r0 = "OPTIONS"
            r1.setRequestMethod(r0)     // Catch: java.lang.Throwable -> L136
            goto Lde
        Lbb:
            java.lang.String r0 = "HEAD"
            r1.setRequestMethod(r0)     // Catch: java.lang.Throwable -> L136
            goto Lde
        Lc1:
            java.lang.String r0 = "DELETE"
            r1.setRequestMethod(r0)     // Catch: java.lang.Throwable -> L136
            goto Lde
        Lc7:
            java.lang.String r0 = "PUT"
            r1.setRequestMethod(r0)     // Catch: java.lang.Throwable -> L136
            b(r1, r7)     // Catch: java.lang.Throwable -> L136
            goto Lde
        Ld0:
            java.lang.String r0 = "POST"
            r1.setRequestMethod(r0)     // Catch: java.lang.Throwable -> L136
            b(r1, r7)     // Catch: java.lang.Throwable -> L136
            goto Lde
        Ld9:
            java.lang.String r0 = "GET"
            r1.setRequestMethod(r0)     // Catch: java.lang.Throwable -> L136
        Lde:
            int r0 = r1.getResponseCode()     // Catch: java.lang.Throwable -> L136
            r4 = -1
            if (r0 == r4) goto L128
            int r7 = r7.a()     // Catch: java.lang.Throwable -> L136
            r4 = 4
            if (r7 == r4) goto Lfe
            r7 = 100
            if (r7 > r0) goto Lf4
            r7 = 200(0xc8, float:2.8E-43)
            if (r0 < r7) goto Lfe
        Lf4:
            r7 = 204(0xcc, float:2.86E-43)
            if (r0 == r7) goto Lfe
            r7 = 304(0x130, float:4.26E-43)
            if (r0 == r7) goto Lfe
            r7 = r3
            goto Lff
        Lfe:
            r7 = r2
        Lff:
            if (r7 != 0) goto L112
            com.tkay.expressad.foundation.g.f.f.b r7 = new com.tkay.expressad.foundation.g.f.f.b     // Catch: java.lang.Throwable -> L136
            java.util.Map r3 = r1.getHeaderFields()     // Catch: java.lang.Throwable -> L136
            java.util.List r3 = a(r3)     // Catch: java.lang.Throwable -> L136
            r7.<init>(r0, r3)     // Catch: java.lang.Throwable -> L136
            r1.disconnect()
            return r7
        L112:
            com.tkay.expressad.foundation.g.f.f.b r7 = new com.tkay.expressad.foundation.g.f.f.b     // Catch: java.lang.Throwable -> L125
            java.util.Map r2 = r1.getHeaderFields()     // Catch: java.lang.Throwable -> L125
            java.util.List r2 = a(r2)     // Catch: java.lang.Throwable -> L125
            com.tkay.expressad.foundation.g.f.e.b$a r4 = new com.tkay.expressad.foundation.g.f.e.b$a     // Catch: java.lang.Throwable -> L125
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L125
            r7.<init>(r0, r2, r4)     // Catch: java.lang.Throwable -> L125
            return r7
        L125:
            r7 = move-exception
            r2 = r3
            goto L137
        L128:
            java.io.IOException r7 = new java.io.IOException     // Catch: java.lang.Throwable -> L136
            java.lang.String r0 = "Could not retrieve response code from HttpUrlConnection."
            r7.<init>(r0)     // Catch: java.lang.Throwable -> L136
            throw r7     // Catch: java.lang.Throwable -> L136
        L130:
            java.lang.String r0 = "Unknown method type."
            r7.<init>(r0)     // Catch: java.lang.Throwable -> L136
            throw r7     // Catch: java.lang.Throwable -> L136
        L136:
            r7 = move-exception
        L137:
            if (r2 != 0) goto L13c
            r1.disconnect()
        L13c:
            throw r7
    }
}
