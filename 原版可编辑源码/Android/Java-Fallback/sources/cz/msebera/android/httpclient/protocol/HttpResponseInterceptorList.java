package cz.msebera.android.httpclient.protocol;

@java.lang.Deprecated
public interface HttpResponseInterceptorList {
    void addResponseInterceptor(cz.msebera.android.httpclient.HttpResponseInterceptor r1);

    void addResponseInterceptor(cz.msebera.android.httpclient.HttpResponseInterceptor r1, int r2);

    void clearResponseInterceptors();

    cz.msebera.android.httpclient.HttpResponseInterceptor getResponseInterceptor(int r1);

    int getResponseInterceptorCount();

    void removeResponseInterceptorByClass(java.lang.Class<? extends cz.msebera.android.httpclient.HttpResponseInterceptor> r1);

    void setInterceptors(java.util.List<?> r1);
}
