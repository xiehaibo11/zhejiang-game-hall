package cz.msebera.android.httpclient.protocol;

@java.lang.Deprecated
public interface HttpRequestInterceptorList {
    void addRequestInterceptor(cz.msebera.android.httpclient.HttpRequestInterceptor r1);

    void addRequestInterceptor(cz.msebera.android.httpclient.HttpRequestInterceptor r1, int r2);

    void clearRequestInterceptors();

    cz.msebera.android.httpclient.HttpRequestInterceptor getRequestInterceptor(int r1);

    int getRequestInterceptorCount();

    void removeRequestInterceptorByClass(java.lang.Class<? extends cz.msebera.android.httpclient.HttpRequestInterceptor> r1);

    void setInterceptors(java.util.List<?> r1);
}
