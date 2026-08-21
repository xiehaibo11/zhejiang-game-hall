package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class NetscapeDraftHeaderParser {
    public static final cz.msebera.android.httpclient.impl.cookie.NetscapeDraftHeaderParser DEFAULT = null;
    private static final char PARAM_DELIMITER = ';';
    private static final java.util.BitSet TOKEN_DELIMS = null;
    private static final java.util.BitSet VALUE_DELIMS = null;
    private final cz.msebera.android.httpclient.message.TokenParser tokenParser;

    static {
            cz.msebera.android.httpclient.impl.cookie.NetscapeDraftHeaderParser r0 = new cz.msebera.android.httpclient.impl.cookie.NetscapeDraftHeaderParser
            r0.<init>()
            cz.msebera.android.httpclient.impl.cookie.NetscapeDraftHeaderParser.DEFAULT = r0
            r0 = 2
            int[] r0 = new int[r0]
            r0 = {x0022: FILL_ARRAY_DATA , data: [61, 59} // fill-array
            java.util.BitSet r0 = cz.msebera.android.httpclient.message.TokenParser.INIT_BITSET(r0)
            cz.msebera.android.httpclient.impl.cookie.NetscapeDraftHeaderParser.TOKEN_DELIMS = r0
            r0 = 1
            int[] r0 = new int[r0]
            r1 = 0
            r2 = 59
            r0[r1] = r2
            java.util.BitSet r0 = cz.msebera.android.httpclient.message.TokenParser.INIT_BITSET(r0)
            cz.msebera.android.httpclient.impl.cookie.NetscapeDraftHeaderParser.VALUE_DELIMS = r0
            return
    }

    public NetscapeDraftHeaderParser() {
            r1 = this;
            r1.<init>()
            cz.msebera.android.httpclient.message.TokenParser r0 = cz.msebera.android.httpclient.message.TokenParser.INSTANCE
            r1.tokenParser = r0
            return
    }

    private cz.msebera.android.httpclient.NameValuePair parseNameValuePair(cz.msebera.android.httpclient.util.CharArrayBuffer r5, cz.msebera.android.httpclient.message.ParserCursor r6) {
            r4 = this;
            cz.msebera.android.httpclient.message.TokenParser r0 = r4.tokenParser
            java.util.BitSet r1 = cz.msebera.android.httpclient.impl.cookie.NetscapeDraftHeaderParser.TOKEN_DELIMS
            java.lang.String r0 = r0.parseToken(r5, r6, r1)
            boolean r1 = r6.atEnd()
            r2 = 0
            if (r1 == 0) goto L15
            cz.msebera.android.httpclient.message.BasicNameValuePair r5 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            r5.<init>(r0, r2)
            return r5
        L15:
            int r1 = r6.getPos()
            char r1 = r5.charAt(r1)
            int r3 = r6.getPos()
            int r3 = r3 + 1
            r6.updatePos(r3)
            r3 = 61
            if (r1 == r3) goto L30
            cz.msebera.android.httpclient.message.BasicNameValuePair r5 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            r5.<init>(r0, r2)
            return r5
        L30:
            cz.msebera.android.httpclient.message.TokenParser r1 = r4.tokenParser
            java.util.BitSet r2 = cz.msebera.android.httpclient.impl.cookie.NetscapeDraftHeaderParser.VALUE_DELIMS
            java.lang.String r5 = r1.parseToken(r5, r6, r2)
            boolean r1 = r6.atEnd()
            if (r1 != 0) goto L47
            int r1 = r6.getPos()
            int r1 = r1 + 1
            r6.updatePos(r1)
        L47:
            cz.msebera.android.httpclient.message.BasicNameValuePair r6 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            r6.<init>(r0, r5)
            return r6
    }

    public cz.msebera.android.httpclient.HeaderElement parseHeader(cz.msebera.android.httpclient.util.CharArrayBuffer r4, cz.msebera.android.httpclient.message.ParserCursor r5) throws cz.msebera.android.httpclient.ParseException {
            r3 = this;
            java.lang.String r0 = "Char array buffer"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.lang.String r0 = "Parser cursor"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            cz.msebera.android.httpclient.NameValuePair r0 = r3.parseNameValuePair(r4, r5)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
        L13:
            boolean r2 = r5.atEnd()
            if (r2 != 0) goto L21
            cz.msebera.android.httpclient.NameValuePair r2 = r3.parseNameValuePair(r4, r5)
            r1.add(r2)
            goto L13
        L21:
            cz.msebera.android.httpclient.message.BasicHeaderElement r4 = new cz.msebera.android.httpclient.message.BasicHeaderElement
            java.lang.String r5 = r0.getName()
            java.lang.String r0 = r0.getValue()
            int r2 = r1.size()
            cz.msebera.android.httpclient.NameValuePair[] r2 = new cz.msebera.android.httpclient.NameValuePair[r2]
            java.lang.Object[] r1 = r1.toArray(r2)
            cz.msebera.android.httpclient.NameValuePair[] r1 = (cz.msebera.android.httpclient.NameValuePair[]) r1
            r4.<init>(r5, r0, r1)
            return r4
    }
}
