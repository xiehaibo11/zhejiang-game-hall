package com.tkay.core.api;

public interface TYBiddingNotice {
    public static final java.lang.String ADN_ID = "adn_id";

    com.tkay.core.api.TYAdConst.CURRENCY getNoticePriceCurrency();

    void notifyBidDisplay(boolean r1, double r2);

    void notifyBidLoss(java.lang.String r1, double r2, java.util.Map<java.lang.String, java.lang.Object> r4);

    void notifyBidWin(double r1);
}
