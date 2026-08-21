package cz.msebera.android.httpclient.entity;

public class EntityTemplate extends cz.msebera.android.httpclient.entity.AbstractHttpEntity {
    private final cz.msebera.android.httpclient.entity.ContentProducer contentproducer;

    public EntityTemplate(cz.msebera.android.httpclient.entity.ContentProducer r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Content producer"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.entity.ContentProducer r2 = (cz.msebera.android.httpclient.entity.ContentProducer) r2
            r1.contentproducer = r2
            return
    }

    @Override
    public java.io.InputStream getContent() throws java.io.IOException {
            r2 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            r2.writeTo(r0)
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream
            byte[] r0 = r0.toByteArray()
            r1.<init>(r0)
            return r1
    }

    @Override
    public long getContentLength() {
            r2 = this;
            r0 = -1
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
    public void writeTo(java.io.OutputStream r2) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Output stream"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.entity.ContentProducer r0 = r1.contentproducer
            r0.writeTo(r2)
            return
    }
}
