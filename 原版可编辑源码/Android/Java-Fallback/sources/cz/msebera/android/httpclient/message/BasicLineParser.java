package cz.msebera.android.httpclient.message;

@cz.msebera.android.httpclient.annotation.Immutable
public class BasicLineParser implements cz.msebera.android.httpclient.message.LineParser {

    @java.lang.Deprecated
    public static final cz.msebera.android.httpclient.message.BasicLineParser DEFAULT = null;
    public static final cz.msebera.android.httpclient.message.BasicLineParser INSTANCE = null;
    protected final cz.msebera.android.httpclient.ProtocolVersion protocol;

    static {
            cz.msebera.android.httpclient.message.BasicLineParser r0 = new cz.msebera.android.httpclient.message.BasicLineParser
            r0.<init>()
            cz.msebera.android.httpclient.message.BasicLineParser.DEFAULT = r0
            cz.msebera.android.httpclient.message.BasicLineParser r0 = new cz.msebera.android.httpclient.message.BasicLineParser
            r0.<init>()
            cz.msebera.android.httpclient.message.BasicLineParser.INSTANCE = r0
            return
    }

    public BasicLineParser() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public BasicLineParser(cz.msebera.android.httpclient.ProtocolVersion r1) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto L6
            goto L8
        L6:
            cz.msebera.android.httpclient.HttpVersion r1 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
        L8:
            r0.protocol = r1
            return
    }

    public static cz.msebera.android.httpclient.Header parseHeader(java.lang.String r2, cz.msebera.android.httpclient.message.LineParser r3) throws cz.msebera.android.httpclient.ParseException {
            java.lang.String r0 = "Value"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            int r1 = r2.length()
            r0.<init>(r1)
            r0.append(r2)
            if (r3 == 0) goto L14
            goto L16
        L14:
            cz.msebera.android.httpclient.message.BasicLineParser r3 = cz.msebera.android.httpclient.message.BasicLineParser.INSTANCE
        L16:
            cz.msebera.android.httpclient.Header r2 = r3.parseHeader(r0)
            return r2
    }

    public static cz.msebera.android.httpclient.ProtocolVersion parseProtocolVersion(java.lang.String r3, cz.msebera.android.httpclient.message.LineParser r4) throws cz.msebera.android.httpclient.ParseException {
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
            cz.msebera.android.httpclient.message.BasicLineParser r4 = cz.msebera.android.httpclient.message.BasicLineParser.INSTANCE
        L20:
            cz.msebera.android.httpclient.ProtocolVersion r3 = r4.parseProtocolVersion(r0, r1)
            return r3
    }

    public static cz.msebera.android.httpclient.RequestLine parseRequestLine(java.lang.String r3, cz.msebera.android.httpclient.message.LineParser r4) throws cz.msebera.android.httpclient.ParseException {
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
            cz.msebera.android.httpclient.message.BasicLineParser r4 = cz.msebera.android.httpclient.message.BasicLineParser.INSTANCE
        L20:
            cz.msebera.android.httpclient.RequestLine r3 = r4.parseRequestLine(r0, r1)
            return r3
    }

    public static cz.msebera.android.httpclient.StatusLine parseStatusLine(java.lang.String r3, cz.msebera.android.httpclient.message.LineParser r4) throws cz.msebera.android.httpclient.ParseException {
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
            cz.msebera.android.httpclient.message.BasicLineParser r4 = cz.msebera.android.httpclient.message.BasicLineParser.INSTANCE
        L20:
            cz.msebera.android.httpclient.StatusLine r3 = r4.parseStatusLine(r0, r1)
            return r3
    }

    protected cz.msebera.android.httpclient.ProtocolVersion createProtocolVersion(int r2, int r3) {
            r1 = this;
            cz.msebera.android.httpclient.ProtocolVersion r0 = r1.protocol
            cz.msebera.android.httpclient.ProtocolVersion r2 = r0.forVersion(r2, r3)
            return r2
    }

    protected cz.msebera.android.httpclient.RequestLine createRequestLine(java.lang.String r2, java.lang.String r3, cz.msebera.android.httpclient.ProtocolVersion r4) {
            r1 = this;
            cz.msebera.android.httpclient.message.BasicRequestLine r0 = new cz.msebera.android.httpclient.message.BasicRequestLine
            r0.<init>(r2, r3, r4)
            return r0
    }

    protected cz.msebera.android.httpclient.StatusLine createStatusLine(cz.msebera.android.httpclient.ProtocolVersion r2, int r3, java.lang.String r4) {
            r1 = this;
            cz.msebera.android.httpclient.message.BasicStatusLine r0 = new cz.msebera.android.httpclient.message.BasicStatusLine
            r0.<init>(r2, r3, r4)
            return r0
    }

    @Override
    public boolean hasProtocolVersion(cz.msebera.android.httpclient.util.CharArrayBuffer r9, cz.msebera.android.httpclient.message.ParserCursor r10) {
            r8 = this;
            java.lang.String r0 = "Char array buffer"
            cz.msebera.android.httpclient.util.Args.notNull(r9, r0)
            java.lang.String r0 = "Parser cursor"
            cz.msebera.android.httpclient.util.Args.notNull(r10, r0)
            int r10 = r10.getPos()
            cz.msebera.android.httpclient.ProtocolVersion r0 = r8.protocol
            java.lang.String r0 = r0.getProtocol()
            int r1 = r0.length()
            int r2 = r9.length()
            int r3 = r1 + 4
            r4 = 0
            if (r2 >= r3) goto L22
            return r4
        L22:
            if (r10 >= 0) goto L2c
            int r10 = r9.length()
            int r10 = r10 + (-4)
            int r10 = r10 - r1
            goto L41
        L2c:
            if (r10 != 0) goto L41
        L2e:
            int r2 = r9.length()
            if (r10 >= r2) goto L41
            char r2 = r9.charAt(r10)
            boolean r2 = cz.msebera.android.httpclient.protocol.HTTP.isWhitespace(r2)
            if (r2 == 0) goto L41
            int r10 = r10 + 1
            goto L2e
        L41:
            int r2 = r10 + r1
            int r3 = r2 + 4
            int r5 = r9.length()
            if (r3 <= r5) goto L4c
            return r4
        L4c:
            r3 = 1
            r5 = 1
            r6 = 0
        L4f:
            if (r5 == 0) goto L65
            if (r6 >= r1) goto L65
            int r5 = r10 + r6
            char r5 = r9.charAt(r5)
            char r7 = r0.charAt(r6)
            if (r5 != r7) goto L61
            r5 = 1
            goto L62
        L61:
            r5 = 0
        L62:
            int r6 = r6 + 1
            goto L4f
        L65:
            if (r5 == 0) goto L72
            char r9 = r9.charAt(r2)
            r10 = 47
            if (r9 != r10) goto L71
            r5 = 1
            goto L72
        L71:
            r5 = 0
        L72:
            return r5
    }

    @Override
    public cz.msebera.android.httpclient.Header parseHeader(cz.msebera.android.httpclient.util.CharArrayBuffer r2) throws cz.msebera.android.httpclient.ParseException {
            r1 = this;
            cz.msebera.android.httpclient.message.BufferedHeader r0 = new cz.msebera.android.httpclient.message.BufferedHeader
            r0.<init>(r2)
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.ProtocolVersion parseProtocolVersion(cz.msebera.android.httpclient.util.CharArrayBuffer r13, cz.msebera.android.httpclient.message.ParserCursor r14) throws cz.msebera.android.httpclient.ParseException {
            r12 = this;
            java.lang.String r0 = "Char array buffer"
            cz.msebera.android.httpclient.util.Args.notNull(r13, r0)
            java.lang.String r0 = "Parser cursor"
            cz.msebera.android.httpclient.util.Args.notNull(r14, r0)
            cz.msebera.android.httpclient.ProtocolVersion r0 = r12.protocol
            java.lang.String r0 = r0.getProtocol()
            int r1 = r0.length()
            int r2 = r14.getPos()
            int r3 = r14.getUpperBound()
            r12.skipWhitespace(r13, r14)
            int r4 = r14.getPos()
            int r5 = r4 + r1
            int r6 = r5 + 4
            java.lang.String r7 = "Not a valid protocol version: "
            if (r6 > r3) goto Leb
            r6 = 0
            r8 = 1
            r9 = 1
            r10 = 0
        L2f:
            if (r9 == 0) goto L45
            if (r10 >= r1) goto L45
            int r9 = r4 + r10
            char r9 = r13.charAt(r9)
            char r11 = r0.charAt(r10)
            if (r9 != r11) goto L41
            r9 = 1
            goto L42
        L41:
            r9 = 0
        L42:
            int r10 = r10 + 1
            goto L2f
        L45:
            if (r9 == 0) goto L52
            char r0 = r13.charAt(r5)
            r5 = 47
            if (r0 != r5) goto L51
            r9 = 1
            goto L52
        L51:
            r9 = 0
        L52:
            if (r9 == 0) goto Ld2
            int r1 = r1 + r8
            int r4 = r4 + r1
            r0 = 46
            int r0 = r13.indexOf(r0, r4, r3)
            r1 = -1
            if (r0 == r1) goto Lb7
            java.lang.String r4 = r13.substringTrimmed(r4, r0)     // Catch: java.lang.NumberFormatException -> L9c
            int r4 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.NumberFormatException -> L9c
            int r0 = r0 + r8
            r5 = 32
            int r5 = r13.indexOf(r5, r0, r3)
            if (r5 != r1) goto L71
            r5 = r3
        L71:
            java.lang.String r0 = r13.substringTrimmed(r0, r5)     // Catch: java.lang.NumberFormatException -> L81
            int r13 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.NumberFormatException -> L81
            r14.updatePos(r5)
            cz.msebera.android.httpclient.ProtocolVersion r13 = r12.createProtocolVersion(r4, r13)
            return r13
        L81:
            cz.msebera.android.httpclient.ParseException r14 = new cz.msebera.android.httpclient.ParseException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Invalid protocol minor version number: "
            r0.append(r1)
            java.lang.String r13 = r13.substring(r2, r3)
            r0.append(r13)
            java.lang.String r13 = r0.toString()
            r14.<init>(r13)
            throw r14
        L9c:
            cz.msebera.android.httpclient.ParseException r14 = new cz.msebera.android.httpclient.ParseException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Invalid protocol major version number: "
            r0.append(r1)
            java.lang.String r13 = r13.substring(r2, r3)
            r0.append(r13)
            java.lang.String r13 = r0.toString()
            r14.<init>(r13)
            throw r14
        Lb7:
            cz.msebera.android.httpclient.ParseException r14 = new cz.msebera.android.httpclient.ParseException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Invalid protocol version number: "
            r0.append(r1)
            java.lang.String r13 = r13.substring(r2, r3)
            r0.append(r13)
            java.lang.String r13 = r0.toString()
            r14.<init>(r13)
            throw r14
        Ld2:
            cz.msebera.android.httpclient.ParseException r14 = new cz.msebera.android.httpclient.ParseException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r7)
            java.lang.String r13 = r13.substring(r2, r3)
            r0.append(r13)
            java.lang.String r13 = r0.toString()
            r14.<init>(r13)
            throw r14
        Leb:
            cz.msebera.android.httpclient.ParseException r14 = new cz.msebera.android.httpclient.ParseException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r7)
            java.lang.String r13 = r13.substring(r2, r3)
            r0.append(r13)
            java.lang.String r13 = r0.toString()
            r14.<init>(r13)
            throw r14
    }

    @Override
    public cz.msebera.android.httpclient.RequestLine parseRequestLine(cz.msebera.android.httpclient.util.CharArrayBuffer r7, cz.msebera.android.httpclient.message.ParserCursor r8) throws cz.msebera.android.httpclient.ParseException {
            r6 = this;
            java.lang.String r0 = "Invalid request line: "
            java.lang.String r1 = "Char array buffer"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r1)
            java.lang.String r1 = "Parser cursor"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r1)
            int r1 = r8.getPos()
            int r2 = r8.getUpperBound()
            r6.skipWhitespace(r7, r8)     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            int r3 = r8.getPos()     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            r4 = 32
            int r5 = r7.indexOf(r4, r3, r2)     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            if (r5 < 0) goto L82
            java.lang.String r3 = r7.substringTrimmed(r3, r5)     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            r8.updatePos(r5)     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            r6.skipWhitespace(r7, r8)     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            int r5 = r8.getPos()     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            int r4 = r7.indexOf(r4, r5, r2)     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            if (r4 < 0) goto L69
            java.lang.String r5 = r7.substringTrimmed(r5, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            r8.updatePos(r4)     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            cz.msebera.android.httpclient.ProtocolVersion r4 = r6.parseProtocolVersion(r7, r8)     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            r6.skipWhitespace(r7, r8)     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            boolean r8 = r8.atEnd()     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            if (r8 == 0) goto L50
            cz.msebera.android.httpclient.RequestLine r7 = r6.createRequestLine(r3, r5, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            return r7
        L50:
            cz.msebera.android.httpclient.ParseException r8 = new cz.msebera.android.httpclient.ParseException     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            r3.<init>()     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            r3.append(r0)     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            java.lang.String r4 = r7.substring(r1, r2)     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            r3.append(r4)     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            java.lang.String r3 = r3.toString()     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            r8.<init>(r3)     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            throw r8     // Catch: java.lang.IndexOutOfBoundsException -> L9b
        L69:
            cz.msebera.android.httpclient.ParseException r8 = new cz.msebera.android.httpclient.ParseException     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            r3.<init>()     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            r3.append(r0)     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            java.lang.String r4 = r7.substring(r1, r2)     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            r3.append(r4)     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            java.lang.String r3 = r3.toString()     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            r8.<init>(r3)     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            throw r8     // Catch: java.lang.IndexOutOfBoundsException -> L9b
        L82:
            cz.msebera.android.httpclient.ParseException r8 = new cz.msebera.android.httpclient.ParseException     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            r3.<init>()     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            r3.append(r0)     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            java.lang.String r4 = r7.substring(r1, r2)     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            r3.append(r4)     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            java.lang.String r3 = r3.toString()     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            r8.<init>(r3)     // Catch: java.lang.IndexOutOfBoundsException -> L9b
            throw r8     // Catch: java.lang.IndexOutOfBoundsException -> L9b
        L9b:
            cz.msebera.android.httpclient.ParseException r8 = new cz.msebera.android.httpclient.ParseException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.lang.String r7 = r7.substring(r1, r2)
            r3.append(r7)
            java.lang.String r7 = r3.toString()
            r8.<init>(r7)
            throw r8
    }

    @Override
    public cz.msebera.android.httpclient.StatusLine parseStatusLine(cz.msebera.android.httpclient.util.CharArrayBuffer r8, cz.msebera.android.httpclient.message.ParserCursor r9) throws cz.msebera.android.httpclient.ParseException {
            r7 = this;
            java.lang.String r0 = "Char array buffer"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r0)
            java.lang.String r0 = "Parser cursor"
            cz.msebera.android.httpclient.util.Args.notNull(r9, r0)
            int r0 = r9.getPos()
            int r1 = r9.getUpperBound()
            cz.msebera.android.httpclient.ProtocolVersion r2 = r7.parseProtocolVersion(r8, r9)     // Catch: java.lang.IndexOutOfBoundsException -> L84
            r7.skipWhitespace(r8, r9)     // Catch: java.lang.IndexOutOfBoundsException -> L84
            int r9 = r9.getPos()     // Catch: java.lang.IndexOutOfBoundsException -> L84
            r3 = 32
            int r3 = r8.indexOf(r3, r9, r1)     // Catch: java.lang.IndexOutOfBoundsException -> L84
            if (r3 >= 0) goto L26
            r3 = r1
        L26:
            java.lang.String r9 = r8.substringTrimmed(r9, r3)     // Catch: java.lang.IndexOutOfBoundsException -> L84
            r4 = 0
        L2b:
            int r5 = r9.length()     // Catch: java.lang.IndexOutOfBoundsException -> L84
            java.lang.String r6 = "Status line contains invalid status code: "
            if (r4 >= r5) goto L59
            char r5 = r9.charAt(r4)     // Catch: java.lang.IndexOutOfBoundsException -> L84
            boolean r5 = java.lang.Character.isDigit(r5)     // Catch: java.lang.IndexOutOfBoundsException -> L84
            if (r5 == 0) goto L40
            int r4 = r4 + 1
            goto L2b
        L40:
            cz.msebera.android.httpclient.ParseException r9 = new cz.msebera.android.httpclient.ParseException     // Catch: java.lang.IndexOutOfBoundsException -> L84
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.IndexOutOfBoundsException -> L84
            r2.<init>()     // Catch: java.lang.IndexOutOfBoundsException -> L84
            r2.append(r6)     // Catch: java.lang.IndexOutOfBoundsException -> L84
            java.lang.String r3 = r8.substring(r0, r1)     // Catch: java.lang.IndexOutOfBoundsException -> L84
            r2.append(r3)     // Catch: java.lang.IndexOutOfBoundsException -> L84
            java.lang.String r2 = r2.toString()     // Catch: java.lang.IndexOutOfBoundsException -> L84
            r9.<init>(r2)     // Catch: java.lang.IndexOutOfBoundsException -> L84
            throw r9     // Catch: java.lang.IndexOutOfBoundsException -> L84
        L59:
            int r9 = java.lang.Integer.parseInt(r9)     // Catch: java.lang.NumberFormatException -> L6b java.lang.IndexOutOfBoundsException -> L84
            if (r3 >= r1) goto L64
            java.lang.String r3 = r8.substringTrimmed(r3, r1)     // Catch: java.lang.IndexOutOfBoundsException -> L84
            goto L66
        L64:
            java.lang.String r3 = ""
        L66:
            cz.msebera.android.httpclient.StatusLine r8 = r7.createStatusLine(r2, r9, r3)     // Catch: java.lang.IndexOutOfBoundsException -> L84
            return r8
        L6b:
            cz.msebera.android.httpclient.ParseException r9 = new cz.msebera.android.httpclient.ParseException     // Catch: java.lang.IndexOutOfBoundsException -> L84
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.IndexOutOfBoundsException -> L84
            r2.<init>()     // Catch: java.lang.IndexOutOfBoundsException -> L84
            r2.append(r6)     // Catch: java.lang.IndexOutOfBoundsException -> L84
            java.lang.String r3 = r8.substring(r0, r1)     // Catch: java.lang.IndexOutOfBoundsException -> L84
            r2.append(r3)     // Catch: java.lang.IndexOutOfBoundsException -> L84
            java.lang.String r2 = r2.toString()     // Catch: java.lang.IndexOutOfBoundsException -> L84
            r9.<init>(r2)     // Catch: java.lang.IndexOutOfBoundsException -> L84
            throw r9     // Catch: java.lang.IndexOutOfBoundsException -> L84
        L84:
            cz.msebera.android.httpclient.ParseException r9 = new cz.msebera.android.httpclient.ParseException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Invalid status line: "
            r2.append(r3)
            java.lang.String r8 = r8.substring(r0, r1)
            r2.append(r8)
            java.lang.String r8 = r2.toString()
            r9.<init>(r8)
            throw r9
    }

    protected void skipWhitespace(cz.msebera.android.httpclient.util.CharArrayBuffer r4, cz.msebera.android.httpclient.message.ParserCursor r5) {
            r3 = this;
            int r0 = r5.getPos()
            int r1 = r5.getUpperBound()
        L8:
            if (r0 >= r1) goto L17
            char r2 = r4.charAt(r0)
            boolean r2 = cz.msebera.android.httpclient.protocol.HTTP.isWhitespace(r2)
            if (r2 == 0) goto L17
            int r0 = r0 + 1
            goto L8
        L17:
            r5.updatePos(r0)
            return
    }
}
