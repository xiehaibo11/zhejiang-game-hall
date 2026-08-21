package cz.msebera.android.httpclient.entity;

@cz.msebera.android.httpclient.annotation.Immutable
public final class ContentType implements java.io.Serializable {
    public static final cz.msebera.android.httpclient.entity.ContentType APPLICATION_ATOM_XML = null;
    public static final cz.msebera.android.httpclient.entity.ContentType APPLICATION_FORM_URLENCODED = null;
    public static final cz.msebera.android.httpclient.entity.ContentType APPLICATION_JSON = null;
    public static final cz.msebera.android.httpclient.entity.ContentType APPLICATION_OCTET_STREAM = null;
    public static final cz.msebera.android.httpclient.entity.ContentType APPLICATION_SVG_XML = null;
    public static final cz.msebera.android.httpclient.entity.ContentType APPLICATION_XHTML_XML = null;
    public static final cz.msebera.android.httpclient.entity.ContentType APPLICATION_XML = null;
    public static final cz.msebera.android.httpclient.entity.ContentType DEFAULT_BINARY = null;
    public static final cz.msebera.android.httpclient.entity.ContentType DEFAULT_TEXT = null;
    public static final cz.msebera.android.httpclient.entity.ContentType MULTIPART_FORM_DATA = null;
    public static final cz.msebera.android.httpclient.entity.ContentType TEXT_HTML = null;
    public static final cz.msebera.android.httpclient.entity.ContentType TEXT_PLAIN = null;
    public static final cz.msebera.android.httpclient.entity.ContentType TEXT_XML = null;
    public static final cz.msebera.android.httpclient.entity.ContentType WILDCARD = null;
    private static final long serialVersionUID = -7768694718232371896L;
    private final java.nio.charset.Charset charset;
    private final java.lang.String mimeType;
    private final cz.msebera.android.httpclient.NameValuePair[] params;

    static {
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.Consts.ISO_8859_1
            java.lang.String r1 = "application/atom+xml"
            cz.msebera.android.httpclient.entity.ContentType r0 = create(r1, r0)
            cz.msebera.android.httpclient.entity.ContentType.APPLICATION_ATOM_XML = r0
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.Consts.ISO_8859_1
            java.lang.String r1 = "application/x-www-form-urlencoded"
            cz.msebera.android.httpclient.entity.ContentType r0 = create(r1, r0)
            cz.msebera.android.httpclient.entity.ContentType.APPLICATION_FORM_URLENCODED = r0
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.Consts.UTF_8
            java.lang.String r1 = "application/json"
            cz.msebera.android.httpclient.entity.ContentType r0 = create(r1, r0)
            cz.msebera.android.httpclient.entity.ContentType.APPLICATION_JSON = r0
            r0 = 0
            java.nio.charset.Charset r0 = (java.nio.charset.Charset) r0
            java.lang.String r1 = "application/octet-stream"
            cz.msebera.android.httpclient.entity.ContentType r1 = create(r1, r0)
            cz.msebera.android.httpclient.entity.ContentType.APPLICATION_OCTET_STREAM = r1
            java.nio.charset.Charset r1 = cz.msebera.android.httpclient.Consts.ISO_8859_1
            java.lang.String r2 = "application/svg+xml"
            cz.msebera.android.httpclient.entity.ContentType r1 = create(r2, r1)
            cz.msebera.android.httpclient.entity.ContentType.APPLICATION_SVG_XML = r1
            java.nio.charset.Charset r1 = cz.msebera.android.httpclient.Consts.ISO_8859_1
            java.lang.String r2 = "application/xhtml+xml"
            cz.msebera.android.httpclient.entity.ContentType r1 = create(r2, r1)
            cz.msebera.android.httpclient.entity.ContentType.APPLICATION_XHTML_XML = r1
            java.nio.charset.Charset r1 = cz.msebera.android.httpclient.Consts.ISO_8859_1
            java.lang.String r2 = "application/xml"
            cz.msebera.android.httpclient.entity.ContentType r1 = create(r2, r1)
            cz.msebera.android.httpclient.entity.ContentType.APPLICATION_XML = r1
            java.nio.charset.Charset r1 = cz.msebera.android.httpclient.Consts.ISO_8859_1
            java.lang.String r2 = "multipart/form-data"
            cz.msebera.android.httpclient.entity.ContentType r1 = create(r2, r1)
            cz.msebera.android.httpclient.entity.ContentType.MULTIPART_FORM_DATA = r1
            java.nio.charset.Charset r1 = cz.msebera.android.httpclient.Consts.ISO_8859_1
            java.lang.String r2 = "text/html"
            cz.msebera.android.httpclient.entity.ContentType r1 = create(r2, r1)
            cz.msebera.android.httpclient.entity.ContentType.TEXT_HTML = r1
            java.nio.charset.Charset r1 = cz.msebera.android.httpclient.Consts.ISO_8859_1
            java.lang.String r2 = "text/plain"
            cz.msebera.android.httpclient.entity.ContentType r1 = create(r2, r1)
            cz.msebera.android.httpclient.entity.ContentType.TEXT_PLAIN = r1
            java.nio.charset.Charset r1 = cz.msebera.android.httpclient.Consts.ISO_8859_1
            java.lang.String r2 = "text/xml"
            cz.msebera.android.httpclient.entity.ContentType r1 = create(r2, r1)
            cz.msebera.android.httpclient.entity.ContentType.TEXT_XML = r1
            java.lang.String r1 = "*/*"
            cz.msebera.android.httpclient.entity.ContentType r0 = create(r1, r0)
            cz.msebera.android.httpclient.entity.ContentType.WILDCARD = r0
            cz.msebera.android.httpclient.entity.ContentType r0 = cz.msebera.android.httpclient.entity.ContentType.TEXT_PLAIN
            cz.msebera.android.httpclient.entity.ContentType.DEFAULT_TEXT = r0
            cz.msebera.android.httpclient.entity.ContentType r0 = cz.msebera.android.httpclient.entity.ContentType.APPLICATION_OCTET_STREAM
            cz.msebera.android.httpclient.entity.ContentType.DEFAULT_BINARY = r0
            return
    }

