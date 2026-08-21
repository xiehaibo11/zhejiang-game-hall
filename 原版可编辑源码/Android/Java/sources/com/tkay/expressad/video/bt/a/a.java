package com.tkay.expressad.video.bt.a;

import android.text.TextUtils;
import android.util.Base64;
import com.sigmob.sdk.base.mta.PointCategory;
import com.tkay.expressad.advanced.js.NativeAdvancedJsUtils;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.video.bt.module.TkayBTVideoView;
import java.util.LinkedHashMap;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class a {
    private static final String c = a.class.getSimpleName();
    private static LinkedHashMap<String, TkayBTVideoView> e = new LinkedHashMap<>();
    private String d = "handlerNativeResult";
    int a = 0;
    int b = 1;

    private static final class a {
        private static a a = new a();

        private a() {
        }
    }

    public static a a() {
        return a.a;
    }

    public static void a(String str, TkayBTVideoView tkayBTVideoView) {
        e.put(str, tkayBTVideoView);
    }

    public static void a(String str) {
        e.remove(str);
    }

    /* JADX WARN: Removed duplicated region for block: B:58:0x00d8  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a(Object obj, String str, JSONArray jSONArray) {
        JSONObject jSONObjectOptJSONObject;
        JSONObject jSONObjectOptJSONObject2;
        float f;
        String strOptString = "";
        if (jSONArray != null) {
            try {
                if (jSONArray.length() > 0 && (jSONObjectOptJSONObject = jSONArray.optJSONObject(0)) != null) {
                    String strOptString2 = jSONObjectOptJSONObject.optString("key");
                    int iOptInt = jSONObjectOptJSONObject.optInt("type", 7);
                    if ("instanceId".equalsIgnoreCase(strOptString2) && iOptInt == 0) {
                        strOptString = jSONObjectOptJSONObject.optString("value");
                    }
                }
            } catch (Throwable th) {
                th.getMessage();
                a(this.b, "exception:" + th.getMessage(), obj);
                return;
            }
        }
        if (TextUtils.isEmpty(strOptString)) {
            a(this.b, "instanceId find error", obj);
            return;
        }
        if (!e.containsKey(strOptString)) {
            a(this.b, "can not find player", obj);
            return;
        }
        if (PointCategory.PLAY.equalsIgnoreCase(str)) {
            TkayBTVideoView tkayBTVideoView = e.get(strOptString);
            if (tkayBTVideoView != null) {
                tkayBTVideoView.play();
                return;
            } else {
                a(this.b, "player is null", obj);
                return;
            }
        }
        if ("pause".equalsIgnoreCase(str)) {
            TkayBTVideoView tkayBTVideoView2 = e.get(strOptString);
            if (tkayBTVideoView2 != null) {
                tkayBTVideoView2.pause();
                return;
            } else {
                a(this.b, "player is null", obj);
                return;
            }
        }
        if ("stop".equalsIgnoreCase(str)) {
            TkayBTVideoView tkayBTVideoView3 = e.get(strOptString);
            if (tkayBTVideoView3 != null) {
                tkayBTVideoView3.stop();
                return;
            } else {
                a(this.b, "player is null", obj);
                return;
            }
        }
        if (NativeAdvancedJsUtils.h.equalsIgnoreCase(str)) {
            float fOptDouble = 0.0f;
            if (jSONArray == null || jSONArray.length() <= 2) {
                f = 0.0f;
            } else {
                JSONObject jSONObjectOptJSONObject3 = jSONArray.optJSONObject(1);
                JSONObject jSONObjectOptJSONObject4 = jSONArray.optJSONObject(2);
                if (jSONObjectOptJSONObject3 != null) {
                    float fOptDouble2 = ("leftVolume".equalsIgnoreCase(jSONObjectOptJSONObject3.optString("key")) && jSONObjectOptJSONObject3.optInt("type", 7) == 3) ? (float) jSONObjectOptJSONObject3.optDouble("value") : 0.0f;
                    if (jSONObjectOptJSONObject4 != null) {
                        String strOptString3 = jSONObjectOptJSONObject4.optString("key");
                        int iOptInt2 = jSONObjectOptJSONObject4.optInt("type", 7);
                        if ("rightVolume".equalsIgnoreCase(strOptString3) && iOptInt2 == 3) {
                            fOptDouble = (float) jSONObjectOptJSONObject4.optDouble("value");
                        }
                    }
                    f = fOptDouble;
                    fOptDouble = fOptDouble2;
                }
            }
            TkayBTVideoView tkayBTVideoView4 = e.get(strOptString);
            if (tkayBTVideoView4 != null) {
                tkayBTVideoView4.setVolume(fOptDouble, f);
                return;
            } else {
                a(this.b, "player is null", obj);
                return;
            }
        }
        if ("setPlaybackParams".equalsIgnoreCase(str)) {
            float fOptDouble3 = 1.0f;
            if (jSONArray != null && jSONArray.length() > 1 && (jSONObjectOptJSONObject2 = jSONArray.optJSONObject(1)) != null) {
                String strOptString4 = jSONObjectOptJSONObject2.optString("key");
                int iOptInt3 = jSONObjectOptJSONObject2.optInt("type", 7);
                if ("speed".equalsIgnoreCase(strOptString4) && iOptInt3 == 3) {
                    fOptDouble3 = (float) jSONObjectOptJSONObject2.optDouble("value");
                }
            }
            TkayBTVideoView tkayBTVideoView5 = e.get(strOptString);
            if (tkayBTVideoView5 != null) {
                tkayBTVideoView5.setPlaybackParams(fOptDouble3);
                return;
            } else {
                a(this.b, "player is null", obj);
                return;
            }
        }
        a(this.b, "method not found", obj);
    }

    private static void a(int i, String str, Object obj) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", i);
            jSONObject.put("message", str);
            j.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (JSONException e2) {
            e2.getMessage();
        } catch (Throwable th) {
            th.getMessage();
        }
    }
}
