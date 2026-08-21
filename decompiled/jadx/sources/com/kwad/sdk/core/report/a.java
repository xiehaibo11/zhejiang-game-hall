package com.kwad.sdk.core.report;

import android.text.TextUtils;
import com.kwad.sdk.api.model.AdExposureFailedReason;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.threads.GlobalThreadPools;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.ac;
import com.kwad.sdk.utils.ai;
import com.kwad.sdk.utils.ak;
import java.util.concurrent.ExecutorService;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private static ExecutorService aqw = GlobalThreadPools.CV();
    public static JSONObject aqx;
    public static boolean aqy;

    /* JADX INFO: renamed from: com.kwad.sdk.core.report.a$a, reason: collision with other inner class name */
    public static class C0214a extends com.kwad.sdk.core.response.a.a {
        public int code;
        public String msg;

        public C0214a(int i, String str) {
            this.code = i;
            this.msg = str;
        }
    }

    private static int BO() {
        return ai.IO() ? 2 : 1;
    }

    private static boolean D(AdInfo adInfo) {
        com.kwad.sdk.service.a.e eVar = (com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class);
        if (eVar == null) {
            return false;
        }
        String strAq = com.kwad.sdk.core.response.b.a.aq(adInfo);
        if (TextUtils.isEmpty(strAq)) {
            return false;
        }
        return ak.ak(eVar.getContext(), strAq);
    }

    public static void a(AdTemplate adTemplate, int i, long j, int i2, long j2, JSONObject jSONObject) {
        z.b bVar = new z.b();
        bVar.vy = j;
        bVar.atv = i2;
        bVar.asU = i;
        z.a aVar = new z.a();
        aVar.duration = j2;
        bVar.att = aVar;
        b(adTemplate, 3, bVar, (JSONObject) null);
    }

    @Deprecated
    public static void a(AdTemplate adTemplate, int i, long j, JSONObject jSONObject) {
        z.b bVar = new z.b();
        bVar.asU = i;
        z.a aVar = new z.a();
        aVar.duration = j;
        bVar.att = aVar;
        b(adTemplate, 3, bVar, jSONObject);
    }

    public static void a(AdTemplate adTemplate, int i, AdExposureFailedReason adExposureFailedReason) {
        if (i == 0 || i == 1 || i == 2 || i == 3 || i == 4) {
            z.b bVar = new z.b();
            bVar.asY = i;
            if (adExposureFailedReason != null && i == 2) {
                bVar.asZ = adExposureFailedReason.winEcpm;
                try {
                    bVar.adnType = adExposureFailedReason.adnType;
                    if (adExposureFailedReason.adnType == 2) {
                        bVar.adnName = adExposureFailedReason.adnName;
                    }
                } catch (Throwable unused) {
                }
            }
            b(adTemplate, 809, bVar, (JSONObject) null);
        }
    }

    public static void a(AdTemplate adTemplate, int i, z.b bVar, JSONObject jSONObject) {
        bVar.asV = i;
        b(adTemplate, 140, bVar, (JSONObject) null);
    }

    @Deprecated
    public static void a(AdTemplate adTemplate, int i, ac.a aVar) {
        z.b bVar = new z.b();
        bVar.jG = i;
        if (aVar != null) {
            bVar.jI = aVar;
        }
        a(adTemplate, bVar, (JSONObject) null);
    }

    public static void a(AdTemplate adTemplate, int i, JSONObject jSONObject) {
        z.b bVar = new z.b();
        bVar.asS = i;
        b(adTemplate, 402, bVar, jSONObject);
    }

    public static void a(AdTemplate adTemplate, int i, JSONObject jSONObject, String str) {
        z.b bVar = new z.b();
        bVar.UP = str;
        b(adTemplate, i, bVar, jSONObject);
    }

    public static void a(AdTemplate adTemplate, long j, JSONObject jSONObject) {
        z.b bVar = new z.b();
        z.a aVar = new z.a();
        if (j != -1) {
            aVar.duration = j;
            bVar.att = aVar;
        }
        b(adTemplate, 934, bVar, (JSONObject) null);
    }

    public static void a(AdTemplate adTemplate, C0214a c0214a) {
        z.b bVar = new z.b();
        bVar.ath = c0214a.toJson().toString();
        b(adTemplate, 40, bVar, (JSONObject) null);
    }

    public static void a(AdTemplate adTemplate, j jVar) {
        b(adTemplate, 141, jVar != null ? jVar.Ca() : null, (JSONObject) null);
    }

    public static void a(AdTemplate adTemplate, j jVar, JSONObject jSONObject) {
        a(adTemplate, jVar != null ? jVar.Ca() : null, jSONObject);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void a(AdTemplate adTemplate, z.b bVar) {
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        String str = adInfoCg.downloadFilePath;
        if (str == null) {
            return;
        }
        String strAq = com.kwad.sdk.core.response.b.a.aq(adInfoCg);
        String strFC = ak.fC(str);
        if (strFC == null || TextUtils.isEmpty(strFC) || strFC.equals(strAq)) {
            return;
        }
        bVar.atk = strFC;
        bVar.atj = strAq;
        adInfoCg.adBaseInfo.appPackageName = strFC;
    }

    public static void a(AdTemplate adTemplate, z.b bVar, JSONObject jSONObject) {
        if (bVar != null && adTemplate.fromCache) {
            bVar.a(k.aJ(adTemplate));
        }
        b(adTemplate, 2, bVar, jSONObject);
    }

    public static void a(AdTemplate adTemplate, String str, int i) {
        z.b bVar = new z.b();
        bVar.atc = i;
        if (!str.equals("")) {
            bVar.atd = str;
        }
        b(adTemplate, 803, bVar, (JSONObject) null);
    }

    public static void a(AdTemplate adTemplate, String str, int i, z.b bVar) {
        if (bVar == null) {
            bVar = new z.b();
        }
        bVar.atc = i;
        if (!str.equals("")) {
            bVar.atd = str;
        }
        b(adTemplate, 320, bVar, (JSONObject) null);
    }

    public static void aA(AdTemplate adTemplate) {
        h(adTemplate, null);
    }

    public static void aB(AdTemplate adTemplate) {
        r(adTemplate, 58);
    }

    public static void aC(AdTemplate adTemplate) {
        r(adTemplate, 914);
    }

    public static void aD(AdTemplate adTemplate) {
        z.b bVar = new z.b();
        bVar.atr = com.kwad.sdk.core.response.b.a.bo(com.kwad.sdk.core.response.b.d.cg(adTemplate));
        com.kwad.sdk.core.e.c.d("AdReportManager", "reportDownloadCardClose downloadStatus=" + bVar.atr);
        b(adTemplate, 713, bVar, (JSONObject) null);
    }

    public static void aE(AdTemplate adTemplate) {
        r(adTemplate, 722);
    }

    public static void aF(AdTemplate adTemplate) {
        r(adTemplate, 721);
    }

    public static void aG(AdTemplate adTemplate) {
        j jVar = new j();
        z.a aVar = new z.a();
        aVar.asL = 1;
        jVar.a(aVar);
        b(adTemplate, 804, jVar.Ca(), (JSONObject) null);
    }

    public static void aH(AdTemplate adTemplate) {
        j jVar = new j();
        z.a aVar = new z.a();
        aVar.asL = 2;
        jVar.a(aVar);
        b(adTemplate, 804, jVar.Ca(), (JSONObject) null);
    }

    private static boolean aI(AdTemplate adTemplate) {
        if (com.kwad.sdk.core.response.b.d.bY(adTemplate)) {
            return true;
        }
        com.kwad.sdk.service.a.e eVar = (com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class);
        return eVar != null && eVar.ac(adTemplate);
    }

    public static void at(AdTemplate adTemplate) {
        r(adTemplate, 4);
    }

    public static void au(AdTemplate adTemplate) {
        z.b bVar = new z.b();
        bVar.downloadSource = adTemplate.downloadSource;
        b(adTemplate, 30, bVar, (JSONObject) null);
    }

    public static void av(final AdTemplate adTemplate) {
        aqw.submit(new Runnable() { // from class: com.kwad.sdk.core.report.a.2
            @Override // java.lang.Runnable
            public final void run() {
                AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
                int iAt = ak.at(adInfoCg.downloadId, com.kwad.sdk.core.response.b.a.aq(adInfoCg));
                z.b bVar = new z.b();
                bVar.downloadSource = adTemplate.downloadSource;
                bVar.atf = iAt;
                bVar.atg = adTemplate.installFrom;
                a.b(adTemplate, 32, bVar, (JSONObject) null);
            }
        });
    }

    public static void aw(AdTemplate adTemplate) {
        r(adTemplate, 36);
    }

    public static void ax(AdTemplate adTemplate) {
        r(adTemplate, 38);
    }

    public static void ay(AdTemplate adTemplate) {
        r(adTemplate, 41);
    }

    public static void az(AdTemplate adTemplate) {
        z.b bVar = new z.b();
        bVar.atj = com.kwad.sdk.core.response.b.a.aq(com.kwad.sdk.core.response.b.d.cg(adTemplate));
        b(adTemplate, 768, bVar, new JSONObject());
    }

    public static void b(final AdTemplate adTemplate, final int i, final z.b bVar, final JSONObject jSONObject) {
        if (adTemplate == null || !aI(adTemplate)) {
            return;
        }
        if (bVar == null) {
            bVar = new z.b();
        }
        bVar.ats = com.kwad.sdk.core.response.b.a.aL(com.kwad.sdk.core.response.b.d.cg(adTemplate));
        StringBuilder sb = new StringBuilder();
        sb.append(i);
        com.kwad.sdk.core.e.c.d("AdReportManager", sb.toString());
        bVar.adxResult = adTemplate.adxResult;
        if (i == 2 && aqy) {
            if (bVar.att == null) {
                bVar.att = new z.a();
            }
            bVar.att.asO = aqx;
        }
        new y() { // from class: com.kwad.sdk.core.report.a.3
            /* JADX INFO: Access modifiers changed from: private */
            @Override // com.kwad.sdk.core.network.a
            /* JADX INFO: renamed from: BP, reason: merged with bridge method [inline-methods] */
            public z createRequest() {
                return new z(adTemplate, i, bVar, jSONObject);
            }
        }.fetch();
    }

    @Deprecated
    public static void b(AdTemplate adTemplate, int i, JSONObject jSONObject) {
        z.b bVar = new z.b();
        bVar.asV = i;
        b(adTemplate, 140, bVar, jSONObject);
    }

    public static void b(AdTemplate adTemplate, j jVar, JSONObject jSONObject) {
        b(adTemplate, 3, jVar != null ? jVar.Ca() : null, jSONObject);
    }

    public static void b(AdTemplate adTemplate, z.b bVar) {
        b(adTemplate, 50, bVar, (JSONObject) null);
    }

    public static void b(AdTemplate adTemplate, String str, int i, z.b bVar) {
        if (bVar == null) {
            bVar = new z.b();
        }
        bVar.atc = i;
        if (!str.equals("")) {
            bVar.atd = str;
        }
        b(adTemplate, 321, bVar, (JSONObject) null);
    }

    public static void b(AdTemplate adTemplate, JSONObject jSONObject, j jVar) {
        if (adTemplate.mPvReported) {
            return;
        }
        adTemplate.mPvReported = true;
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        if (jVar == null) {
            jVar = new j();
        }
        jVar.cr(BO());
        z.b bVarCa = jVar.Ca();
        if (adTemplate.fromCache) {
            bVarCa.a(k.aJ(adTemplate));
        }
        bVarCa.atq = D(adInfoCg) ? 1 : 0;
        b(adTemplate, 1, bVarCa, jSONObject);
    }

    public static void c(AdTemplate adTemplate, int i, int i2) {
        z.b bVar = new z.b();
        bVar.atp = i;
        bVar.atD = i2;
        b(adTemplate, 323, bVar, (JSONObject) null);
    }

    public static void c(AdTemplate adTemplate, int i, JSONObject jSONObject) {
        z.b bVar = new z.b();
        bVar.atj = com.kwad.sdk.core.response.b.a.aq(com.kwad.sdk.core.response.b.d.cg(adTemplate));
        bVar.asV = 93;
        b(adTemplate, 140, bVar, (JSONObject) null);
    }

    public static void c(AdTemplate adTemplate, z.b bVar) {
        b(adTemplate, 51, bVar, (JSONObject) null);
    }

    public static void c(AdTemplate adTemplate, JSONObject jSONObject) {
        z.b bVar = new z.b();
        bVar.downloadSource = adTemplate.downloadSource;
        b(adTemplate, 33, bVar, jSONObject);
    }

    public static void c(AdTemplate adTemplate, JSONObject jSONObject, j jVar) {
        b(adTemplate, 451, jVar != null ? jVar.Ca() : null, (JSONObject) null);
    }

    public static void d(AdTemplate adTemplate, int i, int i2) {
        z.b bVar = new z.b();
        bVar.asV = 69;
        bVar.atl = i;
        bVar.atm = i2;
        b(adTemplate, 501, bVar, (JSONObject) null);
    }

    private static void d(AdTemplate adTemplate, int i, JSONObject jSONObject) {
        b(adTemplate, i, (z.b) null, jSONObject);
    }

    public static void d(AdTemplate adTemplate, z.b bVar) {
        b(adTemplate, 52, bVar, (JSONObject) null);
    }

    public static void d(AdTemplate adTemplate, JSONObject jSONObject) {
        z.b bVar = new z.b();
        bVar.downloadSource = adTemplate.downloadSource;
        b(adTemplate, 34, bVar, jSONObject);
    }

    public static void d(AdTemplate adTemplate, JSONObject jSONObject, j jVar) {
        b(adTemplate, 140, jVar != null ? jVar.Ca() : null, jSONObject);
    }

    public static void e(AdTemplate adTemplate, z.b bVar) {
        b(adTemplate, 59, bVar, (JSONObject) null);
    }

    public static void e(final AdTemplate adTemplate, final JSONObject jSONObject) {
        aqw.submit(new Runnable() { // from class: com.kwad.sdk.core.report.a.1
            @Override // java.lang.Runnable
            public final void run() {
                z.b bVar = new z.b();
                bVar.downloadSource = adTemplate.downloadSource;
                a.a(adTemplate, bVar);
                a.b(adTemplate, 31, bVar, jSONObject);
                AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
                ak.as(adInfoCg.downloadFilePath, adInfoCg.downloadId);
            }
        });
    }

    public static void f(AdTemplate adTemplate, JSONObject jSONObject) {
        z.b bVar = new z.b();
        bVar.downloadSource = adTemplate.downloadSource;
        b(adTemplate, 35, bVar, jSONObject);
    }

    public static void g(AdTemplate adTemplate, JSONObject jSONObject) {
        d(adTemplate, 399, jSONObject);
    }

    public static void h(AdTemplate adTemplate, JSONObject jSONObject) {
        d(adTemplate, 400, jSONObject);
    }

    public static void i(AdTemplate adTemplate, int i) {
        z.b bVar = new z.b();
        bVar.atz = i;
        b(adTemplate, 37, bVar, (JSONObject) null);
    }

    public static void i(AdTemplate adTemplate, long j) {
        z.b bVar = new z.b();
        bVar.asX = j;
        b(adTemplate, 600, bVar, (JSONObject) null);
    }

    public static void i(AdTemplate adTemplate, JSONObject jSONObject) {
        d(adTemplate, 501, jSONObject);
    }

    public static void j(AdTemplate adTemplate) {
        g(adTemplate, null);
    }

    public static void j(AdTemplate adTemplate, int i) {
        z.b bVar = new z.b();
        bVar.atb = i;
        b(adTemplate, 923, bVar, (JSONObject) null);
    }

    public static void j(AdTemplate adTemplate, long j) {
        z.b bVar = new z.b();
        bVar.ato = j;
        b(adTemplate, 401, bVar, (JSONObject) null);
    }

    public static void j(AdTemplate adTemplate, JSONObject jSONObject) {
        d(adTemplate, 450, jSONObject);
    }

    public static void k(AdTemplate adTemplate, int i) {
        z.b bVar = new z.b();
        bVar.ate = i;
        b(adTemplate, "wxsmallapp", 1, bVar);
    }

    public static void k(AdTemplate adTemplate, JSONObject jSONObject) {
        d(adTemplate, 451, jSONObject);
    }

    public static void l(AdTemplate adTemplate, int i) {
        c(adTemplate, i, 0);
    }

    public static void m(AdTemplate adTemplate, int i) {
        z.b bVar = new z.b();
        bVar.asT = i;
        b(adTemplate, 759, bVar, (JSONObject) null);
    }

    public static void n(AdTemplate adTemplate, int i) {
        z.b bVar = new z.b();
        bVar.asS = i;
        b(adTemplate, 28, bVar, (JSONObject) null);
    }

    public static void o(AdTemplate adTemplate, int i) {
        if (adTemplate == null) {
            return;
        }
        z.b bVar = new z.b();
        bVar.atj = com.kwad.sdk.core.response.b.a.aq(com.kwad.sdk.core.response.b.d.cg(adTemplate));
        b(adTemplate, i, bVar, new JSONObject());
    }

    public static void p(AdTemplate adTemplate, int i) {
        b(adTemplate, i, new z.b(), new JSONObject());
    }

    @Deprecated
    public static void q(AdTemplate adTemplate, int i) {
        a(adTemplate, new j().ci(i));
    }

    private static void r(AdTemplate adTemplate, int i) {
        b(adTemplate, i, (z.b) null, new JSONObject());
    }
}
