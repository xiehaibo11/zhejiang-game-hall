package com.huawei.hms.common.api;

public class BooleanResult extends com.huawei.hms.support.api.client.Result {
    private final com.huawei.hms.support.api.client.Status myStatus;
    private final boolean resultValue;

    public BooleanResult(com.huawei.hms.support.api.client.Status r2, boolean r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "status cannot be null"
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r2, r0)
            r1.myStatus = r2
            r1.resultValue = r3
            return
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.huawei.hms.common.api.BooleanResult
            r2 = 0
            if (r1 == 0) goto L22
            com.huawei.hms.common.api.BooleanResult r5 = (com.huawei.hms.common.api.BooleanResult) r5
            boolean r1 = r4.resultValue
            boolean r3 = r5.getValue()
            if (r1 != r3) goto L20
            com.huawei.hms.support.api.client.Status r1 = r4.myStatus
            com.huawei.hms.support.api.client.Status r5 = r5.getStatus()
            boolean r5 = r1.equals(r5)
            if (r5 == 0) goto L20
            goto L21
        L20:
            r0 = r2
        L21:
            return r0
        L22:
            return r2
    }

    @Override
    public com.huawei.hms.support.api.client.Status getStatus() {
            r1 = this;
            com.huawei.hms.support.api.client.Status r0 = r1.myStatus
            return r0
    }

    public boolean getValue() {
            r1 = this;
            boolean r0 = r1.resultValue
            return r0
    }

    public final int hashCode() {
            r2 = this;
            boolean r0 = r2.resultValue
            com.huawei.hms.support.api.client.Status r1 = r2.myStatus
            int r1 = r1.hashCode()
            int r1 = r1 + 127
            int r1 = r1 * 77
            int r0 = r0 + r1
            return r0
    }
}
