package com.kwad.sdk.core.response.b;

import android.text.TextUtils;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdMatrixInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.response.model.PhotoInfo;
import com.kwad.sdk.service.ServiceProvider;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class d {
    private static e CA() {
        com.kwad.sdk.service.a.e eVar = (com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class);
        if (eVar != null) {
            return eVar.sF();
        }
        return null;
    }

    public static AdTemplate a(List<AdTemplate> list, long j, int i) {
        if (j >= 0 && list != null) {
            for (AdTemplate adTemplate : list) {
                if (b(adTemplate, j, i)) {
                    return adTemplate;
                }
            }
        }
        return null;
    }

    public static boolean b(AdTemplate adTemplate, long j, int i) {
        long jCq = cq(adTemplate);
        int iCa = ca(adTemplate);
        if (i > 0) {
            if (jCq == j && iCa == i) {
                return true;
            }
        } else if (jCq == j) {
            return true;
        }
        return false;
    }

    public static boolean bY(AdTemplate adTemplate) {
        return (adTemplate.realShowType != 2 || adTemplate.adInfoList.isEmpty() || adTemplate.adInfoList.get(0) == null) ? false : true;
    }

    public static long bZ(AdTemplate adTemplate) {
        return adTemplate.posId;
    }

    public static int ca(AdTemplate adTemplate) {
        return adTemplate.adStyle;
    }

    @Deprecated
    public static int cb(AdTemplate adTemplate) {
        if (adTemplate == null || adTemplate.mAdScene == null) {
            return 0;
        }
        return adTemplate.mAdScene.getAdStyle();
    }

    public static int cc(AdTemplate adTemplate) {
        return adTemplate.contentType;
    }

    public static long cd(AdTemplate adTemplate) {
        return adTemplate.llsid;
    }

    public static String ce(AdTemplate adTemplate) {
        return adTemplate.extra;
    }

    public static String cf(AdTemplate adTemplate) {
        return adTemplate.impAdExtra;
    }

    public static AdInfo cg(AdTemplate adTemplate) {
        AdInfo adInfo = adTemplate.adInfoList.size() > 0 ? adTemplate.adInfoList.get(0) : null;
        if (adInfo != null) {
            return adInfo;
        }
        com.kwad.sdk.core.e.c.e("AdTemplateHelper", "adInfo in null");
        return new AdInfo();
    }

    public static PhotoInfo ch(AdTemplate adTemplate) {
        return adTemplate.photoInfo;
    }

    public static String ci(AdTemplate adTemplate) {
        return bY(adTemplate) ? a.F(cg(adTemplate)) : f.a(ch(adTemplate));
    }

    public static String cj(AdTemplate adTemplate) {
        return cg(adTemplate).adConversionInfo.appDownloadUrl;
    }

    public static String ck(AdTemplate adTemplate) {
        e eVarCA = CA();
        String strCB = eVarCA == null ? "" : eVarCA.CB();
        return TextUtils.isEmpty(strCB) ? strCB : a.Q(cg(adTemplate));
    }

    public static String cl(AdTemplate adTemplate) {
        if (bY(adTemplate)) {
            return a.bQ(cg(adTemplate));
        }
        e eVarCA = CA();
        return eVarCA == null ? "" : eVarCA.CC();
    }

    public static long cm(AdTemplate adTemplate) {
        if (bY(adTemplate)) {
            return a.T(cg(adTemplate));
        }
        e eVarCA = CA();
        return eVarCA == null ? adTemplate.hashCode() : eVarCA.CD();
    }

    public static int cn(AdTemplate adTemplate) {
        e eVarCA = CA();
        if (eVarCA == null) {
            return 0;
        }
        return eVarCA.CE();
    }

    public static int co(AdTemplate adTemplate) {
        if (adTemplate == null) {
            return -1;
        }
        return cg(adTemplate).adBaseInfo.taskType;
    }

    public static String cp(AdTemplate adTemplate) {
        return bY(adTemplate) ? a.cn(cg(adTemplate)) : f.c(ch(adTemplate));
    }

    public static long cq(AdTemplate adTemplate) {
        if (adTemplate == null) {
            return 0L;
        }
        return cg(adTemplate).adBaseInfo.creativeId;
    }

    public static boolean cr(AdTemplate adTemplate) {
        return cg(adTemplate).adConversionInfo.blockCallbackIfSpam && adTemplate.mCheatingFlow;
    }

    public static boolean cs(AdTemplate adTemplate) {
        return ct(adTemplate) || cu(adTemplate);
    }

    public static boolean ct(AdTemplate adTemplate) {
        int iG = g(adTemplate, true);
        return iG == 1 || iG == 2;
    }

    public static boolean cu(AdTemplate adTemplate) {
        int iG = g(adTemplate, false);
        return iG == 1 || iG == 2;
    }

    public static int cv(AdTemplate adTemplate) {
        return cg(adTemplate).adBaseInfo.ecpm;
    }

    public static boolean cw(AdTemplate adTemplate) {
        AdInfo adInfoCg = cg(adTemplate);
        return adInfoCg.adStyleConfInfo.adPushDownloadJumpType == 0 && ca(adTemplate) == 17 && a.ax(adInfoCg);
    }

    public static boolean f(AdTemplate adTemplate, boolean z) {
        if (adTemplate == null) {
            return false;
        }
        AdInfo adInfoCg = cg(adTemplate);
        return a.ax(adInfoCg) && !a.cA(adInfoCg) && !z && co(adTemplate) == 2;
    }

    public static int g(AdTemplate adTemplate, boolean z) {
        AdInfo adInfoCg = cg(adTemplate);
        if (ca(adTemplate) != 3) {
            return adInfoCg.adBaseInfo.mABParams.playableStyle;
        }
        AdMatrixInfo.AdDataV2 adDataV2 = adInfoCg.adMatrixInfo.adDataV2;
        int i = z ? adDataV2.actionBarInfo.cardType : adDataV2.endCardInfo.cardType;
        if (i == 5) {
            return 1;
        }
        return i == 6 ? 2 : -1;
    }

    public static boolean s(AdTemplate adTemplate) {
        if (adTemplate == null) {
            return false;
        }
        AdInfo adInfoCg = cg(adTemplate);
        return (a.ax(adInfoCg) || a.cA(adInfoCg) || co(adTemplate) != 3) ? false : true;
    }
}
