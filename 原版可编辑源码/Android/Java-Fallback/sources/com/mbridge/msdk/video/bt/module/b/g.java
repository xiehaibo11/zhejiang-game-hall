package com.mbridge.msdk.video.bt.module.b;

public interface g {
    void onAdClose(com.mbridge.msdk.out.MBridgeIds r1, com.mbridge.msdk.out.RewardInfo r2);

    void onAdShow(com.mbridge.msdk.out.MBridgeIds r1);

    void onEndcardShow(com.mbridge.msdk.out.MBridgeIds r1);

    void onLoadSuccess(com.mbridge.msdk.out.MBridgeIds r1);

    void onShowFail(com.mbridge.msdk.out.MBridgeIds r1, java.lang.String r2);

    void onVideoAdClicked(com.mbridge.msdk.out.MBridgeIds r1);

    void onVideoComplete(com.mbridge.msdk.out.MBridgeIds r1);

    void onVideoLoadFail(com.mbridge.msdk.out.MBridgeIds r1, java.lang.String r2);

    void onVideoLoadSuccess(com.mbridge.msdk.out.MBridgeIds r1);
}
