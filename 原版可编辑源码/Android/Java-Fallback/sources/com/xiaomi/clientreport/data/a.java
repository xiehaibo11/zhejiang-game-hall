package com.xiaomi.clientreport.data;

public class a {
    public java.lang.String clientInterfaceId;
    private java.lang.String miuiVersion;
    private java.lang.String os;
    private java.lang.String pkgName;
    public int production;
    public int reportType;
    private java.lang.String sdkVersion;

    public a() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = com.xiaomi.push.bt.a()
            r1.os = r0
            java.lang.String r0 = com.xiaomi.push.m.a()
            r1.miuiVersion = r0
            return
    }

    public java.lang.String getPackageName() {
            r1 = this;
            java.lang.String r0 = r1.pkgName
            return r0
    }

    public void setAppPackageName(java.lang.String r1) {
            r0 = this;
            r0.pkgName = r1
            return
    }

    public void setSdkVersion(java.lang.String r1) {
            r0 = this;
            r0.sdkVersion = r1
            return
    }

    public org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "production"
            int r2 = r3.production     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            java.lang.String r1 = "reportType"
            int r2 = r3.reportType     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            java.lang.String r1 = "clientInterfaceId"
            java.lang.String r2 = r3.clientInterfaceId     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            java.lang.String r1 = "os"
            java.lang.String r2 = r3.os     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            java.lang.String r1 = "miuiVersion"
            java.lang.String r2 = r3.miuiVersion     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            java.lang.String r1 = "pkgName"
            java.lang.String r2 = r3.pkgName     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            java.lang.String r1 = "sdkVersion"
            java.lang.String r2 = r3.sdkVersion     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            return r0
        L37:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            r0 = 0
            return r0
    }

    public java.lang.String toJsonString() {
            r1 = this;
            org.json.JSONObject r0 = r1.toJson()
            if (r0 != 0) goto L9
            java.lang.String r0 = ""
            goto Ld
        L9:
            java.lang.String r0 = r0.toString()
        Ld:
            return r0
    }
}
