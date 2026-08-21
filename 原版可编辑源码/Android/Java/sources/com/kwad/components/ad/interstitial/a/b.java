package com.kwad.components.ad.interstitial.a;

import com.kwad.sdk.core.response.model.AdInfo;

public final class b {
    public static int b(AdInfo adInfo) {
        int iIntValue = a.iP.getValue().intValue();
        if (com.kwad.sdk.core.response.b.a.aU(adInfo)) {
            int iG = com.kwad.sdk.core.response.b.a.G(adInfo);
            return iIntValue == 0 ? iG : Math.min(iIntValue, iG);
        }
        if (iIntValue > 60 || iIntValue <= 0) {
            return 60;
        }
        return iIntValue;
    }

    public static boolean cA() {
        return a.iR.getValue().booleanValue();
    }

    public static boolean cB() {
        return a.iL.getValue().intValue() == 1;
    }

    public static int cC() {
        return a.iM.getValue().intValue();
    }

    public static boolean cD() {
        return a.iN.getValue().intValue() == 1;
    }

    public static boolean cE() {
        return a.iO.getValue().intValue() == 1;
    }

    public static int cF() {
        return a.iT.getValue().intValue();
    }

    public static boolean cG() {
        return a.iQ.getValue().intValue() == 1;
    }

    public static boolean cH() {
        return a.iS.getValue().intValue() == 1;
    }
}
