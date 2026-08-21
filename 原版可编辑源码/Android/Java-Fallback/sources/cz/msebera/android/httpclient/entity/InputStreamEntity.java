package cz.msebera.android.httpclient.entity;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class InputStreamEntity extends cz.msebera.android.httpclient.entity.AbstractHttpEntity {
    private final java.io.InputStream content;
    private final long length;

    public InputStreamEntity(java.io.InputStream r3) {
            r2 = this;
            r0 = -1
            r2.<init>(r3, r0)
            return
    }

    public InputStreamEntity(java.io.InputStream r2, long r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public InputStreamEntity(java.io.InputStream r2, long r3, cz.msebera.android.httpclient.entity.ContentType r5) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Source input stream"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.io.InputStream r2 = (java.io.InputStream) r2
            r1.content = r2
            r1.length = r3
            if (r5 == 0) goto L18
            java.lang.String r2 = r5.toString()
            r1.setContentType(r2)
        L18:
            return
    }

    public InputStreamEntity(java.io.InputStream r3, cz.msebera.android.httpclient.entity.ContentType r4) {
            r2 = this;
            r0 = -1
            r2.<init>(r3, r0, r4)
            return
    }

    @Override
    public java.io.InputStream getContent() throws java.io.IOException {
            r1 = this;
            java.io.InputStream r0 = r1.content
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
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public void writeTo(java.io.OutputStream r11) throws java.io.IOException {
            r10 = this;
            java.lang.String r0 = "Output stream"
            cz.msebera.android.httpclient.util.Args.notNull(r11, r0)
            java.io.InputStream r0 = r10.content
            r1 = 4096(0x1000, float:5.74E-42)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L3d
            long r2 = r10.length     // Catch: java.lang.Throwable -> L3d
            r4 = -1
            r5 = 0
            r7 = 0
            int r8 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r8 >= 0) goto L1f
        L15:
            int r2 = r0.read(r1)     // Catch: java.lang.Throwable -> L3d
            if (r2 == r4) goto L39
            r11.write(r1, r7, r2)     // Catch: java.lang.Throwable -> L3d
            goto L15
        L1f:
            long r2 = r10.length     // Catch: java.lang.Throwable -> L3d
        L21:
            int r8 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r8 <= 0) goto L39
            r8 = 4096(0x1000, double:2.0237E-320)
            long r8 = java.lang.Math.min(r8, r2)     // Catch: java.lang.Throwable -> L3d
            int r9 = (int) r8     // Catch: java.lang.Throwable -> L3d
            int r8 = r0.read(r1, r7, r9)     // Catch: java.lang.Throwable -> L3d
            if (r8 != r4) goto L33
            goto L39
        L33:
            r11.write(r1, r7, r8)     // Catch: java.lang.Throwable -> L3d
            long r8 = (long) r8
            long r2 = r2 - r8
            goto L21
        L39:
            r0.close()
            return
        L3d:
            r11 = move-exception
            r0.close()
            throw r11
    }
}
