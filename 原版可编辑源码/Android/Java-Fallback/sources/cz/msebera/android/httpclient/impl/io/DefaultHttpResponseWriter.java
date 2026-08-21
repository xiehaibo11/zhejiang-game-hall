package cz.msebera.android.httpclient.impl.io;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class DefaultHttpResponseWriter extends cz.msebera.android.httpclient.impl.io.AbstractMessageWriter<cz.msebera.android.httpclient.HttpResponse> {
    public DefaultHttpResponseWriter(cz.msebera.android.httpclient.io.SessionOutputBuffer r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public DefaultHttpResponseWriter(cz.msebera.android.httpclient.io.SessionOutputBuffer r1, cz.msebera.android.httpclient.message.LineFormatter r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    protected void writeHeadLine(cz.msebera.android.httpclient.HttpMessage r1) throws java.io.IOException {
            r0 = this;
            cz.msebera.android.httpclient.HttpResponse r1 = (cz.msebera.android.httpclient.HttpResponse) r1
            r0.writeHeadLine(r1)
            return
    }

    protected void writeHeadLine(cz.msebera.android.httpclient.HttpResponse r3) throws java.io.IOException {
            r2 = this;
            cz.msebera.android.httpclient.message.LineFormatter r0 = r2.lineFormatter
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = r2.lineBuf
            cz.msebera.android.httpclient.StatusLine r3 = r3.getStatusLine()
            r0.formatStatusLine(r1, r3)
            cz.msebera.android.httpclient.io.SessionOutputBuffer r3 = r2.sessionBuffer
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = r2.lineBuf
            r3.writeLine(r0)
            return
    }
}
