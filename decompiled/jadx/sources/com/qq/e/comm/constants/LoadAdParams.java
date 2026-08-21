package com.qq.e.comm.constants;

import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class LoadAdParams {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private LoginType f4677a;
    private String b;
    private String c;
    private String d;
    private Map<String, String> e;
    private JSONObject f;
    private final JSONObject g = new JSONObject();

    public Map getDevExtra() {
        return this.e;
    }

    public String getDevExtraJsonString() {
        try {
            return (this.e == null || this.e.size() <= 0) ? "" : new JSONObject((Map<String, Object>) this.e).toString();
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    public JSONObject getExtraInfo() {
        return this.f;
    }

    public String getLoginAppId() {
        return this.b;
    }

    public String getLoginOpenid() {
        return this.c;
    }

    public LoginType getLoginType() {
        return this.f4677a;
    }

    public JSONObject getParams() {
        return this.g;
    }

    public String getUin() {
        return this.d;
    }

    public void setDevExtra(Map<String, String> map) {
        this.e = map;
    }

    public void setExtraInfo(JSONObject jSONObject) {
        this.f = jSONObject;
    }

    public void setLoginAppId(String str) {
        this.b = str;
    }

    public void setLoginOpenid(String str) {
        this.c = str;
    }

    public void setLoginType(LoginType loginType) {
        this.f4677a = loginType;
    }

    public void setUin(String str) {
        this.d = str;
    }

    public String toString() {
        return "LoadAdParams{, loginType=" + this.f4677a + ", loginAppId=" + this.b + ", loginOpenid=" + this.c + ", uin=" + this.d + ", passThroughInfo=" + this.e + ", extraInfo=" + this.f + '}';
    }
}
