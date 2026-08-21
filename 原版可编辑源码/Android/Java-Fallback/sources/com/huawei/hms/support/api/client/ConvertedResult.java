package com.huawei.hms.support.api.client;

import com.huawei.hms.support.api.client.Result;

public abstract class ConvertedResult<R extends com.huawei.hms.support.api.client.Result> {
    public ConvertedResult() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract <S extends com.huawei.hms.support.api.client.Result> com.huawei.hms.support.api.client.ConvertedResult<S> convertResult(com.huawei.hms.support.api.client.ResultConvert<? super R, ? extends S> r1);

    public abstract void finalExec(com.huawei.hms.support.api.client.ResultCallbacks<? super R> r1);
}
