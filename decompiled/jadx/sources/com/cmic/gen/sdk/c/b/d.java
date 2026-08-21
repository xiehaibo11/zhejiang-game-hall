package com.cmic.gen.sdk.c.b;

import com.qihoo360.replugin.model.PluginInfo;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: GetPhoneNubmerNotify.java */
/* JADX INFO: loaded from: classes.dex */
public class d extends g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f1648a;
    private final String b;
    private final String c;
    private String d = "authz";
    private String e;

    @Override // com.cmic.gen.sdk.c.b.g
    protected String a_(String str) {
        return null;
    }

    public d(String str, String str2, String str3) {
        this.f1648a = str;
        this.b = str2;
        this.c = str3;
    }

    public void b(String str) {
        this.d = str;
    }

    public void c(String str) {
        this.e = str;
    }

    @Override // com.cmic.gen.sdk.c.b.g
    public String a() {
        return this.f1648a;
    }

    @Override // com.cmic.gen.sdk.c.b.g
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
