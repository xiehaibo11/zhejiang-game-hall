package com.huawei.agconnect;

@java.lang.Deprecated
public abstract class AGConnectApp {
    public AGConnectApp() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.huawei.agconnect.AGConnectApp getInstance() {
            com.huawei.agconnect.AGConnectApp r0 = com.huawei.agconnect.config.a.a.a()
            return r0
    }

    private static com.huawei.agconnect.AGConnectApp getInstance(java.lang.String r0) {
            com.huawei.agconnect.AGConnectApp r0 = com.huawei.agconnect.config.a.a.a(r0)
            return r0
    }

    public static com.huawei.agconnect.AGConnectApp initialize(android.content.Context r0) {
            com.huawei.agconnect.AGConnectApp r0 = com.huawei.agconnect.config.a.a.a(r0)
            return r0
    }

    private static com.huawei.agconnect.AGConnectApp initialize(android.content.Context r0, java.lang.String r1) {
            com.huawei.agconnect.AGConnectApp r0 = com.huawei.agconnect.config.a.a.a(r0, r1)
            return r0
    }

    public abstract void setApiKey(java.lang.String r1);

    public abstract void setAppId(java.lang.String r1);

    public abstract void setClientId(java.lang.String r1);

    public abstract void setClientSecret(java.lang.String r1);

    public abstract void setCpId(java.lang.String r1);

    public abstract void setCustomAuthProvider(com.huawei.agconnect.CustomAuthProvider r1);

    public abstract void setCustomCredentialsProvider(com.huawei.agconnect.CustomCredentialsProvider r1);

    public abstract void setParam(java.lang.String r1, java.lang.String r2);

    public abstract void setProductId(java.lang.String r1);
}
