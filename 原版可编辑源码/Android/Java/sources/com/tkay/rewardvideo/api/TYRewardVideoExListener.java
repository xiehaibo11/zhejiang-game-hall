package com.tkay.rewardvideo.api;

import android.content.Context;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYNetworkConfirmInfo;

public interface TYRewardVideoExListener extends TYRewardVideoListener {
    void onAgainReward(TYAdInfo tYAdInfo);

    void onDeeplinkCallback(TYAdInfo tYAdInfo, boolean z);

    void onDownloadConfirm(Context context, TYAdInfo tYAdInfo, TYNetworkConfirmInfo tYNetworkConfirmInfo);

    void onRewardedVideoAdAgainPlayClicked(TYAdInfo tYAdInfo);

    void onRewardedVideoAdAgainPlayEnd(TYAdInfo tYAdInfo);

    void onRewardedVideoAdAgainPlayFailed(AdError adError, TYAdInfo tYAdInfo);

    void onRewardedVideoAdAgainPlayStart(TYAdInfo tYAdInfo);
}
