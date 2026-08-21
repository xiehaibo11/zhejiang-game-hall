package com.huawei.hms.opendevice;

public class j implements java.util.concurrent.Callable<com.huawei.hms.aaid.entity.AAIDResult> {
    public android.content.Context a;

    public j(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public com.huawei.hms.aaid.entity.AAIDResult call() throws java.lang.Exception {
            r2 = this;
            android.content.Context r0 = r2.a
            if (r0 == 0) goto L11
            java.lang.String r0 = com.huawei.hms.opendevice.o.c(r0)
            com.huawei.hms.aaid.entity.AAIDResult r1 = new com.huawei.hms.aaid.entity.AAIDResult
            r1.<init>()
            r1.setId(r0)
            return r1
        L11:
            com.huawei.hms.aaid.constant.ErrorEnum r0 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_ARGUMENTS_INVALID
            com.huawei.hms.common.ApiException r0 = r0.toApiException()
            throw r0
    }

    @Override
    public com.huawei.hms.aaid.entity.AAIDResult call() throws java.lang.Exception {
            r1 = this;
            com.huawei.hms.aaid.entity.AAIDResult r0 = r1.call()
            return r0
    }
}
