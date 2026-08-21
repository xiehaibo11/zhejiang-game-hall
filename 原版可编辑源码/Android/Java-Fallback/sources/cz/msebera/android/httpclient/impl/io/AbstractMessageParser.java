package cz.msebera.android.httpclient.impl.io;

import cz.msebera.android.httpclient.HttpMessage;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public abstract class AbstractMessageParser<T extends cz.msebera.android.httpclient.HttpMessage> implements cz.msebera.android.httpclient.io.HttpMessageParser<T> {
    private static final int HEADERS = 1;
    private static final int HEAD_LINE = 0;
    private final java.util.List<cz.msebera.android.httpclient.util.CharArrayBuffer> headerLines;
    protected final cz.msebera.android.httpclient.message.LineParser lineParser;
    private T message;
    private final cz.msebera.android.httpclient.config.MessageConstraints messageConstraints;
    private final cz.msebera.android.httpclient.io.SessionInputBuffer sessionBuffer;
    private int state;

    public AbstractMessageParser(cz.msebera.android.httpclient.io.SessionInputBuffer r2, cz.msebera.android.httpclient.message.LineParser r3, cz.msebera.android.httpclient.config.MessageConstraints r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Session input buffer"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.io.SessionInputBuffer r2 = (cz.msebera.android.httpclient.io.SessionInputBuffer) r2
            r1.sessionBuffer = r2
            if (r3 == 0) goto L10
            goto L12
        L10:
            cz.msebera.android.httpclient.message.BasicLineParser r3 = cz.msebera.android.httpclient.message.BasicLineParser.INSTANCE
        L12:
            r1.lineParser = r3
            if (r4 == 0) goto L17
            goto L19
        L17:
            cz.msebera.android.httpclient.config.MessageConstraints r4 = cz.msebera.android.httpclient.config.MessageConstraints.DEFAULT
        L19:
            r1.messageConstraints = r4
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r1.headerLines = r2
            r2 = 0
            r1.state = r2
            return
    }

    @java.lang.Deprecated
    public AbstractMessageParser(cz.msebera.android.httpclient.io.SessionInputBuffer r2, cz.msebera.android.httpclient.message.LineParser r3, cz.msebera.android.httpclient.params.HttpParams r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Session input buffer"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            r1.sessionBuffer = r2
            cz.msebera.android.httpclient.config.MessageConstraints r2 = cz.msebera.android.httpclient.params.HttpParamConfig.getMessageConstraints(r4)
            r1.messageConstraints = r2
            if (r3 == 0) goto L18
            goto L1a
        L18:
            cz.msebera.android.httpclient.message.BasicLineParser r3 = cz.msebera.android.httpclient.message.BasicLineParser.INSTANCE
        L1a:
            r1.lineParser = r3
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r1.headerLines = r2
            r2 = 0
            r1.state = r2
            return
    }

    public static cz.msebera.android.httpclient.Header[] parseHeaders(cz.msebera.android.httpclient.io.SessionInputBuffer r1, int r2, int r3, cz.msebera.android.httpclient.message.LineParser r4) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            if (r4 == 0) goto L8
            goto La
        L8:
            cz.msebera.android.httpclient.message.BasicLineParser r4 = cz.msebera.android.httpclient.message.BasicLineParser.INSTANCE
        La:
            cz.msebera.android.httpclient.Header[] r1 = parseHeaders(r1, r2, r3, r4, r0)
            return r1
    }

    public static cz.msebera.android.httpclient.Header[] parseHeaders(cz.msebera.android.httpclient.io.SessionInputBuffer r8, int r9, int r10, cz.msebera.android.httpclient.message.LineParser r11, java.util.List<cz.msebera.android.httpclient.util.CharArrayBuffer> r12) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            java.lang.String r0 = "Session input buffer"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r0)
            java.lang.String r0 = "Line parser"
            cz.msebera.android.httpclient.util.Args.notNull(r11, r0)
            java.lang.String r0 = "Header line list"
            cz.msebera.android.httpclient.util.Args.notNull(r12, r0)
            r0 = 0
            r1 = r0
            r2 = r1
        L12:
            if (r1 != 0) goto L1c
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            r3 = 64
            r1.<init>(r3)
            goto L1f
        L1c:
            r1.clear()
        L1f:
            int r3 = r8.readLine(r1)
            r4 = -1
            r5 = 0
            if (r3 == r4) goto L8d
            int r3 = r1.length()
            r4 = 1
            if (r3 >= r4) goto L2f
            goto L8d
        L2f:
            char r3 = r1.charAt(r5)
            r6 = 9
            r7 = 32
            if (r3 == r7) goto L3f
            char r3 = r1.charAt(r5)
            if (r3 != r6) goto L77
        L3f:
            if (r2 == 0) goto L77
        L41:
            int r3 = r1.length()
            if (r5 >= r3) goto L53
            char r3 = r1.charAt(r5)
            if (r3 == r7) goto L50
            if (r3 == r6) goto L50
            goto L53
        L50:
            int r5 = r5 + 1
            goto L41
        L53:
            if (r10 <= 0) goto L6b
            int r3 = r2.length()
            int r3 = r3 + r4
            int r4 = r1.length()
            int r3 = r3 + r4
            int r3 = r3 - r5
            if (r3 > r10) goto L63
            goto L6b
        L63:
            cz.msebera.android.httpclient.MessageConstraintException r8 = new cz.msebera.android.httpclient.MessageConstraintException
            java.lang.String r9 = "Maximum line length limit exceeded"
            r8.<init>(r9)
            throw r8
        L6b:
            r2.append(r7)
            int r3 = r1.length()
            int r3 = r3 - r5
            r2.append(r1, r5, r3)
            goto L7c
        L77:
            r12.add(r1)
            r2 = r1
            r1 = r0
        L7c:
            if (r9 <= 0) goto L12
            int r3 = r12.size()
            if (r3 >= r9) goto L85
            goto L12
        L85:
            cz.msebera.android.httpclient.MessageConstraintException r8 = new cz.msebera.android.httpclient.MessageConstraintException
            java.lang.String r9 = "Maximum header count exceeded"
            r8.<init>(r9)
            throw r8
        L8d:
            int r8 = r12.size()
            cz.msebera.android.httpclient.Header[] r8 = new cz.msebera.android.httpclient.Header[r8]
        L93:
            int r9 = r12.size()
            if (r5 >= r9) goto Lb3
            java.lang.Object r9 = r12.get(r5)
            cz.msebera.android.httpclient.util.CharArrayBuffer r9 = (cz.msebera.android.httpclient.util.CharArrayBuffer) r9
            cz.msebera.android.httpclient.Header r9 = r11.parseHeader(r9)     // Catch: cz.msebera.android.httpclient.ParseException -> La8
            r8[r5] = r9     // Catch: cz.msebera.android.httpclient.ParseException -> La8
            int r5 = r5 + 1
            goto L93
        La8:
            r8 = move-exception
            cz.msebera.android.httpclient.ProtocolException r9 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.String r8 = r8.getMessage()
            r9.<init>(r8)
            throw r9
        Lb3:
            return r8
    }

    @Override
    public T parse() throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r5 = this;
            int r0 = r5.state
            r1 = 1
            if (r0 == 0) goto L10
            if (r0 != r1) goto L8
            goto L1a
        L8:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Inconsistent parser state"
            r0.<init>(r1)
            throw r0
        L10:
            cz.msebera.android.httpclient.io.SessionInputBuffer r0 = r5.sessionBuffer     // Catch: cz.msebera.android.httpclient.ParseException -> L43
            cz.msebera.android.httpclient.HttpMessage r0 = r5.parseHead(r0)     // Catch: cz.msebera.android.httpclient.ParseException -> L43
            r5.message = r0     // Catch: cz.msebera.android.httpclient.ParseException -> L43
            r5.state = r1
        L1a:
            cz.msebera.android.httpclient.io.SessionInputBuffer r0 = r5.sessionBuffer
            cz.msebera.android.httpclient.config.MessageConstraints r1 = r5.messageConstraints
            int r1 = r1.getMaxHeaderCount()
            cz.msebera.android.httpclient.config.MessageConstraints r2 = r5.messageConstraints
            int r2 = r2.getMaxLineLength()
            cz.msebera.android.httpclient.message.LineParser r3 = r5.lineParser
            java.util.List<cz.msebera.android.httpclient.util.CharArrayBuffer> r4 = r5.headerLines
            cz.msebera.android.httpclient.Header[] r0 = parseHeaders(r0, r1, r2, r3, r4)
            T extends cz.msebera.android.httpclient.HttpMessage r1 = r5.message
            r1.setHeaders(r0)
            T extends cz.msebera.android.httpclient.HttpMessage r0 = r5.message
            r1 = 0
            r5.message = r1
            java.util.List<cz.msebera.android.httpclient.util.CharArrayBuffer> r1 = r5.headerLines
            r1.clear()
            r1 = 0
            r5.state = r1
            return r0
        L43:
            r0 = move-exception
            cz.msebera.android.httpclient.ProtocolException r1 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.String r2 = r0.getMessage()
            r1.<init>(r2, r0)
            throw r1
    }

    protected abstract T parseHead(cz.msebera.android.httpclient.io.SessionInputBuffer r1) throws java.io.IOException, cz.msebera.android.httpclient.HttpException, cz.msebera.android.httpclient.ParseException;
}
