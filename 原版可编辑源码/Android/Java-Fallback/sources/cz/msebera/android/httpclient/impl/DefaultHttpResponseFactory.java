package cz.msebera.android.httpclient.impl;

@cz.msebera.android.httpclient.annotation.Immutable
public class DefaultHttpResponseFactory implements cz.msebera.android.httpclient.HttpResponseFactory {
    public static final cz.msebera.android.httpclient.impl.DefaultHttpResponseFactory INSTANCE = null;
    protected final cz.msebera.android.httpclient.ReasonPhraseCatalog reasonCatalog;

    static {
            cz.msebera.android.httpclient.impl.DefaultHttpResponseFactory r0 = new cz.msebera.android.httpclient.impl.DefaultHttpResponseFactory
            r0.<init>()
            cz.msebera.android.httpclient.impl.DefaultHttpResponseFactory.INSTANCE = r0
            return
    }

    public DefaultHttpResponseFactory() {
            r1 = this;
            cz.msebera.android.httpclient.impl.EnglishReasonPhraseCatalog r0 = cz.msebera.android.httpclient.impl.EnglishReasonPhraseCatalog.INSTANCE
            r1.<init>(r0)
            return
    }

    public DefaultHttpResponseFactory(cz.msebera.android.httpclient.ReasonPhraseCatalog r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Reason phrase catalog"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.ReasonPhraseCatalog r2 = (cz.msebera.android.httpclient.ReasonPhraseCatalog) r2
            r1.reasonCatalog = r2
            return
    }

    protected java.util.Locale determineLocale(cz.msebera.android.httpclient.protocol.HttpContext r1) {
            r0 = this;
            java.util.Locale r1 = java.util.Locale.getDefault()
            return r1
    }

    @Override
    public cz.msebera.android.httpclient.HttpResponse newHttpResponse(cz.msebera.android.httpclient.ProtocolVersion r3, int r4, cz.msebera.android.httpclient.protocol.HttpContext r5) {
            r2 = this;
            java.lang.String r0 = "HTTP version"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.util.Locale r5 = r2.determineLocale(r5)
            cz.msebera.android.httpclient.ReasonPhraseCatalog r0 = r2.reasonCatalog
            java.lang.String r0 = r0.getReason(r4, r5)
            cz.msebera.android.httpclient.message.BasicStatusLine r1 = new cz.msebera.android.httpclient.message.BasicStatusLine
            r1.<init>(r3, r4, r0)
            cz.msebera.android.httpclient.message.BasicHttpResponse r3 = new cz.msebera.android.httpclient.message.BasicHttpResponse
            cz.msebera.android.httpclient.ReasonPhraseCatalog r4 = r2.reasonCatalog
            r3.<init>(r1, r4, r5)
            return r3
    }

    @Override
    public cz.msebera.android.httpclient.HttpResponse newHttpResponse(cz.msebera.android.httpclient.StatusLine r3, cz.msebera.android.httpclient.protocol.HttpContext r4) {
            r2 = this;
            java.lang.String r0 = "Status line"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.message.BasicHttpResponse r0 = new cz.msebera.android.httpclient.message.BasicHttpResponse
            cz.msebera.android.httpclient.ReasonPhraseCatalog r1 = r2.reasonCatalog
            java.util.Locale r4 = r2.determineLocale(r4)
            r0.<init>(r3, r1, r4)
            return r0
    }
}
