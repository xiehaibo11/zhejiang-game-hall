package com.bianfeng.fastvo.action;

import org.json.JSONObject;

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
