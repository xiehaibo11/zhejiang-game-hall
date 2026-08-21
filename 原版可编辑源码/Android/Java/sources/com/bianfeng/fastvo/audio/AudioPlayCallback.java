package com.bianfeng.fastvo.audio;

import com.bianfeng.fastvo.ErrorCode;

public interface AudioPlayCallback extends ErrorCode {
    void onPlayComplete();

    void onPlayFail(int i, String str);
}
