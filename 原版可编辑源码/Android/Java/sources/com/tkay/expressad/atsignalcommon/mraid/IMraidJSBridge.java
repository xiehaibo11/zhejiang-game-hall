package com.tkay.expressad.atsignalcommon.mraid;

import com.tkay.expressad.foundation.d.c;

public interface IMraidJSBridge {
    void close();

    void expand(String str, boolean z);

    c getMraidCampaign();

    void open(String str);

    void unload();

    void useCustomClose(boolean z);
}
