package cz.msebera.android.httpclient.impl.io;

@cz.msebera.android.httpclient.annotation.Immutable
public class DefaultHttpResponseWriterFactory implements cz.msebera.android.httpclient.io.HttpMessageWriterFactory<cz.msebera.android.httpclient.HttpResponse> {
    public static final cz.msebera.android.httpclient.impl.io.DefaultHttpResponseWriterFactory INSTANCE = null;
    private final cz.msebera.android.httpclient.message.LineFormatter lineFormatter;

    static {
            cz.msebera.android.httpclient.impl.io.DefaultHttpResponseWriterFactory r0 = new cz.msebera.android.httpclient.impl.io.DefaultHttpResponseWriterFactory
            r0.<init>()
            cz.msebera.android.httpclient.impl.io.DefaultHttpResponseWriterFactory.INSTANCE = r0
            return
    }

    public DefaultHttpResponseWriterFactory() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public DefaultHttpResponseWriterFactory(cz.msebera.android.httpclient.message.LineFormatter r1) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto L6
            goto L8
        L6:
            cz.msebera.android.httpclient.message.BasicLineFormatter r1 = cz.msebera.android.httpclient.message.BasicLineFormatter.INSTANCE
        L8:
            r0.lineFormatter = r1
            return
    }

    @Override
    public cz.msebera.android.httpclient.io.HttpMessageWriter<cz.msebera.android.httpclient.HttpResponse> create(cz.msebera.android.httpclient.io.SessionOutputBuffer r3) {
            r2 = this;
            cz.msebera.android.httpclient.impl.io.DefaultHttpResponseWriter r0 = new cz.msebera.android.httpclient.impl.io.DefaultHttpResponseWriter
            cz.msebera.android.httpclient.message.LineFormatter r1 = r2.lineFormatter
            r0.<init>(r3, r1)
            return r0
    }
}
