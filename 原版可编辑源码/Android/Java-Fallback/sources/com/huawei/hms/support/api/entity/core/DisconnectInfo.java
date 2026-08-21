package com.huawei.hms.support.api.entity.core;

public class DisconnectInfo implements com.huawei.hms.core.aidl.IMessageEntity {

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.util.List<java.lang.String> apiNameList;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.util.List<com.huawei.hms.support.api.entity.auth.Scope> scopeList;

    public DisconnectInfo() {
            r0 = this;
            r0.<init>()
            return
    }

    public DisconnectInfo(java.util.List<com.huawei.hms.support.api.entity.auth.Scope> r1, java.util.List<java.lang.String> r2) {
            r0 = this;
            r0.<init>()
            r0.scopeList = r1
            r0.apiNameList = r2
            return
    }

    public java.util.List<java.lang.String> getApiNameList() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.apiNameList
            return r0
    }

    public java.util.List<com.huawei.hms.support.api.entity.auth.Scope> getScopeList() {
            r1 = this;
            java.util.List<com.huawei.hms.support.api.entity.auth.Scope> r0 = r1.scopeList
            return r0
    }
}
