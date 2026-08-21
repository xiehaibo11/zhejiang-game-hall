package com.sigmob.windad.rewardVideo;

import com.sigmob.windad.WindAdRequest;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class WindRewardAdRequest extends WindAdRequest {
    private boolean c;
    private boolean d;

    public WindRewardAdRequest(String str, String str2, Map<String, Object> map) {
        super(str, str2, map);
        this.f5280a = 1;
    }

    public static WindRewardAdRequest getWindVideoAdRequest(WindAdRequest windAdRequest) {
        if (windAdRequest != null) {
            return new WindRewardAdRequest(windAdRequest.getPlacementId(), windAdRequest.getUserId(), windAdRequest.getOptions());
        }
        return null;
    }

    public boolean isEnableKeepOn() {
        return this.d;
    }

    public boolean isEnableScreenLockDisPlayAd() {
        return this.c;
    }

    public void setEnableKeepOn(boolean z) {
        this.d = z;
    }

    public void setEnableScreenLockDisPlayAd(boolean z) {
        this.c = z;
    }
}
