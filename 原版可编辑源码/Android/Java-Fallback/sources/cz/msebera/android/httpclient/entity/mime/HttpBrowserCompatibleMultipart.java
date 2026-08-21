package cz.msebera.android.httpclient.entity.mime;

class HttpBrowserCompatibleMultipart extends cz.msebera.android.httpclient.entity.mime.AbstractMultipartForm {
    private final java.util.List<cz.msebera.android.httpclient.entity.mime.FormBodyPart> parts;

    public HttpBrowserCompatibleMultipart(java.nio.charset.Charset r1, java.lang.String r2, java.util.List<cz.msebera.android.httpclient.entity.mime.FormBodyPart> r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.parts = r3
            return
    }

    @Override
    protected void formatMultipartHeader(cz.msebera.android.httpclient.entity.mime.FormBodyPart r4, java.io.OutputStream r5) throws java.io.IOException {
            r3 = this;
            cz.msebera.android.httpclient.entity.mime.Header r0 = r4.getHeader()
            java.lang.String r1 = "Content-Disposition"
            cz.msebera.android.httpclient.entity.mime.MinimalField r1 = r0.getField(r1)
            java.nio.charset.Charset r2 = r3.charset
            writeField(r1, r2, r5)
            cz.msebera.android.httpclient.entity.mime.content.ContentBody r4 = r4.getBody()
            java.lang.String r4 = r4.getFilename()
            if (r4 == 0) goto L24
            java.lang.String r4 = "Content-Type"
            cz.msebera.android.httpclient.entity.mime.MinimalField r4 = r0.getField(r4)
            java.nio.charset.Charset r0 = r3.charset
            writeField(r4, r0, r5)
        L24:
            return
    }

    @Override
    public java.util.List<cz.msebera.android.httpclient.entity.mime.FormBodyPart> getBodyParts() {
            r1 = this;
            java.util.List<cz.msebera.android.httpclient.entity.mime.FormBodyPart> r0 = r1.parts
            return r0
    }
}
