package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
class Proxies {
    Proxies() {
            r0 = this;
            r0.<init>()
            return
    }

    public static cz.msebera.android.httpclient.client.methods.CloseableHttpResponse enhanceResponse(cz.msebera.android.httpclient.HttpResponse r4) {
            java.lang.String r0 = "HTTP response"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            boolean r0 = r4 instanceof cz.msebera.android.httpclient.client.methods.CloseableHttpResponse
            if (r0 == 0) goto Lc
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r4 = (cz.msebera.android.httpclient.client.methods.CloseableHttpResponse) r4
            return r4
        Lc:
            java.lang.Class<cz.msebera.android.httpclient.impl.client.cache.ResponseProxyHandler> r0 = cz.msebera.android.httpclient.impl.client.cache.ResponseProxyHandler.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            r1 = 1
            java.lang.Class[] r1 = new java.lang.Class[r1]
            r2 = 0
            java.lang.Class<cz.msebera.android.httpclient.client.methods.CloseableHttpResponse> r3 = cz.msebera.android.httpclient.client.methods.CloseableHttpResponse.class
            r1[r2] = r3
            cz.msebera.android.httpclient.impl.client.cache.ResponseProxyHandler r2 = new cz.msebera.android.httpclient.impl.client.cache.ResponseProxyHandler
            r2.<init>(r4)
            java.lang.Object r4 = java.lang.reflect.Proxy.newProxyInstance(r0, r1, r2)
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r4 = (cz.msebera.android.httpclient.client.methods.CloseableHttpResponse) r4
            return r4
    }
}
