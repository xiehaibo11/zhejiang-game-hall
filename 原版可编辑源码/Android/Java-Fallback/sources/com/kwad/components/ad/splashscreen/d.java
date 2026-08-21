package com.kwad.components.ad.splashscreen;

public final class d {
    public static int BV;
    private java.lang.String BW;
    private int BX;
    private java.lang.String title;

    public d() {
            r1 = this;
            r1.<init>()
            r0 = 2
            r1.BX = r0
            return
    }

    private void V(java.lang.String r1) {
            r0 = this;
            r0.BW = r1
            return
    }

    private void W(int r1) {
            r0 = this;
            r0.BX = r1
            return
    }

    public static com.kwad.components.ad.splashscreen.d a(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.sdk.core.response.model.AdInfo r3, com.kwad.components.core.e.d.c r4, int r5) {
            com.kwad.components.ad.splashscreen.d r0 = new com.kwad.components.ad.splashscreen.d
            r0.<init>()
            com.kwad.components.ad.splashscreen.d.BV = r5
            if (r3 == 0) goto L5b
            if (r4 == 0) goto L5b
            r1 = 1
            if (r5 != r1) goto L1d
            java.lang.String r2 = com.kwad.sdk.core.response.b.b.cS(r3)
            r0.setTitle(r2)
        L15:
            java.lang.String r2 = a(r3, r4)
        L19:
            r0.V(r2)
            goto L5b
        L1d:
            r1 = 4
            if (r5 != r1) goto L21
            goto L15
        L21:
            boolean r5 = com.kwad.sdk.core.response.b.a.ax(r3)
            if (r5 == 0) goto L3e
            int r4 = r4.nw()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r1 = "或点击"
            r5.<init>(r1)
            java.lang.String r2 = a(r2, r3, r4)
            r5.append(r2)
            java.lang.String r2 = r5.toString()
            goto L19
        L3e:
            com.kwad.sdk.core.config.item.p r2 = com.kwad.components.ad.splashscreen.b.a.Cx
            java.lang.String r2 = com.kwad.sdk.core.config.d.a(r2)
            boolean r4 = android.text.TextUtils.isEmpty(r2)
            if (r4 == 0) goto L4c
            java.lang.String r2 = "点击跳转详情页或第三方应用"
        L4c:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "或"
            r4.<init>(r5)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            goto L19
        L5b:
            int r2 = com.kwad.sdk.core.response.b.b.db(r3)
            r0.W(r2)
            return r0
    }

    public static java.lang.String a(com.kwad.sdk.core.response.model.AdInfo r1, int r2) {
            int r0 = com.kwad.components.ad.splashscreen.d.BV
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r1 = b(r1, r0)
            r0 = 8
            if (r2 == r0) goto L14
            r0 = 12
            if (r2 == r0) goto L11
            java.lang.String r1 = r1.adActionDescription
            goto L16
        L11:
            java.lang.String r1 = r1.openAppLabel
            goto L16
        L14:
            java.lang.String r1 = r1.installAppLabel
        L16:
            return r1
    }

    private static java.lang.String a(com.kwad.sdk.core.response.model.AdInfo r1, com.kwad.components.core.e.d.c r2) {
            boolean r0 = com.kwad.sdk.core.response.b.a.ax(r1)
            if (r0 == 0) goto L21
            int r2 = r2.nw()
            int r0 = com.kwad.components.ad.splashscreen.d.BV
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r1 = b(r1, r0)
            r0 = 8
            if (r2 == r0) goto L1e
            r0 = 12
            if (r2 == r0) goto L1b
            java.lang.String r1 = r1.adActionDescription
            goto L2f
        L1b:
            java.lang.String r1 = r1.openAppLabel
            goto L2f
        L1e:
            java.lang.String r1 = r1.installAppLabel
            goto L2f
        L21:
            int r2 = com.kwad.components.ad.splashscreen.d.BV
            java.lang.String r1 = d(r1, r2)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L2f
            java.lang.String r1 = "点击跳转详情页或第三方应用"
        L2f:
            return r1
    }

    public static java.lang.String a(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.sdk.core.response.model.AdInfo r3, int r4) {
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.aw(r3)
            r1 = 8
            if (r4 == r1) goto L12
            r2 = 12
            if (r4 == r2) goto Ld
            goto L16
        Ld:
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.U(r3)
            goto L16
        L12:
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.aM(r2)
        L16:
            return r0
    }

    private static com.kwad.sdk.core.response.model.AdMatrixInfo.DownloadTexts b(com.kwad.sdk.core.response.model.AdInfo r1, int r2) {
            r0 = 1
            if (r2 != r0) goto L14
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r2 = com.kwad.sdk.core.response.b.b.cQ(r1)
            if (r2 == 0) goto Le
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r1 = com.kwad.sdk.core.response.b.b.cQ(r1)
            return r1
        Le:
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r1 = new com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts
            r1.<init>()
            return r1
        L14:
            r0 = 4
            if (r2 != r0) goto L28
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r2 = com.kwad.sdk.core.response.b.b.cV(r1)
            if (r2 == 0) goto L22
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r1 = com.kwad.sdk.core.response.b.b.cV(r1)
            return r1
        L22:
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r1 = new com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts
            r1.<init>()
            return r1
        L28:
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r1 = new com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts
            r1.<init>()
            return r1
    }

    public static java.lang.String c(com.kwad.sdk.core.response.model.AdInfo r1, int r2) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r0 = com.kwad.sdk.core.response.b.b.cR(r1)
            if (r0 == 0) goto Lb
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r1 = com.kwad.sdk.core.response.b.b.cR(r1)
            goto L10
        Lb:
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r1 = new com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts
            r1.<init>()
        L10:
            r0 = 8
            if (r2 == r0) goto L1e
            r0 = 12
            if (r2 == r0) goto L1b
            java.lang.String r1 = r1.adActionDescription
            goto L20
        L1b:
            java.lang.String r1 = r1.openAppLabel
            goto L20
        L1e:
            java.lang.String r1 = r1.installAppLabel
        L20:
            return r1
    }

    private static java.lang.String d(com.kwad.sdk.core.response.model.AdInfo r2, int r3) {
            java.lang.String r0 = ""
            r1 = 1
            if (r3 != r1) goto L11
            java.lang.String r3 = com.kwad.sdk.core.response.b.b.cU(r2)
            if (r3 == 0) goto L10
            java.lang.String r2 = com.kwad.sdk.core.response.b.b.cU(r2)
            return r2
        L10:
            return r0
        L11:
            r1 = 4
            if (r3 != r1) goto L1f
            java.lang.String r3 = com.kwad.sdk.core.response.b.b.cW(r2)
            if (r3 == 0) goto L1f
            java.lang.String r2 = com.kwad.sdk.core.response.b.b.cW(r2)
            return r2
        L1f:
            return r0
    }

    private void setTitle(java.lang.String r1) {
            r0 = this;
            r0.title = r1
            return
    }

    public final java.lang.String getTitle() {
            r1 = this;
            java.lang.String r0 = r1.title
            return r0
    }

    public final java.lang.String kx() {
            r1 = this;
            java.lang.String r0 = r1.BW
            return r0
    }

    public final int ky() {
            r1 = this;
            int r0 = r1.BX
            return r0
    }
}
