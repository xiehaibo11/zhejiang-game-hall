package com.mbridge.msdk.video.bt.a;

import android.text.TextUtils;
import android.util.Base64;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.meizu.cloud.pushsdk.constants.PushConstants;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: HandlerH5MessageManager.java */
/* JADX INFO: loaded from: classes3.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    int f4074a;
    int b;
    private String c;

    private b() {
        this.c = "handlerNativeResult";
        this.f4074a = 0;
        this.b = 1;
    }

    /* JADX INFO: compiled from: HandlerH5MessageManager.java */
    private static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static b f4075a = new b();
    }

    public static b a() {
        return a.f4075a;
    }

    public final void a(Object obj, JSONObject jSONObject) {
        if (jSONObject != null) {
            try {
                if (!TextUtils.isEmpty(jSONObject.toString())) {
                    String strOptString = jSONObject.optString("uniqueIdentifier");
                    String strOptString2 = jSONObject.optString("name");
                    if (!TextUtils.isEmpty(strOptString) && !TextUtils.isEmpty(strOptString2)) {
                        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray(PushConstants.PARAMS);
                        JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("result");
                        int iOptInt = 0;
                        if (jSONObjectOptJSONObject != null && !TextUtils.isEmpty(jSONObjectOptJSONObject.toString())) {
                            iOptInt = jSONObjectOptJSONObject.optInt("type", 0);
                        }
                        a(this.f4074a, "receivedMessage", obj);
                        if (strOptString.equalsIgnoreCase("reporter")) {
                            com.mbridge.msdk.mbjscommon.a.a.a().a(obj, strOptString2, jSONArrayOptJSONArray, iOptInt);
                            return;
                        } else {
                            if (strOptString.equalsIgnoreCase("MediaPlayer")) {
                                com.mbridge.msdk.video.bt.a.a.a().a(obj, strOptString2, jSONArrayOptJSONArray, iOptInt);
                                return;
                            }
                            return;
                        }
                    }
                    a(this.b, "module or method is null", obj);
                    return;
                }
            } catch (Exception e) {
                z.a("HandlerH5MessageManager", e.getMessage());
                a(this.b, e.getMessage(), obj);
                return;
            } catch (Throwable th) {
                z.a("HandlerH5MessageManager", th.getMessage());
                a(this.b, th.getMessage(), obj);
                return;
            }
        }
        a(this.b, "params is null", obj);
    }

    private void a(int i, String str, Object obj) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", i);
            jSONObject.put("message", str);
            h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (JSONException e) {
            z.a("HandlerH5MessageManager", e.getMessage());
        } catch (Throwable th) {
            z.a("HandlerH5MessageManager", th.getMessage());
        }
    }
}
