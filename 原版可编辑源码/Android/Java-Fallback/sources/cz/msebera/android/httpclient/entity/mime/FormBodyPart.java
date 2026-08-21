package cz.msebera.android.httpclient.entity.mime;

public class FormBodyPart {
    private final cz.msebera.android.httpclient.entity.mime.content.ContentBody body;
    private final cz.msebera.android.httpclient.entity.mime.Header header;
    private final java.lang.String name;

    @java.lang.Deprecated
    public FormBodyPart(java.lang.String r2, cz.msebera.android.httpclient.entity.mime.content.ContentBody r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Name"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Body"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            r1.name = r2
            r1.body = r3
            cz.msebera.android.httpclient.entity.mime.Header r2 = new cz.msebera.android.httpclient.entity.mime.Header
            r2.<init>()
            r1.header = r2
            r1.generateContentDisp(r3)
            r1.generateContentType(r3)
            r1.generateTransferEncoding(r3)
            return
    }

    FormBodyPart(java.lang.String r2, cz.msebera.android.httpclient.entity.mime.content.ContentBody r3, cz.msebera.android.httpclient.entity.mime.Header r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Name"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Body"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            r1.name = r2
            r1.body = r3
            if (r4 == 0) goto L14
            goto L19
        L14:
            cz.msebera.android.httpclient.entity.mime.Header r4 = new cz.msebera.android.httpclient.entity.mime.Header
            r4.<init>()
        L19:
            r1.header = r4
            return
    }

    public void addField(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "Field name"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.entity.mime.Header r0 = r2.header
            cz.msebera.android.httpclient.entity.mime.MinimalField r1 = new cz.msebera.android.httpclient.entity.mime.MinimalField
            r1.<init>(r3, r4)
            r0.addField(r1)
            return
    }

    @java.lang.Deprecated
    protected void generateContentDisp(cz.msebera.android.httpclient.entity.mime.content.ContentBody r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "form-data; name=\""
            r0.append(r1)
            java.lang.String r1 = r3.getName()
            r0.append(r1)
            java.lang.String r1 = "\""
            r0.append(r1)
            java.lang.String r2 = r4.getFilename()
            if (r2 == 0) goto L2b
            java.lang.String r2 = "; filename=\""
            r0.append(r2)
            java.lang.String r4 = r4.getFilename()
            r0.append(r4)
            r0.append(r1)
        L2b:
            java.lang.String r4 = r0.toString()
            java.lang.String r0 = "Content-Disposition"
            r3.addField(r0, r4)
            return
    }

    @java.lang.Deprecated
    protected void generateContentType(cz.msebera.android.httpclient.entity.mime.content.ContentBody r4) {
            r3 = this;
            boolean r0 = r4 instanceof cz.msebera.android.httpclient.entity.mime.content.AbstractContentBody
            if (r0 == 0) goto Lc
            r0 = r4
            cz.msebera.android.httpclient.entity.mime.content.AbstractContentBody r0 = (cz.msebera.android.httpclient.entity.mime.content.AbstractContentBody) r0
            cz.msebera.android.httpclient.entity.ContentType r0 = r0.getContentType()
            goto Ld
        Lc:
            r0 = 0
        Ld:
            java.lang.String r1 = "Content-Type"
            if (r0 == 0) goto L19
            java.lang.String r4 = r0.toString()
            r3.addField(r1, r4)
            goto L3e
        L19:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r4.getMimeType()
            r0.append(r2)
            java.lang.String r2 = r4.getCharset()
            if (r2 == 0) goto L37
            java.lang.String r2 = "; charset="
            r0.append(r2)
            java.lang.String r4 = r4.getCharset()
            r0.append(r4)
        L37:
            java.lang.String r4 = r0.toString()
            r3.addField(r1, r4)
        L3e:
            return
    }

    @java.lang.Deprecated
    protected void generateTransferEncoding(cz.msebera.android.httpclient.entity.mime.content.ContentBody r2) {
            r1 = this;
            java.lang.String r2 = r2.getTransferEncoding()
            java.lang.String r0 = "Content-Transfer-Encoding"
            r1.addField(r0, r2)
            return
    }

    public cz.msebera.android.httpclient.entity.mime.content.ContentBody getBody() {
            r1 = this;
            cz.msebera.android.httpclient.entity.mime.content.ContentBody r0 = r1.body
            return r0
    }

    public cz.msebera.android.httpclient.entity.mime.Header getHeader() {
            r1 = this;
            cz.msebera.android.httpclient.entity.mime.Header r0 = r1.header
            return r0
    }

    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }
}
