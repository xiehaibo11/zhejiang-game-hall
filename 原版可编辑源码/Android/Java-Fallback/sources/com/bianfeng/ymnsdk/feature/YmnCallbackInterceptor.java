package com.bianfeng.ymnsdk.feature;

public class YmnCallbackInterceptor implements com.bianfeng.ymnsdk.feature.YmnCallback {
    private com.bianfeng.ymnsdk.feature.YmnCallback callback;

    public YmnCallbackInterceptor() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void dispatchNext(int r2, java.lang.String r3) {
            r1 = this;
            com.bianfeng.ymnsdk.feature.YmnCallback r0 = r1.callback
            if (r0 == 0) goto L7
            r0.onCallBack(r2, r3)
        L7:
            return
    }

    @Override
    public void onCallBack(int r1, java.lang.String r2) {
            r0 = this;
            r0.dispatchNext(r1, r2)
            return
    }

    protected final void setNext(com.bianfeng.ymnsdk.feature.YmnCallback r1) {
            r0 = this;
            r0.callback = r1
            return
    }
}