    ContentType(java.lang.String r1, java.nio.charset.Charset r2) {
            r0 = this;
            r0.<init>()
            r0.mimeType = r1
            r0.charset = r2
            r1 = 0
            r0.params = r1
            return
    }

    ContentType(java.lang.String r1, java.nio.charset.Charset r2, cz.msebera.android.httpclient.NameValuePair[] r3) {
            r0 = this;
            r0.<init>()
            r0.mimeType = r1
            r0.charset = r2
            r0.params = r3
            return
    }

    private static cz.msebera.android.httpclient.entity.ContentType create(cz.msebera.android.httpclient.HeaderElement r1, boolean r2) {
            java.lang.String r0 = r1.getName()
            cz.msebera.android.httpclient.NameValuePair[] r1 = r1.getParameters()
            cz.msebera.android.httpclient.entity.ContentType r1 = create(r0, r1, r2)
            return r1
    }

    public static cz.msebera.android.httpclient.entity.ContentType create(java.lang.String r2) {
            cz.msebera.android.httpclient.entity.ContentType r0 = new cz.msebera.android.httpclient.entity.ContentType
            r1 = 0
            java.nio.charset.Charset r1 = (java.nio.charset.Charset) r1
            r0.<init>(r2, r1)
            return r0
    }

    public static cz.msebera.android.httpclient.entity.ContentType create(java.lang.String r1, java.lang.String r2) throws java.nio.charset.UnsupportedCharsetException {
            boolean r0 = cz.msebera.android.httpclient.util.TextUtils.isBlank(r2)
            if (r0 != 0) goto Lb
            java.nio.charset.Charset r2 = java.nio.charset.Charset.forName(r2)
            goto Lc
        Lb:
            r2 = 0
        Lc:
            cz.msebera.android.httpclient.entity.ContentType r1 = create(r1, r2)
            return r1
    }

