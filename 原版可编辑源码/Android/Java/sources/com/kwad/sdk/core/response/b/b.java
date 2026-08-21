package com.kwad.sdk.core.response.b;

import android.text.TextUtils;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdMatrixInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.response.model.FeedSlideConf;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.ai;
import com.kwad.sdk.utils.bc;
import com.kwai.adclient.kscommerciallogger.model.BusinessType;
import java.util.Random;
import org.json.JSONArray;
import org.json.JSONObject;

public final class b {
    private static Random auz = new Random();

    public static AdMatrixInfo aO(AdTemplate adTemplate) {
        return d.bY(adTemplate) ? d.cg(adTemplate).adMatrixInfo : new AdMatrixInfo();
    }

    private static AdMatrixInfo.AdDataV2 aP(AdTemplate adTemplate) {
        return d.cg(adTemplate).adMatrixInfo.adDataV2;
    }

    public static FeedSlideConf aQ(AdTemplate adTemplate) {
        JSONArray jSONArrayOptJSONArray;
        AdMatrixInfo.TemplateData templateDataD = d(adTemplate, bn(adTemplate).templateId);
        try {
            JSONObject jSONObjectOptJSONObject = new JSONObject(templateDataD != null ? templateDataD.data : "").optJSONObject("slideInfo");
            if (jSONObjectOptJSONObject != null && (jSONArrayOptJSONArray = jSONObjectOptJSONObject.optJSONArray("angle")) != null && jSONArrayOptJSONArray.length() > 1) {
                FeedSlideConf feedSlideConf = new FeedSlideConf();
                feedSlideConf.minRange = ((Integer) jSONArrayOptJSONArray.get(0)).intValue();
                feedSlideConf.maxRange = ((Integer) jSONArrayOptJSONArray.get(1)).intValue();
                return feedSlideConf;
            }
        } catch (Throwable unused) {
        }
        return null;
    }

    public static boolean aR(AdTemplate adTemplate) {
        return f(adTemplate, aS(adTemplate).templateId);
    }

    private static AdMatrixInfo.InterstitialCardInfo aS(AdTemplate adTemplate) {
        return aO(adTemplate).adDataV2.interstitialCardInfo;
    }

    public static String aT(AdTemplate adTemplate) {
        AdMatrixInfo.MatrixTemplate matrixTemplateB = b(adTemplate, aO(adTemplate).adDataV2.splashActionBarInfo.templateId);
        return matrixTemplateB != null ? matrixTemplateB.templateUrl : "";
    }

    private static AdMatrixInfo.ActionBarInfoNew aU(AdTemplate adTemplate) {
        return aO(adTemplate).adDataV2.actionBarInfo;
    }

    public static String aV(AdTemplate adTemplate) {
        AdInfo adInfoCg = d.cg(adTemplate);
        int iCa = d.ca(adTemplate);
        boolean z = iCa == 3 || iCa == 2;
        if (a.cw(adInfoCg)) {
            return "";
        }
        if (z && a.aN(adTemplate)) {
            AdMatrixInfo.MatrixTemplate matrixTemplateB = b(adTemplate, bL(adTemplate).templateId);
            return matrixTemplateB != null ? matrixTemplateB.templateUrl : "";
        }
        AdMatrixInfo.MatrixTemplate matrixTemplateB2 = b(adTemplate, aU(adTemplate).templateId);
        return matrixTemplateB2 != null ? matrixTemplateB2.templateUrl : "";
    }

    public static long aW(AdTemplate adTemplate) {
        return aU(adTemplate).maxTimeOut;
    }

    public static boolean aX(AdTemplate adTemplate) {
        return !TextUtils.isEmpty(aV(adTemplate));
    }

    private static AdMatrixInfo.AggregationCardInfo aY(AdTemplate adTemplate) {
        return aO(adTemplate).adDataV2.aggregationCardInfo;
    }

    public static String aZ(AdTemplate adTemplate) {
        AdMatrixInfo.MatrixTemplate matrixTemplateB = b(adTemplate, aY(adTemplate).templateId);
        return matrixTemplateB != null ? matrixTemplateB.templateUrl : "";
    }

