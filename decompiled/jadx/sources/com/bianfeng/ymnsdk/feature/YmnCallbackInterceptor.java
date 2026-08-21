package com.bianfeng.ymnsdk.feature;

/* JADX INFO: loaded from: classes.dex */
public class YmnCallbackInterceptor implements YmnCallback {
    private YmnCallback callback;

    protected final void setNext(YmnCallback callback) {
        this.callback = callback;
    }

    @Override // com.bianfeng.platform.PlatformSdkListener
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
