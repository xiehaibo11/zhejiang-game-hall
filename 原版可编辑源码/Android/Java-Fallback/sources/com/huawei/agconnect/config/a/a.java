package com.huawei.agconnect.config.a;

public class a extends com.huawei.agconnect.AGConnectApp {
    private static final java.util.Map<java.lang.String, com.huawei.agconnect.AGConnectApp> a = null;
    private static final java.lang.Object b = null;
    private static java.lang.String c;
    private com.huawei.agconnect.config.AGConnectServicesConfig d;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.huawei.agconnect.config.a.a.a = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.agconnect.config.a.a.b = r0
            return
    }

    private a(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            com.huawei.agconnect.config.AGConnectServicesConfig r1 = com.huawei.agconnect.config.AGConnectServicesConfig.fromContext(r1, r2)
            r0.d = r1
            return
    }

    public static com.huawei.agconnect.AGConnectApp a() {
            java.lang.String r0 = com.huawei.agconnect.config.a.a.c
            com.huawei.agconnect.AGConnectApp r0 = a(r0)
            return r0
    }

    public static com.huawei.agconnect.AGConnectApp a(android.content.Context r1) {
            android.content.Context r0 = r1.getApplicationContext()
            if (r0 != 0) goto L7
            goto L8
        L7:
            r1 = r0
        L8:
            java.lang.String r0 = r1.getPackageName()
            com.huawei.agconnect.config.a.a.c = r0
            com.huawei.agconnect.AGConnectApp r1 = a(r1, r0)
            return r1
    }

    public static com.huawei.agconnect.AGConnectApp a(android.content.Context r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L22
            java.lang.Object r0 = com.huawei.agconnect.config.a.a.b
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.huawei.agconnect.AGConnectApp> r1 = com.huawei.agconnect.config.a.a.a     // Catch: java.lang.Throwable -> L1f
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L1f
            com.huawei.agconnect.AGConnectApp r1 = (com.huawei.agconnect.AGConnectApp) r1     // Catch: java.lang.Throwable -> L1f
            if (r1 != 0) goto L1d
            com.huawei.agconnect.config.a.a r2 = new com.huawei.agconnect.config.a.a     // Catch: java.lang.Throwable -> L1f
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L1f
            java.util.Map<java.lang.String, com.huawei.agconnect.AGConnectApp> r3 = com.huawei.agconnect.config.a.a.a     // Catch: java.lang.Throwable -> L1f
            r3.put(r4, r2)     // Catch: java.lang.Throwable -> L1f
        L1d:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1f
            return r1
        L1f:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1f
            throw r3
        L22:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "packageName can not be empty"
            r3.<init>(r4)
            throw r3
    }

    public static com.huawei.agconnect.AGConnectApp a(java.lang.String r2) {
            java.lang.Object r0 = com.huawei.agconnect.config.a.a.b
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.huawei.agconnect.AGConnectApp> r1 = com.huawei.agconnect.config.a.a.a     // Catch: java.lang.Throwable -> L17
            java.lang.Object r2 = r1.get(r2)     // Catch: java.lang.Throwable -> L17
            com.huawei.agconnect.AGConnectApp r2 = (com.huawei.agconnect.AGConnectApp) r2     // Catch: java.lang.Throwable -> L17
            if (r2 == 0) goto Lf
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            return r2
        Lf:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L17
            java.lang.String r1 = "you should call AGConnectApp.initialize first"
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L17
            throw r2     // Catch: java.lang.Throwable -> L17
        L17:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r2
    }

    @Override
    public void setApiKey(java.lang.String r3) {
            r2 = this;
            com.huawei.agconnect.config.AGConnectServicesConfig r0 = r2.d
            java.lang.String r1 = "/client/api_key"
            r0.setParam(r1, r3)
            return
    }

    @Override
    public void setAppId(java.lang.String r3) {
            r2 = this;
            com.huawei.agconnect.config.AGConnectServicesConfig r0 = r2.d
            java.lang.String r1 = "/client/app_id"
            r0.setParam(r1, r3)
            return
    }

    @Override
    public void setClientId(java.lang.String r3) {
            r2 = this;
            com.huawei.agconnect.config.AGConnectServicesConfig r0 = r2.d
            java.lang.String r1 = "/client/client_id"
            r0.setParam(r1, r3)
            return
    }

    @Override
    public void setClientSecret(java.lang.String r3) {
            r2 = this;
            com.huawei.agconnect.config.AGConnectServicesConfig r0 = r2.d
            java.lang.String r1 = "/client/client_secret"
            r0.setParam(r1, r3)
            return
    }

    @Override
    public void setCpId(java.lang.String r3) {
            r2 = this;
            com.huawei.agconnect.config.AGConnectServicesConfig r0 = r2.d
            java.lang.String r1 = "/client/cp_id"
            r0.setParam(r1, r3)
            return
    }

    @Override
    public void setCustomAuthProvider(com.huawei.agconnect.CustomAuthProvider r2) {
            r1 = this;
            com.huawei.agconnect.AGConnectInstance r0 = com.huawei.agconnect.AGConnectInstance.getInstance()
            com.huawei.agconnect.core.a.a r0 = (com.huawei.agconnect.core.a.a) r0
            r0.a(r2)
            return
    }

    @Override
    public void setCustomCredentialsProvider(com.huawei.agconnect.CustomCredentialsProvider r2) {
            r1 = this;
            com.huawei.agconnect.AGConnectInstance r0 = com.huawei.agconnect.AGConnectInstance.getInstance()
            com.huawei.agconnect.core.a.a r0 = (com.huawei.agconnect.core.a.a) r0
            r0.a(r2)
            return
    }

    @Override
    public void setParam(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto Lc
            com.huawei.agconnect.config.AGConnectServicesConfig r0 = r1.d
            r0.setParam(r2, r3)
            return
        Lc:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "path can not be empty"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public void setProductId(java.lang.String r3) {
            r2 = this;
            com.huawei.agconnect.config.AGConnectServicesConfig r0 = r2.d
            java.lang.String r1 = "/client/product_id"
            r0.setParam(r1, r3)
            return
    }
}
