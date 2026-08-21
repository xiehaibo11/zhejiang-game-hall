package com.huawei.hms.activity.internal;

public class ForegroundInnerHeader {
    private final java.lang.String TAG;
    private java.lang.String action;
    private int apkVersion;
    private java.lang.String responseCallbackKey;

    public ForegroundInnerHeader() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "ForegroundInnerHeader"
            r1.TAG = r0
            return
    }

    public void fromJson(java.lang.String r3) {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1e
            r0.<init>(r3)     // Catch: org.json.JSONException -> L1e
            java.lang.String r3 = "apkVersion"
            int r3 = com.huawei.hms.utils.JsonUtil.getIntValue(r0, r3)     // Catch: org.json.JSONException -> L1e
            r2.apkVersion = r3     // Catch: org.json.JSONException -> L1e
            java.lang.String r3 = "action"
            java.lang.String r3 = com.huawei.hms.utils.JsonUtil.getStringValue(r0, r3)     // Catch: org.json.JSONException -> L1e
            r2.action = r3     // Catch: org.json.JSONException -> L1e
            java.lang.String r3 = "responseCallbackKey"
            java.lang.String r3 = com.huawei.hms.utils.JsonUtil.getStringValue(r0, r3)     // Catch: org.json.JSONException -> L1e
            r2.responseCallbackKey = r3     // Catch: org.json.JSONException -> L1e
            goto L39
        L1e:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "fromJson failed: "
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "ForegroundInnerHeader"
            com.huawei.hms.support.log.HMSLog.e(r0, r3)
        L39:
            return
    }

    public java.lang.String getAction() {
            r1 = this;
            java.lang.String r0 = r1.action
            return r0
    }

    public int getApkVersion() {
            r1 = this;
            int r0 = r1.apkVersion
            return r0
    }

    public java.lang.String getResponseCallbackKey() {
            r1 = this;
            java.lang.String r0 = r1.responseCallbackKey
            return r0
    }

    public void setAction(java.lang.String r1) {
            r0 = this;
            r0.action = r1
            return
    }

    public void setApkVersion(int r1) {
            r0 = this;
            r0.apkVersion = r1
            return
    }

    public void setResponseCallbackKey(java.lang.String r1) {
            r0 = this;
            r0.responseCallbackKey = r1
            return
    }

    public java.lang.String toJson() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "apkVersion"
            int r2 = r4.apkVersion     // Catch: org.json.JSONException -> L1b
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L1b
            java.lang.String r1 = "action"
            java.lang.String r2 = r4.action     // Catch: org.json.JSONException -> L1b
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L1b
            java.lang.String r1 = "responseCallbackKey"
            java.lang.String r2 = r4.responseCallbackKey     // Catch: org.json.JSONException -> L1b
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L1b
            goto L36
        L1b:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "ForegroundInnerHeader toJson failed: "
            r2.append(r3)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "ForegroundInnerHeader"
            com.huawei.hms.support.log.HMSLog.e(r2, r1)
        L36:
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "apkVersion:"
            r0.append(r1)
            int r1 = r2.apkVersion
            r0.append(r1)
            java.lang.String r1 = ", action:"
            r0.append(r1)
            java.lang.String r1 = r2.action
            r0.append(r1)
            java.lang.String r1 = ", responseCallbackKey:"
            r0.append(r1)
            java.lang.String r1 = r2.responseCallbackKey
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
