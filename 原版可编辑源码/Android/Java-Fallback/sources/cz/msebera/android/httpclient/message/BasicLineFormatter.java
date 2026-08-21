package cz.msebera.android.httpclient.message;

@cz.msebera.android.httpclient.annotation.Immutable
public class BasicLineFormatter implements cz.msebera.android.httpclient.message.LineFormatter {

    @java.lang.Deprecated
    public static final cz.msebera.android.httpclient.message.BasicLineFormatter DEFAULT = null;
    public static final cz.msebera.android.httpclient.message.BasicLineFormatter INSTANCE = null;

    static {
            cz.msebera.android.httpclient.message.BasicLineFormatter r0 = new cz.msebera.android.httpclient.message.BasicLineFormatter
            r0.<init>()
            cz.msebera.android.httpclient.message.BasicLineFormatter.DEFAULT = r0
            cz.msebera.android.httpclient.message.BasicLineFormatter r0 = new cz.msebera.android.httpclient.message.BasicLineFormatter
            r0.<init>()
            cz.msebera.android.httpclient.message.BasicLineFormatter.INSTANCE = r0
            return
    }

    public BasicLineFormatter() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String formatHeader(cz.msebera.android.httpclient.Header r1, cz.msebera.android.httpclient.message.LineFormatter r2) {
            if (r2 == 0) goto L3
            goto L5
        L3:
            cz.msebera.android.httpclient.message.BasicLineFormatter r2 = cz.msebera.android.httpclient.message.BasicLineFormatter.INSTANCE
        L5:
            r0 = 0
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = r2.formatHeader(r0, r1)
            java.lang.String r1 = r1.toString()
            return r1
    }

    public static java.lang.String formatProtocolVersion(cz.msebera.android.httpclient.ProtocolVersion r1, cz.msebera.android.httpclient.message.LineFormatter r2) {
            if (r2 == 0) goto L3
            goto L5
        L3:
            cz.msebera.android.httpclient.message.BasicLineFormatter r2 = cz.msebera.android.httpclient.message.BasicLineFormatter.INSTANCE
        L5:
            r0 = 0
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = r2.appendProtocolVersion(r0, r1)
            java.lang.String r1 = r1.toString()
            return r1
    }

    public static java.lang.String formatRequestLine(cz.msebera.android.httpclient.RequestLine r1, cz.msebera.android.httpclient.message.LineFormatter r2) {
            if (r2 == 0) goto L3
            goto L5
        L3:
            cz.msebera.android.httpclient.message.BasicLineFormatter r2 = cz.msebera.android.httpclient.message.BasicLineFormatter.INSTANCE
        L5:
            r0 = 0
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = r2.formatRequestLine(r0, r1)
            java.lang.String r1 = r1.toString()
            return r1
    }

    public static java.lang.String formatStatusLine(cz.msebera.android.httpclient.StatusLine r1, cz.msebera.android.httpclient.message.LineFormatter r2) {
            if (r2 == 0) goto L3
            goto L5
        L3:
            cz.msebera.android.httpclient.message.BasicLineFormatter r2 = cz.msebera.android.httpclient.message.BasicLineFormatter.INSTANCE
        L5:
            r0 = 0
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = r2.formatStatusLine(r0, r1)
            java.lang.String r1 = r1.toString()
            return r1
    }

    @Override
    public cz.msebera.android.httpclient.util.CharArrayBuffer appendProtocolVersion(cz.msebera.android.httpclient.util.CharArrayBuffer r2, cz.msebera.android.httpclient.ProtocolVersion r3) {
            r1 = this;
            java.lang.String r0 = "Protocol version"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            int r0 = r1.estimateProtocolVersionLen(r3)
            if (r2 != 0) goto L11
            cz.msebera.android.httpclient.util.CharArrayBuffer r2 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            r2.<init>(r0)
            goto L14
        L11:
            r2.ensureCapacity(r0)
        L14:
            java.lang.String r0 = r3.getProtocol()
            r2.append(r0)
            r0 = 47
            r2.append(r0)
            int r0 = r3.getMajor()
            java.lang.String r0 = java.lang.Integer.toString(r0)
            r2.append(r0)
            r0 = 46
            r2.append(r0)
            int r3 = r3.getMinor()
            java.lang.String r3 = java.lang.Integer.toString(r3)
            r2.append(r3)
            return r2
    }

    protected void doFormatHeader(cz.msebera.android.httpclient.util.CharArrayBuffer r4, cz.msebera.android.httpclient.Header r5) {
            r3 = this;
            java.lang.String r0 = r5.getName()
            java.lang.String r5 = r5.getValue()
            int r1 = r0.length()
            int r1 = r1 + 2
            if (r5 == 0) goto L15
            int r2 = r5.length()
            int r1 = r1 + r2
        L15:
            r4.ensureCapacity(r1)
            r4.append(r0)
            java.lang.String r0 = ": "
            r4.append(r0)
            if (r5 == 0) goto L25
            r4.append(r5)
        L25:
            return
    }

