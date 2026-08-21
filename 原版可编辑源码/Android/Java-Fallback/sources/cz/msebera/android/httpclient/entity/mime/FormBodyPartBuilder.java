package cz.msebera.android.httpclient.entity.mime;

public class FormBodyPartBuilder {
    private cz.msebera.android.httpclient.entity.mime.content.ContentBody body;
    private final cz.msebera.android.httpclient.entity.mime.Header header;
    private java.lang.String name;

    FormBodyPartBuilder() {
            r1 = this;
            r1.<init>()
            cz.msebera.android.httpclient.entity.mime.Header r0 = new cz.msebera.android.httpclient.entity.mime.Header
            r0.<init>()
            r1.header = r0
            return
    }

    FormBodyPartBuilder(java.lang.String r1, cz.msebera.android.httpclient.entity.mime.content.ContentBody r2) {
            r0 = this;
            r0.<init>()
            r0.name = r1
            r0.body = r2
            return
    }

    public static cz.msebera.android.httpclient.entity.mime.FormBodyPartBuilder create() {
            cz.msebera.android.httpclient.entity.mime.FormBodyPartBuilder r0 = new cz.msebera.android.httpclient.entity.mime.FormBodyPartBuilder
            r0.<init>()
            return r0
    }

    public static cz.msebera.android.httpclient.entity.mime.FormBodyPartBuilder create(java.lang.String r1, cz.msebera.android.httpclient.entity.mime.content.ContentBody r2) {
            cz.msebera.android.httpclient.entity.mime.FormBodyPartBuilder r0 = new cz.msebera.android.httpclient.entity.mime.FormBodyPartBuilder
            r0.<init>(r1, r2)
            return r0
    }

    public cz.msebera.android.httpclient.entity.mime.FormBodyPartBuilder addField(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "Field name"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.entity.mime.Header r0 = r2.header
            cz.msebera.android.httpclient.entity.mime.MinimalField r1 = new cz.msebera.android.httpclient.entity.mime.MinimalField
            r1.<init>(r3, r4)
            r0.addField(r1)
            return r2
    }

