package com.bianfeng.fastvo.audio;

import com.bianfeng.fastvo.ErrorCode;

/* JADX INFO: loaded from: classes.dex */
public interface Recorder extends ErrorCode {
    void cancel();

    boolean isRecording();

    void release();

    void start(AudioRecordCallback audioRecordCallback);
}
