package com.mbridge.msdk.mbjscommon.mraid;

import com.mbridge.msdk.foundation.entity.CampaignEx;

public interface b {
    void close();

    void expand(String str, boolean z);

    CampaignEx getMraidCampaign();

    void open(String str);

    void unload();

    void useCustomClose(boolean z);
}
