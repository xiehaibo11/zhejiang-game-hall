package org.cocos2dx.okhttp3;

public abstract class WebSocketListener {
    public WebSocketListener() {
            r0 = this;
            r0.<init>()
            return
    }

    public void onClosed(org.cocos2dx.okhttp3.WebSocket r1, int r2, java.lang.String r3) {
            r0 = this;
            return
    }

    public void onClosing(org.cocos2dx.okhttp3.WebSocket r1, int r2, java.lang.String r3) {
            r0 = this;
            return
    }

    public void onFailure(org.cocos2dx.okhttp3.WebSocket r1, java.lang.Throwable r2, @javax.annotation.Nullable org.cocos2dx.okhttp3.Response r3) {
            r0 = this;
            return
    }

    public void onMessage(org.cocos2dx.okhttp3.WebSocket r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void onMessage(org.cocos2dx.okhttp3.WebSocket r1, org.cocos2dx.okio.ByteString r2) {
            r0 = this;
            return
    }

    public void onOpen(org.cocos2dx.okhttp3.WebSocket r1, org.cocos2dx.okhttp3.Response r2) {
            r0 = this;
            return
    }
}
