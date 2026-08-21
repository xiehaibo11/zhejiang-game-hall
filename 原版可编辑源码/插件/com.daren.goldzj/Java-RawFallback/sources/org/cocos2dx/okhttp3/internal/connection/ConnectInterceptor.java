package org.cocos2dx.okhttp3.internal.connection;

public final class ConnectInterceptor implements org.cocos2dx.okhttp3.Interceptor {
    public final org.cocos2dx.okhttp3.OkHttpClient client;

    public ConnectInterceptor(org.cocos2dx.okhttp3.OkHttpClient r1) {
            r0 = this;
            r0.<init>()
            r0.client = r1
            return
    }

    @Override
    public org.cocos2dx.okhttp3.Response intercept(org.cocos2dx.okhttp3.Interceptor.Chain r6) throws java.io.IOException {
            r5 = this;
            r0 = r6
            org.cocos2dx.okhttp3.internal.http.RealInterceptorChain r0 = (org.cocos2dx.okhttp3.internal.http.RealInterceptorChain) r0
            org.cocos2dx.okhttp3.Request r1 = r0.request()
            org.cocos2dx.okhttp3.internal.connection.StreamAllocation r2 = r0.streamAllocation()
            java.lang.String r3 = r1.method()
            java.lang.String r4 = "GET"
            boolean r3 = r3.equals(r4)
            r3 = r3 ^ 1
            org.cocos2dx.okhttp3.OkHttpClient r4 = r5.client
            org.cocos2dx.okhttp3.internal.http.HttpCodec r6 = r2.newStream(r4, r6, r3)
            org.cocos2dx.okhttp3.internal.connection.RealConnection r3 = r2.connection()
            org.cocos2dx.okhttp3.Response r6 = r0.proceed(r1, r2, r6, r3)
            return r6
    }
}
