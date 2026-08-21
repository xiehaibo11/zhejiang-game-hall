package com.kwad.components.ad.reward.presenter;

import android.content.Context;
import android.os.SystemClock;
import com.kwad.components.ad.reward.k;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.bj;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class e {
    private static long sd;

    private static boolean R(String str) {
        if (!com.kwad.components.ad.reward.a.b.gO()) {
            com.kwad.sdk.core.e.c.e(str, "isEnable false");
            return true;
        }
        int iGN = com.kwad.components.ad.reward.a.b.gN();
        com.kwad.sdk.core.e.c.d(str, "JumpDirectMaxCount " + iGN);
        return iGN <= 0 || com.kwad.components.ad.reward.g.a.cI() >= iGN;
    }

    private static void a(final com.kwad.components.ad.reward.j jVar, final k.b bVar) {
        String str;
        final AdTemplate adTemplate = jVar.mAdTemplate;
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        final JSONObject jSONObject = jVar.mReportExtData;
        long jV = com.kwad.sdk.core.response.b.a.V(adInfoCg);
        if (jV <= 0 || com.kwad.sdk.core.response.b.a.G(adInfoCg) <= jV) {
            str = "观看完整视频即可获取奖励";
        } else {
            str = "观看视频" + jV + "s即可获取奖励";
        }
        final k.c cVarA = com.kwad.components.ad.reward.k.a(jVar, str);
        com.kwad.components.ad.reward.j.a(jVar, cVarA, new k.b() { // from class: com.kwad.components.ad.reward.presenter.e.5
            @Override // com.kwad.components.ad.reward.k.b, com.kwad.components.core.webview.b.e.c
            public final void H(boolean z) {
                jVar.F(false);
                if (!z) {
                    com.kwad.sdk.core.report.a.q(adTemplate, 151);
                }
                k.b bVar2 = bVar;
                if (bVar2 != null) {
                    bVar2.H(z);
                }
            }

            @Override // com.kwad.components.ad.reward.k.b, com.kwad.components.ad.reward.k.a
            public final void g(int i, int i2) {
                super.g(i, i2);
                com.kwad.components.ad.reward.j jVar2 = jVar;
                jVar2.a(1, jVar2.mContext, i, i2);
            }

            @Override // com.kwad.components.ad.reward.k.b, com.kwad.components.core.webview.b.e.c
            public final void gg() {
                jVar.oV.pause();
                jVar.F(true);
                if (cVarA.getStyle() == 0) {
                    com.kwad.sdk.core.report.a.j(adTemplate, jSONObject);
                } else {
                    com.kwad.sdk.core.report.a.b(adTemplate, 149, jSONObject);
                }
            }

            @Override // com.kwad.components.ad.reward.k.b, com.kwad.components.ad.reward.k.a
            public final void gn() {
                super.gn();
                com.kwad.sdk.core.report.a.q(adTemplate, 150);
                com.kwad.components.ad.reward.j jVar2 = jVar;
                jVar2.a(1, jVar2.mContext, 156, 1);
            }

            @Override // com.kwad.components.ad.reward.k.b, com.kwad.components.core.webview.b.e.c
            public final void go() {
                super.go();
                jVar.F(false);
            }

            @Override // com.kwad.components.ad.reward.k.b, com.kwad.components.core.webview.b.e.c
            public final void gp() {
                jVar.F(false);
                jVar.oV.resume();
                if (cVarA.getStyle() == 1 || cVarA.getStyle() == 2 || cVarA.getStyle() == 5 || cVarA.getStyle() == 8) {
                    com.kwad.sdk.core.report.a.q(adTemplate, 150);
                } else {
                    com.kwad.sdk.core.report.a.k(adTemplate, jSONObject);
                }
            }
        });
    }

    public static void a(final com.kwad.components.ad.reward.j jVar, boolean z) {
        AdTemplate adTemplate = jVar.mAdTemplate;
        final AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        if (!jVar.pj) {
            jVar.mAdOpenInteractionListener.onVideoSkipToEnd(0L);
            if (com.kwad.sdk.core.response.b.a.bF(adInfoCg)) {
                q(jVar);
                return;
            }
            if (jVar.pl) {
                s(jVar);
                return;
            }
            com.kwad.sdk.core.report.a.i(adTemplate, jVar.mReportExtData);
            jVar.oV.release();
            jVar.fR();
            v(jVar);
            return;
        }
        r(jVar);
        boolean z2 = !jVar.gc() && x(jVar.mAdTemplate);
        if (r(adTemplate) || s(adTemplate) || jVar.pF < com.kwad.sdk.core.response.b.a.Y(adInfoCg)) {
            if (z2) {
                a(jVar, new k.b() { // from class: com.kwad.components.ad.reward.presenter.e.1
                    @Override // com.kwad.components.ad.reward.k.b, com.kwad.components.core.webview.b.e.c
                    public final void H(boolean z3) {
                        super.H(z3);
                        if (com.kwad.components.ad.reward.a.b.k(adInfoCg)) {
                            jVar.hw();
                        } else if (com.kwad.sdk.core.response.b.a.bG(adInfoCg)) {
                            e.q(jVar);
                        } else {
                            e.s(jVar);
                            com.kwad.components.ad.reward.m.m(jVar);
                        }
                    }
                });
                return;
            } else if (com.kwad.sdk.core.response.b.a.bG(adInfoCg)) {
                q(jVar);
                return;
            } else {
                s(jVar);
                com.kwad.components.ad.reward.m.m(jVar);
                return;
            }
        }
        if (jVar.pz) {
            jVar.hw();
            return;
        }
        if (!jVar.pG && jVar.pF < com.kwad.sdk.core.response.b.a.Y(adInfoCg)) {
            if (z) {
                jVar.hw();
                return;
            }
            return;
        }
        if (jVar.pG) {
            jVar.K(2);
        } else {
            jVar.K(1);
        }
        z(jVar);
        if (com.kwad.sdk.core.response.b.a.bG(adInfoCg)) {
            q(jVar);
        } else {
            s(jVar);
            com.kwad.components.ad.reward.m.m(jVar);
        }
    }

    private static boolean a(String str, AdTemplate adTemplate, AdInfo adInfo) {
        String str2;
        if (com.kwad.sdk.core.response.b.a.bv(adInfo)) {
            str2 = "is playable return";
        } else if (!com.kwad.sdk.core.response.b.a.ax(adInfo)) {
            str2 = "is not Download type";
        } else if (com.kwad.sdk.core.response.b.d.f(adTemplate, com.kwad.components.ad.reward.a.b.k(adInfo))) {
            str2 = "isRewardLaunchAppTask";
        } else {
            if (!com.kwad.components.ad.reward.j.g(adInfo)) {
                return false;
            }
            str2 = "is Aggregation return";
        }
        com.kwad.sdk.core.e.c.i(str, str2);
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void q(final com.kwad.components.ad.reward.j jVar) {
        bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.reward.presenter.e.2
            @Override // java.lang.Runnable
            public final void run() {
                jVar.gd();
                jVar.mAdOpenInteractionListener.onVideoSkipToEnd(jVar.pF);
                jVar.release();
                jVar.hw();
            }
        });
    }

    private static void r(com.kwad.components.ad.reward.j jVar) {
        int i = jVar.pE != 0 ? (int) (jVar.pE / 1000) : 0;
        int i2 = jVar.pF != 0 ? (int) (jVar.pF / 1000) : 0;
        z.b bVar = new z.b();
        bVar.asV = 69;
        bVar.atl = i;
        bVar.atm = i2;
        com.kwad.sdk.core.report.a.b(jVar.mAdTemplate, 141, bVar, jVar.mReportExtData);
    }

    private static boolean r(AdTemplate adTemplate) {
        return com.kwad.sdk.core.response.b.d.f(adTemplate, com.kwad.components.ad.reward.a.b.k(com.kwad.sdk.core.response.b.d.cg(adTemplate)));
    }

    public static void s(final com.kwad.components.ad.reward.j jVar) {
        jVar.po = true;
        jVar.gd();
        if (h.A(jVar)) {
            bj.runOnUiThreadDelay(new Runnable() { // from class: com.kwad.components.ad.reward.presenter.e.3
                @Override // java.lang.Runnable
                public final void run() {
                    e.t(jVar);
                }
            }, 200L);
        } else {
            t(jVar);
        }
    }

    private static boolean s(AdTemplate adTemplate) {
        return com.kwad.sdk.core.response.b.d.s(adTemplate);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void t(com.kwad.components.ad.reward.j jVar) {
        jVar.oV.skipToEnd();
    }

    public static void u(com.kwad.components.ad.reward.j jVar) {
        y(jVar);
        jVar.hw();
    }

    public static void v(com.kwad.components.ad.reward.j jVar) {
        com.kwad.sdk.core.e.c.d("openAppMarket", "tryOpenAppMarket");
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        if (jElapsedRealtime - sd < 300) {
            com.kwad.sdk.core.e.c.d("openAppMarket", "连续点击");
            return;
        }
        sd = jElapsedRealtime;
        if (R("openAppMarket")) {
            return;
        }
        AdTemplate adTemplate = jVar.mAdTemplate;
        Context context = jVar.mContext;
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        if (a("openAppMarket", adTemplate, adInfoCg)) {
            return;
        }
        String strCz = com.kwad.sdk.core.response.b.a.cz(adInfoCg);
        com.kwad.sdk.core.e.c.i("openAppMarket", "tryOpenMiAppStore url：" + strCz);
        com.kwad.sdk.core.report.j jVarCp = new com.kwad.sdk.core.report.j().cg(182).cp(8);
        if (com.kwad.sdk.utils.d.a(context, strCz, adTemplate)) {
            com.kwad.components.ad.reward.i.b.a(adTemplate, "native_id", "autoLaunchMarket", jVarCp, (JSONObject) null);
            com.kwad.sdk.core.report.a.c(adTemplate, 1, 8);
            com.kwad.components.ad.reward.g.a.J(context);
        } else {
            if (!com.kwad.sdk.utils.d.f(context, strCz, com.kwad.sdk.core.response.b.a.aq(adInfoCg))) {
                com.kwad.sdk.core.e.c.i("openAppMarket", "tryOpenMiAppStore failed");
                return;
            }
            com.kwad.components.ad.reward.i.b.a(adTemplate, "native_id", "autoLaunchMarket", jVarCp, (JSONObject) null);
            com.kwad.sdk.core.report.a.c(adTemplate, 0, 8);
            com.kwad.components.ad.reward.g.a.J(context);
        }
    }

    public static void w(com.kwad.components.ad.reward.j jVar) {
        AdTemplate adTemplate = jVar.mAdTemplate;
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        if (jVar.pj) {
            if (!r(adTemplate) && !s(adTemplate)) {
                long jY = com.kwad.sdk.core.response.b.a.Y(adInfoCg);
                if (!jVar.pG && jVar.pF < jY) {
                    z = false;
                }
                if (z) {
                    z(jVar);
                }
                y(jVar);
                jVar.hw();
                return;
            }
            r(jVar);
            if ((jVar.gc() || !x(jVar.mAdTemplate) || jVar.po) ? false : true) {
                x(jVar);
                return;
            }
        }
        y(jVar);
        jVar.hw();
    }

    private static void x(final com.kwad.components.ad.reward.j jVar) {
        final AdTemplate adTemplate = jVar.mAdTemplate;
        com.kwad.components.ad.reward.j.a(jVar, com.kwad.components.ad.reward.k.a(jVar, (String) null), new k.b() { // from class: com.kwad.components.ad.reward.presenter.e.4
            @Override // com.kwad.components.ad.reward.k.b, com.kwad.components.core.webview.b.e.c
            public final void H(boolean z) {
                jVar.F(false);
                if (!z) {
                    com.kwad.sdk.core.report.a.q(adTemplate, 151);
                }
                e.y(jVar);
                jVar.hw();
            }

            @Override // com.kwad.components.ad.reward.k.b, com.kwad.components.core.webview.b.e.c
            public final void gg() {
                jVar.F(true);
                com.kwad.sdk.core.report.a.b(adTemplate, 149, jVar.mReportExtData);
            }

            @Override // com.kwad.components.ad.reward.k.b, com.kwad.components.core.webview.b.e.c
            public final void gp() {
                jVar.F(false);
                com.kwad.sdk.core.report.a.q(adTemplate, 150);
            }
        });
    }

    private static boolean x(AdTemplate adTemplate) {
        return com.kwad.sdk.core.response.b.a.ac(com.kwad.sdk.core.response.b.d.cg(adTemplate));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void y(com.kwad.components.ad.reward.j jVar) {
        jVar.mAdOpenInteractionListener.h(false);
    }

    private static void z(com.kwad.components.ad.reward.j jVar) {
        jVar.mAdOpenInteractionListener.onRewardVerify();
    }
}
