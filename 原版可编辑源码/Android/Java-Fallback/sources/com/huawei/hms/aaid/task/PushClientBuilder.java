package com.huawei.hms.aaid.task;

public class PushClientBuilder extends com.huawei.hms.common.internal.AbstractClientBuilder<com.huawei.hms.aaid.task.PushClient, com.huawei.hms.api.Api.ApiOptions.NoOptions> {
    public PushClientBuilder() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public com.huawei.hms.aaid.task.PushClient buildClient(android.content.Context r3, com.huawei.hms.common.internal.ClientSettings r4, com.huawei.hms.common.internal.BaseHmsClient.OnConnectionFailedListener r5, com.huawei.hms.common.internal.BaseHmsClient.ConnectionCallbacks r6) {
            r2 = this;
            java.lang.String r0 = "HuaweiPush.API"
            java.lang.String r1 = "Core.API"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            java.util.List r0 = java.util.Arrays.asList(r0)
            r4.setApiName(r0)
            com.huawei.hms.aaid.task.PushClient r0 = new com.huawei.hms.aaid.task.PushClient
            r0.<init>(r3, r4, r5, r6)
            return r0
    }

    @Override
    public com.huawei.hms.common.internal.AnyClient buildClient(android.content.Context r1, com.huawei.hms.common.internal.ClientSettings r2, com.huawei.hms.common.internal.BaseHmsClient.OnConnectionFailedListener r3, com.huawei.hms.common.internal.BaseHmsClient.ConnectionCallbacks r4) {
            r0 = this;
            com.huawei.hms.aaid.task.PushClient r1 = r0.buildClient(r1, r2, r3, r4)
            return r1
    }
}
