package cz.msebera.android.httpclient.entity;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class ByteArrayEntity extends cz.msebera.android.httpclient.entity.AbstractHttpEntity implements java.lang.Cloneable {
    private final byte[] b;

    @java.lang.Deprecated
    protected final byte[] content;
    private final int len;
    private final int off;

    public ByteArrayEntity(byte[] r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public ByteArrayEntity(byte[] r2, int r3, int r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public ByteArrayEntity(byte[] r3, int r4, int r5, cz.msebera.android.httpclient.entity.ContentType r6) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "Source byte array"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            if (r4 < 0) goto L28
            int r0 = r3.length
            if (r4 > r0) goto L28
            if (r5 < 0) goto L28
            int r0 = r4 + r5
            if (r0 < 0) goto L28
            int r1 = r3.length
            if (r0 > r1) goto L28
            r2.content = r3
            r2.b = r3
            r2.off = r4
            r2.len = r5
            if (r6 == 0) goto L27
            java.lang.String r3 = r6.toString()
            r2.setContentType(r3)
        L27:
            return
        L28:
            java.lang.IndexOutOfBoundsException r6 = new java.lang.IndexOutOfBoundsException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "off: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = " len: "
            r0.append(r4)
            r0.append(r5)
            java.lang.String r4 = " b.length: "
            r0.append(r4)
            int r3 = r3.length
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r6.<init>(r3)
            throw r6
    }

    public ByteArrayEntity(byte[] r2, cz.msebera.android.httpclient.entity.ContentType r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Source byte array"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.content = r2
            r1.b = r2
            r2 = 0
            r1.off = r2
            byte[] r2 = r1.b
            int r2 = r2.length
            r1.len = r2
            if (r3 == 0) goto L1d
            java.lang.String r2 = r3.toString()
            r1.setContentType(r2)
        L1d:
            return
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            java.lang.Object r0 = super.clone()
            return r0
    }

    @Override
    public java.io.InputStream getContent() {
            r4 = this;
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            byte[] r1 = r4.b
            int r2 = r4.off
            int r3 = r4.len
            r0.<init>(r1, r2, r3)
            return r0
    }

    @Override
    public long getContentLength() {
            r2 = this;
            int r0 = r2.len
            long r0 = (long) r0
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
            r0 = 0
            return r0
    }

    @Override
    public void writeTo(java.io.OutputStream r4) throws java.io.IOException {
            r3 = this;
            java.lang.String r0 = "Output stream"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            byte[] r0 = r3.b
            int r1 = r3.off
            int r2 = r3.len
            r4.write(r0, r1, r2)
            r4.flush()
            return
    }
}