    public static cz.msebera.android.httpclient.entity.ContentType create(java.lang.String r2, java.nio.charset.Charset r3) {
            java.lang.String r0 = "MIME type"
            java.lang.CharSequence r2 = cz.msebera.android.httpclient.util.Args.notBlank(r2, r0)
            java.lang.String r2 = (java.lang.String) r2
            java.util.Locale r0 = java.util.Locale.ROOT
            java.lang.String r2 = r2.toLowerCase(r0)
            boolean r0 = valid(r2)
            java.lang.String r1 = "MIME type may not contain reserved characters"
            cz.msebera.android.httpclient.util.Args.check(r0, r1)
            cz.msebera.android.httpclient.entity.ContentType r0 = new cz.msebera.android.httpclient.entity.ContentType
            r0.<init>(r2, r3)
            return r0
    }

    public static cz.msebera.android.httpclient.entity.ContentType create(java.lang.String r2, cz.msebera.android.httpclient.NameValuePair... r3) throws java.nio.charset.UnsupportedCharsetException {
            java.lang.String r0 = "MIME type"
            java.lang.CharSequence r0 = cz.msebera.android.httpclient.util.Args.notBlank(r2, r0)
            java.lang.String r0 = (java.lang.String) r0
            java.util.Locale r1 = java.util.Locale.ROOT
            java.lang.String r0 = r0.toLowerCase(r1)
            boolean r0 = valid(r0)
            java.lang.String r1 = "MIME type may not contain reserved characters"
            cz.msebera.android.httpclient.util.Args.check(r0, r1)
            r0 = 1
            cz.msebera.android.httpclient.entity.ContentType r2 = create(r2, r3, r0)
            return r2
    }

    private static cz.msebera.android.httpclient.entity.ContentType create(java.lang.String r6, cz.msebera.android.httpclient.NameValuePair[] r7, boolean r8) {
            int r0 = r7.length
            r1 = 0
        L2:
            r2 = 0
            if (r1 >= r0) goto L2a
            r3 = r7[r1]
            java.lang.String r4 = r3.getName()
            java.lang.String r5 = "charset"
            boolean r4 = r4.equalsIgnoreCase(r5)
            if (r4 == 0) goto L27
            java.lang.String r0 = r3.getValue()
            boolean r1 = cz.msebera.android.httpclient.util.TextUtils.isBlank(r0)
            if (r1 != 0) goto L2a
            java.nio.charset.Charset r8 = java.nio.charset.Charset.forName(r0)     // Catch: java.nio.charset.UnsupportedCharsetException -> L22
            goto L2b
        L22:
            r0 = move-exception
            if (r8 != 0) goto L26
            goto L2a
        L26:
            throw r0
        L27:
            int r1 = r1 + 1
            goto L2
        L2a:
            r8 = r2
        L2b:
            cz.msebera.android.httpclient.entity.ContentType r0 = new cz.msebera.android.httpclient.entity.ContentType
            if (r7 == 0) goto L33
            int r1 = r7.length
            if (r1 <= 0) goto L33
            goto L34
        L33:
            r7 = r2
        L34:
            r0.<init>(r6, r8, r7)
            return r0
    }

    public static cz.msebera.android.httpclient.entity.ContentType get(cz.msebera.android.httpclient.HttpEntity r2) throws cz.msebera.android.httpclient.ParseException, java.nio.charset.UnsupportedCharsetException {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            cz.msebera.android.httpclient.Header r2 = r2.getContentType()
            if (r2 == 0) goto L1a
            cz.msebera.android.httpclient.HeaderElement[] r2 = r2.getElements()
            int r1 = r2.length
            if (r1 <= 0) goto L1a
            r0 = 0
            r2 = r2[r0]
            r0 = 1
            cz.msebera.android.httpclient.entity.ContentType r2 = create(r2, r0)
            return r2
        L1a:
            return r0
    }

    public static cz.msebera.android.httpclient.entity.ContentType getLenient(cz.msebera.android.httpclient.HttpEntity r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            cz.msebera.android.httpclient.Header r2 = r2.getContentType()
            if (r2 == 0) goto L19
            cz.msebera.android.httpclient.HeaderElement[] r2 = r2.getElements()     // Catch: cz.msebera.android.httpclient.ParseException -> L19
            int r1 = r2.length     // Catch: cz.msebera.android.httpclient.ParseException -> L19
            if (r1 <= 0) goto L19
            r1 = 0
            r2 = r2[r1]     // Catch: cz.msebera.android.httpclient.ParseException -> L19
            cz.msebera.android.httpclient.entity.ContentType r2 = create(r2, r1)     // Catch: cz.msebera.android.httpclient.ParseException -> L19
            return r2
        L19:
            return r0
    }

