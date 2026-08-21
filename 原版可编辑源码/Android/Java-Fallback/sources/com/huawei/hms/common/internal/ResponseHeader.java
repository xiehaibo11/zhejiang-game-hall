package com.huawei.hms.common.internal;

public class ResponseHeader implements com.huawei.hms.core.aidl.IMessageEntity, com.huawei.hms.common.internal.ResponseErrorCode {
    private static final java.lang.String TAG = "ResponseHeader";

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String api_name;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String app_id;

    @com.huawei.hms.core.aidl.annotation.Packed
    private int error_code;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String error_reason;
    private android.os.Parcelable parcelable;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String pkg_name;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String resolution;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String session_id;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String srv_name;

    @com.huawei.hms.core.aidl.annotation.Packed
    private int status_code;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String transaction_id;

    public ResponseHeader() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.app_id = r0
            return
    }

    public ResponseHeader(int r2, int r3, java.lang.String r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.app_id = r0
            r1.status_code = r2
            r1.error_code = r3
            r1.error_reason = r4
            return
    }

    public boolean fromJson(java.lang.String r3) {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L57
            r0.<init>(r3)     // Catch: org.json.JSONException -> L57
            java.lang.String r3 = "status_code"
            int r3 = com.huawei.hms.utils.JsonUtil.getIntValue(r0, r3)     // Catch: org.json.JSONException -> L57
            r2.status_code = r3     // Catch: org.json.JSONException -> L57
            java.lang.String r3 = "error_code"
            int r3 = com.huawei.hms.utils.JsonUtil.getIntValue(r0, r3)     // Catch: org.json.JSONException -> L57
            r2.error_code = r3     // Catch: org.json.JSONException -> L57
            java.lang.String r3 = "error_reason"
            java.lang.String r3 = com.huawei.hms.utils.JsonUtil.getStringValue(r0, r3)     // Catch: org.json.JSONException -> L57
            r2.error_reason = r3     // Catch: org.json.JSONException -> L57
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
            java.lang.String r3 = "session_id"
            java.lang.String r3 = com.huawei.hms.utils.JsonUtil.getStringValue(r0, r3)     // Catch: org.json.JSONException -> L57
            r2.session_id = r3     // Catch: org.json.JSONException -> L57
            java.lang.String r3 = "transaction_id"
            java.lang.String r3 = com.huawei.hms.utils.JsonUtil.getStringValue(r0, r3)     // Catch: org.json.JSONException -> L57
            r2.transaction_id = r3     // Catch: org.json.JSONException -> L57
            java.lang.String r3 = "resolution"
            java.lang.String r3 = com.huawei.hms.utils.JsonUtil.getStringValue(r0, r3)     // Catch: org.json.JSONException -> L57
            r2.resolution = r3     // Catch: org.json.JSONException -> L57
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
            java.lang.String r0 = "ResponseHeader"
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

    @Override
    public int getErrorCode() {
            r1 = this;
            int r0 = r1.error_code
            return r0
    }

    @Override
    public java.lang.String getErrorReason() {
            r1 = this;
            java.lang.String r0 = r1.error_reason
            return r0
    }

    @Override
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

    @Override
    public java.lang.String getResolution() {
            r1 = this;
            java.lang.String r0 = r1.resolution
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

    @Override
    public int getStatusCode() {
            r1 = this;
            int r0 = r1.status_code
            return r0
    }

    @Override
    public java.lang.String getTransactionId() {
            r1 = this;
            java.lang.String r0 = r1.transaction_id
            return r0
    }

    @Override
    public boolean hasResolution() {
            r1 = this;
            android.os.Parcelable r0 = r1.parcelable
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public boolean isSuccess() {
            r1 = this;
            int r0 = r1.status_code
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
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

    public void setErrorCode(int r1) {
            r0 = this;
            r0.error_code = r1
            return
    }

    public void setErrorReason(java.lang.String r1) {
            r0 = this;
            r0.error_reason = r1
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

    public void setResolution(java.lang.String r1) {
            r0 = this;
            r0.resolution = r1
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

    public void setStatusCode(int r1) {
            r0 = this;
            r0.status_code = r1
            return
    }

    public void setTransactionId(java.lang.String r1) {
            r0 = this;
            r0.transaction_id = r1
            return
    }

    public java.lang.String toJson() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "status_code"
            int r2 = r4.status_code     // Catch: org.json.JSONException -> L54
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L54
            java.lang.String r1 = "error_code"
            int r2 = r4.error_code     // Catch: org.json.JSONException -> L54
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L54
            java.lang.String r1 = "error_reason"
            java.lang.String r2 = r4.error_reason     // Catch: org.json.JSONException -> L54
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
            java.lang.String r1 = r4.session_id     // Catch: org.json.JSONException -> L54
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L54
            if (r1 != 0) goto L45
            java.lang.String r1 = "session_id"
            java.lang.String r2 = r4.session_id     // Catch: org.json.JSONException -> L54
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L54
        L45:
            java.lang.String r1 = "transaction_id"
            java.lang.String r2 = r4.transaction_id     // Catch: org.json.JSONException -> L54
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L54
            java.lang.String r1 = "resolution"
            java.lang.String r2 = r4.resolution     // Catch: org.json.JSONException -> L54
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
            java.lang.String r2 = "ResponseHeader"
            com.huawei.hms.support.log.HMSLog.e(r2, r1)
        L6f:
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "status_code:"
            r0.append(r1)
            int r1 = r2.status_code
            r0.append(r1)
            java.lang.String r1 = ", error_code"
            r0.append(r1)
            int r1 = r2.error_code
            r0.append(r1)
            java.lang.String r1 = ", api_name:"
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
            java.lang.String r1 = ", session_id:*, transaction_id:"
            r0.append(r1)
            java.lang.String r1 = r2.transaction_id
            r0.append(r1)
            java.lang.String r1 = ", resolution:"
            r0.append(r1)
            java.lang.String r1 = r2.resolution
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
