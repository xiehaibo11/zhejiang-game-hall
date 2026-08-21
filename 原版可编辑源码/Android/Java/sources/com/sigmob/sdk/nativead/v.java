package com.sigmob.sdk.nativead;

import com.sigmob.windad.natives.WindNativeAdData;
import java.util.List;

public interface v {
    void onNativeAdLoadFail(int i, String str);

    void onNativeAdLoaded(List<WindNativeAdData> list);
}