    protected void doFormatRequestLine(cz.msebera.android.httpclient.util.CharArrayBuffer r5, cz.msebera.android.httpclient.RequestLine r6) {
            r4 = this;
            java.lang.String r0 = r6.getMethod()
            java.lang.String r1 = r6.getUri()
            int r2 = r0.length()
            int r2 = r2 + 1
            int r3 = r1.length()
            int r2 = r2 + r3
            int r2 = r2 + 1
            cz.msebera.android.httpclient.ProtocolVersion r3 = r6.getProtocolVersion()
            int r3 = r4.estimateProtocolVersionLen(r3)
            int r2 = r2 + r3
            r5.ensureCapacity(r2)
            r5.append(r0)
            r0 = 32
            r5.append(r0)
            r5.append(r1)
            r5.append(r0)
            cz.msebera.android.httpclient.ProtocolVersion r6 = r6.getProtocolVersion()
            r4.appendProtocolVersion(r5, r6)
            return
    }

    protected void doFormatStatusLine(cz.msebera.android.httpclient.util.CharArrayBuffer r4, cz.msebera.android.httpclient.StatusLine r5) {
            r3 = this;
            cz.msebera.android.httpclient.ProtocolVersion r0 = r5.getProtocolVersion()
            int r0 = r3.estimateProtocolVersionLen(r0)
            int r0 = r0 + 1
            int r0 = r0 + 3
            int r0 = r0 + 1
            java.lang.String r1 = r5.getReasonPhrase()
            if (r1 == 0) goto L19
            int r2 = r1.length()
            int r0 = r0 + r2
        L19:
            r4.ensureCapacity(r0)
            cz.msebera.android.httpclient.ProtocolVersion r0 = r5.getProtocolVersion()
            r3.appendProtocolVersion(r4, r0)
            r0 = 32
            r4.append(r0)
            int r5 = r5.getStatusCode()
            java.lang.String r5 = java.lang.Integer.toString(r5)
            r4.append(r5)
            r4.append(r0)
            if (r1 == 0) goto L3b
            r4.append(r1)
        L3b:
            return
    }

    protected int estimateProtocolVersionLen(cz.msebera.android.httpclient.ProtocolVersion r1) {
            r0 = this;
            java.lang.String r1 = r1.getProtocol()
            int r1 = r1.length()
            int r1 = r1 + 4
            return r1
    }

    @Override
    public cz.msebera.android.httpclient.util.CharArrayBuffer formatHeader(cz.msebera.android.httpclient.util.CharArrayBuffer r2, cz.msebera.android.httpclient.Header r3) {
            r1 = this;
            java.lang.String r0 = "Header"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            boolean r0 = r3 instanceof cz.msebera.android.httpclient.FormattedHeader
            if (r0 == 0) goto L10
            cz.msebera.android.httpclient.FormattedHeader r3 = (cz.msebera.android.httpclient.FormattedHeader) r3
            cz.msebera.android.httpclient.util.CharArrayBuffer r2 = r3.getBuffer()
            goto L17
        L10:
            cz.msebera.android.httpclient.util.CharArrayBuffer r2 = r1.initBuffer(r2)
            r1.doFormatHeader(r2, r3)
        L17:
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.util.CharArrayBuffer formatRequestLine(cz.msebera.android.httpclient.util.CharArrayBuffer r2, cz.msebera.android.httpclient.RequestLine r3) {
            r1 = this;
            java.lang.String r0 = "Request line"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.util.CharArrayBuffer r2 = r1.initBuffer(r2)
            r1.doFormatRequestLine(r2, r3)
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.util.CharArrayBuffer formatStatusLine(cz.msebera.android.httpclient.util.CharArrayBuffer r2, cz.msebera.android.httpclient.StatusLine r3) {
            r1 = this;
            java.lang.String r0 = "Status line"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.util.CharArrayBuffer r2 = r1.initBuffer(r2)
            r1.doFormatStatusLine(r2, r3)
            return r2
    }

    protected cz.msebera.android.httpclient.util.CharArrayBuffer initBuffer(cz.msebera.android.httpclient.util.CharArrayBuffer r2) {
            r1 = this;
            if (r2 == 0) goto L6
            r2.clear()
            goto Ld
        L6:
            cz.msebera.android.httpclient.util.CharArrayBuffer r2 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            r0 = 64
            r2.<init>(r0)
        Ld:
            return r2
    }
}
