package com.bianfeng.ymnsdk.feature;

public class YmnCallbackInterceptor implements YmnCallback {
    private YmnCallback callback;

    public YmnCallbackInterceptor() {
    }

    public final void dispatchNext(int r2, String r3) {
        YmnCallback r0 = this.callback;
        if (r0 == null) goto L6;
        r0.onCallBack(r2, r3);
        return;
    }

    @Override
    public void onCallBack(int r1, String r2) {
        dispatchNext(r1, r2);
    }

    protected final void setNext(YmnCallback r1) {
        this.callback = r1;
    }
}
