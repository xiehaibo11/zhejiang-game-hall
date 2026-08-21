package com.bianfeng.fastvo.audio;

public interface AudioPlayCallback extends com.bianfeng.fastvo.ErrorCode {
    void onPlayComplete();

    void onPlayFail(int r1, java.lang.String r2);
}
