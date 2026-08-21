package com.bianfeng.fastvo.action;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class SecurityToken {
    public String AccessKeyId;
    public String AccessKeySecret;
    public String Expiration;
    public String SecurityToken;

    public SecurityToken(JSONObject jSONObject) {
        this.AccessKeyId = jSONObject.optString("AccessKeyId");
        this.AccessKeySecret = jSONObject.optString("AccessKeySecret");
        this.SecurityToken = jSONObject.optString("SecurityToken");
        this.Expiration = jSONObject.optString("Expiration");
    }
}
