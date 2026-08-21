package com.huawei.hms.common.internal;

public class ResponseWrap {
    private static final java.lang.String TAG = "ResponseWrap";
    private java.lang.String body;
    private com.huawei.hms.common.internal.ResponseHeader responseHeader;

    public ResponseWrap(com.huawei.hms.common.internal.ResponseHeader r1) {
            r0 = this;
            r0.<init>()
            r0.responseHeader = r1
            return
    }

    public boolean fromJson(java.lang.String r3) {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L7d
            r0.<init>(r3)     // Catch: org.json.JSONException -> L7d
            com.huawei.hms.common.internal.ResponseHeader r3 = r2.responseHeader     // Catch: org.json.JSONException -> L7d
            java.lang.String r1 = "status_code"
            int r1 = com.huawei.hms.utils.JsonUtil.getIntValue(r0, r1)     // Catch: org.json.JSONException -> L7d
            r3.setStatusCode(r1)     // Catch: org.json.JSONException -> L7d
            com.huawei.hms.common.internal.ResponseHeader r3 = r2.responseHeader     // Catch: org.json.JSONException -> L7d
            java.lang.String r1 = "error_code"
            int r1 = com.huawei.hms.utils.JsonUtil.getIntValue(r0, r1)     // Catch: org.json.JSONException -> L7d
            r3.setErrorCode(r1)     // Catch: org.json.JSONException -> L7d
            com.huawei.hms.common.internal.ResponseHeader r3 = r2.responseHeader     // Catch: org.json.JSONException -> L7d
            java.lang.String r1 = "error_reason"
            java.lang.String r1 = com.huawei.hms.utils.JsonUtil.getStringValue(r0, r1)     // Catch: org.json.JSONException -> L7d
            r3.setErrorReason(r1)     // Catch: org.json.JSONException -> L7d
            com.huawei.hms.common.internal.ResponseHeader r3 = r2.responseHeader     // Catch: org.json.JSONException -> L7d
            java.lang.String r1 = "srv_name"
            java.lang.String r1 = com.huawei.hms.utils.JsonUtil.getStringValue(r0, r1)     // Catch: org.json.JSONException -> L7d
            r3.setSrvName(r1)     // Catch: org.json.JSONException -> L7d
            com.huawei.hms.common.internal.ResponseHeader r3 = r2.responseHeader     // Catch: org.json.JSONException -> L7d
            java.lang.String r1 = "api_name"
            java.lang.String r1 = com.huawei.hms.utils.JsonUtil.getStringValue(r0, r1)     // Catch: org.json.JSONException -> L7d
            r3.setApiName(r1)     // Catch: org.json.JSONException -> L7d
            com.huawei.hms.common.internal.ResponseHeader r3 = r2.responseHeader     // Catch: org.json.JSONException -> L7d
            java.lang.String r1 = "app_id"
            java.lang.String r1 = com.huawei.hms.utils.JsonUtil.getStringValue(r0, r1)     // Catch: org.json.JSONException -> L7d
            r3.setAppID(r1)     // Catch: org.json.JSONException -> L7d
            com.huawei.hms.common.internal.ResponseHeader r3 = r2.responseHeader     // Catch: org.json.JSONException -> L7d
            java.lang.String r1 = "pkg_name"
            java.lang.String r1 = com.huawei.hms.utils.JsonUtil.getStringValue(r0, r1)     // Catch: org.json.JSONException -> L7d
            r3.setPkgName(r1)     // Catch: org.json.JSONException -> L7d
            com.huawei.hms.common.internal.ResponseHeader r3 = r2.responseHeader     // Catch: org.json.JSONException -> L7d
            java.lang.String r1 = "session_id"
            java.lang.String r1 = com.huawei.hms.utils.JsonUtil.getStringValue(r0, r1)     // Catch: org.json.JSONException -> L7d
            r3.setSessionId(r1)     // Catch: org.json.JSONException -> L7d
            com.huawei.hms.common.internal.ResponseHeader r3 = r2.responseHeader     // Catch: org.json.JSONException -> L7d
            java.lang.String r1 = "transaction_id"
            java.lang.String r1 = com.huawei.hms.utils.JsonUtil.getStringValue(r0, r1)     // Catch: org.json.JSONException -> L7d
            r3.setTransactionId(r1)     // Catch: org.json.JSONException -> L7d
            com.huawei.hms.common.internal.ResponseHeader r3 = r2.responseHeader     // Catch: org.json.JSONException -> L7d
            java.lang.String r1 = "resolution"
            java.lang.String r1 = com.huawei.hms.utils.JsonUtil.getStringValue(r0, r1)     // Catch: org.json.JSONException -> L7d
            r3.setResolution(r1)     // Catch: org.json.JSONException -> L7d
            java.lang.String r3 = "body"
            java.lang.String r3 = com.huawei.hms.utils.JsonUtil.getStringValue(r0, r3)     // Catch: org.json.JSONException -> L7d
            r2.body = r3     // Catch: org.json.JSONException -> L7d
            r3 = 1
            return r3
        L7d:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "fromJson failed: "
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "ResponseWrap"
            com.huawei.hms.support.log.HMSLog.e(r0, r3)
            r3 = 0
            return r3
    }

