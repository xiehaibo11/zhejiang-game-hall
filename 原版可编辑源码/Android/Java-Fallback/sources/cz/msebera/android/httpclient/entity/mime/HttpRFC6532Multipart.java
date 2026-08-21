package cz.msebera.android.httpclient.entity.mime;

class HttpRFC6532Multipart extends cz.msebera.android.httpclient.entity.mime.AbstractMultipartForm {
    private final java.util.List<cz.msebera.android.httpclient.entity.mime.FormBodyPart> parts;

    public HttpRFC6532Multipart(java.nio.charset.Charset r1, java.lang.String r2, java.util.List<cz.msebera.android.httpclient.entity.mime.FormBodyPart> r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.parts = r3
            return
    }

    @Override
    protected void formatMultipartHeader(cz.msebera.android.httpclient.entity.mime.FormBodyPart r3, java.io.OutputStream r4) throws java.io.IOException {
            r2 = this;
            cz.msebera.android.httpclient.entity.mime.Header r3 = r3.getHeader()
            java.util.Iterator r3 = r3.iterator()
        L8:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L1a
            java.lang.Object r0 = r3.next()
            cz.msebera.android.httpclient.entity.mime.MinimalField r0 = (cz.msebera.android.httpclient.entity.mime.MinimalField) r0
            java.nio.charset.Charset r1 = cz.msebera.android.httpclient.entity.mime.MIME.UTF8_CHARSET
            writeField(r0, r1, r4)
            goto L8
        L1a:
            return
    }

    @Override
    public java.util.List<cz.msebera.android.httpclient.entity.mime.FormBodyPart> getBodyParts() {
            r1 = this;
            java.util.List<cz.msebera.android.httpclient.entity.mime.FormBodyPart> r0 = r1.parts
            return r0
    }
}
