package com.huawei.hms.api;

public class IPCTransport implements com.huawei.hms.support.api.transport.DatagramTransport {
    private final java.lang.String a;
    private final com.huawei.hms.core.aidl.IMessageEntity b;
    private final java.lang.Class<? extends com.huawei.hms.core.aidl.IMessageEntity> c;
    private int d;

    public IPCTransport(java.lang.String r1, com.huawei.hms.core.aidl.IMessageEntity r2, java.lang.Class<? extends com.huawei.hms.core.aidl.IMessageEntity> r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            return
    }

    public IPCTransport(java.lang.String r1, com.huawei.hms.core.aidl.IMessageEntity r2, java.lang.Class<? extends com.huawei.hms.core.aidl.IMessageEntity> r3, int r4) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.d = r4
            return
    }

    private int a(com.huawei.hms.support.api.client.ApiClient r9, com.huawei.hms.core.aidl.c r10) {
            r8 = this;
            boolean r0 = r9 instanceof com.huawei.hms.api.HuaweiApiClientImpl
            r1 = 0
            java.lang.String r2 = "sync call ex:"
            java.lang.String r3 = "IPCTransport"
            r4 = 907135001(0x3611c819, float:2.1723156E-6)
            if (r0 == 0) goto L95
            com.huawei.hms.core.aidl.b r0 = new com.huawei.hms.core.aidl.b
            java.lang.String r5 = r8.a
            com.huawei.hms.api.ProtocolNegotiate r6 = com.huawei.hms.api.ProtocolNegotiate.getInstance()
            int r6 = r6.getVersion()
            r0.<init>(r5, r6)
            int r5 = r0.c()
            com.huawei.hms.core.aidl.e r5 = com.huawei.hms.core.aidl.a.a(r5)
            com.huawei.hms.core.aidl.IMessageEntity r6 = r8.b
            android.os.Bundle r7 = new android.os.Bundle
            r7.<init>()
            android.os.Bundle r6 = r5.a(r6, r7)
            r0.a(r6)
            com.huawei.hms.core.aidl.RequestHeader r6 = new com.huawei.hms.core.aidl.RequestHeader
            r6.<init>()
            java.lang.String r7 = r9.getAppID()
            r6.setAppID(r7)
            java.lang.String r7 = r9.getPackageName()
            r6.setPackageName(r7)
            r7 = 50300301(0x2ff858d, float:3.7545537E-37)
            r6.setSdkVersion(r7)
            r7 = r9
            com.huawei.hms.api.HuaweiApiClientImpl r7 = (com.huawei.hms.api.HuaweiApiClientImpl) r7
            java.util.List r7 = r7.getApiNameList()
            r6.setApiNameList(r7)
            java.lang.String r7 = r9.getSessionId()
            r6.setSessionId(r7)
            int r7 = r8.d
            r6.setApiLevel(r7)
            android.os.Bundle r7 = new android.os.Bundle
            r7.<init>()
            android.os.Bundle r5 = r5.a(r6, r7)
            r0.b = r5
            com.huawei.hms.api.HuaweiApiClientImpl r9 = (com.huawei.hms.api.HuaweiApiClientImpl) r9     // Catch: java.lang.Exception -> L81
            com.huawei.hms.core.aidl.d r5 = r9.getService()     // Catch: java.lang.Exception -> L81
            if (r5 != 0) goto L79
            java.lang.String r9 = "HuaweiApiClient is not binded to service yet."
            com.huawei.hms.support.log.HMSLog.e(r3, r9)     // Catch: java.lang.Exception -> L81
            return r4
        L79:
            com.huawei.hms.core.aidl.d r9 = r9.getService()     // Catch: java.lang.Exception -> L81
            r9.a(r0, r10)     // Catch: java.lang.Exception -> L81
            return r1
        L81:
            r9 = move-exception
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            r10.append(r2)
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            com.huawei.hms.support.log.HMSLog.e(r3, r9)
            return r4
        L95:
            boolean r0 = r9 instanceof com.huawei.hms.support.api.client.AidlApiClient
            if (r0 == 0) goto Ldb
            com.huawei.hms.support.api.client.AidlApiClient r9 = (com.huawei.hms.support.api.client.AidlApiClient) r9
            com.huawei.hms.api.ProtocolNegotiate r0 = com.huawei.hms.api.ProtocolNegotiate.getInstance()
            int r0 = r0.getVersion()
            com.huawei.hms.core.aidl.b r5 = new com.huawei.hms.core.aidl.b
            java.lang.String r6 = r8.a
            r5.<init>(r6, r0)
            int r0 = r5.c()
            com.huawei.hms.core.aidl.e r0 = com.huawei.hms.core.aidl.a.a(r0)
            com.huawei.hms.core.aidl.IMessageEntity r6 = r8.b
            android.os.Bundle r7 = new android.os.Bundle
            r7.<init>()
            android.os.Bundle r0 = r0.a(r6, r7)
            r5.a(r0)
            com.huawei.hms.core.aidl.d r9 = r9.getService()     // Catch: java.lang.Exception -> Lc8
            r9.a(r5, r10)     // Catch: java.lang.Exception -> Lc8
            return r1
        Lc8:
            r9 = move-exception
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            r10.append(r2)
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            com.huawei.hms.support.log.HMSLog.e(r3, r9)
        Ldb:
            return r4
    }

    @Override
    public final void post(com.huawei.hms.support.api.client.ApiClient r1, com.huawei.hms.support.api.transport.DatagramTransport.a r2) {
            r0 = this;
            r0.send(r1, r2)
            return
    }

    @Override
    public final void send(com.huawei.hms.support.api.client.ApiClient r3, com.huawei.hms.support.api.transport.DatagramTransport.a r4) {
            r2 = this;
            com.huawei.hms.api.IPCCallback r0 = new com.huawei.hms.api.IPCCallback
            java.lang.Class<? extends com.huawei.hms.core.aidl.IMessageEntity> r1 = r2.c
            r0.<init>(r1, r4)
            int r3 = r2.a(r3, r0)
            if (r3 == 0) goto L11
            r0 = 0
            r4.a(r3, r0)
        L11:
            return
    }
}
