package com.alipay.sdk.packet;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import com.alipay.sdk.app.i;
import com.alipay.sdk.net.a;
import com.alipay.sdk.util.m;
import com.alipay.sdk.util.n;
import com.xiaomi.mipush.sdk.Constants;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public abstract class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f1306a = "msp-gzip";
    public static final String b = "Msp-Param";
    public static final String c = "Operation-Type";
    public static final String d = "content-type";
    public static final String e = "Version";
    public static final String f = "AppId";
    public static final String g = "des-mode";
    public static final String h = "namespace";
    public static final String i = "api_name";
    public static final String j = "api_version";
    public static final String k = "data";
    public static final String l = "params";
    public static final String m = "public_key";
    public static final String n = "device";
    public static final String o = "action";
    public static final String p = "type";
    public static final String q = "method";
    protected boolean r = true;
    protected boolean s = true;

    protected abstract JSONObject a() throws JSONException;

    protected String b() {
        return "4.9.0";
    }

    protected Map<String, String> a(boolean z, String str) {
        HashMap map = new HashMap();
        map.put("msp-gzip", String.valueOf(z));
        map.put("Operation-Type", "alipay.msp.cashier.dispatch.bytes");
        map.put("content-type", "application/octet-stream");
        map.put("Version", "2.0");
        map.put("AppId", "TAOBAO");
        map.put("Msp-Param", a.a(str));
        map.put("des-mode", "CBC");
        return map;
    }

    protected String c() throws JSONException {
        HashMap<String, String> map = new HashMap<>();
        map.put("device", Build.MODEL);
        map.put("namespace", "com.alipay.mobilecashier");
        map.put("api_name", "com.alipay.mcpay");
        map.put("api_version", b());
        return a(map, new HashMap<>());
    }

    protected static JSONObject a(String str, String str2) throws JSONException {
        JSONObject jSONObject = new JSONObject();
        JSONObject jSONObject2 = new JSONObject();
        jSONObject2.put("type", str);
        jSONObject2.put("method", str2);
        jSONObject.put("action", jSONObject2);
        return jSONObject;
    }

    protected String a(String str, JSONObject jSONObject) {
        com.alipay.sdk.sys.b bVarA = com.alipay.sdk.sys.b.a();
        com.alipay.sdk.tid.b bVarA2 = com.alipay.sdk.tid.b.a(bVarA.b());
        JSONObject jSONObjectA = com.alipay.sdk.util.b.a(new JSONObject(), jSONObject);
        try {
            jSONObjectA.put("tid", bVarA2.a());
            jSONObjectA.put("user_agent", bVarA.c().a(bVarA2));
            jSONObjectA.put("has_alipay", n.b(bVarA.b(), i.f1112a));
            jSONObjectA.put("has_msp_app", n.a(bVarA.b()));
            jSONObjectA.put("external_info", str);
            jSONObjectA.put("app_key", "2014052600006128");
            jSONObjectA.put("utdid", bVarA.e());
            jSONObjectA.put("new_client_key", bVarA2.b());
            jSONObjectA.put("pa", bVarA.c().a(bVarA.b()));
        } catch (Throwable th) {
            com.alipay.sdk.util.c.a(th);
        }
        return jSONObjectA.toString();
    }

    private static boolean a(a.b bVar) {
        return Boolean.valueOf(a(bVar, "msp-gzip")).booleanValue();
    }

    private static String a(a.b bVar, String str) {
        List<String> list;
        if (bVar == null || str == null || bVar.f1302a == null || (list = bVar.f1302a.get(str)) == null) {
            return null;
        }
        return TextUtils.join(Constants.ACCEPT_TIME_SEPARATOR_SP, list);
    }

    protected String a(HashMap<String, String> map, HashMap<String, String> map2) throws JSONException {
        JSONObject jSONObject = new JSONObject();
        JSONObject jSONObject2 = new JSONObject();
        if (map != null) {
            for (Map.Entry<String, String> entry : map.entrySet()) {
                jSONObject2.put(entry.getKey(), entry.getValue());
            }
        }
        if (map2 != null) {
            JSONObject jSONObject3 = new JSONObject();
            for (Map.Entry<String, String> entry2 : map2.entrySet()) {
                jSONObject3.put(entry2.getKey(), entry2.getValue());
            }
            jSONObject2.put("params", jSONObject3);
        }
        jSONObject.put("data", jSONObject2);
        return jSONObject.toString();
    }

    private boolean a(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        try {
            JSONObject jSONObject = new JSONObject(str).getJSONObject("data");
            if (!jSONObject.has("params")) {
                return false;
            }
            String strOptString = jSONObject.getJSONObject("params").optString("public_key", null);
            if (TextUtils.isEmpty(strOptString)) {
                return false;
            }
            com.alipay.sdk.sys.b.a().c().a(strOptString);
            return true;
        } catch (JSONException e2) {
            com.alipay.sdk.util.c.a(e2);
            return false;
        }
    }

    public b a(Context context) throws Throwable {
        return a(context, "");
    }

    public b a(Context context, String str) throws Throwable {
        return a(context, str, m.a(context));
    }

    public b a(Context context, String str, String str2) throws Throwable {
        return a(context, str, str2, true);
    }

    protected b a(Context context, String str, String str2, boolean z) throws Throwable {
        com.alipay.sdk.util.c.b("", "PacketTask::request url >" + str2);
        c cVar = new c(this.s);
        d dVarA = cVar.a(new b(c(), a(str, a())), this.r);
        a.b bVarA = com.alipay.sdk.net.a.a(context, new a.C0030a(str2, a(dVarA.a(), str), dVarA.b()));
        if (bVarA == null) {
            throw new RuntimeException("Response is null.");
        }
        b bVarA2 = cVar.a(new d(a(bVarA), bVarA.c));
        return (bVarA2 != null && a(bVarA2.a()) && z) ? a(context, str, str2, false) : bVarA2;
    }
}
