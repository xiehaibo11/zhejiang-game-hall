package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.ThreadSafe
class RFC6265CookieSpecBase implements cz.msebera.android.httpclient.cookie.CookieSpec {
    private static final char COMMA_CHAR = ',';
    private static final char DQUOTE_CHAR = '\"';
    private static final char EQUAL_CHAR = '=';
    private static final char ESCAPE_CHAR = '\\';
    private static final char PARAM_DELIMITER = ';';
    private static final java.util.BitSet SPECIAL_CHARS = null;
    private static final java.util.BitSet TOKEN_DELIMS = null;
    private static final java.util.BitSet VALUE_DELIMS = null;
    private final java.util.Map<java.lang.String, cz.msebera.android.httpclient.cookie.CookieAttributeHandler> attribHandlerMap;
    private final cz.msebera.android.httpclient.cookie.CookieAttributeHandler[] attribHandlers;
    private final cz.msebera.android.httpclient.message.TokenParser tokenParser;

    static {
            r0 = 2
            int[] r0 = new int[r0]
            r0 = {x0028: FILL_ARRAY_DATA , data: [61, 59} // fill-array
            java.util.BitSet r0 = cz.msebera.android.httpclient.message.TokenParser.INIT_BITSET(r0)
            cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecBase.TOKEN_DELIMS = r0
            r0 = 1
            int[] r0 = new int[r0]
            r1 = 0
            r2 = 59
            r0[r1] = r2
            java.util.BitSet r0 = cz.msebera.android.httpclient.message.TokenParser.INIT_BITSET(r0)
            cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecBase.VALUE_DELIMS = r0
            r0 = 5
            int[] r0 = new int[r0]
            r0 = {x0030: FILL_ARRAY_DATA , data: [32, 34, 44, 59, 92} // fill-array
            java.util.BitSet r0 = cz.msebera.android.httpclient.message.TokenParser.INIT_BITSET(r0)
            cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecBase.SPECIAL_CHARS = r0
            return
    }

    RFC6265CookieSpecBase(cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler... r7) {
            r6 = this;
            r6.<init>()
            java.lang.Object r0 = r7.clone()
            cz.msebera.android.httpclient.cookie.CookieAttributeHandler[] r0 = (cz.msebera.android.httpclient.cookie.CookieAttributeHandler[]) r0
            r6.attribHandlers = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            int r1 = r7.length
            r0.<init>(r1)
            r6.attribHandlerMap = r0
            int r0 = r7.length
            r1 = 0
        L15:
            if (r1 >= r0) goto L2b
            r2 = r7[r1]
            java.util.Map<java.lang.String, cz.msebera.android.httpclient.cookie.CookieAttributeHandler> r3 = r6.attribHandlerMap
            java.lang.String r4 = r2.getAttributeName()
            java.util.Locale r5 = java.util.Locale.ROOT
            java.lang.String r4 = r4.toLowerCase(r5)
            r3.put(r4, r2)
            int r1 = r1 + 1
            goto L15
        L2b:
            cz.msebera.android.httpclient.message.TokenParser r7 = cz.msebera.android.httpclient.message.TokenParser.INSTANCE
            r6.tokenParser = r7
            return
    }

    static java.lang.String getDefaultDomain(cz.msebera.android.httpclient.cookie.CookieOrigin r0) {
            java.lang.String r0 = r0.getHost()
            return r0
    }

    static java.lang.String getDefaultPath(cz.msebera.android.httpclient.cookie.CookieOrigin r2) {
            java.lang.String r2 = r2.getPath()
            r0 = 47
            int r0 = r2.lastIndexOf(r0)
            if (r0 < 0) goto L14
            if (r0 != 0) goto Lf
            r0 = 1
        Lf:
            r1 = 0
            java.lang.String r2 = r2.substring(r1, r0)
        L14:
            return r2
    }

    boolean containsChars(java.lang.CharSequence r4, java.util.BitSet r5) {
            r3 = this;
            r0 = 0
            r1 = 0
        L2:
            int r2 = r4.length()
            if (r1 >= r2) goto L17
            char r2 = r4.charAt(r1)
            boolean r2 = r5.get(r2)
            if (r2 == 0) goto L14
            r4 = 1
            return r4
        L14:
            int r1 = r1 + 1
            goto L2
        L17:
            return r0
    }

    boolean containsSpecialChar(java.lang.CharSequence r2) {
            r1 = this;
            java.util.BitSet r0 = cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecBase.SPECIAL_CHARS
            boolean r2 = r1.containsChars(r2, r0)
            return r2
    }

    @Override
    public java.util.List<cz.msebera.android.httpclient.Header> formatCookies(java.util.List<cz.msebera.android.httpclient.cookie.Cookie> r10) {
            r9 = this;
            java.lang.String r0 = "List of cookies"
            cz.msebera.android.httpclient.util.Args.notEmpty(r10, r0)
            int r0 = r10.size()
            r1 = 1
            if (r0 <= r1) goto L17
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>(r10)
            cz.msebera.android.httpclient.cookie.CookiePriorityComparator r10 = cz.msebera.android.httpclient.cookie.CookiePriorityComparator.INSTANCE
            java.util.Collections.sort(r0, r10)
            r10 = r0
        L17:
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            int r2 = r10.size()
            int r2 = r2 * 20
            r0.<init>(r2)
            java.lang.String r2 = "Cookie"
            r0.append(r2)
            java.lang.String r2 = ": "
            r0.append(r2)
            r2 = 0
            r3 = 0
        L2e:
            int r4 = r10.size()
            if (r3 >= r4) goto L87
            java.lang.Object r4 = r10.get(r3)
            cz.msebera.android.httpclient.cookie.Cookie r4 = (cz.msebera.android.httpclient.cookie.Cookie) r4
            if (r3 <= 0) goto L46
            r5 = 59
            r0.append(r5)
            r5 = 32
            r0.append(r5)
        L46:
            java.lang.String r5 = r4.getName()
            r0.append(r5)
            java.lang.String r4 = r4.getValue()
            if (r4 == 0) goto L84
            r5 = 61
            r0.append(r5)
            boolean r5 = r9.containsSpecialChar(r4)
            if (r5 == 0) goto L81
            r5 = 34
            r0.append(r5)
            r6 = 0
        L64:
            int r7 = r4.length()
            if (r6 >= r7) goto L7d
            char r7 = r4.charAt(r6)
            r8 = 92
            if (r7 == r5) goto L74
            if (r7 != r8) goto L77
        L74:
            r0.append(r8)
        L77:
            r0.append(r7)
            int r6 = r6 + 1
            goto L64
        L7d:
            r0.append(r5)
            goto L84
        L81:
            r0.append(r4)
        L84:
            int r3 = r3 + 1
            goto L2e
        L87:
            java.util.ArrayList r10 = new java.util.ArrayList
            r10.<init>(r1)
            cz.msebera.android.httpclient.message.BufferedHeader r1 = new cz.msebera.android.httpclient.message.BufferedHeader
            r1.<init>(r0)
            r10.add(r1)
            return r10
    }

    @Override
    public final int getVersion() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final cz.msebera.android.httpclient.Header getVersionHeader() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final boolean match(cz.msebera.android.httpclient.cookie.Cookie r6, cz.msebera.android.httpclient.cookie.CookieOrigin r7) {
            r5 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r0)
            cz.msebera.android.httpclient.cookie.CookieAttributeHandler[] r0 = r5.attribHandlers
            int r1 = r0.length
            r2 = 0
            r3 = 0
        Lf:
            if (r3 >= r1) goto L1d
            r4 = r0[r3]
            boolean r4 = r4.match(r6, r7)
            if (r4 != 0) goto L1a
            return r2
        L1a:
            int r3 = r3 + 1
            goto Lf
        L1d:
            r6 = 1
            return r6
    }

    @Override
    public final java.util.List<cz.msebera.android.httpclient.cookie.Cookie> parse(cz.msebera.android.httpclient.Header r8, cz.msebera.android.httpclient.cookie.CookieOrigin r9) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r7 = this;
            java.lang.String r0 = "Header"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r9, r0)
            java.lang.String r0 = r8.getName()
            java.lang.String r1 = "Set-Cookie"
            boolean r0 = r0.equalsIgnoreCase(r1)
            java.lang.String r1 = "'"
            if (r0 == 0) goto L199
            boolean r0 = r8 instanceof cz.msebera.android.httpclient.FormattedHeader
            if (r0 == 0) goto L31
            r0 = r8
            cz.msebera.android.httpclient.FormattedHeader r0 = (cz.msebera.android.httpclient.FormattedHeader) r0
            cz.msebera.android.httpclient.util.CharArrayBuffer r2 = r0.getBuffer()
            cz.msebera.android.httpclient.message.ParserCursor r3 = new cz.msebera.android.httpclient.message.ParserCursor
            int r0 = r0.getValuePos()
            int r4 = r2.length()
            r3.<init>(r0, r4)
            goto L4d
        L31:
            java.lang.String r0 = r8.getValue()
            if (r0 == 0) goto L191
            cz.msebera.android.httpclient.util.CharArrayBuffer r2 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            int r3 = r0.length()
            r2.<init>(r3)
            r2.append(r0)
            cz.msebera.android.httpclient.message.ParserCursor r3 = new cz.msebera.android.httpclient.message.ParserCursor
            r0 = 0
            int r4 = r2.length()
            r3.<init>(r0, r4)
        L4d:
            cz.msebera.android.httpclient.message.TokenParser r0 = r7.tokenParser
            java.util.BitSet r4 = cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecBase.TOKEN_DELIMS
            java.lang.String r0 = r0.parseToken(r2, r3, r4)
            int r4 = r0.length()
            if (r4 == 0) goto L173
            boolean r4 = r3.atEnd()
            java.lang.String r5 = "Cookie value is invalid: '"
            if (r4 != 0) goto L157
            int r4 = r3.getPos()
            char r4 = r2.charAt(r4)
            int r6 = r3.getPos()
            int r6 = r6 + 1
            r3.updatePos(r6)
            r6 = 61
            if (r4 != r6) goto L13b
            cz.msebera.android.httpclient.message.TokenParser r8 = r7.tokenParser
            java.util.BitSet r1 = cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecBase.VALUE_DELIMS
            java.lang.String r8 = r8.parseValue(r2, r3, r1)
            boolean r1 = r3.atEnd()
            if (r1 != 0) goto L8f
            int r1 = r3.getPos()
            int r1 = r1 + 1
            r3.updatePos(r1)
        L8f:
            cz.msebera.android.httpclient.impl.cookie.BasicClientCookie r1 = new cz.msebera.android.httpclient.impl.cookie.BasicClientCookie
            r1.<init>(r0, r8)
            java.lang.String r8 = getDefaultPath(r9)
            r1.setPath(r8)
            java.lang.String r8 = getDefaultDomain(r9)
            r1.setDomain(r8)
            java.util.Date r8 = new java.util.Date
            r8.<init>()
            r1.setCreationDate(r8)
            java.util.LinkedHashMap r8 = new java.util.LinkedHashMap
            r8.<init>()
        Laf:
            boolean r9 = r3.atEnd()
            if (r9 != 0) goto Lfb
            cz.msebera.android.httpclient.message.TokenParser r9 = r7.tokenParser
            java.util.BitSet r0 = cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecBase.TOKEN_DELIMS
            java.lang.String r9 = r9.parseToken(r2, r3, r0)
            r0 = 0
            boolean r4 = r3.atEnd()
            if (r4 != 0) goto Lee
            int r4 = r3.getPos()
            char r4 = r2.charAt(r4)
            int r5 = r3.getPos()
            int r5 = r5 + 1
            r3.updatePos(r5)
            if (r4 != r6) goto Lee
            cz.msebera.android.httpclient.message.TokenParser r0 = r7.tokenParser
            java.util.BitSet r4 = cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecBase.VALUE_DELIMS
            java.lang.String r0 = r0.parseToken(r2, r3, r4)
            boolean r4 = r3.atEnd()
            if (r4 != 0) goto Lee
            int r4 = r3.getPos()
            int r4 = r4 + 1
            r3.updatePos(r4)
        Lee:
            java.util.Locale r4 = java.util.Locale.ROOT
            java.lang.String r4 = r9.toLowerCase(r4)
            r1.setAttribute(r4, r0)
            r8.put(r9, r0)
            goto Laf
        Lfb:
            java.lang.String r9 = "max-age"
            boolean r9 = r8.containsKey(r9)
            if (r9 == 0) goto L108
            java.lang.String r9 = "expires"
            r8.remove(r9)
        L108:
            java.util.Set r8 = r8.entrySet()
            java.util.Iterator r8 = r8.iterator()
        L110:
            boolean r9 = r8.hasNext()
            if (r9 == 0) goto L136
            java.lang.Object r9 = r8.next()
            java.util.Map$Entry r9 = (java.util.Map.Entry) r9
            java.lang.Object r0 = r9.getKey()
            java.lang.String r0 = (java.lang.String) r0
            java.lang.Object r9 = r9.getValue()
            java.lang.String r9 = (java.lang.String) r9
            java.util.Map<java.lang.String, cz.msebera.android.httpclient.cookie.CookieAttributeHandler> r2 = r7.attribHandlerMap
            java.lang.Object r0 = r2.get(r0)
            cz.msebera.android.httpclient.cookie.CookieAttributeHandler r0 = (cz.msebera.android.httpclient.cookie.CookieAttributeHandler) r0
            if (r0 == 0) goto L110
            r0.parse(r1, r9)
            goto L110
        L136:
            java.util.List r8 = java.util.Collections.singletonList(r1)
            return r8
        L13b:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r9 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            java.lang.String r8 = r8.toString()
            r0.append(r8)
            r0.append(r1)
            java.lang.String r8 = r0.toString()
            r9.<init>(r8)
            throw r9
        L157:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r9 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            java.lang.String r8 = r8.toString()
            r0.append(r8)
            r0.append(r1)
            java.lang.String r8 = r0.toString()
            r9.<init>(r8)
            throw r9
        L173:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r9 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Cookie name is invalid: '"
            r0.append(r2)
            java.lang.String r8 = r8.toString()
            r0.append(r8)
            r0.append(r1)
            java.lang.String r8 = r0.toString()
            r9.<init>(r8)
            throw r9
        L191:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r8 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.String r9 = "Header value is null"
            r8.<init>(r9)
            throw r8
        L199:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r9 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Unrecognized cookie header: '"
            r0.append(r2)
            java.lang.String r8 = r8.toString()
            r0.append(r8)
            r0.append(r1)
            java.lang.String r8 = r0.toString()
            r9.<init>(r8)
            throw r9
    }

    @Override
    public final void validate(cz.msebera.android.httpclient.cookie.Cookie r5, cz.msebera.android.httpclient.cookie.CookieOrigin r6) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r4 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            cz.msebera.android.httpclient.cookie.CookieAttributeHandler[] r0 = r4.attribHandlers
            int r1 = r0.length
            r2 = 0
        Le:
            if (r2 >= r1) goto L18
            r3 = r0[r2]
            r3.validate(r5, r6)
            int r2 = r2 + 1
            goto Le
        L18:
            return
    }
}
