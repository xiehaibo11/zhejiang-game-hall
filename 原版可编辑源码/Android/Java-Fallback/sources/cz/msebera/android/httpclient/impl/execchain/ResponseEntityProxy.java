package cz.msebera.android.httpclient.impl.execchain;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
class ResponseEntityProxy extends cz.msebera.android.httpclient.entity.HttpEntityWrapper implements cz.msebera.android.httpclient.conn.EofSensorWatcher {
    private final cz.msebera.android.httpclient.impl.execchain.ConnectionHolder connHolder;

    ResponseEntityProxy(cz.msebera.android.httpclient.HttpEntity r1, cz.msebera.android.httpclient.impl.execchain.ConnectionHolder r2) {
            r0 = this;
            r0.<init>(r1)
            r0.connHolder = r2
            return
    }

    private void cleanup() {
            r1 = this;
            cz.msebera.android.httpclient.impl.execchain.ConnectionHolder r0 = r1.connHolder
            if (r0 == 0) goto L7
            r0.abortConnection()
        L7:
            return
    }

    public static void enchance(cz.msebera.android.httpclient.HttpResponse r2, cz.msebera.android.httpclient.impl.execchain.ConnectionHolder r3) {
            cz.msebera.android.httpclient.HttpEntity r0 = r2.getEntity()
            if (r0 == 0) goto L16
            boolean r1 = r0.isStreaming()
            if (r1 == 0) goto L16
            if (r3 == 0) goto L16
            cz.msebera.android.httpclient.impl.execchain.ResponseEntityProxy r1 = new cz.msebera.android.httpclient.impl.execchain.ResponseEntityProxy
            r1.<init>(r0, r3)
            r2.setEntity(r1)
        L16:
            return
    }

    @Override
    @java.lang.Deprecated
    public void consumeContent() throws java.io.IOException {
            r0 = this;
            r0.releaseConnection()
            return
    }

    @Override
    public boolean eofDetected(java.io.InputStream r1) throws java.io.IOException {
            r0 = this;
            r1.close()     // Catch: java.lang.Throwable -> Lb
            r0.releaseConnection()     // Catch: java.lang.Throwable -> Lb
            r0.cleanup()
            r1 = 0
            return r1
        Lb:
            r1 = move-exception
            r0.cleanup()
            throw r1
    }

    @Override
    public java.io.InputStream getContent() throws java.io.IOException {
            r2 = this;
            cz.msebera.android.httpclient.conn.EofSensorInputStream r0 = new cz.msebera.android.httpclient.conn.EofSensorInputStream
            cz.msebera.android.httpclient.HttpEntity r1 = r2.wrappedEntity
            java.io.InputStream r1 = r1.getContent()
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    public boolean isRepeatable() {
            r1 = this;
            r0 = 0
            return r0
    }

    public void releaseConnection() throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.impl.execchain.ConnectionHolder r0 = r1.connHolder
            if (r0 == 0) goto L18
            boolean r0 = r0.isReusable()     // Catch: java.lang.Throwable -> L13
            if (r0 == 0) goto Lf
            cz.msebera.android.httpclient.impl.execchain.ConnectionHolder r0 = r1.connHolder     // Catch: java.lang.Throwable -> L13
            r0.releaseConnection()     // Catch: java.lang.Throwable -> L13
        Lf:
            r1.cleanup()
            goto L18
        L13:
            r0 = move-exception
            r1.cleanup()
            throw r0
        L18:
            return
    }

    @Override
    public boolean streamAbort(java.io.InputStream r1) throws java.io.IOException {
            r0 = this;
            r0.cleanup()
            r1 = 0
            return r1
    }

    @Override
    public boolean streamClosed(java.io.InputStream r3) throws java.io.IOException {
            r2 = this;
            cz.msebera.android.httpclient.impl.execchain.ConnectionHolder r0 = r2.connHolder     // Catch: java.lang.Throwable -> L1f
            r1 = 0
            if (r0 == 0) goto Lf
            cz.msebera.android.httpclient.impl.execchain.ConnectionHolder r0 = r2.connHolder     // Catch: java.lang.Throwable -> L1f
            boolean r0 = r0.isReleased()     // Catch: java.lang.Throwable -> L1f
            if (r0 != 0) goto Lf
            r0 = 1
            goto L10
        Lf:
            r0 = 0
        L10:
            r3.close()     // Catch: java.net.SocketException -> L17 java.lang.Throwable -> L1f
            r2.releaseConnection()     // Catch: java.net.SocketException -> L17 java.lang.Throwable -> L1f
            goto L1a
        L17:
            r3 = move-exception
            if (r0 != 0) goto L1e
        L1a:
            r2.cleanup()
            return r1
        L1e:
            throw r3     // Catch: java.lang.Throwable -> L1f
        L1f:
            r3 = move-exception
            r2.cleanup()
            throw r3
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "ResponseEntityProxy{"
            r0.<init>(r1)
            cz.msebera.android.httpclient.HttpEntity r1 = r2.wrappedEntity
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeTo(java.io.OutputStream r2) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r1.wrappedEntity     // Catch: java.lang.Throwable -> Lc
            r0.writeTo(r2)     // Catch: java.lang.Throwable -> Lc
            r1.releaseConnection()     // Catch: java.lang.Throwable -> Lc
            r1.cleanup()
            return
        Lc:
            r2 = move-exception
            r1.cleanup()
            throw r2
    }
}
