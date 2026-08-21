package com.huawei.hms.support.api.client;

import com.huawei.hms.support.api.client.Result;

public abstract class ResultConvert<R extends com.huawei.hms.support.api.client.Result, S extends com.huawei.hms.support.api.client.Result> {

    public class FailPendingResult extends com.huawei.hms.support.api.client.EmptyPendingResult {
        public FailPendingResult(com.huawei.hms.support.api.client.ResultConvert r1, com.huawei.hms.support.api.client.Status r2) {
                r0 = this;
                r0.<init>()
                r0.setResult(r2)
                return
        }
    }

    public ResultConvert() {
            r0 = this;
            r0.<init>()
            return
    }

    public final com.huawei.hms.support.api.client.PendingResult newFailedPendingResult(com.huawei.hms.support.api.client.Status r3) {
            r2 = this;
            java.lang.String r0 = "The input status cannot be null"
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r3, r0)
            boolean r0 = r3.isSuccess()
            r0 = r0 ^ 1
            java.lang.String r1 = "The input status must be call with success status"
            com.huawei.hms.common.internal.Preconditions.checkArgument(r0, r1)
            com.huawei.hms.support.api.client.ResultConvert$FailPendingResult r0 = new com.huawei.hms.support.api.client.ResultConvert$FailPendingResult
            r0.<init>(r2, r3)
            return r0
    }

    public com.huawei.hms.support.api.client.Status onFailed(com.huawei.hms.support.api.client.Status r2) {
            r1 = this;
            java.lang.String r0 = "The input status cannot be null"
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r2, r0)
            int r0 = r2.getStatusCode()
            if (r0 == 0) goto Lc
            return r2
        Lc:
            com.huawei.hms.support.api.client.Status r2 = com.huawei.hms.support.api.client.Status.CoreException
            return r2
    }

    public abstract com.huawei.hms.support.api.client.PendingResult onSuccess(com.huawei.hms.support.api.client.Result r1);
}