    private static AdMatrixInfo.MatrixTemplate b(AdTemplate adTemplate, String str) {
        for (AdMatrixInfo.MatrixTemplate matrixTemplate : aO(adTemplate).styles.templateList) {
            if (bc.isEquals(str, matrixTemplate.templateId)) {
                return matrixTemplate;
            }
        }
        KSLoggerReporter.ReportClient.RESPONE_MONITOR.buildNormalApmReporter().dx("response_biz_error_tk").aK(adTemplate).a(BusinessType.TACHIKOMA).W("TkTemplateDataLost", str).report();
        return null;
    }

    public static boolean bA(AdTemplate adTemplate) {
        try {
            return d.cg(adTemplate).adMatrixInfo.adDataV2.interstitialCardInfo.renderType == 1;
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            return false;
        }
    }

    public static int bB(AdTemplate adTemplate) {
        return d.cg(adTemplate).adMatrixInfo.adDataV2.interstitialCardInfo.renderType;
    }

    public static String bC(AdTemplate adTemplate) {
        AdMatrixInfo.MatrixTemplate matrixTemplateB = b(adTemplate, by(adTemplate).templateId);
        return matrixTemplateB != null ? matrixTemplateB.templateUrl : "";
    }

    public static float bD(AdTemplate adTemplate) {
        int i;
        try {
            i = d.cg(adTemplate).adMatrixInfo.adDataV2.splashInfo.interactionInfo.shakeInfo.acceleration;
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            i = 7;
        }
        return i;
    }

    public static AdMatrixInfo.RotateInfo bE(AdTemplate adTemplate) {
        try {
            return d.cg(adTemplate).adMatrixInfo.adDataV2.splashInfo.interactionInfo.rotateInfo;
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            return null;
        }
    }

    private static AdMatrixInfo.BaseMatrixTemplate bF(AdTemplate adTemplate) {
        return aO(adTemplate).adDataV2.complianceCardInfo;
    }

    public static String bG(AdTemplate adTemplate) {
        AdMatrixInfo.MatrixTemplate matrixTemplateB = b(adTemplate, bF(adTemplate).templateId);
        return matrixTemplateB != null ? matrixTemplateB.templateUrl : "";
    }

    public static boolean bH(AdTemplate adTemplate) {
        return !TextUtils.isEmpty(bG(adTemplate));
    }

    private static AdMatrixInfo.BaseMatrixTemplate bI(AdTemplate adTemplate) {
        return aO(adTemplate).adDataV2.downloadConfirmCardInfo;
    }

    public static String bJ(AdTemplate adTemplate) {
        AdMatrixInfo.MatrixTemplate matrixTemplateB = b(adTemplate, bI(adTemplate).templateId);
        return matrixTemplateB != null ? matrixTemplateB.templateUrl : "";
    }

    public static boolean bK(AdTemplate adTemplate) {
        return !TextUtils.isEmpty(bJ(adTemplate));
    }

    public static AdMatrixInfo.MerchantLiveReservationInfo bL(AdTemplate adTemplate) {
        return aO(adTemplate).adDataV2.merchantLiveReservationInfo;
    }

    public static AdMatrixInfo.FullScreenInfo bM(AdTemplate adTemplate) {
        return aO(adTemplate).adDataV2.fullScreenInfo;
    }

    public static boolean bN(AdTemplate adTemplate) {
        AdInfo adInfoCg = d.cg(adTemplate);
        if (g(adInfoCg) || d.ct(adTemplate)) {
            return false;
        }
        return !(aU(adTemplate).cardType == 4) && d.cg(adTemplate).adStyleInfo2.playDetailInfo.detailCommonInfo.rewardInteractionType <= 0 && adInfoCg.adMatrixInfo.adDataV2.fullScreenInfo.interactionInfo.interactiveStyle == 2;
    }

    public static boolean bO(AdTemplate adTemplate) {
        AdInfo adInfoCg = d.cg(adTemplate);
        if (g(adInfoCg) || d.ct(adTemplate)) {
            return false;
        }
        return ((aU(adTemplate).cardType == 4) || d.cg(adTemplate).adStyleInfo2.playDetailInfo.detailWebCardInfo.cardType == 4 || adInfoCg.adMatrixInfo.adDataV2.neoVideoInfo.interactionInfo.interactiveStyle != 2) ? false : true;
    }

    public static AdMatrixInfo.PreLandingPageTKInfo bP(AdTemplate adTemplate) {
        return d.cg(adTemplate).adMatrixInfo.adDataV2.preLandingPageTKInfo;
    }

    public static boolean bQ(AdTemplate adTemplate) {
        return aP(adTemplate).installedActivateInfo.cardSwitch;
    }

