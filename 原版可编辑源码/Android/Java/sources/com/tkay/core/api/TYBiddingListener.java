package com.tkay.core.api;

public interface TYBiddingListener {
    void onC2SBidResult(TYBiddingResult tYBiddingResult);

    void onC2SBiddingResultWithCache(TYBiddingResult tYBiddingResult, BaseAd baseAd);
}
