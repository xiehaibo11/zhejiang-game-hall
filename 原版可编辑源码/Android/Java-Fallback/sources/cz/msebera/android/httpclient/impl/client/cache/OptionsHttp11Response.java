package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.Immutable
final class OptionsHttp11Response extends cz.msebera.android.httpclient.message.AbstractHttpMessage implements cz.msebera.android.httpclient.HttpResponse {
    private final cz.msebera.android.httpclient.StatusLine statusLine;
    private final cz.msebera.android.httpclient.ProtocolVersion version;

    OptionsHttp11Response() {
            r4 = this;
            r4.<init>()
            cz.msebera.android.httpclient.message.BasicStatusLine r0 = new cz.msebera.android.httpclient.message.BasicStatusLine
            cz.msebera.android.httpclient.HttpVersion r1 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            r2 = 501(0x1f5, float:7.02E-43)
            java.lang.String r3 = ""
            r0.<init>(r1, r2, r3)
            r4.statusLine = r0
            cz.msebera.android.httpclient.HttpVersion r0 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            r4.version = r0
            return
    }

    @Override
    public void addHeader(cz.msebera.android.httpclient.Header r1) {
            r0 = this;
            return
    }

    @Override
    public void addHeader(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public boolean containsHeader(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r1.headergroup
            boolean r2 = r0.containsHeader(r2)
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.Header[] getAllHeaders() {
            r1 = this;
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r1.headergroup
            cz.msebera.android.httpclient.Header[] r0 = r0.getAllHeaders()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.HttpEntity getEntity() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.Header getFirstHeader(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r1.headergroup
            cz.msebera.android.httpclient.Header r2 = r0.getFirstHeader(r2)
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.Header[] getHeaders(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r1.headergroup
            cz.msebera.android.httpclient.Header[] r2 = r0.getHeaders(r2)
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.Header getLastHeader(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r1.headergroup
            cz.msebera.android.httpclient.Header r2 = r0.getLastHeader(r2)
            return r2
    }

    @Override
    public java.util.Locale getLocale() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.params.HttpParams getParams() {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.params
            if (r0 != 0) goto Lb
            cz.msebera.android.httpclient.params.BasicHttpParams r0 = new cz.msebera.android.httpclient.params.BasicHttpParams
            r0.<init>()
            r1.params = r0
        Lb:
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.params
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.ProtocolVersion getProtocolVersion() {
            r1 = this;
            cz.msebera.android.httpclient.ProtocolVersion r0 = r1.version
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.StatusLine getStatusLine() {
            r1 = this;
            cz.msebera.android.httpclient.StatusLine r0 = r1.statusLine
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.HeaderIterator headerIterator() {
            r1 = this;
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r1.headergroup
            cz.msebera.android.httpclient.HeaderIterator r0 = r0.iterator()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.HeaderIterator headerIterator(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r1.headergroup
            cz.msebera.android.httpclient.HeaderIterator r2 = r0.iterator(r2)
            return r2
    }

    @Override
    public void removeHeader(cz.msebera.android.httpclient.Header r1) {
            r0 = this;
            return
    }

    @Override
    public void removeHeaders(java.lang.String r1) {
            r0 = this;
            return
    }

    @Override
    public void setEntity(cz.msebera.android.httpclient.HttpEntity r1) {
            r0 = this;
            return
    }

    @Override
    public void setHeader(cz.msebera.android.httpclient.Header r1) {
            r0 = this;
            return
    }

    @Override
    public void setHeader(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public void setHeaders(cz.msebera.android.httpclient.Header[] r1) {
            r0 = this;
            return
    }

    @Override
    public void setLocale(java.util.Locale r1) {
            r0 = this;
            return
    }

    @Override
    public void setParams(cz.msebera.android.httpclient.params.HttpParams r1) {
            r0 = this;
            return
    }

    @Override
    public void setReasonPhrase(java.lang.String r1) throws java.lang.IllegalStateException {
            r0 = this;
            return
    }

    @Override
    public void setStatusCode(int r1) throws java.lang.IllegalStateException {
            r0 = this;
            return
    }

    @Override
    public void setStatusLine(cz.msebera.android.httpclient.ProtocolVersion r1, int r2) {
            r0 = this;
            return
    }

    @Override
    public void setStatusLine(cz.msebera.android.httpclient.ProtocolVersion r1, int r2, java.lang.String r3) {
            r0 = this;
            return
    }

    @Override
    public void setStatusLine(cz.msebera.android.httpclient.StatusLine r1) {
            r0 = this;
            return
    }
}
