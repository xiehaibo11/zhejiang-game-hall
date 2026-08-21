package cz.msebera.android.httpclient.client.entity;

public class GzipCompressingEntity extends cz.msebera.android.httpclient.entity.HttpEntityWrapper {
    private static final java.lang.String GZIP_CODEC = "gzip";

    public GzipCompressingEntity(cz.msebera.android.httpclient.HttpEntity r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public java.io.InputStream getContent() throws java.io.IOException {
            r1 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            r0.<init>()
            throw r0
    }

    @Override
    public cz.msebera.android.httpclient.Header getContentEncoding() {
            r3 = this;
            cz.msebera.android.httpclient.message.BasicHeader r0 = new cz.msebera.android.httpclient.message.BasicHeader
            java.lang.String r1 = "Content-Encoding"
            java.lang.String r2 = "gzip"
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    public long getContentLength() {
            r2 = this;
            r0 = -1
            return r0
    }

    @Override
    public boolean isChunked() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public void writeTo(java.io.OutputStream r2) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Output stream"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.util.zip.GZIPOutputStream r0 = new java.util.zip.GZIPOutputStream
            r0.<init>(r2)
            cz.msebera.android.httpclient.HttpEntity r2 = r1.wrappedEntity
            r2.writeTo(r0)
            r0.close()
            return
    }
}
