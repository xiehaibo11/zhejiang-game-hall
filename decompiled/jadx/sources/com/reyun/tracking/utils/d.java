package com.reyun.tracking.utils;

import android.content.Context;
import com.reyun.tracking.sdk.Tracking;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Runnable f4745a;

    private static String a(String str) {
        if (str.startsWith("pkgInfo")) {
            return "https://log.reyun.com/receive/pkginfo";
        }
        return "https://log.trackingio.com/" + str;
    }

    private static void a() {
        if (f4745a == null && com.reyun.tracking.a.i.c) {
            com.reyun.tracking.sdk.a aVarA = com.reyun.tracking.sdk.a.a();
            e eVar = new e();
            f4745a = eVar;
            aVarA.a(eVar, 60000L);
        }
    }

    public static void a(Context context, String str, String str2, n nVar) {
        Runnable runnableA;
        if (com.reyun.tracking.a.i.c) {
            runnableA = p.a("slog.trackingio.com", 6783).a(str2, (String) null, new w(nVar, str2));
        } else {
            runnableA = l.a("https://log.trackingio.com/" + str2, nVar);
        }
        com.reyun.tracking.sdk.a.a().a(runnableA);
        a();
    }

    public static void a(Context context, String str, String str2, JSONObject jSONObject, int i, n nVar) {
        com.reyun.tracking.a.h.b(jSONObject, context);
        com.reyun.tracking.a.h.a(jSONObject, context);
        Runnable runnableA = com.reyun.tracking.a.i.c ? p.a("slog.trackingio.com", 6783).a(str2, jSONObject.toString(), new w(nVar, str2)) : l.a(a(str2), jSONObject.toString(), i, nVar);
        if (Tracking.getOnDataUploadListener() != null && !"receive/tkio/sdklog".equals(str2)) {
            Tracking.getOnDataUploadListener().a(str, jSONObject.toString());
        }
        com.reyun.tracking.sdk.a.a().a(runnableA);
        a();
    }

    public static void a(Context context, String str, String str2, JSONObject jSONObject, n nVar) {
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("data");
        if (jSONArrayOptJSONArray != null) {
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                try {
                    JSONObject jSONObject2 = (JSONObject) jSONArrayOptJSONArray.get(i);
                    com.reyun.tracking.a.h.b(jSONObject2, context);
                    com.reyun.tracking.a.h.a(jSONObject2, context);
                } catch (JSONException unused) {
                }
            }
        }
        Runnable runnableA = com.reyun.tracking.a.i.c ? p.a("slog.trackingio.com", 6783).a(str2, jSONObject.toString(), new w(nVar, str2)) : l.a("https://log.trackingio.com/" + str2, jSONObject.toString(), 1, nVar);
        if (Tracking.getOnDataUploadListener() != null && !"receive/tkio/sdklog".equals(str2)) {
            Tracking.getOnDataUploadListener().a(str, jSONObject.toString());
        }
        com.reyun.tracking.sdk.a.a().b(runnableA);
        a();
    }
}
