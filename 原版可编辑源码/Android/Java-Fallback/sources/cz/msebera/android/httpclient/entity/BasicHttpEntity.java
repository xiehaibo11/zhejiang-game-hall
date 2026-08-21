package cz.msebera.android.httpclient.entity;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class BasicHttpEntity extends cz.msebera.android.httpclient.entity.AbstractHttpEntity {
    private java.io.InputStream content;
    private long length;

    public BasicHttpEntity() {
            r2 = this;
            r2.<init>()
            r0 = -1
            r2.length = r0
            return
    }

    @Override
    public java.io.InputStream getContent() throws java.lang.IllegalStateException {
            r2 = this;
            java.io.InputStream r0 = r2.content
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            java.lang.String r1 = "Content has not been provided"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1)
            java.io.InputStream r0 = r2.content
            return r0
    }

    @Override
    public long getContentLength() {
            r2 = this;
            long r0 = r2.length
            return r0
    }

    @Override
    public boolean isRepeatable() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public boolean isStreaming() {
            r2 = this;
            java.io.InputStream r0 = r2.content
            if (r0 == 0) goto La
            cz.msebera.android.httpclient.impl.io.EmptyInputStream r1 = cz.msebera.android.httpclient.impl.io.EmptyInputStream.INSTANCE
            if (r0 == r1) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    public void setContent(java.io.InputStream r1) {
            r0 = this;
            r0.content = r1
            return
    }

    public void setContentLength(long r1) {
            r0 = this;
            r0.length = r1
            return
    }

    @Override
    public void writeTo(java.io.OutputStream r5) throws java.io.IOException {
            r4 = this;
            java.lang.String r0 = "Output stream"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            java.io.InputStream r0 = r4.getContent()
            r1 = 4096(0x1000, float:5.74E-42)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L1d
        Ld:
            int r2 = r0.read(r1)     // Catch: java.lang.Throwable -> L1d
            r3 = -1
            if (r2 == r3) goto L19
            r3 = 0
            r5.write(r1, r3, r2)     // Catch: java.lang.Throwable -> L1d
            goto Ld
        L19:
            r0.close()
            return
        L1d:
            r5 = move-exception
            r0.close()
            throw r5
    }
}
