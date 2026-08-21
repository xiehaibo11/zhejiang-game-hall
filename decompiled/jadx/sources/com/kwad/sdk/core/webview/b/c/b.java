package com.kwad.sdk.core.webview.b.c;

import android.text.TextUtils;
import com.kwad.components.offline.api.core.api.ILoggerReporter;
import com.kwad.sdk.commercial.model.HybridLoadMsg;
import com.kwad.sdk.commercial.model.WebViewLoadMsg;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.utils.t;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class b {
    public static final Map<String, JSONObject> ayQ = new HashMap();
    public static boolean ayR = true;

    public static class a {
        public String msg;
    }

    public static void a(com.kwad.sdk.h.a.b bVar, int i) {
        KSLoggerReporter.a(ILoggerReporter.Category.APM_LOG, new HybridLoadMsg().setSceneId(bVar.aCb).setH5Version(bVar.version).setLoadType(bVar.loadType).setState(i).setPackageUrl(bVar.packageUrl).setInterval(String.valueOf(System.currentTimeMillis() - bVar.FC())));
    }

    public static void a(com.kwad.sdk.h.a.b bVar, int i, int i2, String str) {
        KSLoggerReporter.a(ILoggerReporter.Category.ERROR_LOG, new HybridLoadMsg().setSceneId(bVar.aCb).setH5Version(bVar.version).setLoadType(bVar.loadType).setState(0).setPackageUrl(bVar.packageUrl).setFailState(i2).setInterval(String.valueOf(System.currentTimeMillis() - bVar.FC())).setFailReason(str));
    }

    private static void a(String str, String str2, int i, String str3) {
        long jCurrentTimeMillis;
        JSONObject jSONObject = ayQ.get(str2);
        if (jSONObject == null) {
            jCurrentTimeMillis = -3;
        } else {
            long jOptLong = jSONObject.optLong("c_loadUrl");
            if (jOptLong <= 0) {
                jCurrentTimeMillis = -2;
            } else {
                jCurrentTimeMillis = System.currentTimeMillis() - jOptLong;
                if (jCurrentTimeMillis > 100000 || jCurrentTimeMillis < 0) {
                    jCurrentTimeMillis = -1;
                }
            }
        }
        KSLoggerReporter.a(i == 2 ? ILoggerReporter.Category.ERROR_LOG : ILoggerReporter.Category.APM_LOG, new WebViewLoadMsg().setUrl(str).setState(i).setCostTime(jSONObject != null ? jSONObject.toString() : "").setInterval(String.valueOf(jCurrentTimeMillis)).setFailReason(str3));
        eh(str2);
    }

    public static void a(String str, String str2, int i, String str3, long j) {
        String str4 = i == 2 ? ILoggerReporter.Category.ERROR_LOG : ILoggerReporter.Category.APM_LOG;
        if (j > 60000 || j < 0) {
            j = -1;
        }
        KSLoggerReporter.b(str4, new HybridLoadMsg().setSceneId(str2).setUrl(str).setState(i).setInterval(String.valueOf(j)).setFailReason(str3));
    }

    public static void a(String str, String str2, String str3, String str4) {
        JSONObject jSONObjectEg = eg(str2);
        t.putValue(jSONObjectEg, "c_" + str3, System.currentTimeMillis());
        if (str3.equals("pageStatus")) {
            try {
                if (TextUtils.isEmpty(str4)) {
                    return;
                }
                JSONObject jSONObject = new JSONObject(str4);
                int iOptInt = jSONObject.optInt("status");
                String strOptString = jSONObject.optString("errorMsg", "");
                String strOptString2 = jSONObject.optString("webViewCostParams", "");
                if (!TextUtils.isEmpty(strOptString2)) {
                    JSONObject jSONObject2 = new JSONObject(strOptString2);
                    Iterator<String> itKeys = jSONObject2.keys();
                    while (itKeys.hasNext()) {
                        String next = itKeys.next();
                        jSONObjectEg.put(next, jSONObject2.opt(next));
                    }
                }
                if (!TextUtils.isEmpty(str)) {
                    if (iOptInt == 1) {
                        ac(str, str2);
                    } else {
                        ad(str, strOptString);
                    }
                }
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.printStackTrace(e);
            } finally {
                eh(str2);
            }
        }
    }

    public static void ab(String str, String str2) {
        t.putValue(eg(str), "c_" + str2, System.currentTimeMillis());
    }

    private static void ac(String str, String str2) {
        a(str, str2, 1, "");
    }

    public static void ad(String str, String str2) {
        a(str, "", 2, str2);
    }

    public static void b(String str, String str2, String str3) {
        if (str3.contains("/")) {
            str3 = str3.substring(str3.lastIndexOf("/") + 1);
        }
        t.putValue(eg(str), "c_responseStart_" + str2 + "_" + str3, System.currentTimeMillis());
    }

    public static void c(String str, String str2, String str3) {
        if (str3.contains("/")) {
            str3 = str3.substring(str3.lastIndexOf("/") + 1);
        }
        t.putValue(eg(str), "c_responseEnd_" + str2 + "_" + str3, System.currentTimeMillis());
    }

    private static JSONObject eg(String str) {
        JSONObject jSONObject = ayQ.get(str);
        if (jSONObject != null) {
            return jSONObject;
        }
        JSONObject jSONObject2 = new JSONObject();
        ayQ.put(str, jSONObject2);
        return jSONObject2;
    }

    private static void eh(String str) {
        ayQ.remove(str);
    }

    public static void ei(String str) {
        JSONObject jSONObjectEg = eg(str);
        long jEf = com.kwad.sdk.core.webview.b.a.Ee().Ef();
        long jCurrentTimeMillis = jEf <= 0 ? -1L : System.currentTimeMillis() - jEf;
        t.putValue(jSONObjectEg, "c_loadUrl", System.currentTimeMillis());
        t.putValue(jSONObjectEg, "c_init_interval", jCurrentTimeMillis);
        t.putValue(jSONObjectEg, "c_init_state", ayR ? 1 : 2);
        ayR = false;
    }
}
