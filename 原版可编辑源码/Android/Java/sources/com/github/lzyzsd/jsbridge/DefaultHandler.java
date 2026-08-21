package com.github.lzyzsd.jsbridge;

public class DefaultHandler implements BridgeHandler {
    String TAG = "DefaultHandler";

    @Override
    public void handler(String str, CallBackFunction callBackFunction) {
        if (callBackFunction != null) {
            callBackFunction.onCallBack("DefaultHandler response data");
        }
    }
}
