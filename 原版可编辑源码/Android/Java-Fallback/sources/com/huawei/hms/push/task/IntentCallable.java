package com.huawei.hms.push.task;

public class IntentCallable implements java.util.concurrent.Callable<java.lang.Void> {
    public android.content.Context a;
    public android.content.Intent b;
    public java.lang.String c;

    public IntentCallable(android.content.Context r1, android.content.Intent r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            return
    }

    @Override
    public java.lang.Void call() throws java.lang.Exception {
            r1 = this;
            java.lang.Void r0 = r1.call()
            return r0
    }

    @Override
    public java.lang.Void call() throws java.lang.Exception {
            r4 = this;
            android.content.Context r0 = r4.a
            android.content.Intent r1 = r4.b
            r0.sendBroadcast(r1)
            android.content.Context r0 = r4.a
            java.lang.String r1 = r4.c
            com.huawei.hms.aaid.constant.ErrorEnum r2 = com.huawei.hms.aaid.constant.ErrorEnum.SUCCESS
            java.lang.String r3 = "push.setNotifyFlag"
            com.huawei.hms.push.utils.PushBiUtil.reportExit(r0, r3, r1, r2)
            r0 = 0
            return r0
    }
}
