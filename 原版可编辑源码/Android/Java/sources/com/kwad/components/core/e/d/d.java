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

public final class d extends com.kwad.sdk.core.download.a.b {
    private static boolean Kd;
    private static final b Ke = new b() {
        long Kh;

        @Override
        public final void onBackToBackground() {
            super.onBackToBackground();
            this.Kh = System.currentTimeMillis();
        }

        @Override
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

    private static String a(a.a aVar, AdInfo adInfo, String str) throws Exception {
        String strValueOf;
        if (!com.kwad.sdk.core.response.b.a.ba(adInfo)) {
            return str;
        }
        String strCall = null;
        Callable<String> callableNh = aVar.nh();
        if (callableNh != null) {
            try {
                strCall = callableNh.call();
            } catch (Exception unused) {
            }
        }
        if (TextUtils.isEmpty(strCall)) {
            strCall = aVar.ng();
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

    public static String a(a.a aVar, AdTemplate adTemplate) {
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        for (AdInfo.AdConversionInfo.DeeplinkItemInfo deeplinkItemInfo : adInfoCg.adConversionInfo.deeplinkConf) {
            boolean zContains = deeplinkItemInfo.areaConf.contains(Integer.valueOf(aVar.cY()));
            boolean zContains2 = deeplinkItemInfo.sceneConf.contains(Integer.valueOf(aVar.nj()));
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

    private static String a(String str, a.a aVar, AdInfo adInfo) throws Exception {
        AdTemplate adTemplate = aVar.getAdTemplate();
        if (com.kwad.sdk.core.response.b.a.bb(adInfo)) {
            str = b(aVar, adInfo, str);
        }
        if (com.kwad.sdk.core.response.b.a.cw(adInfo)) {
            str = a(aVar, adInfo, str);
        }
        return ((com.kwad.sdk.core.response.b.a.co(adInfo) || com.kwad.sdk.core.response.b.a.cu(adInfo)) && adTemplate.mAdScene != null) ? a(str, aVar.getContext(), adTemplate.mAdScene) : str;
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

    private static void av(boolean z) {
        Kd = z;
    }

    public static int b(a.a aVar, int i) {
        Context context = aVar.getContext();
        AdTemplate adTemplate = aVar.getAdTemplate();
        if (adTemplate == null || context == null) {
            return 0;
        }
        Ke.setAdTemplate(adTemplate);
        com.kwad.sdk.core.c.b.AU();
        com.kwad.sdk.core.c.b.a(Ke);
        String strA = a(a(aVar, adTemplate), aVar, com.kwad.sdk.core.response.b.d.cg(adTemplate));
        com.kwad.sdk.core.report.a.aqx = an(strA);
        int iJ = j(context, strA);
        BusinessType businessTypeCs = null;
        if (iJ == 1) {
            if (aVar.getAdTemplate() != null && aVar.getAdTemplate().mAdScene != null) {
                businessTypeCs = KSLoggerReporter.cs(aVar.getAdTemplate().mAdScene.getAdStyle());
            }
            KSLoggerReporter.ReportClient.CONVERT_DPLINK.buildMethodCheck(businessTypeCs, "dplinkSuccess").report();
            com.kwad.sdk.core.report.a.a(adTemplate, "", i, aVar.getClientParams());
            e(adTemplate, i);
        } else if (iJ == -1) {
            com.kwad.sdk.core.report.a.b(adTemplate, "", i, (z.b) null);
        }
        return iJ;
    }

    private static String b(a.a aVar, AdInfo adInfo, String str) {
        long jMax = aVar.getAdTemplate().getmCurPlayTime();
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
            bj.a(new Runnable() {
                @Override
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
