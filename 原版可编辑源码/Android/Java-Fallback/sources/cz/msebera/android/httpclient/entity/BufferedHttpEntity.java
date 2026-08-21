package cz.msebera.android.httpclient.entity;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class BufferedHttpEntity extends cz.msebera.android.httpclient.entity.HttpEntityWrapper {
    private final byte[] buffer;

    public BufferedHttpEntity(cz.msebera.android.httpclient.HttpEntity r6) throws java.io.IOException {
            r5 = this;
            r5.<init>(r6)
            boolean r0 = r6.isRepeatable()
            if (r0 == 0) goto L18
            long r0 = r6.getContentLength()
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 >= 0) goto L14
            goto L18
        L14:
            r6 = 0
            r5.buffer = r6
            goto L1e
        L18:
            byte[] r6 = cz.msebera.android.httpclient.util.EntityUtils.toByteArray(r6)
            r5.buffer = r6
        L1e:
            return
    }

    @Override
    public java.io.InputStream getContent() throws java.io.IOException {
            r2 = this;
            byte[] r0 = r2.buffer
            if (r0 == 0) goto La
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream
            r1.<init>(r0)
            return r1
        La:
            java.io.InputStream r0 = super.getContent()
            return r0
    }

    @Override
    public long getContentLength() {
            r2 = this;
            byte[] r0 = r2.buffer
            if (r0 == 0) goto L7
            int r0 = r0.length
            long r0 = (long) r0
            return r0
        L7:
            long r0 = super.getContentLength()
            return r0
    }

    @Override
    public boolean isChunked() {
            r1 = this;
            byte[] r0 = r1.buffer
            if (r0 != 0) goto Lc
            boolean r0 = super.isChunked()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    @Override
    public boolean isRepeatable() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public boolean isStreaming() {
            r1 = this;
            byte[] r0 = r1.buffer
            if (r0 != 0) goto Lc
            boolean r0 = super.isStreaming()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    @Override
    public void writeTo(java.io.OutputStream r2) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Output stream"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            byte[] r0 = r1.buffer
            if (r0 == 0) goto Ld
            r2.write(r0)
            goto L10
        Ld:
            super.writeTo(r2)
        L10:
            return
    }
}
