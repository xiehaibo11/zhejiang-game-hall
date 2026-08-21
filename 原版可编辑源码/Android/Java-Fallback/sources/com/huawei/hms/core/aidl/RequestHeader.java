package com.huawei.hms.core.aidl;

public class RequestHeader implements com.huawei.hms.core.aidl.IMessageEntity {

    @com.huawei.hms.core.aidl.annotation.Packed
    private int apiLevel;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.util.List<java.lang.String> apiNameList;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String appId;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String packageName;

    @com.huawei.hms.core.aidl.annotation.Packed
    private int sdkVersion;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String sessionId;

    public RequestHeader() {
            r0 = this;
            r0.<init>()
            return
    }

    public RequestHeader(java.lang.String r1, java.lang.String r2, int r3, java.lang.String r4) {
            r0 = this;
            r0.<init>()
            r0.appId = r1
            r0.packageName = r2
            r0.sdkVersion = r3
            r0.sessionId = r4
            return
    }

    public java.util.List<java.lang.String> getApiNameList() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.apiNameList
            return r0
    }

    public java.lang.String getAppID() {
            r1 = this;
            java.lang.String r0 = r1.appId
            return r0
    }

    public java.lang.String getPackageName() {
            r1 = this;
            java.lang.String r0 = r1.packageName
            return r0
    }

    public int getSdkVersion() {
            r1 = this;
            int r0 = r1.sdkVersion
            return r0
    }

    public java.lang.String getSessionId() {
            r1 = this;
            java.lang.String r0 = r1.sessionId
            return r0
    }

    public void setApiLevel(int r1) {
            r0 = this;
            r0.apiLevel = r1
            return
    }

    public void setApiNameList(java.util.List<java.lang.String> r1) {
            r0 = this;
            r0.apiNameList = r1
            return
    }

    public void setAppID(java.lang.String r1) {
            r0 = this;
            r0.appId = r1
            return
    }

    public void setPackageName(java.lang.String r1) {
            r0 = this;
            r0.packageName = r1
            return
    }

    public void setSdkVersion(int r1) {
            r0 = this;
            r0.sdkVersion = r1
            return
    }

    public void setSessionId(java.lang.String r1) {
            r0 = this;
            r0.sessionId = r1
            return
    }
}
