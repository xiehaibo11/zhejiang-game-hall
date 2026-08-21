package org.cocos2dx.okhttp3;

public interface Connection {
    @javax.annotation.Nullable
    org.cocos2dx.okhttp3.Handshake handshake();

    org.cocos2dx.okhttp3.Protocol protocol();

    org.cocos2dx.okhttp3.Route route();

    java.net.Socket socket();
}
