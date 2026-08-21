package com.bytedance.android.live.base.api;

public interface IOuterLiveService extends com.bytedance.android.live.base.api.IOuterLiveRoomService {
    void enterLiveRoom(android.content.Context r1, long r2, android.os.Bundle r4);

    com.bytedance.android.live.base.api.ILiveOuterPreviewCoverView makePreviewCoverView(android.content.Context r1, android.os.Bundle r2);

    com.bytedance.android.live.base.api.ILiveOuterPreviewFragment makePreviewFragment();
}
