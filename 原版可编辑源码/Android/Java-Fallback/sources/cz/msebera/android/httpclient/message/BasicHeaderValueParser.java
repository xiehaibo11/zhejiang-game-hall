package cz.msebera.android.httpclient.message;

@cz.msebera.android.httpclient.annotation.Immutable
public class BasicHeaderValueParser implements cz.msebera.android.httpclient.message.HeaderValueParser {

    @java.lang.Deprecated
    public static final cz.msebera.android.httpclient.message.BasicHeaderValueParser DEFAULT = null;
    private static final char ELEM_DELIMITER = ',';
    public static final cz.msebera.android.httpclient.message.BasicHeaderValueParser INSTANCE = null;
    private static final char PARAM_DELIMITER = ';';
    private static final java.util.BitSet TOKEN_DELIMS = null;
    private static final java.util.BitSet VALUE_DELIMS = null;
    private final cz.msebera.android.httpclient.message.TokenParser tokenParser;

    static {
            cz.msebera.android.httpclient.message.BasicHeaderValueParser r0 = new cz.msebera.android.httpclient.message.BasicHeaderValueParser
            r0.<init>()
            cz.msebera.android.httpclient.message.BasicHeaderValueParser.DEFAULT = r0
            cz.msebera.android.httpclient.message.BasicHeaderValueParser r0 = new cz.msebera.android.httpclient.message.BasicHeaderValueParser
            r0.<init>()
            cz.msebera.android.httpclient.message.BasicHeaderValueParser.INSTANCE = r0
            r0 = 3
            int[] r0 = new int[r0]
            r0 = {x0028: FILL_ARRAY_DATA , data: [61, 59, 44} // fill-array
            java.util.BitSet r0 = cz.msebera.android.httpclient.message.TokenParser.INIT_BITSET(r0)
            cz.msebera.android.httpclient.message.BasicHeaderValueParser.TOKEN_DELIMS = r0
            r0 = 2
            int[] r0 = new int[r0]
            r0 = {x0032: FILL_ARRAY_DATA , data: [59, 44} // fill-array
            java.util.BitSet r0 = cz.msebera.android.httpclient.message.TokenParser.INIT_BITSET(r0)
            cz.msebera.android.httpclient.message.BasicHeaderValueParser.VALUE_DELIMS = r0
            return
    }

    public BasicHeaderValueParser() {
            r1 = this;
            r1.<init>()
            cz.msebera.android.httpclient.message.TokenParser r0 = cz.msebera.android.httpclient.message.TokenParser.INSTANCE
            r1.tokenParser = r0
            return
    }

    public static cz.msebera.android.httpclient.HeaderElement[] parseElements(java.lang.String r3, cz.msebera.android.httpclient.message.HeaderValueParser r4) throws cz.msebera.android.httpclient.ParseException {
            java.lang.String r0 = "Value"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            int r1 = r3.length()
            r0.<init>(r1)
            r0.append(r3)
            cz.msebera.android.httpclient.message.ParserCursor r1 = new cz.msebera.android.httpclient.message.ParserCursor
            int r3 = r3.length()
            r2 = 0
            r1.<init>(r2, r3)
            if (r4 == 0) goto L1e
            goto L20
        L1e:
            cz.msebera.android.httpclient.message.BasicHeaderValueParser r4 = cz.msebera.android.httpclient.message.BasicHeaderValueParser.INSTANCE
        L20:
            cz.msebera.android.httpclient.HeaderElement[] r3 = r4.parseElements(r0, r1)
            return r3
    }

    public static cz.msebera.android.httpclient.HeaderElement parseHeaderElement(java.lang.String r3, cz.msebera.android.httpclient.message.HeaderValueParser r4) throws cz.msebera.android.httpclient.ParseException {
            java.lang.String r0 = "Value"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            int r1 = r3.length()
            r0.<init>(r1)
            r0.append(r3)
            cz.msebera.android.httpclient.message.ParserCursor r1 = new cz.msebera.android.httpclient.message.ParserCursor
            int r3 = r3.length()
            r2 = 0
            r1.<init>(r2, r3)
            if (r4 == 0) goto L1e
            goto L20
        L1e:
            cz.msebera.android.httpclient.message.BasicHeaderValueParser r4 = cz.msebera.android.httpclient.message.BasicHeaderValueParser.INSTANCE
        L20:
            cz.msebera.android.httpclient.HeaderElement r3 = r4.parseHeaderElement(r0, r1)
            return r3
    }

    public static cz.msebera.android.httpclient.NameValuePair parseNameValuePair(java.lang.String r3, cz.msebera.android.httpclient.message.HeaderValueParser r4) throws cz.msebera.android.httpclient.ParseException {
            java.lang.String r0 = "Value"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            int r1 = r3.length()
            r0.<init>(r1)
            r0.append(r3)
            cz.msebera.android.httpclient.message.ParserCursor r1 = new cz.msebera.android.httpclient.message.ParserCursor
            int r3 = r3.length()
            r2 = 0
            r1.<init>(r2, r3)
            if (r4 == 0) goto L1e
            goto L20
        L1e:
            cz.msebera.android.httpclient.message.BasicHeaderValueParser r4 = cz.msebera.android.httpclient.message.BasicHeaderValueParser.INSTANCE
        L20:
            cz.msebera.android.httpclient.NameValuePair r3 = r4.parseNameValuePair(r0, r1)
            return r3
    }

    public static cz.msebera.android.httpclient.NameValuePair[] parseParameters(java.lang.String r3, cz.msebera.android.httpclient.message.HeaderValueParser r4) throws cz.msebera.android.httpclient.ParseException {
            java.lang.String r0 = "Value"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            int r1 = r3.length()
            r0.<init>(r1)
            r0.append(r3)
            cz.msebera.android.httpclient.message.ParserCursor r1 = new cz.msebera.android.httpclient.message.ParserCursor
            int r3 = r3.length()
            r2 = 0
            r1.<init>(r2, r3)
            if (r4 == 0) goto L1e
            goto L20
        L1e:
            cz.msebera.android.httpclient.message.BasicHeaderValueParser r4 = cz.msebera.android.httpclient.message.BasicHeaderValueParser.INSTANCE
        L20:
            cz.msebera.android.httpclient.NameValuePair[] r3 = r4.parseParameters(r0, r1)
            return r3
    }

    protected cz.msebera.android.httpclient.HeaderElement createHeaderElement(java.lang.String r2, java.lang.String r3, cz.msebera.android.httpclient.NameValuePair[] r4) {
            r1 = this;
            cz.msebera.android.httpclient.message.BasicHeaderElement r0 = new cz.msebera.android.httpclient.message.BasicHeaderElement
            r0.<init>(r2, r3, r4)
            return r0
    }

    protected cz.msebera.android.httpclient.NameValuePair createNameValuePair(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            cz.msebera.android.httpclient.message.BasicNameValuePair r0 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            r0.<init>(r2, r3)
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.HeaderElement[] parseElements(cz.msebera.android.httpclient.util.CharArrayBuffer r4, cz.msebera.android.httpclient.message.ParserCursor r5) {
            r3 = this;
            java.lang.String r0 = "Char array buffer"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.lang.String r0 = "Parser cursor"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
        Lf:
            boolean r1 = r5.atEnd()
            if (r1 != 0) goto L2d
            cz.msebera.android.httpclient.HeaderElement r1 = r3.parseHeaderElement(r4, r5)
            java.lang.String r2 = r1.getName()
            int r2 = r2.length()
            if (r2 != 0) goto L29
            java.lang.String r2 = r1.getValue()
            if (r2 == 0) goto Lf
        L29:
            r0.add(r1)
            goto Lf
        L2d:
            int r4 = r0.size()
            cz.msebera.android.httpclient.HeaderElement[] r4 = new cz.msebera.android.httpclient.HeaderElement[r4]
            java.lang.Object[] r4 = r0.toArray(r4)
            cz.msebera.android.httpclient.HeaderElement[] r4 = (cz.msebera.android.httpclient.HeaderElement[]) r4
            return r4
    }

    @Override
    public cz.msebera.android.httpclient.HeaderElement parseHeaderElement(cz.msebera.android.httpclient.util.CharArrayBuffer r4, cz.msebera.android.httpclient.message.ParserCursor r5) {
            r3 = this;
            java.lang.String r0 = "Char array buffer"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.lang.String r0 = "Parser cursor"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            cz.msebera.android.httpclient.NameValuePair r0 = r3.parseNameValuePair(r4, r5)
            boolean r1 = r5.atEnd()
            if (r1 != 0) goto L27
            int r1 = r5.getPos()
            int r1 = r1 + (-1)
            char r1 = r4.charAt(r1)
            r2 = 44
            if (r1 == r2) goto L27
            cz.msebera.android.httpclient.NameValuePair[] r4 = r3.parseParameters(r4, r5)
            goto L28
        L27:
            r4 = 0
        L28:
            java.lang.String r5 = r0.getName()
            java.lang.String r0 = r0.getValue()
            cz.msebera.android.httpclient.HeaderElement r4 = r3.createHeaderElement(r5, r0, r4)
            return r4
    }

    @Override
    public cz.msebera.android.httpclient.NameValuePair parseNameValuePair(cz.msebera.android.httpclient.util.CharArrayBuffer r5, cz.msebera.android.httpclient.message.ParserCursor r6) {
            r4 = this;
            java.lang.String r0 = "Char array buffer"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            java.lang.String r0 = "Parser cursor"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            cz.msebera.android.httpclient.message.TokenParser r0 = r4.tokenParser
            java.util.BitSet r1 = cz.msebera.android.httpclient.message.BasicHeaderValueParser.TOKEN_DELIMS
            java.lang.String r0 = r0.parseToken(r5, r6, r1)
            boolean r1 = r6.atEnd()
            r2 = 0
            if (r1 == 0) goto L1f
            cz.msebera.android.httpclient.message.BasicNameValuePair r5 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            r5.<init>(r0, r2)
            return r5
        L1f:
            int r1 = r6.getPos()
            char r1 = r5.charAt(r1)
            int r3 = r6.getPos()
            int r3 = r3 + 1
            r6.updatePos(r3)
            r3 = 61
            if (r1 == r3) goto L39
            cz.msebera.android.httpclient.NameValuePair r5 = r4.createNameValuePair(r0, r2)
            return r5
        L39:
            cz.msebera.android.httpclient.message.TokenParser r1 = r4.tokenParser
            java.util.BitSet r2 = cz.msebera.android.httpclient.message.BasicHeaderValueParser.VALUE_DELIMS
            java.lang.String r5 = r1.parseValue(r5, r6, r2)
            boolean r1 = r6.atEnd()
            if (r1 != 0) goto L50
            int r1 = r6.getPos()
            int r1 = r1 + 1
            r6.updatePos(r1)
        L50:
            cz.msebera.android.httpclient.NameValuePair r5 = r4.createNameValuePair(r0, r5)
            return r5
    }

    @java.lang.Deprecated
    public cz.msebera.android.httpclient.NameValuePair parseNameValuePair(cz.msebera.android.httpclient.util.CharArrayBuffer r6, cz.msebera.android.httpclient.message.ParserCursor r7, char[] r8) {
            r5 = this;
            java.lang.String r0 = "Char array buffer"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            java.lang.String r0 = "Parser cursor"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r0)
            java.util.BitSet r0 = new java.util.BitSet
            r0.<init>()
            if (r8 == 0) goto L1d
            int r1 = r8.length
            r2 = 0
        L13:
            if (r2 >= r1) goto L1d
            char r3 = r8[r2]
            r0.set(r3)
            int r2 = r2 + 1
            goto L13
        L1d:
            r8 = 61
            r0.set(r8)
            cz.msebera.android.httpclient.message.TokenParser r1 = r5.tokenParser
            java.lang.String r1 = r1.parseToken(r6, r7, r0)
            boolean r2 = r7.atEnd()
            r3 = 0
            if (r2 == 0) goto L35
            cz.msebera.android.httpclient.message.BasicNameValuePair r6 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            r6.<init>(r1, r3)
            return r6
        L35:
            int r2 = r7.getPos()
            char r2 = r6.charAt(r2)
            int r4 = r7.getPos()
            int r4 = r4 + 1
            r7.updatePos(r4)
            if (r2 == r8) goto L4d
            cz.msebera.android.httpclient.NameValuePair r6 = r5.createNameValuePair(r1, r3)
            return r6
        L4d:
            r0.clear(r8)
            cz.msebera.android.httpclient.message.TokenParser r8 = r5.tokenParser
            java.lang.String r6 = r8.parseValue(r6, r7, r0)
            boolean r8 = r7.atEnd()
            if (r8 != 0) goto L65
            int r8 = r7.getPos()
            int r8 = r8 + 1
            r7.updatePos(r8)
        L65:
            cz.msebera.android.httpclient.NameValuePair r6 = r5.createNameValuePair(r1, r6)
            return r6
    }

    @Override
    public cz.msebera.android.httpclient.NameValuePair[] parseParameters(cz.msebera.android.httpclient.util.CharArrayBuffer r4, cz.msebera.android.httpclient.message.ParserCursor r5) {
            r3 = this;
            java.lang.String r0 = "Char array buffer"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.lang.String r0 = "Parser cursor"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            cz.msebera.android.httpclient.message.TokenParser r0 = r3.tokenParser
            r0.skipWhiteSpace(r4, r5)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
        L14:
            boolean r1 = r5.atEnd()
            if (r1 != 0) goto L2f
            cz.msebera.android.httpclient.NameValuePair r1 = r3.parseNameValuePair(r4, r5)
            r0.add(r1)
            int r1 = r5.getPos()
            int r1 = r1 + (-1)
            char r1 = r4.charAt(r1)
            r2 = 44
            if (r1 != r2) goto L14
        L2f:
            int r4 = r0.size()
            cz.msebera.android.httpclient.NameValuePair[] r4 = new cz.msebera.android.httpclient.NameValuePair[r4]
            java.lang.Object[] r4 = r0.toArray(r4)
            cz.msebera.android.httpclient.NameValuePair[] r4 = (cz.msebera.android.httpclient.NameValuePair[]) r4
            return r4
    }
}
