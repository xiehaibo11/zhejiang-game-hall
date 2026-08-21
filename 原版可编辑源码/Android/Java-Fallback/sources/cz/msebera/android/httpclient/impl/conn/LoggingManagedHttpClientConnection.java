package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
class LoggingManagedHttpClientConnection extends cz.msebera.android.httpclient.impl.conn.DefaultManagedHttpClientConnection {
    private final cz.msebera.android.httpclient.extras.HttpClientAndroidLog headerlog;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final cz.msebera.android.httpclient.impl.conn.Wire wire;

    public LoggingManagedHttpClientConnection(java.lang.String r13, cz.msebera.android.httpclient.extras.HttpClientAndroidLog r14, cz.msebera.android.httpclient.extras.HttpClientAndroidLog r15, cz.msebera.android.httpclient.extras.HttpClientAndroidLog r16, int r17, int r18, java.nio.charset.CharsetDecoder r19, java.nio.charset.CharsetEncoder r20, cz.msebera.android.httpclient.config.MessageConstraints r21, cz.msebera.android.httpclient.entity.ContentLengthStrategy r22, cz.msebera.android.httpclient.entity.ContentLengthStrategy r23, cz.msebera.android.httpclient.io.HttpMessageWriterFactory<cz.msebera.android.httpclient.HttpRequest> r24, cz.msebera.android.httpclient.io.HttpMessageParserFactory<cz.msebera.android.httpclient.HttpResponse> r25) {
            r12 = this;
            r11 = r12
            r0 = r12
            r1 = r13
            r2 = r17
            r3 = r18
            r4 = r19
            r5 = r20
            r6 = r21
            r7 = r22
            r8 = r23
            r9 = r24
            r10 = r25
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            r0 = r14
            r11.log = r0
            r0 = r15
            r11.headerlog = r0
            cz.msebera.android.httpclient.impl.conn.Wire r0 = new cz.msebera.android.httpclient.impl.conn.Wire
            r2 = r16
            r0.<init>(r2, r13)
            r11.wire = r0
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r3 = this;
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            boolean r0 = r0.isDebugEnabled()
            if (r0 == 0) goto L22
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r3.getId()
            r1.append(r2)
            java.lang.String r2 = ": Close connection"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.debug(r1)
        L22:
            super.close()
            return
    }

    @Override
    protected java.io.InputStream getSocketInputStream(java.net.Socket r3) throws java.io.IOException {
            r2 = this;
            java.io.InputStream r3 = super.getSocketInputStream(r3)
            cz.msebera.android.httpclient.impl.conn.Wire r0 = r2.wire
            boolean r0 = r0.enabled()
            if (r0 == 0) goto L14
            cz.msebera.android.httpclient.impl.conn.LoggingInputStream r0 = new cz.msebera.android.httpclient.impl.conn.LoggingInputStream
            cz.msebera.android.httpclient.impl.conn.Wire r1 = r2.wire
            r0.<init>(r3, r1)
            r3 = r0
        L14:
            return r3
    }

    @Override
    protected java.io.OutputStream getSocketOutputStream(java.net.Socket r3) throws java.io.IOException {
            r2 = this;
            java.io.OutputStream r3 = super.getSocketOutputStream(r3)
            cz.msebera.android.httpclient.impl.conn.Wire r0 = r2.wire
            boolean r0 = r0.enabled()
            if (r0 == 0) goto L14
            cz.msebera.android.httpclient.impl.conn.LoggingOutputStream r0 = new cz.msebera.android.httpclient.impl.conn.LoggingOutputStream
            cz.msebera.android.httpclient.impl.conn.Wire r1 = r2.wire
            r0.<init>(r3, r1)
            r3 = r0
        L14:
            return r3
    }

    @Override
    protected void onRequestSubmitted(cz.msebera.android.httpclient.HttpRequest r8) {
            r7 = this;
            if (r8 == 0) goto L5b
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r7.headerlog
            boolean r0 = r0.isDebugEnabled()
            if (r0 == 0) goto L5b
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r7.headerlog
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r7.getId()
            r1.append(r2)
            java.lang.String r2 = " >> "
            r1.append(r2)
            cz.msebera.android.httpclient.RequestLine r3 = r8.getRequestLine()
            java.lang.String r3 = r3.toString()
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.debug(r1)
            cz.msebera.android.httpclient.Header[] r8 = r8.getAllHeaders()
            int r0 = r8.length
            r1 = 0
        L35:
            if (r1 >= r0) goto L5b
            r3 = r8[r1]
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r7.headerlog
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = r7.getId()
            r5.append(r6)
            r5.append(r2)
            java.lang.String r3 = r3.toString()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.debug(r3)
            int r1 = r1 + 1
            goto L35
        L5b:
            return
    }

    @Override
    protected void onResponseReceived(cz.msebera.android.httpclient.HttpResponse r8) {
            r7 = this;
            if (r8 == 0) goto L5b
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r7.headerlog
            boolean r0 = r0.isDebugEnabled()
            if (r0 == 0) goto L5b
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r7.headerlog
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r7.getId()
            r1.append(r2)
            java.lang.String r2 = " << "
            r1.append(r2)
            cz.msebera.android.httpclient.StatusLine r3 = r8.getStatusLine()
            java.lang.String r3 = r3.toString()
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.debug(r1)
            cz.msebera.android.httpclient.Header[] r8 = r8.getAllHeaders()
            int r0 = r8.length
            r1 = 0
        L35:
            if (r1 >= r0) goto L5b
            r3 = r8[r1]
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r7.headerlog
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = r7.getId()
            r5.append(r6)
            r5.append(r2)
            java.lang.String r3 = r3.toString()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.debug(r3)
            int r1 = r1 + 1
            goto L35
        L5b:
            return
    }

    @Override
    public void shutdown() throws java.io.IOException {
            r3 = this;
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            boolean r0 = r0.isDebugEnabled()
            if (r0 == 0) goto L22
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r3.getId()
            r1.append(r2)
            java.lang.String r2 = ": Shutdown connection"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.debug(r1)
        L22:
            super.shutdown()
            return
    }
}
