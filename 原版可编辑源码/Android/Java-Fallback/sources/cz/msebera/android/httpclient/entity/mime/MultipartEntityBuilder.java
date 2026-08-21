package cz.msebera.android.httpclient.entity.mime;

public class MultipartEntityBuilder {
    private static final java.lang.String DEFAULT_SUBTYPE = "form-data";
    private static final char[] MULTIPART_CHARS = null;
    private java.util.List<cz.msebera.android.httpclient.entity.mime.FormBodyPart> bodyParts;
    private java.lang.String boundary;
    private java.nio.charset.Charset charset;
    private cz.msebera.android.httpclient.entity.ContentType contentType;
    private cz.msebera.android.httpclient.entity.mime.HttpMultipartMode mode;

    static class 1 {
        static final int[] $SwitchMap$cz$msebera$android$httpclient$entity$mime$HttpMultipartMode = null;

        static {
                cz.msebera.android.httpclient.entity.mime.HttpMultipartMode[] r0 = cz.msebera.android.httpclient.entity.mime.HttpMultipartMode.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder.1.$SwitchMap$cz$msebera$android$httpclient$entity$mime$HttpMultipartMode = r0
                int[] r0 = cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder.1.$SwitchMap$cz$msebera$android$httpclient$entity$mime$HttpMultipartMode     // Catch: java.lang.NoSuchFieldError -> L14
                cz.msebera.android.httpclient.entity.mime.HttpMultipartMode r1 = cz.msebera.android.httpclient.entity.mime.HttpMultipartMode.BROWSER_COMPATIBLE     // Catch: java.lang.NoSuchFieldError -> L14
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L14
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L14
            L14:
                int[] r0 = cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder.1.$SwitchMap$cz$msebera$android$httpclient$entity$mime$HttpMultipartMode     // Catch: java.lang.NoSuchFieldError -> L1f
                cz.msebera.android.httpclient.entity.mime.HttpMultipartMode r1 = cz.msebera.android.httpclient.entity.mime.HttpMultipartMode.RFC6532     // Catch: java.lang.NoSuchFieldError -> L1f
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1f
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1f
            L1f:
                return
        }
    }

    static {
            java.lang.String r0 = "-_1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
            char[] r0 = r0.toCharArray()
            cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder.MULTIPART_CHARS = r0
            return
    }

    MultipartEntityBuilder() {
            r1 = this;
            r1.<init>()
            cz.msebera.android.httpclient.entity.mime.HttpMultipartMode r0 = cz.msebera.android.httpclient.entity.mime.HttpMultipartMode.STRICT
            r1.mode = r0
            r0 = 0
            r1.boundary = r0
            r1.charset = r0
            r1.bodyParts = r0
            return
    }

    public static cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder create() {
            cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder r0 = new cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder
            r0.<init>()
            return r0
    }

    private java.lang.String generateBoundary() {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Random r1 = new java.util.Random
            r1.<init>()
            r2 = 11
            int r2 = r1.nextInt(r2)
            int r2 = r2 + 30
            r3 = 0
        L13:
            if (r3 >= r2) goto L24
            char[] r4 = cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder.MULTIPART_CHARS
            int r5 = r4.length
            int r5 = r1.nextInt(r5)
            char r4 = r4[r5]
            r0.append(r4)
            int r3 = r3 + 1
            goto L13
        L24:
            java.lang.String r0 = r0.toString()
            return r0
    }

    public cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder addBinaryBody(java.lang.String r3, java.io.File r4) {
            r2 = this;
            cz.msebera.android.httpclient.entity.ContentType r0 = cz.msebera.android.httpclient.entity.ContentType.DEFAULT_BINARY
            if (r4 == 0) goto L9
            java.lang.String r1 = r4.getName()
            goto La
        L9:
            r1 = 0
        La:
            cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder r3 = r2.addBinaryBody(r3, r4, r0, r1)
            return r3
    }

    public cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder addBinaryBody(java.lang.String r2, java.io.File r3, cz.msebera.android.httpclient.entity.ContentType r4, java.lang.String r5) {
            r1 = this;
            cz.msebera.android.httpclient.entity.mime.content.FileBody r0 = new cz.msebera.android.httpclient.entity.mime.content.FileBody
            r0.<init>(r3, r4, r5)
            cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder r2 = r1.addPart(r2, r0)
            return r2
    }

    public cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder addBinaryBody(java.lang.String r3, java.io.InputStream r4) {
            r2 = this;
            cz.msebera.android.httpclient.entity.ContentType r0 = cz.msebera.android.httpclient.entity.ContentType.DEFAULT_BINARY
            r1 = 0
            cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder r3 = r2.addBinaryBody(r3, r4, r0, r1)
            return r3
    }

