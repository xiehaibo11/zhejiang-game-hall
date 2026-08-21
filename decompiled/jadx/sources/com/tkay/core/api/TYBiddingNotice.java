package com.tkay.core.api;

import com.tkay.core.api.TYAdConst;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public interface TYBiddingNotice {
    public static final String ADN_ID = "adn_id";

    TYAdConst.CURRENCY getNoticePriceCurrency();

    void notifyBidDisplay(boolean z, double d);

    void notifyBidLoss(String str, double d, Map<String, Object> map);

    void notifyBidWin(double d);
}
