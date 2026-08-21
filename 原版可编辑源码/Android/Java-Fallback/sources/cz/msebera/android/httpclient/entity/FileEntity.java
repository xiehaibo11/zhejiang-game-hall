package cz.msebera.android.httpclient.entity;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class FileEntity extends cz.msebera.android.httpclient.entity.AbstractHttpEntity implements java.lang.Cloneable {
    protected final java.io.File file;

    public FileEntity(java.io.File r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "File"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.io.File r2 = (java.io.File) r2
            r1.file = r2
            return
    }

    public FileEntity(java.io.File r2, cz.msebera.android.httpclient.entity.ContentType r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "File"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.io.File r2 = (java.io.File) r2
            r1.file = r2
            if (r3 == 0) goto L16
            java.lang.String r2 = r3.toString()
            r1.setContentType(r2)
        L16:
            return
    }

    @java.lang.Deprecated
    public FileEntity(java.io.File r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "File"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.io.File r2 = (java.io.File) r2
            r1.file = r2
            r1.setContentType(r3)
            return
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            java.lang.Object r0 = super.clone()
            return r0
    }

    @Override
    public java.io.InputStream getContent() throws java.io.IOException {
            r2 = this;
            java.io.FileInputStream r0 = new java.io.FileInputStream
            java.io.File r1 = r2.file
            r0.<init>(r1)
            return r0
    }

    @Override
    public long getContentLength() {
            r2 = this;
            java.io.File r0 = r2.file
            long r0 = r0.length()
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
