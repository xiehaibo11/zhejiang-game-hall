package com.sigmob.sdk.videoAd;

import com.sigmob.sdk.base.mta.PointCategory;

public enum k {
    a("start"),
    b("firstQuartile"),
    c("midpoint"),
    d("thirdQuartile"),
    e("complete"),
    f("companionAdView"),
    g("companionAdClick"),
    h(PointCategory.FINISH),
    i(PointCategory.SHOW),
    j("click"),
    k("");

    private final String l;

    k(String str) {
        this.l = str;
    }

    public static k a(String str) {
        if (str == null) {
            return k;
        }
        for (k kVar : values()) {
            if (str.equals(kVar.a())) {
                return kVar;
            }
        }
        return k;
    }

    private String a() {
        return this.l;
    }
}
