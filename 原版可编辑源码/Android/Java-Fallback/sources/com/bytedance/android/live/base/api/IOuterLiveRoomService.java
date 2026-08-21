package com.bytedance.android.live.base.api;

public interface IOuterLiveRoomService {
    java.lang.Object callExpandMethod(java.lang.String r1, java.lang.Object... r2);

    void enterRoomWithDraw();

    com.bytedance.android.live.base.api.outer.ILiveProvider getLiveProvider();

    com.bytedance.android.live.base.api.push.ILivePush getPushService();

    com.bytedance.android.live.base.api.IBaseHorizontalLiveListView makeFollowListView(android.content.Context r1, android.os.Bundle r2, com.bytedance.android.live.base.api.ILiveBorderAnimController r3);

    void setEventListener(com.bytedance.android.live.base.api.IEventListener r1);

    void setNeedPersonalRecommend(boolean r1);
}
