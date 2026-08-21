package com.bytedance.android.live.base.api;

import android.content.Context;
import android.os.Bundle;

public interface IOuterLiveService extends IOuterLiveRoomService {
    void enterLiveRoom(Context context, long j, Bundle bundle);

    ILiveOuterPreviewCoverView makePreviewCoverView(Context context, Bundle bundle);

    ILiveOuterPreviewFragment makePreviewFragment();
}