    public cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder addBinaryBody(java.lang.String r2, java.io.InputStream r3, cz.msebera.android.httpclient.entity.ContentType r4, java.lang.String r5) {
            r1 = this;
            cz.msebera.android.httpclient.entity.mime.content.InputStreamBody r0 = new cz.msebera.android.httpclient.entity.mime.content.InputStreamBody
            r0.<init>(r3, r4, r5)
            cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder r2 = r1.addPart(r2, r0)
            return r2
    }

    public cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder addBinaryBody(java.lang.String r3, byte[] r4) {
            r2 = this;
            cz.msebera.android.httpclient.entity.ContentType r0 = cz.msebera.android.httpclient.entity.ContentType.DEFAULT_BINARY
            r1 = 0
            cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder r3 = r2.addBinaryBody(r3, r4, r0, r1)
            return r3
    }

    public cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder addBinaryBody(java.lang.String r2, byte[] r3, cz.msebera.android.httpclient.entity.ContentType r4, java.lang.String r5) {
            r1 = this;
            cz.msebera.android.httpclient.entity.mime.content.ByteArrayBody r0 = new cz.msebera.android.httpclient.entity.mime.content.ByteArrayBody
            r0.<init>(r3, r4, r5)
            cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder r2 = r1.addPart(r2, r0)
            return r2
    }

    public cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder addPart(cz.msebera.android.httpclient.entity.mime.FormBodyPart r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            java.util.List<cz.msebera.android.httpclient.entity.mime.FormBodyPart> r0 = r1.bodyParts
            if (r0 != 0) goto Le
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.bodyParts = r0
        Le:
            java.util.List<cz.msebera.android.httpclient.entity.mime.FormBodyPart> r0 = r1.bodyParts
            r0.add(r2)
            return r1
    }

    public cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder addPart(java.lang.String r2, cz.msebera.android.httpclient.entity.mime.content.ContentBody r3) {
            r1 = this;
            java.lang.String r0 = "Name"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Content body"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.entity.mime.FormBodyPartBuilder r2 = cz.msebera.android.httpclient.entity.mime.FormBodyPartBuilder.create(r2, r3)
            cz.msebera.android.httpclient.entity.mime.FormBodyPart r2 = r2.build()
            cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder r2 = r1.addPart(r2)
            return r2
    }

    public cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder addTextBody(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            cz.msebera.android.httpclient.entity.ContentType r0 = cz.msebera.android.httpclient.entity.ContentType.DEFAULT_TEXT
            cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder r2 = r1.addTextBody(r2, r3, r0)
            return r2
    }

    public cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder addTextBody(java.lang.String r2, java.lang.String r3, cz.msebera.android.httpclient.entity.ContentType r4) {
            r1 = this;
            cz.msebera.android.httpclient.entity.mime.content.StringBody r0 = new cz.msebera.android.httpclient.entity.mime.content.StringBody
            r0.<init>(r3, r4)
            cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder r2 = r1.addPart(r2, r0)
            return r2
    }

    public cz.msebera.android.httpclient.HttpEntity build() {
            r1 = this;
            cz.msebera.android.httpclient.entity.mime.MultipartFormEntity r0 = r1.buildEntity()
            return r0
    }

