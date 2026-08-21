package com.mbridge.msdk.out;

public interface RewardVideoListener extends com.mbridge.msdk.video.bt.module.b.g {
    @Override
    void onAdClose(com.mbridge.msdk.out.MBridgeIds r1, com.mbridge.msdk.out.RewardInfo r2);

    @Override
    void onAdShow(com.mbridge.msdk.out.MBridgeIds r1);

    @Override
    void onEndcardShow(com.mbridge.msdk.out.MBridgeIds r1);

    @Override
    void onLoadSuccess(com.mbridge.msdk.out.MBridgeIds r1);

    @Override
    void onShowFail(com.mbridge.msdk.out.MBridgeIds r1, java.lang.String r2);

    @Override
    void onVideoAdClicked(com.mbridge.msdk.out.MBridgeIds r1);

    @Override
    void onVideoComplete(com.mbridge.msdk.out.MBridgeIds r1);

    @Override
    void onVideoLoadFail(com.mbridge.msdk.out.MBridgeIds r1, java.lang.String r2);

    @Override
    void onVideoLoadSuccess(com.mbridge.msdk.out.MBridgeIds r1);
}
