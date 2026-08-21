package com.huawei.hms.common.internal;

import com.huawei.hms.common.internal.AnyClient;

public abstract class AbstractClientBuilder<TClient extends com.huawei.hms.common.internal.AnyClient, TOption> {
    public AbstractClientBuilder() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract TClient buildClient(android.content.Context r1, com.huawei.hms.common.internal.ClientSettings r2, com.huawei.hms.common.internal.BaseHmsClient.OnConnectionFailedListener r3, com.huawei.hms.common.internal.BaseHmsClient.ConnectionCallbacks r4);
}
