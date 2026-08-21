package com.kwad.components.ad.reward.model;

import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdProductInfo;

/* JADX INFO: loaded from: classes2.dex */
public enum EcOrderCardStyle {
    SPIKE_AND_COUPON(1),
    SPIKE(2),
    COUPON(3),
    NO_SPIKE_AND_NO_COUPON(4),
    DEFAULT(5);

    private int value;

    EcOrderCardStyle(int i) {
        this.value = i;
    }

    public static EcOrderCardStyle createFromAdInfo(AdInfo adInfo) {
        if (!(com.kwad.components.ad.reward.a.b.k(adInfo) || com.kwad.components.ad.reward.a.b.j(adInfo))) {
            return null;
        }
        AdProductInfo adProductInfoCy = com.kwad.sdk.core.response.b.a.cy(adInfo);
        boolean zHasSpike = adProductInfoCy.hasSpike();
        boolean zHasCoupon = adProductInfoCy.hasCoupon();
        return (zHasSpike && zHasCoupon) ? SPIKE_AND_COUPON : zHasSpike ? SPIKE : zHasCoupon ? COUPON : adProductInfoCy.hasOriginalPrice() ? NO_SPIKE_AND_NO_COUPON : DEFAULT;
    }

    public final int getValue() {
        return this.value;
    }
}
