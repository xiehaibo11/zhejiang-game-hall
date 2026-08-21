package cz.msebera.android.httpclient.entity;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class StringEntity extends cz.msebera.android.httpclient.entity.AbstractHttpEntity implements java.lang.Cloneable {
    protected final byte[] content;

    public StringEntity(java.lang.String r2) throws java.io.UnsupportedEncodingException {
            r1 = this;
            cz.msebera.android.httpclient.entity.ContentType r0 = cz.msebera.android.httpclient.entity.ContentType.DEFAULT_TEXT
            r1.<init>(r2, r0)
            return
    }

    public StringEntity(java.lang.String r2, cz.msebera.android.httpclient.entity.ContentType r3) throws java.nio.charset.UnsupportedCharsetException {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Source string"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            if (r3 == 0) goto Lf
            java.nio.charset.Charset r0 = r3.getCharset()
            goto L10
        Lf:
            r0 = 0
        L10:
            if (r0 != 0) goto L14
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.protocol.HTTP.DEF_CONTENT_CHARSET
        L14:
            byte[] r2 = r2.getBytes(r0)
            r1.content = r2
            if (r3 == 0) goto L23
            java.lang.String r2 = r3.toString()
            r1.setContentType(r2)
        L23:
            return
    }

    public StringEntity(java.lang.String r2, java.lang.String r3) throws java.nio.charset.UnsupportedCharsetException {
            r1 = this;
            cz.msebera.android.httpclient.entity.ContentType r0 = cz.msebera.android.httpclient.entity.ContentType.TEXT_PLAIN
            java.lang.String r0 = r0.getMimeType()
            cz.msebera.android.httpclient.entity.ContentType r3 = cz.msebera.android.httpclient.entity.ContentType.create(r0, r3)
            r1.<init>(r2, r3)
            return
    }

    @java.lang.Deprecated
    public StringEntity(java.lang.String r2, java.lang.String r3, java.lang.String r4) throws java.io.UnsupportedEncodingException {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Source string"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            if (r3 == 0) goto Lb
            goto Ld
        Lb:
            java.lang.String r3 = "text/plain"
        Ld:
            if (r4 == 0) goto L10
            goto L12
        L10:
            java.lang.String r4 = "ISO-8859-1"
        L12:
            byte[] r2 = r2.getBytes(r4)
            r1.content = r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r3)
            java.lang.String r3 = "; charset="
            r2.append(r3)
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            r1.setContentType(r2)
            return
    }

    public StringEntity(java.lang.String r2, java.nio.charset.Charset r3) {
            r1 = this;
            cz.msebera.android.httpclient.entity.ContentType r0 = cz.msebera.android.httpclient.entity.ContentType.TEXT_PLAIN
            java.lang.String r0 = r0.getMimeType()
            cz.msebera.android.httpclient.entity.ContentType r3 = cz.msebera.android.httpclient.entity.ContentType.create(r0, r3)
            r1.<init>(r2, r3)
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
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            byte[] r1 = r2.content
            r0.<init>(r1)
            return r0
    }

    @Override
    public long getContentLength() {
            r2 = this;
            byte[] r0 = r2.content
            int r0 = r0.length
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
    public void writeTo(java.io.OutputStream r2) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Output stream"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            byte[] r0 = r1.content
            r2.write(r0)
            r2.flush()
            return
    }
}
