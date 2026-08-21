package com.kwad.sdk.core.response.b;

import android.text.SpannableString;
import android.text.TextUtils;
import android.text.style.ForegroundColorSpan;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdMatrixInfo;
import com.kwad.sdk.core.response.model.AdProductInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.ac;
import com.kwad.sdk.utils.ai;
import com.kwad.sdk.utils.bc;
import com.kwad.sdk.utils.y;
import com.xiaomi.mipush.sdk.Constants;
import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.List;

public final class a {
    public static String Cz() {
        return "继续下载";
    }

    public static long E(AdInfo adInfo) {
        return adInfo.adBaseInfo.creativeId;
    }

    public static String F(AdInfo adInfo) {
        return aN(adInfo).materialUrl;
    }

    public static int G(AdInfo adInfo) {
        return (aW(adInfo) == 2 ? aM(adInfo) : aN(adInfo)).videoDuration;
    }

    public static long H(AdInfo adInfo) {
        return ((long) (aW(adInfo) == 2 ? aM(adInfo) : aN(adInfo)).videoDuration) * 1000;
    }

    /* JADX WARN: Removed duplicated region for block: B:22:0x0043  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static String I(AdInfo adInfo) {
        int iAW = aW(adInfo);
        if (iAW == 1) {
            for (AdInfo.AdMaterialInfo.MaterialFeature materialFeature : adInfo.adMaterialInfo.materialFeatureList) {
                if (materialFeature.featureType == 1 && !TextUtils.isEmpty(materialFeature.firstFrame)) {
                    return materialFeature.firstFrame;
                }
            }
        } else if (iAW == 2 || iAW == 3) {
            for (AdInfo.AdMaterialInfo.MaterialFeature materialFeature2 : adInfo.adMaterialInfo.materialFeatureList) {
                if (materialFeature2.featureType == 2 && !TextUtils.isEmpty(materialFeature2.firstFrame)) {
                    return materialFeature2.firstFrame;
                }
            }
            while (r0.hasNext()) {
            }
        } else if (iAW != 8) {
            return "";
        }
        for (AdInfo.AdMaterialInfo.MaterialFeature materialFeature3 : adInfo.adMaterialInfo.materialFeatureList) {
            if (materialFeature3.featureType == 3 && !TextUtils.isEmpty(materialFeature3.firstFrame)) {
                return materialFeature3.firstFrame;
            }
        }
        return "";
    }

    public static boolean J(AdInfo adInfo) {
        return adInfo.adConversionInfo.supportThirdDownload == 1;
    }

    public static int K(AdInfo adInfo) {
        return aN(adInfo).videoWidth;
    }

    public static int L(AdInfo adInfo) {
        return aN(adInfo).videoHeight;
    }

    public static boolean M(AdInfo adInfo) {
        return adInfo.adConversionInfo.smallAppJumpInfo == null || TextUtils.isEmpty(adInfo.adConversionInfo.smallAppJumpInfo.mediaSmallAppId);
    }

    public static boolean N(AdInfo adInfo) {
        return adInfo.adConversionInfo.webUriSourceType == 2;
    }

    public static boolean O(AdInfo adInfo) {
        AdInfo.AdMaterialInfo.MaterialFeature materialFeatureAN = aN(adInfo);
        return materialFeatureAN.videoWidth <= materialFeatureAN.videoHeight;
    }

    /* JADX WARN: Removed duplicated region for block: B:26:0x004f  */
    @Deprecated
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static String P(AdInfo adInfo) {
        int iAW = aW(adInfo);
        if (iAW == 1) {
            for (AdInfo.AdMaterialInfo.MaterialFeature materialFeature : adInfo.adMaterialInfo.materialFeatureList) {
                if (materialFeature.featureType == 1 && !TextUtils.isEmpty(materialFeature.coverUrl)) {
                    return materialFeature.coverUrl;
                }
            }
        } else if (iAW == 2 || iAW == 3) {
            for (AdInfo.AdMaterialInfo.MaterialFeature materialFeature2 : adInfo.adMaterialInfo.materialFeatureList) {
                if (materialFeature2.featureType == 2) {
                    if (!TextUtils.isEmpty(materialFeature2.materialUrl)) {
                        return materialFeature2.materialUrl;
                    }
                    if (!TextUtils.isEmpty(materialFeature2.coverUrl)) {
                        return materialFeature2.coverUrl;
                    }
                }
            }
            while (r0.hasNext()) {
            }
        } else if (iAW != 8) {
            return "";
        }
        for (AdInfo.AdMaterialInfo.MaterialFeature materialFeature3 : adInfo.adMaterialInfo.materialFeatureList) {
            if (materialFeature3.featureType == 3 && !TextUtils.isEmpty(materialFeature3.coverUrl)) {
                return materialFeature3.coverUrl;
            }
        }
        return "";
    }

