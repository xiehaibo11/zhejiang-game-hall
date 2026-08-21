package com.bykv.vk.openvk.live;

import android.app.Activity;
import java.io.Serializable;
import java.util.Map;

public interface ITTLiveTokenInjectionAuth extends Serializable {
    TTLiveToken getTokenInfo();

    boolean isLogin();

    void onTokenInvalid(TTLiveToken tTLiveToken, TTLiveAuthCallback tTLiveAuthCallback, Activity activity, Map<String, String> map);
}
