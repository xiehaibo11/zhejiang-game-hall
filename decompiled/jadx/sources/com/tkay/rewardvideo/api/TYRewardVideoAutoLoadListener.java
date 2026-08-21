package com.tkay.rewardvideo.api;

import com.tkay.core.api.AdError;

/* JADX INFO: loaded from: classes4.dex */
public interface TYRewardVideoAutoLoadListener {
    void onRewardVideoAutoLoadFail(String str, AdError adError);

    void onRewardVideoAutoLoaded(String str);
}
