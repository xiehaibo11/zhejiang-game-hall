package com.bianfeng.fastvo.audio;

import com.bianfeng.fastvo.ErrorCode;

public interface Recorder extends ErrorCode {
    void cancel();

    boolean isRecording();

    void release();

    void start(AudioRecordCallback audioRecordCallback);
}
