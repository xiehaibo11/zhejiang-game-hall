package com.kwad.components.core.e.d;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.components.core.page.AdWebViewActivityProxy;
import com.kwad.components.core.page.AdWebViewVideoActivityProxy;
import com.kwad.components.core.webview.b.a.k;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwai.adclient.kscommerciallogger.model.BusinessType;
import java.lang.ref.WeakReference;
import java.util.List;
import java.util.concurrent.Callable;
import java.util.concurrent.CopyOnWriteArrayList;
import org.json.JSONObject;

public final class a {
    private static List<WeakReference<k.b>> JB;

    public static class a {
        private boolean JC;
        private boolean JD;
        private boolean JE;
        private b JF;
        private c JG;
        private boolean JH;
        private long JI;
        private boolean JJ;
        private boolean JK;
        private z.b JL;
        private JSONObject JM;
        private boolean JN = false;
        private boolean JO;
        private int JP;
        private int JQ;
        private int JR;
        private Callable<String> JS;
        private String JT;
        private AdTemplate adTemplate;
        private final Context context;
        private int jE;
        private int jG;

        public a(Context context) {
            this.context = context;
        }

        public final a P(AdTemplate adTemplate) {
            this.adTemplate = adTemplate;
            return this;
        }

        public final a a(b bVar) {
            this.JF = bVar;
            return this;
        }

        public final a a(z.b bVar) {
            this.JL = bVar;
            return this;
        }

        public final a a(Callable<String> callable) {
            this.JS = callable;
            return this;
        }

        public final a al(String str) {
            this.JT = str;
            return this;
        }

        public final a am(int i) {
            this.JR = i;
            return this;
        }

        public final a am(boolean z) {
            this.JH = z;
            return this;
        }

        public final a an(int i) {
            this.jG = i;
            return this;
        }

        public final a an(boolean z) {
            this.JJ = z;
            return this;
        }

        public final a ao(int i) {
            this.jE = i;
            return this;
        }

        public final a ao(boolean z) {
            this.JK = z;
            return this;
        }

        public final a ap(int i) {
            this.JP = i;
            return this;
        }

        public final a ap(boolean z) {
            this.JN = z;
            return this;
        }

        public final a aq(int i) {
            this.JQ = i;
            return this;
        }

        public final a aq(boolean z) {
            this.JD = z;
            return this;
        }

        public final a ar(boolean z) {
            this.JE = true;
            return this;
        }

        public final a as(boolean z) {
            this.JC = z;
            return this;
        }

        public final a at(boolean z) {
            this.JO = z;
            return this;
        }

        public final a b(c cVar) {
            this.JG = cVar;
            return this;
        }

        public final int cV() {
            return this.jE;
        }

        public final int cY() {
            return this.jG;
        }

        public final a d(JSONObject jSONObject) {
            this.JM = jSONObject;
            return this;
        }

        public final AdTemplate getAdTemplate() {
            return this.adTemplate;
        }

        public final z.b getClientParams() {
            return this.JL;
        }

        public final Context getContext() {
            return this.context;
        }

        public final c hi() {
            return this.JG;
        }

        public final JSONObject hv() {
            return this.JM;
        }

        public final String ng() {
            return this.JT;
        }

        public final Callable<String> nh() {
            return this.JS;
        }

        public final b ni() {
            return this.JF;
        }

        public final int nj() {
            return this.JR;
        }

        public final boolean nk() {
            return this.JH;
        }

        public final long nl() {
            return this.JI;
        }

        public final boolean nm() {
            return this.JJ;
        }

        public final boolean nn() {
            return this.JK;
        }

        public final boolean no() {
            return this.JN;
        }

        public final boolean np() {
            return this.JD;
        }

        public final boolean nq() {
            return this.JE;
        }

        public final boolean nr() {
            return this.JC;
        }

        public final boolean ns() {
            return this.JO;
        }

        public final int nt() {
            return this.JP;
        }

        public final int nu() {
            return this.JQ;
        }

        public final a s(long j) {
            this.JI = j;
            return this;
        }
    }

    public interface b {
        void onAdClicked();
    }

