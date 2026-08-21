package com.kwad.components.ad.reward.a;

import com.kwad.sdk.core.response.model.AdInfo;

public final class b {
    public static int gC() {
        return a.qC.getValue().intValue();
    }

    public static String gD() {
        return a.qG.getValue();
    }

    public static int gE() {
        return a.qD.getValue().intValue();
    }

    public static boolean gF() {
        return a.qF.getValue().booleanValue();
    }

    public static int gG() {
        return a.qE.getValue().intValue();
    }

    private static boolean gH() {
        return a.qI.getValue().intValue() == 1;
    }

    public static float gI() {
        return a.qN.getValue().floatValue();
    }

    public static boolean gJ() {
        return a.qN.getValue().floatValue() > 0.0f && a.qN.getValue().floatValue() < 1.0f;
    }

    public static boolean gK() {
        return a.qO.getValue().booleanValue();
    }

    public static long gL() {
        return a.qL.getValue().intValue();
    }

    public static int gM() {
        return a.qM.getValue().intValue();
    }

    public static int gN() {
        return a.qP.getValue().intValue();
    }

    public static boolean gO() {
        return a.qQ.getValue().booleanValue();
    }

    public static boolean gP() {
        return a.qR.getValue().intValue() == 1 || a.qR.getValue().intValue() == 3;
    }

    public static boolean i(AdInfo adInfo) {
        return !j(adInfo) && com.kwad.sdk.core.response.b.a.cu(adInfo) && gH();
    }

    public static boolean j(AdInfo adInfo) {
        return com.kwad.sdk.core.response.b.a.cu(adInfo) && a.qK.getValue().intValue() == 1;
    }

    public static boolean k(AdInfo adInfo) {
        return i(adInfo);
    }
}