    public static String Q(AdInfo adInfo) {
        int iAW = aW(adInfo);
        if (iAW != 1) {
            if (iAW != 2 && iAW != 3) {
                return "";
            }
            for (AdInfo.AdMaterialInfo.MaterialFeature materialFeature : adInfo.adMaterialInfo.materialFeatureList) {
                if (materialFeature.featureType == 2 && !TextUtils.isEmpty(materialFeature.blurBackgroundUrl)) {
                    return materialFeature.blurBackgroundUrl;
                }
            }
        }
        return aQ(adInfo).blurBackgroundUrl;
    }

    private static int R(AdInfo adInfo) {
        return aN(adInfo).width;
    }

    private static int S(AdInfo adInfo) {
        return aN(adInfo).height;
    }

    public static long T(AdInfo adInfo) {
        return aN(adInfo).photoId;
    }

    public static String U(AdInfo adInfo) {
        return (adInfo == null || TextUtils.isEmpty(adInfo.adBaseInfo.openAppLabel)) ? "立即打开" : adInfo.adBaseInfo.openAppLabel;
    }

    public static long V(AdInfo adInfo) {
        return adInfo.adRewardInfo.rewardTime;
    }

    public static int W(AdInfo adInfo) {
        return adInfo.adRewardInfo.skipShowTime;
    }

    public static long X(AdInfo adInfo) {
        return ((long) adInfo.adRewardInfo.skipShowTime) * 1000;
    }

    public static long Y(AdInfo adInfo) {
        return ((long) adInfo.adRewardInfo.rewardTime) * 1000;
    }

    private static int Z(AdInfo adInfo) {
        if (adInfo.adStyleConfInfo != null) {
            return adInfo.adStyleConfInfo.rewardSkipConfirmSwitch;
        }
        com.kwad.sdk.core.e.c.w("AdInfoHelper", "adInfo.adStyleConfInfo is null");
        return 1;
    }

    public static int aA(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.rewardVideoInteractInfo.dayMaxLimit;
    }

    public static int aB(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.rewardVideoInteractInfo.showTime;
    }

    public static int aC(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.rewardVideoInteractInfo.rewardTime;
    }

    public static int aD(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.rewardVideoTaskInfo.showTime;
    }

    public static int aE(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.rewardVideoTaskInfo.thresholdTime;
    }

    public static int aF(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.rewardVideoTaskInfo.taskType;
    }

    public static boolean aG(AdInfo adInfo) {
        return !TextUtils.isEmpty(adInfo.adMatrixInfo.adDataV2.rewardVideoTaskInfo.templateId);
    }

    public static boolean aH(AdInfo adInfo) {
        return adInfo.downloadSafeInfo.complianceInfo != null && ax(adInfo) && adInfo.downloadSafeInfo.complianceInfo.titleBarTextSwitch == 1;
    }

    public static int aI(AdInfo adInfo) {
        int i = adInfo.adBaseInfo.adOperationType;
        int i2 = 1;
        if (i != 1) {
            i2 = 2;
            if (i != 2) {
                return 0;
            }
        }
        return i2;
    }

    public static int aJ(AdInfo adInfo) {
        return adInfo.adBaseInfo.ecpm;
    }

    public static String aK(AdInfo adInfo) {
        com.kwad.sdk.service.a.e eVar = (com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class);
        return TextUtils.isEmpty(adInfo.adConversionInfo.h5Url) ? "" : ac.c(eVar == null ? null : eVar.getContext(), adInfo.adConversionInfo.h5Url, at(adInfo));
    }

    public static int aL(AdInfo adInfo) {
        return adInfo.adConversionInfo.h5Type;
    }

    public static AdInfo.AdMaterialInfo.MaterialFeature aM(AdInfo adInfo) {
        for (AdInfo.AdMaterialInfo.MaterialFeature materialFeature : adInfo.adMaterialInfo.materialFeatureList) {
            if (materialFeature != null && materialFeature.featureType == 2 && !TextUtils.isEmpty(materialFeature.materialUrl)) {
                return materialFeature;
            }
        }
        com.kwad.sdk.core.e.c.w("AdInfoHelper", "getImageMaterialFeature in null");
        return new AdInfo.AdMaterialInfo.MaterialFeature();
    }

    public static String aM(AdTemplate adTemplate) {
        if (adTemplate != null && adTemplate.mAdScene != null && adTemplate.mAdScene.getAdStyle() == 2 && !cv(d.cg(adTemplate)) && !cw(d.cg(adTemplate))) {
            return "安装获取奖励";
        }
        if (adTemplate == null) {
            return "立即安装";
        }
        AdInfo adInfoCg = d.cg(adTemplate);
        return TextUtils.isEmpty(adInfoCg.adBaseInfo.installAppLabel) ? "立即安装" : adInfoCg.adBaseInfo.installAppLabel;
    }

