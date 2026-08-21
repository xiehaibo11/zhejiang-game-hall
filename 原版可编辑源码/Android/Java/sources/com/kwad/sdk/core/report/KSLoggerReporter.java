package com.kwad.sdk.core.report;

import android.text.TextUtils;
import com.kwad.components.offline.api.BuildConfig;
import com.kwad.components.offline.api.core.api.ILoggerReporter;
import com.kwad.sdk.commercial.model.HybridLoadMsg;
import com.kwad.sdk.commercial.model.WebViewCommercialMsg;
import com.kwad.sdk.commercial.model.WebViewLoadMsg;
import com.kwad.sdk.core.report.p;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.aw;
import com.kwad.sdk.utils.bk;
import com.kwai.adclient.kscommerciallogger.model.BusinessType;
import com.kwai.adclient.kscommerciallogger.model.SubBusinessType;
import com.kwai.adclient.kscommerciallogger.model.c;
import java.util.Iterator;
import java.util.List;
import java.util.Random;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicBoolean;
import org.json.JSONObject;

public final class KSLoggerReporter {
    private static float arb = -1.0f;
    private static double arc = -1.0d;
    private static boolean ard;
    private static volatile boolean are;
    private static List<com.kwai.adclient.kscommerciallogger.model.c> arf;
    private static a arg;
    private static final AtomicBoolean sHasInit = new AtomicBoolean();

    public enum ReportClient {
        CORE_CONVERT(ILoggerReporter.Category.APM_LOG, "ad_convert_method_call"),
        CONVERT_H5WEB(ILoggerReporter.Category.APM_LOG, "ad_h5convert_method"),
        CONVERT_DPLINK(ILoggerReporter.Category.APM_LOG, "ad_dplink_convert_method"),
        RESPONE_MONITOR(new b.a() {
            @Override
            public final void a(b bVar) {
                bVar.dw(ILoggerReporter.Category.ERROR_LOG).dy("response_biz_error");
            }
        });

        private String mCategory;
        private String mEventId;
        private b.a mSubIniter;

        ReportClient(b.a aVar) {
            this.mSubIniter = aVar;
        }

        ReportClient(String str, String str2) {
            this.mCategory = str;
            this.mEventId = str2;
        }

        public final b buildMethodCheck(BusinessType businessType, String str) {
            return new b(this.mCategory, this.mEventId, businessType).c("method_name", str);
        }

        public final b buildNormalApmReporter() {
            return new b(this.mSubIniter);
        }
    }

    public interface a {
        void j(String str, String str2, boolean z);

        boolean xl();

        JSONObject xm();
    }

    public static class b {
        private JSONObject ari = new JSONObject();
        private BusinessType arj;
        private a ark;
        private String mCategory;
        private String mEventId;
        private String mTag;

        interface a {
            void a(b bVar);
        }

        b(a aVar) {
            this.ark = aVar;
        }

        b(String str, String str2, BusinessType businessType) {
            this.arj = businessType;
            this.mCategory = str;
            this.mEventId = str2;
        }

        public final b W(String str, String str2) {
            c("error_name", str);
            c("error_data", str2);
            return this;
        }

        public final b a(BusinessType businessType) {
            this.arj = businessType;
            return this;
        }

        public final b aK(AdTemplate adTemplate) {
            long jCq = com.kwad.sdk.core.response.b.d.cq(adTemplate);
            long jCd = com.kwad.sdk.core.response.b.d.cd(adTemplate);
            if (adTemplate.mAdScene != null) {
                this.arj = KSLoggerReporter.cs(adTemplate.mAdScene.getAdStyle());
            }
            c("creative_id", Long.valueOf(jCq));
            c("llsid", Long.valueOf(jCd));
            return this;
        }

        public final b be(boolean z) {
            return c("is_api_native", Boolean.TRUE);
        }

        public final b c(String str, Object obj) {
            com.kwad.sdk.utils.u.a(this.ari, str, obj);
            return this;
        }

        public final b ct(int i) {
            return c("ad_num", Integer.valueOf(i));
        }

        public final b dw(String str) {
            this.mCategory = str;
            return this;
        }

        public final b dx(String str) {
            this.mEventId = str;
            return this;
        }

        public final b dy(String str) {
            this.mTag = str;
            return this;
        }

