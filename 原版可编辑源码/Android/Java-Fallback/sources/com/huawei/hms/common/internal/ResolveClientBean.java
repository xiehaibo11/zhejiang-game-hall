package com.huawei.hms.common.internal;

public class ResolveClientBean {
    private final int clientKey;
    private final com.huawei.hms.common.internal.AnyClient mClient;
    private int minSdkVersion;

    public ResolveClientBean(com.huawei.hms.common.internal.AnyClient r3, int r4) {
            r2 = this;
            r2.<init>()
            r2.mClient = r3
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            int r3 = com.huawei.hms.common.internal.Objects.hashCode(r0)
            r2.clientKey = r3
            r2.minSdkVersion = r4
            return
    }

    public void clientReconnect() {
            r3 = this;
            com.huawei.hms.common.internal.AnyClient r0 = r3.mClient
            int r1 = r3.minSdkVersion
            r2 = 1
            r0.connect(r1, r2)
            return
    }

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            if (r1 != r2) goto L4
            r2 = 1
            return r2
        L4:
            if (r2 == 0) goto L16
            boolean r0 = r2 instanceof com.huawei.hms.common.internal.ResolveClientBean
            if (r0 != 0) goto Lb
            goto L16
        Lb:
            com.huawei.hms.common.internal.ResolveClientBean r2 = (com.huawei.hms.common.internal.ResolveClientBean) r2
            com.huawei.hms.common.internal.AnyClient r0 = r1.mClient
            com.huawei.hms.common.internal.AnyClient r2 = r2.mClient
            boolean r2 = r0.equals(r2)
            return r2
        L16:
            r2 = 0
            return r2
    }

    public com.huawei.hms.common.internal.AnyClient getClient() {
            r1 = this;
            com.huawei.hms.common.internal.AnyClient r0 = r1.mClient
            return r0
    }

    public int hashCode() {
            r1 = this;
            int r0 = r1.clientKey
            return r0
    }
}
