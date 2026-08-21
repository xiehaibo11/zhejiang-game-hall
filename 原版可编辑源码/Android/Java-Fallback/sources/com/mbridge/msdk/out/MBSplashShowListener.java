package com.mbridge.msdk.out;

public interface MBSplashShowListener {
    void onAdClicked(com.mbridge.msdk.out.MBridgeIds r1);

    void onAdTick(com.mbridge.msdk.out.MBridgeIds r1, long r2);

    void onDismiss(com.mbridge.msdk.out.MBridgeIds r1, int r2);

    void onShowFailed(com.mbridge.msdk.out.MBridgeIds r1, java.lang.String r2);

    void onShowSuccessed(com.mbridge.msdk.out.MBridgeIds r1);

    void onZoomOutPlayFinish(com.mbridge.msdk.out.MBridgeIds r1);

    void onZoomOutPlayStart(com.mbridge.msdk.out.MBridgeIds r1);
}
