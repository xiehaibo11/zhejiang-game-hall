package com.mbridge.msdk.out;

public interface MBSplashLoadListener {
    void isSupportZoomOut(com.mbridge.msdk.out.MBridgeIds r1, boolean r2);

    void onLoadFailed(com.mbridge.msdk.out.MBridgeIds r1, java.lang.String r2, int r3);

    void onLoadSuccessed(com.mbridge.msdk.out.MBridgeIds r1, int r2);
}
