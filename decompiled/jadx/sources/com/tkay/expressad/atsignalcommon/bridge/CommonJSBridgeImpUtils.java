package com.tkay.expressad.atsignalcommon.bridge;

import android.text.TextUtils;
import android.util.Base64;
import com.tkay.core.common.b.m;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.g.a;
import com.tkay.expressad.foundation.g.a.f;
import com.tkay.expressad.foundation.h.t;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class CommonJSBridgeImpUtils {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f6421a = CommonJSBridgeImpUtils.class.getSimpleName();
    public static int b = 0;
    public static int c = 1;

    public static void increaseOfferFrequence(Object obj, JSONObject jSONObject) {
        try {
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("data");
            if (jSONObjectOptJSONObject == null) {
                callbackExcep(obj, "data is empty");
                return;
            }
            c cVarB = c.b(jSONObjectOptJSONObject);
            if (cVarB == null) {
                callbackExcep(obj, "data camapign is empty");
            } else {
                updateFrequence(cVarB);
                callbackSuccess(obj, "");
            }
        } catch (Throwable th) {
            callbackExcep(obj, th.getMessage());
        }
    }

    public static void updateFrequence(final c cVar) {
        new Thread(new Runnable() { // from class: com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils.1
            @Override // java.lang.Runnable
            public void run() {
                try {
                    CommonJSBridgeImpUtils.a(cVar.K(), cVar);
                } catch (Throwable th) {
                    String str = CommonJSBridgeImpUtils.f6421a;
                    th.getMessage();
                }
            }
        }).start();
    }

    private static void b(String str, c cVar) {
        if (f.n == null || TextUtils.isEmpty(cVar.aZ())) {
            return;
        }
        f.a(str, cVar, f.e);
    }

    public static String buildClickJsonObject(float f, float f2) {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put(a.cc, t.a(m.a().f(), f));
            jSONObject2.put(a.cd, t.a(m.a().f(), f2));
            jSONObject2.put(a.cf, 0);
            jSONObject2.put(a.cg, m.a().f().getResources().getConfiguration().orientation);
            jSONObject2.put(a.ch, t.c(m.a().f()));
            jSONObject.put(a.ce, jSONObject2);
        } catch (Exception e) {
            e.printStackTrace();
        }
        return jSONObject.toString();
    }

    public static String codeToJsonString(int i) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", i);
            String string = jSONObject.toString();
            return !TextUtils.isEmpty(string) ? Base64.encodeToString(string.getBytes(), 2) : "";
        } catch (Throwable unused) {
            return "";
        }
    }

    public static void callbackExcep(Object obj, String str) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", c);
            jSONObject.put("message", str);
            jSONObject.put("data", new JSONObject());
            j.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e) {
            e.getMessage();
        }
    }

    public static void callbackSuccess(Object obj, String str) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", b);
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("id", str);
            jSONObject.put("data", jSONObject2);
            j.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e) {
            callbackExcep(obj, e.getMessage());
            e.getMessage();
        }
    }

    static /* synthetic */ void a(String str, c cVar) {
        if (f.n == null || TextUtils.isEmpty(cVar.aZ())) {
            return;
        }
        f.a(str, cVar, f.e);
    }
}
