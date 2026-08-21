package com.huawei.hms.support.api;

import com.huawei.hms.core.aidl.IMessageEntity;

public class ResolvePendingResult<T extends com.huawei.hms.core.aidl.IMessageEntity> extends com.huawei.hms.support.api.PendingResultImpl<com.huawei.hms.support.api.ResolveResult<T>, T> {
    protected ResolvePendingResult(com.huawei.hms.support.api.client.ApiClient r1, java.lang.String r2, com.huawei.hms.core.aidl.IMessageEntity r3, java.lang.Class<T> r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            return
    }

    public static <R extends com.huawei.hms.core.aidl.IMessageEntity> com.huawei.hms.support.api.ResolvePendingResult<R> build(com.huawei.hms.support.api.client.ApiClient r1, java.lang.String r2, com.huawei.hms.core.aidl.IMessageEntity r3, java.lang.Class<R> r4) {
            com.huawei.hms.support.api.ResolvePendingResult r0 = new com.huawei.hms.support.api.ResolvePendingResult
            r0.<init>(r1, r2, r3, r4)
            return r0
    }

    public T get() {
            r1 = this;
            com.huawei.hms.support.api.client.Result r0 = r1.await()
            com.huawei.hms.support.api.ResolveResult r0 = (com.huawei.hms.support.api.ResolveResult) r0
            java.lang.Object r0 = r0.getValue()
            com.huawei.hms.core.aidl.IMessageEntity r0 = (com.huawei.hms.core.aidl.IMessageEntity) r0
            return r0
    }

    @Override
    public com.huawei.hms.support.api.ResolveResult<T> onComplete(T r3) {
            r2 = this;
            com.huawei.hms.support.api.ResolveResult r0 = new com.huawei.hms.support.api.ResolveResult
            r0.<init>(r3)
            com.huawei.hms.support.api.client.Status r3 = new com.huawei.hms.support.api.client.Status
            r1 = 0
            r3.<init>(r1)
            r0.setStatus(r3)
            return r0
    }

    @Override
    public com.huawei.hms.support.api.client.Result onComplete(com.huawei.hms.core.aidl.IMessageEntity r1) {
            r0 = this;
            com.huawei.hms.support.api.ResolveResult r1 = r0.onComplete(r1)
            return r1
    }
}