    public static AdInfo.AdMaterialInfo.MaterialFeature aN(AdInfo adInfo) {
        for (AdInfo.AdMaterialInfo.MaterialFeature materialFeature : adInfo.adMaterialInfo.materialFeatureList) {
            if (materialFeature != null && materialFeature.featureType == 1 && !TextUtils.isEmpty(materialFeature.materialUrl)) {
                return materialFeature;
            }
        }
        com.kwad.sdk.core.e.c.w("AdInfoHelper", "getVideoMaterialFeature in null");
        return new AdInfo.AdMaterialInfo.MaterialFeature();
    }

    public static boolean aN(AdTemplate adTemplate) {
        AdInfo adInfoCg = d.cg(adTemplate);
        AdMatrixInfo.MerchantLiveReservationInfo merchantLiveReservationInfoBL = b.bL(adTemplate);
        return (merchantLiveReservationInfoBL != null && !merchantLiveReservationInfoBL.isEmpty()) && adInfoCg.adStyleConfInfo.innerAdType == 2;
    }

    public static boolean aO(AdInfo adInfo) {
        AdInfo.AdMaterialInfo.MaterialFeature materialFeatureAN = aU(adInfo) ? aN(adInfo) : aM(adInfo);
        return materialFeatureAN.height > materialFeatureAN.width;
    }

    public static float aP(AdInfo adInfo) {
        AdInfo.AdMaterialInfo.MaterialFeature materialFeatureAN = aU(adInfo) ? aN(adInfo) : aM(adInfo);
        if (materialFeatureAN == null || materialFeatureAN.width == 0) {
            return -1.0f;
        }
        com.kwad.sdk.core.e.c.d("AdInfoHelper", "getMaterialRatio: height: " + materialFeatureAN.height + ", width: " + materialFeatureAN.width);
        return materialFeatureAN.height / materialFeatureAN.width;
    }

    private static AdInfo.AdMaterialInfo.MaterialFeature aQ(AdInfo adInfo) {
        List<AdInfo.AdMaterialInfo.MaterialFeature> list = adInfo.adMaterialInfo.materialFeatureList;
        AdInfo.AdMaterialInfo.MaterialFeature materialFeature = list.size() > 0 ? list.get(0) : null;
        return materialFeature == null ? new AdInfo.AdMaterialInfo.MaterialFeature() : materialFeature;
    }

    public static boolean aR(AdInfo adInfo) {
        AdInfo.AdMaterialInfo.MaterialFeature materialFeatureAN = aN(adInfo);
        return materialFeatureAN.height > materialFeatureAN.width;
    }

    public static String aS(AdInfo adInfo) {
        return adInfo.adPreloadInfo.preloadId;
    }

    public static List<String> aT(AdInfo adInfo) {
        ArrayList arrayList = new ArrayList();
        int iAW = aW(adInfo);
        if (iAW != 2 && iAW != 3) {
            return arrayList;
        }
        for (AdInfo.AdMaterialInfo.MaterialFeature materialFeature : adInfo.adMaterialInfo.materialFeatureList) {
            if (materialFeature.featureType == 2 && !TextUtils.isEmpty(materialFeature.materialUrl)) {
                arrayList.add(materialFeature.materialUrl);
            }
        }
        return arrayList;
    }

    public static boolean aU(AdInfo adInfo) {
        return aW(adInfo) == 1;
    }

    public static boolean aV(AdInfo adInfo) {
        return aM(adInfo).featureType == 2;
    }

    public static int aW(AdInfo adInfo) {
        int i = adInfo.adMaterialInfo.materialType;
        int i2 = 1;
        if (i != 1) {
            i2 = 2;
            if (i != 2) {
                if (i != 5) {
                    return i != 8 ? 0 : 8;
                }
                return 3;
            }
        }
        return i2;
    }

    public static int aX(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.actionBarInfo.cardType;
    }

    public static String aY(AdInfo adInfo) {
        return adInfo.adBaseInfo.liveStreamId;
    }

    public static boolean aZ(AdInfo adInfo) {
        return adInfo.adMaterialInfo.materialType == 1;
    }

    public static boolean aa(AdInfo adInfo) {
        if (adInfo.adStyleConfInfo.nativeAdInfo != null && adInfo.adStyleConfInfo.nativeAdInfo.shakeInfo != null) {
            return adInfo.adStyleConfInfo.nativeAdInfo.shakeInfo.enableShake;
        }
        com.kwad.sdk.core.e.c.w("AdInfoHelper", "adInfo.adStyleConfInfo.nativeAdInfo is null");
        return false;
    }