    public cz.msebera.android.httpclient.entity.mime.FormBodyPart build() {
            r5 = this;
            java.lang.String r0 = r5.name
            java.lang.String r1 = "Name"
            cz.msebera.android.httpclient.util.Asserts.notBlank(r0, r1)
            cz.msebera.android.httpclient.entity.mime.content.ContentBody r0 = r5.body
            java.lang.String r1 = "Content body"
            cz.msebera.android.httpclient.util.Asserts.notNull(r0, r1)
            cz.msebera.android.httpclient.entity.mime.Header r0 = new cz.msebera.android.httpclient.entity.mime.Header
            r0.<init>()
            cz.msebera.android.httpclient.entity.mime.Header r1 = r5.header
            java.util.List r1 = r1.getFields()
            java.util.Iterator r1 = r1.iterator()
        L1d:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L2d
            java.lang.Object r2 = r1.next()
            cz.msebera.android.httpclient.entity.mime.MinimalField r2 = (cz.msebera.android.httpclient.entity.mime.MinimalField) r2
            r0.addField(r2)
            goto L1d
        L2d:
            java.lang.String r1 = "Content-Disposition"
            cz.msebera.android.httpclient.entity.mime.MinimalField r2 = r0.getField(r1)
            if (r2 != 0) goto L6e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "form-data; name=\""
            r2.append(r3)
            java.lang.String r3 = r5.name
            r2.append(r3)
            java.lang.String r3 = "\""
            r2.append(r3)
            cz.msebera.android.httpclient.entity.mime.content.ContentBody r4 = r5.body
            java.lang.String r4 = r4.getFilename()
            if (r4 == 0) goto L62
            java.lang.String r4 = "; filename=\""
            r2.append(r4)
            cz.msebera.android.httpclient.entity.mime.content.ContentBody r4 = r5.body
            java.lang.String r4 = r4.getFilename()
            r2.append(r4)
            r2.append(r3)
        L62:
            cz.msebera.android.httpclient.entity.mime.MinimalField r3 = new cz.msebera.android.httpclient.entity.mime.MinimalField
            java.lang.String r2 = r2.toString()
            r3.<init>(r1, r2)
            r0.addField(r3)
        L6e:
            java.lang.String r1 = "Content-Type"
            cz.msebera.android.httpclient.entity.mime.MinimalField r2 = r0.getField(r1)
            if (r2 != 0) goto Lc3
            cz.msebera.android.httpclient.entity.mime.content.ContentBody r2 = r5.body
            boolean r3 = r2 instanceof cz.msebera.android.httpclient.entity.mime.content.AbstractContentBody
            if (r3 == 0) goto L83
            cz.msebera.android.httpclient.entity.mime.content.AbstractContentBody r2 = (cz.msebera.android.httpclient.entity.mime.content.AbstractContentBody) r2
            cz.msebera.android.httpclient.entity.ContentType r2 = r2.getContentType()
            goto L84
        L83:
            r2 = 0
        L84:
            if (r2 == 0) goto L93
            cz.msebera.android.httpclient.entity.mime.MinimalField r3 = new cz.msebera.android.httpclient.entity.mime.MinimalField
            java.lang.String r2 = r2.toString()
            r3.<init>(r1, r2)
            r0.addField(r3)
            goto Lc3
        L93:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            cz.msebera.android.httpclient.entity.mime.content.ContentBody r3 = r5.body
            java.lang.String r3 = r3.getMimeType()
            r2.append(r3)
            cz.msebera.android.httpclient.entity.mime.content.ContentBody r3 = r5.body
            java.lang.String r3 = r3.getCharset()
            if (r3 == 0) goto Lb7
            java.lang.String r3 = "; charset="
            r2.append(r3)
            cz.msebera.android.httpclient.entity.mime.content.ContentBody r3 = r5.body
            java.lang.String r3 = r3.getCharset()
            r2.append(r3)
        Lb7:
            cz.msebera.android.httpclient.entity.mime.MinimalField r3 = new cz.msebera.android.httpclient.entity.mime.MinimalField
            java.lang.String r2 = r2.toString()
            r3.<init>(r1, r2)
            r0.addField(r3)
        Lc3:
            java.lang.String r1 = "Content-Transfer-Encoding"
            cz.msebera.android.httpclient.entity.mime.MinimalField r2 = r0.getField(r1)
            if (r2 != 0) goto Ld9
            cz.msebera.android.httpclient.entity.mime.MinimalField r2 = new cz.msebera.android.httpclient.entity.mime.MinimalField
            cz.msebera.android.httpclient.entity.mime.content.ContentBody r3 = r5.body
            java.lang.String r3 = r3.getTransferEncoding()
            r2.<init>(r1, r3)
            r0.addField(r2)
        Ld9:
            cz.msebera.android.httpclient.entity.mime.FormBodyPart r1 = new cz.msebera.android.httpclient.entity.mime.FormBodyPart
            java.lang.String r2 = r5.name
            cz.msebera.android.httpclient.entity.mime.content.ContentBody r3 = r5.body
            r1.<init>(r2, r3, r0)
            return r1
    }

    public cz.msebera.android.httpclient.entity.mime.FormBodyPartBuilder removeFields(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "Field name"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.entity.mime.Header r0 = r1.header
            r0.removeFields(r2)
            return r1
    }

    public cz.msebera.android.httpclient.entity.mime.FormBodyPartBuilder setBody(cz.msebera.android.httpclient.entity.mime.content.ContentBody r1) {
            r0 = this;
            r0.body = r1
            return r0
    }

    public cz.msebera.android.httpclient.entity.mime.FormBodyPartBuilder setField(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "Field name"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.entity.mime.Header r0 = r2.header
            cz.msebera.android.httpclient.entity.mime.MinimalField r1 = new cz.msebera.android.httpclient.entity.mime.MinimalField
            r1.<init>(r3, r4)
            r0.setField(r1)
            return r2
    }

    public cz.msebera.android.httpclient.entity.mime.FormBodyPartBuilder setName(java.lang.String r1) {
            r0 = this;
            r0.name = r1
            return r0
    }
}
