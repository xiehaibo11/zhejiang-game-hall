package cz.msebera.android.httpclient.message;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public abstract class AbstractHttpMessage implements cz.msebera.android.httpclient.HttpMessage {
    protected cz.msebera.android.httpclient.message.HeaderGroup headergroup;

    @java.lang.Deprecated
    protected cz.msebera.android.httpclient.params.HttpParams params;

    protected AbstractHttpMessage() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    @java.lang.Deprecated
    protected AbstractHttpMessage(cz.msebera.android.httpclient.params.HttpParams r2) {
            r1 = this;
            r1.<init>()
            cz.msebera.android.httpclient.message.HeaderGroup r0 = new cz.msebera.android.httpclient.message.HeaderGroup
            r0.<init>()
            r1.headergroup = r0
            r1.params = r2
            return
    }

    @Override
    public void addHeader(cz.msebera.android.httpclient.Header r2) {
            r1 = this;
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r1.headergroup
            r0.addHeader(r2)
            return
    }

    @Override
    public void addHeader(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "Header name"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r2.headergroup
            cz.msebera.android.httpclient.message.BasicHeader r1 = new cz.msebera.android.httpclient.message.BasicHeader
            r1.<init>(r3, r4)
            r0.addHeader(r1)
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
    @java.lang.Deprecated
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
    public void removeHeader(cz.msebera.android.httpclient.Header r2) {
            r1 = this;
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r1.headergroup
            r0.removeHeader(r2)
            return
    }

    @Override
    public void removeHeaders(java.lang.String r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r2.headergroup
            cz.msebera.android.httpclient.HeaderIterator r0 = r0.iterator()
        L9:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L21
            cz.msebera.android.httpclient.Header r1 = r0.nextHeader()
            java.lang.String r1 = r1.getName()
            boolean r1 = r3.equalsIgnoreCase(r1)
            if (r1 == 0) goto L9
            r0.remove()
            goto L9
        L21:
            return
    }

    @Override
    public void setHeader(cz.msebera.android.httpclient.Header r2) {
            r1 = this;
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r1.headergroup
            r0.updateHeader(r2)
            return
    }

    @Override
    public void setHeader(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "Header name"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r2.headergroup
            cz.msebera.android.httpclient.message.BasicHeader r1 = new cz.msebera.android.httpclient.message.BasicHeader
            r1.<init>(r3, r4)
            r0.updateHeader(r1)
            return
    }

    @Override
    public void setHeaders(cz.msebera.android.httpclient.Header[] r2) {
            r1 = this;
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r1.headergroup
            r0.setHeaders(r2)
            return
    }

    @Override
    @java.lang.Deprecated
    public void setParams(cz.msebera.android.httpclient.params.HttpParams r2) {
            r1 = this;
            java.lang.String r0 = "HTTP parameters"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.params.HttpParams r2 = (cz.msebera.android.httpclient.params.HttpParams) r2
            r1.params = r2
            return
    }
}
