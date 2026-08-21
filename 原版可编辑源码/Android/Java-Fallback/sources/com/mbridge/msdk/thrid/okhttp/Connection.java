package com.mbridge.msdk.thrid.okhttp;

public interface Connection {
    @javax.annotation.Nullable
    com.mbridge.msdk.thrid.okhttp.Handshake handshake();

    com.mbridge.msdk.thrid.okhttp.Protocol protocol();

    com.mbridge.msdk.thrid.okhttp.Route route();

    java.net.Socket socket();
}
