package com.huawei.hms.api;

public class IPCCallback extends com.huawei.hms.core.aidl.c.a {
    private final java.lang.Class<? extends com.huawei.hms.core.aidl.IMessageEntity> a;
    private final com.huawei.hms.support.api.transport.DatagramTransport.a b;

    public IPCCallback(java.lang.Class<? extends com.huawei.hms.core.aidl.IMessageEntity> r1, com.huawei.hms.support.api.transport.DatagramTransport.a r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    @Override
    public void call(com.huawei.hms.core.aidl.b r4) throws android.os.RemoteException {
            r3 = this;
            if (r4 == 0) goto L45
            java.lang.String r0 = r4.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L45
            int r0 = r4.c()
            com.huawei.hms.core.aidl.e r0 = com.huawei.hms.core.aidl.a.a(r0)
            r1 = 0
            int r2 = r4.b()
            if (r2 <= 0) goto L26
            com.huawei.hms.core.aidl.IMessageEntity r1 = r3.newResponseInstance()
            if (r1 == 0) goto L26
            android.os.Bundle r2 = r4.a()
            r0.a(r2, r1)
        L26:
            android.os.Bundle r2 = r4.b
            if (r2 == 0) goto L3e
            com.huawei.hms.core.aidl.ResponseHeader r2 = new com.huawei.hms.core.aidl.ResponseHeader
            r2.<init>()
            android.os.Bundle r4 = r4.b
            r0.a(r4, r2)
            com.huawei.hms.support.api.transport.DatagramTransport$a r4 = r3.b
            int r0 = r2.getStatusCode()
            r4.a(r0, r1)
            goto L44
        L3e:
            com.huawei.hms.support.api.transport.DatagramTransport$a r4 = r3.b
            r0 = 0
            r4.a(r0, r1)
        L44:
            return
        L45:
            java.lang.String r4 = "IPCCallback"
            java.lang.String r0 = "In call, URI cannot be empty."
            com.huawei.hms.support.log.HMSLog.e(r4, r0)
            android.os.RemoteException r4 = new android.os.RemoteException
            r4.<init>()
            throw r4
    }

    protected com.huawei.hms.core.aidl.IMessageEntity newResponseInstance() {
            r3 = this;
            java.lang.Class<? extends com.huawei.hms.core.aidl.IMessageEntity> r0 = r3.a
            if (r0 == 0) goto L28
            java.lang.Object r0 = r0.newInstance()     // Catch: java.lang.InstantiationException -> Lb java.lang.IllegalAccessException -> Ld
            com.huawei.hms.core.aidl.IMessageEntity r0 = (com.huawei.hms.core.aidl.IMessageEntity) r0     // Catch: java.lang.InstantiationException -> Lb java.lang.IllegalAccessException -> Ld
            return r0
        Lb:
            r0 = move-exception
            goto Le
        Ld:
            r0 = move-exception
        Le:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "In newResponseInstance, instancing exception."
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "IPCCallback"
            com.huawei.hms.support.log.HMSLog.e(r1, r0)
        L28:
            r0 = 0
            return r0
    }
}
