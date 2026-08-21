package cz.msebera.android.httpclient.entity.mime.content;

public class FileBody extends cz.msebera.android.httpclient.entity.mime.content.AbstractContentBody {
    private final java.io.File file;
    private final java.lang.String filename;

    public FileBody(java.io.File r3) {
            r2 = this;
            cz.msebera.android.httpclient.entity.ContentType r0 = cz.msebera.android.httpclient.entity.ContentType.DEFAULT_BINARY
            if (r3 == 0) goto L9
            java.lang.String r1 = r3.getName()
            goto La
        L9:
            r1 = 0
        La:
            r2.<init>(r3, r0, r1)
            return
    }

    public FileBody(java.io.File r2, cz.msebera.android.httpclient.entity.ContentType r3) {
            r1 = this;
            if (r2 == 0) goto L7
            java.lang.String r0 = r2.getName()
            goto L8
        L7:
            r0 = 0
        L8:
            r1.<init>(r2, r3, r0)
            return
    }

    public FileBody(java.io.File r1, cz.msebera.android.httpclient.entity.ContentType r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r2)
            java.lang.String r2 = "File"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r2)
            r0.file = r1
            r0.filename = r3
            return
    }

    @java.lang.Deprecated
    public FileBody(java.io.File r2, java.lang.String r3) {
            r1 = this;
            cz.msebera.android.httpclient.entity.ContentType r3 = cz.msebera.android.httpclient.entity.ContentType.create(r3)
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    @java.lang.Deprecated
    public FileBody(java.io.File r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0, r3, r4)
            return
    }

    @java.lang.Deprecated
    public FileBody(java.io.File r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            cz.msebera.android.httpclient.entity.ContentType r3 = cz.msebera.android.httpclient.entity.ContentType.create(r3, r4)
            r0.<init>(r1, r3, r2)
            return
    }

    @Override
    public long getContentLength() {
            r2 = this;
            java.io.File r0 = r2.file
            long r0 = r0.length()
            return r0
    }

    public java.io.File getFile() {
            r1 = this;
            java.io.File r0 = r1.file
            return r0
    }

    @Override
    public java.lang.String getFilename() {
            r1 = this;
            java.lang.String r0 = r1.filename
            return r0
    }

    public java.io.InputStream getInputStream() throws java.io.IOException {
            r2 = this;
            java.io.FileInputStream r0 = new java.io.FileInputStream
            java.io.File r1 = r2.file
            r0.<init>(r1)
            return r0
    }

    @Override
    public java.lang.String getTransferEncoding() {
            r1 = this;
            java.lang.String r0 = "binary"
            return r0
    }

    @Override
    public void writeTo(java.io.OutputStream r5) throws java.io.IOException {
            r4 = this;
            java.lang.String r0 = "Output stream"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            java.io.FileInputStream r0 = new java.io.FileInputStream
            java.io.File r1 = r4.file
            r0.<init>(r1)
            r1 = 4096(0x1000, float:5.74E-42)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L23
        L10:
            int r2 = r0.read(r1)     // Catch: java.lang.Throwable -> L23
            r3 = -1
            if (r2 == r3) goto L1c
            r3 = 0
            r5.write(r1, r3, r2)     // Catch: java.lang.Throwable -> L23
            goto L10
        L1c:
            r5.flush()     // Catch: java.lang.Throwable -> L23
            r0.close()
            return
        L23:
            r5 = move-exception
            r0.close()
            throw r5
    }
}
