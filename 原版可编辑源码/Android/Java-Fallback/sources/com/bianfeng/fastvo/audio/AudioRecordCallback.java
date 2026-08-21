package com.bianfeng.fastvo.audio;

public interface AudioRecordCallback extends com.bianfeng.fastvo.ErrorCode {
    void onRecordCancel();

    void onRecordFail(int r1, java.lang.String r2);

    void onRecordSuccess(java.lang.String r1);
}
