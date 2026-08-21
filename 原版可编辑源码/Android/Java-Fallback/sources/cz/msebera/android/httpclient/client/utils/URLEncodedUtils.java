package cz.msebera.android.httpclient.client.utils;

@cz.msebera.android.httpclient.annotation.Immutable
public class URLEncodedUtils {
    public static final java.lang.String CONTENT_TYPE = "application/x-www-form-urlencoded";
    private static final java.lang.String NAME_VALUE_SEPARATOR = "=";
    private static final java.util.BitSet PATHSAFE = null;
    private static final java.util.BitSet PUNCT = null;
    private static final char QP_SEP_A = '&';
    private static final char QP_SEP_S = ';';
    private static final int RADIX = 16;
    private static final java.util.BitSet RESERVED = null;
    private static final java.util.BitSet UNRESERVED = null;
    private static final java.util.BitSet URIC = null;
    private static final java.util.BitSet URLENCODER = null;
    private static final java.util.BitSet USERINFO = null;

    static {
            java.util.BitSet r0 = new java.util.BitSet
            r1 = 256(0x100, float:3.59E-43)
            r0.<init>(r1)
            cz.msebera.android.httpclient.client.utils.URLEncodedUtils.UNRESERVED = r0
            java.util.BitSet r0 = new java.util.BitSet
            r0.<init>(r1)
            cz.msebera.android.httpclient.client.utils.URLEncodedUtils.PUNCT = r0
            java.util.BitSet r0 = new java.util.BitSet
            r0.<init>(r1)
            cz.msebera.android.httpclient.client.utils.URLEncodedUtils.USERINFO = r0
            java.util.BitSet r0 = new java.util.BitSet
            r0.<init>(r1)
            cz.msebera.android.httpclient.client.utils.URLEncodedUtils.PATHSAFE = r0
            java.util.BitSet r0 = new java.util.BitSet
            r0.<init>(r1)
            cz.msebera.android.httpclient.client.utils.URLEncodedUtils.URIC = r0
            java.util.BitSet r0 = new java.util.BitSet
            r0.<init>(r1)
            cz.msebera.android.httpclient.client.utils.URLEncodedUtils.RESERVED = r0
            java.util.BitSet r0 = new java.util.BitSet
            r0.<init>(r1)
            cz.msebera.android.httpclient.client.utils.URLEncodedUtils.URLENCODER = r0
            r0 = 97
        L35:
            r1 = 122(0x7a, float:1.71E-43)
            if (r0 > r1) goto L41
            java.util.BitSet r1 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.UNRESERVED
            r1.set(r0)
            int r0 = r0 + 1
            goto L35
        L41:
            r0 = 65
        L43:
            r1 = 90
            if (r0 > r1) goto L4f
            java.util.BitSet r1 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.UNRESERVED
            r1.set(r0)
            int r0 = r0 + 1
            goto L43
        L4f:
            r0 = 48
        L51:
            r1 = 57
            if (r0 > r1) goto L5d
            java.util.BitSet r1 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.UNRESERVED
            r1.set(r0)
            int r0 = r0 + 1
            goto L51
        L5d:
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.UNRESERVED
            r1 = 95
            r0.set(r1)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.UNRESERVED
            r1 = 45
            r0.set(r1)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.UNRESERVED
            r1 = 46
            r0.set(r1)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.UNRESERVED
            r1 = 42
            r0.set(r1)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.URLENCODER
            java.util.BitSet r1 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.UNRESERVED
            r0.or(r1)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.UNRESERVED
            r1 = 33
            r0.set(r1)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.UNRESERVED
            r1 = 126(0x7e, float:1.77E-43)
            r0.set(r1)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.UNRESERVED
            r1 = 39
            r0.set(r1)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.UNRESERVED
            r1 = 40
            r0.set(r1)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.UNRESERVED
            r1 = 41
            r0.set(r1)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.PUNCT
            r1 = 44
            r0.set(r1)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.PUNCT
            r2 = 59
            r0.set(r2)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.PUNCT
            r3 = 58
            r0.set(r3)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.PUNCT
            r4 = 36
            r0.set(r4)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.PUNCT
            r5 = 38
            r0.set(r5)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.PUNCT
            r6 = 43
            r0.set(r6)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.PUNCT
            r7 = 61
            r0.set(r7)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.USERINFO
            java.util.BitSet r8 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.UNRESERVED
            r0.or(r8)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.USERINFO
            java.util.BitSet r8 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.PUNCT
            r0.or(r8)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.PATHSAFE
            java.util.BitSet r8 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.UNRESERVED
            r0.or(r8)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.PATHSAFE
            r8 = 47
            r0.set(r8)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.PATHSAFE
            r0.set(r2)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.PATHSAFE
            r0.set(r3)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.PATHSAFE
            r9 = 64
            r0.set(r9)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.PATHSAFE
            r0.set(r5)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.PATHSAFE
            r0.set(r7)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.PATHSAFE
            r0.set(r6)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.PATHSAFE
            r0.set(r4)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.PATHSAFE
            r0.set(r1)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.RESERVED
            r0.set(r2)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.RESERVED
            r0.set(r8)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.RESERVED
            r2 = 63
            r0.set(r2)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.RESERVED
            r0.set(r3)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.RESERVED
            r0.set(r9)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.RESERVED
            r0.set(r5)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.RESERVED
            r0.set(r7)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.RESERVED
            r0.set(r6)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.RESERVED
            r0.set(r4)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.RESERVED
            r0.set(r1)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.RESERVED
            r1 = 91
            r0.set(r1)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.RESERVED
            r1 = 93
            r0.set(r1)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.URIC
            java.util.BitSet r1 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.RESERVED
            r0.or(r1)
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.URIC
            java.util.BitSet r1 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.UNRESERVED
            r0.or(r1)
            return
    }

