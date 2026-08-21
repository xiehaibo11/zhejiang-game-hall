package cz.msebera.android.httpclient.entity.mime.content;

public class StringBody extends cz.msebera.android.httpclient.entity.mime.content.AbstractContentBody {
    private final byte[] content;

    @java.lang.Deprecated
    public StringBody(java.lang.String r3) throws java.io.UnsupportedEncodingException {
            r2 = this;
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.Consts.ASCII
            java.lang.String r1 = "text/plain"
            r2.<init>(r3, r1, r0)
            return
    }

    public StringBody(java.lang.String r2, cz.msebera.android.httpclient.entity.ContentType r3) {
            r1 = this;
            r1.<init>(r3)
            java.lang.String r0 = "Text"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.nio.charset.Charset r3 = r3.getCharset()
            if (r3 == 0) goto Lf
            goto L11
        Lf:
            java.nio.charset.Charset r3 = cz.msebera.android.httpclient.Consts.ASCII
        L11:
            byte[] r2 = r2.getBytes(r3)
            r1.content = r2
            return
    }

    @java.lang.Deprecated
    public StringBody(java.lang.String r1, java.lang.String r2, java.nio.charset.Charset r3) throws java.io.UnsupportedEncodingException {
            r0 = this;
            cz.msebera.android.httpclient.entity.ContentType r2 = cz.msebera.android.httpclient.entity.ContentType.create(r2, r3)
            r0.<init>(r1, r2)
            return
    }

    @java.lang.Deprecated
    public StringBody(java.lang.String r2, java.nio.charset.Charset r3) throws java.io.UnsupportedEncodingException {
            r1 = this;
            java.lang.String r0 = "text/plain"
            r1.<init>(r2, r0, r3)
            return
    }

    @java.lang.Deprecated
    public static cz.msebera.android.httpclient.entity.mime.content.StringBody create(java.lang.String r1) throws java.lang.IllegalArgumentException {
            r0 = 0
            cz.msebera.android.httpclient.entity.mime.content.StringBody r1 = create(r1, r0, r0)
            return r1
    }

    @java.lang.Deprecated
    public static cz.msebera.android.httpclient.entity.mime.content.StringBody create(java.lang.String r2, java.lang.String r3, java.nio.charset.Charset r4) throws java.lang.IllegalArgumentException {
            cz.msebera.android.httpclient.entity.mime.content.StringBody r0 = new cz.msebera.android.httpclient.entity.mime.content.StringBody     // Catch: java.io.UnsupportedEncodingException -> L6
            r0.<init>(r2, r3, r4)     // Catch: java.io.UnsupportedEncodingException -> L6
            return r0
        L6:
            r2 = move-exception
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Charset "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = " is not supported"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4, r2)
            throw r3
    }

    @java.lang.Deprecated
    public static cz.msebera.android.httpclient.entity.mime.content.StringBody create(java.lang.String r1, java.nio.charset.Charset r2) throws java.lang.IllegalArgumentException {
            r0 = 0
            cz.msebera.android.httpclient.entity.mime.content.StringBody r1 = create(r1, r0, r2)
            return r1
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
    public java.lang.String getFilename() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.io.Reader getReader() {
            r4 = this;
            cz.msebera.android.httpclient.entity.ContentType r0 = r4.getContentType()
            java.nio.charset.Charset r0 = r0.getCharset()
            java.io.InputStreamReader r1 = new java.io.InputStreamReader
            java.io.ByteArrayInputStream r2 = new java.io.ByteArrayInputStream
            byte[] r3 = r4.content
            r2.<init>(r3)
            if (r0 == 0) goto L14
            goto L16
        L14:
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.Consts.ASCII
        L16:
            r1.<init>(r2, r0)
            return r1
    }

    @Override
    public java.lang.String getTransferEncoding() {
            r1 = this;
            java.lang.String r0 = "8bit"
            return r0
    }

    @Override
    public void writeTo(java.io.OutputStream r5) throws java.io.IOException {
            r4 = this;
            java.lang.String r0 = "Output stream"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            byte[] r1 = r4.content
            r0.<init>(r1)
            r1 = 4096(0x1000, float:5.74E-42)
            byte[] r1 = new byte[r1]
        L10:
            int r2 = r0.read(r1)
            r3 = -1
            if (r2 == r3) goto L1c
            r3 = 0
            r5.write(r1, r3, r2)
            goto L10
        L1c:
            r5.flush()
            return
    }
}
