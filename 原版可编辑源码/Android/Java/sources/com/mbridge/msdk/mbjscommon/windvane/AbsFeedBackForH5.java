package com.mbridge.msdk.mbjscommon.windvane;

import android.text.TextUtils;
import android.util.Base64;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import org.json.JSONArray;
import org.json.JSONObject;

public abstract class AbsFeedBackForH5 extends j {
    private static int FAILED = 1;
    private static int SUCCESS = 0;
    public static final String WEBVIEW_EVENT_DIALOG_METHOD_NAME = "onFeedbackAlertStatusNotify";
    public static final String WEBVIEW_EVENT_DIALOG_PARAMS_KEY_STATUS = "status";
    public static final int WEBVIEW_EVENT_METHOD_DIALOG_STATUS_DISMISS = 2;
    public static final int WEBVIEW_EVENT_METHOD_DIALOG_STATUS_SHOWED = 1;
    private String TAG = "AbsFeedBackForH5";

    public void feedbackOperate(Object obj, String str) {
        try {
            if (!TextUtils.isEmpty(str)) {
                a aVar = (a) obj;
                JSONObject jSONObject = new JSONObject(str);
                int iOptInt = jSONObject.optInt("view_visible", 1);
                com.mbridge.msdk.foundation.b.b.a().a(jSONObject.optString("key", ""), iOptInt == 1 ? 8 : 0, aVar.a);
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
                double dOptDouble2 = jSONObject.optDouble(TtmlNode.ATTR_TTS_FONT_SIZE, -1.0d);
                JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("padding");
                com.mbridge.msdk.foundation.b.b.a().a(jSONObject.optString("key", ""), iOptInt, iOptInt2, iOptInt3, iOptInt4, iOptInt5, (float) dOptDouble, jSONObject.optString("fontColor", ""), jSONObject.optString("bgColor", ""), (float) dOptDouble2, jSONArrayOptJSONArray);
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
                com.mbridge.msdk.foundation.b.b.a().a(jSONObject.optString("key", ""), iOptInt);
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
            jSONObject.put("code", SUCCESS);
            jSONObject.put("message", "");
            jSONObject.put("data", new JSONObject());
            h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e) {
            callbackExcep(obj, e.getMessage());
            z.a(this.TAG, e.getMessage());
        }
    }

    public void callbackExcep(Object obj, String str) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", FAILED);
            jSONObject.put("message", str);
            jSONObject.put("data", new JSONObject());
            h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e) {
            z.a(this.TAG, e.getMessage());
        }
    }

    public void callbackSuccessWithData(Object obj, JSONObject jSONObject) {
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("code", SUCCESS);
            jSONObject2.put("message", "");
            jSONObject2.put("data", jSONObject);
            h.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
        } catch (Exception e) {
            callbackExcep(obj, e.getMessage());
            z.a(this.TAG, e.getMessage());
        }
    }

    public void getCacheKey(Object obj, String str) {
        try {
            com.mbridge.msdk.mbjscommon.d.a.a().a(obj);
        } catch (Throwable th) {
            callbackExcep(obj, th.getMessage());
            th.printStackTrace();
        }
    }

    public void startShake(Object obj, String str) {
        try {
            if (!TextUtils.isEmpty(str)) {
                JSONObject jSONObject = new JSONObject(str);
                int iOptInt = jSONObject.optInt("deviceMotionUpdateInterval", 1);
                com.mbridge.msdk.mbjscommon.d.a.a().a(obj, ((a) obj).a, jSONObject.optString("oldCache", ""), jSONObject.optString("cache", ""), iOptInt);
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
                com.mbridge.msdk.mbjscommon.d.a.a().a(obj, ((a) obj).a, new JSONObject(str).optString("cache", ""));
            }
            callbackSuccess(obj);
        } catch (Throwable th) {
            callbackExcep(obj, th.getMessage());
            th.printStackTrace();
        }
    }
}
