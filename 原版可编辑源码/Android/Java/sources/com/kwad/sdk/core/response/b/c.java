package com.kwad.sdk.core.response.b;

import com.kwad.sdk.core.response.model.AdStyleInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public final class c {
    public static long bS(AdTemplate adTemplate) {
        if (adTemplate == null) {
            return 0L;
        }
        return bW(adTemplate).playDetailInfo.detailTopToolBarInfo.callButtonShowTime;
    }

    public static String bT(AdTemplate adTemplate) {
        return adTemplate == null ? "" : bW(adTemplate).playDetailInfo.detailTopToolBarInfo.callButtonDescription;
    }

    public static String bU(AdTemplate adTemplate) {
        return adTemplate == null ? "" : bW(adTemplate).playEndInfo.endTopToolBarInfo.callButtonDescription;
    }

    public static boolean bV(AdTemplate adTemplate) {
        if (adTemplate != null && d.bY(adTemplate)) {
            return bW(adTemplate).slideClick;
        }
        return false;
    }

    private static AdStyleInfo bW(AdTemplate adTemplate) {
        return d.cg(adTemplate).adStyleInfo;
    }

    public static List<String> bX(AdTemplate adTemplate) {
        AdStyleInfo adStyleInfoBW = bW(adTemplate);
        ArrayList arrayList = new ArrayList();
        try {
            Iterator<AdStyleInfo.ExposeTagInfo> it = adStyleInfoBW.extraDisplayInfo.exposeTagInfoList.iterator();
            while (it.hasNext()) {
                arrayList.add(it.next().text);
            }
        } catch (Exception unused) {
        }
        return arrayList;
    }
}
