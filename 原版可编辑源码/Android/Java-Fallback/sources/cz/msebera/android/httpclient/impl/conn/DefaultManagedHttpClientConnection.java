package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class DefaultManagedHttpClientConnection extends cz.msebera.android.httpclient.impl.DefaultBHttpClientConnection implements cz.msebera.android.httpclient.conn.ManagedHttpClientConnection, cz.msebera.android.httpclient.protocol.HttpContext {
    private final java.util.Map<java.lang.String, java.lang.Object> attributes;
    private final java.lang.String id;
    private volatile boolean shutdown;

    public DefaultManagedHttpClientConnection(java.lang.String r12, int r13) {
            r11 = this;
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            r10 = 0
            r0 = r11
            r1 = r12
            r2 = r13
            r3 = r13
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            return
    }

    public DefaultManagedHttpClientConnection(java.lang.String r12, int r13, int r14, java.nio.charset.CharsetDecoder r15, java.nio.charset.CharsetEncoder r16, cz.msebera.android.httpclient.config.MessageConstraints r17, cz.msebera.android.httpclient.entity.ContentLengthStrategy r18, cz.msebera.android.httpclient.entity.ContentLengthStrategy r19, cz.msebera.android.httpclient.io.HttpMessageWriterFactory<cz.msebera.android.httpclient.HttpRequest> r20, cz.msebera.android.httpclient.io.HttpMessageParserFactory<cz.msebera.android.httpclient.HttpResponse> r21) {
            r11 = this;
            r10 = r11
            r0 = r11
            r1 = r13
            r2 = r14
            r3 = r15
            r4 = r16
            r5 = r17
            r6 = r18
            r7 = r19
            r8 = r20
            r9 = r21
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            r0 = r12
            r10.id = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r10.attributes = r0
            return
    }

    @Override
    public void bind(java.net.Socket r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.shutdown
            if (r0 != 0) goto L8
            super.bind(r2)
            return
        L8:
            r2.close()
            java.io.InterruptedIOException r2 = new java.io.InterruptedIOException
            java.lang.String r0 = "Connection already shutdown"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public java.lang.Object getAttribute(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.attributes
            java.lang.Object r2 = r0.get(r2)
            return r2
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = r1.id
            return r0
    }

    @Override
    public javax.net.ssl.SSLSession getSSLSession() {
            r2 = this;
            java.net.Socket r0 = super.getSocket()
            boolean r1 = r0 instanceof javax.net.ssl.SSLSocket
            if (r1 == 0) goto Lf
            javax.net.ssl.SSLSocket r0 = (javax.net.ssl.SSLSocket) r0
            javax.net.ssl.SSLSession r0 = r0.getSession()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    @Override
    public java.net.Socket getSocket() {
            r1 = this;
            java.net.Socket r0 = super.getSocket()
            return r0
    }

    @Override
    public java.lang.Object removeAttribute(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.attributes
            java.lang.Object r2 = r0.remove(r2)
            return r2
    }

    @Override
    public void setAttribute(java.lang.String r2, java.lang.Object r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.attributes
            r0.put(r2, r3)
            return
    }

    @Override
    public void shutdown() throws java.io.IOException {
            r1 = this;
            r0 = 1
            r1.shutdown = r0
            super.shutdown()
            return
    }
}
