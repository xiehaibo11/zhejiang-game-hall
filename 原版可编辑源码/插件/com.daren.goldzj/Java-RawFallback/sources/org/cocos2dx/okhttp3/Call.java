package org.cocos2dx.okhttp3;

public interface Call extends java.lang.Cloneable {

    public interface Factory {
        org.cocos2dx.okhttp3.Call newCall(org.cocos2dx.okhttp3.Request r1);
    }

    void cancel();

    org.cocos2dx.okhttp3.Call clone();

    void enqueue(org.cocos2dx.okhttp3.Callback r1);

    org.cocos2dx.okhttp3.Response execute() throws java.io.IOException;

    boolean isCanceled();

    boolean isExecuted();

    org.cocos2dx.okhttp3.Request request();

    org.cocos2dx.okio.Timeout timeout();
}