        public final void report() {
            try {
                if (this.ark != null) {
                    this.ark.a(this);
                }
                KSLoggerReporter.a(new p.a().dz(this.mCategory).b(this.arj).dB(this.mTag).a(SubBusinessType.OTHER).a(com.kwai.adclient.kscommerciallogger.model.a.aNg).dA(this.mEventId).A(this.ari).Cd());
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.printStackTrace(e);
            }
        }
    }

    private static f a(String str, String str2, JSONObject jSONObject, String str3) {
        f fVar = new f();
        try {
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
        }
        if (jSONObject.has(com.sigmob.sdk.base.h.A)) {
            fVar.aqQ = jSONObject.getDouble(com.sigmob.sdk.base.h.A);
            return fVar;
        }
        if (jSONObject.has("ratio_count") && jSONObject.getDouble("ratio_count") > 0.0d) {
            fVar.aqQ = 1.0d / jSONObject.getDouble("ratio_count");
            return fVar;
        }
        JSONObject jSONObjectXm = arg.xm();
        if (jSONObjectXm == null) {
            if (!com.kwad.framework.a.a.ml.booleanValue()) {
                return fVar;
            }
            throw new Exception("reportConf未初始化 eventId:" + str2);
        }
        JSONObject jSONObjectOptJSONObject = jSONObjectXm.optJSONObject(dv(str2));
        if (jSONObjectOptJSONObject != null) {
            fVar.a(str, jSONObjectOptJSONObject, str3);
            return fVar;
        }
        if (!com.kwad.framework.a.a.ml.booleanValue()) {
            return fVar;
        }
        throw new Exception("EventSamplingKey未包含 eventId " + str2);
    }

    private static String a(String str, f fVar) {
        return (!str.equals(ILoggerReporter.Category.APM_LOG) || arc >= fVar.aqR) ? str : ILoggerReporter.Category.ERROR_LOG;
    }

    private static JSONObject a(JSONObject jSONObject, f fVar) {
        try {
            com.kwad.sdk.utils.t.putValue(jSONObject, com.sigmob.sdk.base.h.A, fVar.aqQ);
            if (fVar.aqQ > 0.0d) {
                com.kwad.sdk.utils.t.putValue(jSONObject, "ratio_count", 1.0d / fVar.aqQ);
            }
            com.kwad.sdk.utils.t.putValue(jSONObject, "debug_mode", com.kwad.framework.a.a.ml.booleanValue() ? 1 : 0);
            com.kwad.sdk.utils.t.putValue(jSONObject, "convert_ratio", fVar.aqR);
            if (fVar.aqR > 0.0d) {
                com.kwad.sdk.utils.t.putValue(jSONObject, "convert_ratio_count", 1.0d / fVar.aqR);
            }
            return jSONObject;
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
            return jSONObject;
        }
    }

    public static synchronized void a(final a aVar) {
        if (ard) {
            return;
        }
        ard = true;
        arg = aVar;
        com.kwad.sdk.utils.g.execute(new aw() {
            @Override
            public final void doTask() {
                KSLoggerReporter.b(aVar);
                KSLoggerReporter.sHasInit.set(true);
                KSLoggerReporter.mC();
            }
        });
    }

    public static void a(m mVar, String str) {
        a(new p.a().dz(ILoggerReporter.Category.ERROR_LOG).dA("ad_union_error_log").dB(str).A(mVar.toJson()).Cd());
    }

    public static synchronized void a(p pVar) {
        if (TextUtils.isEmpty(pVar.tag)) {
            pVar.tag = pVar.eventId;
        }
        a(pVar.category, pVar.biz, pVar.arl, pVar.arm, pVar.eventId, pVar.tag, pVar.suffixRatio, pVar.msg);
    }

    private static synchronized void a(com.kwai.adclient.kscommerciallogger.model.c cVar) {
        if (arf == null) {
            arf = new CopyOnWriteArrayList();
        }
        arf.add(cVar);
    }

    public static void a(String str, HybridLoadMsg hybridLoadMsg) {
        a(str, BusinessType.WEB_CACHE, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.d.aNG, "union_web_cache_download_event", hybridLoadMsg.toJson());
    }

