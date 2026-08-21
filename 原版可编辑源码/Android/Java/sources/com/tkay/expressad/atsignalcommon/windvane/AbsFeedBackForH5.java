package com.tkay.expressad.atsignalcommon.windvane;

import android.content.Context;
import android.text.TextUtils;
import android.util.Base64;
import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import com.tkay.expressad.foundation.h.t;
import org.json.JSONObject;

public abstract class AbsFeedBackForH5 extends l {
    public static final String a = "onFeedbackAlertStatusNotify";
    public static final String b = "status";
    public static final int c = 1;
    public static final int d = 2;
    private static int i = 0;
    private static int j = 1;
    private String h = "AbsFeedBackForH5";

    public void feedbackOperate(Object obj, String str) {
        try {
            if (!TextUtils.isEmpty(str)) {
                a aVar = (a) obj;
                JSONObject jSONObject = new JSONObject(str);
                int iOptInt = jSONObject.optInt("view_visible", 1);
                String strOptString = jSONObject.optString("key", "");
                com.tkay.expressad.foundation.f.b bVarA = com.tkay.expressad.foundation.f.b.a();
                int i2 = iOptInt == 1 ? 8 : 0;
                WindVaneWebView windVaneWebView = aVar.a;
                com.tkay.expressad.foundation.f.a.a aVarA = bVarA.a(strOptString);
                if (aVarA.c() != null) {
                    aVarA.a(i2);
                    if (i2 == 0) {
                        bVarA.a(strOptString, com.tkay.core.common.b.m.a().f(), windVaneWebView, null, null);
                    }
                }
            }
            callbackSuccess(obj);
        } catch (Throwable th) {
            callbackExcep(obj, th.getMessage());
            th.printStackTrace();
        }
    }

    public void feedbackLayoutOperate(Object obj, String str) {
        try {
            if (!TextUtils.isEmpty(str)) {
                JSONObject jSONObject = new JSONObject(str);
                int iOptInt = jSONObject.optInt("width", -1);
                int iOptInt2 = jSONObject.optInt("height", -1);
                int iOptInt3 = jSONObject.optInt("radius", 20);
                int iOptInt4 = jSONObject.optInt(TtmlNode.LEFT, -1);
                int iOptInt5 = jSONObject.optInt("top", -1);
                double dOptDouble = jSONObject.optDouble("opacity", 1.0d);
                String strOptString = jSONObject.optString("fontColor", "");
                String strOptString2 = jSONObject.optString("bgColor", "");
                com.tkay.expressad.foundation.f.a.a aVarA = com.tkay.expressad.foundation.f.b.a().a(jSONObject.optString("key", ""));
                Context contextF = com.tkay.core.common.b.m.a().f();
                aVarA.a(t.b(contextF, iOptInt4), t.b(contextF, iOptInt5), t.b(contextF, iOptInt), t.b(contextF, iOptInt2), t.b(contextF, iOptInt3), (float) dOptDouble, strOptString, strOptString2);
            }
            callbackSuccess(obj);
        } catch (Throwable th) {
            callbackExcep(obj, th.getMessage());
            th.printStackTrace();
        }
    }

    public void feedbackPopupOperate(Object obj, String str) {
        try {
            if (!TextUtils.isEmpty(str)) {
                JSONObject jSONObject = new JSONObject(str);
                int iOptInt = jSONObject.optInt("view_visible", 1);
                com.tkay.expressad.foundation.f.a.a aVarA = com.tkay.expressad.foundation.f.b.a().a(jSONObject.optString("key", ""));
                if (iOptInt == 1) {
                    aVarA.b();
                } else {
                    aVarA.a();
                }
            }
            callbackSuccess(obj);
        } catch (Throwable th) {
            callbackExcep(obj, th.getMessage());
            th.printStackTrace();
        }
    }

    public void callbackSuccess(Object obj) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", i);
            jSONObject.put("message", "");
            jSONObject.put("data", new JSONObject());
            j.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e) {
            callbackExcep(obj, e.getMessage());
            e.getMessage();
        }
    }

    public void callbackExcep(Object obj, String str) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", j);
            jSONObject.put("message", str);
            jSONObject.put("data", new JSONObject());
            j.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e) {
            e.getMessage();
        }
    }

    public void callbackSuccessWithData(Object obj, JSONObject jSONObject) {
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("code", i);
            jSONObject2.put("message", "");
            jSONObject2.put("data", jSONObject);
            j.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
        } catch (Exception e) {
            callbackExcep(obj, e.getMessage());
            e.getMessage();
        }
    }

    public void getCacheKey(Object obj, String str) {
        try {
            com.tkay.expressad.atsignalcommon.c.a.a().a(obj);
        } catch (Throwable th) {
            callbackExcep(obj, th.getMessage());
            th.printStackTrace();
        }
    }

    public void startShake(Object obj, String str) {
        try {
            if (!TextUtils.isEmpty(str)) {
                JSONObject jSONObject = new JSONObject(str);
                jSONObject.optInt("deviceMotionUpdateInterval", 1);
                com.tkay.expressad.atsignalcommon.c.a.a().a(obj, ((a) obj).a, jSONObject.optString("oldCache", ""), jSONObject.optString("cache", ""));
            }
            callbackSuccess(obj);
        } catch (Throwable th) {
            callbackExcep(obj, th.getMessage());
            th.printStackTrace();
        }
    }

    public void stopShake(Object obj, String str) {
        try {
            if (!TextUtils.isEmpty(str)) {
                com.tkay.expressad.atsignalcommon.c.a.a().a(obj, ((a) obj).a, new JSONObject(str).optString("cache", ""));
            }
            callbackSuccess(obj);
        } catch (Throwable th) {
            callbackExcep(obj, th.getMessage());
            th.printStackTrace();
        }
    }
}