    public static long bR(AdTemplate adTemplate) {
        long j = aP(adTemplate).installedActivateInfo.showTime;
        if (j > 0) {
            return j;
        }
        return 0L;
    }

    public static long ba(AdTemplate adTemplate) {
        return e(adTemplate, aY(adTemplate).templateId);
    }

    public static long bb(AdTemplate adTemplate) {
        return ((long) aY(adTemplate).changeTime) * 1000;
    }

    public static int bc(AdTemplate adTemplate) {
        return aY(adTemplate).maxTimesPerDay;
    }

    public static long bd(AdTemplate adTemplate) {
        return aY(adTemplate).intervalTime;
    }

    public static boolean be(AdTemplate adTemplate) {
        AdInfo adInfoCg = d.cg(adTemplate);
        return !a.ax(adInfoCg) && a.al(adInfoCg);
    }

    public static boolean bf(AdTemplate adTemplate) {
        if (!TextUtils.isEmpty(aZ(adTemplate)) && ba(adTemplate) > 0) {
            return ai.IO();
        }
        return false;
    }

    private static AdMatrixInfo.BaseMatrixTemplate bg(AdTemplate adTemplate) {
        return aO(adTemplate).adDataV2.halfCardInfo;
    }

    public static String bh(AdTemplate adTemplate) {
        AdMatrixInfo.MatrixTemplate matrixTemplateB = b(adTemplate, bg(adTemplate).templateId);
        return matrixTemplateB != null ? matrixTemplateB.templateUrl : "";
    }

    private static AdMatrixInfo.EndCardInfo bi(AdTemplate adTemplate) {
        return aO(adTemplate).adDataV2.endCardInfo;
    }

    public static String bj(AdTemplate adTemplate) {
        AdMatrixInfo.MatrixTemplate matrixTemplateB = b(adTemplate, bi(adTemplate).templateId);
        return matrixTemplateB != null ? matrixTemplateB.templateUrl : "";
    }

    public static boolean bk(AdTemplate adTemplate) {
        return !TextUtils.isEmpty(bj(adTemplate));
    }

    private static String bl(AdTemplate adTemplate) {
        AdMatrixInfo.MatrixTemplate matrixTemplateB = b(adTemplate, d.cg(adTemplate).adMatrixInfo.adDataV2.activityMiddlePageInfo.templateId);
        return matrixTemplateB != null ? matrixTemplateB.templateUrl : "";
    }

    public static String bm(AdTemplate adTemplate) {
        return (adTemplate.mIsForceJumpLandingPage || !cP(d.cg(adTemplate))) ? a.aK(d.cg(adTemplate)) : bl(adTemplate);
    }

    private static AdMatrixInfo.FeedInfo bn(AdTemplate adTemplate) {
        boolean zBo = bo(adTemplate);
        AdMatrixInfo.AdDataV2 adDataV2 = aO(adTemplate).adDataV2;
        return zBo ? adDataV2.adUnionFeedLiveTemplateInfo : adDataV2.feedInfo;
    }

    private static boolean bo(AdTemplate adTemplate) {
        return a.cw(d.cg(adTemplate));
    }

    private static AdMatrixInfo.FeedInfo bp(AdTemplate adTemplate) {
        return aO(adTemplate).adDataV2.adUnionFeedLiveMediaInfo;
    }

    public static String bq(AdTemplate adTemplate) {
        AdMatrixInfo.MatrixTemplate matrixTemplateB = b(adTemplate, bn(adTemplate).templateId);
        return matrixTemplateB != null ? matrixTemplateB.templateUrl : "";
    }

    public static String br(AdTemplate adTemplate) {
        AdMatrixInfo.MatrixTemplate matrixTemplateB = b(adTemplate, bp(adTemplate).templateId);
        return matrixTemplateB != null ? matrixTemplateB.templateUrl : "";
    }

    public static boolean bs(AdTemplate adTemplate) {
        return bn(adTemplate).interactionInfo.interactiveStyle == 2;
    }

    public static boolean bt(AdTemplate adTemplate) {
        return bn(adTemplate).interactionInfo.shakeInfo.clickDisabled;
    }

    public static int bu(AdTemplate adTemplate) {
        AdMatrixInfo.AdInteractionInfo adInteractionInfo = bn(adTemplate).interactionInfo;
        if (adInteractionInfo == null || adInteractionInfo.shakeInfo == null) {
            return 0;
        }
        return adInteractionInfo.shakeInfo.acceleration;
    }