    public static void a(String str, WebViewCommercialMsg webViewCommercialMsg) {
        if (webViewCommercialMsg.rate >= 0.0d) {
            com.kwad.sdk.utils.t.putValue(webViewCommercialMsg.msg, com.sigmob.sdk.base.h.A, webViewCommercialMsg.rate);
        }
        a(str, webViewCommercialMsg.biz, webViewCommercialMsg.subBiz, webViewCommercialMsg.type, webViewCommercialMsg.eventId, webViewCommercialMsg.suffixRatio, webViewCommercialMsg.msg);
    }

    public static void a(String str, WebViewLoadMsg webViewLoadMsg) {
        a(str, BusinessType.OTHER, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.d.aNG, "union_webview_load_event", webViewLoadMsg.toJson());
    }

    @Deprecated
    private static synchronized void a(String str, BusinessType businessType, SubBusinessType subBusinessType, com.kwai.adclient.kscommerciallogger.model.d dVar, String str2, String str3, String str4, JSONObject jSONObject) {
        com.kwai.adclient.kscommerciallogger.model.c cVarLi;
        f fVarA = a(str, str2, jSONObject, str4);
        if (arb == -1.0f) {
            arb = new Random().nextFloat();
        }
        if (arc == -1.0d) {
            arc = new Random().nextFloat();
        }
        if (arb > fVarA.aqQ) {
            return;
        }
        if (bk.aw(BuildConfig.VERSION_NAME, fVarA.aqS)) {
            try {
                cVarLi = (ILoggerReporter.Category.ERROR_LOG.equals(a(str, fVarA)) ? c.a.Lg() : c.a.Lh()).c(businessType).b(subBusinessType).fZ(str3).b(dVar).ga(str2).P(a(jSONObject, fVarA)).Li();
            } catch (Throwable th) {
                com.kwad.sdk.core.e.c.printStackTrace(th);
                com.kwad.sdk.service.a.d dVar2 = (com.kwad.sdk.service.a.d) ServiceProvider.get(com.kwad.sdk.service.a.d.class);
                if (dVar2 != null) {
                    dVar2.gatherException(th);
                }
            }
            if (sHasInit.get()) {
                b(cVarLi);
            } else {
                a(cVarLi);
            }
        }
    }

    @Deprecated
    private static synchronized void a(String str, BusinessType businessType, SubBusinessType subBusinessType, com.kwai.adclient.kscommerciallogger.model.d dVar, String str2, String str3, JSONObject jSONObject) {
        a(str, businessType, subBusinessType, dVar, str2, str2, str3, jSONObject);
    }

    @Deprecated
    public static synchronized void a(String str, BusinessType businessType, SubBusinessType subBusinessType, com.kwai.adclient.kscommerciallogger.model.d dVar, String str2, JSONObject jSONObject) {
        a(str, businessType, subBusinessType, dVar, str2, "", jSONObject);
    }

    public static void a(String str, com.kwai.adclient.kscommerciallogger.model.d dVar, JSONObject jSONObject) {
        a(str, BusinessType.AD_SDK_INIT, SubBusinessType.OTHER, dVar, ILoggerReporter.Category.ERROR_LOG.equals(str) ? "ad_sdk_init_error_performance" : "ad_sdk_init_performance", jSONObject);
    }

    public static void a(boolean z, JSONObject jSONObject) {
        a(ILoggerReporter.Category.ERROR_LOG, z ? BusinessType.AD_REWARD : BusinessType.AD_FULLSCREEN, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.b.aNt, z ? "ad_sdk_reward_download_error" : "ad_sdk_fullscreen_download_error", jSONObject);
    }

    public static void a(boolean z, JSONObject jSONObject, com.kwai.adclient.kscommerciallogger.model.d dVar) {
        a(ILoggerReporter.Category.APM_LOG, z ? BusinessType.AD_REWARD : BusinessType.AD_FULLSCREEN, SubBusinessType.OTHER, dVar, z ? "ad_sdk_reward_load" : "ad_sdk_fullscreen_load", jSONObject);
    }

