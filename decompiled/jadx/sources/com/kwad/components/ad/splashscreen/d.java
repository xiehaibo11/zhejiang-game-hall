package com.kwad.components.ad.splashscreen;

import android.text.TextUtils;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdMatrixInfo;
import com.kwad.sdk.core.response.model.AdTemplate;

/* JADX INFO: loaded from: classes2.dex */
public final class d {
    public static int BV;
    private String BW;
    private int BX = 2;
    private String title;

    private void V(String str) {
        this.BW = str;
    }

    private void W(int i) {
        this.BX = i;
    }

    public static d a(AdTemplate adTemplate, AdInfo adInfo, com.kwad.components.core.e.d.c cVar, int i) {
        String strA;
        d dVar = new d();
        BV = i;
        if (adInfo != null && cVar != null) {
            if (i == 1) {
                dVar.setTitle(com.kwad.sdk.core.response.b.b.cS(adInfo));
            } else {
                if (i != 4) {
                    if (com.kwad.sdk.core.response.b.a.ax(adInfo)) {
                        strA = "或点击" + a(adTemplate, adInfo, cVar.nw());
                    } else {
                        String strA2 = com.kwad.sdk.core.config.d.a(com.kwad.components.ad.splashscreen.b.a.Cx);
                        if (TextUtils.isEmpty(strA2)) {
                            strA2 = "点击跳转详情页或第三方应用";
                        }
                        strA = "或" + strA2;
                    }
                }
                dVar.V(strA);
            }
            strA = a(adInfo, cVar);
            dVar.V(strA);
        }
        dVar.W(com.kwad.sdk.core.response.b.b.db(adInfo));
        return dVar;
    }

    public static String a(AdInfo adInfo, int i) {
        AdMatrixInfo.DownloadTexts downloadTextsB = b(adInfo, BV);
        return i != 8 ? i != 12 ? downloadTextsB.adActionDescription : downloadTextsB.openAppLabel : downloadTextsB.installAppLabel;
    }

    private static String a(AdInfo adInfo, com.kwad.components.core.e.d.c cVar) {
        if (!com.kwad.sdk.core.response.b.a.ax(adInfo)) {
            String strD = d(adInfo, BV);
            return TextUtils.isEmpty(strD) ? "点击跳转详情页或第三方应用" : strD;
        }
        int iNw = cVar.nw();
        AdMatrixInfo.DownloadTexts downloadTextsB = b(adInfo, BV);
        return iNw != 8 ? iNw != 12 ? downloadTextsB.adActionDescription : downloadTextsB.openAppLabel : downloadTextsB.installAppLabel;
    }

    public static String a(AdTemplate adTemplate, AdInfo adInfo, int i) {
        return i != 8 ? i != 12 ? com.kwad.sdk.core.response.b.a.aw(adInfo) : com.kwad.sdk.core.response.b.a.U(adInfo) : com.kwad.sdk.core.response.b.a.aM(adTemplate);
    }

    private static AdMatrixInfo.DownloadTexts b(AdInfo adInfo, int i) {
        if (i == 1) {
            return com.kwad.sdk.core.response.b.b.cQ(adInfo) != null ? com.kwad.sdk.core.response.b.b.cQ(adInfo) : new AdMatrixInfo.DownloadTexts();
        }
        if (i == 4 && com.kwad.sdk.core.response.b.b.cV(adInfo) != null) {
            return com.kwad.sdk.core.response.b.b.cV(adInfo);
        }
        return new AdMatrixInfo.DownloadTexts();
    }

    public static String c(AdInfo adInfo, int i) {
        AdMatrixInfo.DownloadTexts downloadTextsCR = com.kwad.sdk.core.response.b.b.cR(adInfo) != null ? com.kwad.sdk.core.response.b.b.cR(adInfo) : new AdMatrixInfo.DownloadTexts();
        return i != 8 ? i != 12 ? downloadTextsCR.adActionDescription : downloadTextsCR.openAppLabel : downloadTextsCR.installAppLabel;
    }

    private static String d(AdInfo adInfo, int i) {
        return i == 1 ? com.kwad.sdk.core.response.b.b.cU(adInfo) != null ? com.kwad.sdk.core.response.b.b.cU(adInfo) : "" : (i != 4 || com.kwad.sdk.core.response.b.b.cW(adInfo) == null) ? "" : com.kwad.sdk.core.response.b.b.cW(adInfo);
    }

    private void setTitle(String str) {
        this.title = str;
    }

    public final String getTitle() {
        return this.title;
    }

    public final String kx() {
        return this.BW;
    }

    public final int ky() {
        return this.BX;
    }
}
