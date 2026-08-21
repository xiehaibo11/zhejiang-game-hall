package cz.msebera.android.httpclient.impl.execchain;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
class HttpResponseProxy implements cz.msebera.android.httpclient.client.methods.CloseableHttpResponse {
    private final cz.msebera.android.httpclient.impl.execchain.ConnectionHolder connHolder;
    private final cz.msebera.android.httpclient.HttpResponse original;

    public HttpResponseProxy(cz.msebera.android.httpclient.HttpResponse r1, cz.msebera.android.httpclient.impl.execchain.ConnectionHolder r2) {
            r0 = this;
            r0.<init>()
            r0.original = r1
            r0.connHolder = r2
            cz.msebera.android.httpclient.impl.execchain.ResponseEntityProxy.enchance(r1, r2)
            return
    }

    @Override
    public void addHeader(cz.msebera.android.httpclient.Header r2) {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            r0.addHeader(r2)
            return
    }

    @Override
    public void addHeader(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            r0.addHeader(r2, r3)
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.impl.execchain.ConnectionHolder r0 = r1.connHolder
            if (r0 == 0) goto L7
            r0.abortConnection()
        L7:
            return
    }

    @Override
    public boolean containsHeader(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            boolean r2 = r0.containsHeader(r2)
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.Header[] getAllHeaders() {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            cz.msebera.android.httpclient.Header[] r0 = r0.getAllHeaders()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.HttpEntity getEntity() {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            cz.msebera.android.httpclient.HttpEntity r0 = r0.getEntity()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.Header getFirstHeader(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            cz.msebera.android.httpclient.Header r2 = r0.getFirstHeader(r2)
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.Header[] getHeaders(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            cz.msebera.android.httpclient.Header[] r2 = r0.getHeaders(r2)
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.Header getLastHeader(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            cz.msebera.android.httpclient.Header r2 = r0.getLastHeader(r2)
            return r2
    }

    @Override
    public java.util.Locale getLocale() {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            java.util.Locale r0 = r0.getLocale()
            return r0
    }

    @Override
    @java.lang.Deprecated
    public cz.msebera.android.httpclient.params.HttpParams getParams() {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            cz.msebera.android.httpclient.params.HttpParams r0 = r0.getParams()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.ProtocolVersion getProtocolVersion() {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            cz.msebera.android.httpclient.ProtocolVersion r0 = r0.getProtocolVersion()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.StatusLine getStatusLine() {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            cz.msebera.android.httpclient.StatusLine r0 = r0.getStatusLine()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.HeaderIterator headerIterator() {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            cz.msebera.android.httpclient.HeaderIterator r0 = r0.headerIterator()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.HeaderIterator headerIterator(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            cz.msebera.android.httpclient.HeaderIterator r2 = r0.headerIterator(r2)
            return r2
    }

    @Override
    public void removeHeader(cz.msebera.android.httpclient.Header r2) {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            r0.removeHeader(r2)
            return
    }

    @Override
    public void removeHeaders(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            r0.removeHeaders(r2)
            return
    }

    @Override
    public void setEntity(cz.msebera.android.httpclient.HttpEntity r2) {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            r0.setEntity(r2)
            return
    }

    @Override
    public void setHeader(cz.msebera.android.httpclient.Header r2) {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            r0.setHeader(r2)
            return
    }

    @Override
    public void setHeader(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            r0.setHeader(r2, r3)
            return
    }

    @Override
    public void setHeaders(cz.msebera.android.httpclient.Header[] r2) {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            r0.setHeaders(r2)
            return
    }

    @Override
    public void setLocale(java.util.Locale r2) {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            r0.setLocale(r2)
            return
    }

    @Override
    @java.lang.Deprecated
    public void setParams(cz.msebera.android.httpclient.params.HttpParams r2) {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            r0.setParams(r2)
            return
    }

    @Override
    public void setReasonPhrase(java.lang.String r2) throws java.lang.IllegalStateException {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            r0.setReasonPhrase(r2)
            return
    }

    @Override
    public void setStatusCode(int r2) throws java.lang.IllegalStateException {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            r0.setStatusCode(r2)
            return
    }

    @Override
    public void setStatusLine(cz.msebera.android.httpclient.ProtocolVersion r2, int r3) {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            r0.setStatusLine(r2, r3)
            return
    }

    @Override
    public void setStatusLine(cz.msebera.android.httpclient.ProtocolVersion r2, int r3, java.lang.String r4) {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            r0.setStatusLine(r2, r3, r4)
            return
    }

    @Override
    public void setStatusLine(cz.msebera.android.httpclient.StatusLine r2) {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            r0.setStatusLine(r2)
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "HttpResponseProxy{"
            r0.<init>(r1)
            cz.msebera.android.httpclient.HttpResponse r1 = r2.original
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
