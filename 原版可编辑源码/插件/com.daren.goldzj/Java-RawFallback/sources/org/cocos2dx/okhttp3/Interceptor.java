package org.cocos2dx.okhttp3;

public interface Interceptor {

    public interface Chain {
        org.cocos2dx.okhttp3.Call call();

        int connectTimeoutMillis();

        @javax.annotation.Nullable
        org.cocos2dx.okhttp3.Connection connection();

        org.cocos2dx.okhttp3.Response proceed(org.cocos2dx.okhttp3.Request r1) throws java.io.IOException;

        int readTimeoutMillis();

        org.cocos2dx.okhttp3.Request request();

        org.cocos2dx.okhttp3.Interceptor.Chain withConnectTimeout(int r1, java.util.concurrent.TimeUnit r2);

        org.cocos2dx.okhttp3.Interceptor.Chain withReadTimeout(int r1, java.util.concurrent.TimeUnit r2);

        org.cocos2dx.okhttp3.Interceptor.Chain withWriteTimeout(int r1, java.util.concurrent.TimeUnit r2);

        int writeTimeoutMillis();
    }

    org.cocos2dx.okhttp3.Response intercept(org.cocos2dx.okhttp3.Interceptor.Chain r1) throws java.io.IOException;
}
