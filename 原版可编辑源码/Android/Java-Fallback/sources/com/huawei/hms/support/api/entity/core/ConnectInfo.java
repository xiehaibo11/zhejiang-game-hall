package com.huawei.hms.support.api.entity.core;

public class ConnectInfo implements com.huawei.hms.core.aidl.IMessageEntity {

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.util.List<java.lang.String> apiNameList;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String fingerprint;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.util.List<com.huawei.hms.support.api.entity.auth.Scope> scopeList;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String subAppID;

    public ConnectInfo() {
            r0 = this;
            r0.<init>()
            return
    }

    public ConnectInfo(java.util.List<java.lang.String> r1, java.util.List<com.huawei.hms.support.api.entity.auth.Scope> r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r0.<init>()
            r0.apiNameList = r1
            r0.scopeList = r2
            r0.fingerprint = r3
            r0.subAppID = r4
            return
    }

    public java.util.List<java.lang.String> getApiNameList() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.apiNameList
            return r0
    }

    public java.lang.String getFingerprint() {
            r1 = this;
            java.lang.String r0 = r1.fingerprint
            return r0
    }

    public java.util.List<com.huawei.hms.support.api.entity.auth.Scope> getScopeList() {
            r1 = this;
            java.util.List<com.huawei.hms.support.api.entity.auth.Scope> r0 = r1.scopeList
            return r0
    }

    public java.lang.String getSubAppID() {
            r1 = this;
            java.lang.String r0 = r1.subAppID
            return r0
    }

    public void setApiNameList(java.util.List<java.lang.String> r1) {
            r0 = this;
            r0.apiNameList = r1
            return
    }

    public void setFingerprint(java.lang.String r1) {
            r0 = this;
            r0.fingerprint = r1
            return
    }

    public void setScopeList(java.util.List<com.huawei.hms.support.api.entity.auth.Scope> r1) {
            r0 = this;
            r0.scopeList = r1
            return
    }

    public void setSubAppID(java.lang.String r1) {
            r0 = this;
            r0.subAppID = r1
            return
    }
}
