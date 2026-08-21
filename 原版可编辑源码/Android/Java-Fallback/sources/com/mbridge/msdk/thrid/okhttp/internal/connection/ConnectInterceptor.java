package com.mbridge.msdk.thrid.okhttp.internal.connection;

public final class ConnectInterceptor implements com.mbridge.msdk.thrid.okhttp.Interceptor {
    public final com.mbridge.msdk.thrid.okhttp.OkHttpClient client;

    public ConnectInterceptor(com.mbridge.msdk.thrid.okhttp.OkHttpClient r1) {
            r0 = this;
            r0.<init>()
            r0.client = r1
            return
    }

    @Override
    public com.mbridge.msdk.thrid.okhttp.Response intercept(com.mbridge.msdk.thrid.okhttp.Interceptor.Chain r6) throws java.io.IOException {
            r5 = this;
            r0 = r6
            com.mbridge.msdk.thrid.okhttp.internal.http.RealInterceptorChain r0 = (com.mbridge.msdk.thrid.okhttp.internal.http.RealInterceptorChain) r0
            com.mbridge.msdk.thrid.okhttp.Request r1 = r0.request()
            com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation r2 = r0.streamAllocation()
            java.lang.String r3 = r1.method()
            java.lang.String r4 = "GET"
            boolean r3 = r3.equals(r4)
            r3 = r3 ^ 1
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r4 = r5.client
            com.mbridge.msdk.thrid.okhttp.internal.http.HttpCodec r6 = r2.newStream(r4, r6, r3)
            com.mbridge.msdk.thrid.okhttp.internal.connection.RealConnection r3 = r2.connection()
            com.mbridge.msdk.thrid.okhttp.Response r6 = r0.proceed(r1, r2, r6, r3)
            return r6
    }
}
