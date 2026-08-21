package com.huawei.hms.support.api.client;

public class SubAppInfo {
    private java.lang.String a;

    public SubAppInfo(com.huawei.hms.support.api.client.SubAppInfo r1) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto Lb
            java.lang.String r1 = r1.getSubAppID()
            r0.a = r1
        Lb:
            return
    }

    public SubAppInfo(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public java.lang.String getSubAppID() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public void setSubAppID(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }
}
