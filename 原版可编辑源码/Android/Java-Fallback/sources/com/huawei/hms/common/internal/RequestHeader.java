package com.huawei.hms.common.internal;

public class RequestHeader implements com.huawei.hms.core.aidl.IMessageEntity {
    private static final java.lang.String TAG = "RequestHeader";

    @com.huawei.hms.core.aidl.annotation.Packed
    private int apiLevel;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String api_name;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String app_id;

    @com.huawei.hms.core.aidl.annotation.Packed
    private int kitSdkVersion;
    private android.os.Parcelable parcelable;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String pkg_name;

    @com.huawei.hms.core.aidl.annotation.Packed
    private int sdk_version;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String session_id;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String srv_name;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String transaction_id;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String version;

    public RequestHeader() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.app_id = r0
            java.lang.String r0 = "4.0"
            r1.version = r0
            r0 = 50300301(0x2ff858d, float:3.7545537E-37)
            r1.sdk_version = r0
            return
    }

    public boolean fromJson(java.lang.String r3) {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L57
            r0.<init>(r3)     // Catch: org.json.JSONException -> L57
            java.lang.String r3 = "version"
            java.lang.String r3 = com.huawei.hms.utils.JsonUtil.getStringValue(r0, r3)     // Catch: org.json.JSONException -> L57
            r2.version = r3     // Catch: org.json.JSONException -> L57
            java.lang.String r3 = "srv_name"
            java.lang.String r3 = com.huawei.hms.utils.JsonUtil.getStringValue(r0, r3)     // Catch: org.json.JSONException -> L57
            r2.srv_name = r3     // Catch: org.json.JSONException -> L57
            java.lang.String r3 = "api_name"
            java.lang.String r3 = com.huawei.hms.utils.JsonUtil.getStringValue(r0, r3)     // Catch: org.json.JSONException -> L57
            r2.api_name = r3     // Catch: org.json.JSONException -> L57
            java.lang.String r3 = "app_id"
            java.lang.String r3 = com.huawei.hms.utils.JsonUtil.getStringValue(r0, r3)     // Catch: org.json.JSONException -> L57
            r2.app_id = r3     // Catch: org.json.JSONException -> L57
            java.lang.String r3 = "pkg_name"
            java.lang.String r3 = com.huawei.hms.utils.JsonUtil.getStringValue(r0, r3)     // Catch: org.json.JSONException -> L57
            r2.pkg_name = r3     // Catch: org.json.JSONException -> L57
            java.lang.String r3 = "sdk_version"
            int r3 = com.huawei.hms.utils.JsonUtil.getIntValue(r0, r3)     // Catch: org.json.JSONException -> L57
            r2.sdk_version = r3     // Catch: org.json.JSONException -> L57
            java.lang.String r3 = "kitSdkVersion"
            int r3 = com.huawei.hms.utils.JsonUtil.getIntValue(r0, r3)     // Catch: org.json.JSONException -> L57
            r2.kitSdkVersion = r3     // Catch: org.json.JSONException -> L57
            java.lang.String r3 = "apiLevel"
            int r3 = com.huawei.hms.utils.JsonUtil.getIntValue(r0, r3)     // Catch: org.json.JSONException -> L57
            r2.apiLevel = r3     // Catch: org.json.JSONException -> L57
            java.lang.String r3 = "session_id"
            java.lang.String r3 = com.huawei.hms.utils.JsonUtil.getStringValue(r0, r3)     // Catch: org.json.JSONException -> L57
            r2.session_id = r3     // Catch: org.json.JSONException -> L57
            java.lang.String r3 = "transaction_id"
            java.lang.String r3 = com.huawei.hms.utils.JsonUtil.getStringValue(r0, r3)     // Catch: org.json.JSONException -> L57
            r2.transaction_id = r3     // Catch: org.json.JSONException -> L57
            r3 = 1
            return r3
        L57:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "fromJson failed: "
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "RequestHeader"
            com.huawei.hms.support.log.HMSLog.e(r0, r3)
            r3 = 0
            return r3
    }

    public java.lang.String getActualAppID() {
            r3 = this;
            java.lang.String r0 = r3.app_id
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lb
            return r1
        Lb:
            java.lang.String r0 = r3.app_id
            java.lang.String r2 = "\\|"
            java.lang.String[] r0 = r0.split(r2)
            int r2 = r0.length
            if (r2 != 0) goto L17
            return r1
        L17:
            int r1 = r0.length
            r2 = 1
            if (r1 != r2) goto L1f
            r1 = 0
            r0 = r0[r1]
            return r0
        L1f:
            r0 = r0[r2]
            return r0
    }

    public int getApiLevel() {
            r1 = this;
            int r0 = r1.apiLevel
            return r0
    }

    public java.lang.String getApiName() {
            r1 = this;
            java.lang.String r0 = r1.api_name
            return r0
    }

    public java.lang.String getAppID() {
            r1 = this;
            java.lang.String r0 = r1.app_id
            return r0
    }

    public int getKitSdkVersion() {
            r1 = this;
            int r0 = r1.kitSdkVersion
            return r0
    }

    public android.os.Parcelable getParcelable() {
            r1 = this;
            android.os.Parcelable r0 = r1.parcelable
            return r0
    }

    public java.lang.String getPkgName() {
            r1 = this;
            java.lang.String r0 = r1.pkg_name
            return r0
    }

    public int getSdkVersion() {
            r1 = this;
            int r0 = r1.sdk_version
            return r0
    }

    public java.lang.String getSessionId() {
            r1 = this;
            java.lang.String r0 = r1.session_id
            return r0
    }

    public java.lang.String getSrvName() {
            r1 = this;
            java.lang.String r0 = r1.srv_name
            return r0
    }

    public java.lang.String getTransactionId() {
            r1 = this;
            java.lang.String r0 = r1.transaction_id
            return r0
    }

    public java.lang.String getVersion() {
            r1 = this;
            java.lang.String r0 = r1.version
            return r0
    }

    public void setApiLevel(int r1) {
            r0 = this;
            r0.apiLevel = r1
            return
    }

    public void setApiName(java.lang.String r1) {
            r0 = this;
            r0.api_name = r1
            return
    }

    public void setAppID(java.lang.String r1) {
            r0 = this;
            r0.app_id = r1
            return
    }

    public void setKitSdkVersion(int r1) {
            r0 = this;
            r0.kitSdkVersion = r1
            return
    }

    public void setParcelable(android.os.Parcelable r1) {
            r0 = this;
            r0.parcelable = r1
            return
    }

    public void setPkgName(java.lang.String r1) {
            r0 = this;
            r0.pkg_name = r1
            return
    }

    public void setSdkVersion(int r1) {
            r0 = this;
            r0.sdk_version = r1
            return
    }

    public void setSessionId(java.lang.String r1) {
            r0 = this;
            r0.session_id = r1
            return
    }

    public void setSrvName(java.lang.String r1) {
            r0 = this;
            r0.srv_name = r1
            return
    }

    public void setTransactionId(java.lang.String r1) {
            r0 = this;
            r0.transaction_id = r1
            return
    }

    public void setVersion(java.lang.String r1) {
            r0 = this;
            r0.version = r1
            return
    }

    public java.lang.String toJson() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "version"
            java.lang.String r2 = r4.version     // Catch: org.json.JSONException -> L54
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L54
            java.lang.String r1 = "srv_name"
            java.lang.String r2 = r4.srv_name     // Catch: org.json.JSONException -> L54
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L54
            java.lang.String r1 = "api_name"
            java.lang.String r2 = r4.api_name     // Catch: org.json.JSONException -> L54
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L54
            java.lang.String r1 = "app_id"
            java.lang.String r2 = r4.app_id     // Catch: org.json.JSONException -> L54
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L54
            java.lang.String r1 = "pkg_name"
            java.lang.String r2 = r4.pkg_name     // Catch: org.json.JSONException -> L54
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L54
            java.lang.String r1 = "sdk_version"
            int r2 = r4.sdk_version     // Catch: org.json.JSONException -> L54
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L54
            java.lang.String r1 = "kitSdkVersion"
            int r2 = r4.kitSdkVersion     // Catch: org.json.JSONException -> L54
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L54
            java.lang.String r1 = "apiLevel"
            int r2 = r4.apiLevel     // Catch: org.json.JSONException -> L54
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L54
            java.lang.String r1 = r4.session_id     // Catch: org.json.JSONException -> L54
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L54
            if (r1 != 0) goto L4c
            java.lang.String r1 = "session_id"
            java.lang.String r2 = r4.session_id     // Catch: org.json.JSONException -> L54
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L54
        L4c:
            java.lang.String r1 = "transaction_id"
            java.lang.String r2 = r4.transaction_id     // Catch: org.json.JSONException -> L54
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L54
            goto L6f
        L54:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "toJson failed: "
            r2.append(r3)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "RequestHeader"
            com.huawei.hms.support.log.HMSLog.e(r2, r1)
        L6f:
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "api_name:"
            r0.append(r1)
            java.lang.String r1 = r2.api_name
            r0.append(r1)
            java.lang.String r1 = ", app_id:"
            r0.append(r1)
            java.lang.String r1 = r2.app_id
            r0.append(r1)
            java.lang.String r1 = ", pkg_name:"
            r0.append(r1)
            java.lang.String r1 = r2.pkg_name
            r0.append(r1)
            java.lang.String r1 = ", sdk_version:"
            r0.append(r1)
            int r1 = r2.sdk_version
            r0.append(r1)
            java.lang.String r1 = ", session_id:*, transaction_id:"
            r0.append(r1)
            java.lang.String r1 = r2.transaction_id
            r0.append(r1)
            java.lang.String r1 = ", kitSdkVersion:"
            r0.append(r1)
            int r1 = r2.kitSdkVersion
            r0.append(r1)
            java.lang.String r1 = ", apiLevel:"
            r0.append(r1)
            int r1 = r2.apiLevel
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
