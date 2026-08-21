package com.bianfeng.fastvo.audio;

public interface Recorder extends com.bianfeng.fastvo.ErrorCode {
    void cancel();

    boolean isRecording();

    void release();

    void start(com.bianfeng.fastvo.audio.AudioRecordCallback r1);
}
