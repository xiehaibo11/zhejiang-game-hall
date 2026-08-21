package com.mbridge.msdk.newinterstitial.out;

public interface NewInterstitialListener {
    void onAdClicked(com.mbridge.msdk.out.MBridgeIds r1);

    void onAdClose(com.mbridge.msdk.out.MBridgeIds r1, com.mbridge.msdk.out.RewardInfo r2);

    void onAdCloseWithNIReward(com.mbridge.msdk.out.MBridgeIds r1, com.mbridge.msdk.out.RewardInfo r2);

    void onAdShow(com.mbridge.msdk.out.MBridgeIds r1);

    void onEndcardShow(com.mbridge.msdk.out.MBridgeIds r1);

    void onLoadCampaignSuccess(com.mbridge.msdk.out.MBridgeIds r1);

    void onResourceLoadFail(com.mbridge.msdk.out.MBridgeIds r1, java.lang.String r2);

    void onResourceLoadSuccess(com.mbridge.msdk.out.MBridgeIds r1);

    void onShowFail(com.mbridge.msdk.out.MBridgeIds r1, java.lang.String r2);

    void onVideoComplete(com.mbridge.msdk.out.MBridgeIds r1);
}