    public static int ab(AdInfo adInfo) {
        if (adInfo.adStyleConfInfo.nativeAdInfo != null) {
            return adInfo.adStyleConfInfo.nativeAdInfo.shakeInfo.acceleration;
        }
        com.kwad.sdk.core.e.c.w("AdInfoHelper", "adInfo.adStyleConfInfo.nativeAdInfo is null");
        return 2;
    }

    public static boolean ac(AdInfo adInfo) {
        return Z(adInfo) != 0;
    }

    public static long ad(AdInfo adInfo) {
        if (adInfo.adStyleConfInfo != null) {
            return ((long) adInfo.adStyleConfInfo.fullScreenSkipShowTime) * 1000;
        }
        com.kwad.sdk.core.e.c.w("AdInfoHelper", "adInfo.adStyleConfInfo is null");
        return 5000L;
    }

    public static long ae(AdInfo adInfo) {
        if (adInfo.adStyleConfInfo != null) {
            return adInfo.adStyleConfInfo.closeDelaySeconds * 1000;
        }
        com.kwad.sdk.core.e.c.w("AdInfoHelper", "adInfo.adStyleConfInfo is null");
        return 0L;
    }

    public static int af(AdInfo adInfo) {
        return adInfo.adStyleConfInfo.adShowVideoH5Info.showPageType;
    }

    public static boolean ag(AdInfo adInfo) {
        return adInfo.adStyleConfInfo.adShowVideoH5Info.videoAutoLoopAtH5;
    }

    public static boolean ah(AdInfo adInfo) {
        return adInfo.adStyleConfInfo.adShowVideoH5Info.videoMutedAtH5;
    }

    public static boolean ai(AdInfo adInfo) {
        return adInfo.adStyleConfInfo.adShowVideoH5Info.videoClickAtH5;
    }

    public static long aj(AdInfo adInfo) {
        if (adInfo.adStyleConfInfo != null) {
            return adInfo.adStyleConfInfo.playableCloseSeconds * 1000;
        }
        com.kwad.sdk.core.e.c.w("AdInfoHelper", "adInfo.adStyleConfInfo is null");
        return 0L;
    }

    public static boolean ak(AdInfo adInfo) {
        return !ax(adInfo) && al(adInfo);
    }

    public static boolean al(AdInfo adInfo) {
        if (adInfo.adRewardInfo.showLandingPage == 1) {
            return ((aG(adInfo) && aF(adInfo) == 1) || cA(adInfo)) ? false : true;
        }
        return false;
    }

    public static boolean am(AdInfo adInfo) {
        return (!(adInfo.fullScreenVideoInfo.showLandingPage == 1) || !(bc.isNullString(aK(adInfo)) ^ true) || ax(adInfo) || (bc.isNullString(cx(adInfo)) ^ true) || bv(adInfo)) ? false : true;
    }

    public static String an(AdInfo adInfo) {
        return adInfo.adBaseInfo.adDescription;
    }

    public static String ao(AdInfo adInfo) {
        return adInfo.adBaseInfo.appName;
    }

    public static String ap(AdInfo adInfo) {
        return adInfo.adBaseInfo.productName;
    }

    public static String aq(AdInfo adInfo) {
        if (adInfo == null || adInfo.adBaseInfo == null) {
            return null;
        }
        return adInfo.adBaseInfo.appPackageName;
    }

    public static String ar(AdInfo adInfo) {
        return adInfo.adBaseInfo.appDownloadCountDesc;
    }

    public static float as(AdInfo adInfo) {
        if (adInfo.adBaseInfo.appScore <= 0) {
            return 0.0f;
        }
        return adInfo.adBaseInfo.appScore / 10.0f;
    }

    public static boolean at(AdInfo adInfo) {
        return adInfo.adBaseInfo.enableClientProofreadTime;
    }

    public static float au(AdInfo adInfo) {
        float f = adInfo.adBaseInfo.appScore;
        if (f < 30.0f) {
            return 3.0f;
        }
        if (f < 35.0f) {
            return 3.5f;
        }
        if (f < 40.0f) {
            return 4.0f;
        }
        return f < 45.0f ? 4.5f : 5.0f;
    }

    public static String av(AdInfo adInfo) {
        return bc.isNullString(adInfo.adBaseInfo.adSourceDescription) ? "广告" : adInfo.adBaseInfo.adSourceDescription;
    }

    public static String aw(AdInfo adInfo) {
        if (adInfo == null) {
            return "立即下载";
        }
        String str = adInfo.adBaseInfo.adActionDescription;
        if (TextUtils.isEmpty(str)) {
            return ax(adInfo) ? "立即下载" : "查看详情";
        }
        return str;
    }

    public static boolean ax(AdInfo adInfo) {
        return aI(adInfo) == 1;
    }

    public static boolean ay(AdInfo adInfo) {
        return adInfo.adStyleConfInfo.rewardVideoInteractSwitch && !TextUtils.isEmpty(adInfo.adMatrixInfo.adDataV2.rewardVideoInteractInfo.templateId);
    }

