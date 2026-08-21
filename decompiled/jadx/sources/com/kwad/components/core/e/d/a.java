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

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private static List<WeakReference<k.b>> JB;

    /* JADX INFO: renamed from: com.kwad.components.core.e.d.a$a, reason: collision with other inner class name */
    public static class C0150a {
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

        public C0150a(Context context) {
            this.context = context;
        }

        public final C0150a P(AdTemplate adTemplate) {
            this.adTemplate = adTemplate;
            return this;
        }

        public final C0150a a(b bVar) {
            this.JF = bVar;
            return this;
        }

        public final C0150a a(z.b bVar) {
            this.JL = bVar;
            return this;
        }

        public final C0150a a(Callable<String> callable) {
            this.JS = callable;
            return this;
        }

        public final C0150a al(String str) {
            this.JT = str;
            return this;
        }

        public final C0150a am(int i) {
            this.JR = i;
            return this;
        }

        public final C0150a am(boolean z) {
            this.JH = z;
            return this;
        }

        public final C0150a an(int i) {
            this.jG = i;
            return this;
        }

        public final C0150a an(boolean z) {
            this.JJ = z;
            return this;
        }

        public final C0150a ao(int i) {
            this.jE = i;
            return this;
        }

        public final C0150a ao(boolean z) {
            this.JK = z;
            return this;
        }

        public final C0150a ap(int i) {
            this.JP = i;
            return this;
        }

        public final C0150a ap(boolean z) {
            this.JN = z;
            return this;
        }

        public final C0150a aq(int i) {
            this.JQ = i;
            return this;
        }

        public final C0150a aq(boolean z) {
            this.JD = z;
            return this;
        }

        public final C0150a ar(boolean z) {
            this.JE = true;
            return this;
        }

        public final C0150a as(boolean z) {
            this.JC = z;
            return this;
        }

        public final C0150a at(boolean z) {
            this.JO = z;
            return this;
        }

        public final C0150a b(c cVar) {
            this.JG = cVar;
            return this;
        }

        public final int cV() {
            return this.jE;
        }

        public final int cY() {
            return this.jG;
        }

        public final C0150a d(JSONObject jSONObject) {
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

        public final C0150a s(long j) {
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
        To view partially-correct add '--show-bad-code' argument
    */
    public static int a(android.content.Context r6, com.kwad.sdk.core.response.model.AdTemplate r7, com.kwad.components.core.e.d.a.b r8, com.kwad.components.core.e.d.c r9, boolean r10, boolean r11, boolean r12) {
        /*
            Method dump skipped, instruction units count: 275
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.components.core.e.d.a.a(android.content.Context, com.kwad.sdk.core.response.model.AdTemplate, com.kwad.components.core.e.d.a$b, com.kwad.components.core.e.d.c, boolean, boolean, boolean):int");
    }

    public static int a(C0150a c0150a) {
        d.au(false);
        BusinessType businessType = c0150a.adTemplate != null ? c0150a.adTemplate.getBusinessType() : null;
        KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(businessType, "adClick").report();
        if (c0150a.nr()) {
            a(c0150a.getContext(), c0150a.getAdTemplate(), c0150a.ni(), c0150a.hi(), c0150a.JH, c0150a.nm(), false);
            return 0;
        }
        if (b(c0150a)) {
            return 0;
        }
        c0150a.getAdTemplate().converted = true;
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(c0150a.getAdTemplate());
        com.kwad.sdk.components.c.f(com.kwad.components.a.a.a.class);
        int iAf = com.kwad.sdk.core.response.b.a.af(adInfoCg);
        if (!(c0150a.nu() == 2 || c0150a.nu() == 1) && !TextUtils.isEmpty(com.kwad.sdk.core.response.b.a.aK(adInfoCg)) && !c0150a.nq()) {
            if (iAf == 1) {
                boolean zAZ = com.kwad.sdk.core.response.b.a.aZ(adInfoCg);
                e(c0150a);
                if (zAZ) {
                    c(c0150a.getContext(), c0150a.getAdTemplate());
                } else {
                    a(c0150a.getContext(), new AdWebViewActivityProxy.a.C0160a().ar(com.kwad.sdk.core.response.b.b.bm(c0150a.getAdTemplate())).S(c0150a.getAdTemplate()).oA());
                }
                return 0;
            }
            if (iAf == 2) {
                if (a(c0150a, 1) == 1) {
                    if (com.kwad.sdk.core.response.b.a.cv(adInfoCg)) {
                        com.kwad.sdk.core.report.a.n(c0150a.getAdTemplate(), (int) Math.ceil(c0150a.nl() / 1000.0f));
                    }
                    d.au(true);
                    e(c0150a);
                    return 0;
                }
                boolean zAZ2 = com.kwad.sdk.core.response.b.a.aZ(adInfoCg);
                e(c0150a);
                if (zAZ2) {
                    c(c0150a.getContext(), c0150a.getAdTemplate());
                } else {
                    a(c0150a.getContext(), new AdWebViewActivityProxy.a.C0160a().ar(com.kwad.sdk.core.response.b.b.bm(c0150a.getAdTemplate())).S(c0150a.getAdTemplate()).oA());
                }
                return 0;
            }
        }
        if (a(c0150a, 1) == 1) {
            if (com.kwad.sdk.core.response.b.a.cv(adInfoCg) || com.kwad.sdk.core.response.b.a.cw(adInfoCg)) {
                com.kwad.sdk.core.report.a.n(c0150a.getAdTemplate(), (int) Math.ceil(c0150a.nl() / 1000.0f));
            }
            d.au(true);
            e(c0150a);
            return 0;
        }
        if (e.e(c0150a.getContext(), c0150a.getAdTemplate()) == 1) {
            e(c0150a);
            KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(businessType, "smallAppSuccess").report();
            return 0;
        }
        if (c0150a.np() && !com.kwad.sdk.core.response.b.a.ax(adInfoCg)) {
            e(c0150a);
            i(c0150a);
            return 0;
        }
        if (!com.kwad.sdk.core.response.b.a.ax(adInfoCg)) {
            if (c0150a.getAdTemplate().isWebViewDownload) {
                return h(c0150a);
            }
            boolean zF = com.kwad.sdk.utils.d.f(c0150a.getContext(), com.kwad.sdk.core.response.b.a.cz(adInfoCg), com.kwad.sdk.core.response.b.a.aq(adInfoCg));
            e(c0150a);
            if (zF) {
                com.kwad.sdk.core.report.a.l(c0150a.getAdTemplate(), 0);
                return 0;
            }
            a(c0150a.getContext(), new AdWebViewActivityProxy.a.C0160a().ar(com.kwad.sdk.core.response.b.b.bm(c0150a.getAdTemplate())).S(c0150a.getAdTemplate()).oA());
            return 0;
        }
        if (com.kwad.sdk.core.response.b.a.ax(adInfoCg)) {
            if (c0150a.nu() == 2 || c0150a.nu() == 1) {
                c0150a.ap(false);
                e(c0150a);
            } else {
                e(c0150a);
                if (!c(c0150a)) {
                    c0150a.ap(true);
                }
            }
            return h(c0150a);
        }
        return 0;
    }

    private static int a(C0150a c0150a, int i) {
        AdTemplate adTemplate = c0150a.getAdTemplate();
        KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck((adTemplate == null || adTemplate.mAdScene == null) ? null : KSLoggerReporter.cs(adTemplate.mAdScene.getAdStyle()), "dplinkStart").report();
        boolean z = true;
        int iB = d.b(c0150a, 1);
        String strA = d.a(c0150a, adTemplate);
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

    private static boolean b(C0150a c0150a) {
        return com.kwad.sdk.core.response.b.a.ax(com.kwad.sdk.core.response.b.d.cg(c0150a.getAdTemplate())) ? !c0150a.ns() && c.s(c0150a) == 3 : d(c0150a) == 1;
    }

    private static void c(Context context, AdTemplate adTemplate) {
        AdWebViewVideoActivityProxy.launch(context, adTemplate);
        KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(adTemplate.mAdScene != null ? KSLoggerReporter.cs(adTemplate.mAdScene.getAdStyle()) : null, "toVideoH5Web").report();
    }

    private static boolean c(C0150a c0150a) {
        AdTemplate adTemplate = c0150a.getAdTemplate();
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        if (!c0150a.np() || !com.kwad.sdk.core.response.b.a.b(adInfoCg, com.kwad.sdk.core.config.d.zp()) || TextUtils.isEmpty(com.kwad.sdk.core.response.b.a.aK(adInfoCg)) || AdWebViewVideoActivityProxy.showingAdWebViewVideoActivity || c0150a.hi().nC()) {
            return false;
        }
        c(c0150a.getContext(), adTemplate);
        return true;
    }

    private static int d(C0150a c0150a) {
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(c0150a.getAdTemplate());
        if (adInfoCg.unDownloadConf.unDownloadRegionConf == null) {
            return 0;
        }
        int iCV = c0150a.cV();
        return iCV != 2 ? iCV != 3 ? adInfoCg.unDownloadConf.unDownloadRegionConf.actionBarType : adInfoCg.unDownloadConf.unDownloadRegionConf.materialJumpType : adInfoCg.unDownloadConf.unDownloadRegionConf.describeBarType;
    }

    private static void e(C0150a c0150a) {
        g(c0150a);
        f(c0150a);
        if (c0150a.ni() != null) {
            c0150a.ni().onAdClicked();
        }
    }

    private static void f(C0150a c0150a) {
        if (c0150a.nn()) {
            com.kwad.sdk.core.report.a.a(c0150a.adTemplate, c0150a.JL, c0150a.hv());
        }
    }

    private static void g(C0150a c0150a) {
        k.b bVar;
        List<WeakReference<k.b>> list = JB;
        if (list == null || list.isEmpty() || c0150a.adTemplate == null) {
            return;
        }
        for (WeakReference<k.b> weakReference : JB) {
            if (weakReference != null && (bVar = weakReference.get()) != null) {
                bVar.E(com.kwad.sdk.core.response.b.d.cq(c0150a.adTemplate));
            }
        }
    }

    private static int h(C0150a c0150a) {
        c cVarHi = c0150a.hi();
        if (cVarHi == null) {
            cVarHi = new c(c0150a.adTemplate);
            c0150a.b(cVarHi);
        }
        int iM = cVarHi.m(c0150a);
        AdTemplate adTemplate = c0150a.getAdTemplate();
        KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(adTemplate.getBusinessType(), "toDownload").report();
        String strCj = com.kwad.sdk.core.response.b.d.cj(c0150a.getAdTemplate());
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

    private static void i(C0150a c0150a) {
        AdTemplate adTemplate = c0150a.getAdTemplate();
        Context context = c0150a.getContext();
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        if (com.kwad.sdk.utils.d.f(context, com.kwad.sdk.core.response.b.a.cz(adInfoCg), com.kwad.sdk.core.response.b.a.aq(adInfoCg))) {
            com.kwad.sdk.core.report.a.l(adTemplate, 0);
        } else if (!com.kwad.sdk.core.response.b.a.b(adInfoCg, com.kwad.sdk.core.config.d.zp()) || adTemplate.mAdWebVideoPageShowing) {
            a(context, new AdWebViewActivityProxy.a.C0160a().ar(com.kwad.sdk.core.response.b.b.bm(c0150a.getAdTemplate())).S(c0150a.getAdTemplate()).oA());
        } else {
            c(context, adTemplate);
        }
    }
}
