package com.qq.e.ads.rewardvideo;

public interface RewardVideoADListener {
    void onADClick();

    void onADClose();

    void onADExpose();

    void onADLoad();

    void onADShow();

    void onError(com.qq.e.comm.util.AdError r1);

    void onReward(java.util.Map<java.lang.String, java.lang.Object> r1);

    void onVideoCached();

    void onVideoComplete();
}
