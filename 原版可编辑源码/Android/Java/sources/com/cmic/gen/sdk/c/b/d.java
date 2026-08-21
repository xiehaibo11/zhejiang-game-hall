package com.cmic.gen.sdk.c.b;

import com.qihoo360.replugin.model.PluginInfo;
import org.json.JSONException;
import org.json.JSONObject;

public class d extends g {
    private final String a;
    private final String b;
    private final String c;
    private String d = "authz";
    private String e;

    @Override
    protected String a_(String str) {
        return null;
    }

    public d(String str, String str2, String str3) {
        this.a = str;
        this.b = str2;
        this.c = str3;
    }

    public void b(String str) {
        this.d = str;
    }

    public void c(String str) {
        this.e = str;
    }

    @Override
    public String a() {
        return this.a;
    }

    @Override
    public JSONObject b() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put(PluginInfo.PI_VER, this.b);
            jSONObject.put("data", this.c);
            jSONObject.put("userCapaid", this.e);
            jSONObject.put("funcType", this.d);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }
}
