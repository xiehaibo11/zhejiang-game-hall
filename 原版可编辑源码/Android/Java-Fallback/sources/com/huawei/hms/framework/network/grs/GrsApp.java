package com.huawei.hms.framework.network.grs;

public class GrsApp {
    private static com.huawei.hms.framework.network.grs.GrsApp instance;
    private java.lang.String appConfigName;

    static {
            com.huawei.hms.framework.network.grs.GrsApp r0 = new com.huawei.hms.framework.network.grs.GrsApp
            r0.<init>()
            com.huawei.hms.framework.network.grs.GrsApp.instance = r0
            return
    }

    private GrsApp() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.huawei.hms.framework.network.grs.GrsApp getInstance() {
            com.huawei.hms.framework.network.grs.GrsApp r0 = com.huawei.hms.framework.network.grs.GrsApp.instance
            return r0
    }

    public java.lang.String getAppConfigName() {
            r1 = this;
            java.lang.String r0 = r1.appConfigName
            return r0
    }

    public java.lang.String getIssueCountryCode(android.content.Context r2) {
            r1 = this;
            r0 = 0
            com.huawei.hms.framework.network.grs.local.model.CountryCodeBean r2 = com.huawei.hms.framework.network.grs.a.a(r2, r0)
            java.lang.String r2 = r2.getCountryCode()
            return r2
    }

    public void setAppConfigName(java.lang.String r1) {
            r0 = this;
            r0.appConfigName = r1
            return
    }
}