    private static void b(final a aVar) {
        boolean zXl = aVar.xl();
        are = zXl;
        if (zXl) {
            com.kwai.adclient.kscommerciallogger.a.KW().a(new com.kwai.adclient.kscommerciallogger.a.a() {
                @Override
                public final void S(String str, String str2) {
                    com.kwad.sdk.core.e.c.w(str, str2);
                }

                @Override
                public final void T(String str, String str2) {
                    com.kwad.sdk.core.e.c.e(str, str2);
                }
            }, new com.kwai.adclient.kscommerciallogger.a.b() {
                private void V(String str, String str2) {
                    aVar.j(str, str2, false);
                }

                @Override
                public final void U(String str, String str2) {
                    V(str, str2);
                }
            }, null, com.kwad.framework.a.a.ml.booleanValue(), com.kwad.framework.a.a.ml.booleanValue());
        }
    }

    public static void b(com.kwad.sdk.utils.b.a aVar) {
        a(ILoggerReporter.Category.APM_LOG, BusinessType.OTHER, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.d.aNG, "ad_union_kv_fail_rate", aVar.toJson());
    }

    private static void b(com.kwai.adclient.kscommerciallogger.model.c cVar) {
        if (are) {
            com.kwai.adclient.kscommerciallogger.a.KW().c(cVar);
        }
    }

    public static void b(String str, HybridLoadMsg hybridLoadMsg) {
        a(str, BusinessType.WEB_CACHE, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.d.aNG, "union_web_cache_load_event", hybridLoadMsg.toJson());
    }

    public static void b(boolean z, JSONObject jSONObject) {
        a(ILoggerReporter.Category.APM_LOG, z ? BusinessType.AD_REWARD : BusinessType.AD_FULLSCREEN, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.a.aMW, z ? "ad_sdk_reward_page_show" : "ad_sdk_fullscreen_page_show", jSONObject);
    }

    public static void c(com.kwad.sdk.core.network.j jVar) {
        a(ILoggerReporter.Category.APM_LOG, BusinessType.OTHER, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.d.aNG, "ad_perf_monitor_net_error", jVar.toJson());
    }

    public static void c(com.kwad.sdk.core.network.k kVar) {
        a(ILoggerReporter.Category.APM_LOG, BusinessType.OTHER, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.d.aNG, "ad_perf_monitor_net_success", kVar.toJson());
    }

    public static void c(boolean z, JSONObject jSONObject) {
        a(ILoggerReporter.Category.ERROR_LOG, z ? BusinessType.AD_REWARD : BusinessType.AD_FULLSCREEN, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.b.aNz, z ? "ad_sdk_reward_play_error" : "ad_sdk_fullscreen_play_error", jSONObject);
    }

    public static BusinessType cs(int i) {
        if (i == 1) {
            return BusinessType.AD_FEED;
        }
        if (i == 2) {
            return BusinessType.AD_REWARD;
        }
        if (i == 3) {
            return BusinessType.AD_FULLSCREEN;
        }
        if (i == 4) {
            return BusinessType.AD_SPLASH;
        }
        if (i == 13) {
            return BusinessType.AD_INTERSTITIAL;
        }
        if (i != 10000) {
            return null;
        }
        return BusinessType.AD_NATIVE;
    }

    private static String dv(String str) {
        String str2;
        try {
            String[] strArrSplit = str.split("_");
            StringBuilder sb = new StringBuilder();
            boolean z = false;
            for (String str3 : strArrSplit) {
                if (z) {
                    str2 = Character.toUpperCase(str3.charAt(0)) + str3.substring(1);
                } else {
                    str2 = Character.toLowerCase(str3.charAt(0)) + str3.substring(1);
                    z = true;
                }
                sb.append(str2);
            }
            sb.append("ReportRate");
            return new String(sb);
        } catch (Throwable unused) {
            return "";
        }
    }

    public static void i(JSONObject jSONObject) {
        a(ILoggerReporter.Category.APM_LOG, BusinessType.AD_REWARD, SubBusinessType.OTHER, new com.kwai.adclient.kscommerciallogger.model.b("RESULT_CHECK_REWARD"), "ad_sdk_reward_check_result", jSONObject);
    }

    public static void j(JSONObject jSONObject) {
        a(ILoggerReporter.Category.APM_LOG, BusinessType.AD_WEBVIEW, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.a.aNg, "ad_sdk_webview_track", jSONObject);
    }

    public static void k(JSONObject jSONObject) {
        a(ILoggerReporter.Category.ERROR_LOG, BusinessType.AD_REWARD, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.b.aNG, "ad_sdk_reward_performance", jSONObject);
    }

