package cz.msebera.android.httpclient.entity.mime;

class MultipartFormEntity implements cz.msebera.android.httpclient.HttpEntity {
    private final long contentLength;
    private final cz.msebera.android.httpclient.Header contentType;
    private final cz.msebera.android.httpclient.entity.mime.AbstractMultipartForm multipart;

    MultipartFormEntity(cz.msebera.android.httpclient.entity.mime.AbstractMultipartForm r2, cz.msebera.android.httpclient.entity.ContentType r3, long r4) {
            r1 = this;
            r1.<init>()
            r1.multipart = r2
            cz.msebera.android.httpclient.message.BasicHeader r2 = new cz.msebera.android.httpclient.message.BasicHeader
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "Content-Type"
            r2.<init>(r0, r3)
            r1.contentType = r2
            r1.contentLength = r4
            return
    }

    @Override
    public void consumeContent() throws java.io.IOException, java.lang.UnsupportedOperationException {
            r2 = this;
            boolean r0 = r2.isStreaming()
            if (r0 != 0) goto L7
            return
        L7:
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            java.lang.String r1 = "Streaming entity does not implement #consumeContent()"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public java.io.InputStream getContent() throws java.io.IOException {
            r2 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            java.lang.String r1 = "Multipart form entity does not implement #getContent()"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public cz.msebera.android.httpclient.Header getContentEncoding() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public long getContentLength() {
            r2 = this;
            long r0 = r2.contentLength
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.Header getContentType() {
            r1 = this;
            cz.msebera.android.httpclient.Header r0 = r1.contentType
            return r0
    }

    cz.msebera.android.httpclient.entity.mime.AbstractMultipartForm getMultipart() {
            r1 = this;
            cz.msebera.android.httpclient.entity.mime.AbstractMultipartForm r0 = r1.multipart
            return r0
    }

    @Override
    public boolean isChunked() {
            r1 = this;
            boolean r0 = r1.isRepeatable()
            r0 = r0 ^ 1
            return r0
    }

    @Override
    public boolean isRepeatable() {
            r5 = this;
            long r0 = r5.contentLength
            r2 = -1
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    @Override
    public boolean isStreaming() {
            r1 = this;
            boolean r0 = r1.isRepeatable()
            r0 = r0 ^ 1
            return r0
    }

    @Override
    public void writeTo(java.io.OutputStream r2) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.entity.mime.AbstractMultipartForm r0 = r1.multipart
            r0.writeTo(r2)
            return
    }
}
