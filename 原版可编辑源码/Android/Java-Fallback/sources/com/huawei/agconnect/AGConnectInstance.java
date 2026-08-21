package com.huawei.agconnect;

public abstract class AGConnectInstance {
    public AGConnectInstance() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.huawei.agconnect.AGConnectInstance buildInstance(com.huawei.agconnect.AGConnectOptions r0) {
            com.huawei.agconnect.AGConnectInstance r0 = com.huawei.agconnect.core.a.a.a(r0)
            return r0
    }

    public static com.huawei.agconnect.AGConnectInstance getInstance() {
            com.huawei.agconnect.AGConnectInstance r0 = com.huawei.agconnect.core.a.a.a()
            return r0
    }

    public static com.huawei.agconnect.AGConnectInstance getInstance(java.lang.String r0) {
            com.huawei.agconnect.AGConnectInstance r0 = com.huawei.agconnect.core.a.a.a(r0)
            return r0
    }

    public static synchronized void initialize(android.content.Context r3) {
            java.lang.Class<com.huawei.agconnect.AGConnectInstance> r0 = com.huawei.agconnect.AGConnectInstance.class
            monitor-enter(r0)
            java.lang.String r1 = "AGConnectInstance"
            java.lang.String r2 = "AGConnectInstance#initialize"
            android.util.Log.i(r1, r2)     // Catch: java.lang.Throwable -> Lf
            com.huawei.agconnect.core.a.a.a(r3)     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r0)
            return
        Lf:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static synchronized void initialize(android.content.Context r3, com.huawei.agconnect.AGConnectOptionsBuilder r4) {
            java.lang.Class<com.huawei.agconnect.AGConnectInstance> r0 = com.huawei.agconnect.AGConnectInstance.class
            monitor-enter(r0)
            java.lang.String r1 = "AGConnectInstance"
            java.lang.String r2 = "AGConnectInstance#initialize with options"
            android.util.Log.i(r1, r2)     // Catch: java.lang.Throwable -> Lf
            com.huawei.agconnect.core.a.a.a(r3, r4)     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r0)
            return
        Lf:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public abstract android.content.Context getContext();

    public abstract java.lang.String getIdentifier();

    public abstract com.huawei.agconnect.AGConnectOptions getOptions();

    public abstract <T> T getService(java.lang.Class<? super T> r1);
}
