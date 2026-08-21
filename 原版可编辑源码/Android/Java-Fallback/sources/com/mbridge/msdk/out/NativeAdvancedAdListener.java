package com.mbridge.msdk.out;

public interface NativeAdvancedAdListener {
    void closeFullScreen(com.mbridge.msdk.out.MBridgeIds r1);

    void onClick(com.mbridge.msdk.out.MBridgeIds r1);

    void onClose(com.mbridge.msdk.out.MBridgeIds r1);

    void onLeaveApp(com.mbridge.msdk.out.MBridgeIds r1);

    void onLoadFailed(com.mbridge.msdk.out.MBridgeIds r1, java.lang.String r2);

    void onLoadSuccessed(com.mbridge.msdk.out.MBridgeIds r1);

    void onLogImpression(com.mbridge.msdk.out.MBridgeIds r1);

    void showFullScreen(com.mbridge.msdk.out.MBridgeIds r1);
}
