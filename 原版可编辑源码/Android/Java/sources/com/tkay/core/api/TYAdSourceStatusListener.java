package com.tkay.core.api;

public interface TYAdSourceStatusListener {
    void onAdSourceAttempt(TYAdInfo tYAdInfo);

    void onAdSourceBiddingAttempt(TYAdInfo tYAdInfo);

    void onAdSourceBiddingFail(TYAdInfo tYAdInfo, AdError adError);

    void onAdSourceBiddingFilled(TYAdInfo tYAdInfo);

    void onAdSourceLoadFail(TYAdInfo tYAdInfo, AdError adError);

    void onAdSourceLoadFilled(TYAdInfo tYAdInfo);
}
