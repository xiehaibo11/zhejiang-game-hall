package com.kwad.components.ad.reward.presenter;

public final class e {
    private static long sd;






    static {
            return
    }

    private static boolean R(java.lang.String r4) {
            boolean r0 = com.kwad.components.ad.reward.a.b.gO()
            r1 = 1
            if (r0 != 0) goto Ld
            java.lang.String r0 = "isEnable false"
            com.kwad.sdk.core.e.c.e(r4, r0)
            return r1
        Ld:
            int r0 = com.kwad.components.ad.reward.a.b.gN()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "JumpDirectMaxCount "
            r2.<init>(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.kwad.sdk.core.e.c.d(r4, r2)
            if (r0 > 0) goto L25
            return r1
        L25:
            int r4 = com.kwad.components.ad.reward.g.a.cI()
            if (r4 < r0) goto L2c
            return r1
        L2c:
            r4 = 0
            return r4
    }

    private static void a(com.kwad.components.ad.reward.j r8, com.kwad.components.ad.reward.k.b r9) {
            com.kwad.sdk.core.response.model.AdTemplate r3 = r8.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r3)
            org.json.JSONObject r4 = r8.mReportExtData
            long r1 = com.kwad.sdk.core.response.b.a.V(r0)
            r5 = 0
            int r5 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r5 <= 0) goto L2f
            int r0 = com.kwad.sdk.core.response.b.a.G(r0)
            long r5 = (long) r0
            int r0 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
            if (r0 <= 0) goto L2f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r5 = "观看视频"
            r0.<init>(r5)
            r0.append(r1)
            java.lang.String r1 = "s即可获取奖励"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            goto L31
        L2f:
            java.lang.String r0 = "观看完整视频即可获取奖励"
        L31:
            com.kwad.components.ad.reward.k$c r6 = com.kwad.components.ad.reward.k.a(r8, r0)
            com.kwad.components.ad.reward.presenter.e$5 r7 = new com.kwad.components.ad.reward.presenter.e$5
            r0 = r7
            r1 = r8
            r2 = r6
            r5 = r9
            r0.<init>(r1, r2, r3, r4, r5)
            com.kwad.components.ad.reward.j.a(r8, r6, r7)
            return
    }

    public static void a(com.kwad.components.ad.reward.j r8, boolean r9) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r8.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r2 = r8.pj
            if (r2 != 0) goto L34
            com.kwad.components.ad.reward.e.b r9 = r8.mAdOpenInteractionListener
            r2 = 0
            r9.onVideoSkipToEnd(r2)
            boolean r9 = com.kwad.sdk.core.response.b.a.bF(r1)
            if (r9 == 0) goto L1b
            q(r8)
            return
        L1b:
            boolean r9 = r8.pl
            if (r9 == 0) goto L23
            s(r8)
            return
        L23:
            org.json.JSONObject r9 = r8.mReportExtData
            com.kwad.sdk.core.report.a.i(r0, r9)
            com.kwad.components.ad.reward.l.d r9 = r8.oV
            r9.release()
            r8.fR()
            v(r8)
            return
        L34:
            r(r8)
            boolean r2 = r8.gc()
            r3 = 1
            if (r2 != 0) goto L48
            com.kwad.sdk.core.response.model.AdTemplate r2 = r8.mAdTemplate
            boolean r2 = x(r2)
            if (r2 == 0) goto L48
            r2 = r3
            goto L49
        L48:
            r2 = 0
        L49:
            boolean r4 = r(r0)
            if (r4 != 0) goto L9d
            boolean r0 = s(r0)
            if (r0 != 0) goto L9d
            long r4 = r8.pF
            long r6 = com.kwad.sdk.core.response.b.a.Y(r1)
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 >= 0) goto L60
            goto L9d
        L60:
            boolean r0 = r8.pz
            if (r0 == 0) goto L68
            r8.hw()
            return
        L68:
            boolean r0 = r8.pG
            if (r0 != 0) goto L7d
            long r4 = r8.pF
            long r6 = com.kwad.sdk.core.response.b.a.Y(r1)
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 < 0) goto L77
            goto L7d
        L77:
            if (r9 == 0) goto L7c
            r8.hw()
        L7c:
            return
        L7d:
            boolean r9 = r8.pG
            if (r9 == 0) goto L86
            r9 = 2
            r8.K(r9)
            goto L89
        L86:
            r8.K(r3)
        L89:
            z(r8)
            boolean r9 = com.kwad.sdk.core.response.b.a.bG(r1)
            if (r9 == 0) goto L96
            q(r8)
            return
        L96:
            s(r8)
            com.kwad.components.ad.reward.m.m(r8)
            return
        L9d:
            if (r2 == 0) goto La8
            com.kwad.components.ad.reward.presenter.e$1 r9 = new com.kwad.components.ad.reward.presenter.e$1
            r9.<init>(r1, r8)
            a(r8, r9)
            return
        La8:
            boolean r9 = com.kwad.sdk.core.response.b.a.bG(r1)
            if (r9 == 0) goto Lb2
            q(r8)
            return
        Lb2:
            s(r8)
            com.kwad.components.ad.reward.m.m(r8)
            return
    }

    private static boolean a(java.lang.String r2, com.kwad.sdk.core.response.model.AdTemplate r3, com.kwad.sdk.core.response.model.AdInfo r4) {
            boolean r0 = com.kwad.sdk.core.response.b.a.bv(r4)
            r1 = 1
            if (r0 == 0) goto Ld
            java.lang.String r3 = "is playable return"
        L9:
            com.kwad.sdk.core.e.c.i(r2, r3)
            return r1
        Ld:
            boolean r0 = com.kwad.sdk.core.response.b.a.ax(r4)
            if (r0 != 0) goto L16
            java.lang.String r3 = "is not Download type"
            goto L9
        L16:
            boolean r0 = com.kwad.components.ad.reward.a.b.k(r4)
            boolean r3 = com.kwad.sdk.core.response.b.d.f(r3, r0)
            if (r3 == 0) goto L23
            java.lang.String r3 = "isRewardLaunchAppTask"
            goto L9
        L23:
            boolean r3 = com.kwad.components.ad.reward.j.g(r4)
            if (r3 == 0) goto L2c
            java.lang.String r3 = "is Aggregation return"
            goto L9
        L2c:
            r2 = 0
            return r2
    }

    static void h(com.kwad.components.ad.reward.j r0) {
            q(r0)
            return
    }

    static void i(com.kwad.components.ad.reward.j r0) {
            t(r0)
            return
    }

    static void j(com.kwad.components.ad.reward.j r0) {
            y(r0)
            return
    }

    private static void q(com.kwad.components.ad.reward.j r1) {
            com.kwad.components.ad.reward.presenter.e$2 r0 = new com.kwad.components.ad.reward.presenter.e$2
            r0.<init>(r1)
            com.kwad.sdk.utils.bj.runOnUiThread(r0)
            return
    }

    private static void r(com.kwad.components.ad.reward.j r8) {
            long r0 = r8.pE
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r4 = 1000(0x3e8, double:4.94E-321)
            r1 = 0
            if (r0 == 0) goto L10
            long r6 = r8.pE
            long r6 = r6 / r4
            int r0 = (int) r6
            goto L11
        L10:
            r0 = r1
        L11:
            long r6 = r8.pF
            int r2 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r2 == 0) goto L1b
            long r1 = r8.pF
            long r1 = r1 / r4
            int r1 = (int) r1
        L1b:
            com.kwad.sdk.core.report.z$b r2 = new com.kwad.sdk.core.report.z$b
            r2.<init>()
            r3 = 69
            r2.asV = r3
            r2.atl = r0
            r2.atm = r1
            com.kwad.sdk.core.response.model.AdTemplate r0 = r8.mAdTemplate
            r1 = 141(0x8d, float:1.98E-43)
            org.json.JSONObject r8 = r8.mReportExtData
            com.kwad.sdk.core.report.a.b(r0, r1, r2, r8)
            return
    }

    private static boolean r(com.kwad.sdk.core.response.model.AdTemplate r1) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r1)
            boolean r0 = com.kwad.components.ad.reward.a.b.k(r0)
            boolean r1 = com.kwad.sdk.core.response.b.d.f(r1, r0)
            return r1
    }

    public static void s(com.kwad.components.ad.reward.j r3) {
            r0 = 1
            r3.po = r0
            r3.gd()
            boolean r0 = com.kwad.components.ad.reward.presenter.h.A(r3)
            if (r0 == 0) goto L17
            com.kwad.components.ad.reward.presenter.e$3 r0 = new com.kwad.components.ad.reward.presenter.e$3
            r0.<init>(r3)
            r1 = 200(0xc8, double:9.9E-322)
            com.kwad.sdk.utils.bj.runOnUiThreadDelay(r0, r1)
            return
        L17:
            t(r3)
            return
    }

    private static boolean s(com.kwad.sdk.core.response.model.AdTemplate r0) {
            boolean r0 = com.kwad.sdk.core.response.b.d.s(r0)
            return r0
    }

    private static void t(com.kwad.components.ad.reward.j r0) {
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            r0.skipToEnd()
            return
    }

    public static void u(com.kwad.components.ad.reward.j r0) {
            y(r0)
            r0.hw()
            return
    }

    public static void v(com.kwad.components.ad.reward.j r10) {
            java.lang.String r0 = "openAppMarket"
            java.lang.String r1 = "tryOpenAppMarket"
            com.kwad.sdk.core.e.c.d(r0, r1)
            long r1 = android.os.SystemClock.elapsedRealtime()
            long r3 = com.kwad.components.ad.reward.presenter.e.sd
            long r3 = r1 - r3
            r5 = 300(0x12c, double:1.48E-321)
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 >= 0) goto L1b
            java.lang.String r10 = "连续点击"
            com.kwad.sdk.core.e.c.d(r0, r10)
            return
        L1b:
            com.kwad.components.ad.reward.presenter.e.sd = r1
            boolean r1 = R(r0)
            if (r1 == 0) goto L24
            return
        L24:
            com.kwad.sdk.core.response.model.AdTemplate r1 = r10.mAdTemplate
            android.content.Context r10 = r10.mContext
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r1)
            boolean r3 = a(r0, r1, r2)
            if (r3 == 0) goto L33
            return
        L33:
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.cz(r2)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "tryOpenMiAppStore url："
            r4.<init>(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            com.kwad.sdk.core.e.c.i(r0, r4)
            com.kwad.sdk.core.report.j r4 = new com.kwad.sdk.core.report.j
            r4.<init>()
            r5 = 182(0xb6, float:2.55E-43)
            com.kwad.sdk.core.report.j r4 = r4.cg(r5)
            r5 = 8
            com.kwad.sdk.core.report.j r4 = r4.cp(r5)
            boolean r6 = com.kwad.sdk.utils.d.a(r10, r3, r1)
            r7 = 0
            java.lang.String r8 = "autoLaunchMarket"
            java.lang.String r9 = "native_id"
            if (r6 == 0) goto L6f
            com.kwad.components.ad.reward.i.b.a(r1, r9, r8, r4, r7)
            r0 = 1
            com.kwad.sdk.core.report.a.c(r1, r0, r5)
            com.kwad.components.ad.reward.g.a.J(r10)
            return
        L6f:
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.aq(r2)
            boolean r2 = com.kwad.sdk.utils.d.f(r10, r3, r2)
            if (r2 == 0) goto L84
            com.kwad.components.ad.reward.i.b.a(r1, r9, r8, r4, r7)
            r0 = 0
            com.kwad.sdk.core.report.a.c(r1, r0, r5)
            com.kwad.components.ad.reward.g.a.J(r10)
            return
        L84:
            java.lang.String r10 = "tryOpenMiAppStore failed"
            com.kwad.sdk.core.e.c.i(r0, r10)
            return
    }

    public static void w(com.kwad.components.ad.reward.j r7) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r7.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r2 = r7.pj
            if (r2 != 0) goto L11
        La:
            y(r7)
            r7.hw()
            return
        L11:
            boolean r2 = r(r0)
            r3 = 1
            r4 = 0
            if (r2 != 0) goto L3c
            boolean r0 = s(r0)
            if (r0 == 0) goto L20
            goto L3c
        L20:
            long r0 = com.kwad.sdk.core.response.b.a.Y(r1)
            boolean r2 = r7.pG
            if (r2 != 0) goto L30
            long r5 = r7.pF
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 < 0) goto L2f
            goto L30
        L2f:
            r3 = r4
        L30:
            if (r3 == 0) goto L35
            z(r7)
        L35:
            y(r7)
            r7.hw()
            goto L58
        L3c:
            r(r7)
            boolean r0 = r7.gc()
            if (r0 != 0) goto L52
            com.kwad.sdk.core.response.model.AdTemplate r0 = r7.mAdTemplate
            boolean r0 = x(r0)
            if (r0 == 0) goto L52
            boolean r0 = r7.po
            if (r0 != 0) goto L52
            goto L53
        L52:
            r3 = r4
        L53:
            if (r3 == 0) goto La
            x(r7)
        L58:
            return
    }

    private static void x(com.kwad.components.ad.reward.j r3) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            r1 = 0
            com.kwad.components.ad.reward.k$c r1 = com.kwad.components.ad.reward.k.a(r3, r1)
            com.kwad.components.ad.reward.presenter.e$4 r2 = new com.kwad.components.ad.reward.presenter.e$4
            r2.<init>(r3, r0)
            com.kwad.components.ad.reward.j.a(r3, r1, r2)
            return
    }

    private static boolean x(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.a.ac(r0)
            return r0
    }

    private static void y(com.kwad.components.ad.reward.j r1) {
            com.kwad.components.ad.reward.e.b r1 = r1.mAdOpenInteractionListener
            r0 = 0
            r1.h(r0)
            return
    }

    private static void z(com.kwad.components.ad.reward.j r0) {
            com.kwad.components.ad.reward.e.b r0 = r0.mAdOpenInteractionListener
            r0.onRewardVerify()
            return
    }
}