    public static double bv(AdTemplate adTemplate) {
        return d.cg(adTemplate).adStyleInfo.feedAdInfo.heightRatio;
    }

    public static boolean bw(AdTemplate adTemplate) {
        return !TextUtils.isEmpty(bq(adTemplate));
    }

    public static boolean bx(AdTemplate adTemplate) {
        return !TextUtils.isEmpty(br(adTemplate));
    }

    private static AdMatrixInfo.InterstitialCardInfo by(AdTemplate adTemplate) {
        return aO(adTemplate).adDataV2.interstitialCardInfo;
    }

    public static float bz(AdTemplate adTemplate) {
        int i;
        try {
            i = d.cg(adTemplate).adMatrixInfo.adDataV2.interstitialCardInfo.interactionInfo.shakeInfo.acceleration;
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            i = 7;
        }
        if (i > 0) {
            return i;
        }
        return 7.0f;
    }

    public static AdMatrixInfo.MatrixTemplate c(AdTemplate adTemplate, String str) {
        return b(adTemplate, str);
    }

    public static boolean cK(AdInfo adInfo) {
        return !TextUtils.isEmpty(adInfo.adMatrixInfo.adDataV2.splashEndCardTKInfo.templateId);
    }

    public static boolean cL(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.splashEndCardTKInfo.endCardFullScreenClick;
    }

    public static boolean cM(AdInfo adInfo) {
        return !TextUtils.isEmpty(adInfo.adMatrixInfo.adDataV2.topFloorTKInfo.templateId);
    }

    public static boolean cN(AdInfo adInfo) {
        return !TextUtils.isEmpty(adInfo.adMatrixInfo.adDataV2.splashPlayCardTKInfo.templateId);
    }

    public static boolean cO(AdInfo adInfo) {
        if (cP(adInfo)) {
            return adInfo.adMatrixInfo.adDataV2.activityMiddlePageInfo.showHeaderBar;
        }
        return true;
    }

    public static boolean cP(AdInfo adInfo) {
        return !TextUtils.isEmpty(adInfo.adMatrixInfo.adDataV2.activityMiddlePageInfo.templateId);
    }

    public static AdMatrixInfo.DownloadTexts cQ(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.rotateInfo.downloadTexts;
    }

    public static AdMatrixInfo.DownloadTexts cR(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.slideInfo.downloadTexts;
    }

    public static String cS(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.rotateInfo.title;
    }

    public static long cT(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.tkDefaultTimeout;
    }

    public static String cU(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.rotateInfo.subTitle;
    }

    public static AdMatrixInfo.DownloadTexts cV(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.splashActionBarInfo.downloadTexts;
    }

    public static String cW(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.splashActionBarInfo.title;
    }

    public static boolean cX(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.interstitialCardInfo.interactionInfo.interactiveStyle == 2;
    }

    public static String cY(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.interstitialCardInfo.cycleAggregateInfo.cutIconUrl;
    }

    public static String cZ(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.interstitialCardInfo.cycleAggregateInfo.refreshIconUrl;
    }

    private static AdMatrixInfo.TemplateData d(AdTemplate adTemplate, String str) {
        for (AdMatrixInfo.TemplateData templateData : aO(adTemplate).adDataV2.templateDataList) {
            if (bc.isEquals(str, templateData.templateId)) {
                return templateData;
            }
        }
        return null;
    }

    public static boolean dA(AdInfo adInfo) {
        for (AdMatrixInfo.MatrixTag matrixTag : adInfo.adMatrixInfo.tag) {
            if ("playEndClose".equals(matrixTag.type)) {
                return matrixTag.isHide;
            }
        }
        return false;
    }

    public static boolean dB(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.neoTKInfo.renderType == 1;
    }

    public static boolean dC(AdInfo adInfo) {
        return (a.bv(adInfo) || TextUtils.isEmpty(adInfo.adMatrixInfo.adDataV2.preLandingPageTKInfo.templateId)) ? false : true;
    }

    public static int dD(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.preLandingPageTKInfo.preLandingPageShowType;
    }

