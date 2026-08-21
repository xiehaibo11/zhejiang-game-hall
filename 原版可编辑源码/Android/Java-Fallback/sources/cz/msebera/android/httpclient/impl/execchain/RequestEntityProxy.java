package cz.msebera.android.httpclient.impl.execchain;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
class RequestEntityProxy implements cz.msebera.android.httpclient.HttpEntity {
    private boolean consumed;
    private final cz.msebera.android.httpclient.HttpEntity original;

    RequestEntityProxy(cz.msebera.android.httpclient.HttpEntity r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.consumed = r0
            r1.original = r2
            return
    }

    static void enhance(cz.msebera.android.httpclient.HttpEntityEnclosingRequest r2) {
            cz.msebera.android.httpclient.HttpEntity r0 = r2.getEntity()
            if (r0 == 0) goto L1a
            boolean r1 = r0.isRepeatable()
            if (r1 != 0) goto L1a
            boolean r1 = isEnhanced(r0)
            if (r1 != 0) goto L1a
            cz.msebera.android.httpclient.impl.execchain.RequestEntityProxy r1 = new cz.msebera.android.httpclient.impl.execchain.RequestEntityProxy
            r1.<init>(r0)
            r2.setEntity(r1)
        L1a:
            return
    }

    static boolean isEnhanced(cz.msebera.android.httpclient.HttpEntity r0) {
            boolean r0 = r0 instanceof cz.msebera.android.httpclient.impl.execchain.RequestEntityProxy
            return r0
    }

    static boolean isRepeatable(cz.msebera.android.httpclient.HttpRequest r2) {
            boolean r0 = r2 instanceof cz.msebera.android.httpclient.HttpEntityEnclosingRequest
            r1 = 1
            if (r0 == 0) goto L22
            cz.msebera.android.httpclient.HttpEntityEnclosingRequest r2 = (cz.msebera.android.httpclient.HttpEntityEnclosingRequest) r2
            cz.msebera.android.httpclient.HttpEntity r2 = r2.getEntity()
            if (r2 == 0) goto L22
            boolean r0 = isEnhanced(r2)
            if (r0 == 0) goto L1d
            r0 = r2
            cz.msebera.android.httpclient.impl.execchain.RequestEntityProxy r0 = (cz.msebera.android.httpclient.impl.execchain.RequestEntityProxy) r0
            boolean r0 = r0.isConsumed()
            if (r0 != 0) goto L1d
            return r1
        L1d:
            boolean r2 = r2.isRepeatable()
            return r2
        L22:
            return r1
    }

    @Override
    @java.lang.Deprecated
    public void consumeContent() throws java.io.IOException {
            r1 = this;
            r0 = 1
            r1.consumed = r0
            cz.msebera.android.httpclient.HttpEntity r0 = r1.original
            r0.consumeContent()
            return
    }

    @Override
    public java.io.InputStream getContent() throws java.io.IOException, java.lang.IllegalStateException {
            r1 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r1.original
            java.io.InputStream r0 = r0.getContent()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.Header getContentEncoding() {
            r1 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r1.original
            cz.msebera.android.httpclient.Header r0 = r0.getContentEncoding()
            return r0
    }

    @Override
    public long getContentLength() {
            r2 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r2.original
            long r0 = r0.getContentLength()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.Header getContentType() {
            r1 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r1.original
            cz.msebera.android.httpclient.Header r0 = r0.getContentType()
            return r0
    }

    public cz.msebera.android.httpclient.HttpEntity getOriginal() {
            r1 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r1.original
            return r0
    }

    @Override
    public boolean isChunked() {
            r1 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r1.original
            boolean r0 = r0.isChunked()
            return r0
    }

    public boolean isConsumed() {
            r1 = this;
            boolean r0 = r1.consumed
            return r0
    }

    @Override
    public boolean isRepeatable() {
            r1 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r1.original
            boolean r0 = r0.isRepeatable()
            return r0
    }

    @Override
    public boolean isStreaming() {
            r1 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r1.original
            boolean r0 = r0.isStreaming()
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "RequestEntityProxy{"
            r0.<init>(r1)
            cz.msebera.android.httpclient.HttpEntity r1 = r2.original
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeTo(java.io.OutputStream r2) throws java.io.IOException {
            r1 = this;
            r0 = 1
            r1.consumed = r0
            cz.msebera.android.httpclient.HttpEntity r0 = r1.original
            r0.writeTo(r2)
            return
    }
}
