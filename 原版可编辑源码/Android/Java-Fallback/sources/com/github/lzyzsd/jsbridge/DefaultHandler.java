package com.github.lzyzsd.jsbridge;

public class DefaultHandler implements com.github.lzyzsd.jsbridge.BridgeHandler {
    java.lang.String TAG;

    public DefaultHandler() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "DefaultHandler"
            r1.TAG = r0
            return
    }

    @Override
    public void handler(java.lang.String r1, com.github.lzyzsd.jsbridge.CallBackFunction r2) {
            r0 = this;
            if (r2 == 0) goto L7
            java.lang.String r1 = "DefaultHandler response data"
            r2.onCallBack(r1)
        L7:
            return
    }
}
