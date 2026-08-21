package cz.msebera.android.httpclient.entity;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class HttpEntityWrapper implements cz.msebera.android.httpclient.HttpEntity {
    protected cz.msebera.android.httpclient.HttpEntity wrappedEntity;

    public HttpEntityWrapper(cz.msebera.android.httpclient.HttpEntity r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Wrapped entity"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.HttpEntity r2 = (cz.msebera.android.httpclient.HttpEntity) r2
            r1.wrappedEntity = r2
            return
    }

    @Override
    @java.lang.Deprecated
    public void consumeContent() throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r1.wrappedEntity
            r0.consumeContent()
            return
    }

    @Override
    public java.io.InputStream getContent() throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r1.wrappedEntity
            java.io.InputStream r0 = r0.getContent()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.Header getContentEncoding() {
            r1 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r1.wrappedEntity
            cz.msebera.android.httpclient.Header r0 = r0.getContentEncoding()
            return r0
    }

    @Override
    public long getContentLength() {
            r2 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r2.wrappedEntity
            long r0 = r0.getContentLength()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.Header getContentType() {
            r1 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r1.wrappedEntity
            cz.msebera.android.httpclient.Header r0 = r0.getContentType()
            return r0
    }

    @Override
    public boolean isChunked() {
            r1 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r1.wrappedEntity
            boolean r0 = r0.isChunked()
            return r0
    }

    @Override
    public boolean isRepeatable() {
            r1 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r1.wrappedEntity
            boolean r0 = r0.isRepeatable()
            return r0
    }

    @Override
    public boolean isStreaming() {
            r1 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r1.wrappedEntity
            boolean r0 = r0.isStreaming()
            return r0
    }

    @Override
    public void writeTo(java.io.OutputStream r2) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r1.wrappedEntity
            r0.writeTo(r2)
            return
    }
}
