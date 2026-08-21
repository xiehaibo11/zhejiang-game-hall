package com.huawei.hms.common.internal;

public class ClientSettings {
    private java.util.List<java.lang.String> apiName;
    private java.lang.String appId;
    private java.lang.String clientClassName;
    private java.lang.String clientPackageName;
    private java.lang.ref.WeakReference<android.app.Activity> cpActivity;
    private boolean hasActivity;
    private java.lang.String innerHmsPkg;
    private java.lang.String mCpID;
    private java.util.List<com.huawei.hms.support.api.entity.auth.Scope> scopes;
    private com.huawei.hms.support.api.client.SubAppInfo subAppId;

    public ClientSettings(java.lang.String r1, java.lang.String r2, java.util.List<com.huawei.hms.support.api.entity.auth.Scope> r3, java.lang.String r4, java.util.List<java.lang.String> r5) {
            r0 = this;
            r0.<init>()
            r0.clientPackageName = r1
            r0.clientClassName = r2
            r0.scopes = r3
            r0.appId = r4
            r0.apiName = r5
            return
    }

    public ClientSettings(java.lang.String r1, java.lang.String r2, java.util.List<com.huawei.hms.support.api.entity.auth.Scope> r3, java.lang.String r4, java.util.List<java.lang.String> r5, com.huawei.hms.support.api.client.SubAppInfo r6) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5)
            r0.setSubAppId(r6)
            return
    }

    public java.util.List<java.lang.String> getApiName() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.apiName
            return r0
    }

    public java.lang.String getAppID() {
            r1 = this;
            java.lang.String r0 = r1.appId
            return r0
    }

    public java.lang.String getClientClassName() {
            r1 = this;
            java.lang.String r0 = r1.clientClassName
            return r0
    }

    public java.lang.String getClientPackageName() {
            r1 = this;
            java.lang.String r0 = r1.clientPackageName
            return r0
    }

    public android.app.Activity getCpActivity() {
            r1 = this;
            java.lang.ref.WeakReference<android.app.Activity> r0 = r1.cpActivity
            if (r0 != 0) goto L6
            r0 = 0
            goto Lc
        L6:
            java.lang.Object r0 = r0.get()
            android.app.Activity r0 = (android.app.Activity) r0
        Lc:
            return r0
    }

    public java.lang.String getCpID() {
            r1 = this;
            java.lang.String r0 = r1.mCpID
            return r0
    }

    public java.lang.String getInnerHmsPkg() {
            r1 = this;
            java.lang.String r0 = r1.innerHmsPkg
            return r0
    }

    public java.util.List<com.huawei.hms.support.api.entity.auth.Scope> getScopes() {
            r1 = this;
            java.util.List<com.huawei.hms.support.api.entity.auth.Scope> r0 = r1.scopes
            return r0
    }

    public com.huawei.hms.support.api.client.SubAppInfo getSubAppID() {
            r1 = this;
            com.huawei.hms.support.api.client.SubAppInfo r0 = r1.subAppId
            return r0
    }

    public boolean isHasActivity() {
            r1 = this;
            boolean r0 = r1.hasActivity
            return r0
    }

    public void setApiName(java.util.List<java.lang.String> r1) {
            r0 = this;
            r0.apiName = r1
            return
    }

    public void setAppID(java.lang.String r1) {
            r0 = this;
            r0.appId = r1
            return
    }

    public void setClientClassName(java.lang.String r1) {
            r0 = this;
            r0.clientClassName = r1
            return
    }

    public void setClientPackageName(java.lang.String r1) {
            r0 = this;
            r0.clientPackageName = r1
            return
    }

    public void setCpActivity(android.app.Activity r2) {
            r1 = this;
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.cpActivity = r0
            r2 = 1
            r1.hasActivity = r2
            return
    }

    public void setCpID(java.lang.String r1) {
            r0 = this;
            r0.mCpID = r1
            return
    }

    public void setInnerHmsPkg(java.lang.String r1) {
            r0 = this;
            r0.innerHmsPkg = r1
            return
    }

    public void setScopes(java.util.List<com.huawei.hms.support.api.entity.auth.Scope> r1) {
            r0 = this;
            r0.scopes = r1
            return
    }

    public void setSubAppId(com.huawei.hms.support.api.client.SubAppInfo r1) {
            r0 = this;
            r0.subAppId = r1
            return
    }
}
