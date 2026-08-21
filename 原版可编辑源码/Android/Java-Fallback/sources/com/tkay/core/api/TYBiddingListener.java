package com.tkay.core.api;

public interface TYBiddingListener {
    void onC2SBidResult(com.tkay.core.api.TYBiddingResult r1);

    void onC2SBiddingResultWithCache(com.tkay.core.api.TYBiddingResult r1, com.tkay.core.api.BaseAd r2);
}
