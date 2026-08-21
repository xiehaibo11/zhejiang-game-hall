package com.mbridge.msdk.thrid.okhttp;

public interface Call extends java.lang.Cloneable {

    public interface Factory {
        com.mbridge.msdk.thrid.okhttp.Call newCall(com.mbridge.msdk.thrid.okhttp.Request r1);
    }

    void cancel();

    com.mbridge.msdk.thrid.okhttp.Call clone();

    void enqueue(com.mbridge.msdk.thrid.okhttp.Callback r1);

    com.mbridge.msdk.thrid.okhttp.Response execute() throws java.io.IOException;

    boolean isCanceled();

    boolean isExecuted();

    com.mbridge.msdk.thrid.okhttp.Request request();

    com.mbridge.msdk.thrid.okio.Timeout timeout();
}
