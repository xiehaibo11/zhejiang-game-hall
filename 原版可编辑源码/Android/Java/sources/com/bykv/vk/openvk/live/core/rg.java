package com.bykv.vk.openvk.live.core;

import com.bytedance.android.live.base.api.ILiveHostActionParam;
import java.util.Map;

public class rg implements ILiveHostActionParam {
    private ITTLiveHostAction rg;

    public rg(ITTLiveHostAction iTTLiveHostAction) {
        this.rg = iTTLiveHostAction;
    }

    @Override
    public void logEvent(boolean z, String str, String str2, Map<String, String> map) {
        ITTLiveHostAction iTTLiveHostAction = this.rg;
        if (iTTLiveHostAction != null) {
            iTTLiveHostAction.logEvent(z, str, str2, map);
        }
    }
}
