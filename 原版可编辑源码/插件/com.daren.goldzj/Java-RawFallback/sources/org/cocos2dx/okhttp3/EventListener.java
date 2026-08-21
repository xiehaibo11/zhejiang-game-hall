package org.cocos2dx.okhttp3;

public abstract class EventListener {
    public static final org.cocos2dx.okhttp3.EventListener NONE = null;



    public interface Factory {
        org.cocos2dx.okhttp3.EventListener create(org.cocos2dx.okhttp3.Call r1);
    }

    static {
            org.cocos2dx.okhttp3.EventListener$1 r0 = new org.cocos2dx.okhttp3.EventListener$1
            r0.<init>()
            org.cocos2dx.okhttp3.EventListener.NONE = r0
            return
    }

    public EventListener() {
            r0 = this;
            r0.<init>()
            return
    }

    static org.cocos2dx.okhttp3.EventListener.Factory factory(org.cocos2dx.okhttp3.EventListener r1) {
            org.cocos2dx.okhttp3.EventListener$2 r0 = new org.cocos2dx.okhttp3.EventListener$2
            r0.<init>(r1)
            return r0
    }

    public void callEnd(org.cocos2dx.okhttp3.Call r1) {
            r0 = this;
            return
    }

    public void callFailed(org.cocos2dx.okhttp3.Call r1, java.io.IOException r2) {
            r0 = this;
            return
    }

    public void callStart(org.cocos2dx.okhttp3.Call r1) {
            r0 = this;
            return
    }

    public void connectEnd(org.cocos2dx.okhttp3.Call r1, java.net.InetSocketAddress r2, java.net.Proxy r3, @javax.annotation.Nullable org.cocos2dx.okhttp3.Protocol r4) {
            r0 = this;
            return
    }

    public void connectFailed(org.cocos2dx.okhttp3.Call r1, java.net.InetSocketAddress r2, java.net.Proxy r3, @javax.annotation.Nullable org.cocos2dx.okhttp3.Protocol r4, java.io.IOException r5) {
            r0 = this;
            return
    }

    public void connectStart(org.cocos2dx.okhttp3.Call r1, java.net.InetSocketAddress r2, java.net.Proxy r3) {
            r0 = this;
            return
    }

    public void connectionAcquired(org.cocos2dx.okhttp3.Call r1, org.cocos2dx.okhttp3.Connection r2) {
            r0 = this;
            return
    }

    public void connectionReleased(org.cocos2dx.okhttp3.Call r1, org.cocos2dx.okhttp3.Connection r2) {
            r0 = this;
            return
    }

    public void dnsEnd(org.cocos2dx.okhttp3.Call r1, java.lang.String r2, java.util.List<java.net.InetAddress> r3) {
            r0 = this;
            return
    }

    public void dnsStart(org.cocos2dx.okhttp3.Call r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void requestBodyEnd(org.cocos2dx.okhttp3.Call r1, long r2) {
            r0 = this;
            return
    }

    public void requestBodyStart(org.cocos2dx.okhttp3.Call r1) {
            r0 = this;
            return
    }

    public void requestHeadersEnd(org.cocos2dx.okhttp3.Call r1, org.cocos2dx.okhttp3.Request r2) {
            r0 = this;
            return
    }

    public void requestHeadersStart(org.cocos2dx.okhttp3.Call r1) {
            r0 = this;
            return
    }

    public void responseBodyEnd(org.cocos2dx.okhttp3.Call r1, long r2) {
            r0 = this;
            return
    }

    public void responseBodyStart(org.cocos2dx.okhttp3.Call r1) {
            r0 = this;
            return
    }

    public void responseHeadersEnd(org.cocos2dx.okhttp3.Call r1, org.cocos2dx.okhttp3.Response r2) {
            r0 = this;
            return
    }

    public void responseHeadersStart(org.cocos2dx.okhttp3.Call r1) {
            r0 = this;
            return
    }

    public void secureConnectEnd(org.cocos2dx.okhttp3.Call r1, @javax.annotation.Nullable org.cocos2dx.okhttp3.Handshake r2) {
            r0 = this;
            return
    }

    public void secureConnectStart(org.cocos2dx.okhttp3.Call r1) {
            r0 = this;
            return
    }
}
