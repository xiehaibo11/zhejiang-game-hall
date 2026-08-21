package com.mbridge.msdk.thrid.okhttp;

public interface Interceptor {

    public interface Chain {
        com.mbridge.msdk.thrid.okhttp.Call call();

        int connectTimeoutMillis();

        @javax.annotation.Nullable
        com.mbridge.msdk.thrid.okhttp.Connection connection();

        com.mbridge.msdk.thrid.okhttp.Response proceed(com.mbridge.msdk.thrid.okhttp.Request r1) throws java.io.IOException;

        int readTimeoutMillis();

        com.mbridge.msdk.thrid.okhttp.Request request();

        com.mbridge.msdk.thrid.okhttp.Interceptor.Chain withConnectTimeout(int r1, java.util.concurrent.TimeUnit r2);

        com.mbridge.msdk.thrid.okhttp.Interceptor.Chain withReadTimeout(int r1, java.util.concurrent.TimeUnit r2);

        com.mbridge.msdk.thrid.okhttp.Interceptor.Chain withWriteTimeout(int r1, java.util.concurrent.TimeUnit r2);

        int writeTimeoutMillis();
    }

    com.mbridge.msdk.thrid.okhttp.Response intercept(com.mbridge.msdk.thrid.okhttp.Interceptor.Chain r1) throws java.io.IOException;
}
