package com.reyun.tracking.a;

import android.content.Context;
import android.os.Build;
import android.support.v4.os.EnvironmentCompat;
import android.text.TextUtils;
import com.bykv.vk.openvk.live.TTLiveConstants;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.reyun.tracking.sdk.Tracking;
import java.util.regex.Pattern;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static String f4703a = "unknown";
    static boolean b = false;
    private static String c = null;
    private static String d = "unknown";
    private static String e = "unknown";

    private static String a(Context context) {
        String str = f4703a;
        if (str != null) {
            return str;
        }
        String strA = com.reyun.tracking.utils.f.a(context, "tracking_device_id_cache", "oaid", EnvironmentCompat.MEDIA_UNKNOWN);
        if (!EnvironmentCompat.MEDIA_UNKNOWN.equals(strA)) {
            f4703a = strA;
            return strA;
        }
        String strA2 = com.reyun.tracking.utils.f.a(context, "tracking_device_id_cache", "device_id");
        if (!"oaid".equals(com.reyun.tracking.utils.f.a(context, "tracking_device_id_cache", "device_id_type"))) {
            return f4703a;
        }
        f4703a = strA2;
        return strA2;
    }

    public static JSONObject a(Context context, String str, String str2, String str3, String str4, boolean z) {
        JSONObject jSONObject = new JSONObject();
        jSONObject.put("appid", str);
        jSONObject.put("who", str3);
        jSONObject.put("what", str2);
        jSONObject.put(RemoteMessageConst.Notification.WHEN, a.a(System.currentTimeMillis() + b(context)));
        jSONObject.put(TTLiveConstants.CONTEXT_KEY, a(context, str4, str, z));
        return jSONObject;
    }

    public static JSONObject a(Context context, String str, String str2, boolean z) {
        JSONObject jSONObject = new JSONObject();
        jSONObject.put("_app_version", a.k(context));
        jSONObject.put("_campaignid", str);
        jSONObject.put("_ryosversion", Build.VERSION.RELEASE);
        jSONObject.put("_rydevicetype", Build.MODEL);
        jSONObject.put("_ryandroid8version", Build.VERSION.SDK_INT);
        jSONObject.put("_carrier", a.h(context));
        jSONObject.put("_pkgname", a.a(context));
        jSONObject.put("_lib_version", "1.9.5");
        jSONObject.put("_model", Build.MODEL);
        jSONObject.put("_istablet", a.l(context) ? "table" : "phone");
        jSONObject.put("_ryos", i.b);
        jSONObject.put("_lib", i.b);
        jSONObject.put("_tz", a.a());
        jSONObject.put("_manufacturer", Build.MANUFACTURER);
        jSONObject.put("_create_timestamp", System.currentTimeMillis() + b(context));
        jSONObject.put("_resolution", a.i(context));
        jSONObject.put("_androidid", a.c(context));
        jSONObject.put("_network_type", a.j(context));
        if (z) {
            f fVarF = a.f(context);
            jSONObject.put("_deviceid", fVarF.a());
            jSONObject.put("dev_type", fVarF.b());
            jSONObject.put("_imei", fVarF.a());
        } else {
            jSONObject.put("_imei", a.b(context));
            jSONObject.put("_deviceid", a.b(context));
            jSONObject.put("dev_type", a.b());
        }
        jSONObject.put("_ipv6", a.c());
        jSONObject.put("_oaid", a(context));
        jSONObject.put("_oaid_limited", b);
        jSONObject.put("_imei2", a.d(context));
        jSONObject.put("_meid", a.e(context));
        jSONObject.put("_screen_brightness", a.n(context));
        jSONObject.put("_audio_volume", a.o(context));
        return jSONObject;
    }

    public static void a(Context context, String str, boolean z) {
        f4703a = str;
        b = z;
        if (TextUtils.isEmpty(str) || EnvironmentCompat.MEDIA_UNKNOWN.equals(f4703a) || Pattern.matches("^[0]+-[0]+-[0]+-[0]+-[0]+$", f4703a) || Pattern.matches("^[0]+$", f4703a)) {
            return;
        }
        com.reyun.tracking.utils.f.b(context, "tracking_device_id_cache", "oaid", str);
    }

    public static void a(JSONObject jSONObject, Context context) {
        JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(TTLiveConstants.CONTEXT_KEY);
        if (jSONObjectOptJSONObject != null) {
            try {
                jSONObjectOptJSONObject.put("_timestamp", System.currentTimeMillis() + b(context));
            } catch (JSONException e2) {
                e2.printStackTrace();
            }
        }
    }

    private static long b(Context context) {
        if (context == null) {
            return 0L;
        }
        return com.reyun.tracking.utils.f.a(context, Tracking.XML_INTERVAL, "interval", 0L);
    }

    public static void b(JSONObject jSONObject, Context context) {
        JSONObject jSONObjectOptJSONObject;
        if (Tracking.getUploadMac() && (jSONObjectOptJSONObject = jSONObject.optJSONObject(TTLiveConstants.CONTEXT_KEY)) != null) {
            try {
                jSONObjectOptJSONObject.put("_mac", c(context));
            } catch (JSONException e2) {
                e2.printStackTrace();
            }
        }
    }

    private static String c(Context context) {
        if (!a.b(c)) {
            return c;
        }
        String strA = com.reyun.tracking.utils.f.a(context, "xml_mac", "mac", EnvironmentCompat.MEDIA_UNKNOWN);
        c = strA;
        if (!strA.equals(EnvironmentCompat.MEDIA_UNKNOWN)) {
            return c;
        }
        String strM = a.m(context);
        c = strM;
        com.reyun.tracking.utils.f.b(context, "xml_mac", "mac", strM);
        return c;
    }
}
