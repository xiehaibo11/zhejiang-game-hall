package com.tkay.expressad.atsignalcommon.mraid;

public interface IMraidSignalCommunication {
    void close();

    void expand(java.lang.String r1, boolean r2);

    com.tkay.expressad.foundation.d.c getMraidCampaign();

    void open(java.lang.String r1);

    void unload();

    void useCustomClose(boolean r1);
}
