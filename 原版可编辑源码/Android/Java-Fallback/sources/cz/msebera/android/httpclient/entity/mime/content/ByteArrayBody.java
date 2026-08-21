package cz.msebera.android.httpclient.entity.mime.content;

public class ByteArrayBody extends cz.msebera.android.httpclient.entity.mime.content.AbstractContentBody {
    private final byte[] data;
    private final java.lang.String filename;

    public ByteArrayBody(byte[] r1, cz.msebera.android.httpclient.entity.ContentType r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r2)
            java.lang.String r2 = "byte[]"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r2)
            r0.data = r1
            r0.filename = r3
            return
    }

    public ByteArrayBody(byte[] r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = "application/octet-stream"
            r1.<init>(r2, r0, r3)
            return
    }

    @java.lang.Deprecated
    public ByteArrayBody(byte[] r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            cz.msebera.android.httpclient.entity.ContentType r2 = cz.msebera.android.httpclient.entity.ContentType.create(r2)
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    public java.lang.String getCharset() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public long getContentLength() {
            r2 = this;
            byte[] r0 = r2.data
            int r0 = r0.length
            long r0 = (long) r0
            return r0
    }

    @Override
    public java.lang.String getFilename() {
            r1 = this;
            java.lang.String r0 = r1.filename
            return r0
    }

    @Override
    public java.lang.String getTransferEncoding() {
            r1 = this;
            java.lang.String r0 = "binary"
            return r0
    }

    @Override
    public void writeTo(java.io.OutputStream r2) throws java.io.IOException {
            r1 = this;
            byte[] r0 = r1.data
            r2.write(r0)
            return
    }
}