    /* JADX WARN: Removed duplicated region for block: B:32:0x00af  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static int a(Context context, AdTemplate adTemplate, b bVar, c cVar, boolean z, boolean z2, boolean z3) {
        adTemplate.converted = true;
        d.au(false);
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        com.kwad.sdk.components.c.f(com.kwad.components.a.a.a.class);
        a aVarP = new a(context).P(adTemplate);
        int iAf = com.kwad.sdk.core.response.b.a.af(adInfoCg);
        if ((z3 || aVarP.nu() == 2 || aVarP.nu() == 1) || TextUtils.isEmpty(com.kwad.sdk.core.response.b.a.aK(adInfoCg)) || aVarP.nq()) {
            if (a(aVarP, 1) != 1) {
                if (!com.kwad.sdk.core.response.b.a.ax(adInfoCg)) {
                    bVar.onAdClicked();
                    if (com.kwad.sdk.utils.d.f(context, com.kwad.sdk.core.response.b.a.cz(adInfoCg), com.kwad.sdk.core.response.b.a.aq(adInfoCg))) {
                        com.kwad.sdk.core.report.a.l(adTemplate, 0);
                    } else {
                        a(context, new AdWebViewActivityProxy.a.a().ar(com.kwad.sdk.core.response.b.b.bm(adTemplate)).S(adTemplate).oA());
                    }
                    return 0;
                }
                if (cVar == null) {
                    return 0;
                }
                int iM = cVar.m(new a(context).am(z).P(adTemplate).an(z2).ap(false));
                if (adInfoCg.status != 2 && adInfoCg.status != 3) {
                    bVar.onAdClicked();
                }
                return iM;
            }
        } else {
            if (iAf == 1) {
                boolean zAZ = com.kwad.sdk.core.response.b.a.aZ(adInfoCg);
                bVar.onAdClicked();
                if (zAZ) {
                    c(aVarP.getContext(), adTemplate);
                } else {
                    a(aVarP.getContext(), new AdWebViewActivityProxy.a.a().ar(com.kwad.sdk.core.response.b.b.bm(adTemplate)).S(adTemplate).oA());
                }
                return 0;
            }
            if (iAf == 2) {
                if (a(aVarP, 1) != 1) {
                    boolean zAZ2 = com.kwad.sdk.core.response.b.a.aZ(adInfoCg);
                    bVar.onAdClicked();
                    if (zAZ2) {
                        c(aVarP.getContext(), adTemplate);
                    } else {
                        a(aVarP.getContext(), new AdWebViewActivityProxy.a.a().ar(com.kwad.sdk.core.response.b.b.bm(adTemplate)).S(adTemplate).oA());
                    }
                    return 0;
                }
            }
        }
        d.au(true);
        bVar.onAdClicked();
        return 0;
    }

    public static int a(a aVar) {
        d.au(false);
        BusinessType businessType = aVar.adTemplate != null ? aVar.adTemplate.getBusinessType() : null;
        KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(businessType, "adClick").report();
        if (aVar.nr()) {
            a(aVar.getContext(), aVar.getAdTemplate(), aVar.ni(), aVar.hi(), aVar.JH, aVar.nm(), false);
            return 0;
        }
        if (b(aVar)) {
            return 0;
        }
        aVar.getAdTemplate().converted = true;
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(aVar.getAdTemplate());
        com.kwad.sdk.components.c.f(com.kwad.components.a.a.a.class);
        int iAf = com.kwad.sdk.core.response.b.a.af(adInfoCg);
        if (!(aVar.nu() == 2 || aVar.nu() == 1) && !TextUtils.isEmpty(com.kwad.sdk.core.response.b.a.aK(adInfoCg)) && !aVar.nq()) {
            if (iAf == 1) {
                boolean zAZ = com.kwad.sdk.core.response.b.a.aZ(adInfoCg);
                e(aVar);
                if (zAZ) {
                    c(aVar.getContext(), aVar.getAdTemplate());
                } else {
                    a(aVar.getContext(), new AdWebViewActivityProxy.a.a().ar(com.kwad.sdk.core.response.b.b.bm(aVar.getAdTemplate())).S(aVar.getAdTemplate()).oA());
                }
                return 0;
            }
            if (iAf == 2) {
                if (a(aVar, 1) == 1) {
                    if (com.kwad.sdk.core.response.b.a.cv(adInfoCg)) {
                        com.kwad.sdk.core.report.a.n(aVar.getAdTemplate(), (int) Math.ceil(aVar.nl() / 1000.0f));
                    }
                    d.au(true);
                    e(aVar);
                    return 0;
                }
                boolean zAZ2 = com.kwad.sdk.core.response.b.a.aZ(adInfoCg);
                e(aVar);
                if (zAZ2) {
                    c(aVar.getContext(), aVar.getAdTemplate());
                } else {
                    a(aVar.getContext(), new AdWebViewActivityProxy.a.a().ar(com.kwad.sdk.core.response.b.b.bm(aVar.getAdTemplate())).S(aVar.getAdTemplate()).oA());
                }
                return 0;
            }
        }
        if (a(aVar, 1) == 1) {
            if (com.kwad.sdk.core.response.b.a.cv(adInfoCg) || com.kwad.sdk.core.response.b.a.cw(adInfoCg)) {
                com.kwad.sdk.core.report.a.n(aVar.getAdTemplate(), (int) Math.ceil(aVar.nl() / 1000.0f));
            }
            d.au(true);
            e(aVar);
            return 0;
        }
        if (e.e(aVar.getContext(), aVar.getAdTemplate()) == 1) {
            e(aVar);
            KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(businessType, "smallAppSuccess").report();
            return 0;
        }
        if (aVar.np() && !com.kwad.sdk.core.response.b.a.ax(adInfoCg)) {
            e(aVar);
            i(aVar);
            return 0;
        }
        if (!com.kwad.sdk.core.response.b.a.ax(adInfoCg)) {
            if (aVar.getAdTemplate().isWebViewDownload) {
                return h(aVar);
            }
            boolean zF = com.kwad.sdk.utils.d.f(aVar.getContext(), com.kwad.sdk.core.response.b.a.cz(adInfoCg), com.kwad.sdk.core.response.b.a.aq(adInfoCg));
            e(aVar);
            if (zF) {
                com.kwad.sdk.core.report.a.l(aVar.getAdTemplate(), 0);
                return 0;
            }
            a(aVar.getContext(), new AdWebViewActivityProxy.a.a().ar(com.kwad.sdk.core.response.b.b.bm(aVar.getAdTemplate())).S(aVar.getAdTemplate()).oA());
            return 0;
        }
        if (com.kwad.sdk.core.response.b.a.ax(adInfoCg)) {
            if (aVar.nu() == 2 || aVar.nu() == 1) {
                aVar.ap(false);
                e(aVar);
            } else {
                e(aVar);
                if (!c(aVar)) {
                    aVar.ap(true);
                }
            }
            return h(aVar);
        }
        return 0;
    }

    private static int a(a aVar, int i) {
        AdTemplate adTemplate = aVar.getAdTemplate();
        KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck((adTemplate == null || adTemplate.mAdScene == null) ? null : KSLoggerReporter.cs(adTemplate.mAdScene.getAdStyle()), "dplinkStart").report();
        boolean z = true;
        int iB = d.b(aVar, 1);
        String strA = d.a(aVar, adTemplate);
        if (!TextUtils.isEmpty(strA) && !strA.contains(" ")) {
            z = false;
        }
        if (z) {
            KSLoggerReporter.ReportClient.RESPONE_MONITOR.buildNormalApmReporter().dx("response_biz_error_convert").aK(adTemplate).W("dpLinkError", strA).report();
        }
        return iB;
    }

    private static void a(Context context, AdWebViewActivityProxy.a aVar) {
        AdWebViewActivityProxy.launch(context, aVar);
    }

    public static void a(k.b bVar) {
        if (JB == null) {
            JB = new CopyOnWriteArrayList();
        }
        JB.add(new WeakReference<>(bVar));
    }

    public static void b(k.b bVar) {
        if (JB == null) {
            return;
        }
        int i = 0;
        while (true) {
            if (i >= JB.size()) {
                i = -1;
                break;
            }
            WeakReference<k.b> weakReference = JB.get(i);
            if (weakReference != null && weakReference.get() != null && bVar == weakReference.get()) {
                break;
            } else {
                i++;
            }
        }
        if (i != -1) {
            JB.remove(i);
        }
    }

    private static boolean b(a aVar) {
        return com.kwad.sdk.core.response.b.a.ax(com.kwad.sdk.core.response.b.d.cg(aVar.getAdTemplate())) ? !aVar.ns() && c.s(aVar) == 3 : d(aVar) == 1;
    }

    private static void c(Context context, AdTemplate adTemplate) {
        AdWebViewVideoActivityProxy.launch(context, adTemplate);
        KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(adTemplate.mAdScene != null ? KSLoggerReporter.cs(adTemplate.mAdScene.getAdStyle()) : null, "toVideoH5Web").report();
    }

    private static boolean c(a aVar) {
        AdTemplate adTemplate = aVar.getAdTemplate();
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        if (!aVar.np() || !com.kwad.sdk.core.response.b.a.b(adInfoCg, com.kwad.sdk.core.config.d.zp()) || TextUtils.isEmpty(com.kwad.sdk.core.response.b.a.aK(adInfoCg)) || AdWebViewVideoActivityProxy.showingAdWebViewVideoActivity || aVar.hi().nC()) {
            return false;
        }
        c(aVar.getContext(), adTemplate);
        return true;
    }

    private static int d(a aVar) {
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(aVar.getAdTemplate());
        if (adInfoCg.unDownloadConf.unDownloadRegionConf == null) {
            return 0;
        }
        int iCV = aVar.cV();
        return iCV != 2 ? iCV != 3 ? adInfoCg.unDownloadConf.unDownloadRegionConf.actionBarType : adInfoCg.unDownloadConf.unDownloadRegionConf.materialJumpType : adInfoCg.unDownloadConf.unDownloadRegionConf.describeBarType;
    }

    private static void e(a aVar) {
        g(aVar);
        f(aVar);
        if (aVar.ni() != null) {
            aVar.ni().onAdClicked();
        }
    }

    private static void f(a aVar) {
        if (aVar.nn()) {
            com.kwad.sdk.core.report.a.a(aVar.adTemplate, aVar.JL, aVar.hv());
        }
    }

    private static void g(a aVar) {
        k.b bVar;
        List<WeakReference<k.b>> list = JB;
        if (list == null || list.isEmpty() || aVar.adTemplate == null) {
            return;
        }
        for (WeakReference<k.b> weakReference : JB) {
            if (weakReference != null && (bVar = weakReference.get()) != null) {
                bVar.E(com.kwad.sdk.core.response.b.d.cq(aVar.adTemplate));
            }
        }
    }

    private static int h(a aVar) {
        c cVarHi = aVar.hi();
        if (cVarHi == null) {
            cVarHi = new c(aVar.adTemplate);
            aVar.b(cVarHi);
        }
        int iM = cVarHi.m(aVar);
        AdTemplate adTemplate = aVar.getAdTemplate();
        KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(adTemplate.getBusinessType(), "toDownload").report();
        String strCj = com.kwad.sdk.core.response.b.d.cj(aVar.getAdTemplate());
        boolean zIsEmpty = TextUtils.isEmpty(strCj);
        if (!zIsEmpty) {
            zIsEmpty = strCj.contains(" ");
        }
        if (!zIsEmpty) {
            zIsEmpty = strCj.startsWith("http");
        }
        if (zIsEmpty) {
            KSLoggerReporter.ReportClient.RESPONE_MONITOR.buildNormalApmReporter().dx("response_biz_error_convert").aK(adTemplate).W("downloadUrlError", strCj).report();
        }
        return iM;
    }

    private static void i(a aVar) {
        AdTemplate adTemplate = aVar.getAdTemplate();
        Context context = aVar.getContext();
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        if (com.kwad.sdk.utils.d.f(context, com.kwad.sdk.core.response.b.a.cz(adInfoCg), com.kwad.sdk.core.response.b.a.aq(adInfoCg))) {
            com.kwad.sdk.core.report.a.l(adTemplate, 0);
        } else if (!com.kwad.sdk.core.response.b.a.b(adInfoCg, com.kwad.sdk.core.config.d.zp()) || adTemplate.mAdWebVideoPageShowing) {
            a(context, new AdWebViewActivityProxy.a.a().ar(com.kwad.sdk.core.response.b.b.bm(aVar.getAdTemplate())).S(aVar.getAdTemplate()).oA());
        } else {
            c(context, adTemplate);
        }
    }
}
