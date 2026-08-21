package com.huawei.hms.support.api.client;

import com.huawei.hms.support.api.client.Result;

@java.lang.Deprecated
public abstract class ResultCallbacks<R extends com.huawei.hms.support.api.client.Result> implements com.huawei.hms.support.api.client.ResultCallback<R> {
    public ResultCallbacks() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void onFailure(com.huawei.hms.support.api.client.Status r1);

    public final void onResult(R r4) {
            r3 = this;
            com.huawei.hms.support.api.client.Status r0 = r4.getStatus()     // Catch: java.lang.Exception -> L1c
            boolean r1 = r0.isSuccess()     // Catch: java.lang.Exception -> L1c
            if (r1 == 0) goto Le
            r3.onSuccess(r4)     // Catch: java.lang.Exception -> L1c
            goto L3b
        Le:
            r3.onFailure(r0)     // Catch: java.lang.Exception -> L1c
            boolean r0 = r4 instanceof com.huawei.hms.common.api.Releasable     // Catch: java.lang.Exception -> L1c
            if (r0 == 0) goto L3b
            r0 = r4
            com.huawei.hms.common.api.Releasable r0 = (com.huawei.hms.common.api.Releasable) r0     // Catch: java.lang.Exception -> L1c
            r0.release()     // Catch: java.lang.Exception -> L1c
            goto L3b
        L1c:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Failed to release "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = ", reason: "
            r1.append(r4)
            r1.append(r0)
            java.lang.String r4 = r1.toString()
            java.lang.String r0 = "ResultCallbacks"
            com.huawei.hms.support.log.HMSLog.w(r0, r4)
        L3b:
            return
    }

    @Override
    public void onResult(java.lang.Object r1) {
            r0 = this;
            com.huawei.hms.support.api.client.Result r1 = (com.huawei.hms.support.api.client.Result) r1
            r0.onResult(r1)
            return
    }

    public abstract void onSuccess(R r1);
}