    public static int az(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.rewardVideoInteractInfo.intervalShow;
    }

    public static boolean b(AdInfo adInfo, boolean z) {
        return ((z && ax(adInfo)) || adInfo.adBaseInfo.mABParams.showVideoAtH5 == 0 || bc.isNullString(aK(adInfo))) ? false : true;
    }

    private static boolean bA(AdInfo adInfo) {
        if (adInfo == null || adInfo.adConversionInfo == null || adInfo.adConversionInfo.playableStyleInfo == null) {
            return false;
        }
        int i = adInfo.adConversionInfo.playableStyleInfo.playableOrientation;
        return i == 0 || i == 1;
    }

    public static String bB(AdInfo adInfo) {
        if (adInfo == null || adInfo.adConversionInfo == null) {
            return null;
        }
        return adInfo.adConversionInfo.playableUrl;
    }

    public static String bC(AdInfo adInfo) {
        if (adInfo == null || adInfo.adConversionInfo == null) {
            return null;
        }
        return adInfo.adConversionInfo.callbackUrl;
    }

    public static String bD(AdInfo adInfo) {
        if (adInfo == null || adInfo.adConversionInfo == null) {
            return null;
        }
        return adInfo.adConversionInfo.callbackUrlInfo;
    }

    public static String bE(AdInfo adInfo) {
        if (adInfo == null || adInfo.serverExt == null) {
            return null;
        }
        return adInfo.serverExt;
    }

    public static boolean bF(AdInfo adInfo) {
        return adInfo.fullScreenVideoInfo.fullScreenEndCardSwitch;
    }

    public static boolean bG(AdInfo adInfo) {
        return adInfo.adRewardInfo.rewardVideoEndCardSwitch;
    }

    public static boolean bH(AdInfo adInfo) {
        return (adInfo == null || adInfo.adFeedInfo == null || adInfo.adFeedInfo.videoSoundType != 2) ? false : true;
    }

    public static boolean bI(AdInfo adInfo) {
        if (adInfo == null || adInfo.adFeedInfo == null) {
            return false;
        }
        return adInfo.adFeedInfo.videoAutoPlayType == 1 || adInfo.adFeedInfo.videoAutoPlayType == 0;
    }

    public static boolean bJ(AdInfo adInfo) {
        return (adInfo == null || adInfo.adFeedInfo == null || adInfo.adFeedInfo.videoAutoPlayType != 2) ? false : true;
    }

    public static boolean bK(AdInfo adInfo) {
        return (TextUtils.isEmpty(aK(adInfo)) || ax(adInfo) || adInfo.adStyleInfo.adBrowseInfo.enableAdBrowse != 1) ? false : true;
    }

    public static int bL(AdInfo adInfo) {
        if (adInfo == null) {
            return 0;
        }
        return adInfo.adStyleConfInfo.actionBarType;
    }

    public static int bM(AdInfo adInfo) {
        if (adInfo == null) {
            return 0;
        }
        return adInfo.adStyleConfInfo.endCardType;
    }

    public static int bN(AdInfo adInfo) {
        if (adInfo == null) {
            return 0;
        }
        return adInfo.adStyleConfInfo.confirmCardType;
    }

    public static String bO(AdInfo adInfo) {
        String strAo = ax(adInfo) ? ao(adInfo) : ap(adInfo);
        if (TextUtils.isEmpty(strAo)) {
            strAo = adInfo.advertiserInfo.rawUserName;
        }
        return TextUtils.isEmpty(strAo) ? "可爱的广告君" : strAo;
    }

    public static String bP(AdInfo adInfo) {
        return adInfo.advertiserInfo.rawUserName;
    }

    public static String bQ(AdInfo adInfo) {
        String str = adInfo.adBaseInfo.appIconUrl;
        return (TextUtils.isEmpty(str) || !ax(adInfo)) ? adInfo.advertiserInfo.portraitUrl : str;
    }

    public static long bR(AdInfo adInfo) {
        return adInfo.advertiserInfo.userId;
    }

    public static String bS(AdInfo adInfo) {
        return (adInfo == null || adInfo.adSplashInfo == null || adInfo.adSplashInfo.skipTips == null || TextUtils.isEmpty(adInfo.adSplashInfo.skipTips)) ? "跳过" : adInfo.adSplashInfo.skipTips;
    }

    public static AdInfo.CutRuleInfo bT(AdInfo adInfo) {
        return adInfo.adSplashInfo.cutRuleInfo;
    }

    public static int bU(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.splashEndCardTKInfo.endCardShowSecond;
    }

    public static boolean bV(AdInfo adInfo) {
        return adInfo.adMatrixInfo.adDataV2.splashEndCardTKInfo.endCardShowCountDown;
    }

