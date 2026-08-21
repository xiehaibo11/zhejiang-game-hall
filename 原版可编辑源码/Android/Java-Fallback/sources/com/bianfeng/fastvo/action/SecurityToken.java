package com.bianfeng.fastvo.action;

public class SecurityToken {
    public java.lang.String AccessKeyId;
    public java.lang.String AccessKeySecret;
    public java.lang.String Expiration;
    public java.lang.String SecurityToken;

    public SecurityToken(org.json.JSONObject r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "AccessKeyId"
            java.lang.String r0 = r2.optString(r0)
            r1.AccessKeyId = r0
            java.lang.String r0 = "AccessKeySecret"
            java.lang.String r0 = r2.optString(r0)
            r1.AccessKeySecret = r0
            java.lang.String r0 = "SecurityToken"
            java.lang.String r0 = r2.optString(r0)
            r1.SecurityToken = r0
            java.lang.String r0 = "Expiration"
            java.lang.String r2 = r2.optString(r0)
            r1.Expiration = r2
            return
    }
}
