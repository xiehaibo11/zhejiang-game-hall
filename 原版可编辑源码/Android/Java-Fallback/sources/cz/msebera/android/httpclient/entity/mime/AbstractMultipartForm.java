package cz.msebera.android.httpclient.entity.mime;

abstract class AbstractMultipartForm {
    private static final cz.msebera.android.httpclient.util.ByteArrayBuffer CR_LF = null;
    private static final cz.msebera.android.httpclient.util.ByteArrayBuffer FIELD_SEP = null;
    private static final cz.msebera.android.httpclient.util.ByteArrayBuffer TWO_DASHES = null;
    final java.lang.String boundary;
    final java.nio.charset.Charset charset;

    static {
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.entity.mime.MIME.DEFAULT_CHARSET
            java.lang.String r1 = ": "
            cz.msebera.android.httpclient.util.ByteArrayBuffer r0 = encode(r0, r1)
            cz.msebera.android.httpclient.entity.mime.AbstractMultipartForm.FIELD_SEP = r0
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.entity.mime.MIME.DEFAULT_CHARSET
            java.lang.String r1 = "\r\n"
            cz.msebera.android.httpclient.util.ByteArrayBuffer r0 = encode(r0, r1)
            cz.msebera.android.httpclient.entity.mime.AbstractMultipartForm.CR_LF = r0
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.entity.mime.MIME.DEFAULT_CHARSET
            java.lang.String r1 = "--"
            cz.msebera.android.httpclient.util.ByteArrayBuffer r0 = encode(r0, r1)
            cz.msebera.android.httpclient.entity.mime.AbstractMultipartForm.TWO_DASHES = r0
            return
    }

