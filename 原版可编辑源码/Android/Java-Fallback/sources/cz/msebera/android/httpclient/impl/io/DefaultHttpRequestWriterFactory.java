package cz.msebera.android.httpclient.impl.io;

@cz.msebera.android.httpclient.annotation.Immutable
public class DefaultHttpRequestWriterFactory implements cz.msebera.android.httpclient.io.HttpMessageWriterFactory<cz.msebera.android.httpclient.HttpRequest> {
    public static final cz.msebera.android.httpclient.impl.io.DefaultHttpRequestWriterFactory INSTANCE = null;
    private final cz.msebera.android.httpclient.message.LineFormatter lineFormatter;

    static {
            cz.msebera.android.httpclient.impl.io.DefaultHttpRequestWriterFactory r0 = new cz.msebera.android.httpclient.impl.io.DefaultHttpRequestWriterFactory
            r0.<init>()
            cz.msebera.android.httpclient.impl.io.DefaultHttpRequestWriterFactory.INSTANCE = r0
            return
    }

    public DefaultHttpRequestWriterFactory() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public DefaultHttpRequestWriterFactory(cz.msebera.android.httpclient.message.LineFormatter r1) {
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
    public cz.msebera.android.httpclient.io.HttpMessageWriter<cz.msebera.android.httpclient.HttpRequest> create(cz.msebera.android.httpclient.io.SessionOutputBuffer r3) {
            r2 = this;
            cz.msebera.android.httpclient.impl.io.DefaultHttpRequestWriter r0 = new cz.msebera.android.httpclient.impl.io.DefaultHttpRequestWriter
            cz.msebera.android.httpclient.message.LineFormatter r1 = r2.lineFormatter
            r0.<init>(r3, r1)
            return r0
    }
}
