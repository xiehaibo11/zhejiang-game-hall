package com.tkay.expressad.video.bt.a;

import android.text.TextUtils;
import android.util.Base64;
import com.meizu.cloud.pushsdk.constants.PushConstants;
import com.tkay.expressad.atsignalcommon.windvane.j;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class b {
    private static final String c = "HandlerH5MessageManager";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    int f7165a;
    int b;
    private String d;

    /* synthetic */ b(byte b) {
        this();
    }

    private b() {
        this.d = "handlerNativeResult";
        this.f7165a = 0;
        this.b = 1;
    }

    private static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static b f7166a = new b(0);

        private a() {
        }
    }

    public static b a() {
        return a.f7166a;
    }

    public final void a(Object obj, JSONObject jSONObject) {
        try {
            if (TextUtils.isEmpty(jSONObject.toString())) {
                a(this.b, "params is null", obj);
                return;
            }
            String strOptString = jSONObject.optString("uniqueIdentifier");
            String strOptString2 = jSONObject.optString("name");
            if (!TextUtils.isEmpty(strOptString) && !TextUtils.isEmpty(strOptString2)) {
                JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray(PushConstants.PARAMS);
                JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("result");
                if (jSONObjectOptJSONObject != null && !TextUtils.isEmpty(jSONObjectOptJSONObject.toString())) {
                    jSONObjectOptJSONObject.optInt("type", 0);
                }
                a(this.f7165a, "receivedMessage", obj);
                if (strOptString.equalsIgnoreCase("reporter") || !strOptString.equalsIgnoreCase("MediaPlayer")) {
                    return;
                }
                com.tkay.expressad.video.bt.a.a.a().a(obj, strOptString2, jSONArrayOptJSONArray);
                return;
            }
            a(this.b, "module or method is null", obj);
        } catch (Exception e) {
            e.getMessage();
            a(this.b, e.getMessage(), obj);
        } catch (Throwable th) {
            th.getMessage();
            a(this.b, th.getMessage(), obj);
        }
    }

    private static void a(int i, String str, Object obj) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", i);
            jSONObject.put("message", str);
            j.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (JSONException e) {
            e.getMessage();
        } catch (Throwable th) {
            th.getMessage();
        }
    }
}
