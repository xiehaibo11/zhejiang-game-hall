package com.sigmob.sdk.rewardVideoAd;

import com.sigmob.windad.WindAdError;

/* JADX INFO: loaded from: classes3.dex */
public interface f {
    void onVideoAdLoadError(WindAdError windAdError, String str);

    void onVideoAdLoadSuccess(String str);

    void onVideoAdPreLoadFail(WindAdError windAdError, String str);

    void onVideoAdPreLoadSuccess(String str);
}
