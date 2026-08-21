package com.tkay.rewardvideo.unitgroup.api;

import android.content.Context;
import com.tkay.core.api.TYNetworkConfirmInfo;

public interface CustomRewardedVideoEventListener {
    void onAgainReward();

    void onDeeplinkCallback(boolean z);

    void onDownloadConfirm(Context context, TYNetworkConfirmInfo tYNetworkConfirmInfo);

    void onReward();

    void onRewardedVideoAdAgainPlayClicked();

    void onRewardedVideoAdAgainPlayEnd();

    void onRewardedVideoAdAgainPlayFailed(String str, String str2);

    void onRewardedVideoAdAgainPlayStart();

    void onRewardedVideoAdClosed();

    void onRewardedVideoAdPlayClicked();

    void onRewardedVideoAdPlayEnd();

    void onRewardedVideoAdPlayFailed(String str, String str2);

    void onRewardedVideoAdPlayStart();
}
