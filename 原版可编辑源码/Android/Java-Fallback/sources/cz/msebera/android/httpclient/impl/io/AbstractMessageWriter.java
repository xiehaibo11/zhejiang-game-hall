package cz.msebera.android.httpclient.impl.io;

import cz.msebera.android.httpclient.HttpMessage;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public abstract class AbstractMessageWriter<T extends cz.msebera.android.httpclient.HttpMessage> implements cz.msebera.android.httpclient.io.HttpMessageWriter<T> {
    protected final cz.msebera.android.httpclient.util.CharArrayBuffer lineBuf;
    protected final cz.msebera.android.httpclient.message.LineFormatter lineFormatter;
    protected final cz.msebera.android.httpclient.io.SessionOutputBuffer sessionBuffer;

    public AbstractMessageWriter(cz.msebera.android.httpclient.io.SessionOutputBuffer r2, cz.msebera.android.httpclient.message.LineFormatter r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Session input buffer"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.io.SessionOutputBuffer r2 = (cz.msebera.android.httpclient.io.SessionOutputBuffer) r2
            r1.sessionBuffer = r2
            if (r3 == 0) goto L10
            goto L12
        L10:
            cz.msebera.android.httpclient.message.BasicLineFormatter r3 = cz.msebera.android.httpclient.message.BasicLineFormatter.INSTANCE
        L12:
            r1.lineFormatter = r3
            cz.msebera.android.httpclient.util.CharArrayBuffer r2 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            r3 = 128(0x80, float:1.8E-43)
            r2.<init>(r3)
            r1.lineBuf = r2
            return
    }

    @java.lang.Deprecated
    public AbstractMessageWriter(cz.msebera.android.httpclient.io.SessionOutputBuffer r1, cz.msebera.android.httpclient.message.LineFormatter r2, cz.msebera.android.httpclient.params.HttpParams r3) {
            r0 = this;
            r0.<init>()
            java.lang.String r3 = "Session input buffer"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r3)
            r0.sessionBuffer = r1
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            r3 = 128(0x80, float:1.8E-43)
            r1.<init>(r3)
            r0.lineBuf = r1
            if (r2 == 0) goto L16
            goto L18
        L16:
            cz.msebera.android.httpclient.message.BasicLineFormatter r2 = cz.msebera.android.httpclient.message.BasicLineFormatter.INSTANCE
        L18:
            r0.lineFormatter = r2
            return
    }

    @Override
    public void write(T r5) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r4 = this;
            java.lang.String r0 = "HTTP message"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            r4.writeHeadLine(r5)
            cz.msebera.android.httpclient.HeaderIterator r5 = r5.headerIterator()
        Lc:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L24
            cz.msebera.android.httpclient.Header r0 = r5.nextHeader()
            cz.msebera.android.httpclient.io.SessionOutputBuffer r1 = r4.sessionBuffer
            cz.msebera.android.httpclient.message.LineFormatter r2 = r4.lineFormatter
            cz.msebera.android.httpclient.util.CharArrayBuffer r3 = r4.lineBuf
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = r2.formatHeader(r3, r0)
            r1.writeLine(r0)
            goto Lc
        L24:
            cz.msebera.android.httpclient.util.CharArrayBuffer r5 = r4.lineBuf
            r5.clear()
            cz.msebera.android.httpclient.io.SessionOutputBuffer r5 = r4.sessionBuffer
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = r4.lineBuf
            r5.writeLine(r0)
            return
    }

    protected abstract void writeHeadLine(T r1) throws java.io.IOException;
}
