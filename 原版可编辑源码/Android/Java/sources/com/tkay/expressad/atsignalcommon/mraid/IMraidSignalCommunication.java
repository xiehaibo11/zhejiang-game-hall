package com.tkay.expressad.atsignalcommon.mraid;

import com.tkay.expressad.foundation.d.c;

public interface IMraidSignalCommunication {
    void close();

    void expand(String str, boolean z);

    c getMraidCampaign();

    void open(String str);

    void unload();

    void useCustomClose(boolean z);
}
