package org.cocos2dx.okhttp3;

public interface WebSocket {

    public interface Factory {
        org.cocos2dx.okhttp3.WebSocket newWebSocket(org.cocos2dx.okhttp3.Request r1, org.cocos2dx.okhttp3.WebSocketListener r2);
    }

    void cancel();

    boolean close(int r1, @javax.annotation.Nullable java.lang.String r2);

    long queueSize();

    org.cocos2dx.okhttp3.Request request();

    boolean send(java.lang.String r1);

    boolean send(org.cocos2dx.okio.ByteString r1);
}
