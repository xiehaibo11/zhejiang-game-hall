package com.bykv.vk.openvk;

import android.content.Context;
import com.bykv.vk.openvk.TTVfSdk;

public interface TTInitializer {
    TTVfManager getAdManager();

    void init(Context context, AdConfig adConfig, TTVfSdk.InitCallback initCallback);

    boolean isInitSuccess();
}