    cz.msebera.android.httpclient.entity.mime.MultipartFormEntity buildEntity() {
            r7 = this;
            java.lang.String r0 = r7.boundary
            java.lang.String r1 = "boundary"
            if (r0 != 0) goto Le
            cz.msebera.android.httpclient.entity.ContentType r2 = r7.contentType
            if (r2 == 0) goto Le
            java.lang.String r0 = r2.getParameter(r1)
        Le:
            if (r0 != 0) goto L14
            java.lang.String r0 = r7.generateBoundary()
        L14:
            java.nio.charset.Charset r2 = r7.charset
            if (r2 != 0) goto L20
            cz.msebera.android.httpclient.entity.ContentType r3 = r7.contentType
            if (r3 == 0) goto L20
            java.nio.charset.Charset r2 = r3.getCharset()
        L20:
            java.util.ArrayList r3 = new java.util.ArrayList
            r4 = 2
            r3.<init>(r4)
            cz.msebera.android.httpclient.message.BasicNameValuePair r5 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            r5.<init>(r1, r0)
            r3.add(r5)
            if (r2 == 0) goto L3e
            cz.msebera.android.httpclient.message.BasicNameValuePair r1 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            java.lang.String r5 = r2.name()
            java.lang.String r6 = "charset"
            r1.<init>(r6, r5)
            r3.add(r1)
        L3e:
            int r1 = r3.size()
            cz.msebera.android.httpclient.NameValuePair[] r1 = new cz.msebera.android.httpclient.NameValuePair[r1]
            java.lang.Object[] r1 = r3.toArray(r1)
            cz.msebera.android.httpclient.NameValuePair[] r1 = (cz.msebera.android.httpclient.NameValuePair[]) r1
            cz.msebera.android.httpclient.entity.ContentType r3 = r7.contentType
            if (r3 == 0) goto L53
            cz.msebera.android.httpclient.entity.ContentType r1 = r3.withParameters(r1)
            goto L59
        L53:
            java.lang.String r3 = "multipart/form-data"
            cz.msebera.android.httpclient.entity.ContentType r1 = cz.msebera.android.httpclient.entity.ContentType.create(r3, r1)
        L59:
            java.util.List<cz.msebera.android.httpclient.entity.mime.FormBodyPart> r3 = r7.bodyParts
            if (r3 == 0) goto L63
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>(r3)
            goto L67
        L63:
            java.util.List r5 = java.util.Collections.emptyList()
        L67:
            cz.msebera.android.httpclient.entity.mime.HttpMultipartMode r3 = r7.mode
            if (r3 == 0) goto L6c
            goto L6e
        L6c:
            cz.msebera.android.httpclient.entity.mime.HttpMultipartMode r3 = cz.msebera.android.httpclient.entity.mime.HttpMultipartMode.STRICT
        L6e:
            int[] r6 = cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder.1.$SwitchMap$cz$msebera$android$httpclient$entity$mime$HttpMultipartMode
            int r3 = r3.ordinal()
            r3 = r6[r3]
            r6 = 1
            if (r3 == r6) goto L87
            if (r3 == r4) goto L81
            cz.msebera.android.httpclient.entity.mime.HttpStrictMultipart r3 = new cz.msebera.android.httpclient.entity.mime.HttpStrictMultipart
            r3.<init>(r2, r0, r5)
            goto L8c
        L81:
            cz.msebera.android.httpclient.entity.mime.HttpRFC6532Multipart r3 = new cz.msebera.android.httpclient.entity.mime.HttpRFC6532Multipart
            r3.<init>(r2, r0, r5)
            goto L8c
        L87:
            cz.msebera.android.httpclient.entity.mime.HttpBrowserCompatibleMultipart r3 = new cz.msebera.android.httpclient.entity.mime.HttpBrowserCompatibleMultipart
            r3.<init>(r2, r0, r5)
        L8c:
            cz.msebera.android.httpclient.entity.mime.MultipartFormEntity r0 = new cz.msebera.android.httpclient.entity.mime.MultipartFormEntity
            long r4 = r3.getTotalLength()
            r0.<init>(r3, r1, r4)
            return r0
    }

    public cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder seContentType(cz.msebera.android.httpclient.entity.ContentType r2) {
            r1 = this;
            java.lang.String r0 = "Content type"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.contentType = r2
            return r1
    }

    public cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder setBoundary(java.lang.String r1) {
            r0 = this;
            r0.boundary = r1
            return r0
    }

    public cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder setCharset(java.nio.charset.Charset r1) {
            r0 = this;
            r0.charset = r1
            return r0
    }

    public cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder setLaxMode() {
            r1 = this;
            cz.msebera.android.httpclient.entity.mime.HttpMultipartMode r0 = cz.msebera.android.httpclient.entity.mime.HttpMultipartMode.BROWSER_COMPATIBLE
            r1.mode = r0
            return r1
    }

    public cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder setMimeSubtype(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "MIME subtype"
            cz.msebera.android.httpclient.util.Args.notBlank(r3, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "multipart/"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            cz.msebera.android.httpclient.entity.ContentType r3 = cz.msebera.android.httpclient.entity.ContentType.create(r3)
            r2.contentType = r3
            return r2
    }

    public cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder setMode(cz.msebera.android.httpclient.entity.mime.HttpMultipartMode r1) {
            r0 = this;
            r0.mode = r1
            return r0
    }

    public cz.msebera.android.httpclient.entity.mime.MultipartEntityBuilder setStrictMode() {
            r1 = this;
            cz.msebera.android.httpclient.entity.mime.HttpMultipartMode r0 = cz.msebera.android.httpclient.entity.mime.HttpMultipartMode.STRICT
            r1.mode = r0
            return r1
    }
}
