package com.tkay.rewardvideo.api;

import com.tkay.core.api.AdError;

public interface TYRewardVideoAutoLoadListener {
    void onRewardVideoAutoLoadFail(String str, AdError adError);

    void onRewardVideoAutoLoaded(String str);
}
