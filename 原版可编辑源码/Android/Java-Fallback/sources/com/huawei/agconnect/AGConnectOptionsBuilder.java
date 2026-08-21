package com.huawei.agconnect;

public final class AGConnectOptionsBuilder {
    private static final java.lang.String API_KEY_PATH = "/client/api_key";
    private static final java.lang.String APP_ID_PATH = "/client/app_id";
    private static final java.lang.String CLIENT_ID_PATH = "/client/client_id";
    private static final java.lang.String CLIENT_SECRET_PATH = "/client/client_secret";
    private static final java.lang.String CP_ID_PATH = "/client/cp_id";
    private static final java.lang.String PRODUCT_ID_PATH = "/client/product_id";
    private final java.util.Map<java.lang.String, java.lang.String> customConfigMap;
    private final java.util.List<com.huawei.agconnect.core.Service> customServices;
    private java.io.InputStream inputStream;
    private java.lang.String packageName;
    private com.huawei.agconnect.AGCRoutePolicy routePolicy;



    public AGConnectOptionsBuilder() {
            r1 = this;
            r1.<init>()
            com.huawei.agconnect.AGCRoutePolicy r0 = com.huawei.agconnect.AGCRoutePolicy.UNKNOWN
            r1.routePolicy = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.customConfigMap = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.customServices = r0
            return
    }

    public com.huawei.agconnect.AGConnectOptions build(android.content.Context r10) {
            r9 = this;
            com.huawei.agconnect.config.a.b r8 = new com.huawei.agconnect.config.a.b
            java.lang.String r2 = r9.packageName
            com.huawei.agconnect.AGCRoutePolicy r3 = r9.routePolicy
            java.io.InputStream r4 = r9.inputStream
            java.util.Map<java.lang.String, java.lang.String> r5 = r9.customConfigMap
            java.util.List<com.huawei.agconnect.core.Service> r6 = r9.customServices
            r7 = 0
            r0 = r8
            r1 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return r8
    }

    public com.huawei.agconnect.AGConnectOptions build(android.content.Context r10, java.lang.String r11) {
            r9 = this;
            com.huawei.agconnect.config.a.b r8 = new com.huawei.agconnect.config.a.b
            java.lang.String r2 = r9.packageName
            com.huawei.agconnect.AGCRoutePolicy r3 = r9.routePolicy
            java.io.InputStream r4 = r9.inputStream
            java.util.Map<java.lang.String, java.lang.String> r5 = r9.customConfigMap
            java.util.List<com.huawei.agconnect.core.Service> r6 = r9.customServices
            r0 = r8
            r1 = r10
            r7 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return r8
    }

    public com.huawei.agconnect.AGConnectOptionsBuilder setApiKey(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.customConfigMap
            java.lang.String r1 = "/client/api_key"
            r0.put(r1, r3)
            return r2
    }

    public com.huawei.agconnect.AGConnectOptionsBuilder setAppId(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.customConfigMap
            java.lang.String r1 = "/client/app_id"
            r0.put(r1, r3)
            return r2
    }

    public com.huawei.agconnect.AGConnectOptionsBuilder setCPId(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.customConfigMap
            java.lang.String r1 = "/client/cp_id"
            r0.put(r1, r3)
            return r2
    }

    public com.huawei.agconnect.AGConnectOptionsBuilder setClientId(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.customConfigMap
            java.lang.String r1 = "/client/client_id"
            r0.put(r1, r3)
            return r2
    }

    public com.huawei.agconnect.AGConnectOptionsBuilder setClientSecret(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.customConfigMap
            java.lang.String r1 = "/client/client_secret"
            r0.put(r1, r3)
            return r2
    }

    public com.huawei.agconnect.AGConnectOptionsBuilder setCustomAuthProvider(com.huawei.agconnect.CustomAuthProvider r3) {
            r2 = this;
            if (r3 == 0) goto L16
            java.lang.Class<com.huawei.agconnect.core.service.auth.AuthProvider> r0 = com.huawei.agconnect.core.service.auth.AuthProvider.class
            com.huawei.agconnect.AGConnectOptionsBuilder$2 r1 = new com.huawei.agconnect.AGConnectOptionsBuilder$2
            r1.<init>(r2, r3)
            com.huawei.agconnect.core.Service$Builder r3 = com.huawei.agconnect.core.Service.builder(r0, r1)
            com.huawei.agconnect.core.Service r3 = r3.build()
            java.util.List<com.huawei.agconnect.core.Service> r0 = r2.customServices
            r0.add(r3)
        L16:
            return r2
    }

    public com.huawei.agconnect.AGConnectOptionsBuilder setCustomCredentialProvider(com.huawei.agconnect.CustomCredentialsProvider r3) {
            r2 = this;
            if (r3 == 0) goto L16
            java.lang.Class<com.huawei.agconnect.core.service.auth.CredentialsProvider> r0 = com.huawei.agconnect.core.service.auth.CredentialsProvider.class
            com.huawei.agconnect.AGConnectOptionsBuilder$1 r1 = new com.huawei.agconnect.AGConnectOptionsBuilder$1
            r1.<init>(r2, r3)
            com.huawei.agconnect.core.Service$Builder r3 = com.huawei.agconnect.core.Service.builder(r0, r1)
            com.huawei.agconnect.core.Service r3 = r3.build()
            java.util.List<com.huawei.agconnect.core.Service> r0 = r2.customServices
            r0.add(r3)
        L16:
            return r2
    }

    public com.huawei.agconnect.AGConnectOptionsBuilder setCustomValue(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.customConfigMap
            r0.put(r2, r3)
            return r1
    }

    public com.huawei.agconnect.AGConnectOptionsBuilder setInputStream(java.io.InputStream r1) {
            r0 = this;
            r0.inputStream = r1
            return r0
    }

    public com.huawei.agconnect.AGConnectOptionsBuilder setPackageName(java.lang.String r1) {
            r0 = this;
            r0.packageName = r1
            return r0
    }

    public com.huawei.agconnect.AGConnectOptionsBuilder setProductId(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.customConfigMap
            java.lang.String r1 = "/client/product_id"
            r0.put(r1, r3)
            return r2
    }

    public com.huawei.agconnect.AGConnectOptionsBuilder setRoutePolicy(com.huawei.agconnect.AGCRoutePolicy r1) {
            r0 = this;
            r0.routePolicy = r1
            return r0
    }
}