    public static int bW(AdInfo adInfo) {
        return adInfo.adInsertScreenInfo.retainWindowBasedAdShowCount;
    }

    public static int bX(AdInfo adInfo) {
        return adInfo.adInsertScreenInfo.retainWindowDailyShowCount;
    }

    public static int bY(AdInfo adInfo) {
        return adInfo.adInsertScreenInfo.retainWindowStyle;
    }

    public static int bZ(AdInfo adInfo) {
        return adInfo.adInsertScreenInfo.guideShowStyle;
    }

    public static boolean ba(AdInfo adInfo) {
        return adInfo.adConversionInfo.needDeeplinkReplaceAdapta;
    }

    public static boolean bb(AdInfo adInfo) {
        return adInfo.adConversionInfo.isSupportKeepPlaying;
    }

    public static long bc(AdInfo adInfo) {
        return adInfo.adConversionInfo.keepPlayingBackOffTime;
    }

    public static List<Integer> bd(AdInfo adInfo) {
        String str = adInfo.adBaseInfo.videoPlayedNS;
        ArrayList arrayList = new ArrayList();
        if (!TextUtils.isEmpty(str)) {
            try {
                for (String str2 : str.split(Constants.ACCEPT_TIME_SEPARATOR_SP)) {
                    int i = Integer.parseInt(str2);
                    if (i > 0) {
                        arrayList.add(Integer.valueOf(i));
                    }
                }
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.printStackTrace(e);
            }
        }
        if (arrayList.isEmpty()) {
            arrayList.add(3);
        }
        return arrayList;
    }

