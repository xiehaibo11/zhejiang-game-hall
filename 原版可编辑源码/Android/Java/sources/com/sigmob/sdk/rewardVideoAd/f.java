package com.sigmob.sdk.rewardVideoAd;

import com.sigmob.windad.WindAdError;

public interface f {
    void onVideoAdLoadError(WindAdError windAdError, String str);

    void onVideoAdLoadSuccess(String str);

    void onVideoAdPreLoadFail(WindAdError windAdError, String str);

    void onVideoAdPreLoadSuccess(String str);
}
