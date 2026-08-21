package com.tkay.core.common.l;

import android.text.TextUtils;
import android.util.Log;
import com.tkay.core.api.TYSDK;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.aj;
import com.tkay.core.common.v;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public final class n {
    public static final String a = "tkay_bidding";

    public static void a(String str, com.tkay.core.common.f.d dVar, String str2, aj ajVar, int i, int i2) {
        a(str, dVar, str2, ajVar, i, i2, null);
    }

    public static void a(String str, com.tkay.core.common.f.d dVar, String str2, aj ajVar, int i, int i2, List<String> list) {
        if (TYSDK.isNetworkLogDebug()) {
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put(com.tkay.expressad.foundation.d.r.ac, str2);
                jSONObject.put(com.tkay.expressad.videocommon.e.b.v, str);
                jSONObject.put("adtype", dVar.Z());
                jSONObject.put("adsourceId", ajVar.t());
                jSONObject.put("networkFirmId", ajVar.c());
                jSONObject.put("content", dVar.G());
                jSONObject.put("hourly_frequency", i);
                jSONObject.put("hourly_limit", ajVar.f());
                jSONObject.put("daily_frequency", i2);
                jSONObject.put("daily_limit", ajVar.e());
                jSONObject.put("pacing_limit", ajVar.s());
                jSONObject.put("request_fail_interval", ajVar.G());
                jSONObject.put("filter_source_ids", list != null ? list : "");
                a("tkay_network", jSONObject.toString(), true);
            } catch (Throwable unused) {
            }
        }
    }

    public static void a(String str, String str2, String str3, aj ajVar) {
        if (TYSDK.isNetworkLogDebug()) {
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("action", f.i.B);
                jSONObject.put("result", str);
                jSONObject.put(com.tkay.expressad.videocommon.e.b.v, str2);
                jSONObject.put("adtype", str3);
                jSONObject.put("adsourceId", ajVar.t());
                jSONObject.put("networkFirmId", ajVar.c());
                jSONObject.put("content", ajVar.g());
                jSONObject.put("msg", ajVar.z());
                a(a, jSONObject.toString(), TextUtils.equals(f.i.m, str));
            } catch (Throwable unused) {
            }
        }
    }

    private static void a(String str, String str2, String str3, String str4) {
        if (TYSDK.isNetworkLogDebug()) {
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("action", f.i.C);
                jSONObject.put("result", str);
                jSONObject.put(com.tkay.expressad.videocommon.e.b.v, str2);
                jSONObject.put("adtype", str3);
                jSONObject.put("errorMsg", str4);
                a("tkay_network", jSONObject.toString(), TextUtils.equals(f.i.m, str));
            } catch (Throwable unused) {
            }
        }
    }

    public static void a(String str, String str2) {
        if (TYSDK.isNetworkLogDebug()) {
            a("tkay_".concat(String.valueOf(str)), str2, false);
        }
    }

    public static void a(String str, String str2, boolean z) {
        String property = System.getProperty("line.separator");
        try {
            if (str2.startsWith("{")) {
                str2 = new JSONObject(str2).toString(4);
            } else if (str2.startsWith("[")) {
                str2 = new JSONArray(str2).toString(4);
            }
        } catch (JSONException unused) {
        }
        String str3 = "╔═══════════════════════════════════════════════════════════════════════════════════════";
        for (String str4 : str2.split(property)) {
            str3 = (str3 + "\n") + "║ " + str4;
        }
        String str5 = str3 + "\n╚═══════════════════════════════════════════════════════════════════════════════════════";
        if (z) {
            StringBuilder sb = new StringBuilder();
            sb.append(str);
            sb.append(com.tkay.core.common.b.m.a().u() ? "(DebuggerMode)" : "");
            Log.e(sb.toString(), " \n".concat(String.valueOf(str5)));
            return;
        }
        StringBuilder sb2 = new StringBuilder();
        sb2.append(str);
        sb2.append(com.tkay.core.common.b.m.a().u() ? "(DebuggerMode)" : "");
        Log.i(sb2.toString(), " \n".concat(String.valueOf(str5)));
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    public static void a(String str, String str2, String str3, String str4, String str5) {
        String str6;
        if (TYSDK.isNetworkLogDebug()) {
            byte b = -1;
            switch (str2.hashCode()) {
                case 48:
                    if (str2.equals("0")) {
                        b = 0;
                    }
                    break;
                case 49:
                    if (str2.equals("1")) {
                        b = 1;
                    }
                    break;
                case 50:
                    if (str2.equals("2")) {
                        b = 2;
                    }
                    break;
                case 51:
                    if (str2.equals("3")) {
                        b = 3;
                    }
                    break;
                case 52:
                    if (str2.equals("4")) {
                        b = 4;
                    }
                    break;
            }
            if (b == 0) {
                str6 = f.i.r;
            } else if (b == 1) {
                str6 = f.i.q;
            } else if (b == 2) {
                str6 = f.i.o;
            } else if (b == 3) {
                str6 = f.i.p;
            } else {
                str6 = b != 4 ? "" : f.i.s;
            }
            a(str, str6, str3, str4, str5, false);
        }
    }

    public static void b(String str, String str2, String str3, String str4, String str5) {
        a(str, str2, str3, str4, str5, false);
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0095  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void a(String str, String str2, String str3, String str4, String str5, boolean z) {
        String str6;
        if (TYSDK.isNetworkLogDebug()) {
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put(com.tkay.expressad.videocommon.e.b.v, str);
                jSONObject.put("adtype", str2);
                jSONObject.put("api", str3);
                jSONObject.put("result", str4);
                jSONObject.put(com.tkay.expressad.foundation.d.r.ac, str5);
                if (z) {
                    if (!TextUtils.isEmpty(str)) {
                        Map<String, Object> mapB = v.a().b(str);
                        if (mapB.size() > 0) {
                            String str7 = "";
                            for (Map.Entry<String, Object> entry : mapB.entrySet()) {
                                str7 = str7 + "key=" + entry.getKey() + ",value=" + entry.getValue().toString() + ";";
                            }
                            str6 = "[" + str7 + "]";
                        } else {
                            str6 = "";
                        }
                        jSONObject.put("extra", str6);
                    }
                }
                StringBuilder sb = new StringBuilder("tkay_network");
                sb.append(com.tkay.core.common.b.m.a().u() ? "(DebuggerMode)" : "");
                Log.i(sb.toString(), jSONObject.toString());
            } catch (Throwable unused) {
            }
        }
    }

    private static void b(String str, String str2) {
        a(str, str2, false);
    }
}
