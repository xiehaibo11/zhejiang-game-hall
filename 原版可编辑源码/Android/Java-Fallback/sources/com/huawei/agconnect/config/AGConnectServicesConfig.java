package com.huawei.agconnect.config;

@java.lang.Deprecated
public abstract class AGConnectServicesConfig implements com.huawei.agconnect.AGConnectOptions {
    private static final java.util.Map<java.lang.String, com.huawei.agconnect.config.AGConnectServicesConfig> INSTANCES = null;
    private static final java.lang.Object INSTANCES_LOCK = null;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.huawei.agconnect.config.AGConnectServicesConfig.INSTANCES = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.agconnect.config.AGConnectServicesConfig.INSTANCES_LOCK = r0
            return
    }

    public AGConnectServicesConfig() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.huawei.agconnect.config.AGConnectServicesConfig fromContext(android.content.Context r1) {
            android.content.Context r0 = r1.getApplicationContext()
            if (r0 != 0) goto L7
            goto L8
        L7:
            r1 = r0
        L8:
            java.lang.String r0 = r1.getPackageName()
            com.huawei.agconnect.config.AGConnectServicesConfig r1 = fromContext(r1, r0)
            return r1
    }

    public static com.huawei.agconnect.config.AGConnectServicesConfig fromContext(android.content.Context r2, java.lang.String r3) {
            java.lang.Object r0 = com.huawei.agconnect.config.AGConnectServicesConfig.INSTANCES_LOCK
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.huawei.agconnect.config.AGConnectServicesConfig> r1 = com.huawei.agconnect.config.AGConnectServicesConfig.INSTANCES     // Catch: java.lang.Throwable -> L19
            java.lang.Object r1 = r1.get(r3)     // Catch: java.lang.Throwable -> L19
            com.huawei.agconnect.config.AGConnectServicesConfig r1 = (com.huawei.agconnect.config.AGConnectServicesConfig) r1     // Catch: java.lang.Throwable -> L19
            if (r1 != 0) goto L17
            com.huawei.agconnect.config.a.c r1 = new com.huawei.agconnect.config.a.c     // Catch: java.lang.Throwable -> L19
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L19
            java.util.Map<java.lang.String, com.huawei.agconnect.config.AGConnectServicesConfig> r2 = com.huawei.agconnect.config.AGConnectServicesConfig.INSTANCES     // Catch: java.lang.Throwable -> L19
            r2.put(r3, r1)     // Catch: java.lang.Throwable -> L19
        L17:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            return r1
        L19:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            throw r2
    }

    public abstract void overlayWith(com.huawei.agconnect.config.LazyInputStream r1);

    public abstract void overlayWith(java.io.InputStream r1);

    public abstract void setParam(java.lang.String r1, java.lang.String r2);

    public abstract void setRoutePolicy(com.huawei.agconnect.AGCRoutePolicy r1);
}
