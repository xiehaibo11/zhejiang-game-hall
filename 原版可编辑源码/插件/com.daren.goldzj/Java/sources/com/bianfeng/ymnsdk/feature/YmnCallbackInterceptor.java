package com.bianfeng.ymnsdk.feature;

public class YmnCallbackInterceptor implements YmnCallback {
    private YmnCallback callback;

    public final void dispatchNext(int i, String str) {
        YmnCallback ymnCallback = this.callback;
        if (ymnCallback != null) {
            ymnCallback.onCallBack(i, str);
        }
    }

    @Override
    public void onCallBack(int i, String str) {
        dispatchNext(i, str);
    }

    protected final void setNext(YmnCallback ymnCallback) {
        this.callback = ymnCallback;
    }
}
