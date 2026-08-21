package com.bianfeng.fastvo.audio.spx;

import com.bianfeng.fastvo.audio.AudioPlayCallback;
import com.bianfeng.fastvo.audio.Player;
import com.bianfeng.fastvo.util.LogUtil;
import java.io.File;

public class SpeexPlayer implements Player {
    AudioPlayCallback callback;
    boolean isPlay;
    SpeexDecoder speexdec;
    Thread th;

    public SpeexPlayer(String str) {
        try {
            this.speexdec = new SpeexDecoder(new File(str));
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    class RecordPlayThread extends Thread {
        RecordPlayThread() {
        }

        @Override
        public void run() {
            try {
                if (SpeexPlayer.this.speexdec != null) {
                    LogUtil.d("start decode");
                    SpeexPlayer.this.speexdec.decode();
                    LogUtil.d("finish decode");
                    SpeexPlayer.this.callback.onPlayComplete();
                    SpeexPlayer.this.isPlay = false;
                } else {
                    SpeexPlayer.this.callback.onPlayFail(-6, "speex decoder is null");
                    SpeexPlayer.this.isPlay = false;
                }
            } catch (Exception e) {
                e.printStackTrace();
                SpeexPlayer.this.callback.onPlayFail(2, e.getMessage());
                SpeexPlayer.this.isPlay = false;
            }
        }
    }

    @Override
    public boolean isPlaying() {
        return this.isPlay;
    }

    @Override
    public void play(AudioPlayCallback audioPlayCallback) {
        this.callback = audioPlayCallback;
        this.isPlay = true;
        Thread thread = new Thread(new RecordPlayThread());
        this.th = thread;
        thread.start();
    }

    @Override
    public void release() {
        this.th.interrupt();
        this.isPlay = false;
    }
}
