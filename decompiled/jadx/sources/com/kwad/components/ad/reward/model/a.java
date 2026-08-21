package com.kwad.components.ad.reward.model;

import android.text.TextUtils;
import com.kwad.components.ad.reward.m.r;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdMatrixInfo;
import com.kwad.sdk.core.response.model.AdProductInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.response.model.CouponInfo;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private String liveStartTime;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private String originPrice;
    private int playableStyle;
    private String price;
    private String ql;
    private String qm;
    private List<String> rM;
    private String rN;
    private String rO;
    private String rP;
    private boolean rQ;
    private String rR;
    private String rS = "查看详情";
    private String rT = "立即预约";
    private List<String> rU;
    private AdTemplate rV;
    private String title;

    private void P(String str) {
        this.rO = str;
    }

    private void Q(String str) {
        this.rP = str;
    }

    public static a a(r rVar, boolean z) {
        AdTemplate adTemplate;
        if (rVar == null || (adTemplate = rVar.getAdTemplate()) == null) {
            return null;
        }
        AdInfo adInfoCg = d.cg(adTemplate);
        a aVar = new a();
        aVar.title = com.kwad.sdk.core.response.b.a.bO(adInfoCg);
        aVar.ql = com.kwad.sdk.core.response.b.a.bQ(adInfoCg);
        aVar.qm = com.kwad.sdk.core.response.b.a.an(adInfoCg);
        aVar.rM = com.kwad.sdk.core.response.b.c.bX(adTemplate);
        aVar.rN = com.kwad.sdk.core.response.b.a.aw(adInfoCg);
        aVar.playableStyle = d.g(adTemplate, z);
        aVar.rV = adTemplate;
        aVar.mApkDownloadHelper = rVar.hi();
        return aVar;
    }

    public static a v(AdTemplate adTemplate) {
        CouponInfo firstCouponList;
        if (adTemplate == null) {
            return null;
        }
        AdInfo adInfoCg = d.cg(adTemplate);
        AdProductInfo adProductInfoCy = com.kwad.sdk.core.response.b.a.cy(adInfoCg);
        a aVar = new a();
        String name = adProductInfoCy.getName();
        aVar.title = name;
        if (TextUtils.isEmpty(name)) {
            aVar.title = com.kwad.sdk.core.response.b.a.ap(adInfoCg);
        }
        aVar.ql = adProductInfoCy.getIcon();
        aVar.qm = com.kwad.sdk.core.response.b.a.an(adInfoCg);
        aVar.price = adProductInfoCy.getPrice();
        aVar.originPrice = adProductInfoCy.getOriginPrice();
        if (!adProductInfoCy.isCouponListEmpty() && (firstCouponList = adProductInfoCy.getFirstCouponList()) != null) {
            aVar.Q(CouponInfo.jinniuFormatCoupon(firstCouponList));
            aVar.P(firstCouponList.getFormattedJinniuPrefix());
        }
        return aVar;
    }

    public static a w(AdTemplate adTemplate) {
        AdMatrixInfo.MerchantLiveReservationInfo merchantLiveReservationInfoBL = com.kwad.sdk.core.response.b.b.bL(adTemplate);
        a aVar = new a();
        aVar.ql = merchantLiveReservationInfoBL.userHeadUrl;
        aVar.liveStartTime = merchantLiveReservationInfoBL.liveStartTime;
        aVar.title = merchantLiveReservationInfoBL.title;
        aVar.rQ = merchantLiveReservationInfoBL.needShowSubscriberCount();
        aVar.rR = merchantLiveReservationInfoBL.getFormattedLiveSubscribeCount();
        aVar.rU = merchantLiveReservationInfoBL.bookUserUrlList;
        aVar.rS = merchantLiveReservationInfoBL.playEndCard.detailBtnTitle;
        aVar.rT = merchantLiveReservationInfoBL.playEndCard.reservationBtnTitle;
        aVar.rV = adTemplate;
        return aVar;
    }

    public final String getOriginPrice() {
        return this.originPrice;
    }

    public final String getPrice() {
        return this.price;
    }

    public final String getTitle() {
        return this.title;
    }

    public final String gu() {
        return this.ql;
    }

    public final String gv() {
        return this.qm;
    }

    public final String hf() {
        return this.rP;
    }

    public final String hg() {
        return this.rO;
    }

    public final AdTemplate hh() {
        return this.rV;
    }

    public final com.kwad.components.core.e.d.c hi() {
        return this.mApkDownloadHelper;
    }

    public final List<String> hj() {
        return this.rM;
    }

    public final boolean hk() {
        List<String> list = this.rM;
        return list == null || list.size() == 0;
    }

    public final int hl() {
        return this.playableStyle;
    }

    public final String hm() {
        return this.rR;
    }

    public final String hn() {
        return this.rT;
    }

    public final boolean ho() {
        return this.rQ;
    }

    public final List<String> hp() {
        return this.rU;
    }

    public final String hq() {
        return this.liveStartTime;
    }
}
