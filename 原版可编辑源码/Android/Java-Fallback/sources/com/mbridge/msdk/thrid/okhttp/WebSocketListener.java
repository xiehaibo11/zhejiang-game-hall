package com.mbridge.msdk.thrid.okhttp;

public abstract class WebSocketListener {
    public WebSocketListener() {
            r0 = this;
            r0.<init>()
            return
    }

    public void onClosed(com.mbridge.msdk.thrid.okhttp.WebSocket r1, int r2, java.lang.String r3) {
            r0 = this;
            return
    }

    public void onClosing(com.mbridge.msdk.thrid.okhttp.WebSocket r1, int r2, java.lang.String r3) {
            r0 = this;
            return
    }

    public void onFailure(com.mbridge.msdk.thrid.okhttp.WebSocket r1, java.lang.Throwable r2, @javax.annotation.Nullable com.mbridge.msdk.thrid.okhttp.Response r3) {
            r0 = this;
            return
    }

    public void onMessage(com.mbridge.msdk.thrid.okhttp.WebSocket r1, com.mbridge.msdk.thrid.okio.ByteString r2) {
            r0 = this;
            return
    }

    public void onMessage(com.mbridge.msdk.thrid.okhttp.WebSocket r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void onOpen(com.mbridge.msdk.thrid.okhttp.WebSocket r1, com.mbridge.msdk.thrid.okhttp.Response r2) {
            r0 = this;
            return
    }
}
