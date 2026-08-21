package cz.msebera.android.httpclient.entity.mime;

class HttpStrictMultipart extends cz.msebera.android.httpclient.entity.mime.AbstractMultipartForm {
    private final java.util.List<cz.msebera.android.httpclient.entity.mime.FormBodyPart> parts;

    public HttpStrictMultipart(java.nio.charset.Charset r1, java.lang.String r2, java.util.List<cz.msebera.android.httpclient.entity.mime.FormBodyPart> r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.parts = r3
            return
    }

    @Override
    protected void formatMultipartHeader(cz.msebera.android.httpclient.entity.mime.FormBodyPart r2, java.io.OutputStream r3) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.entity.mime.Header r2 = r2.getHeader()
            java.util.Iterator r2 = r2.iterator()
        L8:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L18
            java.lang.Object r0 = r2.next()
            cz.msebera.android.httpclient.entity.mime.MinimalField r0 = (cz.msebera.android.httpclient.entity.mime.MinimalField) r0
            writeField(r0, r3)
            goto L8
        L18:
            return
    }

    @Override
    public java.util.List<cz.msebera.android.httpclient.entity.mime.FormBodyPart> getBodyParts() {
            r1 = this;
            java.util.List<cz.msebera.android.httpclient.entity.mime.FormBodyPart> r0 = r1.parts
            return r0
    }
}
