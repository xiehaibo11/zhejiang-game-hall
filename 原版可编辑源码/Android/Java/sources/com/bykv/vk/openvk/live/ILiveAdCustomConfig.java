package com.bykv.vk.openvk.live;

import android.os.Bundle;
import org.json.JSONObject;

public interface ILiveAdCustomConfig {
    String convertToEnterFromMerge(int i);

    String convertToEnterMethod(int i, boolean z);

    Object invoke(int i, Bundle bundle);

    void onEventV3(String str, JSONObject jSONObject);

    int openLR(String str);
}
