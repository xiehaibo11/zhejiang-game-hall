package com.reyun.tracking.utils;

import android.content.Context;
import android.support.v4.os.EnvironmentCompat;
import com.reyun.tracking.sdk.Tracking;
import java.util.Map;
import org.json.JSONObject;

public class c {
    public static void a(Context context, String str, Map map) {
        try {
            if (context == null) {
                com.reyun.tracking.a.a.d(Tracking.TAG, "context is null reportSDKLog what:" + str);
                return;
            }
            String appId = Tracking.getAppId();
            if (!com.reyun.tracking.a.a.a(appId)) {
                com.reyun.tracking.a.a.d(Tracking.TAG, "appid is null reportSDKLog what:" + str);
                return;
            }
            JSONObject jSONObjectA = com.reyun.tracking.a.h.a(context, appId, str, f.a(context, Tracking.XML_LOGIN, Tracking.KEY_ACCOUNT, EnvironmentCompat.MEDIA_UNKNOWN), Tracking.getChannelId(), true);
            com.reyun.tracking.a.a.a(map, jSONObjectA);
            s sVar = new s(str, context, Tracking.addRecordToDbase(str, jSONObjectA, 1), null);
            sVar.a(false);
            d.a(context, str, "receive/tkio/sdklog", jSONObjectA, 1, sVar);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
