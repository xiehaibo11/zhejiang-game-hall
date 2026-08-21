package com.kwad.components.ad.fullscreen.b;

import android.content.Context;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.core.response.model.AdTemplate;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    public static void H(Context context) {
        b bVarI = I(context);
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (bVarI == null) {
            bVarI = new b(jCurrentTimeMillis, 1);
        } else if (bVarI.e(jCurrentTimeMillis)) {
            bVarI.gc++;
        } else {
            bVarI.gb = jCurrentTimeMillis;
            bVarI.gc = 1;
        }
        a(context, bVarI);
    }

    private static b I(Context context) {
        if (context == null) {
            return null;
        }
        try {
            JSONObject jSONObject = new JSONObject(context.getSharedPreferences("ksadsdk_fullscreen_local_ad_count", 0).getString("key_local_info", null));
            b bVar = new b();
            bVar.parseJson(jSONObject);
            return bVar;
        } catch (Exception e) {
            c.printStackTraceOnly(e);
            return null;
        }
    }

    private static void a(Context context, b bVar) {
        if (context == null || bVar == null) {
            c.d("FullScreenLocalHelper", "saveFullScreenLocalInfo illegal arguments.");
        } else {
            context.getSharedPreferences("ksadsdk_fullscreen_local_ad_count", 0).edit().putString("key_local_info", bVar.toJson().toString()).apply();
        }
    }

    public static boolean a(Context context, AdTemplate adTemplate) {
        b bVarI = I(context);
        return (bVarI == null || !bVarI.v(com.kwad.components.ad.fullscreen.a.b.bH())) && com.kwad.sdk.core.response.b.b.bN(adTemplate);
    }
}