    private static int[] be(AdInfo adInfo) {
        int[] iArr = {3, 3, 3};
        String str = adInfo.adBaseInfo.mABParams.drawActionBarTimes;
        if (TextUtils.isEmpty(str)) {
            return iArr;
        }
        try {
            String[] strArrSplit = str.split(Constants.ACCEPT_TIME_SEPARATOR_SP);
            if (strArrSplit.length < 3) {
                return iArr;
            }
            iArr[0] = Integer.parseInt(strArrSplit[0]);
            iArr[1] = Integer.parseInt(strArrSplit[1]);
            iArr[2] = Integer.parseInt(strArrSplit[2]);
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
        return iArr;
    }

    public static int bf(AdInfo adInfo) {
        int[] iArrBe = be(adInfo);
        if (iArrBe[0] > 0) {
            return iArrBe[0];
        }
        return 3;
    }

    public static int bg(AdInfo adInfo) {
        int[] iArrBe = be(adInfo);
        return (iArrBe[1] > 0 ? iArrBe[1] : 3) + bf(adInfo);
    }

    public static int bh(AdInfo adInfo) {
        int[] iArrBe = be(adInfo);
        return (iArrBe[2] > 0 ? iArrBe[2] : 3) + bg(adInfo);
    }

    public static com.kwad.sdk.core.response.model.b bi(AdInfo adInfo) {
        boolean z;
        String strI = I(adInfo);
        int iK = K(adInfo);
        int iL = L(adInfo);
        if (bc.isNullString(strI) || bc.fJ(strI) || iK == 0 || iL == 0) {
            strI = P(adInfo);
            iK = R(adInfo);
            iL = S(adInfo);
            z = true;
        } else {
            z = false;
        }
        boolean z2 = z;
        String str = strI;
        com.kwad.sdk.core.e.c.d("AdInfoHelper", "frameUrl=" + str + " useCover=" + z2 + " isAd=true");
        return new com.kwad.sdk.core.response.model.b(str, iK, iL, true, z2);
    }

    public static String bj(AdInfo adInfo) {
        String str = adInfo.downloadSafeInfo.webPageTipbarText;
        return !TextUtils.isEmpty(str) ? str : "您访问的网站由第三方提供";
    }

    public static boolean bk(AdInfo adInfo) {
        return adInfo.downloadSafeInfo.secWindowPopSwitch;
    }

    public static boolean bl(AdInfo adInfo) {
        return adInfo.downloadSafeInfo.secWindowPopNoWifiSwitch;
    }

    public static int bm(AdInfo adInfo) {
        if (adInfo.downloadSafeInfo.complianceInfo == null) {
            return -1;
        }
        return adInfo.downloadSafeInfo.complianceInfo.materialJumpType;
    }

    public static boolean bn(AdInfo adInfo) {
        return adInfo.downloadSafeInfo.webPageTipbarSwitch;
    }

    public static int bo(AdInfo adInfo) {
        if (adInfo == null) {
            return 0;
        }
        int i = adInfo.status;
        if (i == 0) {
            return 1;
        }
        if (1 == i || 2 == i || 3 == i || 4 == i) {
            return 2;
        }
        return 8 == i ? 3 : 0;
    }

    public static String bp(AdInfo adInfo) {
        if (adInfo != null) {
            return adInfo.adBaseInfo.corporationName;
        }
        return null;
    }

    public static String bq(AdInfo adInfo) {
        if (adInfo != null) {
            return adInfo.downloadSafeInfo.permissionInfo;
        }
        return null;
    }

    public static String br(AdInfo adInfo) {
        if (adInfo != null) {
            return adInfo.downloadSafeInfo.appPermissionInfoUrl;
        }
        return null;
    }

    public static String bs(AdInfo adInfo) {
        if (adInfo != null) {
            return adInfo.downloadSafeInfo.appPrivacyUrl;
        }
        return null;
    }

    public static String bt(AdInfo adInfo) {
        if (adInfo != null) {
            return adInfo.adBaseInfo.appVersion;
        }
        return null;
    }

    public static long bu(AdInfo adInfo) {
        if (adInfo != null) {
            return adInfo.adBaseInfo.packageSize;
        }
        return 0L;
    }

    public static boolean bv(AdInfo adInfo) {
        if (adInfo != null && adInfo.adConversionInfo != null) {
            boolean z = (adInfo.adConversionInfo.playableUrl == null || adInfo.adConversionInfo.playableStyleInfo == null || TextUtils.isEmpty(adInfo.adConversionInfo.playableUrl.trim())) ? false : true;
            if (by(adInfo) && z) {
                return true;
            }
        }
        return false;
    }

    public static long bw(AdInfo adInfo) {
        if (adInfo == null || adInfo.adConversionInfo == null) {
            return 0L;
        }
        return adInfo.adConversionInfo.h5DeeplinkLimitedTimeMs;
    }

    public static long bx(AdInfo adInfo) {
        if (adInfo == null || adInfo.adConversionInfo == null) {
            return 0L;
        }
        return adInfo.adConversionInfo.playableDeeplinkLimitedTimeMs;
    }

    public static boolean by(AdInfo adInfo) {
        return ai.IO() ? bA(adInfo) : bz(adInfo);
    }

    private static boolean bz(AdInfo adInfo) {
        if (adInfo == null || adInfo.adConversionInfo == null || adInfo.adConversionInfo.playableStyleInfo == null) {
            return false;
        }
        int i = adInfo.adConversionInfo.playableStyleInfo.playableOrientation;
        return i == 0 || i == 2;
    }

    public static boolean cA(AdInfo adInfo) {
        if (ax(adInfo)) {
            return false;
        }
        return adInfo.adBaseInfo.extraClickReward;
    }

    public static boolean cB(AdInfo adInfo) {
        return cA(adInfo) && Y(adInfo) < H(adInfo);
    }

    public static boolean cC(AdInfo adInfo) {
        if (!TextUtils.isEmpty(adInfo.adMatrixInfo.adDataV2.pushTKInfo.templateId)) {
            return true;
        }
        com.kwad.sdk.core.e.c.d("AdInfoHelper", "isPushAdEnable pushTK TemplateId is empty");
        return false;
    }

    /* JADX WARN: Removed duplicated region for block: B:7:0x0013  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean cD(AdInfo adInfo) {
        boolean z = false;
        if (!adInfo.adStyleConfInfo.adPushSwitch) {
            return false;
        }
        long jIA = y.IA();
        if (jIA <= 0) {
            z = true;
        } else {
            long j = adInfo.adStyleConfInfo.adPushIntervalTime;
            if (j <= 0) {
                j = 900;
            }
            if (System.currentTimeMillis() - jIA > j * 1000) {
            }
        }
        com.kwad.sdk.core.e.c.d("AdInfoHelper", "isPushAdEnable intervalEnable: " + z);
        return z;
    }

    public static int cE(AdInfo adInfo) {
        return adInfo.adStyleConfInfo.adPushShowAfterTime * 1000;
    }

    public static boolean cF(AdInfo adInfo) {
        return (!cw(adInfo) || TextUtils.isEmpty(b.dE(adInfo)) || cG(adInfo)) ? false : true;
    }

    private static boolean cG(AdInfo adInfo) {
        return adInfo.adStyleConfInfo.useNativeForOuterLiveAd;
    }

    public static long cH(AdInfo adInfo) {
        return adInfo.adRewardInfo.callBackStrategyInfo.callBackAdvanceMs;
    }

    public static boolean cI(AdInfo adInfo) {
        return adInfo.adRewardInfo.callBackStrategyInfo.serverCheckSwitch;
    }

    public static boolean cJ(AdInfo adInfo) {
        return adInfo.adRewardInfo.callBackStrategyInfo.rewardAdvanceSwitch;
    }

    public static int ca(AdInfo adInfo) {
        return adInfo.adInsertScreenInfo.guideShowTime;
    }

    public static String cb(AdInfo adInfo) {
        return adInfo.adInsertScreenInfo.retainWindowText;
    }

    public static boolean cc(AdInfo adInfo) {
        return adInfo.adInsertScreenInfo.cycleAggregateSwitch;
    }

    public static int cd(AdInfo adInfo) {
        return adInfo.adInsertScreenInfo.cycleAggregateStyle;
    }

    public static int ce(AdInfo adInfo) {
        return adInfo.adInsertScreenInfo.cycleAggregateInterval;
    }

    public static int cf(AdInfo adInfo) {
        return adInfo.adInsertScreenInfo.cycleAggregateDailyShowCount;
    }

    public static boolean cg(AdInfo adInfo) {
        return adInfo.adSplashInfo.skipType == 2 || adInfo.adSplashInfo.skipType == 3;
    }

    public static boolean ch(AdInfo adInfo) {
        if (ci(adInfo)) {
            return adInfo.adSplashInfo.skipType == 0 || adInfo.adSplashInfo.skipType == 2;
        }
        return false;
    }

    public static boolean ci(AdInfo adInfo) {
        return adInfo.adSplashInfo.skipSecond >= 0;
    }

    public static boolean cj(AdInfo adInfo) {
        return (adInfo == null || adInfo.adSplashInfo == null || adInfo.adSplashInfo.countdownShow != 1) ? false : true;
    }

    public static boolean ck(AdInfo adInfo) {
        return adInfo.adSplashInfo.impressionStatisticalChangeSwitch;
    }

    public static int cl(AdInfo adInfo) {
        double d = adInfo.adSplashInfo.impressionLimitSize;
        if (d <= 0.0d || d > 1.0d) {
            d = 0.699999988079071d;
        }
        return ((int) d) * 100;
    }

    public static boolean cm(AdInfo adInfo) {
        if (adInfo == null || adInfo.downloadSafeInfo == null) {
            return false;
        }
        return adInfo.downloadSafeInfo.downloadPauseEnable;
    }

    public static String cn(AdInfo adInfo) {
        return adInfo.adBaseInfo.sdkExtraData;
    }

    @Deprecated
    public static boolean co(AdInfo adInfo) {
        return adInfo.adStyleConfInfo.innerAdType == 3;
    }

    public static boolean cp(AdInfo adInfo) {
        return adInfo.advertiserInfo.followed;
    }

    public static boolean cq(AdInfo adInfo) {
        return adInfo.adStyleConfInfo.innerAdType == 1;
    }

    public static String cr(AdInfo adInfo) {
        int i = adInfo.advertiserInfo.fansCount;
        if (i >= 200 && i < 10000) {
            return String.valueOf(i);
        }
        if (i < 10000) {
            return null;
        }
        double d = ((double) i) / 10000.0d;
        return new DecimalFormat("0.0").format(d) + "w";
    }

    public static String cs(AdInfo adInfo) {
        return adInfo.advertiserInfo.brief;
    }

    public static String ct(AdInfo adInfo) {
        return adInfo.advertiserInfo.portraitUrl;
    }

    public static boolean cu(AdInfo adInfo) {
        return adInfo.adStyleConfInfo.innerAdType == 4 || adInfo.adStyleConfInfo.innerAdType == 5;
    }

    @Deprecated
    public static String cv(int i) {
        return l(i, "下载中  %s%%");
    }

    public static boolean cv(AdInfo adInfo) {
        return adInfo.adStyleConfInfo.innerAdType == 7;
    }

    public static String cw(int i) {
        return "继续下载 " + i + "%";
    }

    public static boolean cw(AdInfo adInfo) {
        return adInfo.adBaseInfo.universeLiveType == 1 && bR(adInfo) != 0;
    }

    public static String cx(AdInfo adInfo) {
        com.kwad.sdk.service.a.e eVar = (com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class);
        return ac.c(eVar == null ? null : eVar.getContext(), adInfo.adConversionInfo.deeplinkUrl, at(adInfo));
    }

    public static AdProductInfo cy(AdInfo adInfo) {
        return adInfo.adProductInfo;
    }

    public static String cz(AdInfo adInfo) {
        return adInfo.adConversionInfo.marketUrl;
    }

    public static SpannableString e(AdInfo adInfo, int i) {
        String str;
        int iIndexOf;
        String strCr = cr(adInfo);
        if (strCr == null || (iIndexOf = (str = String.format("已有%s粉丝关注了TA", strCr)).indexOf(strCr)) < 0) {
            return null;
        }
        SpannableString spannableString = new SpannableString(str);
        spannableString.setSpan(new ForegroundColorSpan(i), iIndexOf, strCr.length() + iIndexOf, 18);
        return spannableString;
    }

    public static String l(int i, String str) {
        if (str == null) {
            str = "下载中  %s%%";
        }
        return String.format(str, Integer.valueOf(i));
    }
}
