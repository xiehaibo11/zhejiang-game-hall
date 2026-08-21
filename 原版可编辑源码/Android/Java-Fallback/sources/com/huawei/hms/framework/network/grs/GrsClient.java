package com.huawei.hms.framework.network.grs;

public class GrsClient {
    private com.huawei.hms.framework.network.grs.d grsClientGlobal;

    public GrsClient(android.content.Context r1, com.huawei.hms.framework.network.grs.GrsBaseInfo r2) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto Le
            if (r2 == 0) goto Le
            com.huawei.hms.framework.network.grs.d r1 = com.huawei.hms.framework.network.grs.e.a(r2, r1)
            r0.grsClientGlobal = r1
            return
        Le:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "invalid init params for context is null or GrsBaseInfo instance is null Object."
            r1.<init>(r2)
            throw r1
    }

    public void ayncGetGrsUrl(java.lang.String r2, java.lang.String r3, com.huawei.hms.framework.network.grs.IQueryUrlCallBack r4) {
            r1 = this;
            com.huawei.hms.framework.network.grs.d r0 = r1.grsClientGlobal
            r0.a(r2, r3, r4)
            return
    }

    public void ayncGetGrsUrls(java.lang.String r2, com.huawei.hms.framework.network.grs.IQueryUrlsCallBack r3) {
            r1 = this;
            com.huawei.hms.framework.network.grs.d r0 = r1.grsClientGlobal
            r0.a(r2, r3)
            return
    }

    public void clearSp() {
            r1 = this;
            com.huawei.hms.framework.network.grs.d r0 = r1.grsClientGlobal
            r0.b()
            return
    }

    public boolean forceExpire() {
            r1 = this;
            com.huawei.hms.framework.network.grs.d r0 = r1.grsClientGlobal
            boolean r0 = r0.c()
            return r0
    }

    public java.lang.String synGetGrsUrl(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.huawei.hms.framework.network.grs.d r0 = r1.grsClientGlobal
            java.lang.String r2 = r0.a(r2, r3)
            return r2
    }

    public java.util.Map<java.lang.String, java.lang.String> synGetGrsUrls(java.lang.String r2) {
            r1 = this;
            com.huawei.hms.framework.network.grs.d r0 = r1.grsClientGlobal
            java.util.Map r2 = r0.a(r2)
            return r2
    }
}