    public static boolean dD(String str) {
        try {
            return ((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).bS(str);
        } catch (Exception unused) {
            return false;
        }
    }

    public static String dE(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.videoLiveTKInfo.templateId;
    }

    public static boolean dF(AdInfo adInfo) {
        return a.aV(adInfo) && !TextUtils.isEmpty(adInfo.adMatrixInfo.adDataV2.videoImageTKInfo.templateId);
    }

    public static String da(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.interstitialCardInfo.cycleAggregateInfo.convertIconUrl;
    }

    public static int db(AdInfo adInfo) {
        try {
            int i = adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.shakeInfo.componentIndex;
            if (i != 2) {
                return 1;
            }
            return i;
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            return 1;
        }
    }

    public static boolean dc(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.isMediaDisable && adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.interactiveStyle == 4;
    }

    public static boolean dd(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.interactiveStyle == 2;
    }

    public static int de(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.interactiveStyle;
    }

    public static int df(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.interactivityDefaultStyle;
    }

    public static boolean dg(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.interactivityDefaultStyle == 2;
    }

    public static boolean dh(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.interactiveStyle == 1;
    }

    public static boolean di(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.interactivityDefaultStyle == 1;
    }

    public static boolean dj(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.interactiveStyle == 3;
    }

    public static boolean dk(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.interactiveStyle == 10;
    }

    public static boolean dl(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.interactivityDefaultStyle == 3;
    }

    public static boolean dm(AdInfo adInfo) {
        try {
            if (adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.interactiveStyle != 4) {
                return adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.interactiveStyle == 9;
            }
            return true;
        } catch (Exception unused) {
            return false;
        }
    }

    public static boolean dn(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.interactiveStyle == 0;
    }

    public static boolean do(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.interactiveStyle == 4;
    }

    public static boolean dp(AdInfo adInfo) {
        return !adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.shakeInfo.clickDisabled;
    }

    public static long dq(AdInfo adInfo) {
        try {
            long j = adInfo.adMatrixInfo.adDataV2.splashInfo.interactionInfo.switchDefaultTime;
            if (j <= 0) {
                return 1500L;
            }
            return j;
        } catch (Exception unused) {
            return 1500L;
        }
    }

    public static boolean dr(AdInfo adInfo) {
        return !adInfo.adMatrixInfo.adDataV2.neoVideoInfo.interactionInfo.shakeInfo.clickDisabled;
    }

    public static float ds(AdInfo adInfo) {
        int i;
        try {
            i = adInfo.adMatrixInfo.adDataV2.fullScreenInfo.interactionInfo.shakeInfo.acceleration;
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            i = 7;
        }
        return i;
    }

    public static float dt(AdInfo adInfo) {
        int i;
        try {
            i = adInfo.adMatrixInfo.adDataV2.neoVideoInfo.interactionInfo.shakeInfo.acceleration;
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            i = 7;
        }
        return i;
    }

    public static String du(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.fullScreenInfo.interactionInfo.shakeInfo.title;
    }

    public static String dv(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.neoVideoInfo.interactionInfo.shakeInfo.title;
    }

    public static String dw(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.fullScreenInfo.interactionInfo.shakeInfo.subtitle;
    }

    public static String dx(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.neoVideoInfo.interactionInfo.shakeInfo.subtitle;
    }

    public static AdMatrixInfo.DownloadTexts dy(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.fullScreenInfo.interactionInfo.splashActionBarInfo.downloadTexts;
    }

    public static AdMatrixInfo.DownloadTexts dz(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.neoVideoInfo.interactionInfo.splashActionBarInfo.downloadTexts;
    }

    private static long e(AdTemplate adTemplate, String str) {
        AdMatrixInfo.TemplateData templateDataD = d(adTemplate, str);
        if (templateDataD != null) {
            return templateDataD.templateDelayTime;
        }
        return 0L;
    }

    private static boolean f(AdTemplate adTemplate, String str) {
        AdMatrixInfo.TemplateData templateDataD = d(adTemplate, str);
        try {
            JSONObject jSONObjectOptJSONObject = new JSONObject(templateDataD != null ? templateDataD.data : "").optJSONObject("autoCallAppInfo");
            if (jSONObjectOptJSONObject != null) {
                return !TextUtils.isEmpty(jSONObjectOptJSONObject.optString("adTitle"));
            }
            return false;
        } catch (Throwable unused) {
            return false;
        }
    }

    public static boolean g(AdInfo adInfo) {
        return (!adInfo.adRewardInfo.recommendAggregateSwitch || a.cA(adInfo) || a.bv(adInfo)) ? false : true;
    }
}
