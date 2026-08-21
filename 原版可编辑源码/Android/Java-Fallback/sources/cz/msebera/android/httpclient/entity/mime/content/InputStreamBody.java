package cz.msebera.android.httpclient.entity.mime.content;

public class InputStreamBody extends cz.msebera.android.httpclient.entity.mime.content.AbstractContentBody {
    private final java.lang.String filename;
    private final java.io.InputStream in;

    public InputStreamBody(java.io.InputStream r2, cz.msebera.android.httpclient.entity.ContentType r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public InputStreamBody(java.io.InputStream r1, cz.msebera.android.httpclient.entity.ContentType r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r2)
            java.lang.String r2 = "Input stream"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r2)
            r0.in = r1
            r0.filename = r3
            return
    }

    public InputStreamBody(java.io.InputStream r2, java.lang.String r3) {
            r1 = this;
            cz.msebera.android.httpclient.entity.ContentType r0 = cz.msebera.android.httpclient.entity.ContentType.DEFAULT_BINARY
            r1.<init>(r2, r0, r3)
            return
    }

    @java.lang.Deprecated
    public InputStreamBody(java.io.InputStream r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            cz.msebera.android.httpclient.entity.ContentType r2 = cz.msebera.android.httpclient.entity.ContentType.create(r2)
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    public long getContentLength() {
            r2 = this;
            r0 = -1
            return r0
    }

    @Override
    public java.lang.String getFilename() {
            r1 = this;
            java.lang.String r0 = r1.filename
            return r0
    }

    public java.io.InputStream getInputStream() {
            r1 = this;
            java.io.InputStream r0 = r1.in
            return r0
    }

    @Override
    public java.lang.String getTransferEncoding() {
            r1 = this;
            java.lang.String r0 = "binary"
            return r0
    }

    @Override
    public void writeTo(java.io.OutputStream r4) throws java.io.IOException {
            r3 = this;
            java.lang.String r0 = "Output stream"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            r0 = 4096(0x1000, float:5.74E-42)
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> L20
        L9:
            java.io.InputStream r1 = r3.in     // Catch: java.lang.Throwable -> L20
            int r1 = r1.read(r0)     // Catch: java.lang.Throwable -> L20
            r2 = -1
            if (r1 == r2) goto L17
            r2 = 0
            r4.write(r0, r2, r1)     // Catch: java.lang.Throwable -> L20
            goto L9
        L17:
            r4.flush()     // Catch: java.lang.Throwable -> L20
            java.io.InputStream r4 = r3.in
            r4.close()
            return
        L20:
            r4 = move-exception
            java.io.InputStream r0 = r3.in
            r0.close()
            throw r4
    }
}
