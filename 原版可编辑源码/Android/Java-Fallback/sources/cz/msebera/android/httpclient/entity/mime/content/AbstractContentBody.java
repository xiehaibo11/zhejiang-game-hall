package cz.msebera.android.httpclient.entity.mime.content;

public abstract class AbstractContentBody implements cz.msebera.android.httpclient.entity.mime.content.ContentBody {
    private final cz.msebera.android.httpclient.entity.ContentType contentType;

    public AbstractContentBody(cz.msebera.android.httpclient.entity.ContentType r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Content type"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.contentType = r2
            return
    }

    @java.lang.Deprecated
    public AbstractContentBody(java.lang.String r1) {
            r0 = this;
            cz.msebera.android.httpclient.entity.ContentType r1 = cz.msebera.android.httpclient.entity.ContentType.parse(r1)
            r0.<init>(r1)
            return
    }

    @Override
    public java.lang.String getCharset() {
            r1 = this;
            cz.msebera.android.httpclient.entity.ContentType r0 = r1.contentType
            java.nio.charset.Charset r0 = r0.getCharset()
            if (r0 == 0) goto Ld
            java.lang.String r0 = r0.name()
            goto Le
        Ld:
            r0 = 0
        Le:
            return r0
    }

    public cz.msebera.android.httpclient.entity.ContentType getContentType() {
            r1 = this;
            cz.msebera.android.httpclient.entity.ContentType r0 = r1.contentType
            return r0
    }

    @Override
    public java.lang.String getMediaType() {
            r3 = this;
            cz.msebera.android.httpclient.entity.ContentType r0 = r3.contentType
            java.lang.String r0 = r0.getMimeType()
            r1 = 47
            int r1 = r0.indexOf(r1)
            r2 = -1
            if (r1 == r2) goto L14
            r2 = 0
            java.lang.String r0 = r0.substring(r2, r1)
        L14:
            return r0
    }

    @Override
    public java.lang.String getMimeType() {
            r1 = this;
            cz.msebera.android.httpclient.entity.ContentType r0 = r1.contentType
            java.lang.String r0 = r0.getMimeType()
            return r0
    }

    @Override
    public java.lang.String getSubType() {
            r3 = this;
            cz.msebera.android.httpclient.entity.ContentType r0 = r3.contentType
            java.lang.String r0 = r0.getMimeType()
            r1 = 47
            int r1 = r0.indexOf(r1)
            r2 = -1
            if (r1 == r2) goto L16
            int r1 = r1 + 1
            java.lang.String r0 = r0.substring(r1)
            return r0
        L16:
            r0 = 0
            return r0
    }
}