    public static cz.msebera.android.httpclient.entity.ContentType getLenientOrDefault(cz.msebera.android.httpclient.HttpEntity r0) throws cz.msebera.android.httpclient.ParseException, java.nio.charset.UnsupportedCharsetException {
            cz.msebera.android.httpclient.entity.ContentType r0 = get(r0)
            if (r0 == 0) goto L7
            goto L9
        L7:
            cz.msebera.android.httpclient.entity.ContentType r0 = cz.msebera.android.httpclient.entity.ContentType.DEFAULT_TEXT
        L9:
            return r0
    }

    public static cz.msebera.android.httpclient.entity.ContentType getOrDefault(cz.msebera.android.httpclient.HttpEntity r0) throws cz.msebera.android.httpclient.ParseException, java.nio.charset.UnsupportedCharsetException {
            cz.msebera.android.httpclient.entity.ContentType r0 = get(r0)
            if (r0 == 0) goto L7
            goto L9
        L7:
            cz.msebera.android.httpclient.entity.ContentType r0 = cz.msebera.android.httpclient.entity.ContentType.DEFAULT_TEXT
        L9:
            return r0
    }

    public static cz.msebera.android.httpclient.entity.ContentType parse(java.lang.String r4) throws cz.msebera.android.httpclient.ParseException, java.nio.charset.UnsupportedCharsetException {
            java.lang.String r0 = "Content type"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            int r1 = r4.length()
            r0.<init>(r1)
            r0.append(r4)
            cz.msebera.android.httpclient.message.ParserCursor r1 = new cz.msebera.android.httpclient.message.ParserCursor
            int r2 = r4.length()
            r3 = 0
            r1.<init>(r3, r2)
            cz.msebera.android.httpclient.message.BasicHeaderValueParser r2 = cz.msebera.android.httpclient.message.BasicHeaderValueParser.INSTANCE
            cz.msebera.android.httpclient.HeaderElement[] r0 = r2.parseElements(r0, r1)
            int r1 = r0.length
            if (r1 <= 0) goto L2c
            r4 = r0[r3]
            r0 = 1
            cz.msebera.android.httpclient.entity.ContentType r4 = create(r4, r0)
            return r4
        L2c:
            cz.msebera.android.httpclient.ParseException r0 = new cz.msebera.android.httpclient.ParseException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid content type: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    private static boolean valid(java.lang.String r4) {
            r0 = 0
            r1 = 0
        L2:
            int r2 = r4.length()
            if (r1 >= r2) goto L1d
            char r2 = r4.charAt(r1)
            r3 = 34
            if (r2 == r3) goto L1c
            r3 = 44
            if (r2 == r3) goto L1c
            r3 = 59
            if (r2 != r3) goto L19
            goto L1c
        L19:
            int r1 = r1 + 1
            goto L2
        L1c:
            return r0
        L1d:
            r4 = 1
            return r4
    }

    public java.nio.charset.Charset getCharset() {
            r1 = this;
            java.nio.charset.Charset r0 = r1.charset
            return r0
    }

    public java.lang.String getMimeType() {
            r1 = this;
            java.lang.String r0 = r1.mimeType
            return r0
    }

    public java.lang.String getParameter(java.lang.String r7) {
            r6 = this;
            java.lang.String r0 = "Parameter name"
            cz.msebera.android.httpclient.util.Args.notEmpty(r7, r0)
            cz.msebera.android.httpclient.NameValuePair[] r0 = r6.params
            r1 = 0
            if (r0 != 0) goto Lb
            return r1
        Lb:
            int r2 = r0.length
            r3 = 0
        Ld:
            if (r3 >= r2) goto L23
            r4 = r0[r3]
            java.lang.String r5 = r4.getName()
            boolean r5 = r5.equalsIgnoreCase(r7)
            if (r5 == 0) goto L20
            java.lang.String r7 = r4.getValue()
            return r7
        L20:
            int r3 = r3 + 1
            goto Ld
        L23:
            return r1
    }

    public java.lang.String toString() {
            r4 = this;
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            r1 = 64
            r0.<init>(r1)
            java.lang.String r1 = r4.mimeType
            r0.append(r1)
            cz.msebera.android.httpclient.NameValuePair[] r1 = r4.params
            if (r1 == 0) goto L1e
            java.lang.String r1 = "; "
            r0.append(r1)
            cz.msebera.android.httpclient.message.BasicHeaderValueFormatter r1 = cz.msebera.android.httpclient.message.BasicHeaderValueFormatter.INSTANCE
            cz.msebera.android.httpclient.NameValuePair[] r2 = r4.params
            r3 = 0
            r1.formatParameters(r0, r2, r3)
            goto L30
        L1e:
            java.nio.charset.Charset r1 = r4.charset
            if (r1 == 0) goto L30
            java.lang.String r1 = "; charset="
            r0.append(r1)
            java.nio.charset.Charset r1 = r4.charset
            java.lang.String r1 = r1.name()
            r0.append(r1)
        L30:
            java.lang.String r0 = r0.toString()
            return r0
    }

    public cz.msebera.android.httpclient.entity.ContentType withCharset(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = r1.getMimeType()
            cz.msebera.android.httpclient.entity.ContentType r2 = create(r0, r2)
            return r2
    }

    public cz.msebera.android.httpclient.entity.ContentType withCharset(java.nio.charset.Charset r2) {
            r1 = this;
            java.lang.String r0 = r1.getMimeType()
            cz.msebera.android.httpclient.entity.ContentType r2 = create(r0, r2)
            return r2
    }

    public cz.msebera.android.httpclient.entity.ContentType withParameters(cz.msebera.android.httpclient.NameValuePair... r8) throws java.nio.charset.UnsupportedCharsetException {
            r7 = this;
            int r0 = r8.length
            if (r0 != 0) goto L4
            return r7
        L4:
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            cz.msebera.android.httpclient.NameValuePair[] r1 = r7.params
            r2 = 0
            if (r1 == 0) goto L22
            int r3 = r1.length
            r4 = 0
        L10:
            if (r4 >= r3) goto L22
            r5 = r1[r4]
            java.lang.String r6 = r5.getName()
            java.lang.String r5 = r5.getValue()
            r0.put(r6, r5)
            int r4 = r4 + 1
            goto L10
        L22:
            int r1 = r8.length
        L23:
            if (r2 >= r1) goto L35
            r3 = r8[r2]
            java.lang.String r4 = r3.getName()
            java.lang.String r3 = r3.getValue()
            r0.put(r4, r3)
            int r2 = r2 + 1
            goto L23
        L35:
            java.util.ArrayList r8 = new java.util.ArrayList
            int r1 = r0.size()
            r2 = 1
            int r1 = r1 + r2
            r8.<init>(r1)
            java.nio.charset.Charset r1 = r7.charset
            if (r1 == 0) goto L5a
            java.lang.String r1 = "charset"
            boolean r3 = r0.containsKey(r1)
            if (r3 != 0) goto L5a
            cz.msebera.android.httpclient.message.BasicNameValuePair r3 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            java.nio.charset.Charset r4 = r7.charset
            java.lang.String r4 = r4.name()
            r3.<init>(r1, r4)
            r8.add(r3)
        L5a:
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L62:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L83
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            cz.msebera.android.httpclient.message.BasicNameValuePair r3 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            java.lang.Object r4 = r1.getKey()
            java.lang.String r4 = (java.lang.String) r4
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            r3.<init>(r4, r1)
            r8.add(r3)
            goto L62
        L83:
            java.lang.String r0 = r7.getMimeType()
            int r1 = r8.size()
            cz.msebera.android.httpclient.NameValuePair[] r1 = new cz.msebera.android.httpclient.NameValuePair[r1]
            java.lang.Object[] r8 = r8.toArray(r1)
            cz.msebera.android.httpclient.NameValuePair[] r8 = (cz.msebera.android.httpclient.NameValuePair[]) r8
            cz.msebera.android.httpclient.entity.ContentType r8 = create(r0, r8, r2)
            return r8
    }
}
