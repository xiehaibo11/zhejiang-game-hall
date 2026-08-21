package com.bianfeng.fastvo.audio;

public interface Player extends com.bianfeng.fastvo.ErrorCode {
    boolean isPlaying();

    void play(com.bianfeng.fastvo.audio.AudioPlayCallback r1);

    void release();
}
