package com.bytedance.android.live.base.api;

import android.app.Fragment;

public interface ILiveOuterPreviewFragment {
    Fragment self();

    void setLiveBorderAnimController(ILiveBorderAnimController iLiveBorderAnimController);
}
