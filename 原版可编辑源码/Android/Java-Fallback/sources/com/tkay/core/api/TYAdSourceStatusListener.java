package com.tkay.core.api;

public interface TYAdSourceStatusListener {
    void onAdSourceAttempt(com.tkay.core.api.TYAdInfo r1);

    void onAdSourceBiddingAttempt(com.tkay.core.api.TYAdInfo r1);

    void onAdSourceBiddingFail(com.tkay.core.api.TYAdInfo r1, com.tkay.core.api.AdError r2);

    void onAdSourceBiddingFilled(com.tkay.core.api.TYAdInfo r1);

    void onAdSourceLoadFail(com.tkay.core.api.TYAdInfo r1, com.tkay.core.api.AdError r2);

    void onAdSourceLoadFilled(com.tkay.core.api.TYAdInfo r1);
}
