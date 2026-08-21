package com.tramini.plugin.a.g;

import android.text.TextUtils;
import com.adjust.sdk.Adjust;
import com.adjust.sdk.AdjustAttribution;
import com.appsflyer.AppsFlyerLib;
import com.mbridge.msdk.interstitial.view.MBInterstitialActivity;
import com.sigmob.sdk.base.mta.PointCategory;
import com.tkay.expressad.foundation.d.r;
import com.tramini.plugin.a.a.a;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static b f7861a;

    private b() {
    }

    public static b a() {
        if (f7861a == null) {
            f7861a = new b();
        }
        return f7861a;
    }

    public final void a(final com.tramini.plugin.b.a aVar) {
        com.tramini.plugin.a.g.b.a.a().a(new Runnable() { // from class: com.tramini.plugin.a.g.b.1
            @Override // java.lang.Runnable
            public final void run() {
                synchronized (b.this) {
                    try {
                        if (aVar.a() != 1) {
                            return;
                        }
                        String strA = g.a(aVar);
                        com.tramini.plugin.b.a aVar2 = aVar;
                        try {
                            com.tramini.plugin.a.c.b bVar = new com.tramini.plugin.a.c.b();
                            bVar.c = AppsFlyerLib.getInstance().getSdkVersion();
                            bVar.d = 1;
                            String strB = i.b(com.tramini.plugin.a.a.c.a().b(), "appsflyer-data", "attributionId", "");
                            if (!TextUtils.isEmpty(strB)) {
                                bVar.e = strB;
                                JSONObject jSONObjectA = bVar.a();
                                String strB2 = i.b(com.tramini.plugin.a.a.c.a().b(), "tramini", a.d.d, "");
                                if (jSONObjectA != null && !TextUtils.equals(strB2, strB)) {
                                    i.a(com.tramini.plugin.a.a.c.a().b(), "tramini", a.d.d, strB);
                                    com.tramini.plugin.a.f.a.a().a(strA, aVar2.b(), d.f7867a, jSONObjectA);
                                }
                            }
                        } catch (Throwable unused) {
                        }
                        com.tramini.plugin.b.a aVar3 = aVar;
                        com.tramini.plugin.a.c.b bVar2 = new com.tramini.plugin.a.c.b();
                        bVar2.c = Adjust.getSdkVersion();
                        bVar2.d = 2;
                        AdjustAttribution attribution = Adjust.getAttribution();
                        if (attribution != null) {
                            JSONObject jSONObject = new JSONObject();
                            jSONObject.put("adgroup", attribution.adgroup);
                            jSONObject.put("adid", attribution.adid);
                            jSONObject.put(MBInterstitialActivity.INTENT_CAMAPIGN, attribution.campaign);
                            jSONObject.put("clickLabel", attribution.clickLabel);
                            jSONObject.put(r.aD, attribution.creative);
                            jSONObject.put(PointCategory.NETWORK, attribution.network);
                            jSONObject.put("trackerName", attribution.trackerName);
                            jSONObject.put("trackerToken", attribution.trackerToken);
                            jSONObject.put("attr", attribution.toString());
                            bVar2.e = jSONObject.toString();
                            JSONObject jSONObjectA2 = bVar2.a();
                            if (!TextUtils.equals(i.b(com.tramini.plugin.a.a.c.a().b(), "tramini", a.d.e, ""), jSONObject.toString())) {
                                i.a(com.tramini.plugin.a.a.c.a().b(), "tramini", a.d.e, jSONObject.toString());
                                com.tramini.plugin.a.f.a.a().a(strA, aVar3.b(), d.f7867a, jSONObjectA2);
                            }
                        }
                    } catch (Throwable unused2) {
                    }
                }
            }
        });
    }

    private static void a(String str, com.tramini.plugin.b.a aVar) {
        try {
            com.tramini.plugin.a.c.b bVar = new com.tramini.plugin.a.c.b();
            bVar.c = Adjust.getSdkVersion();
            bVar.d = 2;
            AdjustAttribution attribution = Adjust.getAttribution();
            if (attribution != null) {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("adgroup", attribution.adgroup);
                jSONObject.put("adid", attribution.adid);
                jSONObject.put(MBInterstitialActivity.INTENT_CAMAPIGN, attribution.campaign);
                jSONObject.put("clickLabel", attribution.clickLabel);
                jSONObject.put(r.aD, attribution.creative);
                jSONObject.put(PointCategory.NETWORK, attribution.network);
                jSONObject.put("trackerName", attribution.trackerName);
                jSONObject.put("trackerToken", attribution.trackerToken);
                jSONObject.put("attr", attribution.toString());
                bVar.e = jSONObject.toString();
                JSONObject jSONObjectA = bVar.a();
                if (TextUtils.equals(i.b(com.tramini.plugin.a.a.c.a().b(), "tramini", a.d.e, ""), jSONObject.toString())) {
                    return;
                }
                i.a(com.tramini.plugin.a.a.c.a().b(), "tramini", a.d.e, jSONObject.toString());
                com.tramini.plugin.a.f.a.a().a(str, aVar.b(), d.f7867a, jSONObjectA);
            }
        } catch (Throwable unused) {
        }
    }

    private static void b(String str, com.tramini.plugin.b.a aVar) {
        try {
            com.tramini.plugin.a.c.b bVar = new com.tramini.plugin.a.c.b();
            bVar.c = AppsFlyerLib.getInstance().getSdkVersion();
            bVar.d = 1;
            String strB = i.b(com.tramini.plugin.a.a.c.a().b(), "appsflyer-data", "attributionId", "");
            if (TextUtils.isEmpty(strB)) {
                return;
            }
            bVar.e = strB;
            JSONObject jSONObjectA = bVar.a();
            String strB2 = i.b(com.tramini.plugin.a.a.c.a().b(), "tramini", a.d.d, "");
            if (jSONObjectA == null || TextUtils.equals(strB2, strB)) {
                return;
            }
            i.a(com.tramini.plugin.a.a.c.a().b(), "tramini", a.d.d, strB);
            com.tramini.plugin.a.f.a.a().a(str, aVar.b(), d.f7867a, jSONObjectA);
        } catch (Throwable unused) {
        }
    }

    private static /* synthetic */ void c(String str, com.tramini.plugin.b.a aVar) {
        try {
            com.tramini.plugin.a.c.b bVar = new com.tramini.plugin.a.c.b();
            bVar.c = AppsFlyerLib.getInstance().getSdkVersion();
            bVar.d = 1;
            String strB = i.b(com.tramini.plugin.a.a.c.a().b(), "appsflyer-data", "attributionId", "");
            if (TextUtils.isEmpty(strB)) {
                return;
            }
            bVar.e = strB;
            JSONObject jSONObjectA = bVar.a();
            String strB2 = i.b(com.tramini.plugin.a.a.c.a().b(), "tramini", a.d.d, "");
            if (jSONObjectA == null || TextUtils.equals(strB2, strB)) {
                return;
            }
            i.a(com.tramini.plugin.a.a.c.a().b(), "tramini", a.d.d, strB);
            com.tramini.plugin.a.f.a.a().a(str, aVar.b(), d.f7867a, jSONObjectA);
        } catch (Throwable unused) {
        }
    }

    private static /* synthetic */ void d(String str, com.tramini.plugin.b.a aVar) {
        try {
            com.tramini.plugin.a.c.b bVar = new com.tramini.plugin.a.c.b();
            bVar.c = Adjust.getSdkVersion();
            bVar.d = 2;
            AdjustAttribution attribution = Adjust.getAttribution();
            if (attribution != null) {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("adgroup", attribution.adgroup);
                jSONObject.put("adid", attribution.adid);
                jSONObject.put(MBInterstitialActivity.INTENT_CAMAPIGN, attribution.campaign);
                jSONObject.put("clickLabel", attribution.clickLabel);
                jSONObject.put(r.aD, attribution.creative);
                jSONObject.put(PointCategory.NETWORK, attribution.network);
                jSONObject.put("trackerName", attribution.trackerName);
                jSONObject.put("trackerToken", attribution.trackerToken);
                jSONObject.put("attr", attribution.toString());
                bVar.e = jSONObject.toString();
                JSONObject jSONObjectA = bVar.a();
                if (TextUtils.equals(i.b(com.tramini.plugin.a.a.c.a().b(), "tramini", a.d.e, ""), jSONObject.toString())) {
                    return;
                }
                i.a(com.tramini.plugin.a.a.c.a().b(), "tramini", a.d.e, jSONObject.toString());
                com.tramini.plugin.a.f.a.a().a(str, aVar.b(), d.f7867a, jSONObjectA);
            }
        } catch (Throwable unused) {
        }
    }
}
