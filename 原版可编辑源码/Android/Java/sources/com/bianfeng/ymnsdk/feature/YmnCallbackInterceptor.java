package com.bianfeng.ymnsdk.feature;

public class YmnCallbackInterceptor implements YmnCallback {
    private YmnCallback callback;

    protected final void setNext(YmnCallback callback) {
        this.callback = callback;
    }

    @Override
    public void onCallBack(int code, String msg) {
        dispatchNext(code, msg);
    }

    public final void dispatchNext(int code, String msg) {
        YmnCallback ymnCallback = this.callback;
        if (ymnCallback != null) {
            ymnCallback.onCallBack(code, msg);
        }
    }
}
