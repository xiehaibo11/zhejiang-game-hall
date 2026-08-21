package com.sigmob.sdk.rewardVideoAd;

import com.sigmob.windad.WindAdError;
import com.sigmob.windad.rewardVideo.WindRewardInfo;

/* JADX INFO: loaded from: classes3.dex */
public interface g {
    void onVideoAdClicked(String str);

    void onVideoAdClosed(String str);

    void onVideoAdPlayComplete(WindRewardInfo windRewardInfo, String str);

    void onVideoAdPlayEnd(String str);

    void onVideoAdPlayError(WindAdError windAdError, String str);

    void onVideoAdPlayStart(String str);
}
