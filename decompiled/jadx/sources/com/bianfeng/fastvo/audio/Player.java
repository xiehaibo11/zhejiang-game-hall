package com.bianfeng.fastvo.audio;

import com.bianfeng.fastvo.ErrorCode;

/* JADX INFO: loaded from: classes.dex */
public interface Player extends ErrorCode {
    boolean isPlaying();

    void play(AudioPlayCallback audioPlayCallback);

    void release();
}
