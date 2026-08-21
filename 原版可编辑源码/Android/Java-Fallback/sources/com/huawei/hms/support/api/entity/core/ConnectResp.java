package com.huawei.hms.support.api.entity.core;

public class ConnectResp implements com.huawei.hms.core.aidl.IMessageEntity {

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.util.List<java.lang.Integer> protocolVersion;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String sessionId;

    public ConnectResp() {
            r5 = this;
            r5.<init>()
            r0 = 2
            java.lang.Integer[] r1 = new java.lang.Integer[r0]
            r2 = 1
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)
            r4 = 0
            r1[r4] = r3
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r1[r2] = r0
            java.util.List r0 = java.util.Arrays.asList(r1)
            r5.protocolVersion = r0
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "protocol version:"
            r0.<init>(r1)
            java.util.List<java.lang.Integer> r1 = r3.protocolVersion
            java.util.Iterator r1 = r1.iterator()
        Ld:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L22
            java.lang.Object r2 = r1.next()
            java.lang.Integer r2 = (java.lang.Integer) r2
            r0.append(r2)
            r2 = 44
            r0.append(r2)
            goto Ld
        L22:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
