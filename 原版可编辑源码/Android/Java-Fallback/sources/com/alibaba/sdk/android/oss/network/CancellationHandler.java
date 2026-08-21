package com.alibaba.sdk.android.oss.network;

public class CancellationHandler {
    private volatile okhttp3.Call call;
    private volatile boolean isCancelled;

    public CancellationHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    public void cancel() {
            r1 = this;
            okhttp3.Call r0 = r1.call
            if (r0 == 0) goto L9
            okhttp3.Call r0 = r1.call
            r0.cancel()
        L9:
            r0 = 1
            r1.isCancelled = r0
            return
    }

    public boolean isCancelled() {
            r1 = this;
            boolean r0 = r1.isCancelled
            return r0
    }

    public void setCall(okhttp3.Call r1) {
            r0 = this;
            r0.call = r1
            return
    }
}