    public static void l(JSONObject jSONObject) {
        a(ILoggerReporter.Category.APM_LOG, BusinessType.AD_SPLASH, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.a.aNg, "ad_sdk_splash_load", jSONObject);
    }

    public static void m(JSONObject jSONObject) {
        a(ILoggerReporter.Category.APM_LOG, BusinessType.AD_SPLASH, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.a.aNg, "ad_sdk_splash_preload", jSONObject);
    }

    private static synchronized void mC() {
        if (arf == null) {
            return;
        }
        Iterator<com.kwai.adclient.kscommerciallogger.model.c> it = arf.iterator();
        while (it.hasNext()) {
            b(it.next());
        }
        arf.clear();
        arf = null;
    }

    public static void n(JSONObject jSONObject) {
        a(ILoggerReporter.Category.APM_LOG, BusinessType.AD_SPLASH, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.a.aNf, "ad_sdk_splash_single_cache", jSONObject);
    }

    public static void o(JSONObject jSONObject) {
        a(ILoggerReporter.Category.APM_LOG, BusinessType.AD_SPLASH, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.a.aNf, "ad_sdk_splash_cache", jSONObject);
    }

    public static void p(JSONObject jSONObject) {
        a(ILoggerReporter.Category.APM_LOG, BusinessType.AD_SPLASH, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.a.aNg, "ad_sdk_splash_show", jSONObject);
    }

    public static void q(JSONObject jSONObject) {
        int iOptInt = jSONObject.optInt("load_status");
        a(new p.a().dz((iOptInt == 3 || iOptInt == 4 || iOptInt == 7) ? ILoggerReporter.Category.ERROR_LOG : ILoggerReporter.Category.APM_LOG).b(BusinessType.OTHER).a(SubBusinessType.OTHER).a(com.kwai.adclient.kscommerciallogger.model.a.aNg).dA("ad_sdk_dynamic_update").A(jSONObject).Cd());
    }

    public static void r(JSONObject jSONObject) {
        a(new p.a().dz(ILoggerReporter.Category.ERROR_LOG).b(BusinessType.OTHER).a(SubBusinessType.OTHER).a(com.kwai.adclient.kscommerciallogger.model.a.aNg).dA("ad_sdk_dynamic_run").A(jSONObject).Cd());
    }

    public static void s(JSONObject jSONObject) {
        a(ILoggerReporter.Category.APM_LOG, BusinessType.AD_INTERSTITIAL, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.a.aNg, "ad_sdk_interstitial_load", jSONObject);
    }

    public static void t(JSONObject jSONObject) {
        a(ILoggerReporter.Category.APM_LOG, BusinessType.AD_INTERSTITIAL, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.b.aNt, "ad_sdk_interstitial_download_error", "1", jSONObject);
    }

    public static void u(JSONObject jSONObject) {
        a(ILoggerReporter.Category.APM_LOG, BusinessType.AD_INTERSTITIAL, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.b.aNt, "ad_sdk_interstitial_download_error", jSONObject);
    }

    public static void v(JSONObject jSONObject) {
        a(ILoggerReporter.Category.APM_LOG, BusinessType.AD_INTERSTITIAL, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.b.aNz, "ad_sdk_interstitial_play_error", "1", jSONObject);
    }

    public static void w(JSONObject jSONObject) {
        a(ILoggerReporter.Category.APM_LOG, BusinessType.AD_INTERSTITIAL, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.b.aNz, "ad_sdk_interstitial_play_error", jSONObject);
    }

    public static void x(JSONObject jSONObject) {
        a(ILoggerReporter.Category.APM_LOG, BusinessType.OTHER, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.d.aNG, "ad_sdk_block_info", jSONObject);
    }

    public static void y(JSONObject jSONObject) {
        a(ILoggerReporter.Category.APM_LOG, BusinessType.OTHER, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.d.aNG, "ad_image_load_perf", jSONObject);
    }

    public static void z(JSONObject jSONObject) {
        a(new p.a().dz(ILoggerReporter.Category.APM_LOG).b(BusinessType.OTHER).dB("ad_thread_monitor").a(com.kwai.adclient.kscommerciallogger.model.d.aNG).dA("ad_thread_monitor").A(jSONObject).Cd());
    }
}
