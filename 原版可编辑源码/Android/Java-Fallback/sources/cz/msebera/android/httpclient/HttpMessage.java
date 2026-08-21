package cz.msebera.android.httpclient;

public interface HttpMessage {
    void addHeader(cz.msebera.android.httpclient.Header r1);

    void addHeader(java.lang.String r1, java.lang.String r2);

    boolean containsHeader(java.lang.String r1);

    cz.msebera.android.httpclient.Header[] getAllHeaders();

    cz.msebera.android.httpclient.Header getFirstHeader(java.lang.String r1);

    cz.msebera.android.httpclient.Header[] getHeaders(java.lang.String r1);

    cz.msebera.android.httpclient.Header getLastHeader(java.lang.String r1);

    @java.lang.Deprecated
    cz.msebera.android.httpclient.params.HttpParams getParams();

    cz.msebera.android.httpclient.ProtocolVersion getProtocolVersion();

    cz.msebera.android.httpclient.HeaderIterator headerIterator();

    cz.msebera.android.httpclient.HeaderIterator headerIterator(java.lang.String r1);

    void removeHeader(cz.msebera.android.httpclient.Header r1);

    void removeHeaders(java.lang.String r1);

    void setHeader(cz.msebera.android.httpclient.Header r1);

    void setHeader(java.lang.String r1, java.lang.String r2);

    void setHeaders(cz.msebera.android.httpclient.Header[] r1);

    @java.lang.Deprecated
    void setParams(cz.msebera.android.httpclient.params.HttpParams r1);
}
