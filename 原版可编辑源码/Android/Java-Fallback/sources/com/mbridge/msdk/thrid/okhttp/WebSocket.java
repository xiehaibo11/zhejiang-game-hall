package com.mbridge.msdk.thrid.okhttp;

public interface WebSocket {

    public interface Factory {
        com.mbridge.msdk.thrid.okhttp.WebSocket newWebSocket(com.mbridge.msdk.thrid.okhttp.Request r1, com.mbridge.msdk.thrid.okhttp.WebSocketListener r2);
    }

    void cancel();

    boolean close(int r1, @javax.annotation.Nullable java.lang.String r2);

    long queueSize();

    com.mbridge.msdk.thrid.okhttp.Request request();

    boolean send(com.mbridge.msdk.thrid.okio.ByteString r1);

    boolean send(java.lang.String r1);
}
