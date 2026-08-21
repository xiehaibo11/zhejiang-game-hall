package com.sigmob.sdk.videoAd;

import com.sigmob.sdk.base.mta.PointCategory;

/* JADX INFO: loaded from: classes3.dex */
public enum k {
    START("start"),
    FIRST_QUARTILE("firstQuartile"),
    MIDPOINT("midpoint"),
    THIRD_QUARTILE("thirdQuartile"),
    COMPLETE("complete"),
    COMPANION_AD_VIEW("companionAdView"),
    COMPANION_AD_CLICK("companionAdClick"),
    FINISH(PointCategory.FINISH),
    SHOW(PointCategory.SHOW),
    CLICK("click"),
    UNKNOWN("");

    private final String l;

    k(String str) {
        this.l = str;
    }

    public static k a(String str) {
        if (str == null) {
            return UNKNOWN;
        }
        for (k kVar : values()) {
            if (str.equals(kVar.a())) {
                return kVar;
            }
        }
        return UNKNOWN;
    }

    private String a() {
        return this.l;
    }
}