    public java.lang.String getBody() {
            r1 = this;
            java.lang.String r0 = r1.body
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L13
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r0 = r0.toString()
            r1.body = r0
        L13:
            java.lang.String r0 = r1.body
            return r0
    }

    public com.huawei.hms.common.internal.ResponseHeader getResponseHeader() {
            r1 = this;
            com.huawei.hms.common.internal.ResponseHeader r0 = r1.responseHeader
            return r0
    }

    public void setBody(java.lang.String r1) {
            r0 = this;
            r0.body = r1
            return
    }

    public void setResponseHeader(com.huawei.hms.common.internal.ResponseHeader r1) {
            r0 = this;
            r0.responseHeader = r1
            return
    }

    public java.lang.String toJson() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "status_code"
            com.huawei.hms.common.internal.ResponseHeader r2 = r4.responseHeader     // Catch: org.json.JSONException -> L89
            int r2 = r2.getStatusCode()     // Catch: org.json.JSONException -> L89
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L89
            java.lang.String r1 = "error_code"
            com.huawei.hms.common.internal.ResponseHeader r2 = r4.responseHeader     // Catch: org.json.JSONException -> L89
            int r2 = r2.getErrorCode()     // Catch: org.json.JSONException -> L89
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L89
            java.lang.String r1 = "error_reason"
            com.huawei.hms.common.internal.ResponseHeader r2 = r4.responseHeader     // Catch: org.json.JSONException -> L89
            java.lang.String r2 = r2.getErrorReason()     // Catch: org.json.JSONException -> L89
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L89
            java.lang.String r1 = "srv_name"
            com.huawei.hms.common.internal.ResponseHeader r2 = r4.responseHeader     // Catch: org.json.JSONException -> L89
            java.lang.String r2 = r2.getSrvName()     // Catch: org.json.JSONException -> L89
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L89
            java.lang.String r1 = "api_name"
            com.huawei.hms.common.internal.ResponseHeader r2 = r4.responseHeader     // Catch: org.json.JSONException -> L89
            java.lang.String r2 = r2.getApiName()     // Catch: org.json.JSONException -> L89
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L89
            java.lang.String r1 = "app_id"
            com.huawei.hms.common.internal.ResponseHeader r2 = r4.responseHeader     // Catch: org.json.JSONException -> L89
            java.lang.String r2 = r2.getAppID()     // Catch: org.json.JSONException -> L89
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L89
            java.lang.String r1 = "pkg_name"
            com.huawei.hms.common.internal.ResponseHeader r2 = r4.responseHeader     // Catch: org.json.JSONException -> L89
            java.lang.String r2 = r2.getPkgName()     // Catch: org.json.JSONException -> L89
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L89
            java.lang.String r1 = "transaction_id"
            com.huawei.hms.common.internal.ResponseHeader r2 = r4.responseHeader     // Catch: org.json.JSONException -> L89
            java.lang.String r2 = r2.getTransactionId()     // Catch: org.json.JSONException -> L89
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L89
            java.lang.String r1 = "resolution"
            com.huawei.hms.common.internal.ResponseHeader r2 = r4.responseHeader     // Catch: org.json.JSONException -> L89
            java.lang.String r2 = r2.getResolution()     // Catch: org.json.JSONException -> L89
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L89
            com.huawei.hms.common.internal.ResponseHeader r1 = r4.responseHeader     // Catch: org.json.JSONException -> L89
            java.lang.String r1 = r1.getSessionId()     // Catch: org.json.JSONException -> L89
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L89
            if (r2 != 0) goto L79
            java.lang.String r2 = "session_id"
            r0.put(r2, r1)     // Catch: org.json.JSONException -> L89
        L79:
            java.lang.String r1 = r4.body     // Catch: org.json.JSONException -> L89
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L89
            if (r1 != 0) goto La4
            java.lang.String r1 = "body"
            java.lang.String r2 = r4.body     // Catch: org.json.JSONException -> L89
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L89
            goto La4
        L89:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "toJson failed: "
            r2.append(r3)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "ResponseWrap"
            com.huawei.hms.support.log.HMSLog.e(r2, r1)
        La4:
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ResponseWrap{body='"
            r0.append(r1)
            java.lang.String r1 = r2.body
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r1 = ", responseHeader="
            r0.append(r1)
            com.huawei.hms.common.internal.ResponseHeader r1 = r2.responseHeader
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
