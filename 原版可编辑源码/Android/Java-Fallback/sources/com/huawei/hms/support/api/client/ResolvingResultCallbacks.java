package com.huawei.hms.support.api.client;

import com.huawei.hms.support.api.client.Result;

@java.lang.Deprecated
public abstract class ResolvingResultCallbacks<R extends com.huawei.hms.support.api.client.Result> extends com.huawei.hms.support.api.client.ResultCallbacks<R> {
    private final android.app.Activity a;
    private final int b;

    protected ResolvingResultCallbacks(android.app.Activity r2, int r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Activity must not be null"
            java.lang.Object r2 = com.huawei.hms.common.internal.Preconditions.checkNotNull(r2, r0)
            android.app.Activity r2 = (android.app.Activity) r2
            r1.a = r2
            r1.b = r3
            return
    }

    @Override
    public final void onFailure(com.huawei.hms.support.api.client.Status r3) {
            r2 = this;
            boolean r0 = r3.hasResolution()     // Catch: java.lang.Exception -> L12
            if (r0 == 0) goto Le
            android.app.Activity r0 = r2.a     // Catch: java.lang.Exception -> L12
            int r1 = r2.b     // Catch: java.lang.Exception -> L12
            r3.startResolutionForResult(r0, r1)     // Catch: java.lang.Exception -> L12
            goto L2e
        Le:
            r2.onUnresolvableFailure(r3)     // Catch: java.lang.Exception -> L12
            goto L2e
        L12:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Failed to start resolution: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "ResolvingResultCallbacks"
            com.huawei.hms.support.log.HMSLog.e(r0, r3)
            com.huawei.hms.support.api.client.Status r3 = com.huawei.hms.support.api.client.Status.RESULT_INTERNAL_ERROR
            r2.onUnresolvableFailure(r3)
        L2e:
            return
    }

    @Override
    public abstract void onSuccess(R r1);

    public abstract void onUnresolvableFailure(com.huawei.hms.support.api.client.Status r1);
}
