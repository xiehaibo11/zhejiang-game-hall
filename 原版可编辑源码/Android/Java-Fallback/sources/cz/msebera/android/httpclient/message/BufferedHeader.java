package cz.msebera.android.httpclient.message;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class BufferedHeader implements cz.msebera.android.httpclient.FormattedHeader, java.lang.Cloneable, java.io.Serializable {
    private static final long serialVersionUID = -2768352615787625448L;
    private final cz.msebera.android.httpclient.util.CharArrayBuffer buffer;
    private final java.lang.String name;
    private final int valuePos;

    public BufferedHeader(cz.msebera.android.httpclient.util.CharArrayBuffer r5) throws cz.msebera.android.httpclient.ParseException {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = "Char array buffer"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            r0 = 58
            int r0 = r5.indexOf(r0)
            java.lang.String r1 = "Invalid header: "
            r2 = -1
            if (r0 == r2) goto L40
            r2 = 0
            java.lang.String r2 = r5.substringTrimmed(r2, r0)
            int r3 = r2.length()
            if (r3 == 0) goto L27
            r4.buffer = r5
            r4.name = r2
            int r0 = r0 + 1
            r4.valuePos = r0
            return
        L27:
            cz.msebera.android.httpclient.ParseException r0 = new cz.msebera.android.httpclient.ParseException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r5 = r5.toString()
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r0.<init>(r5)
            throw r0
        L40:
            cz.msebera.android.httpclient.ParseException r0 = new cz.msebera.android.httpclient.ParseException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r5 = r5.toString()
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r0.<init>(r5)
            throw r0
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            java.lang.Object r0 = super.clone()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.util.CharArrayBuffer getBuffer() {
            r1 = this;
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = r1.buffer
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.HeaderElement[] getElements() throws cz.msebera.android.httpclient.ParseException {
            r3 = this;
            cz.msebera.android.httpclient.message.ParserCursor r0 = new cz.msebera.android.httpclient.message.ParserCursor
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = r3.buffer
            int r1 = r1.length()
            r2 = 0
            r0.<init>(r2, r1)
            int r1 = r3.valuePos
            r0.updatePos(r1)
            cz.msebera.android.httpclient.message.BasicHeaderValueParser r1 = cz.msebera.android.httpclient.message.BasicHeaderValueParser.INSTANCE
            cz.msebera.android.httpclient.util.CharArrayBuffer r2 = r3.buffer
            cz.msebera.android.httpclient.HeaderElement[] r0 = r1.parseElements(r2, r0)
            return r0
    }

    @Override
    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }

    @Override
    public java.lang.String getValue() {
            r3 = this;
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = r3.buffer
            int r1 = r3.valuePos
            int r2 = r0.length()
            java.lang.String r0 = r0.substringTrimmed(r1, r2)
            return r0
    }

    @Override
    public int getValuePos() {
            r1 = this;
            int r0 = r1.valuePos
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = r1.buffer
            java.lang.String r0 = r0.toString()
            return r0
    }
}
