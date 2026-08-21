package com.huawei.hms.support.api;

public class ResolveResult<T> extends com.huawei.hms.support.api.client.Result {
    private T entity;

    public ResolveResult() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.entity = r0
            return
    }

    public ResolveResult(T r1) {
            r0 = this;
            r0.<init>()
            r0.entity = r1
            return
    }

    public T getValue() {
            r1 = this;
            T r0 = r1.entity
            return r0
    }
}
