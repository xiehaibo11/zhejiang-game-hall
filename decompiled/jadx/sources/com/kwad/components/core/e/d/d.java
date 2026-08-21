package com.kwad.components.core.e.d;

import android.content.Context;
import android.net.Uri;
import android.text.TextUtils;
import com.kwad.components.core.e.d.a;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.internal.api.SceneImpl;
import com.kwad.sdk.utils.ak;
import com.kwad.sdk.utils.bj;
import com.kwai.adclient.kscommerciallogger.model.BusinessType;
import java.util.concurrent.Callable;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class d extends com.kwad.sdk.core.download.a.b {
    private static boolean Kd;
    private static final b Ke = new b() { // from class: com.kwad.components.core.e.d.d.2
        long Kh;

        @Override // com.kwad.sdk.core.c.d, com.kwad.sdk.core.c.c
        public final void onBackToBackground() {
            super.onBackToBackground();
            this.Kh = System.currentTimeMillis();
        }

        @Override // com.kwad.sdk.core.c.d, com.kwad.sdk.core.c.c
        public final void onBackToForeground() {
            super.onBackToForeground();
            if (this.Kh != 0) {
                com.kwad.sdk.core.report.a.j(getAdTemplate(), System.currentTimeMillis() - this.Kh);
            }
            com.kwad.sdk.core.c.b.AU();
            com.kwad.sdk.core.c.b.b((com.kwad.sdk.core.c.c) d.Ke);
            setAdTemplate(null);
            this.Kh = 0L;
        }
    };

    private static String a(a.C0150a c0150a, AdInfo adInfo, String str) throws Exception {
        String strValueOf;
        if (!com.kwad.sdk.core.response.b.a.ba(adInfo)) {
            return str;
        }
        String strCall = null;
        Callable<String> callableNh = c0150a.nh();
        if (callableNh != null) {
            try {
                strCall = callableNh.call();
            } catch (Exception unused) {
            }
        }
        if (TextUtils.isEmpty(strCall)) {
            strCall = c0150a.ng();
        }
        if (TextUtils.isEmpty(strCall)) {
            return (str.contains("__itemId__") || str.contains("__simpleItemId__")) ? com.kwad.sdk.core.response.b.a.cx(adInfo) : str;
        }
        try {
            strValueOf = String.valueOf(com.kwad.components.core.e.b.a.ai(strCall));
        } catch (Throwable unused2) {
            strValueOf = strCall;
        }
        return str.replaceAll("__itemId__", strCall).replaceAll("__simpleItemId__", strValueOf);
    }

    public static String a(a.C0150a c0150a, AdTemplate adTemplate) {
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        for (AdInfo.AdConversionInfo.DeeplinkItemInfo deeplinkItemInfo : adInfoCg.adConversionInfo.deeplinkConf) {
            boolean zContains = deeplinkItemInfo.areaConf.contains(Integer.valueOf(c0150a.cY()));
            boolean zContains2 = deeplinkItemInfo.sceneConf.contains(Integer.valueOf(c0150a.nj()));
            if ((zContains && zContains2) || ((zContains && deeplinkItemInfo.sceneConf.size() == 0) || (zContains2 && deeplinkItemInfo.areaConf.size() == 0))) {
                if (!TextUtils.isEmpty(deeplinkItemInfo.url)) {
                    return deeplinkItemInfo.url + adInfoCg.adConversionInfo.deeplinkExtra;
                }
            }
        }
        return com.kwad.sdk.core.response.b.a.cx(adInfoCg);
    }

    private static String a(String str, int i, String str2) {
        return TextUtils.isEmpty(str2) ? str : (i == 0 || i == 3) ? g(str, str2) : str;
    }

    private static String a(String str, Context context, SceneImpl sceneImpl) {
        if (sceneImpl == null) {
            return "";
        }
        int i = 0;
        if (!ak.ak(context, "com.smile.gifmaker") && ak.ak(context, "com.kuaishou.nebula")) {
            i = 3;
        }
        String backUrl = sceneImpl.getBackUrl();
        return a(str, i, TextUtils.isEmpty(backUrl) ? "" : backUrl);
    }

    private static String a(String str, a.C0150a c0150a, AdInfo adInfo) throws Exception {
        AdTemplate adTemplate = c0150a.getAdTemplate();
        if (com.kwad.sdk.core.response.b.a.bb(adInfo)) {
            str = b(c0150a, adInfo, str);
        }
        if (com.kwad.sdk.core.response.b.a.cw(adInfo)) {
            str = a(c0150a, adInfo, str);
        }
        return ((com.kwad.sdk.core.response.b.a.co(adInfo) || com.kwad.sdk.core.response.b.a.cu(adInfo)) && adTemplate.mAdScene != null) ? a(str, c0150a.getContext(), adTemplate.mAdScene) : str;
    }

    private static JSONObject an(String str) {
        try {
            return new JSONObject(Uri.parse(str).getQueryParameter("universeClientInfo"));
        } catch (Throwable unused) {
            return null;
        }
    }

    public static void au(boolean z) {
        com.kwad.sdk.core.report.a.aqy = z;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void av(boolean z) {
        Kd = z;
    }

    public static int b(a.C0150a c0150a, int i) {
        Context context = c0150a.getContext();
        AdTemplate adTemplate = c0150a.getAdTemplate();
        if (adTemplate == null || context == null) {
            return 0;
        }
        Ke.setAdTemplate(adTemplate);
        com.kwad.sdk.core.c.b.AU();
        com.kwad.sdk.core.c.b.a(Ke);
        String strA = a(a(c0150a, adTemplate), c0150a, com.kwad.sdk.core.response.b.d.cg(adTemplate));
        com.kwad.sdk.core.report.a.aqx = an(strA);
        int iJ = j(context, strA);
        BusinessType businessTypeCs = null;
        if (iJ == 1) {
            if (c0150a.getAdTemplate() != null && c0150a.getAdTemplate().mAdScene != null) {
                businessTypeCs = KSLoggerReporter.cs(c0150a.getAdTemplate().mAdScene.getAdStyle());
            }
            KSLoggerReporter.ReportClient.CONVERT_DPLINK.buildMethodCheck(businessTypeCs, "dplinkSuccess").report();
            com.kwad.sdk.core.report.a.a(adTemplate, "", i, c0150a.getClientParams());
            e(adTemplate, i);
        } else if (iJ == -1) {
            com.kwad.sdk.core.report.a.b(adTemplate, "", i, (z.b) null);
        }
        return iJ;
    }

    private static String b(a.C0150a c0150a, AdInfo adInfo, String str) {
        long jMax = c0150a.getAdTemplate().getmCurPlayTime();
        if (jMax > 0) {
            jMax = Math.max(jMax - com.kwad.sdk.core.response.b.a.bc(adInfo), 0L);
        }
        return Uri.parse(str).buildUpon().appendQueryParameter("playStartTime", String.valueOf(jMax)).toString();
    }

    private static void e(final AdTemplate adTemplate, final int i) {
        if (nM()) {
            return;
        }
        av(true);
        int iZq = com.kwad.sdk.core.config.d.zq();
        com.kwad.sdk.core.config.d.zr();
        if (Math.abs(iZq) > 0) {
            bj.a(new Runnable() { // from class: com.kwad.components.core.e.d.d.1
                @Override // java.lang.Runnable
                public final void run() {
                    d.av(false);
                    com.kwad.sdk.core.c.b.AU();
                    if (com.kwad.sdk.core.c.b.isAppOnForeground()) {
                        return;
                    }
                    com.kwad.sdk.core.report.a.a(adTemplate, "", i);
                    BusinessType businessTypeCs = null;
                    AdTemplate adTemplate2 = adTemplate;
                    if (adTemplate2 != null && adTemplate2.mAdScene != null) {
                        businessTypeCs = KSLoggerReporter.cs(adTemplate.mAdScene.getAdStyle());
                    }
                    KSLoggerReporter.ReportClient.CONVERT_DPLINK.buildMethodCheck(businessTypeCs, "trueDplinkSuccess").report();
                }
            }, null, r0 * 1000);
        } else {
            av(false);
        }
    }

    private static String g(String str, String str2) {
        Uri.Builder builderAppendQueryParameter = Uri.parse(str).buildUpon().appendQueryParameter("returnBack", "liveunion_" + KsAdSDKImpl.get().getAppId());
        if (TextUtils.isEmpty(str2)) {
            str2 = "0";
        }
        return builderAppendQueryParameter.appendQueryParameter("back_url", str2).toString();
    }

    private static boolean nM() {
        return Kd;
    }
}
