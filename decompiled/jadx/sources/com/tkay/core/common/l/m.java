package com.tkay.core.common.l;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.core.api.IExHandler;
import java.util.Iterator;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class m {
    public static final String A = "it_src";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f6247a = "platform";
    public static final String b = "os_vn";
    public static final String c = "os_vc";
    public static final String d = "package_name";
    public static final String e = "app_vn";
    public static final String f = "app_vc";
    public static final String g = "brand";
    public static final String h = "model";
    public static final String i = "screen";
    public static final String j = "network_type";
    public static final String k = "mnc";
    public static final String l = "mcc";
    public static final String m = "language";
    public static final String n = "timezone";
    public static final String o = "sdk_ver";
    public static final String p = "gp_ver";
    public static final String q = "nw_ver";
    public static final String r = "ua";
    public static final String s = "orient";
    public static final String t = "system";
    public static final String u = "android_id";
    public static final String v = "gaid";
    public static final String w = "channel";
    public static final String x = "sub_channel";
    public static final String y = "upid";
    public static final String z = "ps_id";

    private static JSONObject b() {
        JSONObject jSONObject = new JSONObject();
        Context contextF = com.tkay.core.common.b.m.a().f();
        try {
            jSONObject.put("platform", 1);
            jSONObject.put("os_vn", d.e());
            jSONObject.put("os_vc", d.d());
            jSONObject.put("package_name", d.k(contextF));
            jSONObject.put("app_vn", d.i(contextF));
            jSONObject.put("app_vc", d.h(contextF));
            jSONObject.put("brand", d.b());
            jSONObject.put("model", d.a());
            jSONObject.put("screen", d.j(contextF));
            jSONObject.put("network_type", String.valueOf(d.m(contextF)));
            jSONObject.put("mnc", d.c(contextF));
            jSONObject.put("mcc", d.b(contextF));
            jSONObject.put("language", d.f(contextF));
            jSONObject.put("timezone", d.c());
            jSONObject.put("sdk_ver", g.a());
            jSONObject.put("gp_ver", d.n(contextF));
            jSONObject.put("ua", d.i());
            jSONObject.put("orient", d.g(contextF));
            jSONObject.put("system", 1);
            if (!TextUtils.isEmpty(com.tkay.core.common.b.m.a().m())) {
                jSONObject.put("channel", com.tkay.core.common.b.m.a().m());
            }
            if (!TextUtils.isEmpty(com.tkay.core.common.b.m.a().n())) {
                jSONObject.put("sub_channel", com.tkay.core.common.b.m.a().n());
            }
            jSONObject.put("upid", com.tkay.core.common.b.m.a().w());
            jSONObject.put("ps_id", com.tkay.core.common.b.m.a().q());
        } catch (Exception unused) {
        }
        return jSONObject;
    }

    private static JSONObject c() {
        String strF;
        Context contextF = com.tkay.core.common.b.m.a().f();
        JSONObject jSONObject = new JSONObject();
        com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(contextF).b(com.tkay.core.common.b.m.a().o());
        if (aVarB != null) {
            try {
                strF = aVarB.F();
            } catch (Exception unused) {
            }
        } else {
            strF = "";
        }
        boolean z2 = true;
        if (!TextUtils.isEmpty(strF)) {
            try {
                JSONObject jSONObject2 = new JSONObject(strF);
                if (!jSONObject2.isNull("a")) {
                    if (jSONObject2.optInt("a") != 1) {
                        z2 = false;
                    }
                }
            } catch (Exception unused2) {
            }
        }
        jSONObject.put("android_id", z2 ? d.d(contextF) : "");
        jSONObject.put("gaid", d.f());
        IExHandler iExHandlerB = com.tkay.core.common.b.m.a().b();
        if (iExHandlerB != null) {
            iExHandlerB.fillRequestData(jSONObject, aVarB);
            jSONObject.put("is_cn_sdk", "1");
        } else {
            jSONObject.put("is_cn_sdk", "0");
        }
        String strL = d.l(contextF);
        jSONObject.put("it_src", TextUtils.isEmpty(strL) ? "" : strL);
        return jSONObject;
    }

    public static JSONObject a() {
        JSONObject jSONObjectB = b();
        JSONObject jSONObjectC = c();
        try {
            jSONObjectB.put("app_id", com.tkay.core.common.b.m.a().o());
            Iterator<String> itKeys = jSONObjectC.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                jSONObjectB.put(next, jSONObjectC.opt(next));
            }
        } catch (JSONException unused) {
        }
        return jSONObjectB;
    }
}
