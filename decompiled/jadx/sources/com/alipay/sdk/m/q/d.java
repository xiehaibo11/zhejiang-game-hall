package com.alipay.sdk.m.q;

import android.content.Context;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class d extends com.alipay.sdk.m.p.e {
    public static final String t = "log_v";

    @Override // com.alipay.sdk.m.p.e
    public String a(com.alipay.sdk.m.s.a aVar, String str, JSONObject jSONObject) {
        return str;
    }

    @Override // com.alipay.sdk.m.p.e
    public Map<String, String> a(boolean z, String str) {
        HashMap map = new HashMap();
        map.put("msp-gzip", String.valueOf(z));
        map.put("content-type", "application/octet-stream");
        map.put("des-mode", "CBC");
        return map;
    }

    @Override // com.alipay.sdk.m.p.e
    public JSONObject a() throws JSONException {
        return null;
    }

    @Override // com.alipay.sdk.m.p.e
    public boolean c() {
        return false;
    }

    @Override // com.alipay.sdk.m.p.e
    public String a(com.alipay.sdk.m.s.a aVar) throws JSONException {
        HashMap<String, String> map = new HashMap<>();
        map.put("api_name", "/sdk/log");
        map.put("api_version", "1.0.0");
        HashMap<String, String> map2 = new HashMap<>();
        map2.put("log_v", "1.0");
        return a(aVar, map, map2);
    }

    @Override // com.alipay.sdk.m.p.e
    public com.alipay.sdk.m.p.b a(com.alipay.sdk.m.s.a aVar, Context context, String str) throws Throwable {
        return a(aVar, context, str, com.alipay.sdk.m.l.a.d, true);
    }
}
