package cz.msebera.android.httpclient.impl.io;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public class HttpRequestWriter extends cz.msebera.android.httpclient.impl.io.AbstractMessageWriter<cz.msebera.android.httpclient.HttpRequest> {
    public HttpRequestWriter(cz.msebera.android.httpclient.io.SessionOutputBuffer r1, cz.msebera.android.httpclient.message.LineFormatter r2, cz.msebera.android.httpclient.params.HttpParams r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    protected void writeHeadLine(cz.msebera.android.httpclient.HttpMessage r1) throws java.io.IOException {
            r0 = this;
            cz.msebera.android.httpclient.HttpRequest r1 = (cz.msebera.android.httpclient.HttpRequest) r1
            r0.writeHeadLine(r1)
            return
    }

    protected void writeHeadLine(cz.msebera.android.httpclient.HttpRequest r3) throws java.io.IOException {
            r2 = this;
            cz.msebera.android.httpclient.message.LineFormatter r0 = r2.lineFormatter
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = r2.lineBuf
            cz.msebera.android.httpclient.RequestLine r3 = r3.getRequestLine()
            r0.formatRequestLine(r1, r3)
            cz.msebera.android.httpclient.io.SessionOutputBuffer r3 = r2.sessionBuffer
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = r2.lineBuf
            r3.writeLine(r0)
            return
    }
}
