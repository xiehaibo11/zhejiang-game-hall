package com.mbridge.msdk.thrid.okhttp;

public abstract class EventListener {
    public static final com.mbridge.msdk.thrid.okhttp.EventListener NONE = null;



    public interface Factory {
        com.mbridge.msdk.thrid.okhttp.EventListener create(com.mbridge.msdk.thrid.okhttp.Call r1);
    }

    static {
            com.mbridge.msdk.thrid.okhttp.EventListener$1 r0 = new com.mbridge.msdk.thrid.okhttp.EventListener$1
            r0.<init>()
            com.mbridge.msdk.thrid.okhttp.EventListener.NONE = r0
            return
    }

    public EventListener() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.mbridge.msdk.thrid.okhttp.EventListener.Factory factory(com.mbridge.msdk.thrid.okhttp.EventListener r1) {
            com.mbridge.msdk.thrid.okhttp.EventListener$2 r0 = new com.mbridge.msdk.thrid.okhttp.EventListener$2
            r0.<init>(r1)
            return r0
    }

    public void callEnd(com.mbridge.msdk.thrid.okhttp.Call r1) {
            r0 = this;
            return
    }

    public void callFailed(com.mbridge.msdk.thrid.okhttp.Call r1, java.io.IOException r2) {
            r0 = this;
            return
    }

    public void callStart(com.mbridge.msdk.thrid.okhttp.Call r1) {
            r0 = this;
            return
    }

    public void connectEnd(com.mbridge.msdk.thrid.okhttp.Call r1, java.net.InetSocketAddress r2, java.net.Proxy r3, @javax.annotation.Nullable com.mbridge.msdk.thrid.okhttp.Protocol r4) {
            r0 = this;
            return
    }

    public void connectFailed(com.mbridge.msdk.thrid.okhttp.Call r1, java.net.InetSocketAddress r2, java.net.Proxy r3, @javax.annotation.Nullable com.mbridge.msdk.thrid.okhttp.Protocol r4, java.io.IOException r5) {
            r0 = this;
            return
    }

    public void connectStart(com.mbridge.msdk.thrid.okhttp.Call r1, java.net.InetSocketAddress r2, java.net.Proxy r3) {
            r0 = this;
            return
    }

    public void connectionAcquired(com.mbridge.msdk.thrid.okhttp.Call r1, com.mbridge.msdk.thrid.okhttp.Connection r2) {
            r0 = this;
            return
    }

    public void connectionReleased(com.mbridge.msdk.thrid.okhttp.Call r1, com.mbridge.msdk.thrid.okhttp.Connection r2) {
            r0 = this;
            return
    }

    public void dnsEnd(com.mbridge.msdk.thrid.okhttp.Call r1, java.lang.String r2, java.util.List<java.net.InetAddress> r3) {
            r0 = this;
            return
    }

    public void dnsStart(com.mbridge.msdk.thrid.okhttp.Call r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void requestBodyEnd(com.mbridge.msdk.thrid.okhttp.Call r1, long r2) {
            r0 = this;
            return
    }

    public void requestBodyStart(com.mbridge.msdk.thrid.okhttp.Call r1) {
            r0 = this;
            return
    }

    public void requestHeadersEnd(com.mbridge.msdk.thrid.okhttp.Call r1, com.mbridge.msdk.thrid.okhttp.Request r2) {
            r0 = this;
            return
    }

    public void requestHeadersStart(com.mbridge.msdk.thrid.okhttp.Call r1) {
            r0 = this;
            return
    }

    public void responseBodyEnd(com.mbridge.msdk.thrid.okhttp.Call r1, long r2) {
            r0 = this;
            return
    }

    public void responseBodyStart(com.mbridge.msdk.thrid.okhttp.Call r1) {
            r0 = this;
            return
    }

    public void responseHeadersEnd(com.mbridge.msdk.thrid.okhttp.Call r1, com.mbridge.msdk.thrid.okhttp.Response r2) {
            r0 = this;
            return
    }

    public void responseHeadersStart(com.mbridge.msdk.thrid.okhttp.Call r1) {
            r0 = this;
            return
    }

    public void secureConnectEnd(com.mbridge.msdk.thrid.okhttp.Call r1, @javax.annotation.Nullable com.mbridge.msdk.thrid.okhttp.Handshake r2) {
            r0 = this;
            return
    }

    public void secureConnectStart(com.mbridge.msdk.thrid.okhttp.Call r1) {
            r0 = this;
            return
    }
}