    public AbstractMultipartForm(java.lang.String r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r2)
            return
    }

    public AbstractMultipartForm(java.nio.charset.Charset r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Multipart boundary"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            if (r2 == 0) goto Lb
            goto Ld
        Lb:
            java.nio.charset.Charset r2 = cz.msebera.android.httpclient.entity.mime.MIME.DEFAULT_CHARSET
        Ld:
            r1.charset = r2
            r1.boundary = r3
            return
    }

    private static cz.msebera.android.httpclient.util.ByteArrayBuffer encode(java.nio.charset.Charset r2, java.lang.String r3) {
            java.nio.CharBuffer r3 = java.nio.CharBuffer.wrap(r3)
            java.nio.ByteBuffer r2 = r2.encode(r3)
            cz.msebera.android.httpclient.util.ByteArrayBuffer r3 = new cz.msebera.android.httpclient.util.ByteArrayBuffer
            int r0 = r2.remaining()
            r3.<init>(r0)
            byte[] r0 = r2.array()
            int r1 = r2.position()
            int r2 = r2.remaining()
            r3.append(r0, r1, r2)
            return r3
    }

    private static void writeBytes(cz.msebera.android.httpclient.util.ByteArrayBuffer r2, java.io.OutputStream r3) throws java.io.IOException {
            byte[] r0 = r2.buffer()
            int r2 = r2.length()
            r1 = 0
            r3.write(r0, r1, r2)
            return
    }

    private static void writeBytes(java.lang.String r1, java.io.OutputStream r2) throws java.io.IOException {
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.entity.mime.MIME.DEFAULT_CHARSET
            cz.msebera.android.httpclient.util.ByteArrayBuffer r1 = encode(r0, r1)
            writeBytes(r1, r2)
            return
    }

    private static void writeBytes(java.lang.String r0, java.nio.charset.Charset r1, java.io.OutputStream r2) throws java.io.IOException {
            cz.msebera.android.httpclient.util.ByteArrayBuffer r0 = encode(r1, r0)
            writeBytes(r0, r2)
            return
    }

    protected static void writeField(cz.msebera.android.httpclient.entity.mime.MinimalField r1, java.io.OutputStream r2) throws java.io.IOException {
            java.lang.String r0 = r1.getName()
            writeBytes(r0, r2)
            cz.msebera.android.httpclient.util.ByteArrayBuffer r0 = cz.msebera.android.httpclient.entity.mime.AbstractMultipartForm.FIELD_SEP
            writeBytes(r0, r2)
            java.lang.String r1 = r1.getBody()
            writeBytes(r1, r2)
            cz.msebera.android.httpclient.util.ByteArrayBuffer r1 = cz.msebera.android.httpclient.entity.mime.AbstractMultipartForm.CR_LF
            writeBytes(r1, r2)
            return
    }

    protected static void writeField(cz.msebera.android.httpclient.entity.mime.MinimalField r1, java.nio.charset.Charset r2, java.io.OutputStream r3) throws java.io.IOException {
            java.lang.String r0 = r1.getName()
            writeBytes(r0, r2, r3)
            cz.msebera.android.httpclient.util.ByteArrayBuffer r0 = cz.msebera.android.httpclient.entity.mime.AbstractMultipartForm.FIELD_SEP
            writeBytes(r0, r3)
            java.lang.String r1 = r1.getBody()
            writeBytes(r1, r2, r3)
            cz.msebera.android.httpclient.util.ByteArrayBuffer r1 = cz.msebera.android.httpclient.entity.mime.AbstractMultipartForm.CR_LF
            writeBytes(r1, r3)
            return
    }

    void doWriteTo(java.io.OutputStream r5, boolean r6) throws java.io.IOException {
            r4 = this;
            java.nio.charset.Charset r0 = r4.charset
            java.lang.String r1 = r4.boundary
            cz.msebera.android.httpclient.util.ByteArrayBuffer r0 = encode(r0, r1)
            java.util.List r1 = r4.getBodyParts()
            java.util.Iterator r1 = r1.iterator()
        L10:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L40
            java.lang.Object r2 = r1.next()
            cz.msebera.android.httpclient.entity.mime.FormBodyPart r2 = (cz.msebera.android.httpclient.entity.mime.FormBodyPart) r2
            cz.msebera.android.httpclient.util.ByteArrayBuffer r3 = cz.msebera.android.httpclient.entity.mime.AbstractMultipartForm.TWO_DASHES
            writeBytes(r3, r5)
            writeBytes(r0, r5)
            cz.msebera.android.httpclient.util.ByteArrayBuffer r3 = cz.msebera.android.httpclient.entity.mime.AbstractMultipartForm.CR_LF
            writeBytes(r3, r5)
            r4.formatMultipartHeader(r2, r5)
            cz.msebera.android.httpclient.util.ByteArrayBuffer r3 = cz.msebera.android.httpclient.entity.mime.AbstractMultipartForm.CR_LF
            writeBytes(r3, r5)
            if (r6 == 0) goto L3a
            cz.msebera.android.httpclient.entity.mime.content.ContentBody r2 = r2.getBody()
            r2.writeTo(r5)
        L3a:
            cz.msebera.android.httpclient.util.ByteArrayBuffer r2 = cz.msebera.android.httpclient.entity.mime.AbstractMultipartForm.CR_LF
            writeBytes(r2, r5)
            goto L10
        L40:
            cz.msebera.android.httpclient.util.ByteArrayBuffer r6 = cz.msebera.android.httpclient.entity.mime.AbstractMultipartForm.TWO_DASHES
            writeBytes(r6, r5)
            writeBytes(r0, r5)
            cz.msebera.android.httpclient.util.ByteArrayBuffer r6 = cz.msebera.android.httpclient.entity.mime.AbstractMultipartForm.TWO_DASHES
            writeBytes(r6, r5)
            cz.msebera.android.httpclient.util.ByteArrayBuffer r6 = cz.msebera.android.httpclient.entity.mime.AbstractMultipartForm.CR_LF
            writeBytes(r6, r5)
            return
    }

    protected abstract void formatMultipartHeader(cz.msebera.android.httpclient.entity.mime.FormBodyPart r1, java.io.OutputStream r2) throws java.io.IOException;

    public abstract java.util.List<cz.msebera.android.httpclient.entity.mime.FormBodyPart> getBodyParts();

    public long getTotalLength() {
            r10 = this;
            java.util.List r0 = r10.getBodyParts()
            java.util.Iterator r0 = r0.iterator()
            r1 = 0
            r3 = r1
        Lb:
            boolean r5 = r0.hasNext()
            r6 = -1
            if (r5 == 0) goto L28
            java.lang.Object r5 = r0.next()
            cz.msebera.android.httpclient.entity.mime.FormBodyPart r5 = (cz.msebera.android.httpclient.entity.mime.FormBodyPart) r5
            cz.msebera.android.httpclient.entity.mime.content.ContentBody r5 = r5.getBody()
            long r8 = r5.getContentLength()
            int r5 = (r8 > r1 ? 1 : (r8 == r1 ? 0 : -1))
            if (r5 < 0) goto L27
            long r3 = r3 + r8
            goto Lb
        L27:
            return r6
        L28:
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            r1 = 0
            r10.doWriteTo(r0, r1)     // Catch: java.io.IOException -> L39
            byte[] r0 = r0.toByteArray()     // Catch: java.io.IOException -> L39
            int r0 = r0.length     // Catch: java.io.IOException -> L39
            long r0 = (long) r0
            long r3 = r3 + r0
            return r3
        L39:
            return r6
    }

    public void writeTo(java.io.OutputStream r2) throws java.io.IOException {
            r1 = this;
            r0 = 1
            r1.doWriteTo(r2, r0)
            return
    }
}
