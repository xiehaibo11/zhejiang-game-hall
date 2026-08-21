package com.kwad.components.core.webview.b;

import android.text.TextUtils;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.response.model.AdMatrixInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwai.adclient.kscommerciallogger.model.BusinessType;
import java.util.Iterator;
import org.bouncycastle.math.ec.Tnaf;

public final class j {
    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:65:0x00ee  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static String b(String str, AdTemplate adTemplate) {
        byte b;
        AdMatrixInfo.BaseMatrixTemplate baseMatrixTemplate;
        AdMatrixInfo.AdDataV2 adDataV2 = com.kwad.sdk.core.response.b.b.aO(adTemplate).adDataV2;
        switch (str.hashCode()) {
            case -1777431161:
                b = !str.equals("ksad-video-top-bar") ? (byte) -1 : (byte) 0;
                break;
            case -1589174862:
                if (str.equals("ksad-fullscreen-video-card")) {
                    b = 10;
                    break;
                }
                break;
            case -1545218748:
                if (str.equals("ksad-video-task-card")) {
                    b = 8;
                    break;
                }
                break;
            case -261341611:
                if (str.equals("ksad-installed-activate-card")) {
                    b = 18;
                    break;
                }
                break;
            case -259656373:
                if (str.equals("ksad-video-bottom-card-v2")) {
                    b = 2;
                    break;
                }
                break;
            case -206391259:
                if (str.equals("ksad-splash-play-card")) {
                    b = 11;
                    break;
                }
                break;
            case 44717817:
                if (str.equals("ksad-neo-video-card")) {
                    b = 14;
                    break;
                }
                break;
            case 144881219:
                if (str.equals("ksad-pre-landingpage-card")) {
                    b = Tnaf.POW_2_WIDTH;
                    break;
                }
                break;
            case 625896230:
                if (str.equals("ksad-splash-end-card")) {
                    b = 12;
                    break;
                }
                break;
            case 661927521:
                if (str.equals("ksad-live-video-card")) {
                    b = 19;
                    break;
                }
                break;
            case 787160939:
                if (str.equals("ksad-video-topfloor")) {
                    b = 13;
                    break;
                }
                break;
            case 1188774735:
                if (str.equals("ksad-interstitial-card")) {
                    b = 6;
                    break;
                }
                break;
            case 1339306036:
                if (str.equals("ksad-video-middle-card")) {
                    b = 1;
                    break;
                }
                break;
            case 1528649430:
                if (str.equals("ksad-image-video-card")) {
                    b = 17;
                    break;
                }
                break;
            case 1619320353:
                if (str.equals("ksad-push-card")) {
                    b = 15;
                    break;
                }
                break;
            case 1649519421:
                if (str.equals("ksad-video-secondclick-card")) {
                    b = 5;
                    break;
                }
                break;
            case 1651568242:
                if (str.equals("ksad-video-web-close-card")) {
                    b = 9;
                    break;
                }
                break;
            case 1866270907:
                if (str.equals("ksad-video-playend-dialog-card")) {
                    b = 4;
                    break;
                }
                break;
            case 1892692881:
                if (str.equals("ksad-video-confirm-card")) {
                    b = 3;
                    break;
                }
                break;
            case 2001659187:
                if (str.equals("ksad-video-interact-card")) {
                    b = 7;
                    break;
                }
                break;
        }
        String str2 = "";
        switch (b) {
            case 0:
                baseMatrixTemplate = adDataV2.topBarTKInfo;
                str2 = baseMatrixTemplate.templateId;
                break;
            case 1:
                baseMatrixTemplate = adDataV2.middleTKCardInfo;
                str2 = baseMatrixTemplate.templateId;
                break;
            case 2:
                baseMatrixTemplate = adDataV2.actionBarTKInfo;
                str2 = baseMatrixTemplate.templateId;
                break;
            case 3:
                baseMatrixTemplate = adDataV2.confirmTKInfo;
                str2 = baseMatrixTemplate.templateId;
                break;
            case 4:
                baseMatrixTemplate = adDataV2.playendTKInfo;
                str2 = baseMatrixTemplate.templateId;
                break;
            case 5:
                baseMatrixTemplate = adDataV2.activityTKInfo;
                str2 = baseMatrixTemplate.templateId;
                break;
            case 6:
                str2 = adDataV2.interstitialCardInfo.templateId;
                break;
            case 7:
                str2 = adDataV2.rewardVideoInteractInfo.templateId;
                break;
            case 8:
                str2 = adDataV2.rewardVideoTaskInfo.templateId;
                break;
            case 9:
                str2 = adDataV2.mRewardWebTaskCloseInfo.templateId;
                break;
            case 10:
                str2 = adDataV2.fullScreenInfo.templateId;
                break;
            case 11:
                str2 = adDataV2.splashPlayCardTKInfo.templateId;
                break;
            case 12:
                str2 = adDataV2.splashEndCardTKInfo.templateId;
                break;
            case 13:
                str2 = adDataV2.topFloorTKInfo.templateId;
                break;
            case 14:
                baseMatrixTemplate = adDataV2.neoTKInfo;
                str2 = baseMatrixTemplate.templateId;
                break;
            case 15:
                str2 = adDataV2.pushTKInfo.templateId;
                break;
            case 16:
                str2 = adDataV2.preLandingPageTKInfo.templateId;
                break;
            case 17:
                baseMatrixTemplate = adDataV2.videoImageTKInfo;
                str2 = baseMatrixTemplate.templateId;
                break;
            case 18:
                str = adDataV2.installedActivateInfo.templateId;
                break;
            case 19:
                str = adDataV2.videoLiveTKInfo.templateId;
                break;
        }
        if (TextUtils.isEmpty(str2)) {
            Iterator<AdMatrixInfo.MatrixTemplate> it = com.kwad.sdk.core.response.b.b.aO(adTemplate).styles.templateList.iterator();
            while (true) {
                if (it.hasNext()) {
                    if (it.next().templateId.equals(str)) {
                        str2 = str;
                    }
                }
            }
        }
        if (!TextUtils.isEmpty(str2)) {
            return str2;
        }
        KSLoggerReporter.ReportClient.RESPONE_MONITOR.buildNormalApmReporter().dx("response_biz_error_tk").aK(adTemplate).a(BusinessType.TACHIKOMA).W("TkTemplateIdLost", str).report();
        return str;
    }
}
