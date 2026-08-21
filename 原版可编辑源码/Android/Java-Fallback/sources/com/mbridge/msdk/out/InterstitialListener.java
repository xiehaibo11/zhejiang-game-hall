package com.mbridge.msdk.out;

public interface InterstitialListener {
    void onInterstitialAdClick(com.mbridge.msdk.out.MBridgeIds r1);

    void onInterstitialClosed(com.mbridge.msdk.out.MBridgeIds r1);

    void onInterstitialLoadFail(com.mbridge.msdk.out.MBridgeIds r1, java.lang.String r2);

    void onInterstitialLoadSuccess(com.mbridge.msdk.out.MBridgeIds r1);

    void onInterstitialShowFail(com.mbridge.msdk.out.MBridgeIds r1, java.lang.String r2);

    void onInterstitialShowSuccess(com.mbridge.msdk.out.MBridgeIds r1);
}
