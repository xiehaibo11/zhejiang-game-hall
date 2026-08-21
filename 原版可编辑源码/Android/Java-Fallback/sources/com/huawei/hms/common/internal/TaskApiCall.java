package com.huawei.hms.common.internal;

import com.huawei.hms.common.internal.AnyClient;

public abstract class TaskApiCall<ClientT extends com.huawei.hms.common.internal.AnyClient, ResultT> {
    private static final java.lang.String TAG = "TaskApiCall";
    private int apiLevel;
    private final java.lang.String mRequestJson;
    private final java.lang.String mUri;
    private android.os.Parcelable parcelable;
    private com.huawei.hmf.tasks.CancellationToken token;
    private java.lang.String transactionId;

    @java.lang.Deprecated
    public TaskApiCall(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.apiLevel = r0
            r1.mUri = r2
            r1.mRequestJson = r3
            r2 = 0
            r1.parcelable = r2
            r1.transactionId = r2
            return
    }

    public TaskApiCall(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.apiLevel = r0
            r1.mUri = r2
            r1.mRequestJson = r3
            r2 = 0
            r1.parcelable = r2
            r1.transactionId = r4
            return
    }

    public TaskApiCall(java.lang.String r2, java.lang.String r3, java.lang.String r4, int r5) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.apiLevel = r0
            r1.mUri = r2
            r1.mRequestJson = r3
            r2 = 0
            r1.parcelable = r2
            r1.transactionId = r4
            r1.apiLevel = r5
            return
    }

    protected abstract void doExecute(ClientT r1, com.huawei.hms.common.internal.ResponseErrorCode r2, java.lang.String r3, com.huawei.hmf.tasks.TaskCompletionSource<ResultT> r4);

    public int getApiLevel() {
            r1 = this;
            int r0 = r1.apiLevel
            return r0
    }

    @java.lang.Deprecated
    public int getMinApkVersion() {
            r1 = this;
            r0 = 30000000(0x1c9c380, float:7.411627E-38)
            return r0
    }

    public android.os.Parcelable getParcelable() {
            r1 = this;
            android.os.Parcelable r0 = r1.parcelable
            return r0
    }

    public java.lang.String getRequestJson() {
            r1 = this;
            java.lang.String r0 = r1.mRequestJson
            return r0
    }

    public com.huawei.hmf.tasks.CancellationToken getToken() {
            r1 = this;
            com.huawei.hmf.tasks.CancellationToken r0 = r1.token
            return r0
    }

    public java.lang.String getTransactionId() {
            r1 = this;
            java.lang.String r0 = r1.transactionId
            return r0
    }

    public java.lang.String getUri() {
            r1 = this;
            java.lang.String r0 = r1.mUri
            return r0
    }

    public final void onResponse(ClientT r2, com.huawei.hms.common.internal.ResponseErrorCode r3, java.lang.String r4, com.huawei.hmf.tasks.TaskCompletionSource<ResultT> r5) {
            r1 = this;
            com.huawei.hmf.tasks.CancellationToken r0 = r1.token
            if (r0 == 0) goto L2d
            boolean r0 = r0.isCancellationRequested()
            if (r0 == 0) goto L2d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "This Task has been canceled, uri:"
            r2.append(r3)
            java.lang.String r3 = r1.mUri
            r2.append(r3)
            java.lang.String r3 = ", transactionId:"
            r2.append(r3)
            java.lang.String r3 = r1.transactionId
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "TaskApiCall"
            com.huawei.hms.support.log.HMSLog.i(r3, r2)
            return
        L2d:
            r1.doExecute(r2, r3, r4, r5)
            return
    }

    public void setApiLevel(int r1) {
            r0 = this;
            r0.apiLevel = r1
            return
    }

    public void setParcelable(android.os.Parcelable r1) {
            r0 = this;
            r0.parcelable = r1
            return
    }

    public void setToken(com.huawei.hmf.tasks.CancellationToken r1) {
            r0 = this;
            r0.token = r1
            return
    }

    public void setTransactionId(java.lang.String r1) {
            r0 = this;
            r0.transactionId = r1
            return
    }
}
