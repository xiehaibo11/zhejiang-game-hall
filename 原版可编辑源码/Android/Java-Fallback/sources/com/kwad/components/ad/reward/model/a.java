package com.kwad.components.ad.reward.model;

public final class a {
    private java.lang.String liveStartTime;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private java.lang.String originPrice;
    private int playableStyle;
    private java.lang.String price;
    private java.lang.String ql;
    private java.lang.String qm;
    private java.util.List<java.lang.String> rM;
    private java.lang.String rN;
    private java.lang.String rO;
    private java.lang.String rP;
    private boolean rQ;
    private java.lang.String rR;
    private java.lang.String rS;
    private java.lang.String rT;
    private java.util.List<java.lang.String> rU;
    private com.kwad.sdk.core.response.model.AdTemplate rV;
    private java.lang.String title;

    public a() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "查看详情"
            r1.rS = r0
            java.lang.String r0 = "立即预约"
            r1.rT = r0
            return
    }

    private void P(java.lang.String r1) {
            r0 = this;
            r0.rO = r1
            return
    }

    private void Q(java.lang.String r1) {
            r0 = this;
            r0.rP = r1
            return
    }

    public static com.kwad.components.ad.reward.model.a a(com.kwad.components.ad.reward.m.r r4, boolean r5) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.getAdTemplate()
            if (r1 != 0) goto Lb
            return r0
        Lb:
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r1)
            com.kwad.components.ad.reward.model.a r2 = new com.kwad.components.ad.reward.model.a
            r2.<init>()
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.bO(r0)
            r2.title = r3
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.bQ(r0)
            r2.ql = r3
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.an(r0)
            r2.qm = r3
            java.util.List r3 = com.kwad.sdk.core.response.b.c.bX(r1)
            r2.rM = r3
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.aw(r0)
            r2.rN = r0
            int r5 = com.kwad.sdk.core.response.b.d.g(r1, r5)
            r2.playableStyle = r5
            r2.rV = r1
            com.kwad.components.core.e.d.c r4 = r4.hi()
            r2.mApkDownloadHelper = r4
            return r2
    }

    public static com.kwad.components.ad.reward.model.a v(com.kwad.sdk.core.response.model.AdTemplate r3) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r3)
            com.kwad.sdk.core.response.model.AdProductInfo r0 = com.kwad.sdk.core.response.b.a.cy(r3)
            com.kwad.components.ad.reward.model.a r1 = new com.kwad.components.ad.reward.model.a
            r1.<init>()
            java.lang.String r2 = r0.getName()
            r1.title = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L23
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.ap(r3)
            r1.title = r2
        L23:
            java.lang.String r2 = r0.getIcon()
            r1.ql = r2
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.an(r3)
            r1.qm = r3
            java.lang.String r3 = r0.getPrice()
            r1.price = r3
            java.lang.String r3 = r0.getOriginPrice()
            r1.originPrice = r3
            boolean r3 = r0.isCouponListEmpty()
            if (r3 != 0) goto L55
            com.kwad.sdk.core.response.model.CouponInfo r3 = r0.getFirstCouponList()
            if (r3 == 0) goto L55
            java.lang.String r0 = com.kwad.sdk.core.response.model.CouponInfo.jinniuFormatCoupon(r3)
            r1.Q(r0)
            java.lang.String r3 = r3.getFormattedJinniuPrefix()
            r1.P(r3)
        L55:
            return r1
    }

    public static com.kwad.components.ad.reward.model.a w(com.kwad.sdk.core.response.model.AdTemplate r3) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$MerchantLiveReservationInfo r0 = com.kwad.sdk.core.response.b.b.bL(r3)
            com.kwad.components.ad.reward.model.a r1 = new com.kwad.components.ad.reward.model.a
            r1.<init>()
            java.lang.String r2 = r0.userHeadUrl
            r1.ql = r2
            java.lang.String r2 = r0.liveStartTime
            r1.liveStartTime = r2
            java.lang.String r2 = r0.title
            r1.title = r2
            boolean r2 = r0.needShowSubscriberCount()
            r1.rQ = r2
            java.lang.String r2 = r0.getFormattedLiveSubscribeCount()
            r1.rR = r2
            java.util.List<java.lang.String> r2 = r0.bookUserUrlList
            r1.rU = r2
            com.kwad.sdk.core.response.model.AdMatrixInfo$MerchantLiveReservationInfo$LiveReservationPlayEndInfo r2 = r0.playEndCard
            java.lang.String r2 = r2.detailBtnTitle
            r1.rS = r2
            com.kwad.sdk.core.response.model.AdMatrixInfo$MerchantLiveReservationInfo$LiveReservationPlayEndInfo r0 = r0.playEndCard
            java.lang.String r0 = r0.reservationBtnTitle
            r1.rT = r0
            r1.rV = r3
            return r1
    }

    public final java.lang.String getOriginPrice() {
            r1 = this;
            java.lang.String r0 = r1.originPrice
            return r0
    }

    public final java.lang.String getPrice() {
            r1 = this;
            java.lang.String r0 = r1.price
            return r0
    }

    public final java.lang.String getTitle() {
            r1 = this;
            java.lang.String r0 = r1.title
            return r0
    }

    public final java.lang.String gu() {
            r1 = this;
            java.lang.String r0 = r1.ql
            return r0
    }

    public final java.lang.String gv() {
            r1 = this;
            java.lang.String r0 = r1.qm
            return r0
    }

    public final java.lang.String hf() {
            r1 = this;
            java.lang.String r0 = r1.rP
            return r0
    }

    public final java.lang.String hg() {
            r1 = this;
            java.lang.String r0 = r1.rO
            return r0
    }

    public final com.kwad.sdk.core.response.model.AdTemplate hh() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.rV
            return r0
    }

    public final com.kwad.components.core.e.d.c hi() {
            r1 = this;
            com.kwad.components.core.e.d.c r0 = r1.mApkDownloadHelper
            return r0
    }

    public final java.util.List<java.lang.String> hj() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.rM
            return r0
    }

    public final boolean hk() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.rM
            if (r0 == 0) goto Ld
            int r0 = r0.size()
            if (r0 != 0) goto Lb
            goto Ld
        Lb:
            r0 = 0
            return r0
        Ld:
            r0 = 1
            return r0
    }

    public final int hl() {
            r1 = this;
            int r0 = r1.playableStyle
            return r0
    }

    public final java.lang.String hm() {
            r1 = this;
            java.lang.String r0 = r1.rR
            return r0
    }

    public final java.lang.String hn() {
            r1 = this;
            java.lang.String r0 = r1.rT
            return r0
    }

    public final boolean ho() {
            r1 = this;
            boolean r0 = r1.rQ
            return r0
    }

    public final java.util.List<java.lang.String> hp() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.rU
            return r0
    }

    public final java.lang.String hq() {
            r1 = this;
            java.lang.String r0 = r1.liveStartTime
            return r0
    }
}
