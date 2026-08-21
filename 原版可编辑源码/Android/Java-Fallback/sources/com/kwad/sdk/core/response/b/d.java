package com.kwad.sdk.core.response.b;

public final class d {
    private static com.kwad.sdk.core.response.b.e CA() {
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            if (r0 == 0) goto Lf
            com.kwad.sdk.core.response.b.e r0 = r0.sF()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public static com.kwad.sdk.core.response.model.AdTemplate a(java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r3, long r4, int r6) {
            r0 = 0
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            r1 = 0
            if (r0 < 0) goto L21
            if (r3 != 0) goto La
            goto L21
        La:
            java.util.Iterator r3 = r3.iterator()
        Le:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L21
            java.lang.Object r0 = r3.next()
            com.kwad.sdk.core.response.model.AdTemplate r0 = (com.kwad.sdk.core.response.model.AdTemplate) r0
            boolean r2 = b(r0, r4, r6)
            if (r2 == 0) goto Le
            return r0
        L21:
            return r1
    }

    public static boolean b(com.kwad.sdk.core.response.model.AdTemplate r4, long r5, int r7) {
            long r0 = cq(r4)
            int r4 = ca(r4)
            r2 = 1
            r3 = 0
            if (r7 <= 0) goto L15
            int r5 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r5 != 0) goto L13
            if (r4 != r7) goto L13
            goto L19
        L13:
            r2 = r3
            goto L19
        L15:
            int r4 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r4 != 0) goto L13
        L19:
            return r2
    }

    public static boolean bY(com.kwad.sdk.core.response.model.AdTemplate r3) {
            int r0 = r3.realShowType
            r1 = 0
            r2 = 2
            if (r0 != r2) goto L18
            java.util.List<com.kwad.sdk.core.response.model.AdInfo> r0 = r3.adInfoList
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L18
            java.util.List<com.kwad.sdk.core.response.model.AdInfo> r3 = r3.adInfoList
            java.lang.Object r3 = r3.get(r1)
            if (r3 == 0) goto L18
            r3 = 1
            return r3
        L18:
            return r1
    }

    public static long bZ(com.kwad.sdk.core.response.model.AdTemplate r2) {
            long r0 = r2.posId
            return r0
    }

    public static int ca(com.kwad.sdk.core.response.model.AdTemplate r0) {
            int r0 = r0.adStyle
            return r0
    }

    @java.lang.Deprecated
    public static int cb(com.kwad.sdk.core.response.model.AdTemplate r1) {
            if (r1 == 0) goto Ld
            com.kwad.sdk.internal.api.SceneImpl r0 = r1.mAdScene
            if (r0 == 0) goto Ld
            com.kwad.sdk.internal.api.SceneImpl r1 = r1.mAdScene
            int r1 = r1.getAdStyle()
            return r1
        Ld:
            r1 = 0
            return r1
    }

    public static int cc(com.kwad.sdk.core.response.model.AdTemplate r0) {
            int r0 = r0.contentType
            return r0
    }

    public static long cd(com.kwad.sdk.core.response.model.AdTemplate r2) {
            long r0 = r2.llsid
            return r0
    }

    public static java.lang.String ce(com.kwad.sdk.core.response.model.AdTemplate r0) {
            java.lang.String r0 = r0.extra
            return r0
    }

    public static java.lang.String cf(com.kwad.sdk.core.response.model.AdTemplate r0) {
            java.lang.String r0 = r0.impAdExtra
            return r0
    }

    public static com.kwad.sdk.core.response.model.AdInfo cg(com.kwad.sdk.core.response.model.AdTemplate r1) {
            java.util.List<com.kwad.sdk.core.response.model.AdInfo> r0 = r1.adInfoList
            int r0 = r0.size()
            if (r0 <= 0) goto L12
            java.util.List<com.kwad.sdk.core.response.model.AdInfo> r1 = r1.adInfoList
            r0 = 0
            java.lang.Object r1 = r1.get(r0)
            com.kwad.sdk.core.response.model.AdInfo r1 = (com.kwad.sdk.core.response.model.AdInfo) r1
            goto L13
        L12:
            r1 = 0
        L13:
            if (r1 != 0) goto L21
            java.lang.String r1 = "AdTemplateHelper"
            java.lang.String r0 = "adInfo in null"
            com.kwad.sdk.core.e.c.e(r1, r0)
            com.kwad.sdk.core.response.model.AdInfo r1 = new com.kwad.sdk.core.response.model.AdInfo
            r1.<init>()
        L21:
            return r1
    }

    public static com.kwad.sdk.core.response.model.PhotoInfo ch(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.PhotoInfo r0 = r0.photoInfo
            return r0
    }

    public static java.lang.String ci(com.kwad.sdk.core.response.model.AdTemplate r1) {
            boolean r0 = bY(r1)
            if (r0 == 0) goto Lf
            com.kwad.sdk.core.response.model.AdInfo r1 = cg(r1)
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.F(r1)
            return r1
        Lf:
            com.kwad.sdk.core.response.model.PhotoInfo r1 = ch(r1)
            java.lang.String r1 = com.kwad.sdk.core.response.b.f.a(r1)
            return r1
    }

    public static java.lang.String cj(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = cg(r0)
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r0 = r0.adConversionInfo
            java.lang.String r0 = r0.appDownloadUrl
            return r0
    }

    public static java.lang.String ck(com.kwad.sdk.core.response.model.AdTemplate r2) {
            com.kwad.sdk.core.response.b.e r0 = CA()
            if (r0 != 0) goto L9
            java.lang.String r0 = ""
            goto Ld
        L9:
            java.lang.String r0 = r0.CB()
        Ld:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L14
            return r0
        L14:
            com.kwad.sdk.core.response.model.AdInfo r2 = cg(r2)
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.Q(r2)
            return r2
    }

    public static java.lang.String cl(com.kwad.sdk.core.response.model.AdTemplate r1) {
            boolean r0 = bY(r1)
            if (r0 == 0) goto Lf
            com.kwad.sdk.core.response.model.AdInfo r1 = cg(r1)
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.bQ(r1)
            return r1
        Lf:
            com.kwad.sdk.core.response.b.e r1 = CA()
            if (r1 != 0) goto L18
            java.lang.String r1 = ""
            return r1
        L18:
            java.lang.String r1 = r1.CC()
            return r1
    }

    public static long cm(com.kwad.sdk.core.response.model.AdTemplate r2) {
            boolean r0 = bY(r2)
            if (r0 == 0) goto Lf
            com.kwad.sdk.core.response.model.AdInfo r2 = cg(r2)
            long r0 = com.kwad.sdk.core.response.b.a.T(r2)
            return r0
        Lf:
            com.kwad.sdk.core.response.b.e r0 = CA()
            if (r0 != 0) goto L1b
            int r2 = r2.hashCode()
            long r0 = (long) r2
            return r0
        L1b:
            long r0 = r0.CD()
            return r0
    }

    public static int cn(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.b.e r0 = CA()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            int r0 = r0.CE()
            return r0
    }

    public static int co(com.kwad.sdk.core.response.model.AdTemplate r0) {
            if (r0 != 0) goto L4
            r0 = -1
            return r0
        L4:
            com.kwad.sdk.core.response.model.AdInfo r0 = cg(r0)
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r0.adBaseInfo
            int r0 = r0.taskType
            return r0
    }

    public static java.lang.String cp(com.kwad.sdk.core.response.model.AdTemplate r1) {
            boolean r0 = bY(r1)
            if (r0 == 0) goto Lf
            com.kwad.sdk.core.response.model.AdInfo r1 = cg(r1)
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.cn(r1)
            return r1
        Lf:
            com.kwad.sdk.core.response.model.PhotoInfo r1 = ch(r1)
            java.lang.String r1 = com.kwad.sdk.core.response.b.f.c(r1)
            return r1
    }

    public static long cq(com.kwad.sdk.core.response.model.AdTemplate r2) {
            if (r2 != 0) goto L5
            r0 = 0
            return r0
        L5:
            com.kwad.sdk.core.response.model.AdInfo r2 = cg(r2)
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r2 = r2.adBaseInfo
            long r0 = r2.creativeId
            return r0
    }

    public static boolean cr(com.kwad.sdk.core.response.model.AdTemplate r1) {
            com.kwad.sdk.core.response.model.AdInfo r0 = cg(r1)
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r0 = r0.adConversionInfo
            boolean r0 = r0.blockCallbackIfSpam
            if (r0 == 0) goto L10
            boolean r1 = r1.mCheatingFlow
            if (r1 == 0) goto L10
            r1 = 1
            return r1
        L10:
            r1 = 0
            return r1
    }

    public static boolean cs(com.kwad.sdk.core.response.model.AdTemplate r1) {
            boolean r0 = ct(r1)
            if (r0 != 0) goto Lf
            boolean r1 = cu(r1)
            if (r1 == 0) goto Ld
            goto Lf
        Ld:
            r1 = 0
            return r1
        Lf:
            r1 = 1
            return r1
    }

    public static boolean ct(com.kwad.sdk.core.response.model.AdTemplate r2) {
            r0 = 1
            int r2 = g(r2, r0)
            if (r2 == r0) goto Ld
            r1 = 2
            if (r2 != r1) goto Lb
            goto Ld
        Lb:
            r2 = 0
            return r2
        Ld:
            return r0
    }

    public static boolean cu(com.kwad.sdk.core.response.model.AdTemplate r3) {
            r0 = 0
            int r3 = g(r3, r0)
            r1 = 1
            if (r3 == r1) goto Ld
            r2 = 2
            if (r3 != r2) goto Lc
            goto Ld
        Lc:
            return r0
        Ld:
            return r1
    }

    public static int cv(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = cg(r0)
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r0.adBaseInfo
            int r0 = r0.ecpm
            return r0
    }

    public static boolean cw(com.kwad.sdk.core.response.model.AdTemplate r2) {
            com.kwad.sdk.core.response.model.AdInfo r0 = cg(r2)
            int r2 = ca(r2)
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r1 = r0.adStyleConfInfo
            int r1 = r1.adPushDownloadJumpType
            if (r1 != 0) goto L1a
            r1 = 17
            if (r2 != r1) goto L1a
            boolean r2 = com.kwad.sdk.core.response.b.a.ax(r0)
            if (r2 == 0) goto L1a
            r2 = 1
            return r2
        L1a:
            r2 = 0
            return r2
    }

    public static boolean f(com.kwad.sdk.core.response.model.AdTemplate r3, boolean r4) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            com.kwad.sdk.core.response.model.AdInfo r1 = cg(r3)
            boolean r2 = com.kwad.sdk.core.response.b.a.ax(r1)
            if (r2 != 0) goto Lf
            return r0
        Lf:
            boolean r1 = com.kwad.sdk.core.response.b.a.cA(r1)
            if (r1 == 0) goto L16
            return r0
        L16:
            if (r4 == 0) goto L19
            return r0
        L19:
            int r3 = co(r3)
            r4 = 2
            if (r3 != r4) goto L22
            r3 = 1
            return r3
        L22:
            return r0
    }

    public static int g(com.kwad.sdk.core.response.model.AdTemplate r2, boolean r3) {
            com.kwad.sdk.core.response.model.AdInfo r0 = cg(r2)
            int r2 = ca(r2)
            r1 = 3
            if (r2 != r1) goto L26
            com.kwad.sdk.core.response.model.AdMatrixInfo r2 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r2 = r2.adDataV2
            if (r3 == 0) goto L16
            com.kwad.sdk.core.response.model.AdMatrixInfo$ActionBarInfoNew r2 = r2.actionBarInfo
            int r2 = r2.cardType
            goto L1a
        L16:
            com.kwad.sdk.core.response.model.AdMatrixInfo$EndCardInfo r2 = r2.endCardInfo
            int r2 = r2.cardType
        L1a:
            r3 = 5
            if (r2 != r3) goto L1f
            r2 = 1
            return r2
        L1f:
            r3 = 6
            if (r2 != r3) goto L24
            r2 = 2
            return r2
        L24:
            r2 = -1
            return r2
        L26:
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r2 = r0.adBaseInfo
            com.kwad.sdk.core.response.model.ABParams r2 = r2.mABParams
            int r2 = r2.playableStyle
            return r2
    }

    public static boolean s(com.kwad.sdk.core.response.model.AdTemplate r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            com.kwad.sdk.core.response.model.AdInfo r1 = cg(r3)
            boolean r2 = com.kwad.sdk.core.response.b.a.ax(r1)
            if (r2 == 0) goto Lf
            return r0
        Lf:
            boolean r1 = com.kwad.sdk.core.response.b.a.cA(r1)
            if (r1 == 0) goto L16
            return r0
        L16:
            int r3 = co(r3)
            r1 = 3
            if (r3 != r1) goto L1f
            r3 = 1
            return r3
        L1f:
            return r0
    }
}
