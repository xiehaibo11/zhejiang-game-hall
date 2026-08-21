package cz.msebera.android.httpclient.client.entity;

public class DecompressingEntity extends cz.msebera.android.httpclient.entity.HttpEntityWrapper {
    private static final int BUFFER_SIZE = 2048;
    private java.io.InputStream content;
    private final cz.msebera.android.httpclient.client.entity.InputStreamFactory inputStreamFactory;

    public DecompressingEntity(cz.msebera.android.httpclient.HttpEntity r1, cz.msebera.android.httpclient.client.entity.InputStreamFactory r2) {
            r0 = this;
            r0.<init>(r1)
            r0.inputStreamFactory = r2
            return
    }

    private java.io.InputStream getDecompressingStream() throws java.io.IOException {
            r3 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r3.wrappedEntity
            java.io.InputStream r0 = r0.getContent()
            cz.msebera.android.httpclient.client.entity.LazyDecompressingInputStream r1 = new cz.msebera.android.httpclient.client.entity.LazyDecompressingInputStream
            cz.msebera.android.httpclient.client.entity.InputStreamFactory r2 = r3.inputStreamFactory
            r1.<init>(r0, r2)
            return r1
    }

    @Override
    public java.io.InputStream getContent() throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r1.wrappedEntity
            boolean r0 = r0.isStreaming()
            if (r0 == 0) goto L15
            java.io.InputStream r0 = r1.content
            if (r0 != 0) goto L12
            java.io.InputStream r0 = r1.getDecompressingStream()
            r1.content = r0
        L12:
            java.io.InputStream r0 = r1.content
            return r0
        L15:
            java.io.InputStream r0 = r1.getDecompressingStream()
            return r0
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
            r0 = -1
            return r0
    }

    @Override
    public void writeTo(java.io.OutputStream r5) throws java.io.IOException {
            r4 = this;
            java.lang.String r0 = "Output stream"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            java.io.InputStream r0 = r4.getContent()
            r1 = 2048(0x800, float:2.87E-42)
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