    public URLEncodedUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String decodeFormFields(java.lang.String r1, java.lang.String r2) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            if (r2 == 0) goto Lb
            java.nio.charset.Charset r2 = java.nio.charset.Charset.forName(r2)
            goto Ld
        Lb:
            java.nio.charset.Charset r2 = cz.msebera.android.httpclient.Consts.UTF_8
        Ld:
            r0 = 1
            java.lang.String r1 = urlDecode(r1, r2, r0)
            return r1
    }

    private static java.lang.String decodeFormFields(java.lang.String r1, java.nio.charset.Charset r2) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            if (r2 == 0) goto L7
            goto L9
        L7:
            java.nio.charset.Charset r2 = cz.msebera.android.httpclient.Consts.UTF_8
        L9:
            r0 = 1
            java.lang.String r1 = urlDecode(r1, r2, r0)
            return r1
    }

    static java.lang.String encPath(java.lang.String r2, java.nio.charset.Charset r3) {
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.PATHSAFE
            r1 = 0
            java.lang.String r2 = urlEncode(r2, r3, r0, r1)
            return r2
    }

    static java.lang.String encUric(java.lang.String r2, java.nio.charset.Charset r3) {
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.URIC
            r1 = 0
            java.lang.String r2 = urlEncode(r2, r3, r0, r1)
            return r2
    }

    static java.lang.String encUserInfo(java.lang.String r2, java.nio.charset.Charset r3) {
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.USERINFO
            r1 = 0
            java.lang.String r2 = urlEncode(r2, r3, r0, r1)
            return r2
    }

    private static java.lang.String encodeFormFields(java.lang.String r2, java.lang.String r3) {
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            if (r3 == 0) goto Lb
            java.nio.charset.Charset r3 = java.nio.charset.Charset.forName(r3)
            goto Ld
        Lb:
            java.nio.charset.Charset r3 = cz.msebera.android.httpclient.Consts.UTF_8
        Ld:
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.URLENCODER
            r1 = 1
            java.lang.String r2 = urlEncode(r2, r3, r0, r1)
            return r2
    }

    private static java.lang.String encodeFormFields(java.lang.String r2, java.nio.charset.Charset r3) {
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            if (r3 == 0) goto L7
            goto L9
        L7:
            java.nio.charset.Charset r3 = cz.msebera.android.httpclient.Consts.UTF_8
        L9:
            java.util.BitSet r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.URLENCODER
            r1 = 1
            java.lang.String r2 = urlEncode(r2, r3, r0, r1)
            return r2
    }

    public static java.lang.String format(java.lang.Iterable<? extends cz.msebera.android.httpclient.NameValuePair> r4, char r5, java.nio.charset.Charset r6) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Iterator r4 = r4.iterator()
        L9:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L3c
            java.lang.Object r1 = r4.next()
            cz.msebera.android.httpclient.NameValuePair r1 = (cz.msebera.android.httpclient.NameValuePair) r1
            java.lang.String r2 = r1.getName()
            java.lang.String r2 = encodeFormFields(r2, r6)
            java.lang.String r1 = r1.getValue()
            java.lang.String r1 = encodeFormFields(r1, r6)
            int r3 = r0.length()
            if (r3 <= 0) goto L2e
            r0.append(r5)
        L2e:
            r0.append(r2)
            if (r1 == 0) goto L9
            java.lang.String r2 = "="
            r0.append(r2)
            r0.append(r1)
            goto L9
        L3c:
            java.lang.String r4 = r0.toString()
            return r4
    }

    public static java.lang.String format(java.lang.Iterable<? extends cz.msebera.android.httpclient.NameValuePair> r1, java.nio.charset.Charset r2) {
            r0 = 38
            java.lang.String r1 = format(r1, r0, r2)
            return r1
    }

    public static java.lang.String format(java.util.List<? extends cz.msebera.android.httpclient.NameValuePair> r4, char r5, java.lang.String r6) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Iterator r4 = r4.iterator()
        L9:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L3c
            java.lang.Object r1 = r4.next()
            cz.msebera.android.httpclient.NameValuePair r1 = (cz.msebera.android.httpclient.NameValuePair) r1
            java.lang.String r2 = r1.getName()
            java.lang.String r2 = encodeFormFields(r2, r6)
            java.lang.String r1 = r1.getValue()
            java.lang.String r1 = encodeFormFields(r1, r6)
            int r3 = r0.length()
            if (r3 <= 0) goto L2e
            r0.append(r5)
        L2e:
            r0.append(r2)
            if (r1 == 0) goto L9
            java.lang.String r2 = "="
            r0.append(r2)
            r0.append(r1)
            goto L9
        L3c:
            java.lang.String r4 = r0.toString()
            return r4
    }

    public static java.lang.String format(java.util.List<? extends cz.msebera.android.httpclient.NameValuePair> r1, java.lang.String r2) {
            r0 = 38
            java.lang.String r1 = format(r1, r0, r2)
            return r1
    }

    public static boolean isEncoded(cz.msebera.android.httpclient.HttpEntity r2) {
            cz.msebera.android.httpclient.Header r2 = r2.getContentType()
            r0 = 0
            if (r2 == 0) goto L1b
            cz.msebera.android.httpclient.HeaderElement[] r2 = r2.getElements()
            int r1 = r2.length
            if (r1 <= 0) goto L1b
            r2 = r2[r0]
            java.lang.String r2 = r2.getName()
            java.lang.String r0 = "application/x-www-form-urlencoded"
            boolean r2 = r2.equalsIgnoreCase(r0)
            return r2
        L1b:
            return r0
    }

    public static java.util.List<cz.msebera.android.httpclient.NameValuePair> parse(cz.msebera.android.httpclient.HttpEntity r10) throws java.io.IOException {
            cz.msebera.android.httpclient.entity.ContentType r0 = cz.msebera.android.httpclient.entity.ContentType.get(r10)
            if (r0 == 0) goto L81
            java.lang.String r1 = r0.getMimeType()
            java.lang.String r2 = "application/x-www-form-urlencoded"
            boolean r1 = r1.equalsIgnoreCase(r2)
            if (r1 != 0) goto L13
            goto L81
        L13:
            long r1 = r10.getContentLength()
            r3 = 2147483647(0x7fffffff, double:1.060997895E-314)
            r5 = 1
            r6 = 0
            int r7 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r7 > 0) goto L22
            r3 = 1
            goto L23
        L22:
            r3 = 0
        L23:
            java.lang.String r4 = "HTTP entity is too large"
            cz.msebera.android.httpclient.util.Args.check(r3, r4)
            java.nio.charset.Charset r3 = r0.getCharset()
            if (r3 == 0) goto L33
            java.nio.charset.Charset r0 = r0.getCharset()
            goto L35
        L33:
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.protocol.HTTP.DEF_CONTENT_CHARSET
        L35:
            java.io.InputStream r10 = r10.getContent()
            if (r10 != 0) goto L40
            java.util.List r10 = java.util.Collections.emptyList()
            return r10
        L40:
            cz.msebera.android.httpclient.util.CharArrayBuffer r3 = new cz.msebera.android.httpclient.util.CharArrayBuffer     // Catch: java.lang.Throwable -> L7c
            r7 = 0
            r4 = 1024(0x400, float:1.435E-42)
            int r9 = (r1 > r7 ? 1 : (r1 == r7 ? 0 : -1))
            if (r9 <= 0) goto L4c
            int r2 = (int) r1     // Catch: java.lang.Throwable -> L7c
            goto L4e
        L4c:
            r2 = 1024(0x400, float:1.435E-42)
        L4e:
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L7c
            java.io.InputStreamReader r1 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L7c
            r1.<init>(r10, r0)     // Catch: java.lang.Throwable -> L7c
            char[] r2 = new char[r4]     // Catch: java.lang.Throwable -> L7c
        L58:
            int r4 = r1.read(r2)     // Catch: java.lang.Throwable -> L7c
            r7 = -1
            if (r4 == r7) goto L63
            r3.append(r2, r6, r4)     // Catch: java.lang.Throwable -> L7c
            goto L58
        L63:
            r10.close()
            int r10 = r3.length()
            if (r10 != 0) goto L71
            java.util.List r10 = java.util.Collections.emptyList()
            return r10
        L71:
            char[] r10 = new char[r5]
            r1 = 38
            r10[r6] = r1
            java.util.List r10 = parse(r3, r0, r10)
            return r10
        L7c:
            r0 = move-exception
            r10.close()
            throw r0
        L81:
            java.util.List r10 = java.util.Collections.emptyList()
            return r10
    }

    public static java.util.List<cz.msebera.android.httpclient.NameValuePair> parse(cz.msebera.android.httpclient.util.CharArrayBuffer r8, java.nio.charset.Charset r9, char... r10) {
            java.lang.String r0 = "Char array buffer"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r0)
            cz.msebera.android.httpclient.message.TokenParser r0 = cz.msebera.android.httpclient.message.TokenParser.INSTANCE
            java.util.BitSet r1 = new java.util.BitSet
            r1.<init>()
            int r2 = r10.length
            r3 = 0
            r4 = 0
        Lf:
            if (r4 >= r2) goto L19
            char r5 = r10[r4]
            r1.set(r5)
            int r4 = r4 + 1
            goto Lf
        L19:
            cz.msebera.android.httpclient.message.ParserCursor r10 = new cz.msebera.android.httpclient.message.ParserCursor
            int r2 = r8.length()
            r10.<init>(r3, r2)
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
        L27:
            boolean r3 = r10.atEnd()
            if (r3 != 0) goto L7d
            r3 = 61
            r1.set(r3)
            java.lang.String r4 = r0.parseToken(r8, r10, r1)
            r5 = 0
            boolean r6 = r10.atEnd()
            if (r6 != 0) goto L66
            int r6 = r10.getPos()
            char r6 = r8.charAt(r6)
            int r7 = r10.getPos()
            int r7 = r7 + 1
            r10.updatePos(r7)
            if (r6 != r3) goto L66
            r1.clear(r3)
            java.lang.String r5 = r0.parseValue(r8, r10, r1)
            boolean r3 = r10.atEnd()
            if (r3 != 0) goto L66
            int r3 = r10.getPos()
            int r3 = r3 + 1
            r10.updatePos(r3)
        L66:
            boolean r3 = r4.isEmpty()
            if (r3 != 0) goto L27
            cz.msebera.android.httpclient.message.BasicNameValuePair r3 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            java.lang.String r4 = decodeFormFields(r4, r9)
            java.lang.String r5 = decodeFormFields(r5, r9)
            r3.<init>(r4, r5)
            r2.add(r3)
            goto L27
        L7d:
            return r2
    }

    public static java.util.List<cz.msebera.android.httpclient.NameValuePair> parse(java.lang.String r2, java.nio.charset.Charset r3) {
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            int r1 = r2.length()
            r0.<init>(r1)
            r0.append(r2)
            r2 = 2
            char[] r2 = new char[r2]
            r2 = {x0018: FILL_ARRAY_DATA , data: [38, 59} // fill-array
            java.util.List r2 = parse(r0, r3, r2)
            return r2
    }

    public static java.util.List<cz.msebera.android.httpclient.NameValuePair> parse(java.lang.String r2, java.nio.charset.Charset r3, char... r4) {
            if (r2 != 0) goto L7
            java.util.List r2 = java.util.Collections.emptyList()
            return r2
        L7:
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            int r1 = r2.length()
            r0.<init>(r1)
            r0.append(r2)
            java.util.List r2 = parse(r0, r3, r4)
            return r2
    }

    public static java.util.List<cz.msebera.android.httpclient.NameValuePair> parse(java.net.URI r1, java.lang.String r2) {
            java.lang.String r1 = r1.getRawQuery()
            if (r1 == 0) goto L15
            boolean r0 = r1.isEmpty()
            if (r0 != 0) goto L15
            java.nio.charset.Charset r2 = java.nio.charset.Charset.forName(r2)
            java.util.List r1 = parse(r1, r2)
            return r1
        L15:
            java.util.List r1 = java.util.Collections.emptyList()
            return r1
    }

    @java.lang.Deprecated
    public static void parse(java.util.List<cz.msebera.android.httpclient.NameValuePair> r1, java.util.Scanner r2, java.lang.String r3) {
            java.lang.String r0 = "[&;]"
            parse(r1, r2, r0, r3)
            return
    }

    @java.lang.Deprecated
    public static void parse(java.util.List<cz.msebera.android.httpclient.NameValuePair> r2, java.util.Scanner r3, java.lang.String r4, java.lang.String r5) {
            r3.useDelimiter(r4)
        L3:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L44
            java.lang.String r4 = r3.next()
            java.lang.String r0 = "="
            int r0 = r4.indexOf(r0)
            r1 = -1
            if (r0 == r1) goto L32
            r1 = 0
            java.lang.String r1 = r4.substring(r1, r0)
            java.lang.String r1 = r1.trim()
            java.lang.String r1 = decodeFormFields(r1, r5)
            int r0 = r0 + 1
            java.lang.String r4 = r4.substring(r0)
            java.lang.String r4 = r4.trim()
            java.lang.String r4 = decodeFormFields(r4, r5)
            goto L3b
        L32:
            java.lang.String r4 = r4.trim()
            java.lang.String r1 = decodeFormFields(r4, r5)
            r4 = 0
        L3b:
            cz.msebera.android.httpclient.message.BasicNameValuePair r0 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            r0.<init>(r1, r4)
            r2.add(r0)
            goto L3
        L44:
            return
    }

    private static java.lang.String urlDecode(java.lang.String r7, java.nio.charset.Charset r8, boolean r9) {
            if (r7 != 0) goto L4
            r7 = 0
            return r7
        L4:
            int r0 = r7.length()
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            java.nio.CharBuffer r7 = java.nio.CharBuffer.wrap(r7)
        L10:
            boolean r1 = r7.hasRemaining()
            if (r1 == 0) goto L61
            char r1 = r7.get()
            r2 = 37
            if (r1 != r2) goto L50
            int r3 = r7.remaining()
            r4 = 2
            if (r3 < r4) goto L50
            char r1 = r7.get()
            char r3 = r7.get()
            r4 = 16
            int r5 = java.lang.Character.digit(r1, r4)
            int r4 = java.lang.Character.digit(r3, r4)
            r6 = -1
            if (r5 == r6) goto L44
            if (r4 == r6) goto L44
            int r1 = r5 << 4
            int r1 = r1 + r4
            byte r1 = (byte) r1
            r0.put(r1)
            goto L10
        L44:
            r0.put(r2)
            byte r1 = (byte) r1
            r0.put(r1)
            byte r1 = (byte) r3
            r0.put(r1)
            goto L10
        L50:
            if (r9 == 0) goto L5c
            r2 = 43
            if (r1 != r2) goto L5c
            r1 = 32
            r0.put(r1)
            goto L10
        L5c:
            byte r1 = (byte) r1
            r0.put(r1)
            goto L10
        L61:
            r0.flip()
            java.nio.CharBuffer r7 = r8.decode(r0)
            java.lang.String r7 = r7.toString()
            return r7
    }

    private static java.lang.String urlEncode(java.lang.String r3, java.nio.charset.Charset r4, java.util.BitSet r5, boolean r6) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.nio.ByteBuffer r3 = r4.encode(r3)
        Ld:
            boolean r4 = r3.hasRemaining()
            if (r4 == 0) goto L54
            byte r4 = r3.get()
            r4 = r4 & 255(0xff, float:3.57E-43)
            boolean r1 = r5.get(r4)
            if (r1 == 0) goto L24
            char r4 = (char) r4
            r0.append(r4)
            goto Ld
        L24:
            if (r6 == 0) goto L30
            r1 = 32
            if (r4 != r1) goto L30
            r4 = 43
            r0.append(r4)
            goto Ld
        L30:
            java.lang.String r1 = "%"
            r0.append(r1)
            int r1 = r4 >> 4
            r1 = r1 & 15
            r2 = 16
            char r1 = java.lang.Character.forDigit(r1, r2)
            char r1 = java.lang.Character.toUpperCase(r1)
            r4 = r4 & 15
            char r4 = java.lang.Character.forDigit(r4, r2)
            char r4 = java.lang.Character.toUpperCase(r4)
            r0.append(r1)
            r0.append(r4)
            goto Ld
        L54:
            java.lang.String r3 = r0.toString()
            return r3
    }
}
