package com.bytedance.android.live.base.api.outer;

public interface ILiveProvider {
    java.lang.String getIdentity();

    com.bytedance.android.live.base.api.outer.ILiveView getLiveView(android.content.Context r1, int r2, java.lang.String r3, boolean r4, android.os.Bundle r5);

    java.util.List<com.bytedance.android.live.base.api.outer.data.RoomInfo> getRoomInfoList(int r1, int r2, int r3);

    void startLive(android.content.Context r1, int r2, java.lang.String r3, android.os.Bundle r4);
}
